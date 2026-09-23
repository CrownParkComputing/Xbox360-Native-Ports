#include "hydrothunder_funcs.111.h"

DEFINE_REX_FUNC(sub_821260F8) {
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
	// li r3,84
	ctx.r3.s64 = 84;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822f6280
	ctx.lr = 0x8212611C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8212612c
	if (ctx.cr0.eq) goto loc_8212612C;
	// bl 0x821614b8
	ctx.lr = 0x82126128;
	sub_821614B8(ctx, base);
	// b 0x82126130
	goto loc_82126130;
loc_8212612C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82126130:
	// stw r3,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82161700
	ctx.lr = 0x8212613C;
	sub_82161700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

DEFINE_REX_FUNC(sub_82129E28) {
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
	ctx.lr = 0x82129E30;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x8212a0a8
	ctx.lr = 0x82129E40;
	sub_8212A0A8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// addi r27,r11,-24432
	r27.s64 = ctx.r11.s64 + -24432;
loc_82129E50:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82129e68
	if (!ctx.cr6.eq) goto loc_82129E68;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82129e6c
	goto loc_82129E6C;
loc_82129E68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82129E6C:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82129ed0
	if (!ctx.cr6.lt) goto loc_82129ED0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f530
	ctx.lr = 0x82129E80;
	sub_8215F530(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82129E90;
	sub_8215F2D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f418
	ctx.lr = 0x82129E9C;
	sub_8215F418(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82129eb4
	if (ctx.cr0.eq) goto loc_82129EB4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x82129EB0;
	sub_8215F338(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82129EB4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8212a628
	ctx.lr = 0x82129EC0;
	sub_8212A628(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215efb0
	ctx.lr = 0x82129EC8;
	sub_8215EFB0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x82129e50
	goto loc_82129E50;
loc_82129ED0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8212F1C8) {
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
	ctx.lr = 0x8212F1D0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82135df8
	ctx.lr = 0x8212F1DC;
	sub_82135DF8(ctx, base);
	// addi r22,r31,160
	r22.s64 = r31.s64 + 160;
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8212F1F0;
	sub_826A1E70(ctx, base);
	// li r19,0
	r19.s64 = 0;
	// addi r20,r31,132
	r20.s64 = r31.s64 + 132;
	// std r19,160(r31)
	REX_STORE_U64(r31.u32 + 160, r19.u64);
	// mr r18,r19
	r18.u64 = r19.u64;
	// std r19,168(r31)
	REX_STORE_U64(r31.u32 + 168, r19.u64);
	// mr r28,r19
	r28.u64 = r19.u64;
	// std r19,176(r31)
	REX_STORE_U64(r31.u32 + 176, r19.u64);
	// std r19,184(r31)
	REX_STORE_U64(r31.u32 + 184, r19.u64);
	// std r19,192(r31)
	REX_STORE_U64(r31.u32 + 192, r19.u64);
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r21,r10
	r21.s64 = ctx.r10.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8212f468
	if (ctx.cr6.eq) goto loc_8212F468;
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r17,2
	r17.s64 = 2;
	// lis r23,-32106
	r23.s64 = -2104098816;
	// addi r16,r9,-16104
	r16.s64 = ctx.r9.s64 + -16104;
	// addi r15,r10,-25252
	r15.s64 = ctx.r10.s64 + -25252;
	// addi r14,r11,-25320
	r14.s64 = ctx.r11.s64 + -25320;
loc_8212F250:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r30,0(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r29,r11,r31
	r29.u64 = ctx.r11.u64 + r31.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8212f274
	if (ctx.cr6.lt) goto loc_8212F274;
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 72);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212f284
	if (ctx.cr6.lt) goto loc_8212F284;
loc_8212F274:
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x8212F284;
	sub_821231D0(ctx, base);
loc_8212F284:
	// lwz r10,68(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 68);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// beq cr6,0x8212f2c4
	if (ctx.cr6.eq) goto loc_8212F2C4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212f2c0
	if (ctx.cr6.eq) goto loc_8212F2C0;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// lwz r5,16(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 16);
	// bl 0x8212f470
	ctx.lr = 0x8212F2C0;
	sub_8212F470(ctx, base);
loc_8212F2C0:
	// lwz r18,16(r29)
	r18.u64 = REX_LOAD_U32(r29.u32 + 16);
loc_8212F2C4:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// beq cr6,0x8212f3b8
	if (ctx.cr6.eq) goto loc_8212F3B8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212f3b4
	if (ctx.cr6.eq) goto loc_8212F3B4;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// mr r27,r19
	r27.u64 = r19.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r24,r19
	r24.u64 = r19.u64;
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
	// mr r26,r19
	r26.u64 = r19.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8212f310
	if (ctx.cr6.eq) goto loc_8212F310;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r27,4(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r24,8(r28)
	r24.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r26,12(r28)
	r26.u64 = REX_LOAD_U32(r28.u32 + 12);
loc_8212F310:
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r25,8(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// lwz r28,12(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// beq cr6,0x8212f348
	if (ctx.cr6.eq) goto loc_8212F348;
	// lwz r3,6092(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212F33C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
loc_8212F348:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// bne cr6,0x8212f358
	if (!ctx.cr6.eq) goto loc_8212F358;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(r28.s32, r26.s32, ctx.xer);
	// beq cr6,0x8212f388
	if (ctx.cr6.eq) goto loc_8212F388;
loc_8212F358:
	// lwz r3,6092(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 6092);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212F37C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r11.u32);
loc_8212F388:
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(r25.u32, r24.u32, ctx.xer);
	// beq cr6,0x8212f3b4
	if (ctx.cr6.eq) goto loc_8212F3B4;
	// lwz r3,6092(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 6092);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212F3A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
loc_8212F3B4:
	// lwz r28,20(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 20);
loc_8212F3B8:
	// lhz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 24);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8212f420
	if (ctx.cr6.eq) goto loc_8212F420;
	// lwz r3,6092(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 6092);
	// clrlwi r17,r11,16
	r17.u64 = ctx.r11.u32 & 0xFFFF;
	// mulli r11,r17,12
	ctx.r11.s64 = static_cast<int64_t>(r17.u64 * static_cast<uint64_t>(12));
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbzx r4,r11,r16
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + r16.u32);
	// lwz r10,192(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 192);
	// add r30,r11,r16
	r30.u64 = ctx.r11.u64 + r16.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212F3EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 6092);
	// lbz r4,1(r30)
	ctx.r4.u64 = REX_LOAD_U8(r30.u32 + 1);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212F404;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 6092);
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,196(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212F420;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212F420:
	// ld r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U64(r29.u32 + 0);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// std r10,112(r31)
	REX_STORE_U64(r31.u32 + 112, ctx.r10.u64);
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212F44C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 0);
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8212f250
	if (!ctx.cr6.eq) goto loc_8212F250;
loc_8212F468:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82146578) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8269d1b8
	ctx.lr = 0x8214659C;
	sub_8269D1B8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-14572
	ctx.r11.s64 = ctx.r11.s64 + -14572;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x821465b8
	if (ctx.cr0.eq) goto loc_821465B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821465B8;
	sub_8269CE98(ctx, base);
loc_821465B8:
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

DEFINE_REX_FUNC(sub_82148990) {
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
	ctx.lr = 0x82148998;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,240(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 240);
	// lwz r10,240(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 240);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 & ctx.r9.u64;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// and r28,r11,r8
	r28.u64 = ctx.r11.u64 & ctx.r8.u64;
	// beq cr6,0x821489fc
	if (ctx.cr6.eq) goto loc_821489FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821489FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821489FC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82148a24
	if (ctx.cr6.eq) goto loc_82148A24;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82148A24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82148A24:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8214D2D0) {
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
	ctx.lr = 0x8214D2D8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r28,r4,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r12,-14
	ctx.r12.s64 = -14;
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// rldicr r31,r10,49,14
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 49) & 0xFFFE000000000000;
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// rldicr r12,r12,50,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 50) & 0xFFFFFFFFFFFFFFFF;
	// li r4,8
	ctx.r4.s64 = 8;
	// ld r10,104(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 104);
	// lwz r27,48(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lwz r26,52(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r25,64(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// or r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 | r31.u64;
	// std r11,104(r3)
	REX_STORE_U64(ctx.r3.u32 + 104, ctx.r11.u64);
	// bl 0x8212dd28
	ctx.lr = 0x8214D328;
	sub_8212DD28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r10,21264
	ctx.r6.s64 = ctx.r10.s64 + 21264;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
	// bl 0x8212dc68
	ctx.lr = 0x8214D34C;
	sub_8212DC68(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// bl 0x8212dd28
	ctx.lr = 0x8214D358;
	sub_8212DD28(ctx, base);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,21232
	ctx.r6.s64 = ctx.r11.s64 + 21232;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x8212dc68
	ctx.lr = 0x8214D374;
	sub_8212DC68(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lbz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// lwz r30,52(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x8212dd28
	ctx.lr = 0x8214D3AC;
	sub_8212DD28(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r10,6060(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// li r12,-14
	ctx.r12.s64 = -14;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// rldicr r12,r12,50,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 50) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// lwz r29,4(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// lwz r28,8(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// addi r7,r7,15984
	ctx.r7.s64 = ctx.r7.s64 + 15984;
	// li r4,12
	ctx.r4.s64 = 12;
	// lfs f1,15048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
	// stw r28,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r28.u32);
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// ld r11,104(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 104);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | r31.u64;
	// std r11,104(r10)
	REX_STORE_U64(ctx.r10.u32 + 104, ctx.r11.u64);
	// lwz r5,16(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 16);
	// bl 0x82139b18
	ctx.lr = 0x8214D41C;
	sub_82139B18(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82156980) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x823ed278
	sub_823ED278(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82156DB0) {
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
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82156DD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82156df0
	if (!ctx.cr0.eq) goto loc_82156DF0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4728(r31)
	REX_STORE_U32(r31.u32 + 4728, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// b 0x82156e70
	goto loc_82156E70;
loc_82156DF0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82156e14
	if (ctx.cr6.eq) goto loc_82156E14;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-8396
	ctx.r4.s64 = ctx.r11.s64 + -8396;
	// addi r3,r10,-8188
	ctx.r3.s64 = ctx.r10.s64 + -8188;
	// li r5,375
	ctx.r5.s64 = 375;
	// bl 0x821231d0
	ctx.lr = 0x82156E14;
	sub_821231D0(ctx, base);
loc_82156E14:
	// lbz r11,4724(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4724);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82156e58
	if (ctx.cr0.eq) goto loc_82156E58;
	// lwz r3,4728(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4728);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82156e70
	if (ctx.cr6.eq) goto loc_82156E70;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82156e70
	if (ctx.cr6.eq) goto loc_82156E70;
	// addi r4,r31,4664
	ctx.r4.s64 = r31.s64 + 4664;
	// bl 0x8264e168
	ctx.lr = 0x82156E3C;
	sub_8264E168(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x82156e4c
	if (!ctx.cr6.eq) goto loc_82156E4C;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82156E4C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4856(r31)
	REX_STORE_U32(r31.u32 + 4856, ctx.r11.u32);
	// b 0x82156e70
	goto loc_82156E70;
loc_82156E58:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,4728(r31)
	REX_STORE_U32(r31.u32 + 4728, ctx.r10.u32);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
loc_82156E70:
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

DEFINE_REX_FUNC(sub_8215C6D8) {
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
	// bl 0x8215c728
	ctx.lr = 0x8215C6F8;
	sub_8215C728(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215c708
	if (ctx.cr0.eq) goto loc_8215C708;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8215C708;
	sub_8269CE98(ctx, base);
loc_8215C708:
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

DEFINE_REX_FUNC(sub_8215E8E8) {
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
	ctx.lr = 0x8215E8F0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r24,1
	r24.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r25,r5,16
	r25.s64 = ctx.r5.s64 + 16;
	// lwz r29,4(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r28,r24
	r28.u64 = r24.u64;
	// b 0x8215e93c
	goto loc_8215E93C;
loc_8215E918:
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// bl 0x82120780
	ctx.lr = 0x8215E928;
	sub_82120780(ctx, base);
	// rlwinm. r28,r3,1,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8215e938
	if (ctx.cr0.eq) goto loc_8215E938;
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x8215e93c
	goto loc_8215E93C;
loc_8215E938:
	// lwz r29,8(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 8);
loc_8215E93C:
	// lbz r11,65(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 65);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215e918
	if (ctx.cr0.eq) goto loc_8215E918;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r29,r30
	r29.u64 = r30.u64;
	// beq 0x8215e99c
	if (ctx.cr0.eq) goto loc_8215E99C;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8215e994
	if (!ctx.cr6.eq) goto loc_8215E994;
	// li r5,1
	ctx.r5.s64 = 1;
loc_8215E970:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// bl 0x8215e9f8
	ctx.lr = 0x8215E980;
	sub_8215E9F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r24,4(r31)
	REX_STORE_U8(r31.u32 + 4, r24.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8215e9e8
	goto loc_8215E9E8;
loc_8215E994:
	// bl 0x8212bae8
	ctx.lr = 0x8215E998;
	sub_8212BAE8(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8215E99C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// bl 0x82120780
	ctx.lr = 0x8215E9A8;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8215e9bc
	if (!ctx.cr0.lt) goto loc_8215E9BC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x8215e970
	goto loc_8215E970;
loc_8215E9BC:
	// addi r3,r25,32
	ctx.r3.s64 = r25.s64 + 32;
	// bl 0x8215f0f0
	ctx.lr = 0x8215E9C4;
	sub_8215F0F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8215E9D4;
	sub_82120AC0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8215E9DC;
	sub_8269CE98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
loc_8215E9E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821686E0) {
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
	ctx.lr = 0x821686E8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,88(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r29,r3,84
	r29.s64 = ctx.r3.s64 + 84;
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8216872c
	goto loc_8216872C;
loc_82168708:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x82168714;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82168724
	if (!ctx.cr0.lt) goto loc_82168724;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x8216872c
	goto loc_8216872C;
loc_82168724:
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8216872C:
	// lbz r11,165(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 165);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82168708
	if (ctx.cr0.eq) goto loc_82168708;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82168764
	if (ctx.cr6.eq) goto loc_82168764;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x82168754;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82168764
	if (ctx.cr0.lt) goto loc_82168764;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x82168770
	goto loc_82168770;
loc_82168764:
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82168770:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,88(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 88);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82168798
	if (ctx.cr6.eq) goto loc_82168798;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82168790;
	sub_826A1E70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8216879c
	goto loc_8216879C;
loc_82168798:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8216879C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8216D7F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8216D7F8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r3,52
	r29.s64 = ctx.r3.s64 + 52;
	// li r30,2
	r30.s64 = 2;
loc_8216D808:
	// lwzu r3,4(r29)
	ea = 4 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// bl 0x821357c8
	ctx.lr = 0x8216D810;
	sub_821357C8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8216d808
	if (!ctx.cr0.eq) goto loc_8216D808;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// bl 0x8269d6a0
	ctx.lr = 0x8216D820;
	sub_8269D6A0(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// bl 0x8269d6a0
	ctx.lr = 0x8216D828;
	sub_8269D6A0(ctx, base);
	// lwz r30,76(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8269d770
	ctx.lr = 0x8216D838;
	sub_8269D770(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8269d770
	ctx.lr = 0x8216D840;
	sub_8269D770(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269d770
	ctx.lr = 0x8216D848;
	sub_8269D770(ctx, base);
	// lwz r30,80(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8269d770
	ctx.lr = 0x8216D854;
	sub_8269D770(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269d770
	ctx.lr = 0x8216D85C;
	sub_8269D770(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x8269d6a0
	ctx.lr = 0x8216D864;
	sub_8269D6A0(ctx, base);
	// li r30,0
	r30.s64 = 0;
loc_8216D868:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x8269d6a0
	ctx.lr = 0x8216D874;
	sub_8269D6A0(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(r30.s32, 32, ctx.xer);
	// blt cr6,0x8216d868
	if (ctx.cr6.lt) goto loc_8216D868;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// bl 0x8269d6a0
	ctx.lr = 0x8216D888;
	sub_8269D6A0(ctx, base);
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
	ctx.lr = 0x8216D8A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6052(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6052);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216D8C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8216D8C8;
	sub_8269CE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82174318) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1ca8
	ctx.lr = 0x82174320;
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82174548
	if (ctx.cr6.eq) goto loc_82174548;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82174548
	if (!ctx.cr6.gt) goto loc_82174548;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// lwz r3,6096(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// bl 0x82135fb8
	ctx.lr = 0x82174370;
	sub_82135FB8(ctx, base);
	// lfs f10,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm. r11,r29,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f8,48(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f7,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f6,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f13,f7
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// beq 0x82174480
	if (ctx.cr0.eq) goto loc_82174480;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821743EC;
	sub_826A1E70(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// lwz r3,6096(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6096);
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
	// stw r29,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r29.u32);
	// bl 0x821360c8
	ctx.lr = 0x82174420;
	sub_821360C8(ctx, base);
	// stfs f1,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,20(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 20);
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// std r11,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r11.u64);
	// lwz r4,1896(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 1896);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82174450;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,1892(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1892);
	// lwz r11,156(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217446C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82174950
	ctx.lr = 0x8217447C;
	sub_82174950(ctx, base);
	// b 0x82174548
	goto loc_82174548;
loc_82174480:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82174484:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82174484
	if (!ctx.cr6.eq) goto loc_82174484;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// lis r27,-32106
	r27.s64 = -2104098816;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r11,81
	ctx.r4.s64 = ctx.r11.s64 + 81;
	// lwz r3,6060(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6060);
	// bl 0x8212dd28
	ctx.lr = 0x821744B0;
	sub_8212DD28(ctx, base);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x826a1e70
	ctx.lr = 0x821744C8;
	sub_826A1E70(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r29,60(r31)
	REX_STORE_U32(r31.u32 + 60, r29.u32);
	// lwz r3,6096(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// stw r8,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r8.u32);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// bl 0x821360c8
	ctx.lr = 0x821744F8;
	sub_821360C8(ctx, base);
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// addi r11,r31,80
	ctx.r11.s64 = r31.s64 + 80;
	// stfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// std r9,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r9.u64);
loc_82174514:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x82174514
	if (!ctx.cr0.eq) goto loc_82174514;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lwz r3,6060(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6060);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,20(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 20);
	// addi r7,r11,18744
	ctx.r7.s64 = ctx.r11.s64 + 18744;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82139a08
	ctx.lr = 0x82174548;
	sub_82139A08(ctx, base);
loc_82174548:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821886A8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c8c
	ctx.lr = 0x821886B0;
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r6,r11,32
	ctx.r6.s64 = ctx.r11.s64 + 32;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82188a30
	if (!ctx.cr6.gt) goto loc_82188A30;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r22,r11,16592
	r22.s64 = ctx.r11.s64 + 16592;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r30,r3,228
	r30.s64 = ctx.r3.s64 + 228;
	// lfs f11,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f11.f64 = double(temp.f32);
	// addi r29,r3,212
	r29.s64 = ctx.r3.s64 + 212;
	// lfs f4,1012(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 1012);
	ctx.f4.f64 = double(temp.f32);
	// addi r28,r3,260
	r28.s64 = ctx.r3.s64 + 260;
	// lfs f7,292(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 292);
	ctx.f7.f64 = double(temp.f32);
	// addi r27,r3,224
	r27.s64 = ctx.r3.s64 + 224;
	// lfs f13,288(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// addi r26,r3,208
	r26.s64 = ctx.r3.s64 + 208;
	// lfs f10,180(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// addi r25,r3,256
	r25.s64 = ctx.r3.s64 + 256;
	// lfs f0,12(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r4,96
	ctx.r5.s64 = ctx.r4.s64 + 96;
	// lfs f5,4(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// addi r24,r11,-27152
	r24.s64 = ctx.r11.s64 + -27152;
	// addi r23,r10,-27136
	r23.s64 = ctx.r10.s64 + -27136;
loc_82188724:
	// lfs f12,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f9,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f8,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f3,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// lfs f1,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f9,f6,f8,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, ctx.f8.f64, ctx.f9.f64)));
	// fmadds f12,f3,f8,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f3.f64, ctx.f8.f64, ctx.f12.f64)));
	// fadds f8,f9,f2
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// fadds f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// fabs f6,f8
	ctx.f6.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fsubs f9,f12,f6
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fcmpu cr6,f9,f11
	ctx.cr6.compare(ctx.f9.f64, ctx.f11.f64);
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
	// lfsx f9,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsel f9,f9,f12,f6
	ctx.f9.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f6.f64;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x82188a0c
	if (!ctx.cr6.lt) goto loc_82188A0C;
	// lfs f9,128(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f3,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f3.f64 = double(temp.f32);
	// addi r22,r1,-176
	r22.s64 = ctx.r1.s64 + -176;
	// fmuls f3,f9,f3
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// lfs f2,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// stfs f0,-176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// lvx128 v63,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r21,r1,-196
	r21.s64 = ctx.r1.s64 + -196;
	// addi r20,r11,256
	r20.s64 = ctx.r11.s64 + 256;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// addi r19,r1,-208
	r19.s64 = ctx.r1.s64 + -208;
	// addi r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 + 112;
	// addi r9,r3,108
	ctx.r9.s64 = ctx.r3.s64 + 108;
	// addi r11,r3,124
	ctx.r11.s64 = ctx.r3.s64 + 124;
	// fmsubs f8,f2,f8,f3
	ctx.f8.f64 = double(float(std::fma(ctx.f2.f64, ctx.f8.f64, -ctx.f3.f64)));
	// fmadds f8,f8,f10,f13
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f13.f64)));
	// fabs f3,f8
	ctx.f3.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fcmpu cr6,f8,f11
	ctx.cr6.compare(ctx.f8.f64, ctx.f11.f64);
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
	// fmuls f8,f3,f7
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// rlwinm r17,r18,27,29,29
	r17.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 27) & 0x4;
	// rlwinm r18,r18,30,29,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 30) & 0x4;
	// or r18,r17,r18
	r18.u64 = r17.u64 | r18.u64;
	// lfsx f2,r20,r18
	temp.u32 = REX_LOAD_U32(r20.u32 + r18.u32);
	ctx.f2.f64 = double(temp.f32);
	// fctidz f8,f8
	ctx.f8.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fnmsubs f8,f8,f10,f3
	ctx.f8.f64 = double(float(-std::fma(ctx.f8.f64, ctx.f10.f64, -ctx.f3.f64)));
	// fsubs f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fneg f3,f8
	ctx.f3.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f8,f2,f8,f3
	ctx.f8.f64 = ctx.f2.f64 >= 0.0 ? ctx.f8.f64 : ctx.f3.f64;
	// stfs f8,-172(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// fmuls f3,f8,f8
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// stfs f3,-168(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// fmuls f8,f3,f8
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// stfs f8,-164(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// lvx128 v62,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v61,v62,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vspltw128 v62,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// vmsum4fp128 v60,v61,v63
	simde_mm_store_ps(ctx.v60.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmulfp128 v61,v61,v62
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvewx128 v60,r0,r21
	ea = (r21.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v62,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v61,v61,v62
	simde_mm_store_ps(ctx.v61.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// stvewx128 v61,r0,r19
	ea = (r19.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f8,108(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// lfs f2,-208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,124(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f12,f3
	ctx.cr6.compare(ctx.f12.f64, ctx.f3.f64);
	// fmuls f8,f8,f2
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// ble cr6,0x82188918
	if (!ctx.cr6.gt) goto loc_82188918;
	// lfs f9,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// addi r22,r1,-160
	r22.s64 = ctx.r1.s64 + -160;
	// fsubs f3,f0,f9
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// stfs f0,-160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// addi r21,r1,-204
	r21.s64 = ctx.r1.s64 + -204;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// addi r20,r1,-192
	r20.s64 = ctx.r1.s64 + -192;
	// fdivs f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f3.f64));
	// fmadds f12,f12,f13,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f13.f64)));
	// fabs f9,f12
	ctx.f9.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// mfcr r19
	r19.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r19.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r19.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r19.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r19.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r19.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r19.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r19.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r19.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r19.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r19.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r19.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r19.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r19.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r19.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r19.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r19.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r19.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r19.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r19.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r19.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r19.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r19.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r19.u64 |= ctx.cr5.so ? 0x100 : 0;
	r19.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r19.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r19.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r19.u64 |= ctx.cr6.so ? 0x10 : 0;
	r19.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r19.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r19.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r19.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fmuls f12,f9,f7
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// rlwinm r18,r19,27,29,29
	r18.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 27) & 0x4;
	// rlwinm r19,r19,30,29,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x4;
	// or r19,r18,r19
	r19.u64 = r18.u64 | r19.u64;
	// lfsx f3,r11,r19
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r19.u32);
	ctx.f3.f64 = double(temp.f32);
	// fctidz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fnmsubs f12,f12,f10,f9
	ctx.f12.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f9.f64)));
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fneg f9,f12
	ctx.f9.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f12,f3,f12,f9
	ctx.f12.f64 = ctx.f3.f64 >= 0.0 ? ctx.f12.f64 : ctx.f9.f64;
	// stfs f12,-156(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// fmuls f9,f12,f12
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// stfs f9,-152(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f12,-148(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -148, temp.u32);
	// lvx128 v61,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v60,v61,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vspltw128 v61,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// vmsum4fp128 v59,v60,v63
	simde_mm_store_ps(ctx.v59.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmulfp128 v61,v60,v61
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v61.f32)));
	// stvewx128 v59,r0,r21
	ea = (r21.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// vmsum4fp128 v61,v61,v62
	simde_mm_store_ps(ctx.v61.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// stvewx128 v61,r0,r20
	ea = (r20.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,-204(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -204);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f9,f12,f5
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
loc_82188918:
	// lfs f3,120(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f8,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fcmpu cr6,f6,f3
	ctx.cr6.compare(ctx.f6.f64, ctx.f3.f64);
	// ble cr6,0x821889d8
	if (!ctx.cr6.gt) goto loc_821889D8;
	// fmr f12,f3
	ctx.f12.f64 = ctx.f3.f64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fsubs f3,f0,f3
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// stfs f0,-144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r22,r1,-144
	r22.s64 = ctx.r1.s64 + -144;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// addi r21,r1,-200
	r21.s64 = ctx.r1.s64 + -200;
	// addi r20,r1,-192
	r20.s64 = ctx.r1.s64 + -192;
	// fsubs f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fdivs f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f3.f64));
	// fmadds f12,f12,f13,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f13.f64)));
	// fabs f6,f12
	ctx.f6.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// mfcr r19
	r19.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r19.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r19.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r19.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r19.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r19.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r19.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r19.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r19.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r19.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r19.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r19.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r19.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r19.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r19.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r19.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r19.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r19.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r19.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r19.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r19.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r19.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r19.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r19.u64 |= ctx.cr5.so ? 0x100 : 0;
	r19.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r19.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r19.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r19.u64 |= ctx.cr6.so ? 0x10 : 0;
	r19.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r19.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r19.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r19.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fmuls f12,f6,f7
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// rlwinm r18,r19,27,29,29
	r18.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 27) & 0x4;
	// rlwinm r19,r19,30,29,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x4;
	// or r19,r18,r19
	r19.u64 = r18.u64 | r19.u64;
	// lfsx f3,r11,r19
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r19.u32);
	ctx.f3.f64 = double(temp.f32);
	// fctidz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fnmsubs f12,f12,f10,f6
	ctx.f12.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f6.f64)));
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fneg f6,f12
	ctx.f6.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f12,f3,f12,f6
	ctx.f12.f64 = ctx.f3.f64 >= 0.0 ? ctx.f12.f64 : ctx.f6.f64;
	// stfs f12,-140(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// fmuls f6,f12,f12
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// stfs f6,-136(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// fmuls f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f12,-132(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// lvx128 v61,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v60,v61,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vspltw128 v61,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// vmsum4fp128 v63,v60,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmulfp128 v61,v60,v61
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v61.f32)));
	// stvewx128 v63,r0,r21
	ea = (r21.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// vmsum4fp128 v63,v61,v62
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// stvewx128 v63,r0,r20
	ea = (r20.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,-200(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -200);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
loc_821889D8:
	// lfs f6,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f8,f12,f8,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f8.f64, ctx.f6.f64)));
	// stfs f8,0(r6)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f8,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fmuls f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// lfs f6,-196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -196);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmadds f12,f9,f12,f3
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f3.f64)));
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 8, temp.u32);
loc_82188A0C:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82188724
	if (ctx.cr6.lt) goto loc_82188724;
loc_82188A30:
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_821B1570) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15168
	ctx.r3.s64 = ctx.r11.s64 + -15168;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B1EF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821B1EF8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821B1F10:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821b1f10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B1F10;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
	// lfs f13,124(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// li r3,144
	ctx.r3.s64 = 144;
	// lfs f12,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// ld r8,64(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// lfs f10,88(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// ld r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// lfs f9,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// lwz r29,6168(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 6168);
	// std r8,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B1F74;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b1f8c
	if (ctx.cr0.eq) goto loc_821B1F8C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8218fee8
	ctx.lr = 0x821B1F84;
	sub_8218FEE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x821b1f90
	goto loc_821B1F90;
loc_821B1F8C:
	// li r30,0
	r30.s64 = 0;
loc_821B1F90:
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
	ctx.lr = 0x821B1FAC;
	sub_8214ABD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82149e08
	ctx.lr = 0x821B1FB8;
	sub_82149E08(ctx, base);
	// stw r30,140(r31)
	REX_STORE_U32(r31.u32 + 140, r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821B86A8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15064
	ctx.r3.s64 = ctx.r11.s64 + -15064;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B8D08) {
	REX_FUNC_PROLOGUE();
	// b 0x821b8f18
	sub_821B8F18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B8E60) {
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
	// lwz r3,156(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// bl 0x821357c8
	ctx.lr = 0x821B8E7C;
	sub_821357C8(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821b8ea4
	if (ctx.cr6.eq) goto loc_821B8EA4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,-20268
	ctx.r4.s64 = ctx.r11.s64 + -20268;
	// addi r3,r10,-20216
	ctx.r3.s64 = ctx.r10.s64 + -20216;
	// li r5,124
	ctx.r5.s64 = 124;
	// bl 0x821231d0
	ctx.lr = 0x821B8EA4;
	sub_821231D0(ctx, base);
loc_821B8EA4:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,156(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r3,6168(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6168);
	// bl 0x82149af0
	ctx.lr = 0x821B8EB4;
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

DEFINE_REX_FUNC(sub_821BC330) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x821BC34C;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x821BC358;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r10,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BC380;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821BC390;
	sub_82120AC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821bc3bc
	if (!ctx.cr6.eq) goto loc_821BC3BC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,-19556
	ctx.r4.s64 = ctx.r11.s64 + -19556;
	// addi r3,r10,-19284
	ctx.r3.s64 = ctx.r10.s64 + -19284;
	// li r5,39
	ctx.r5.s64 = 39;
	// bl 0x821231d0
	ctx.lr = 0x821BC3B4;
	sub_821231D0(ctx, base);
	// lbz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// b 0x821bc3c0
	goto loc_821BC3C0;
loc_821BC3BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BC3C0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BFA08) {
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
	ctx.lr = 0x821BFA1C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bfa2c
	if (ctx.cr0.eq) goto loc_821BFA2C;
	// bl 0x821bfa40
	ctx.lr = 0x821BFA28;
	sub_821BFA40(ctx, base);
	// b 0x821bfa30
	goto loc_821BFA30;
loc_821BFA2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BFA30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C0E40) {
	REX_FUNC_PROLOGUE();
	// b 0x821c1b40
	sub_821C1B40(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C0EF0) {
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
	// li r3,276
	ctx.r3.s64 = 276;
	// bl 0x822f6280
	ctx.lr = 0x821C0F04;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c0f14
	if (ctx.cr0.eq) goto loc_821C0F14;
	// bl 0x821c0f28
	ctx.lr = 0x821C0F10;
	sub_821C0F28(ctx, base);
	// b 0x821c0f18
	goto loc_821C0F18;
loc_821C0F14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C0F18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C32A0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb4
	ctx.lr = 0x821C32A8;
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r28,r27
	r28.u64 = r27.u64;
	// bl 0x82178268
	ctx.lr = 0x821C32CC;
	sub_82178268(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r31,120
	r29.s64 = r31.s64 + 120;
	// addi r11,r11,-17632
	ctx.r11.s64 = ctx.r11.s64 + -17632;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821C32EC;
	sub_82120AC0(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821C32F4;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821c335c
	if (ctx.cr0.eq) goto loc_821C335C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-28692
	ctx.r4.s64 = ctx.r11.s64 + -28692;
	// bl 0x82120600
	ctx.lr = 0x821C330C;
	sub_82120600(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r28,1
	r28.s64 = 1;
	// lwz r4,-15376(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15376);
	// bl 0x82120600
	ctx.lr = 0x821C3320;
	sub_82120600(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d58c8
	ctx.lr = 0x821C3334;
	sub_821D58C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x821C3344;
	sub_82120AC0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r27,104(r30)
	REX_STORE_U32(r30.u32 + 104, r27.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r10,r10,-17592
	ctx.r10.s64 = ctx.r10.s64 + -17592;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x821c3360
	goto loc_821C3360;
loc_821C335C:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821C3360:
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x821C3374;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c338c
	if (ctx.cr0.eq) goto loc_821C338C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x821C338C;
	sub_82120AC0(ctx, base);
loc_821C338C:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x821C3394;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c33b0
	if (ctx.cr0.eq) goto loc_821C33B0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821912a0
	ctx.lr = 0x821C33A8;
	sub_821912A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c33b4
	goto loc_821C33B4;
loc_821C33B0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_821C33B4:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r29,r31,96
	r29.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x821C33C4;
	sub_821D3988(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,112(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x822f6280
	ctx.lr = 0x821C33D0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c3400
	if (ctx.cr0.eq) goto loc_821C3400;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r9,r9,14232
	ctx.r9.s64 = ctx.r9.s64 + 14232;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x821c3404
	goto loc_821C3404;
loc_821C3400:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821C3404:
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r4,112(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f31,928(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 928);
	f31.f64 = double(temp.f32);
	// lfs f30,1476(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1476);
	f30.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lbz r10,26(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 26);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r11,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r5,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// std r9,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r9.u64);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ld r8,16(r7)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + 16);
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// ld r10,24(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 24);
	// std r11,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// ld r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// std r8,48(r4)
	REX_STORE_U64(ctx.r4.u32 + 48, ctx.r8.u64);
	// std r9,32(r4)
	REX_STORE_U64(ctx.r4.u32 + 32, ctx.r9.u64);
	// std r11,40(r4)
	REX_STORE_U64(ctx.r4.u32 + 40, ctx.r11.u64);
	// std r10,56(r4)
	REX_STORE_U64(ctx.r4.u32 + 56, ctx.r10.u64);
	// beq 0x821c34b0
	if (ctx.cr0.eq) goto loc_821C34B0;
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
	ctx.lr = 0x821C34B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C34B0:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x821C34B8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c34d0
	if (ctx.cr0.eq) goto loc_821C34D0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821c3b58
	ctx.lr = 0x821C34C8;
	sub_821C3B58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c34d4
	goto loc_821C34D4;
loc_821C34D0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_821C34D4:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x821C34E0;
	sub_821D3988(ctx, base);
	// stfs f30,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// ld r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r5,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r9,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// ld r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// ld r9,8(r6)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// ld r8,24(r6)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r6.u32 + 24);
	// std r10,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r10.u64);
	// ld r10,16(r6)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r6.u32 + 16);
	// std r9,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.r9.u64);
	// std r8,56(r11)
	REX_STORE_U64(ctx.r11.u32 + 56, ctx.r8.u64);
	// std r10,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// bl 0x822f6280
	ctx.lr = 0x821C355C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c3588
	if (ctx.cr0.eq) goto loc_821C3588;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,13928
	ctx.r10.s64 = ctx.r10.s64 + 13928;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821c358c
	goto loc_821C358C;
loc_821C3588:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_821C358C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r5,r11,-17776
	ctx.r5.s64 = ctx.r11.s64 + -17776;
	// bl 0x8216be80
	ctx.lr = 0x821C359C;
	sub_8216BE80(ctx, base);
	// stw r27,152(r31)
	REX_STORE_U32(r31.u32 + 152, r27.u32);
	// stw r27,156(r31)
	REX_STORE_U32(r31.u32 + 156, r27.u32);
	// addi r11,r31,152
	ctx.r11.s64 = r31.s64 + 152;
	// stw r27,160(r31)
	REX_STORE_U32(r31.u32 + 160, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r27,164(r31)
	REX_STORE_U32(r31.u32 + 164, r27.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821DBA10) {
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
	ctx.lr = 0x821DBA18;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1820
	ctx.r11.s64 = 119275520;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,29127
	ctx.r11.u64 = ctx.r11.u64 | 29127;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821dba40
	if (!ctx.cr6.gt) goto loc_821DBA40;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26548
	ctx.r3.s64 = ctx.r11.s64 + -26548;
	// bl 0x822f6020
	ctx.lr = 0x821DBA40;
	sub_822F6020(ctx, base);
loc_821DBA40:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r25,36
	r25.s64 = 36;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r11,r11,r25
	ctx.r11.u64 = uint32_t((r25.s32 && !(ctx.r11.s32 == INT32_MIN && r25.s32 == -1)) ? ctx.r11.s32 / r25.s32 : 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bge cr6,0x821dbb20
	if (!ctx.cr6.lt) goto loc_821DBB20;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x821dba78
	if (ctx.cr6.eq) goto loc_821DBA78;
	// mulli r3,r26,36
	ctx.r3.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(36));
	// bl 0x822f6280
	ctx.lr = 0x821DBA70;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821dbb28
	if (ctx.cr0.eq) goto loc_821DBB28;
loc_821DBA78:
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r29,r28
	r29.u64 = r28.u64;
	// lwz r27,4(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x821dbab4
	goto loc_821DBAB4;
loc_821DBA88:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x821dbaac
	if (ctx.cr6.eq) goto loc_821DBAAC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120d70
	ctx.lr = 0x821DBA9C;
	sub_82120D70(ctx, base);
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 28, temp.u32);
	// lfs f0,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 32, temp.u32);
loc_821DBAAC:
	// addi r30,r30,36
	r30.s64 = r30.s64 + 36;
	// addi r29,r29,36
	r29.s64 = r29.s64 + 36;
loc_821DBAB4:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// bne cr6,0x821dba88
	if (!ctx.cr6.eq) goto loc_821DBA88;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subf r10,r11,r30
	ctx.r10.u64 = r30.u64 - ctx.r11.u64;
	// divw r27,r10,r25
	r27.u64 = uint32_t((r25.s32 && !(ctx.r10.s32 == INT32_MIN && r25.s32 == -1)) ? ctx.r10.s32 / r25.s32 : 0);
	// beq cr6,0x821dbb04
	if (ctx.cr6.eq) goto loc_821DBB04;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x821dbafc
	if (ctx.cr6.eq) goto loc_821DBAFC;
loc_821DBAE0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821DBAF0;
	sub_82120AC0(ctx, base);
	// addi r29,r29,36
	r29.s64 = r29.s64 + 36;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// bne cr6,0x821dbae0
	if (!ctx.cr6.eq) goto loc_821DBAE0;
loc_821DBAFC:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x821DBB04;
	sub_8269CE98(ctx, base);
loc_821DBB04:
	// mulli r11,r26,36
	ctx.r11.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(36));
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// mulli r10,r27,36
	ctx.r10.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(36));
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_821DBB20:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_821DBB28:
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
	ctx.lr = 0x821DBB44;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_821E33D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821E33E0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,176
	r30.s64 = ctx.r3.s64 + 176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d5b38
	ctx.lr = 0x821E33F8;
	sub_821D5B38(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x821d5b38
	ctx.lr = 0x821E3404;
	sub_821D5B38(ctx, base);
	// addi r4,r31,60
	ctx.r4.s64 = r31.s64 + 60;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x821d5b38
	ctx.lr = 0x821E3410;
	sub_821D5B38(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// bl 0x821d5b38
	ctx.lr = 0x821E341C;
	sub_821D5B38(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_821E3430:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821e3430
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E3430;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e3454
	if (ctx.cr6.eq) goto loc_821E3454;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821884b0
	ctx.lr = 0x821E3454;
	sub_821884B0(ctx, base);
loc_821E3454:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r29,r11,1072
	r29.s64 = ctx.r11.s64 + 1072;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// bne cr6,0x821e3470
	if (!ctx.cr6.eq) goto loc_821E3470;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_821E3470:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// bl 0x82191578
	ctx.lr = 0x821E347C;
	sub_82191578(ctx, base);
	// lwz r10,172(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e34c0
	if (ctx.cr6.eq) goto loc_821E34C0;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// bne cr6,0x821e349c
	if (!ctx.cr6.eq) goto loc_821E349C;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_821E349C:
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// std r9,32(r10)
	REX_STORE_U64(ctx.r10.u32 + 32, ctx.r9.u64);
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,40(r10)
	REX_STORE_U64(ctx.r10.u32 + 40, ctx.r9.u64);
	// ld r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// std r9,48(r10)
	REX_STORE_U64(ctx.r10.u32 + 48, ctx.r9.u64);
	// ld r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// std r11,56(r10)
	REX_STORE_U64(ctx.r10.u32 + 56, ctx.r11.u64);
loc_821E34C0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821EA168) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ea1c0
	if (ctx.cr6.eq) goto loc_821EA1C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822fbf60
	ctx.lr = 0x821EA19C;
	sub_822FBF60(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x821ea1b8
	if (ctx.cr6.eq) goto loc_821EA1B8;
	// addi r11,r31,-2
	ctx.r11.s64 = r31.s64 + -2;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822fbe60
	ctx.lr = 0x821EA1B8;
	sub_822FBE60(ctx, base);
loc_821EA1B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_821EA1C0:
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

DEFINE_REX_FUNC(sub_821EDB90) {
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
	ctx.lr = 0x821EDB98;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rotlwi r11,r4,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// lwz r9,20(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r29,4(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r7,8(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// divw. r11,r4,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r4.s32 / ctx.r9.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// subf r8,r29,r7
	ctx.r8.u64 = ctx.r7.u64 - r29.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// srawi r25,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	r25.s64 = ctx.r8.s32 >> 4;
	// li r30,0
	r30.s64 = 0;
	// addi r23,r10,15876
	r23.s64 = ctx.r10.s64 + 15876;
	// ble 0x821edef4
	if (!ctx.cr0.gt) goto loc_821EDEF4;
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r22,r11,15916
	r22.s64 = ctx.r11.s64 + 15916;
loc_821EDBEC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x821edeec
	if (!ctx.cr6.gt) goto loc_821EDEEC;
	// add r31,r30,r24
	r31.u64 = r30.u64 + r24.u64;
	// addi r28,r29,4
	r28.s64 = r29.s64 + 4;
	// mr r26,r25
	r26.u64 = r25.u64;
loc_821EDC00:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x821eded0
	if (ctx.cr6.gt) goto loc_821EDED0;
	// lis r12,-32243
	ctx.r12.s64 = -2113077248;
	// addi r12,r12,16312
	ctx.r12.s64 = ctx.r12.s64 + 16312;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// nop 
	// addi r12,r12,-9164
	ctx.r12.s64 = ctx.r12.s64 + -9164;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821EDC34;
	case 1:
		goto loc_821EDC68;
	case 2:
		goto loc_821EDCC8;
	case 3:
		goto loc_821EDD4C;
	case 4:
		goto loc_821EDDF8;
	case 5:
		goto loc_821EDDF8;
	case 6:
		goto loc_821EDE24;
	case 7:
		goto loc_821EDE64;
	case 8:
		goto loc_821EDDF8;
	case 9:
		goto loc_821EDDF8;
	case 10:
		goto loc_821EDE24;
	case 11:
		goto loc_821EDE64;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_821EDC34:
	// lbz r11,3(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 3);
	// lbz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2);
	// lbz r9,1(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 1);
	// lbz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 0);
	// stb r11,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// stb r10,93(r1)
	REX_STORE_U8(ctx.r1.u32 + 93, ctx.r10.u8);
	// stb r9,94(r1)
	REX_STORE_U8(ctx.r1.u32 + 94, ctx.r9.u8);
	// stb r8,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r8.u8);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
loc_821EDC5C:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x821edee0
	goto loc_821EDEE0;
loc_821EDC68:
	// lbz r8,3(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 3);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// lbz r7,2(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 2);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lbz r10,1(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1);
	// lbz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 0);
	// stb r8,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// stb r7,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r7.u8);
	// stb r10,98(r1)
	REX_STORE_U8(ctx.r1.u32 + 98, ctx.r10.u8);
	// stb r9,99(r1)
	REX_STORE_U8(ctx.r1.u32 + 99, ctx.r9.u8);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lbz r10,6(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 6);
	// lbz r9,5(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 5);
	// lbz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 4);
	// lbz r7,7(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 7);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// stb r7,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r7.u8);
	// stb r10,101(r1)
	REX_STORE_U8(ctx.r1.u32 + 101, ctx.r10.u8);
	// stb r9,102(r1)
	REX_STORE_U8(ctx.r1.u32 + 102, ctx.r9.u8);
	// stb r8,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r8.u8);
	// lfs f0,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
loc_821EDCC0:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x821edee0
	goto loc_821EDEE0;
loc_821EDCC8:
	// lbz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2);
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// lbz r9,1(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 1);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// lbz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lbz r7,3(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 3);
	// stb r10,105(r1)
	REX_STORE_U8(ctx.r1.u32 + 105, ctx.r10.u8);
	// stb r9,106(r1)
	REX_STORE_U8(ctx.r1.u32 + 106, ctx.r9.u8);
	// stb r8,107(r1)
	REX_STORE_U8(ctx.r1.u32 + 107, ctx.r8.u8);
	// stb r7,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r7.u8);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lbz r10,7(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 7);
	// stb r10,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r10.u8);
	// lbz r10,6(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 6);
	// stb r10,109(r1)
	REX_STORE_U8(ctx.r1.u32 + 109, ctx.r10.u8);
	// lbz r9,5(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 5);
	// lbz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 4);
	// stb r9,110(r1)
	REX_STORE_U8(ctx.r1.u32 + 110, ctx.r9.u8);
	// stb r8,111(r1)
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r8.u8);
	// lfs f0,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lbz r10,10(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10);
	// lbz r9,9(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 9);
	// lbz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 8);
	// lbz r7,11(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 11);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// stb r7,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r7.u8);
	// stb r10,113(r1)
	REX_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// stb r9,114(r1)
	REX_STORE_U8(ctx.r1.u32 + 114, ctx.r9.u8);
	// stb r8,115(r1)
	REX_STORE_U8(ctx.r1.u32 + 115, ctx.r8.u8);
	// lfs f0,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821edcc0
	goto loc_821EDCC0;
loc_821EDD4C:
	// lbz r11,3(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 3);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// lbz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2);
	// lbz r9,1(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 1);
	// lbz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 0);
	// stb r11,116(r1)
	REX_STORE_U8(ctx.r1.u32 + 116, ctx.r11.u8);
	// stb r10,117(r1)
	REX_STORE_U8(ctx.r1.u32 + 117, ctx.r10.u8);
	// stb r9,118(r1)
	REX_STORE_U8(ctx.r1.u32 + 118, ctx.r9.u8);
	// stb r8,119(r1)
	REX_STORE_U8(ctx.r1.u32 + 119, ctx.r8.u8);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lbz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 6);
	// stb r11,121(r1)
	REX_STORE_U8(ctx.r1.u32 + 121, ctx.r11.u8);
	// lbz r11,5(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 5);
	// lbz r9,7(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 7);
	// stb r9,120(r1)
	REX_STORE_U8(ctx.r1.u32 + 120, ctx.r9.u8);
	// stb r11,122(r1)
	REX_STORE_U8(ctx.r1.u32 + 122, ctx.r11.u8);
	// lbz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 4);
	// stb r10,123(r1)
	REX_STORE_U8(ctx.r1.u32 + 123, ctx.r10.u8);
	// lfs f0,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lbz r11,9(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 9);
	// lbz r10,10(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10);
	// lbz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 8);
	// lbz r9,11(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 11);
	// stb r9,124(r1)
	REX_STORE_U8(ctx.r1.u32 + 124, ctx.r9.u8);
	// stb r11,126(r1)
	REX_STORE_U8(ctx.r1.u32 + 126, ctx.r11.u8);
	// stb r10,125(r1)
	REX_STORE_U8(ctx.r1.u32 + 125, ctx.r10.u8);
	// stb r8,127(r1)
	REX_STORE_U8(ctx.r1.u32 + 127, ctx.r8.u8);
	// lfs f0,124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lbz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 12);
	// lbz r11,13(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 13);
	// lbz r9,15(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 15);
	// stb r9,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r9.u8);
	// lbz r9,14(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 14);
	// stb r9,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r9.u8);
	// stb r11,130(r1)
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r11.u8);
	// stb r10,131(r1)
	REX_STORE_U8(ctx.r1.u32 + 131, ctx.r10.u8);
	// lfs f0,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// b 0x821edee0
	goto loc_821EDEE0;
loc_821EDDF8:
	// lbz r11,3(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 3);
	// lbz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2);
	// lbz r9,1(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 1);
	// lbz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 0);
	// stb r11,132(r1)
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// stb r10,133(r1)
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r10.u8);
	// stb r9,134(r1)
	REX_STORE_U8(ctx.r1.u32 + 134, ctx.r9.u8);
	// stb r8,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, ctx.r8.u8);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x821edc5c
	goto loc_821EDC5C;
loc_821EDE24:
	// lbz r10,1(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1);
	// addi r11,r31,2
	ctx.r11.s64 = r31.s64 + 2;
	// lbz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// sth r10,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r10.u16);
	// lbz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2);
	// lbz r9,3(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 3);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stb r9,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r10,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// b 0x821edee0
	goto loc_821EDEE0;
loc_821EDE64:
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// stb r11,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// stb r10,85(r1)
	REX_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// lhz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
	// lbz r10,3(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 3);
	// stb r11,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// stb r10,86(r1)
	REX_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// lhz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r11.u16);
	// lbz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 4);
	// stb r10,89(r1)
	REX_STORE_U8(ctx.r1.u32 + 89, ctx.r10.u8);
	// lbz r11,5(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 5);
	// stb r11,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// lhz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// sth r11,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r11.u16);
	// lbz r10,7(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 7);
	// lbz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 6);
	// stb r11,91(r1)
	REX_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// stb r10,90(r1)
	REX_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// lhz r11,90(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// sth r11,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r11.u16);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// b 0x821edee0
	goto loc_821EDEE0;
loc_821EDED0:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// li r5,130
	ctx.r5.s64 = 130;
	// bl 0x821231d0
	ctx.lr = 0x821EDEE0;
	sub_821231D0(ctx, base);
loc_821EDEE0:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// bne 0x821edc00
	if (!ctx.cr0.eq) goto loc_821EDC00;
loc_821EDEEC:
	// addic. r21,r21,-1
	ctx.xer.ca = r21.u32 > 0;
	r21.s64 = r21.s64 + -1;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne 0x821edbec
	if (!ctx.cr0.eq) goto loc_821EDBEC;
loc_821EDEF4:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(r30.s32, r27.s32, ctx.xer);
	// beq cr6,0x821edf10
	if (ctx.cr6.eq) goto loc_821EDF10;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r11,15968
	ctx.r3.s64 = ctx.r11.s64 + 15968;
	// li r5,135
	ctx.r5.s64 = 135;
	// bl 0x821231d0
	ctx.lr = 0x821EDF10;
	sub_821231D0(ctx, base);
loc_821EDF10:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8220A608) {
	REX_FUNC_PROLOGUE();
	// li r3,128
	ctx.r3.s64 = 128;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220A720) {
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
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x822f6280
	ctx.lr = 0x8220A738;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8220a75c
	if (ctx.cr0.eq) goto loc_8220A75C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8219bf68
	ctx.lr = 0x8220A748;
	sub_8219BF68(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,32196
	ctx.r11.s64 = ctx.r11.s64 + 32196;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8220a760
	goto loc_8220A760;
loc_8220A75C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220A760:
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

DEFINE_REX_FUNC(sub_8220C578) {
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
	// lis r31,-32106
	r31.s64 = -2104098816;
	// lwz r4,624(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 624);
	// lwz r3,6280(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6280);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C5A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6280);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C5C0;
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

DEFINE_REX_FUNC(sub_8220EEE0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14180
	ctx.r3.s64 = ctx.r11.s64 + -14180;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220F568) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14156
	ctx.r3.s64 = ctx.r11.s64 + -14156;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220F9B8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14140
	ctx.r3.s64 = ctx.r11.s64 + -14140;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220FE50) {
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
	// lwz r3,204(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220fe7c
	if (ctx.cr6.eq) goto loc_8220FE7C;
	// bl 0x8269ce98
	ctx.lr = 0x8220FE7C;
	sub_8269CE98(ctx, base);
loc_8220FE7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
	// bl 0x82120ac0
	ctx.lr = 0x8220FE9C;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x8220FEA4;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220feb4
	if (ctx.cr0.eq) goto loc_8220FEB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8220FEB4;
	sub_8269CE98(ctx, base);
loc_8220FEB4:
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

DEFINE_REX_FUNC(sub_82213D40) {
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
	// addi r11,r11,-28264
	ctx.r11.s64 = ctx.r11.s64 + -28264;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82178388
	ctx.lr = 0x82213D6C;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82213d7c
	if (ctx.cr0.eq) goto loc_82213D7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82213D7C;
	sub_8269CE98(ctx, base);
loc_82213D7C:
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

DEFINE_REX_FUNC(sub_82219598) {
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
	// bl 0x8221be80
	ctx.lr = 0x822195B4;
	sub_8221BE80(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r3,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r3.u8);
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

DEFINE_REX_FUNC(sub_8221BAE8) {
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
	ctx.lr = 0x8221BAF0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,816(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 816);
	// li r27,0
	r27.s64 = 0;
	// lwz r10,820(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 820);
	// lis r26,32767
	r26.s64 = 2147418112;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r31,r3,816
	r31.s64 = ctx.r3.s64 + 816;
	// mr r29,r27
	r29.u64 = r27.u64;
	// ori r26,r26,65535
	r26.u64 = r26.u64 | 65535;
	// rlwinm. r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8221bb84
	if (!ctx.cr0.gt) goto loc_8221BB84;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r27
	r30.u64 = r27.u64;
	// addi r25,r11,-26808
	r25.s64 = ctx.r11.s64 + -26808;
loc_8221BB2C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x8215f670
	ctx.lr = 0x8221BB3C;
	sub_8215F670(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8221bb50
	if (!ctx.cr6.eq) goto loc_8221BB50;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x8221bb54
	goto loc_8221BB54;
loc_8221BB50:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8221BB54:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221bb80
	if (!ctx.cr0.eq) goto loc_8221BB80;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8221bb2c
	if (ctx.cr6.lt) goto loc_8221BB2C;
	// b 0x8221bb84
	goto loc_8221BB84;
loc_8221BB80:
	// mr r26,r29
	r26.u64 = r29.u64;
loc_8221BB84:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r30,r10,-17296
	r30.s64 = ctx.r10.s64 + -17296;
	// addi r31,r28,800
	r31.s64 = r28.s64 + 800;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,6272(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 6272);
	// bl 0x8215f338
	ctx.lr = 0x8221BBA4;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8221BBA8;
	sub_8215FA30(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BBC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,6276(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 6276);
	// bl 0x8215f338
	ctx.lr = 0x8221BBD8;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8221BBDC;
	sub_8215FA30(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BBF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// stb r11,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// bgt 0x8221bc44
	if (ctx.cr0.gt) goto loc_8221BC44;
	// lwz r3,6276(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6276);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BC30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8221bc44
	if (!ctx.cr0.eq) goto loc_8221BC44;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8221bd08
	ctx.lr = 0x8221BC40;
	sub_8221BD08(ctx, base);
	// b 0x8221bcf8
	goto loc_8221BCF8;
loc_8221BC44:
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x822f6280
	ctx.lr = 0x8221BC4C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221bc5c
	if (ctx.cr0.eq) goto loc_8221BC5C;
	// bl 0x8226e490
	ctx.lr = 0x8221BC58;
	sub_8226E490(ctx, base);
	// b 0x8221bc60
	goto loc_8221BC60;
loc_8221BC5C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8221BC60:
	// stw r3,836(r28)
	REX_STORE_U32(r28.u32 + 836, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,16420
	ctx.r4.s64 = ctx.r11.s64 + 16420;
	// bl 0x8215f670
	ctx.lr = 0x8221BC74;
	sub_8215F670(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215f200
	ctx.lr = 0x8221BC7C;
	sub_8215F200(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17264
	ctx.r4.s64 = ctx.r11.s64 + -17264;
	// bl 0x8215f670
	ctx.lr = 0x8221BC88;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16176
	ctx.r4.s64 = ctx.r11.s64 + 16176;
	// bl 0x8215f670
	ctx.lr = 0x8221BC94;
	sub_8215F670(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8221BC98;
	sub_8215FA30(ctx, base);
	// lwz r11,796(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 796);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x8221BCB0;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8221BCB8;
	sub_8215F2D0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,32412
	ctx.r4.s64 = ctx.r11.s64 + 32412;
	// bl 0x8215f338
	ctx.lr = 0x8221BCC4;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8221BCC8;
	sub_8215FA30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8221c260
	ctx.lr = 0x8221BCD8;
	sub_8221C260(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r3,836(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 836);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x8226ed28
	ctx.lr = 0x8221BCF8;
	sub_8226ED28(ctx, base);
loc_8221BCF8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221c1e8
	ctx.lr = 0x8221BD00;
	sub_8221C1E8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8222A690) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13756
	ctx.r3.s64 = ctx.r11.s64 + -13756;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222A9C8) {
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
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r10,16492
	ctx.r4.s64 = ctx.r10.s64 + 16492;
	// addi r3,r9,1624
	ctx.r3.s64 = ctx.r9.s64 + 1624;
	// addi r31,r11,112
	r31.s64 = ctx.r11.s64 + 112;
	// bl 0x8215f670
	ctx.lr = 0x8222A9FC;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16528
	ctx.r4.s64 = ctx.r11.s64 + 16528;
	// bl 0x8215f670
	ctx.lr = 0x8222AA08;
	sub_8215F670(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8222aa1c
	if (ctx.cr6.lt) goto loc_8222AA1C;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x8222aa20
	goto loc_8222AA20;
loc_8222AA1C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_8222AA20:
	// bl 0x8215fbf8
	ctx.lr = 0x8222AA24;
	sub_8215FBF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

DEFINE_REX_FUNC(sub_8222D640) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r10,1057(r4)
	REX_STORE_U8(ctx.r4.u32 + 1057, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222DD18) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13620
	ctx.r3.s64 = ctx.r11.s64 + -13620;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222EA70) {
	REX_FUNC_PROLOGUE();
	// lwz r3,120(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// b 0x821914c8
	sub_821914C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8222ED28) {
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
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,18440
	ctx.r4.s64 = ctx.r11.s64 + 18440;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x8222ED54;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-21084
	ctx.r4.s64 = ctx.r11.s64 + -21084;
	// bl 0x8215f338
	ctx.lr = 0x8222ED60;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8222ED64;
	sub_8215FA30(ctx, base);
	// addi r30,r31,124
	r30.s64 = r31.s64 + 124;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d5b38
	ctx.lr = 0x8222ED74;
	sub_821D5B38(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// bne cr6,0x8222ed90
	if (!ctx.cr6.eq) goto loc_8222ED90;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8222ED90:
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// std r9,32(r10)
	REX_STORE_U64(ctx.r10.u32 + 32, ctx.r9.u64);
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,40(r10)
	REX_STORE_U64(ctx.r10.u32 + 40, ctx.r9.u64);
	// ld r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// std r9,48(r10)
	REX_STORE_U64(ctx.r10.u32 + 48, ctx.r9.u64);
	// ld r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// std r11,56(r10)
	REX_STORE_U64(ctx.r10.u32 + 56, ctx.r11.u64);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222edd0
	if (ctx.cr6.eq) goto loc_8222EDD0;
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
loc_8222EDD0:
	// lwz r3,120(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 120);
	// bl 0x82191578
	ctx.lr = 0x8222EDD8;
	sub_82191578(ctx, base);
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

DEFINE_REX_FUNC(sub_82234F40) {
	REX_FUNC_PROLOGUE();
	// lwz r11,1120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// b 0x821e31f0
	sub_821E31F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82235328) {
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
	// lwz r11,880(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 880);
	// li r10,0
	ctx.r10.s64 = 0;
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
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8216b6a8
	ctx.lr = 0x82235358;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-19300
	ctx.r3.s64 = ctx.r11.s64 + -19300;
	// bl 0x8216bc98
	ctx.lr = 0x82235368;
	sub_8216BC98(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82237A98) {
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
	ctx.lr = 0x82237AA0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x82275c30
	ctx.lr = 0x82237AB4;
	sub_82275C30(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stb r28,384(r31)
	REX_STORE_U8(r31.u32 + 384, r28.u8);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r10,r10,-18456
	ctx.r10.s64 = ctx.r10.s64 + -18456;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r9,-2624
	ctx.r11.s64 = ctx.r9.s64 + -2624;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// addi r9,r8,-18608
	ctx.r9.s64 = ctx.r8.s64 + -18608;
	// addi r10,r7,-18528
	ctx.r10.s64 = ctx.r7.s64 + -18528;
	// stfs f0,380(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 380, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r9.u32);
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stb r11,376(r31)
	REX_STORE_U8(r31.u32 + 376, ctx.r11.u8);
	// addi r30,r31,376
	r30.s64 = r31.s64 + 376;
	// bl 0x822f6280
	ctx.lr = 0x82237B08;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82237b38
	if (ctx.cr0.eq) goto loc_82237B38;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-18516
	ctx.r4.s64 = ctx.r11.s64 + -18516;
	// bl 0x82120600
	ctx.lr = 0x82237B20;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x82191600
	ctx.lr = 0x82237B34;
	sub_82191600(ctx, base);
	// b 0x82237b3c
	goto loc_82237B3C;
loc_82237B38:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82237B3C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x82237B4C;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82237b64
	if (ctx.cr0.eq) goto loc_82237B64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82237B64;
	sub_82120AC0(ctx, base);
loc_82237B64:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8223E898) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// lwz r9,3848(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3848);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mulli r11,r4,320
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(320));
	// lwz r3,6272(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 6272);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r10,3804
	ctx.r5.s64 = ctx.r10.s64 + 3804;
	// addi r4,r10,3776
	ctx.r4.s64 = ctx.r10.s64 + 3776;
	// lwz r10,56(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// lfs f2,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,304(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// lfs f1,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82240F28) {
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
	ctx.lr = 0x82240F30;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	ctx.lr = 0x82240F4C;
	sub_821B2D80(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b2d80
	ctx.lr = 0x82240F58;
	sub_821B2D80(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82240f68
	if (ctx.cr0.lt) goto loc_82240F68;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x82240f80
	if (ctx.cr6.lt) goto loc_82240F80;
loc_82240F68:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-16588
	ctx.r4.s64 = ctx.r11.s64 + -16588;
	// addi r3,r10,-16508
	ctx.r3.s64 = ctx.r10.s64 + -16508;
	// li r5,444
	ctx.r5.s64 = 444;
	// bl 0x821231d0
	ctx.lr = 0x82240F80;
	sub_821231D0(ctx, base);
loc_82240F80:
	// addi r11,r31,329
	ctx.r11.s64 = r31.s64 + 329;
	// li r30,0
	r30.s64 = 0;
	// mulli r28,r11,12
	r28.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r28,r29
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82240fe4
	if (!ctx.cr6.gt) goto loc_82240FE4;
	// mulli r11,r31,12
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// addi r31,r11,3944
	r31.s64 = ctx.r11.s64 + 3944;
loc_82240FA4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822434c8
	ctx.lr = 0x82240FB0;
	sub_822434C8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// bne cr6,0x82240fd4
	if (!ctx.cr6.eq) goto loc_82240FD4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822434c8
	ctx.lr = 0x82240FC8;
	sub_822434C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82240FD4:
	// lwzx r11,r28,r29
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82240fa4
	if (ctx.cr6.lt) goto loc_82240FA4;
loc_82240FE4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82245840) {
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
	// li r3,156
	ctx.r3.s64 = 156;
	// bl 0x822f6280
	ctx.lr = 0x82245854;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82245864
	if (ctx.cr0.eq) goto loc_82245864;
	// bl 0x82245878
	ctx.lr = 0x82245860;
	sub_82245878(ctx, base);
	// b 0x82245868
	goto loc_82245868;
loc_82245864:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82245868:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82246B68) {
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
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x82246B7C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82246b8c
	if (ctx.cr0.eq) goto loc_82246B8C;
	// bl 0x82246ba0
	ctx.lr = 0x82246B88;
	sub_82246BA0(ctx, base);
	// b 0x82246b90
	goto loc_82246B90;
loc_82246B8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82246B90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82249328) {
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
	// bl 0x821b2d80
	ctx.lr = 0x82249350;
	sub_821B2D80(ctx, base);
	// stw r3,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82249368
	if (!ctx.cr0.eq) goto loc_82249368;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lfs f0,-16132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -16132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
loc_82249368:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 256, temp.u32);
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

DEFINE_REX_FUNC(sub_8224DC20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r9,472(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 472);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,468(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 468);
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f7,680(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 680);
	ctx.f7.f64 = double(temp.f32);
	// addi r7,r10,320
	ctx.r7.s64 = ctx.r10.s64 + 320;
	// lfs f6,684(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 684);
	ctx.f6.f64 = double(temp.f32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lwz r9,436(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 436);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lfs f12,60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// ld r4,0(r7)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// ld r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// lfs f0,15048(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,104(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lis r6,-32126
	ctx.r6.s64 = -2105409536;
	// fmuls f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// addi r31,r10,256
	r31.s64 = ctx.r10.s64 + 256;
	// addi r10,r5,16592
	ctx.r10.s64 = ctx.r5.s64 + 16592;
	// lfs f10,984(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f10.f64 = double(temp.f32);
	// std r4,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// std r7,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// lfs f9,-19392(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -19392);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// addi r7,r11,256
	ctx.r7.s64 = ctx.r11.s64 + 256;
	// lfs f8,216(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f12,f5,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// mfcr r6
	ctx.r6.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r6.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r6.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r6.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r6.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r6.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r6.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r6.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r6.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r6.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r6.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r6.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r6.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r6.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r6.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r6.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r6.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r6.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r6.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r6.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r6.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r6.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r6.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r6.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r6.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r6.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r6.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r6.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r6.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r6.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r6.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r6.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r5,r6,27,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x4;
	// lfs f12,-24(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r6,r6,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f12,-28(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f12.f64 = double(temp.f32);
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// lfs f11,-32(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f3,r31,r6
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r6.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsel f5,f3,f13,f5
	ctx.f5.f64 = ctx.f3.f64 >= 0.0 ? ctx.f13.f64 : ctx.f5.f64;
	// fmadds f12,f12,f12,f4
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f4.f64)));
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fmadds f12,f11,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f12.f64)));
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// mfcr r6
	ctx.r6.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r6.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r6.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r6.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r6.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r6.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r6.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r6.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r6.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r6.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r6.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r6.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r6.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r6.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r6.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r6.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r6.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r6.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r6.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r6.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r6.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r6.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r6.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r6.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r6.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r6.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r6.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r6.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r6.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r6.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r6.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r6.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// rlwinm r5,r6,27,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x4;
	// rlwinm r6,r6,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// lfsx f11,r10,r6
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f11,f11,f0,f5
	ctx.f11.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f5.f64;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// rlwinm r6,r10,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// lfsx f12,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f12,f12,f11,f0
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// fsubs f11,f12,f7
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
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
	// rlwinm r9,r10,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lfsx f11,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f12,f11,f12,f7
	ctx.f12.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f7.f64;
	// fsubs f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// lfsx f12,r7,r10
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f12,f12,f9,f8
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? ctx.f9.f64 : ctx.f8.f64;
	// fmadds f12,f12,f1,f6
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f1.f64, ctx.f6.f64)));
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
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
	// rlwinm r9,r10,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// lfsx f11,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f13,f11,f13,f12
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// stfs f0,684(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 684, temp.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82269A80) {
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
	ctx.lr = 0x82269A88;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82269AA4;
	sub_82120AC0(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x82269AB4;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// stfs f31,56(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f31,60(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f31,64(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// stfs f31,76(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// bl 0x822e6df0
	ctx.lr = 0x82269ADC;
	sub_822E6DF0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r30,0
	r30.s64 = 0;
	// li r29,255
	r29.s64 = 255;
	// stb r30,175(r31)
	REX_STORE_U8(r31.u32 + 175, r30.u8);
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// lfs f30,-16132(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16132);
	f30.f64 = double(temp.f32);
	// stb r30,174(r31)
	REX_STORE_U8(r31.u32 + 174, r30.u8);
	// lfs f0,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,173(r31)
	REX_STORE_U8(r31.u32 + 173, r30.u8);
	// stb r29,172(r31)
	REX_STORE_U8(r31.u32 + 172, r29.u8);
	// stfs f30,176(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x82269B20;
	sub_82120AC0(ctx, base);
	// stfs f31,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 212, temp.u32);
	// stfs f31,216(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 216, temp.u32);
	// addi r3,r31,236
	ctx.r3.s64 = r31.s64 + 236;
	// stfs f31,220(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 220, temp.u32);
	// stfs f31,224(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 224, temp.u32);
	// stfs f31,228(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 228, temp.u32);
	// stfs f31,232(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 232, temp.u32);
	// bl 0x822e6df0
	ctx.lr = 0x82269B40;
	sub_822E6DF0(ctx, base);
	// stb r30,331(r31)
	REX_STORE_U8(r31.u32 + 331, r30.u8);
	// stb r30,330(r31)
	REX_STORE_U8(r31.u32 + 330, r30.u8);
	// addi r3,r31,344
	ctx.r3.s64 = r31.s64 + 344;
	// stb r30,329(r31)
	REX_STORE_U8(r31.u32 + 329, r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,328(r31)
	REX_STORE_U8(r31.u32 + 328, r29.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,335(r31)
	REX_STORE_U8(r31.u32 + 335, r30.u8);
	// stb r30,334(r31)
	REX_STORE_U8(r31.u32 + 334, r30.u8);
	// stb r30,333(r31)
	REX_STORE_U8(r31.u32 + 333, r30.u8);
	// stb r29,332(r31)
	REX_STORE_U8(r31.u32 + 332, r29.u8);
	// stb r30,339(r31)
	REX_STORE_U8(r31.u32 + 339, r30.u8);
	// stb r30,338(r31)
	REX_STORE_U8(r31.u32 + 338, r30.u8);
	// stb r30,337(r31)
	REX_STORE_U8(r31.u32 + 337, r30.u8);
	// stb r29,336(r31)
	REX_STORE_U8(r31.u32 + 336, r29.u8);
	// stfs f30,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 340, temp.u32);
	// bl 0x82120ac0
	ctx.lr = 0x82269B84;
	sub_82120AC0(ctx, base);
	// addi r3,r31,372
	ctx.r3.s64 = r31.s64 + 372;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x82269B94;
	sub_82120AC0(ctx, base);
	// stfs f31,400(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 400, temp.u32);
	// stfs f31,404(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 404, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f31,408(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 408, temp.u32);
	// stfs f31,412(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 412, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82274378) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82274380;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8224e038
	ctx.lr = 0x82274390;
	sub_8224E038(ctx, base);
	// lbz r11,937(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 937);
	// lbz r30,936(r31)
	r30.u64 = REX_LOAD_U8(r31.u32 + 936);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822743e4
	if (ctx.cr6.eq) goto loc_822743E4;
	// li r4,-32757
	ctx.r4.s64 = -32757;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8217f4b0
	ctx.lr = 0x822743B0;
	sub_8217F4B0(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// li r6,1
	ctx.r6.s64 = 1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r5,3
	ctx.r5.s64 = 3;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// rlwimi r10,r11,7,24,24
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// stb r10,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// bl 0x8217fb30
	ctx.lr = 0x822743DC;
	sub_8217FB30(ctx, base);
	// lbz r11,936(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 936);
	// stb r11,937(r31)
	REX_STORE_U8(r31.u32 + 937, ctx.r11.u8);
loc_822743E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82277448) {
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
	// beq cr6,0x822774dc
	if (ctx.cr6.eq) goto loc_822774DC;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r11,-13284
	ctx.r4.s64 = ctx.r11.s64 + -13284;
	// bl 0x821fd140
	ctx.lr = 0x82277480;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822774dc
	if (ctx.cr0.eq) goto loc_822774DC;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r3,704(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 704);
	// bl 0x8213bce8
	ctx.lr = 0x82277494;
	sub_8213BCE8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r30,r31,220
	r30.s64 = r31.s64 + 220;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822774f8
	ctx.lr = 0x822774A8;
	sub_822774F8(ctx, base);
	// lfd f13,240(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(r31.u32 + 240);
	// lfd f0,0(r3)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
	// lfs f13,164(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822774c8
	if (!ctx.cr6.gt) goto loc_822774C8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r11.u32);
loc_822774C8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822774f8
	ctx.lr = 0x822774D4;
	sub_822774F8(ctx, base);
	// lfd f0,240(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 240);
	// stfd f0,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.f0.u64);
loc_822774DC:
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

DEFINE_REX_FUNC(sub_8227D5E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8227D5F0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8227d624
	if (!ctx.cr6.eq) goto loc_8227D624;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-540
	ctx.r4.s64 = ctx.r11.s64 + -540;
	// addi r3,r10,-492
	ctx.r3.s64 = ctx.r10.s64 + -492;
	// li r5,391
	ctx.r5.s64 = 391;
	// bl 0x821231d0
	ctx.lr = 0x8227D624;
	sub_821231D0(ctx, base);
loc_8227D624:
	// li r4,-32762
	ctx.r4.s64 = -32762;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8217f4b0
	ctx.lr = 0x8227D630;
	sub_8217F4B0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r29,82(r1)
	REX_STORE_U32(ctx.r1.u32 + 82, r29.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8227d648
	if (ctx.cr6.lt) goto loc_8227D648;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x8227d64c
	goto loc_8227D64C;
loc_8227D648:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_8227D64C:
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r1,86
	ctx.r3.s64 = ctx.r1.s64 + 86;
	// bl 0x8269cd20
	ctx.lr = 0x8227D658;
	sub_8269CD20(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,70
	ctx.r6.s64 = 70;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227D684;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822815E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
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
	// bl 0x826a2ca8
	ctx.lr = 0x82281600;
	// lwz r11,436(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 436);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,96(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822817bc
	if (!ctx.cr6.gt) goto loc_822817BC;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r1,-80
	ctx.r7.s64 = ctx.r1.s64 + -80;
	// ld r6,16(r4)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r4.u32 + 16);
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
	// ld r30,24(r4)
	r30.u64 = REX_LOAD_U64(ctx.r4.u32 + 24);
	// addi r31,r1,-80
	r31.s64 = ctx.r1.s64 + -80;
	// lfs f8,248(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f3,244(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f3.f64 = double(temp.f32);
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// lwz r8,468(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 468);
	// lfs f2,240(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f2.f64 = double(temp.f32);
	// std r6,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// fmr f5,f3
	ctx.f5.f64 = ctx.f3.f64;
	// std r30,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, r30.u64);
	// lfs f13,-76(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,-80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r9,16592
	ctx.r9.s64 = ctx.r9.s64 + 16592;
	// lfs f0,-72(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -72);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// ld r7,320(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 320);
	// fmadds f4,f3,f13,f12
	ctx.f4.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, ctx.f12.f64)));
	// ld r6,328(r8)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r8.u32 + 328);
	// lfs f7,920(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 920);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r8,320
	ctx.r8.s64 = ctx.r8.s64 + 320;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// std r6,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r6.u64);
	// lfs f11,-76(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -76);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,-80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,-72(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -72);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f1,f8,f12
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmadds f1,f3,f11,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f1.f64)));
	// fmadds f4,f2,f10,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f2.f64, ctx.f10.f64, ctx.f4.f64)));
	// fmadds f1,f2,f9,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f9.f64, ctx.f1.f64)));
	// fmuls f31,f8,f4
	f31.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f30,f3,f4
	f30.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fmuls f29,f2,f4
	f29.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// fmuls f28,f2,f1
	f28.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// fsubs f4,f0,f31
	ctx.f4.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fmuls f31,f3,f1
	f31.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// fmuls f1,f8,f1
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fsubs f5,f13,f30
	ctx.f5.f64 = double(float(ctx.f13.f64 - f30.f64));
	// fsubs f6,f10,f29
	ctx.f6.f64 = double(float(ctx.f10.f64 - f29.f64));
	// fsubs f0,f9,f28
	ctx.f0.f64 = double(float(ctx.f9.f64 - f28.f64));
	// fsubs f13,f11,f31
	ctx.f13.f64 = double(float(ctx.f11.f64 - f31.f64));
	// fsubs f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// fmuls f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f10,f2,f13
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f9,f3,f12
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmsubs f11,f2,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, -ctx.f11.f64)));
	// fmsubs f10,f3,f0,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, -ctx.f10.f64)));
	// fmsubs f9,f8,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, -ctx.f9.f64)));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f8,f10,f10,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f8.f64)));
	// fmadds f8,f9,f9,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f8.f64)));
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x822817bc
	if (!ctx.cr6.gt) goto loc_822817BC;
	// fmuls f5,f11,f5
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lwz r11,468(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 468);
	// fsqrts f3,f8
	ctx.f3.f64 = double(float(sqrt(ctx.f8.f64)));
	// lfs f8,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f2,92(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lfs f1,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	f31.f64 = double(temp.f32);
	// lfs f30,352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 352);
	f30.f64 = double(temp.f32);
	// lfs f29,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	f29.f64 = double(temp.f32);
	// lfs f7,-16132(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16132);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f5,f10,f4,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f10.f64, ctx.f4.f64, ctx.f5.f64)));
	// fdivs f4,f8,f3
	ctx.f4.f64 = double(float(ctx.f8.f64 / ctx.f3.f64));
	// fmuls f3,f13,f13
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f6,f9,f6,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f9.f64, ctx.f6.f64, ctx.f5.f64)));
	// fmuls f11,f4,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmadds f5,f12,f12,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f3.f64)));
	// fmuls f10,f4,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f9,f4,f9
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// fdivs f6,f6,f30
	ctx.f6.f64 = double(float(ctx.f6.f64 / f30.f64));
	// fmadds f5,f0,f0,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f5.f64)));
	// fmuls f6,f6,f2
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// fsqrts f5,f5
	ctx.f5.f64 = double(float(sqrt(ctx.f5.f64)));
	// fmuls f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fdivs f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 / ctx.f5.f64));
	// fmuls f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f6,f11,f11
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmadds f8,f10,f10,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f6.f64)));
	// fmadds f8,f9,f9,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f8.f64)));
	// fsqrts f8,f8
	ctx.f8.f64 = double(float(sqrt(ctx.f8.f64)));
	// fmuls f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fadds f0,f31,f13
	ctx.f0.f64 = double(float(f31.f64 + ctx.f13.f64));
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fadds f0,f29,f12
	ctx.f0.f64 = double(float(f29.f64 + ctx.f12.f64));
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
loc_822817BC:
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2cf4
	ctx.lr = 0x822817C4;
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

DEFINE_REX_FUNC(sub_8228F208) {
	REX_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8228F5E8) {
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
	ctx.lr = 0x8228F5F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228F61C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8228f694
	if (ctx.cr0.eq) goto loc_8228F694;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lbz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 4);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r11,r11,4552
	ctx.r11.s64 = ctx.r11.s64 + 4552;
	// addi r8,r8,6752
	ctx.r8.s64 = ctx.r8.s64 + 6752;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stb r7,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r7.u8);
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stb r9,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r9.u8);
	// bne cr6,0x8228f68c
	if (!ctx.cr6.eq) goto loc_8228F68C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228F680;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// stb r11,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r11.u8);
loc_8228F68C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8228f698
	goto loc_8228F698;
loc_8228F694:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228F698:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82294858) {
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
	ctx.lr = 0x82294860;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// li r26,0
	r26.s64 = 0;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82294948
	if (!ctx.cr6.eq) goto loc_82294948;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r28,r11,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x8229489c
	if (!ctx.cr0.eq) goto loc_8229489C;
	// li r28,1
	r28.s64 = 1;
loc_8229489C:
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r28.s32, ctx.xer);
	// bge cr6,0x82294948
	if (!ctx.cr6.lt) goto loc_82294948;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x822948bc
	if (ctx.cr6.eq) goto loc_822948BC;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c1a70
	ctx.lr = 0x822948B4;
	sub_822C1A70(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x822948c0
	goto loc_822948C0;
loc_822948BC:
	// mr r29,r26
	r29.u64 = r26.u64;
loc_822948C0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822948f8
	if (!ctx.cr6.gt) goto loc_822948F8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_822948D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822948ec
	if (ctx.cr6.eq) goto loc_822948EC;
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822948EC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822948d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822948D8;
loc_822948F8:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82294938
	if (ctx.cr6.eq) goto loc_82294938;
	// lbz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82294934
	if (ctx.cr0.eq) goto loc_82294934;
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
	ctx.lr = 0x82294934;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82294934:
	// stw r26,12(r30)
	REX_STORE_U32(r30.u32 + 12, r26.u32);
loc_82294938:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,12(r30)
	REX_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r28,8(r30)
	REX_STORE_U32(r30.u32 + 8, r28.u32);
	// stb r11,16(r30)
	REX_STORE_U8(r30.u32 + 16, ctx.r11.u8);
loc_82294948:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82294960
	if (ctx.cr0.eq) goto loc_82294960;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
loc_82294960:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// ld r30,48(r31)
	r30.u64 = REX_LOAD_U64(r31.u32 + 48);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ld r29,56(r31)
	r29.u64 = REX_LOAD_U64(r31.u32 + 56);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ld r28,64(r31)
	r28.u64 = REX_LOAD_U64(r31.u32 + 64);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// ld r23,72(r31)
	r23.u64 = REX_LOAD_U64(r31.u32 + 72);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// ld r22,24(r31)
	r22.u64 = REX_LOAD_U64(r31.u32 + 24);
	// ld r20,32(r31)
	r20.u64 = REX_LOAD_U64(r31.u32 + 32);
	// lwz r21,204(r31)
	r21.u64 = REX_LOAD_U32(r31.u32 + 204);
	// ld r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U64(r31.u32 + 40);
	// std r3,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r3.u64);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// std r20,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, r20.u64);
	// std r22,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r22.u64);
	// std r30,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, r30.u64);
	// std r29,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, r29.u64);
	// std r28,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, r28.u64);
	// std r23,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, r23.u64);
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822949E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,76(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 76);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r10,24(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 24);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82294A20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r3.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_822A5158) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// li r9,3
	ctx.r9.s64 = 3;
loc_822A5164:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// fmadds f0,f11,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// ble cr6,0x822a51ac
	if (!ctx.cr6.gt) goto loc_822A51AC;
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// ld r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r8,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r8.u64);
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// ld r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
loc_822A51AC:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x822a5164
	if (!ctx.cr0.eq) goto loc_822A5164;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A6E40) {
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
	// lwz r3,52(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r11,r11,6632
	ctx.r11.s64 = ctx.r11.s64 + 6632;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A6E78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A6E90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r11,r11,5148
	ctx.r11.s64 = ctx.r11.s64 + 5148;
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

DEFINE_REX_FUNC(sub_822ABB70) {
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
	ctx.lr = 0x822ABB78;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 28);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822abb94
	if (!ctx.cr0.eq) goto loc_822ABB94;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
loc_822ABB94:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// bne cr6,0x822abba4
	if (!ctx.cr6.eq) goto loc_822ABBA4;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
loc_822ABBA4:
	// lwz r25,204(r27)
	r25.u64 = REX_LOAD_U32(r27.u32 + 204);
	// li r24,0
	r24.s64 = 0;
	// lwz r28,12(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 12);
	// addi r31,r26,8
	r31.s64 = r26.s64 + 8;
	// lwz r30,16(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 16);
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// blt cr6,0x822abca0
	if (ctx.cr6.lt) goto loc_822ABCA0;
	// ble cr6,0x822abc74
	if (!ctx.cr6.gt) goto loc_822ABC74;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bge cr6,0x822abc74
	if (!ctx.cr6.lt) goto loc_822ABC74;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x822abbe8
	if (ctx.cr6.eq) goto loc_822ABBE8;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c1a70
	ctx.lr = 0x822ABBE0;
	sub_822C1A70(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x822abbec
	goto loc_822ABBEC;
loc_822ABBE8:
	// mr r29,r24
	r29.u64 = r24.u64;
loc_822ABBEC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822abc24
	if (!ctx.cr6.gt) goto loc_822ABC24;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_822ABC04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822abc18
	if (ctx.cr6.eq) goto loc_822ABC18;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822ABC18:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822abc04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822ABC04;
loc_822ABC24:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822abc64
	if (ctx.cr6.eq) goto loc_822ABC64;
	// lbz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822abc60
	if (ctx.cr0.eq) goto loc_822ABC60;
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
	ctx.lr = 0x822ABC60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822ABC60:
	// stw r24,12(r31)
	REX_STORE_U32(r31.u32 + 12, r24.u32);
loc_822ABC64:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stb r11,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r11.u8);
loc_822ABC74:
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(r28.s32, r30.s32, ctx.xer);
	// bge cr6,0x822abca0
	if (!ctx.cr6.lt) goto loc_822ABCA0;
	// subf r11,r28,r30
	ctx.r11.u64 = r30.u64 - r28.u64;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822ABC88:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822abc98
	if (ctx.cr0.eq) goto loc_822ABC98;
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r24.u32);
loc_822ABC98:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822abc88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822ABC88;
loc_822ABCA0:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x822abd20
	if (!ctx.cr6.gt) goto loc_822ABD20;
	// mr r31,r24
	r31.u64 = r24.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// mr r28,r30
	r28.u64 = r30.u64;
loc_822ABCB8:
	// lwz r11,64(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822abcd0
	if (ctx.cr6.eq) goto loc_822ABCD0;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// stwx r24,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r24.u32);
	// b 0x822abd10
	goto loc_822ABD10;
loc_822ABCD0:
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r22,204(r27)
	r22.u64 = REX_LOAD_U32(r27.u32 + 204);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// stw r11,204(r27)
	REX_STORE_U32(r27.u32 + 204, ctx.r11.u32);
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,32(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 32);
	// lwz r30,20(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822ABD08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r3,r30,r31
	REX_STORE_U32(r30.u32 + r31.u32, ctx.r3.u32);
	// stw r22,204(r27)
	REX_STORE_U32(r27.u32 + 204, r22.u32);
loc_822ABD10:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,80
	r29.s64 = r29.s64 + 80;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x822abcb8
	if (!ctx.cr0.eq) goto loc_822ABCB8;
loc_822ABD20:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_822BCC70) {
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
	ctx.lr = 0x822BCC78;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 212);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822bccb0
	if (!ctx.cr0.eq) goto loc_822BCCB0;
	// lwz r11,524(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 524);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822bccb0
	if (!ctx.cr0.eq) goto loc_822BCCB0;
	// addi r4,r3,224
	ctx.r4.s64 = ctx.r3.s64 + 224;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c07b8
	ctx.lr = 0x822BCCB0;
	sub_822C07B8(ctx, base);
loc_822BCCB0:
	// lwz r11,204(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bce00
	if (ctx.cr6.eq) goto loc_822BCE00;
	// lwz r11,212(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 212);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822bcdc4
	if (!ctx.cr0.eq) goto loc_822BCDC4;
	// lwz r10,208(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 208);
	// addi r31,r27,200
	r31.s64 = r27.s64 + 200;
	// lwz r11,204(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 204);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822bcd9c
	if (!ctx.cr6.eq) goto loc_822BCD9C;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r29,r11,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x822bccec
	if (!ctx.cr0.eq) goto loc_822BCCEC;
	// li r29,1
	r29.s64 = 1;
loc_822BCCEC:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bge cr6,0x822bcd9c
	if (!ctx.cr6.lt) goto loc_822BCD9C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822bcd0c
	if (ctx.cr6.eq) goto loc_822BCD0C;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c1a70
	ctx.lr = 0x822BCD04;
	sub_822C1A70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x822bcd10
	goto loc_822BCD10;
loc_822BCD0C:
	// li r30,0
	r30.s64 = 0;
loc_822BCD10:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bcd48
	if (!ctx.cr6.gt) goto loc_822BCD48;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_822BCD28:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bcd3c
	if (ctx.cr6.eq) goto loc_822BCD3C;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822BCD3C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822bcd28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BCD28;
loc_822BCD48:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bcd8c
	if (ctx.cr6.eq) goto loc_822BCD8C;
	// lbz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822bcd84
	if (ctx.cr0.eq) goto loc_822BCD84;
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
	ctx.lr = 0x822BCD84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BCD84:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_822BCD8C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r11,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r11.u8);
loc_822BCD9C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bcdb4
	if (ctx.cr0.eq) goto loc_822BCDB4;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
loc_822BCDB4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x822bcde0
	goto loc_822BCDE0;
loc_822BCDC4:
	// lwz r11,224(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 224);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822bcde0
	if (ctx.cr6.eq) goto loc_822BCDE0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822bcde0
	if (ctx.cr6.eq) goto loc_822BCDE0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,224(r28)
	REX_STORE_U32(r28.u32 + 224, ctx.r11.u32);
loc_822BCDE0:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BCE00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BCE00:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_822C2F08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12620(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12620);
	// li r12,1
	ctx.r12.s64 = 1;
	// lwz r9,10460(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 10460);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// stw r4,12040(r3)
	REX_STORE_U32(ctx.r3.u32 + 12040, ctx.r4.u32);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// rlwimi r9,r11,4,24,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
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

DEFINE_REX_FUNC(sub_822C3AB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822C3AC0;
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lbz r9,12100(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 12100);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r8,r8,7984
	ctx.r8.s64 = ctx.r8.s64 + 7984;
	// rlwinm r7,r5,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r30,1
	r30.s64 = 1;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// rlwinm r6,r6,22,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 22) & 0x1;
	// lwzx r8,r9,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwimi r29,r7,11,20,20
	r29.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0x800) | (r29.u64 & 0xFFFFFFFFFFFFF7FF);
	// or r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r29,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r29.u32);
	// rldicr r6,r30,63,63
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// clrldi r8,r4,32
	ctx.r8.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// srd r8,r6,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r8.u8 & 0x7F));
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwimi r31,r9,21,9,10
	r31.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x600000) | (r31.u64 & 0xFFFFFFFFFF9FFFFF);
	// rlwimi r31,r9,21,4,6
	r31.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0xE000000) | (r31.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
	// lbz r9,12178(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 12178);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r6,r7,31,13,31
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFF80000);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwimi r6,r7,31,1,11
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FF00000) | (ctx.r6.u64 & 0xFFFFFFFF800FFFFF);
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r7,r6,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0xFFF;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwimi r10,r29,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822CBFF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cc0b4
	if (ctx.cr0.eq) goto loc_822CC0B4;
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r10,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// cmplwi cr6,r9,11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 11, ctx.xer);
	// bgt cr6,0x822cc0ac
	if (ctx.cr6.gt) goto loc_822CC0AC;
	// lis r12,-32243
	ctx.r12.s64 = -2113077248;
	// addi r12,r12,16232
	ctx.r12.s64 = ctx.r12.s64 + 16232;
	// lbzx r0,r12,r9
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r9.u32);
	// lis r12,-32211
	ctx.r12.s64 = -2110980096;
	// nop 
	// addi r12,r12,-16324
	ctx.r12.s64 = ctx.r12.s64 + -16324;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_822CC03C;
	case 1:
		goto loc_822CC03C;
	case 2:
		goto loc_822CC0AC;
	case 3:
		goto loc_822CC0AC;
	case 4:
		goto loc_822CC060;
	case 5:
		goto loc_822CC060;
	case 6:
		goto loc_822CC080;
	case 7:
		goto loc_822CC0AC;
	case 8:
		goto loc_822CC080;
	case 9:
		goto loc_822CC098;
	case 10:
		goto loc_822CC03C;
	case 11:
		goto loc_822CC03C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_822CC03C:
	// rlwinm r10,r10,24,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3;
	// li r9,1
	ctx.r9.s64 = 1;
	// subfic r10,r10,3
	ctx.xer.ca = ctx.r10.u32 <= 3;
	ctx.r10.u64 = static_cast<uint64_t>(3) - ctx.r10.u64;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwimi r10,r11,0,16,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r10.u64 & 0xF0000);
loc_822CC058:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x822cc0ac
	goto loc_822CC0AC;
loc_822CC060:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r10,15,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xF;
	// subfic r10,r10,15
	ctx.xer.ca = ctx.r10.u32 <= 15;
	ctx.r10.u64 = static_cast<uint64_t>(15) - ctx.r10.u64;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwimi r10,r11,0,0,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x822cc058
	goto loc_822CC058;
loc_822CC080:
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r7,r9,0,18,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x822cc0ac
	if (!ctx.cr0.eq) goto loc_822CC0AC;
	// rlwinm. r9,r9,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822cc0ac
	if (!ctx.cr0.eq) goto loc_822CC0AC;
	// b 0x822cc03c
	goto loc_822CC03C;
loc_822CC098:
	// rlwinm r10,r10,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r10,1536
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1536, ctx.xer);
	// bne cr6,0x822cc0ac
	if (!ctx.cr6.eq) goto loc_822CC0AC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r10.u32);
loc_822CC0AC:
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// b 0x822cc254
	goto loc_822CC254;
loc_822CC0B4:
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822cc0f0
	if (!ctx.cr6.eq) goto loc_822CC0F0;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r3.u32);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,16(r8)
	REX_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// beq 0x822cc0e8
	if (ctx.cr0.eq) goto loc_822CC0E8;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// beq 0x822cc0ec
	if (ctx.cr0.eq) goto loc_822CC0EC;
loc_822CC0E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822CC0EC:
	// stw r11,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r11.u32);
loc_822CC0F0:
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822cc124
	if (ctx.cr0.eq) goto loc_822CC124;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// clrlwi. r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r9,r10,20,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x3F;
	// beq cr6,0x822cc118
	if (ctx.cr6.eq) goto loc_822CC118;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822cc11c
	if (!ctx.cr6.lt) goto loc_822CC11C;
loc_822CC118:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_822CC11C:
	// rlwinm r10,r10,27,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3F;
	// b 0x822cc23c
	goto loc_822CC23C;
loc_822CC124:
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r9,8(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r10,r10,-21420
	ctx.r10.s64 = ctx.r10.s64 + -21420;
	// rlwinm r6,r9,8,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0x1F;
	// addi r4,r10,532
	ctx.r4.s64 = ctx.r10.s64 + 532;
	// rlwinm r31,r5,6,26,31
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0x3F;
	// lbzx r6,r6,r4
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// lbzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x822cc174
	if (ctx.cr6.lt) goto loc_822CC174;
	// rlwinm. r10,r9,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822cc174
	if (ctx.cr0.eq) goto loc_822CC174;
	// lbz r10,9(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 9);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// beq cr6,0x822cc170
	if (ctx.cr6.eq) goto loc_822CC170;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822cc174
	if (!ctx.cr6.lt) goto loc_822CC174;
loc_822CC170:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822CC174:
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// blt cr6,0x822cc1a0
	if (ctx.cr6.lt) goto loc_822CC1A0;
	// rlwinm. r10,r9,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822cc1a0
	if (ctx.cr0.eq) goto loc_822CC1A0;
	// lbz r10,10(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 10);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// beq cr6,0x822cc19c
	if (ctx.cr6.eq) goto loc_822CC19C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822cc1a0
	if (!ctx.cr6.lt) goto loc_822CC1A0;
loc_822CC19C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822CC1A0:
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bge cr6,0x822cc1b0
	if (!ctx.cr6.lt) goto loc_822CC1B0;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x822cc1d0
	if (!ctx.cr6.eq) goto loc_822CC1D0;
loc_822CC1B0:
	// rlwinm. r10,r9,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822cc1d0
	if (ctx.cr0.eq) goto loc_822CC1D0;
	// clrlwi r10,r9,26
	ctx.r10.u64 = ctx.r9.u32 & 0x3F;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822cc1cc
	if (ctx.cr6.eq) goto loc_822CC1CC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822cc1d0
	if (!ctx.cr6.lt) goto loc_822CC1D0;
loc_822CC1CC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822CC1D0:
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x822cc200
	if (!ctx.cr6.eq) goto loc_822CC200;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// rlwimi r10,r9,30,4,4
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x8000000) | (ctx.r10.u64 & 0xFFFFFFFFF7FFFFFF);
	// rlwimi r7,r10,6,30,31
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFC);
	// clrlwi r10,r7,26
	ctx.r10.u64 = ctx.r7.u32 & 0x3F;
	// beq cr6,0x822cc1fc
	if (ctx.cr6.eq) goto loc_822CC1FC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822cc200
	if (!ctx.cr6.lt) goto loc_822CC200;
loc_822CC1FC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822CC200:
	// rlwinm. r10,r5,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r10,r5,26
	ctx.r10.u64 = ctx.r5.u32 & 0x3F;
	// beq 0x822cc224
	if (ctx.cr0.eq) goto loc_822CC224;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// blt cr6,0x822cc250
	if (ctx.cr6.lt) goto loc_822CC250;
	// cmplwi cr6,r10,37
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 37, ctx.xer);
	// bgt cr6,0x822cc250
	if (ctx.cr6.gt) goto loc_822CC250;
	// stw r3,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r3.u32);
	// b 0x822cc250
	goto loc_822CC250;
loc_822CC224:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822cc234
	if (ctx.cr6.eq) goto loc_822CC234;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822cc238
	if (!ctx.cr6.lt) goto loc_822CC238;
loc_822CC234:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822CC238:
	// rlwinm r10,r5,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0x3F;
loc_822CC23C:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822cc24c
	if (ctx.cr6.eq) goto loc_822CC24C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822cc250
	if (!ctx.cr6.lt) goto loc_822CC250;
loc_822CC24C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822CC250:
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
loc_822CC254:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E1B98) {
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
	// lwz r11,21856(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21856);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x822e1c58
	if (!ctx.cr6.eq) goto loc_822E1C58;
	// lwz r11,21864(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21864);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x822e1bd0
	if (!ctx.cr6.eq) goto loc_822E1BD0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822e1bd4
	goto loc_822E1BD4;
loc_822E1BD0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822E1BD4:
	// lwz r10,21860(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21860);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822e1c58
	if (ctx.cr6.eq) goto loc_822E1C58;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x822e1bf0
	if (!ctx.cr6.eq) goto loc_822E1BF0;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_822E1BF0:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822e1c08
	if (!ctx.cr6.gt) goto loc_822E1C08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822E1C08;
	sub_822D5B28(ctx, base);
loc_822E1C08:
	// lis r11,-16382
	ctx.r11.s64 = -1073610752;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r11,r11,22528
	ctx.r11.u64 = ctx.r11.u64 | 22528;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// ori r8,r9,48879
	ctx.r8.u64 = ctx.r9.u64 | 48879;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r10,21852(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21852);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_822E1C58:
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

DEFINE_REX_FUNC(sub_822E6FA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822E6FB0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,16
	r29.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82120780
	ctx.lr = 0x822E6FCC;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822e6ff0
	if (ctx.cr0.eq) goto loc_822E6FF0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120b20
	ctx.lr = 0x822E6FE8;
	sub_82120B20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e70c8
	ctx.lr = 0x822E6FF0;
	sub_822E70C8(ctx, base);
loc_822E6FF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822E7CB0) {
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
	ctx.lr = 0x822E7CB8;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// li r3,56
	ctx.r3.s64 = 56;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// bl 0x822f6280
	ctx.lr = 0x822E7CDC;
	sub_822F6280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r11,10360
	r29.s64 = ctx.r11.s64 + 10360;
	// beq 0x822e7d2c
	if (ctx.cr0.eq) goto loc_822E7D2C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,13832
	ctx.r5.s64 = ctx.r11.s64 + 13832;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// li r31,1
	r31.s64 = 1;
	// bl 0x82121610
	ctx.lr = 0x822E7D04;
	sub_82121610(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82197628
	ctx.lr = 0x822E7D14;
	sub_82197628(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r11,r11,-11308
	ctx.r11.s64 = ctx.r11.s64 + -11308;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r11,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r11.u32);
	// b 0x822e7d30
	goto loc_822E7D30;
loc_822E7D2C:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
loc_822E7D30:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x822E7D3C;
	sub_82145710(ctx, base);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7d58
	if (ctx.cr0.eq) goto loc_822E7D58;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r31,r31,0,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x822E7D58;
	sub_82120AC0(ctx, base);
loc_822E7D58:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x822f6280
	ctx.lr = 0x822E7D60;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822e7da8
	if (ctx.cr0.eq) goto loc_822E7DA8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,13856
	ctx.r5.s64 = ctx.r11.s64 + 13856;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
	// bl 0x82121610
	ctx.lr = 0x822E7D80;
	sub_82121610(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r28,4
	ctx.r5.s64 = r28.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82197628
	ctx.lr = 0x822E7D90;
	sub_82197628(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r11,r11,-11268
	ctx.r11.s64 = ctx.r11.s64 + -11268;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r11,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r11.u32);
	// b 0x822e7dac
	goto loc_822E7DAC;
loc_822E7DA8:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
loc_822E7DAC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x822E7DB8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7dd4
	if (ctx.cr0.eq) goto loc_822E7DD4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,31,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x822E7DD4;
	sub_82120AC0(ctx, base);
loc_822E7DD4:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x822E7DDC;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822e7e14
	if (ctx.cr0.eq) goto loc_822E7E14;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,13876
	ctx.r5.s64 = ctx.r11.s64 + 13876;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
	// bl 0x82121610
	ctx.lr = 0x822E7DFC;
	sub_82121610(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r28,8
	ctx.r5.s64 = r28.s64 + 8;
	// bl 0x82191600
	ctx.lr = 0x822E7E0C;
	sub_82191600(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x822e7e18
	goto loc_822E7E18;
loc_822E7E14:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
loc_822E7E18:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x822E7E24;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7e40
	if (ctx.cr0.eq) goto loc_822E7E40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r31,r31,0,30,28
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x822E7E40;
	sub_82120AC0(ctx, base);
loc_822E7E40:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x822E7E48;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822e7e80
	if (ctx.cr0.eq) goto loc_822E7E80;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,13884
	ctx.r5.s64 = ctx.r11.s64 + 13884;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ori r31,r31,8
	r31.u64 = r31.u64 | 8;
	// bl 0x82121610
	ctx.lr = 0x822E7E68;
	sub_82121610(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r28,9
	ctx.r5.s64 = r28.s64 + 9;
	// bl 0x82191600
	ctx.lr = 0x822E7E78;
	sub_82191600(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x822e7e84
	goto loc_822E7E84;
loc_822E7E80:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
loc_822E7E84:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x822E7E90;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7eac
	if (ctx.cr0.eq) goto loc_822E7EAC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r31,r31,0,29,27
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x822E7EAC;
	sub_82120AC0(ctx, base);
loc_822E7EAC:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x822E7EB4;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822e7eec
	if (ctx.cr0.eq) goto loc_822E7EEC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,23104
	ctx.r5.s64 = ctx.r11.s64 + 23104;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// ori r31,r31,16
	r31.u64 = r31.u64 | 16;
	// bl 0x82121610
	ctx.lr = 0x822E7ED4;
	sub_82121610(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r28,10
	ctx.r5.s64 = r28.s64 + 10;
	// bl 0x82191600
	ctx.lr = 0x822E7EE4;
	sub_82191600(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x822e7ef0
	goto loc_822E7EF0;
loc_822E7EEC:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
loc_822E7EF0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x822E7EFC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7f14
	if (ctx.cr0.eq) goto loc_822E7F14;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82120ac0
	ctx.lr = 0x822E7F14;
	sub_82120AC0(ctx, base);
loc_822E7F14:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_822F6838) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8215cee0
	ctx.lr = 0x822F685C;
	sub_8215CEE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822f6878
	if (ctx.cr0.eq) goto loc_822F6878;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F6878;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F6878:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f6888
	if (ctx.cr0.eq) goto loc_822F6888;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822F6888;
	sub_8269CE98(ctx, base);
loc_822F6888:
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

DEFINE_REX_FUNC(sub_822F8050) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822f807c
	if (ctx.cr6.eq) goto loc_822F807C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f807c
	if (ctx.cr6.eq) goto loc_822F807C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r3,312(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_822F807C:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FAA90) {
	REX_FUNC_PROLOGUE();
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822faaa4
	if (ctx.cr6.eq) goto loc_822FAAA4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822faaa8
	goto loc_822FAAA8;
loc_822FAAA4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822FAAA8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822faac4
	if (ctx.cr6.eq) goto loc_822FAAC4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822faac0
	if (ctx.cr6.eq) goto loc_822FAAC0;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822faac4
	goto loc_822FAAC4;
loc_822FAAC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FAAC4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822faae8
	if (ctx.cr6.eq) goto loc_822FAAE8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822faae8
	if (ctx.cr6.eq) goto loc_822FAAE8;
	// lwz r3,312(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_822FAAE8:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FBE20) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822fbbf8
	ctx.lr = 0x822FBE34;
	sub_822FBBF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fbe50
	if (!ctx.cr0.eq) goto loc_822FBE50;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FBE50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822FBE50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FCDD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822FCDD8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// rlwinm r29,r11,0,27,27
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// rlwinm. r11,r10,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// bne 0x822fce00
	if (!ctx.cr0.eq) goto loc_822FCE00;
loc_822FCDF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822fcee4
	goto loc_822FCEE4;
loc_822FCE00:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8233e338
	ctx.lr = 0x822FCE08;
	sub_8233E338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fcee4
	if (!ctx.cr0.eq) goto loc_822FCEE4;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822fce28
	if (!ctx.cr6.eq) goto loc_822FCE28;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_822FCE28:
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// rlwinm. r9,r11,15,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r30,r11,r10
	r30.u64 = ctx.r11.u64 & ctx.r10.u64;
	// beq 0x822fce98
	if (ctx.cr0.eq) goto loc_822FCE98;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x822f7b48
	ctx.lr = 0x822FCE68;
	sub_822F7B48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fcee4
	if (!ctx.cr0.eq) goto loc_822FCEE4;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822fce98
	if (ctx.cr0.eq) goto loc_822FCE98;
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FCE90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fcee4
	if (!ctx.cr0.eq) goto loc_822FCEE4;
loc_822FCE98:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822fcc38
	ctx.lr = 0x822FCEA4;
	sub_822FCC38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fcee4
	if (!ctx.cr0.eq) goto loc_822FCEE4;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822fcdf8
	if (ctx.cr0.eq) goto loc_822FCDF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f7ef8
	ctx.lr = 0x822FCEC0;
	sub_822F7EF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fcee4
	if (!ctx.cr0.eq) goto loc_822FCEE4;
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 312);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FCEE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822FCEE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82303D18) {
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
	ctx.lr = 0x82303D20;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82303d4c
	if (!ctx.cr6.eq) goto loc_82303D4C;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82303ea0
	goto loc_82303EA0;
loc_82303D4C:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82303e7c
	if (ctx.cr0.eq) goto loc_82303E7C;
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82303e7c
	if (ctx.cr6.eq) goto loc_82303E7C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f7a88
	ctx.lr = 0x82303D68;
	sub_822F7A88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82303e0c
	if (ctx.cr0.eq) goto loc_82303E0C;
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// li r31,0
	r31.s64 = 0;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r27,8(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x82303e7c
	if (!ctx.cr6.gt) goto loc_82303E7C;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_82303D94:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82303df8
	if (ctx.cr6.eq) goto loc_82303DF8;
	// lwz r11,172(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82303db4
	if (ctx.cr6.eq) goto loc_82303DB4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82303db8
	goto loc_82303DB8;
loc_82303DB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82303DB8:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x82303df8
	if (!ctx.cr6.eq) goto loc_82303DF8;
	// lhz r11,100(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 100);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82303df8
	if (ctx.cr0.eq) goto loc_82303DF8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,268(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82303DF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82303ea0
	if (!ctx.cr0.eq) goto loc_82303EA0;
loc_82303DF8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(r31.s32, r27.s32, ctx.xer);
	// blt cr6,0x82303d94
	if (ctx.cr6.lt) goto loc_82303D94;
	// b 0x82303e7c
	goto loc_82303E7C;
loc_82303E0C:
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82303e7c
	if (!ctx.cr6.gt) goto loc_82303E7C;
	// li r31,0
	r31.s64 = 0;
loc_82303E24:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82303e64
	if (ctx.cr6.eq) goto loc_82303E64;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// lwzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,268(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82303E5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82303ea0
	if (!ctx.cr0.eq) goto loc_82303EA0;
loc_82303E64:
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82303e24
	if (ctx.cr6.lt) goto loc_82303E24;
loc_82303E7C:
	// lwz r11,116(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82303e9c
	if (ctx.cr6.eq) goto loc_82303E9C;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f7c10
	ctx.lr = 0x82303E9C;
	sub_822F7C10(ctx, base);
loc_82303E9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82303EA0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82311DF8) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82311ed0
	if (ctx.cr0.eq) goto loc_82311ED0;
	// lwz r3,52(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82311ed0
	if (ctx.cr6.eq) goto loc_82311ED0;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82311ed0
	if (ctx.cr6.eq) goto loc_82311ED0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8233f250
	ctx.lr = 0x82311E40;
	sub_8233F250(ctx, base);
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82311e50
	if (ctx.cr6.eq) goto loc_82311E50;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bne cr6,0x82311e54
	if (!ctx.cr6.eq) goto loc_82311E54;
loc_82311E50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82311E54:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82311ed4
	if (!ctx.cr6.eq) goto loc_82311ED4;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82311ed0
	if (ctx.cr0.eq) goto loc_82311ED0;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x82311df8
	ctx.lr = 0x82311E70;
	sub_82311DF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82311ed4
	if (!ctx.cr0.eq) goto loc_82311ED4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x82311b28
	ctx.lr = 0x82311E84;
	sub_82311B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82311ed4
	if (!ctx.cr0.eq) goto loc_82311ED4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823107a0
	ctx.lr = 0x82311E9C;
	sub_823107A0(ctx, base);
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82311ed0
	if (ctx.cr6.eq) goto loc_82311ED0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x8233ec00
	ctx.lr = 0x82311EC8;
	sub_8233EC00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82311ed4
	if (!ctx.cr0.eq) goto loc_82311ED4;
loc_82311ED0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82311ED4:
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

DEFINE_REX_FUNC(sub_823161C8) {
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
	ctx.lr = 0x823161D0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823161f4
	if (!ctx.cr6.eq) goto loc_823161F4;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x823162e0
	goto loc_823162E0;
loc_823161F4:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,5872
	ctx.r5.s64 = ctx.r10.s64 + 5872;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// li r6,1138
	ctx.r6.s64 = 1138;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x8231621C;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82316258
	if (ctx.cr0.eq) goto loc_82316258;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,5904
	ctx.r10.s64 = ctx.r10.s64 + 5904;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// std r11,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// b 0x8231625c
	goto loc_8231625C;
loc_82316258:
	// li r30,0
	r30.s64 = 0;
loc_8231625C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8231626c
	if (!ctx.cr6.eq) goto loc_8231626C;
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x823162e0
	goto loc_823162E0;
loc_8231626C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823162e8
	if (ctx.cr6.eq) goto loc_823162E8;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x823162e8
	if (!ctx.cr6.eq) goto loc_823162E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82316294;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
loc_82316298:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823162AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823162e0
	if (!ctx.cr0.eq) goto loc_823162E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823162D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823162e0
	if (!ctx.cr0.eq) goto loc_823162E0;
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
loc_823162E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_823162E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823162FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82316298
	goto loc_82316298;
}

DEFINE_REX_FUNC(sub_8231F810) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x8231F818;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2ca0
	ctx.lr = 0x8231F820;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,20(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,40(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// lfs f31,96(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 96);
	f31.f64 = double(temp.f32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f26,100(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 100);
	f26.f64 = double(temp.f32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f30,28(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 28);
	f30.f64 = double(temp.f32);
	// lfs f29,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f29.f64 = double(temp.f32);
	// beq cr6,0x8231f87c
	if (ctx.cr6.eq) goto loc_8231F87C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8233f590
	ctx.lr = 0x8231F868;
	sub_8233F590(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x8231f89c
	goto loc_8231F89C;
loc_8231F87C:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231fa0c
	if (ctx.cr6.eq) goto loc_8231FA0C;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8232ffe8
	ctx.lr = 0x8231F89C;
	sub_8232FFE8(ctx, base);
loc_8231F89C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8231fa10
	if (!ctx.cr6.eq) goto loc_8231FA10;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// fmuls f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 * f30.f64));
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,-10820(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -10820);
	// lfs f28,272(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 272);
	f28.f64 = double(temp.f32);
	// lfs f27,276(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 276);
	f27.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// fmuls f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lwz r11,208(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231F8D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231f8e0
	if (ctx.cr0.eq) goto loc_8231F8E0;
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	f31.f64 = f29.f64;
loc_8231F8E0:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f30,f13,f26,f0
	f30.f64 = double(float(std::fma(ctx.f13.f64, f26.f64, ctx.f0.f64)));
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8231f914
	if (ctx.cr6.eq) goto loc_8231F914;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// lfs f0,5444(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
loc_8231F914:
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// beq cr6,0x8231f93c
	if (ctx.cr6.eq) goto loc_8231F93C;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8233eb28
	ctx.lr = 0x8231F928;
	sub_8233EB28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8231f938
	if (ctx.cr0.eq) goto loc_8231F938;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x8231fa10
	if (!ctx.cr6.eq) goto loc_8231FA10;
loc_8231F938:
	// stfs f31,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
loc_8231F93C:
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// beq cr6,0x8231f968
	if (ctx.cr6.eq) goto loc_8231F968;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x8233eb70
	ctx.lr = 0x8231F954;
	sub_8233EB70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8231f964
	if (ctx.cr0.eq) goto loc_8231F964;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x8231fa10
	if (!ctx.cr6.eq) goto loc_8231FA10;
loc_8231F964:
	// stfs f30,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
loc_8231F968:
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x8233f3d8
	ctx.lr = 0x8231F974;
	sub_8233F3D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8231f984
	if (ctx.cr0.eq) goto loc_8231F984;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x8231fa10
	if (!ctx.cr6.eq) goto loc_8231FA10;
loc_8231F984:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231f9cc
	if (ctx.cr0.eq) goto loc_8231F9CC;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x8233f178
	ctx.lr = 0x8231F9A0;
	sub_8233F178(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8231f9b0
	if (ctx.cr0.eq) goto loc_8231F9B0;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x8231fa10
	if (!ctx.cr6.eq) goto loc_8231FA10;
loc_8231F9B0:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// bl 0x8233f1c0
	ctx.lr = 0x8231F9BC;
	sub_8233F1C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8231f9cc
	if (ctx.cr0.eq) goto loc_8231F9CC;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x8231fa10
	if (!ctx.cr6.eq) goto loc_8231FA10;
loc_8231F9CC:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231fa0c
	if (ctx.cr0.eq) goto loc_8231FA0C;
	// rlwinm. r11,r28,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231fa0c
	if (ctx.cr0.eq) goto loc_8231FA0C;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lfs f3,256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,252(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,248(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8233f070
	ctx.lr = 0x8231F9FC;
	sub_8233F070(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8231fa0c
	if (ctx.cr0.eq) goto loc_8231FA0C;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x8231fa10
	if (!ctx.cr6.eq) goto loc_8231FA10;
loc_8231FA0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231FA10:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2cec
	ctx.lr = 0x8231FA1C;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82330A38) {
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
	ctx.lr = 0x82330A40;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,328(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// addi r22,r3,328
	r22.s64 = ctx.r3.s64 + 328;
	// li r28,0
	r28.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330a88
	if (!ctx.cr6.eq) goto loc_82330A88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8233e6b8
	ctx.lr = 0x82330A80;
	sub_8233E6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82330bec
	if (!ctx.cr6.eq) goto loc_82330BEC;
loc_82330A88:
	// lwz r3,0(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 0);
	// bl 0x8233e7e0
	ctx.lr = 0x82330A90;
	sub_8233E7E0(ctx, base);
	// lbz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330aa0
	if (!ctx.cr6.eq) goto loc_82330AA0;
	// addi r30,r23,16
	r30.s64 = r23.s64 + 16;
loc_82330AA0:
	// lwz r10,312(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 312);
	// lis r26,-32129
	r26.s64 = -2105606144;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82330ad4
	if (ctx.cr6.eq) goto loc_82330AD4;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// and r27,r11,r27
	r27.u64 = ctx.r11.u64 & r27.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bctrl 
	ctx.lr = 0x82330ACC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82330b94
	goto loc_82330B94;
loc_82330AD4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330af0
	if (!ctx.cr6.eq) goto loc_82330AF0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,324(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 324);
	// bl 0x82352960
	ctx.lr = 0x82330AE8;
	sub_82352960(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82330b94
	goto loc_82330B94;
loc_82330AF0:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// lwz r4,308(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 308);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r28,r9,r11
	r28.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// andc r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x823307c8
	ctx.lr = 0x82330B28;
	sub_823307C8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82330b9c
	if (ctx.cr6.lt) goto loc_82330B9C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82330890
	ctx.lr = 0x82330B48;
	sub_82330890(ctx, base);
	// lbz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330b80
	if (ctx.cr6.eq) goto loc_82330B80;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,8552
	ctx.r5.s64 = ctx.r10.s64 + 8552;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,692
	ctx.r6.s64 = 692;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x82330B78;
	sub_82330A38(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82330b90
	goto loc_82330B90;
loc_82330B80:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82330B90:
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
loc_82330B94:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82330bf8
	if (!ctx.cr6.eq) goto loc_82330BF8;
loc_82330B9C:
	// lwz r3,0(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 0);
	// bl 0x8233e820
	ctx.lr = 0x82330BA4;
	sub_8233E820(ctx, base);
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330bec
	if (ctx.cr6.eq) goto loc_82330BEC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r4,r11,-11780
	ctx.r4.s64 = ctx.r11.s64 + -11780;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826a0568
	ctx.lr = 0x82330BCC;
	sub_826A0568(ctx, base);
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82330BEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82330BEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1cec
	return;
loc_82330BF8:
	// stw r23,0(r30)
	REX_STORE_U32(r30.u32 + 0, r23.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823306b8
	ctx.lr = 0x82330C0C;
	sub_823306B8(ctx, base);
	// rlwinm r11,r27,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x400000;
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// beq cr6,0x82330c40
	if (ctx.cr6.eq) goto loc_82330C40;
	// lwz r10,296(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 296);
	// lwz r9,292(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 292);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82330c7c
	if (!ctx.cr6.gt) goto loc_82330C7C;
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// b 0x82330c7c
	goto loc_82330C7C;
loc_82330C40:
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r8,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r8.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r7,288(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 288);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82330c7c
	if (!ctx.cr6.gt) goto loc_82330C7C;
	// stw r11,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r11.u32);
loc_82330C7C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82330cb4
	if (!ctx.cr6.gt) goto loc_82330CB4;
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 332);
	// lwz r9,288(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 288);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// stw r8,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r8.u32);
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stw r7,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r7.u32);
loc_82330CB4:
	// lbz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330ce8
	if (!ctx.cr6.eq) goto loc_82330CE8;
	// clrlwi r11,r21,24
	ctx.r11.u64 = r21.u32 & 0xFF;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330ce8
	if (ctx.cr6.eq) goto loc_82330CE8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82330ce8
	if (ctx.cr6.eq) goto loc_82330CE8;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x82330CE8;
	sub_823EF5F0(ctx, base);
loc_82330CE8:
	// lwz r3,0(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 0);
	// bl 0x8233e820
	ctx.lr = 0x82330CF0;
	sub_8233E820(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8234CE40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234ce58
	if (!ctx.cr6.eq) goto loc_8234CE58;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_8234CE58:
	// lwz r10,32(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8234ce70
	if (!ctx.cr6.eq) goto loc_8234CE70;
	// li r3,49
	ctx.r3.s64 = 49;
	// blr 
	return;
loc_8234CE70:
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// ble cr6,0x8234ce80
	if (!ctx.cr6.gt) goto loc_8234CE80;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_8234CE80:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bgt cr6,0x8234cea0
	if (ctx.cr6.gt) goto loc_8234CEA0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x8234cea4
	if (!ctx.cr6.lt) goto loc_8234CEA4;
loc_8234CEA0:
	// fmr f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f0.f64;
loc_8234CEA4:
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// stfs f1,340(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 340, temp.u32);
	// stfs f2,344(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 344, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stfs f3,348(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 348, temp.u32);
	// stw r9,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82350FD0) {
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
	ctx.lr = 0x82350FEC;
	sub_8235ACE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82351000
	if (!ctx.cr6.eq) goto loc_82351000;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8235b958
	ctx.lr = 0x82351000;
	sub_8235B958(ctx, base);
loc_82351000:
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

DEFINE_REX_FUNC(sub_82352058) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r10,r11,15920
	ctx.r10.s64 = ctx.r11.s64 + 15920;
	// lwz r11,456(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823520cc
	if (!ctx.cr6.eq) goto loc_823520CC;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// stw r11,456(r10)
	REX_STORE_U32(ctx.r10.u32 + 456, ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823520cc
	if (!ctx.cr6.eq) goto loc_823520CC;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lis r6,32
	ctx.r6.s64 = 2097152;
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r6,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// bne cr6,0x823520bc
	if (!ctx.cr6.eq) goto loc_823520BC;
	// lis r8,22616
	ctx.r8.s64 = 1482162176;
	// stw r9,436(r10)
	REX_STORE_U32(ctx.r10.u32 + 436, ctx.r9.u32);
	// ori r7,r8,22616
	ctx.r7.u64 = ctx.r8.u64 | 22616;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_823520BC:
	// li r10,4096
	ctx.r10.s64 = 4096;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_823520CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823541A0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,420
	ctx.r6.s64 = 420;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82331a00
	ctx.lr = 0x823541D0;
	sub_82331A00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823410f8
	ctx.lr = 0x823541DC;
	sub_823410F8(ctx, base);
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

DEFINE_REX_FUNC(sub_823557B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823557B8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x8233e398
	ctx.lr = 0x823557DC;
	sub_8233E398(ctx, base);
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82355800
	if (ctx.cr6.eq) goto loc_82355800;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82355800
	if (ctx.cr6.eq) goto loc_82355800;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8233fc60
	ctx.lr = 0x82355800;
	sub_8233FC60(ctx, base);
loc_82355800:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,412(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 412);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8233e200
	ctx.lr = 0x82355814;
	sub_8233E200(ctx, base);
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235583c
	if (ctx.cr6.eq) goto loc_8235583C;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8235583c
	if (ctx.cr6.eq) goto loc_8235583C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8233fc60
	ctx.lr = 0x8235583C;
	sub_8233FC60(ctx, base);
loc_8235583C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8235584c
	if (ctx.cr6.eq) goto loc_8235584C;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_8235584C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x82355860
	if (!ctx.cr6.eq) goto loc_82355860;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// li r3,22
	ctx.r3.s64 = 22;
	// bne cr6,0x82355864
	if (!ctx.cr6.eq) goto loc_82355864;
loc_82355860:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82355864:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82359F58) {
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
	ctx.lr = 0x82359F60;
	// li r23,1
	r23.s64 = 1;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// slw r10,r23,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r4.u8 & 0x3F));
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// std r9,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r9.u64);
	// lfd f13,-112(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// fdivs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// ble cr6,0x8235a340
	if (!ctx.cr6.gt) goto loc_8235A340;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lfs f10,3712(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3712);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f11.f64 = double(temp.f32);
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// lfs f12,10520(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 10520);
	ctx.f12.f64 = double(temp.f32);
	// ori r24,r8,32768
	r24.u64 = ctx.r8.u64 | 32768;
	// ori r25,r7,49151
	r25.u64 = ctx.r7.u64 | 49151;
	// ori r26,r6,65535
	r26.u64 = ctx.r6.u64 | 65535;
loc_82359FCC:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x8235a330
	if (!ctx.cr6.gt) goto loc_8235A330;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// rlwinm r27,r5,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r28,r5,4,0,27
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r3
	r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_82359FF4:
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r11,r6,r5
	ctx.r11.u64 = uint32_t((ctx.r5.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r6.s32 / ctx.r5.s32 : 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 & ~ctx.r9.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// beq cr6,0x8235a030
	if (ctx.cr6.eq) goto loc_8235A030;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_8235A01C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwimi r9,r10,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bdnz 0x8235a01c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235A01C;
loc_8235A030:
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r11.u64);
	// lfd f0,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f8,f13
	ctx.f8.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f8,f9
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fctiwz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f6.u64);
	// lwz r11,-100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8235a064
	if (!ctx.cr6.lt) goto loc_8235A064;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8235A064:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r10,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8235a0d0
	if (ctx.cr6.gt) goto loc_8235A0D0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8235a098
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8235A098;
	// bdzf 4*cr6+eq,0x8235a0ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8235A0AC;
	// bne cr6,0x8235a0c0
	if (!ctx.cr6.eq) goto loc_8235A0C0;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8235a0d4
	goto loc_8235A0D4;
loc_8235A098:
	// subf r11,r11,r25
	ctx.r11.u64 = r25.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x8235a0d4
	goto loc_8235A0D4;
loc_8235A0AC:
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x8235a0d4
	goto loc_8235A0D4;
loc_8235A0C0:
	// subf r11,r11,r26
	ctx.r11.u64 = r26.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8235a0d4
	goto loc_8235A0D4;
loc_8235A0D0:
	// fmr f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f11.f64;
loc_8235A0D4:
	// fsubs f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fmuls f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f7.u64);
	// lwz r11,-100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8235a0f4
	if (!ctx.cr6.lt) goto loc_8235A0F4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8235A0F4:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// srawi r10,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 13;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8235a160
	if (ctx.cr6.gt) goto loc_8235A160;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8235a128
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8235A128;
	// bdzf 4*cr6+eq,0x8235a13c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8235A13C;
	// bne cr6,0x8235a150
	if (!ctx.cr6.eq) goto loc_8235A150;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8235a164
	goto loc_8235A164;
loc_8235A128:
	// subf r11,r11,r25
	ctx.r11.u64 = r25.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x8235a164
	goto loc_8235A164;
loc_8235A13C:
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x8235a164
	goto loc_8235A164;
loc_8235A150:
	// subf r11,r11,r26
	ctx.r11.u64 = r26.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8235a164
	goto loc_8235A164;
loc_8235A160:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_8235A164:
	// add r7,r6,r5
	ctx.r7.u64 = ctx.r6.u64 + ctx.r5.u64;
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8235a31c
	if (!ctx.cr6.lt) goto loc_8235A31C;
	// subf r11,r6,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r6.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8235a2ac
	if (ctx.cr6.lt) goto loc_8235A2AC;
	// subf r10,r6,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r6.u64;
	// addi r11,r31,-12
	ctx.r11.s64 = r31.s64 + -12;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// addi r10,r30,-12
	ctx.r10.s64 = r30.s64 + -12;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8235A1A8:
	// lfs f8,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f6,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f4,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmsubs f2,f6,f13,f7
	ctx.f2.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, -ctx.f7.f64)));
	// fmadds f1,f6,f0,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f5.f64)));
	// fadds f8,f2,f4
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f7,f1,f3
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f5,f4,f2
	ctx.f5.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// stfs f5,4(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fsubs f4,f3,f1
	ctx.f4.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// lfs f1,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// stfs f4,8(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f2,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f6,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f6,f0
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f8,f1,f0
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f5,f1,f13,f7
	ctx.f5.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f7.f64)));
	// fmsubs f6,f6,f13,f8
	ctx.f6.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, -ctx.f8.f64)));
	// fadds f1,f5,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// stfs f1,16(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fsubs f7,f2,f5
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// fadds f4,f6,f3
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// stfs f4,12(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f8,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f3,f3,f6
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f6.f64));
	// stfs f3,12(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f7,16(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f5,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmsubs f1,f8,f13,f3
	ctx.f1.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, -ctx.f3.f64)));
	// fmadds f8,f8,f0,f2
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f2.f64)));
	// fadds f7,f1,f6
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stfs f7,20(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fsubs f6,f6,f1
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// fadds f4,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// stfs f4,24(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f3,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// stfs f6,20(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f2,24(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f1,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f8,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmsubs f4,f3,f13,f6
	ctx.f4.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, -ctx.f6.f64)));
	// fmadds f3,f3,f0,f5
	ctx.f3.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f5.f64)));
	// fadds f2,f4,f1
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// stfs f2,28(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fsubs f1,f1,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f4.f64));
	// fadds f7,f3,f8
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// stfsu f7,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfs f1,28(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// fsubs f6,f8,f3
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// stfsu f6,32(r10)
	ea = 32 + ctx.r10.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8235a1a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235A1A8;
loc_8235A2AC:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8235a31c
	if (!ctx.cr6.lt) goto loc_8235A31C;
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8235A2D8:
	// lfs f8,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f4,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmsubs f2,f7,f13,f6
	ctx.f2.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, -ctx.f6.f64)));
	// fmadds f1,f8,f13,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f5.f64)));
	// fadds f8,f2,f4
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f7,f1,f3
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// stfsu f7,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fsubs f6,f4,f2
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// stfs f6,4(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fsubs f5,f3,f1
	ctx.f5.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// stfsu f5,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8235a2d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235A2D8;
loc_8235A31C:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r6,r27,r6
	ctx.r6.u64 = r27.u64 + ctx.r6.u64;
	// add r31,r28,r31
	r31.u64 = r28.u64 + r31.u64;
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
	// bne 0x82359ff4
	if (!ctx.cr0.eq) goto loc_82359FF4;
loc_8235A330:
	// addic. r22,r22,-1
	ctx.xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// rlwinm r5,r5,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r23,r23,1,0,30
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x82359fcc
	if (!ctx.cr0.eq) goto loc_82359FCC;
loc_8235A340:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8238A630) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8238a640
	if (!ctx.cr6.eq) goto loc_8238A640;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8238A640:
	// b 0x8238a550
	sub_8238A550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8238C140) {
	REX_FUNC_PROLOGUE();
	// lbz r10,633(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 633);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8238c164
	if (!ctx.cr6.eq) goto loc_8238C164;
	// lwz r9,468(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, ctx.r10.u32);
loc_8238C164:
	// lbz r10,633(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 633);
	// rlwinm r9,r10,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8238c184
	if (!ctx.cr6.eq) goto loc_8238C184;
	// lwz r9,468(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// clrlwi r8,r10,28
	ctx.r8.u64 = ctx.r10.u32 & 0xF;
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// stw r7,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, ctx.r7.u32);
loc_8238C184:
	// lwz r10,468(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// ble cr6,0x8238c198
	if (!ctx.cr6.gt) goto loc_8238C198;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r10,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, ctx.r10.u32);
loc_8238C198:
	// lwz r10,468(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8238c1ac
	if (!ctx.cr6.lt) goto loc_8238C1AC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, ctx.r10.u32);
loc_8238C1AC:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823924A0) {
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
	// lwz r3,256(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 256);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82340ff0
	ctx.lr = 0x823924C0;
	sub_82340FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823924e4
	if (!ctx.cr6.eq) goto loc_823924E4;
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
loc_823924E4:
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

DEFINE_REX_FUNC(sub_82393AF8) {
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
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// mullw r30,r4,r5
	r30.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,20112
	ctx.r5.s64 = ctx.r10.s64 + 20112;
	// li r6,33
	ctx.r6.s64 = 33;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82393B38;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82393b4c
	if (ctx.cr6.eq) goto loc_82393B4C;
	// lwz r11,1272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1272);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,1272(r31)
	REX_STORE_U32(r31.u32 + 1272, ctx.r11.u32);
loc_82393B4C:
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

DEFINE_REX_FUNC(sub_823971C8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823971d8
	if (!ctx.cr6.eq) goto loc_823971D8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823971D8:
	// b 0x823968a0
	sub_823968A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8239A6B0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8239a6c0
	if (!ctx.cr6.eq) goto loc_8239A6C0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239A6C0:
	// b 0x82398380
	sub_82398380(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8239B4F8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r11,20492
	ctx.r4.s64 = ctx.r11.s64 + 20492;
	// bl 0x823314a0
	ctx.lr = 0x8239B518;
	sub_823314A0(ctx, base);
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

DEFINE_REX_FUNC(sub_8239BBF0) {
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
	// li r5,172
	ctx.r5.s64 = 172;
	// addi r30,r31,16624
	r30.s64 = r31.s64 + 16624;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8239BC1C;
	sub_823EF5F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,20612
	ctx.r11.s64 = ctx.r11.s64 + 20612;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// stw r11,16624(r31)
	REX_STORE_U32(r31.u32 + 16624, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lis r31,-32198
	r31.s64 = -2110128128;
	// stw r9,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// lis r4,-32198
	ctx.r4.s64 = -2110128128;
	// addi r10,r3,-19208
	ctx.r10.s64 = ctx.r3.s64 + -19208;
	// addi r11,r31,12504
	ctx.r11.s64 = r31.s64 + 12504;
	// addi r9,r4,-18304
	ctx.r9.s64 = ctx.r4.s64 + -18304;
	// stw r10,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// lis r5,-32198
	ctx.r5.s64 = -2110128128;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// stw r9,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r9.u32);
	// lis r7,-32198
	ctx.r7.s64 = -2110128128;
	// addi r11,r5,-17480
	ctx.r11.s64 = ctx.r5.s64 + -17480;
	// addi r10,r6,-18280
	ctx.r10.s64 = ctx.r6.s64 + -18280;
	// addi r9,r7,-18168
	ctx.r9.s64 = ctx.r7.s64 + -18168;
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// stw r10,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r10.u32);
	// stw r9,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r8,-18056
	ctx.r11.s64 = ctx.r8.s64 + -18056;
	// li r9,680
	ctx.r9.s64 = 680;
	// stw r10,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r10.u32);
	// stw r11,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_823A0540) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823A0548;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x823d22c0
	ctx.lr = 0x823A055C;
	sub_823D22C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a058c
	if (!ctx.cr6.eq) goto loc_823A058C;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24);
	// add r11,r31,r29
	ctx.r11.u64 = r31.u64 + r29.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,172(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A058C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823A058C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823A0DA8) {
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
	ctx.lr = 0x823A0DB0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// rlwinm r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// lwz r26,23372(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 23372);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a0de4
	if (ctx.cr6.eq) goto loc_823A0DE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_823A0DE4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x823A0DEC;
	sub_8233E7E0(ctx, base);
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a0e2c
	if (!ctx.cr6.gt) goto loc_823A0E2C;
	// addi r29,r30,124
	r29.s64 = r30.s64 + 124;
loc_823A0E00:
	// lwzu r3,4(r29)
	ea = 4 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A0E18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,124(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 124);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823a0e00
	if (ctx.cr6.lt) goto loc_823A0E00;
loc_823A0E2C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8233e820
	ctx.lr = 0x823A0E34;
	sub_8233E820(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823A5140) {
	REX_FUNC_PROLOGUE();
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cac
	ctx.lr = 0x823A5148;
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lhz r9,38(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 38);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// bne cr6,0x823a54b4
	if (!ctx.cr6.eq) goto loc_823A54B4;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823a559c
	if (!ctx.cr6.gt) goto loc_823A559C;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r3,100
	ctx.r11.s64 = ctx.r3.s64 + 100;
	// lfs f13,19092(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 19092);
	ctx.f13.f64 = double(temp.f32);
loc_823A5184:
	// lwz r6,-28(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -28);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// lwz r8,-60(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -60);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// lfs f12,148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r30,r1,480
	r30.s64 = ctx.r1.s64 + 480;
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// addi r29,r1,512
	r29.s64 = ctx.r1.s64 + 512;
	// lhz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// addi r28,r1,544
	r28.s64 = ctx.r1.s64 + 544;
	// addi r27,r1,576
	r27.s64 = ctx.r1.s64 + 576;
	// addi r26,r1,368
	r26.s64 = ctx.r1.s64 + 368;
	// addi r25,r1,176
	r25.s64 = ctx.r1.s64 + 176;
	// stw r6,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r6.u32);
	// lvx128 v62,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkd3d128 v60,v63,20
	temp.u32 = ctx.v63.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v60.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v63.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v60.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v63.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v60.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v63.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v60.u32[0] = vTemp.u32[0];
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// vupkd3d128 v61,v62,20
	temp.u32 = ctx.v62.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v61.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v62.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v61.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v62.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v61.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v62.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v61.u32[0] = vTemp.u32[0];
	// stvx128 v60,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f10,460(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 460);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r1,400
	ctx.r8.s64 = ctx.r1.s64 + 400;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// stvx128 v61,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f11,428(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 428);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f9,f10,f12,f11
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, -ctx.f11.f64)));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,484(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 484, temp.u32);
	// lvx128 v63,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v59,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vpkd3d128 v59,v63,5,2,0
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v59.u16[3] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v59.u16[3] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v59.u16[2] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v59.u16[2] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v59.u16[1] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v59.u16[1] |= ((ctx.v63.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v59.u16[0] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v59.u16[0] |= ((ctx.v63.u32[0]&0x80000000)>>16);
	// fabs f7,f8
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f7.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// stvx128 v59,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,520(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 520);
	// sth r6,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r6.u16);
	// lfs f6,148(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f6.f64 = double(temp.f32);
	// lwz r6,-60(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -60);
	// fadds f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// lwz r4,-28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -28);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// stw r6,556(r1)
	REX_STORE_U32(ctx.r1.u32 + 556, ctx.r6.u32);
	// lvx128 v58,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r4,2(r4)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// vupkd3d128 v57,v58,20
	temp.u32 = ctx.v58.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v57.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v58.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v57.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v58.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v57.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v58.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v57.u32[0] = vTemp.u32[0];
	// stw r4,588(r1)
	REX_STORE_U32(ctx.r1.u32 + 588, ctx.r4.u32);
	// lvx128 v56,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkd3d128 v55,v56,20
	temp.u32 = ctx.v56.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v55.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v56.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v55.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v56.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v55.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v56.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v55.u32[0] = vTemp.u32[0];
	// stvx128 v57,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f4,380(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 380);
	ctx.f4.f64 = double(temp.f32);
	// stvx128 v55,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f3,188(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f3.f64 = double(temp.f32);
	// fmsubs f2,f4,f6,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f4.f64, ctx.f6.f64, -ctx.f3.f64)));
	// fmuls f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// stfs f1,532(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 532, temp.u32);
	// lvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v54,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vpkd3d128 v54,v63,5,2,0
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v54.u16[3] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v54.u16[3] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v54.u16[2] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v54.u16[2] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v54.u16[1] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v54.u16[1] |= ((ctx.v63.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v54.u16[0] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v54.u16[0] |= ((ctx.v63.u32[0]&0x80000000)>>16);
	// fabs f0,f1
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// stvx128 v54,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,216(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// sth r3,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r3.u16);
	// lfs f12,148(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,-60(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -60);
	// fadds f11,f0,f5
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// lwz r4,-28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -28);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r6,4(r5)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r5.u32 + 4);
	// stw r6,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r6.u32);
	// lvx128 v53,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkd3d128 v52,v53,20
	temp.u32 = ctx.v53.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v52.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v53.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v52.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v53.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v52.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v53.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v52.u32[0] = vTemp.u32[0];
	// lhz r5,4(r4)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + 4);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// stw r5,508(r1)
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r5.u32);
	// stvx128 v52,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f10,252(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f10.f64 = double(temp.f32);
	// lvx128 v51,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// vupkd3d128 v50,v51,20
	temp.u32 = ctx.v51.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v50.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v51.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v50.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v51.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v50.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v51.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v50.u32[0] = vTemp.u32[0];
	// addi r7,r1,432
	ctx.r7.s64 = ctx.r1.s64 + 432;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r31,r1,160
	r31.s64 = ctx.r1.s64 + 160;
	// addi r30,r1,192
	r30.s64 = ctx.r1.s64 + 192;
	// addi r28,r1,256
	r28.s64 = ctx.r1.s64 + 256;
	// stvx128 v50,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lfs f9,284(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f9.f64 = double(temp.f32);
	// fmsubs f8,f10,f12,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, -ctx.f9.f64)));
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f7,436(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v49,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vpkd3d128 v49,v63,5,2,0
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v49.u16[3] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v49.u16[3] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v49.u16[2] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v49.u16[2] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v49.u16[1] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v49.u16[1] |= ((ctx.v63.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v49.u16[0] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v49.u16[0] |= ((ctx.v63.u32[0]&0x80000000)>>16);
	// addi r7,r1,464
	ctx.r7.s64 = ctx.r1.s64 + 464;
	// addi r29,r1,224
	r29.s64 = ctx.r1.s64 + 224;
	// fabs f6,f7
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f6.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// addi r27,r1,320
	r27.s64 = ctx.r1.s64 + 320;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stvx128 v49,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,136(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// sth r6,4(r3)
	REX_STORE_U16(ctx.r3.u32 + 4, ctx.r6.u16);
	// lfs f5,148(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f5.f64 = double(temp.f32);
	// lwz r25,-28(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + -28);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwz r3,-60(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -60);
	// fadds f4,f6,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// lwz r26,4(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r25,6(r25)
	r25.u64 = REX_LOAD_U16(r25.u32 + 6);
	// stw r25,572(r1)
	REX_STORE_U32(ctx.r1.u32 + 572, r25.u32);
	// lvx128 v48,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r5,6(r3)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + 6);
	// vupkd3d128 v47,v48,20
	temp.u32 = ctx.v48.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v47.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v48.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v47.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v48.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v47.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v48.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v47.u32[0] = vTemp.u32[0];
	// stw r5,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r5.u32);
	// lvx128 v46,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkd3d128 v45,v46,20
	temp.u32 = ctx.v46.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v45.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v46.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v45.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v46.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v45.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v46.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v45.u32[0] = vTemp.u32[0];
	// stvx128 v47,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v45,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f3,476(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 476);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,156(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f2.f64 = double(temp.f32);
	// fmsubs f1,f2,f5,f3
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f5.f64, -ctx.f3.f64)));
	// fmuls f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lvx128 v63,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v44,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vpkd3d128 v44,v63,5,2,0
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v44.u16[3] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v44.u16[3] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v44.u16[2] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v44.u16[2] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v44.u16[1] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v44.u16[1] |= ((ctx.v63.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v44.u16[0] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v44.u16[0] |= ((ctx.v63.u32[0]&0x80000000)>>16);
	// fabs f12,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stvx128 v44,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,200(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// sth r4,6(r26)
	REX_STORE_U16(r26.u32 + 6, ctx.r4.u16);
	// lfs f10,148(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// lwz r7,-28(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + -28);
	// fadds f11,f12,f4
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// lwz r8,-60(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -60);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r3,8(r7)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + 8);
	// addi r7,r1,384
	ctx.r7.s64 = ctx.r1.s64 + 384;
	// stw r3,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r3.u32);
	// lvx128 v42,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r4,8(r8)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + 8);
	// vupkd3d128 v41,v42,20
	temp.u32 = ctx.v42.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v41.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v42.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v41.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v42.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v41.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v42.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v41.u32[0] = vTemp.u32[0];
	// stw r4,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// lvx128 v43,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkd3d128 v40,v43,20
	temp.u32 = ctx.v43.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v40.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v43.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v40.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v43.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v40.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v43.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v40.u32[0] = vTemp.u32[0];
	// stvx128 v41,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f9,300(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 300);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// addi r6,r1,48
	ctx.r6.s64 = ctx.r1.s64 + 48;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,64
	ctx.r3.s64 = ctx.r1.s64 + 64;
	// stvx128 v40,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f8,332(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 332);
	ctx.f8.f64 = double(temp.f32);
	// fmsubs f7,f8,f10,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, -ctx.f9.f64)));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f6,356(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v39,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// addi r31,r1,32
	r31.s64 = ctx.r1.s64 + 32;
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// fabs f5,f6
	ctx.f5.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// addi r29,r1,16
	r29.s64 = ctx.r1.s64 + 16;
	// vpkd3d128 v39,v63,5,2,0
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v39.u16[3] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v39.u16[3] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v39.u16[2] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v39.u16[2] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v39.u16[1] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v39.u16[1] |= ((ctx.v63.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v39.u16[0] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v39.u16[0] |= ((ctx.v63.u32[0]&0x80000000)>>16);
	// stvx128 v39,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,392(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 392);
	// sth r8,8(r5)
	REX_STORE_U16(ctx.r5.u32 + 8, ctx.r8.u16);
	// lfs f4,148(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f4.f64 = double(temp.f32);
	// lwz r7,-28(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + -28);
	// fadds f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// lwz r5,-60(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -60);
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lhz r7,10(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 10);
	// lhz r5,10(r5)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + 10);
	// stw r5,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r5.u32);
	// lvx128 v36,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r7,76(r1)
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r7.u32);
	// vupkd3d128 v35,v36,20
	temp.u32 = ctx.v36.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v35.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v36.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v35.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v36.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v35.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v36.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v35.u32[0] = vTemp.u32[0];
	// stvx128 v35,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// lvx128 v38,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkd3d128 v37,v38,20
	temp.u32 = ctx.v38.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v37.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v38.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v37.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v38.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v37.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v38.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v37.u32[0] = vTemp.u32[0];
	// stvx128 v37,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f2,44(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// fmsubs f0,f1,f4,f2
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f4.f64, -ctx.f2.f64)));
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lvx128 v63,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fadds f0,f11,f3
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// vor128 v34,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vpkd3d128 v34,v63,5,2,0
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v34.u16[3] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v34.u16[3] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v34.u16[2] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v34.u16[2] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v34.u16[1] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v34.u16[1] |= ((ctx.v63.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v34.u16[0] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v34.u16[0] |= ((ctx.v63.u32[0]&0x80000000)>>16);
	// stvx128 v34,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 24);
	// sth r4,10(r8)
	REX_STORE_U16(ctx.r8.u32 + 10, ctx.r4.u16);
	// lhz r8,36(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 36);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823a5184
	if (ctx.cr6.lt) goto loc_823A5184;
	// b 0x823a559c
	goto loc_823A559C;
loc_823A54B4:
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823a559c
	if (!ctx.cr6.gt) goto loc_823A559C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r10,72
	ctx.r9.s64 = ctx.r10.s64 + 72;
	// lfs f13,19092(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19092);
	ctx.f13.f64 = double(temp.f32);
loc_823A54D0:
	// lhz r11,38(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 38);
	// li r8,0
	ctx.r8.s64 = 0;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x823a5584
	if (!ctx.cr6.gt) goto loc_823A5584;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A54E8:
	// lwz r6,-32(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + -32);
	// addi r5,r1,16
	ctx.r5.s64 = ctx.r1.s64 + 16;
	// lwz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r30,r1,48
	r30.s64 = ctx.r1.s64 + 48;
	// lfs f12,148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// lwz r29,32(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// addi r28,r1,32
	r28.s64 = ctx.r1.s64 + 32;
	// lhzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// addi r27,r1,64
	r27.s64 = ctx.r1.s64 + 64;
	// lhzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r6,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r6.u32);
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
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
	// lvx128 v33,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkd3d128 v32,v33,20
	temp.u32 = ctx.v33.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v32.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v33.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v32.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v33.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v32.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v33.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v32.u32[0] = vTemp.u32[0];
	// stvx128 v62,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v32,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,60(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// fmsubs f9,f10,f12,f11
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, -ctx.f11.f64)));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,36(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 36, temp.u32);
	// fabs f7,f8
	ctx.f7.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// lvx128 v63,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fadds f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
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
	// stvx128 v61,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,72(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 72);
	// sthx r3,r29,r11
	REX_STORE_U16(r29.u32 + ctx.r11.u32, ctx.r3.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r5,38(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 38);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x823a54e8
	if (ctx.cr6.lt) goto loc_823A54E8;
loc_823A5584:
	// lhz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 36);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823a54d0
	if (ctx.cr6.lt) goto loc_823A54D0;
loc_823A559C:
	// addi r11,r1,16
	ctx.r11.s64 = ctx.r1.s64 + 16;
	// stfs f0,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// addi r9,r1,16
	ctx.r9.s64 = ctx.r1.s64 + 16;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vpkd3d128 v60,v63,5,2,0
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v60.u16[3] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v60.u16[3] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v60.u16[2] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v60.u16[2] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v60.u16[1] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v60.u16[1] |= ((ctx.v63.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v60.u16[0] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v60.u16[0] |= ((ctx.v63.u32[0]&0x80000000)>>16);
	// lfs f0,3784(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3784);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v60,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,24(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 24);
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// std r5,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x823a55ec
	if (ctx.cr6.lt) goto loc_823A55EC;
	// li r11,64
	ctx.r11.s64 = 64;
	// sth r11,144(r10)
	REX_STORE_U16(ctx.r10.u32 + 144, ctx.r11.u16);
loc_823A55EC:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_823FCD40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823FCD48;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x824008a8
	ctx.lr = 0x823FCD60;
	sub_824008A8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82404240
	ctx.lr = 0x823FCD78;
	sub_82404240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823fcd98
	if (!ctx.cr0.lt) goto loc_823FCD98;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_823FCD84:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82400c48
	ctx.lr = 0x823FCD8C;
	sub_82400C48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d0c
	return;
loc_823FCD98:
	// li r31,0
	r31.s64 = 0;
	// b 0x823fcd84
	goto loc_823FCD84;
}

DEFINE_REX_FUNC(sub_823FF708) {
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
	ctx.lr = 0x823FF710;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32120
	r30.s64 = -2105016320;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lbz r11,15949(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 15949);
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// lis r29,-32120
	r29.s64 = -2105016320;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823ff778
	if (!ctx.cr0.eq) goto loc_823FF778;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,17512
	ctx.r3.s64 = ctx.r11.s64 + 17512;
	// bl 0x823eeca0
	ctx.lr = 0x823FF754;
	sub_823EECA0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823ff770
	if (ctx.cr6.eq) goto loc_823FF770;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r11,15948(r29)
	REX_STORE_U8(r29.u32 + 15948, ctx.r11.u8);
	// addi r3,r10,17424
	ctx.r3.s64 = ctx.r10.s64 + 17424;
	// bl 0x823ecbd8
	ctx.lr = 0x823FF770;
	sub_823ECBD8(ctx, base);
loc_823FF770:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,15949(r30)
	REX_STORE_U8(r30.u32 + 15949, ctx.r11.u8);
loc_823FF778:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823ff3e8
	ctx.lr = 0x823FF79C;
	sub_823FF3E8(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// blt 0x823ffbc0
	if (ctx.cr0.lt) goto loc_823FFBC0;
	// lbz r11,15948(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 15948);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823ffbc0
	if (ctx.cr0.eq) goto loc_823FFBC0;
	// rlwinm. r11,r31,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823ffbc0
	if (!ctx.cr0.eq) goto loc_823FFBC0;
	// rlwinm. r11,r31,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823ffbc0
	if (!ctx.cr0.eq) goto loc_823FFBC0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x823ffbc0
	if (ctx.cr6.eq) goto loc_823FFBC0;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ffbc0
	if (ctx.cr6.eq) goto loc_823FFBC0;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// oris r6,r31,16
	ctx.r6.u64 = r31.u64 | 1048576;
	// stw r29,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// oris r26,r31,512
	r26.u64 = r31.u64 | 33554432;
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,118
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 118, ctx.xer);
	// stw r29,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// bne cr6,0x823ff80c
	if (!ctx.cr6.eq) goto loc_823FF80C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,-26484
	ctx.r11.s64 = ctx.r11.s64 + -26484;
	// b 0x823ff814
	goto loc_823FF814;
loc_823FF80C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,-26476
	ctx.r11.s64 = ctx.r11.s64 + -26476;
loc_823FF814:
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823ff3e8
	ctx.lr = 0x823FF838;
	sub_823FF3E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823ff854
	if (!ctx.cr0.lt) goto loc_823FF854;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_823FF844:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ffbc0
	if (ctx.cr6.eq) goto loc_823FFBC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x823ffbb4
	goto loc_823FFBB4;
loc_823FF854:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x82400810
	ctx.lr = 0x823FF860;
	sub_82400810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823ff8ac
	if (!ctx.cr0.lt) goto loc_823FF8AC;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ff888
	if (ctx.cr6.eq) goto loc_823FF888;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FF884;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
loc_823FF888:
	// lwz r3,120(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ff8a4
	if (ctx.cr6.eq) goto loc_823FF8A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FF8A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FF8A4:
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// b 0x823ff844
	goto loc_823FF844;
loc_823FF8AC:
	// stw r29,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FF8C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FF8E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826a2e60
	ctx.lr = 0x823FF8EC;
	sub_826A2E60(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x823ff8fc
	if (ctx.cr6.eq) goto loc_823FF8FC;
	// lwz r30,16(r23)
	r30.u64 = REX_LOAD_U32(r23.u32 + 16);
	// b 0x823ff900
	goto loc_823FF900;
loc_823FF8FC:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_823FF900:
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FF914;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FF930;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,120(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FF94C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FF964;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r28,124(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,3720
	ctx.r10.s64 = ctx.r11.s64 + 3720;
	// bl 0x824e19b8
	ctx.lr = 0x823FF998;
	sub_824E19B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823ff9f8
	if (!ctx.cr0.lt) goto loc_823FF9F8;
loc_823FF9A0:
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ff9c0
	if (ctx.cr6.eq) goto loc_823FF9C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FF9BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
loc_823FF9C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FF9D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823ff9f0
	if (ctx.cr6.eq) goto loc_823FF9F0;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FF9F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FF9F0:
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x823ff844
	goto loc_823FF844;
loc_823FF9F8:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,118
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 118, ctx.xer);
	// bne cr6,0x823ffa24
	if (!ctx.cr6.eq) goto loc_823FFA24;
	// bl 0x82205518
	ctx.lr = 0x823FFA20;
	sub_82205518(ctx, base);
	// b 0x823ffa28
	goto loc_823FFA28;
loc_823FFA24:
	// bl 0x82205518
	ctx.lr = 0x823FFA28;
	sub_82205518(ctx, base);
loc_823FFA28:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ffb58
	if (!ctx.cr6.eq) goto loc_823FFB58;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,17288
	ctx.r3.s64 = ctx.r11.s64 + 17288;
	// bl 0x823ecbd8
	ctx.lr = 0x823FFA3C;
	sub_823ECBD8(ctx, base);
	// stw r29,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82400810
	ctx.lr = 0x823FFA4C;
	sub_82400810(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// blt 0x823ff9a0
	if (ctx.cr0.lt) goto loc_823FF9A0;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r30,128(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FFA6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FFA88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x823FFA94;
	sub_826A1E70(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ffab0
	if (ctx.cr6.eq) goto loc_823FFAB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FFAB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FFAB0:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FFACC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FFAE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ffb04
	if (ctx.cr6.eq) goto loc_823FFB04;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FFB04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FFB04:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ffb28
	if (ctx.cr6.eq) goto loc_823FFB28;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FFB28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FFB28:
	// stw r28,0(r21)
	REX_STORE_U32(r21.u32 + 0, r28.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x823ffbc0
	if (ctx.cr6.eq) goto loc_823FFBC0;
	// lwz r3,12(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ffbc0
	if (ctx.cr6.eq) goto loc_823FFBC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FFB50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,12(r23)
	REX_STORE_U32(r23.u32 + 12, r29.u32);
	// b 0x823ffbc0
	goto loc_823FFBC0;
loc_823FFB58:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FFB6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ffb88
	if (ctx.cr6.eq) goto loc_823FFB88;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FFB88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FFB88:
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ffba4
	if (ctx.cr6.eq) goto loc_823FFBA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FFBA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FFBA4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823ffbc0
	if (ctx.cr6.eq) goto loc_823FFBC0;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_823FFBB4:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FFBC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FFBC0:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_82415D08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82415D10;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,64(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82415d2c
	if (ctx.cr6.eq) goto loc_82415D2C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82415bf0
	ctx.lr = 0x82415D2C;
	sub_82415BF0(ctx, base);
loc_82415D2C:
	// lwz r3,116(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82415d40
	if (ctx.cr6.eq) goto loc_82415D40;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82415b90
	ctx.lr = 0x82415D40;
	sub_82415B90(ctx, base);
loc_82415D40:
	// lwz r31,628(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 628);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82415d60
	if (ctx.cr6.eq) goto loc_82415D60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82415ab0
	ctx.lr = 0x82415D54;
	sub_82415AB0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x82415D60;
	sub_823F0350(ctx, base);
loc_82415D60:
	// lwz r3,68(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82415d74
	if (ctx.cr6.eq) goto loc_82415D74;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82415b90
	ctx.lr = 0x82415D74;
	sub_82415B90(ctx, base);
loc_82415D74:
	// addi r31,r30,120
	r31.s64 = r30.s64 + 120;
	// li r29,127
	r29.s64 = 127;
loc_82415D7C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82415d90
	if (ctx.cr6.eq) goto loc_82415D90;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82415a50
	ctx.lr = 0x82415D90;
	sub_82415A50(ctx, base);
loc_82415D90:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82415d7c
	if (!ctx.cr0.eq) goto loc_82415D7C;
	// lwz r11,680(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82415db0
	if (ctx.cr6.eq) goto loc_82415DB0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82414950
	ctx.lr = 0x82415DB0;
	sub_82414950(ctx, base);
loc_82415DB0:
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x8241a0f8
	ctx.lr = 0x82415DB8;
	sub_8241A0F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824445b8
	ctx.lr = 0x82415DC0;
	sub_824445B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8241B178) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8241B180;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241b2c8
	if (ctx.cr0.eq) goto loc_8241B2C8;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r30,r4,1
	r30.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8241b2c8
	if (!ctx.cr6.lt) goto loc_8241B2C8;
	// lbz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// bl 0x826a0800
	ctx.lr = 0x8241B1B4;
	sub_826A0800(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8241b2c8
	if (ctx.cr0.eq) goto loc_8241B2C8;
	// lbz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 0);
	// bl 0x826a0800
	ctx.lr = 0x8241B1C4;
	sub_826A0800(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8241b2c8
	if (ctx.cr0.eq) goto loc_8241B2C8;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r29,2
	ctx.r11.s64 = r29.s64 + 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8241b2c8
	if (!ctx.cr6.lt) goto loc_8241B2C8;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// bne cr6,0x8241b2c8
	if (!ctx.cr6.eq) goto loc_8241B2C8;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241ae88
	ctx.lr = 0x8241B1FC;
	sub_8241AE88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8241b2c8
	if (ctx.cr0.eq) goto loc_8241B2C8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bgt cr6,0x8241b2c8
	if (ctx.cr6.gt) goto loc_8241B2C8;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + r30.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8241b2c8
	if (!ctx.cr6.lt) goto loc_8241B2C8;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// bne cr6,0x8241b2c8
	if (!ctx.cr6.eq) goto loc_8241B2C8;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241ae88
	ctx.lr = 0x8241B240;
	sub_8241AE88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8241b268
	if (!ctx.cr0.eq) goto loc_8241B268;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82419cf8
	ctx.lr = 0x8241B258;
	sub_82419CF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8241b2c8
	if (ctx.cr0.eq) goto loc_8241B2C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8241b26c
	goto loc_8241B26C;
loc_8241B268:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8241B26C:
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bgt cr6,0x8241b2c8
	if (ctx.cr6.gt) goto loc_8241B2C8;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + r30.u64;
	// subf r31,r29,r11
	r31.u64 = ctx.r11.u64 - r29.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(r31.u32, 32, ctx.xer);
	// bge cr6,0x8241b2c8
	if (!ctx.cr6.lt) goto loc_8241B2C8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1e70
	ctx.lr = 0x8241B294;
	sub_826A1E70(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stbx r10,r31,r11
	REX_STORE_U8(r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x823ff268
	ctx.lr = 0x8241B2B0;
	sub_823FF268(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8241b2c8
	if (ctx.cr0.lt) goto loc_8241B2C8;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// b 0x8241b2cc
	goto loc_8241B2CC;
loc_8241B2C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241B2CC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824284E0) {
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
	ctx.lr = 0x824284E8;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r16,r8
	r16.u64 = ctx.r8.u64;
	// lwz r9,52(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// stw r11,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// lwz r8,60(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// li r18,0
	r18.s64 = 0;
	// lwz r7,64(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r14,r4
	r14.u64 = ctx.r4.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r5,420(r1)
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r5.u32);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// stw r10,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// mr r17,r18
	r17.u64 = r18.u64;
	// stw r9,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// mr r15,r18
	r15.u64 = r18.u64;
	// stw r8,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// stw r7,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// stw r18,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r18.u32);
	// stw r18,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, r18.u32);
	// stw r18,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r18.u32);
	// stw r18,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r18.u32);
	// stw r18,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r18.u32);
	// stw r18,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r18.u32);
	// bne cr6,0x82428568
	if (!ctx.cr6.eq) goto loc_82428568;
	// lwz r16,24(r3)
	r16.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
loc_82428568:
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82422288
	ctx.lr = 0x82428574;
	sub_82422288(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824285d8
	if (ctx.cr0.lt) goto loc_824285D8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f12,208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// lfd f0,-3744(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x824285d0
	if (ctx.cr6.gt) goto loc_824285D0;
	// lfd f13,216(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 216);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x824285d0
	if (ctx.cr6.lt) goto loc_824285D0;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x824285d8
	if (!ctx.cr6.eq) goto loc_824285D8;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x824285d8
	if (!ctx.cr6.eq) goto loc_824285D8;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
loc_824285B0:
	// lwz r29,24(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r16,24(r31)
	REX_STORE_U32(r31.u32 + 24, r16.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82432f08
	ctx.lr = 0x824285C4;
	sub_82432F08(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
	// b 0x824294e8
	goto loc_824294E8;
loc_824285D0:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// b 0x824285b0
	goto loc_824285B0;
loc_824285D8:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,420
	ctx.r5.s64 = ctx.r1.s64 + 420;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82427e48
	ctx.lr = 0x824285EC;
	sub_82427E48(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824294e8
	if (ctx.cr0.lt) goto loc_824294E8;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r19,-1
	r19.s64 = -1;
	// stw r18,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r18.u32);
	// stw r19,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r19.u32);
	// lwz r5,420(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824287f0
	if (ctx.cr6.eq) goto loc_824287F0;
	// lwz r10,24(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,8240
	ctx.r8.s64 = 540016640;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824287f0
	if (!ctx.cr6.eq) goto loc_824287F0;
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82428674
	if (ctx.cr6.eq) goto loc_82428674;
	// lwz r6,16(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
loc_82428658:
	// lwzx r4,r6,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82428674
	if (ctx.cr6.eq) goto loc_82428674;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82428658
	if (ctx.cr6.lt) goto loc_82428658;
loc_82428674:
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r5,r8,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r5.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,72(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x824287f0
	if (ctx.cr6.eq) goto loc_824287F0;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824287f0
	if (ctx.cr0.eq) goto loc_824287F0;
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,4112
	ctx.r9.s64 = 269484032;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824287f0
	if (!ctx.cr6.eq) goto loc_824287F0;
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82428710
	if (ctx.cr6.eq) goto loc_82428710;
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_824286F4:
	// lwzx r4,r8,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82428710
	if (ctx.cr6.eq) goto loc_82428710;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x824286f4
	if (ctx.cr6.lt) goto loc_824286F4;
loc_82428710:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x824287f0
	if (!ctx.cr6.eq) goto loc_824287F0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82427e48
	ctx.lr = 0x82428738;
	sub_82427E48(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824294e8
	if (ctx.cr0.lt) goto loc_824294E8;
	// stw r19,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r19.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// stw r19,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r19.u32);
	// li r9,23
	ctx.r9.s64 = 23;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242876C;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824294e8
	if (ctx.cr0.lt) goto loc_824294E8;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r9,23
	ctx.r9.s64 = 23;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,420
	ctx.r7.s64 = ctx.r1.s64 + 420;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x82428798;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824294e8
	if (ctx.cr0.lt) goto loc_824294E8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r20,r18
	r20.u64 = r18.u64;
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82428934
	if (ctx.cr0.eq) goto loc_82428934;
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82428934
	if (ctx.cr0.eq) goto loc_82428934;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_824287E0:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82428934
	if (!ctx.cr6.eq) goto loc_82428934;
	// li r28,1
	r28.s64 = 1;
	// b 0x82428938
	goto loc_82428938;
loc_824287F0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r7,r1,420
	ctx.r7.s64 = ctx.r1.s64 + 420;
	// stw r19,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r19.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r19,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r19.u32);
	// stw r19,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r19.u32);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x824288c0
	if (ctx.cr0.eq) goto loc_824288C0;
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// bl 0x82423f70
	ctx.lr = 0x8242882C;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824294e8
	if (ctx.cr0.lt) goto loc_824294E8;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r9,23
	ctx.r9.s64 = 23;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,420
	ctx.r7.s64 = ctx.r1.s64 + 420;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x82428858;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824294e8
	if (ctx.cr0.lt) goto loc_824294E8;
	// lis r5,8240
	ctx.r5.s64 = 540016640;
	// li r9,23
	ctx.r9.s64 = 23;
	// addi r8,r1,420
	ctx.r8.s64 = ctx.r1.s64 + 420;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x82428884;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824294e8
	if (ctx.cr0.lt) goto loc_824294E8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r20,1
	r20.s64 = 1;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82428934
	if (ctx.cr0.eq) goto loc_82428934;
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82428934
	if (ctx.cr0.eq) goto loc_82428934;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// b 0x824287e0
	goto loc_824287E0;
loc_824288C0:
	// stw r19,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r19.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// bl 0x82427618
	ctx.lr = 0x824288D0;
	sub_82427618(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824294e8
	if (ctx.cr0.lt) goto loc_824294E8;
	// lis r5,8224
	ctx.r5.s64 = 538968064;
	// li r9,23
	ctx.r9.s64 = 23;
	// addi r8,r1,180
	ctx.r8.s64 = ctx.r1.s64 + 180;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x824288FC;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824294e8
	if (ctx.cr0.lt) goto loc_824294E8;
	// lis r5,8240
	ctx.r5.s64 = 540016640;
	// li r9,23
	ctx.r9.s64 = 23;
	// addi r8,r1,180
	ctx.r8.s64 = ctx.r1.s64 + 180;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x82428928;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824294e8
	if (ctx.cr0.lt) goto loc_824294E8;
	// li r20,1
	r20.s64 = 1;
loc_82428934:
	// mr r28,r18
	r28.u64 = r18.u64;
loc_82428938:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82427e48
	ctx.lr = 0x8242894C;
	sub_82427E48(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824294e8
	if (ctx.cr0.lt) goto loc_824294E8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r22,1
	r22.s64 = 1;
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r29,r18
	r29.u64 = r18.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824289d4
	if (ctx.cr0.eq) goto loc_824289D4;
	// li r4,98
	ctx.r4.s64 = 98;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269cce0
	ctx.lr = 0x82428998;
	sub_8269CCE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824289b4
	if (!ctx.cr0.eq) goto loc_824289B4;
	// li r4,66
	ctx.r4.s64 = 66;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269cce0
	ctx.lr = 0x824289AC;
	sub_8269CCE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824289d4
	if (ctx.cr0.eq) goto loc_824289D4;
loc_824289B4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82428a84
	if (ctx.cr6.eq) goto loc_82428A84;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82428a84
	if (ctx.cr6.eq) goto loc_82428A84;
	// mr r22,r18
	r22.u64 = r18.u64;
	// b 0x82428a80
	goto loc_82428A80;
loc_824289D4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82428a40
	if (ctx.cr0.eq) goto loc_82428A40;
	// li r4,99
	ctx.r4.s64 = 99;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269cce0
	ctx.lr = 0x824289EC;
	sub_8269CCE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82428a08
	if (!ctx.cr0.eq) goto loc_82428A08;
	// li r4,67
	ctx.r4.s64 = 67;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269cce0
	ctx.lr = 0x82428A00;
	sub_8269CCE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82428a40
	if (ctx.cr0.eq) goto loc_82428A40;
loc_82428A08:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82428a30
	if (!ctx.cr6.eq) goto loc_82428A30;
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82428a38
	if (ctx.cr6.eq) goto loc_82428A38;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82428a38
	if (!ctx.cr6.eq) goto loc_82428A38;
loc_82428A30:
	// li r22,1
	r22.s64 = 1;
	// li r29,1
	r29.s64 = 1;
loc_82428A38:
	// mr r28,r18
	r28.u64 = r18.u64;
	// b 0x82428a84
	goto loc_82428A84;
loc_82428A40:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82428a7c
	if (!ctx.cr6.eq) goto loc_82428A7C;
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82428a64
	if (ctx.cr6.eq) goto loc_82428A64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x82428a7c
	if (!ctx.cr6.eq) goto loc_82428A7C;
loc_82428A64:
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82428a84
	if (ctx.cr6.eq) goto loc_82428A84;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82428a84
	if (!ctx.cr6.eq) goto loc_82428A84;
loc_82428A7C:
	// li r22,1
	r22.s64 = 1;
loc_82428A80:
	// li r29,1
	r29.s64 = 1;
loc_82428A84:
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82428abc
	if (!ctx.cr6.eq) goto loc_82428ABC;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x82428ad8
	if (ctx.cr6.eq) goto loc_82428AD8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82428abc
	if (ctx.cr6.eq) goto loc_82428ABC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82428b88
	if (ctx.cr6.eq) goto loc_82428B88;
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
loc_82428AB0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82428abc
	if (ctx.cr6.lt) goto loc_82428ABC;
	// mr r29,r18
	r29.u64 = r18.u64;
loc_82428ABC:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x82428ad8
	if (ctx.cr6.eq) goto loc_82428AD8;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r29
	r29.u64 = ctx.r11.u64 & r29.u64;
loc_82428AD8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82428af4
	if (ctx.cr6.eq) goto loc_82428AF4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r22,r11,r22
	r22.u64 = ctx.r11.u64 & r22.u64;
loc_82428AF4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r25,r18
	r25.u64 = r18.u64;
	// lwz r24,28(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r27,r24,2,0,29
	r27.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82428B10;
	sub_823F02B8(ctx, base);
	// mr. r17,r3
	r17.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq 0x824294e0
	if (ctx.cr0.eq) goto loc_824294E0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82428B24;
	sub_823F02B8(ctx, base);
	// mr. r15,r3
	r15.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r15.s32, 0, ctx.xer);
	// beq 0x824294e0
	if (ctx.cr0.eq) goto loc_824294E0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82428B38;
	sub_823F02B8(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// stw r26,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r26.u32);
	// beq 0x824294e0
	if (ctx.cr0.eq) goto loc_824294E0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82428B54;
	sub_826A1E70(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82428ee8
	if (ctx.cr6.eq) goto loc_82428EE8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r26,12(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82428ba0
	if (!ctx.cr6.eq) goto loc_82428BA0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82428b94
	if (ctx.cr6.eq) goto loc_82428B94;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// b 0x82428ba0
	goto loc_82428BA0;
loc_82428B88:
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// b 0x82428ab0
	goto loc_82428AB0;
loc_82428B94:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
loc_82428BA0:
	// stw r19,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r19.u32);
	// lis r5,4336
	ctx.r5.s64 = 284164096;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x82428BC8;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824294e8
	if (ctx.cr0.lt) goto loc_824294E8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82428be8
	if (ctx.cr6.eq) goto loc_82428BE8;
	// lwz r10,144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// b 0x82428bec
	goto loc_82428BEC;
loc_82428BE8:
	// lwz r10,160(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
loc_82428BEC:
	// lwz r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82428c78
	if (ctx.cr6.eq) goto loc_82428C78;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// stw r20,52(r31)
	REX_STORE_U32(r31.u32 + 52, r20.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x82432f08
	ctx.lr = 0x82428C24;
	sub_82432F08(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824294e8
	if (ctx.cr0.lt) goto loc_824294E8;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82428C3C;
	sub_826A1E70(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x826a1e70
	ctx.lr = 0x82428C4C;
	sub_826A1E70(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stw r18,80(r31)
	REX_STORE_U32(r31.u32 + 80, r18.u32);
	// stw r18,84(r31)
	REX_STORE_U32(r31.u32 + 84, r18.u32);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r10,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// b 0x82428c88
	goto loc_82428C88;
loc_82428C78:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82428C88;
	sub_826A1E70(ctx, base);
loc_82428C88:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82428d0c
	if (ctx.cr6.eq) goto loc_82428D0C;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cntlzw r10,r20
	ctx.r10.u64 = r20.u32 == 0 ? 32 : __builtin_clz(r20.u32);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x82432f08
	ctx.lr = 0x82428CB4;
	sub_82432F08(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824294e8
	if (ctx.cr0.lt) goto loc_824294E8;
	// lwz r30,140(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82428CD0;
	sub_826A1E70(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x826a1e70
	ctx.lr = 0x82428CE0;
	sub_826A1E70(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stw r18,80(r31)
	REX_STORE_U32(r31.u32 + 80, r18.u32);
	// stw r18,84(r31)
	REX_STORE_U32(r31.u32 + 84, r18.u32);
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r10,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// b 0x82428d20
	goto loc_82428D20;
loc_82428D0C:
	// lwz r30,140(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82428D20;
	sub_826A1E70(ctx, base);
loc_82428D20:
	// mr r25,r18
	r25.u64 = r18.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82428d64
	if (ctx.cr6.eq) goto loc_82428D64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// subf r10,r30,r16
	ctx.r10.u64 = r16.u64 - r30.u64;
	// subf r9,r30,r15
	ctx.r9.u64 = r15.u64 - r30.u64;
loc_82428D3C:
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x82428d5c
	if (ctx.cr6.eq) goto loc_82428D5C;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82428d5c
	if (ctx.cr6.eq) goto loc_82428D5C;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_82428D5C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82428d3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82428D3C;
loc_82428D64:
	// lwz r11,192(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// lwz r10,196(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// beq cr6,0x82428e00
	if (ctx.cr6.eq) goto loc_82428E00;
	// cmplwi cr6,r25,16
	ctx.cr6.compare<uint32_t>(r25.u32, 16, ctx.xer);
	// bgt cr6,0x82428d98
	if (ctx.cr6.gt) goto loc_82428D98;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r26,r11
	ctx.r11.u64 = ctx.r11.u64 - r26.u64;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// ble cr6,0x82428d9c
	if (!ctx.cr6.gt) goto loc_82428D9C;
loc_82428D98:
	// mr r22,r18
	r22.u64 = r18.u64;
loc_82428D9C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x82428e00
	if (ctx.cr6.eq) goto loc_82428E00;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82428df8
	if (!ctx.cr6.lt) goto loc_82428DF8;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_82428DBC:
	// lwz r8,24(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// lis r7,24576
	ctx.r7.s64 = 1610612736;
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r8,r8,0,0,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82428df4
	if (ctx.cr6.eq) goto loc_82428DF4;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82428dbc
	if (ctx.cr6.lt) goto loc_82428DBC;
	// b 0x82428df8
	goto loc_82428DF8;
loc_82428DF4:
	// mr r22,r18
	r22.u64 = r18.u64;
loc_82428DF8:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x82428e6c
	if (!ctx.cr6.eq) goto loc_82428E6C;
loc_82428E00:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x82428e64
	if (!ctx.cr6.eq) goto loc_82428E64;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82428e64
	if (ctx.cr0.eq) goto loc_82428E64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82428e64
	if (!ctx.cr6.lt) goto loc_82428E64;
	// rlwinm r30,r26,2,0,29
	r30.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_82428E2C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x82477990
	ctx.lr = 0x82428E3C;
	sub_82477990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82428e60
	if (!ctx.cr0.eq) goto loc_82428E60;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82428e2c
	if (ctx.cr6.lt) goto loc_82428E2C;
	// b 0x82428e64
	goto loc_82428E64;
loc_82428E60:
	// li r22,1
	r22.s64 = 1;
loc_82428E64:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x8242910c
	if (ctx.cr6.eq) goto loc_8242910C;
loc_82428E6C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82428ecc
	if (!ctx.cr6.lt) goto loc_82428ECC;
	// rlwinm r30,r26,2,0,29
	r30.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_82428E84:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r28,r11,r30
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82428ea8
	if (ctx.cr6.eq) goto loc_82428EA8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82130e88
	ctx.lr = 0x82428EA0;
	sub_82130E88(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82477b20
	ctx.lr = 0x82428EA8;
	sub_82477B20(ctx, base);
loc_82428EA8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stwx r18,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, r18.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82428e84
	if (ctx.cr6.lt) goto loc_82428E84;
loc_82428ECC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// stw r26,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r26.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x826a1e70
	ctx.lr = 0x82428EE4;
	sub_826A1E70(ctx, base);
	// lwz r26,140(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
loc_82428EE8:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x8242910c
	if (ctx.cr6.eq) goto loc_8242910C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82428f98
	if (ctx.cr6.eq) goto loc_82428F98;
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r19,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r19.u32);
	// bne cr6,0x82428f10
	if (!ctx.cr6.eq) goto loc_82428F10;
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
loc_82428F10:
	// lwz r29,172(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lis r5,8272
	ctx.r5.s64 = 542113792;
	// li r9,23
	ctx.r9.s64 = 23;
	// addi r7,r1,156
	ctx.r7.s64 = ctx.r1.s64 + 156;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x82428F34;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824294e8
	if (ctx.cr0.lt) goto loc_824294E8;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82432f08
	ctx.lr = 0x82428F4C;
	sub_82432F08(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824294e8
	if (ctx.cr0.lt) goto loc_824294E8;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82428F64;
	sub_826A1E70(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x826a1e70
	ctx.lr = 0x82428F74;
	sub_826A1E70(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r9,156(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stw r18,80(r31)
	REX_STORE_U32(r31.u32 + 80, r18.u32);
	// stw r18,84(r31)
	REX_STORE_U32(r31.u32 + 84, r18.u32);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r10,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// b 0x82428fac
	goto loc_82428FAC;
loc_82428F98:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82428FA8;
	sub_826A1E70(ctx, base);
	// lwz r29,172(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
loc_82428FAC:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8242904c
	if (ctx.cr6.eq) goto loc_8242904C;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// stw r19,0(r29)
	REX_STORE_U32(r29.u32 + 0, r19.u32);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// bne cr6,0x82428fc8
	if (!ctx.cr6.eq) goto loc_82428FC8;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
loc_82428FC8:
	// lis r5,8272
	ctx.r5.s64 = 542113792;
	// li r9,23
	ctx.r9.s64 = 23;
	// addi r7,r1,156
	ctx.r7.s64 = ctx.r1.s64 + 156;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x82428FE8;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824294e8
	if (ctx.cr0.lt) goto loc_824294E8;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82432f08
	ctx.lr = 0x82429000;
	sub_82432F08(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824294e8
	if (ctx.cr0.lt) goto loc_824294E8;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82429018;
	sub_826A1E70(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x826a1e70
	ctx.lr = 0x82429028;
	sub_826A1E70(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r9,156(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stw r18,80(r31)
	REX_STORE_U32(r31.u32 + 80, r18.u32);
	// stw r18,84(r31)
	REX_STORE_U32(r31.u32 + 84, r18.u32);
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r10,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// b 0x8242905c
	goto loc_8242905C;
loc_8242904C:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8242905C;
	sub_826A1E70(ctx, base);
loc_8242905C:
	// mr r25,r18
	r25.u64 = r18.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82429418
	if (ctx.cr6.eq) goto loc_82429418;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// subf r4,r15,r26
	ctx.r4.u64 = r26.u64 - r15.u64;
	// subf r5,r15,r16
	ctx.r5.u64 = r16.u64 - r15.u64;
loc_8242907C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r8,r4,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82429100
	if (ctx.cr6.eq) goto loc_82429100;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x824290e8
	if (ctx.cr6.eq) goto loc_824290E8;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,20(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// lwz r6,116(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 116);
	// lwzx r3,r3,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x824290e8
	if (ctx.cr6.eq) goto loc_824290E8;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x824290d8
	if (ctx.cr6.eq) goto loc_824290D8;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x824290d8
	if (ctx.cr6.eq) goto loc_824290D8;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// b 0x82429100
	goto loc_82429100;
loc_824290D8:
	// stwx r9,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// b 0x824290f4
	goto loc_824290F4;
loc_824290E8:
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_824290F4:
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stwx r9,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u32);
loc_82429100:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8242907c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242907C;
loc_8242910C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82429418
	if (ctx.cr6.eq) goto loc_82429418;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// mulli r3,r25,24
	ctx.r3.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(24));
	// bl 0x823f02b8
	ctx.lr = 0x82429128;
	sub_823F02B8(ctx, base);
	// stw r3,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824294e0
	if (ctx.cr0.eq) goto loc_824294E0;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// rlwinm r8,r25,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8242914C:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x8242914c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242914C;
	// lwz r25,216(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// mr r27,r18
	r27.u64 = r18.u64;
	// lwz r28,212(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// lwz r8,208(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// beq cr6,0x82429238
	if (ctx.cr6.eq) goto loc_82429238;
	// lwz r10,140(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// mr r9,r15
	ctx.r9.u64 = r15.u64;
	// subf r4,r15,r16
	ctx.r4.u64 = r16.u64 - r15.u64;
	// subf r6,r28,r8
	ctx.r6.u64 = ctx.r8.u64 - r28.u64;
	// subf r5,r15,r10
	ctx.r5.u64 = ctx.r10.u64 - r15.u64;
	// subf r7,r28,r25
	ctx.r7.u64 = r25.u64 - r28.u64;
loc_82429190:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r3,r9,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82429230
	if (ctx.cr6.eq) goto loc_82429230;
	// lwzx r10,r9,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82429230
	if (ctx.cr6.eq) goto loc_82429230;
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x824291bc
	if (!ctx.cr6.eq) goto loc_824291BC;
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_824291BC:
	// stwx r10,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x824291ec
	if (ctx.cr6.eq) goto loc_824291EC;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r30,r10,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,20(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,116(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lwzx r30,r30,r29
	r30.u64 = REX_LOAD_U32(r30.u32 + r29.u32);
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bne cr6,0x824291f0
	if (!ctx.cr6.eq) goto loc_824291F0;
loc_824291EC:
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
loc_824291F0:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwzx r10,r9,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82429220
	if (ctx.cr6.eq) goto loc_82429220;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r30,r10,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,20(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,116(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lwzx r30,r29,r30
	r30.u64 = REX_LOAD_U32(r29.u32 + r30.u32);
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bne cr6,0x82429224
	if (!ctx.cr6.eq) goto loc_82429224;
loc_82429220:
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
loc_82429224:
	// stwx r10,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82429230:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82429190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82429190;
loc_82429238:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// beq cr6,0x82429264
	if (ctx.cr6.eq) goto loc_82429264;
	// lwz r29,220(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824269e8
	ctx.lr = 0x82429260;
	sub_824269E8(ctx, base);
	// b 0x8242938c
	goto loc_8242938C;
loc_82429264:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// clrlwi r26,r27,12
	r26.u64 = r27.u32 & 0xFFFFF;
	// stw r20,52(r31)
	REX_STORE_U32(r31.u32 + 52, r20.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// oris r29,r26,4096
	r29.u64 = r26.u64 | 268435456;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x82429290;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824294e8
	if (ctx.cr0.lt) goto loc_824294E8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824292c8
	if (ctx.cr6.eq) goto loc_824292C8;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_824292A8:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r9,152(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 152);
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bdnz 0x824292a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824292A8;
loc_824292C8:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cntlzw r10,r20
	ctx.r10.u64 = r20.u32 == 0 ? 32 : __builtin_clz(r20.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x824292FC;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824294e8
	if (ctx.cr0.lt) goto loc_824294E8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82429334
	if (ctx.cr6.eq) goto loc_82429334;
	// addi r11,r25,-4
	ctx.r11.s64 = r25.s64 + -4;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_82429314:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r9,152(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 152);
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bdnz 0x82429314
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82429314;
loc_82429334:
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lwz r10,168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r29,220(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// beq cr6,0x8242936c
	if (ctx.cr6.eq) goto loc_8242936C;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq 0x8242936c
	if (ctx.cr0.eq) goto loc_8242936C;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_82429364:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82429364
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82429364;
loc_8242936C:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// oris r5,r26,8304
	ctx.r5.u64 = r26.u64 | 544210944;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242938C;
	sub_82423F70(ctx, base);
loc_8242938C:
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824294e8
	if (ctx.cr0.lt) goto loc_824294E8;
	// mr r27,r18
	r27.u64 = r18.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82429414
	if (ctx.cr6.eq) goto loc_82429414;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mr r30,r16
	r30.u64 = r16.u64;
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// subf r26,r15,r11
	r26.u64 = ctx.r11.u64 - r15.u64;
	// subf r28,r16,r15
	r28.u64 = r15.u64 - r16.u64;
loc_824293B4:
	// add r11,r28,r30
	ctx.r11.u64 = r28.u64 + r30.u64;
	// lwzx r10,r28,r30
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + r30.u32);
	// lwzx r11,r26,r11
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82429404
	if (ctx.cr6.eq) goto loc_82429404;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82429404
	if (ctx.cr6.eq) goto loc_82429404;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwzx r25,r9,r10
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824781d0
	ctx.lr = 0x824293F8;
	sub_824781D0(ctx, base);
	// lwzu r11,4(r29)
	ea = 4 + r29.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r27,48(r25)
	REX_STORE_U32(r25.u32 + 48, r27.u32);
loc_82429404:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(r27.u32, r24.u32, ctx.xer);
	// blt cr6,0x824293b4
	if (ctx.cr6.lt) goto loc_824293B4;
loc_82429414:
	// stw r18,104(r31)
	REX_STORE_U32(r31.u32 + 104, r18.u32);
loc_82429418:
	// lwz r7,184(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,152(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r8,160(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// beq cr6,0x8242943c
	if (ctx.cr6.eq) goto loc_8242943C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82429440
	if (!ctx.cr6.eq) goto loc_82429440;
loc_8242943C:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_82429440:
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8242945c
	if (ctx.cr6.eq) goto loc_8242945C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82429474
	if (!ctx.cr6.eq) goto loc_82429474;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82429474
	if (!ctx.cr6.eq) goto loc_82429474;
loc_8242945C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8242947c
	if (ctx.cr6.eq) goto loc_8242947C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82429474
	if (!ctx.cr6.eq) goto loc_82429474;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8242947c
	if (ctx.cr6.eq) goto loc_8242947C;
loc_82429474:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82429480
	goto loc_82429480;
loc_8242947C:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_82429480:
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8242949c
	if (ctx.cr6.eq) goto loc_8242949C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824294a4
	if (!ctx.cr6.eq) goto loc_824294A4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x824294b4
	if (ctx.cr6.eq) goto loc_824294B4;
loc_8242949C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824294d8
	if (ctx.cr6.eq) goto loc_824294D8;
loc_824294A4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824294d8
	if (!ctx.cr6.eq) goto loc_824294D8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x824294d8
	if (!ctx.cr6.eq) goto loc_824294D8;
loc_824294B4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,3042
	ctx.r5.s64 = 3042;
	// addi r6,r11,-23016
	ctx.r6.s64 = ctx.r11.s64 + -23016;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423e58
	ctx.lr = 0x824294CC;
	sub_82423E58(ctx, base);
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16385
	r30.u64 = r30.u64 | 16385;
	// b 0x824294e8
	goto loc_824294E8;
loc_824294D8:
	// mr r30,r18
	r30.u64 = r18.u64;
	// b 0x824294e8
	goto loc_824294E8;
loc_824294E0:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
loc_824294E8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x823f0350
	ctx.lr = 0x824294F4;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x823f0350
	ctx.lr = 0x82429500;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x823f0350
	ctx.lr = 0x8242950C;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,188(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x823f0350
	ctx.lr = 0x82429518;
	sub_823F0350(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,192(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r8,196(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r7,172(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r9,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// stw r8,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r8.u32);
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824AE948) {
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
	ctx.lr = 0x824AE950;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// li r17,0
	r17.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824aeb98
	if (!ctx.cr6.gt) goto loc_824AEB98;
	// li r18,0
	r18.s64 = 0;
loc_824AE97C:
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// lwzx r28,r18,r11
	r28.u64 = REX_LOAD_U32(r18.u32 + ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824aeb84
	if (ctx.cr6.eq) goto loc_824AEB84;
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x824aeb84
	if (ctx.cr6.eq) goto loc_824AEB84;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824aeb84
	if (ctx.cr6.eq) goto loc_824AEB84;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r21,0
	r21.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824aeb84
	if (!ctx.cr6.gt) goto loc_824AEB84;
	// li r22,0
	r22.s64 = 0;
loc_824AE9BC:
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x824aea80
	if (ctx.cr6.eq) goto loc_824AEA80;
	// mr r24,r15
	r24.u64 = r15.u64;
loc_824AE9CC:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r10,20(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 20);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,128(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 128);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x824ae9f8
	if (!ctx.cr6.eq) goto loc_824AE9F8;
	// lbz r10,111(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 111);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x824aeba4
	if (!ctx.cr6.eq) goto loc_824AEBA4;
loc_824AE9F8:
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwzx r10,r10,r22
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r22.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824aea14
	if (ctx.cr6.eq) goto loc_824AEA14;
	// lwz r11,56(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824aea70
	if (!ctx.cr6.eq) goto loc_824AEA70;
loc_824AEA14:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// clrlwi r30,r11,12
	r30.u64 = ctx.r11.u32 & 0xFFFFF;
	// divwu. r27,r10,r30
	r27.u64 = uint32_t(r30.u32 ? ctx.r10.u32 / r30.u32 : 0);
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq 0x824aea70
	if (ctx.cr0.eq) goto loc_824AEA70;
	// li r31,0
	r31.s64 = 0;
	// rlwinm r26,r30,2,0,29
	r26.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_824AEA38:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824ae948
	ctx.lr = 0x824AEA54;
	sub_824AE948(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824aeb9c
	if (ctx.cr0.lt) goto loc_824AEB9C;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r31,r26,r31
	r31.u64 = r26.u64 + r31.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// blt cr6,0x824aea38
	if (ctx.cr6.lt) goto loc_824AEA38;
loc_824AEA70:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmplw cr6,r23,r16
	ctx.cr6.compare<uint32_t>(r23.u32, r16.u32, ctx.xer);
	// blt cr6,0x824ae9cc
	if (ctx.cr6.lt) goto loc_824AE9CC;
loc_824AEA80:
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824ae9bc
	if (ctx.cr6.lt) goto loc_824AE9BC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x824aeb84
	if (ctx.cr6.eq) goto loc_824AEB84;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lis r9,24576
	ctx.r9.s64 = 1610612736;
	// rlwinm r11,r10,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824aeb10
	if (ctx.cr6.eq) goto loc_824AEB10;
	// lis r9,24656
	ctx.r9.s64 = 1615855616;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824aeb10
	if (ctx.cr6.eq) goto loc_824AEB10;
	// lis r9,24736
	ctx.r9.s64 = 1621098496;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824aeb10
	if (ctx.cr6.eq) goto loc_824AEB10;
	// lis r9,24816
	ctx.r9.s64 = 1626341376;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824aeb10
	if (ctx.cr6.eq) goto loc_824AEB10;
	// lis r9,29408
	ctx.r9.s64 = 1927282688;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824aeb10
	if (ctx.cr6.eq) goto loc_824AEB10;
	// lis r9,24688
	ctx.r9.s64 = 1617952768;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824aeb10
	if (ctx.cr6.eq) goto loc_824AEB10;
	// lis r9,29376
	ctx.r9.s64 = 1925185536;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824aeb10
	if (ctx.cr6.eq) goto loc_824AEB10;
	// lis r9,29392
	ctx.r9.s64 = 1926234112;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824aeb10
	if (ctx.cr6.eq) goto loc_824AEB10;
	// lis r9,4352
	ctx.r9.s64 = 285212672;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824aeb5c
	if (!ctx.cr6.eq) goto loc_824AEB5C;
loc_824AEB10:
	// clrlwi r11,r10,12
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFFF;
	// rlwinm r6,r10,1,11,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFFE;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x824aeb5c
	if (!ctx.cr6.lt) goto loc_824AEB5C;
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 20);
	// lwz r8,136(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 136);
loc_824AEB34:
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x824aebc8
	if (ctx.cr6.eq) goto loc_824AEBC8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x824aeb34
	if (ctx.cr6.lt) goto loc_824AEB34;
loc_824AEB5C:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r19
	REX_STORE_U32(ctx.r11.u32 + r19.u32, r28.u32);
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// lwzx r11,r18,r11
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + ctx.r11.u32);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
loc_824AEB84:
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r18,r18,4
	r18.s64 = r18.s64 + 4;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824ae97c
	if (ctx.cr6.lt) goto loc_824AE97C;
loc_824AEB98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824AEB9C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd4
	return;
loc_824AEBA4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,4513
	ctx.r5.s64 = 4513;
	// addi r6,r11,-80
	ctx.r6.s64 = ctx.r11.s64 + -80;
loc_824AEBB0:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,60(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 60);
	// bl 0x82489c30
	ctx.lr = 0x824AEBBC;
	sub_82489C30(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824aeb9c
	goto loc_824AEB9C;
loc_824AEBC8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,4534
	ctx.r5.s64 = 4534;
	// addi r6,r11,-140
	ctx.r6.s64 = ctx.r11.s64 + -140;
	// b 0x824aebb0
	goto loc_824AEBB0;
}

DEFINE_REX_FUNC(sub_824C0E20) {
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
	ctx.lr = 0x824C0E28;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r26,1
	r26.s64 = 1;
	// li r25,14
	r25.s64 = 14;
	// li r27,0
	r27.s64 = 0;
loc_824C0E3C:
	// lwz r31,4(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x824c0e50
	if (ctx.cr6.lt) goto loc_824C0E50;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// blt cr6,0x824c0e74
	if (ctx.cr6.lt) goto loc_824C0E74;
loc_824C0E50:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r25,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r25.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r26,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r26.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824C0E74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C0E74:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// bne cr6,0x824c0efc
	if (!ctx.cr6.eq) goto loc_824C0EFC;
	// lwz r30,68(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824c0eb8
	if (ctx.cr6.eq) goto loc_824C0EB8;
loc_824C0E88:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824c0eac
	if (ctx.cr6.eq) goto loc_824C0EAC;
	// stw r27,40(r30)
	REX_STORE_U32(r30.u32 + 40, r27.u32);
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C0EAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C0EAC:
	// lwz r30,44(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824c0e88
	if (!ctx.cr6.eq) goto loc_824C0E88;
loc_824C0EB8:
	// lwz r30,72(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r27,68(r31)
	REX_STORE_U32(r31.u32 + 68, r27.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824c0ef8
	if (ctx.cr6.eq) goto loc_824C0EF8;
loc_824C0EC8:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824c0eec
	if (ctx.cr6.eq) goto loc_824C0EEC;
	// stw r27,40(r30)
	REX_STORE_U32(r30.u32 + 40, r27.u32);
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C0EEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C0EEC:
	// lwz r30,44(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824c0ec8
	if (!ctx.cr6.eq) goto loc_824C0EC8;
loc_824C0EF8:
	// stw r27,72(r31)
	REX_STORE_U32(r31.u32 + 72, r27.u32);
loc_824C0EFC:
	// addi r11,r26,15
	ctx.r11.s64 = r26.s64 + 15;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// stwx r27,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r27.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824c0f4c
	if (ctx.cr6.eq) goto loc_824C0F4C;
loc_824C0F14:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r30,0(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r11,16
	r29.s64 = ctx.r11.s64 + 16;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x824c6db8
	ctx.lr = 0x824C0F34;
	sub_824C6DB8(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// subf r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - r29.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r10,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r10.u32);
	// bne cr6,0x824c0f14
	if (!ctx.cr6.eq) goto loc_824C0F14;
loc_824C0F4C:
	// addi r11,r26,13
	ctx.r11.s64 = r26.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// stwx r27,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r27.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824c0f9c
	if (ctx.cr6.eq) goto loc_824C0F9C;
loc_824C0F64:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r30,0(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r11,16
	r29.s64 = ctx.r11.s64 + 16;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x824c6db8
	ctx.lr = 0x824C0F84;
	sub_824C6DB8(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// subf r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - r29.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r10,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r10.u32);
	// bne cr6,0x824c0f64
	if (!ctx.cr6.eq) goto loc_824C0F64;
loc_824C0F9C:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bge 0x824c0e3c
	if (!ctx.cr0.lt) goto loc_824C0E3C;
	// li r5,84
	ctx.r5.s64 = 84;
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824c6db8
	ctx.lr = 0x824C0FB4;
	sub_824C6DB8(ctx, base);
	// stw r27,4(r28)
	REX_STORE_U32(r28.u32 + 4, r27.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82130e88
	ctx.lr = 0x824C0FC0;
	sub_82130E88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824C73C8) {
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
	ctx.lr = 0x824C73D0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,428(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 428);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824c7418
	if (!ctx.cr6.eq) goto loc_824C7418;
	// lwz r11,432(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 432);
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824C7408;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824c7464
	if (ctx.cr6.eq) goto loc_824C7464;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
loc_824C7418:
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 436);
	// addi r29,r30,52
	r29.s64 = r30.s64 + 52;
	// lwz r25,320(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824C744C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,52(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 52);
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r25.u32, ctx.xer);
	// blt cr6,0x824c7464
	if (ctx.cr6.lt) goto loc_824C7464;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_824C7464:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824CACB8) {
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
	ctx.lr = 0x824CACC0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,456(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,316(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// lwz r10,92(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 92);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824cad58
	if (ctx.cr6.lt) goto loc_824CAD58;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r28,0
	r28.s64 = 0;
	// lwz r27,220(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824cad50
	if (!ctx.cr6.gt) goto loc_824CAD50;
	// addi r26,r4,-4
	r26.s64 = ctx.r4.s64 + -4;
	// addi r31,r29,12
	r31.s64 = r29.s64 + 12;
loc_824CAD08:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwzu r11,4(r26)
	ea = 4 + r26.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r26.u32 = ea;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824CAD38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,36(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r27,r27,84
	r27.s64 = r27.s64 + 84;
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x824cad08
	if (ctx.cr6.lt) goto loc_824CAD08;
loc_824CAD50:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r29)
	REX_STORE_U32(r29.u32 + 92, ctx.r11.u32);
loc_824CAD58:
	// lwz r5,92(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 92);
	// lwz r10,316(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 316);
	// lwz r11,96(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 96);
	// subf r31,r5,r10
	r31.u64 = ctx.r10.u64 - ctx.r5.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824cad74
	if (!ctx.cr6.gt) goto loc_824CAD74;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_824CAD74:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// subf r10,r11,r23
	ctx.r10.u64 = r23.u64 - ctx.r11.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824cad88
	if (!ctx.cr6.gt) goto loc_824CAD88;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_824CAD88:
	// lwz r10,460(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 460);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// add r6,r11,r22
	ctx.r6.u64 = ctx.r11.u64 + r22.u64;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824CADAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + r31.u64;
	// stw r8,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r8.u32);
	// lwz r7,96(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 96);
	// subf r6,r31,r7
	ctx.r6.u64 = ctx.r7.u64 - r31.u64;
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 92);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// stw r11,92(r29)
	REX_STORE_U32(r29.u32 + 92, ctx.r11.u32);
	// stw r6,96(r29)
	REX_STORE_U32(r29.u32 + 96, ctx.r6.u32);
	// lwz r5,316(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 316);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x824cade8
	if (ctx.cr6.lt) goto loc_824CADE8;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
loc_824CADE8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_824D3A08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824D3A10;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r4,24
	r31.s64 = ctx.r4.s64 + 24;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
	// li r30,4
	r30.s64 = 4;
loc_824D3A28:
	// lwz r11,-12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -12);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x824e3400
	ctx.lr = 0x824D3A44;
	sub_824E3400(ctx, base);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzu r11,4(r31)
	ea = 4 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsplth v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xF0E))));
	// vupkd3d128 v63,v0,20
	temp.u32 = ctx.v0.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v63.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v0.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v63.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v0.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v63.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v0.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v63.u32[0] = vTemp.u32[0];
	// stvewx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r29)
	ea = 4 + r29.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// bne 0x824d3a28
	if (!ctx.cr0.eq) goto loc_824D3A28;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvrx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v1,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824D8238) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824D8240;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824d82bc
	if (!ctx.cr6.gt) goto loc_824D82BC;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x824d8268
	if (!ctx.cr6.lt) goto loc_824D8268;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_824D8268:
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e5af8
	ctx.lr = 0x824D8274;
	sub_824E5AF8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x824d828c
	if (!ctx.cr0.eq) goto loc_824D828C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// b 0x824d82bc
	goto loc_824D82BC;
loc_824D828C:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824d82b8
	if (ctx.cr6.eq) goto loc_824D82B8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x826a1e70
	ctx.lr = 0x824D82AC;
	sub_826A1E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x824e5b08
	ctx.lr = 0x824D82B8;
	sub_824E5B08(ctx, base);
loc_824D82B8:
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_824D82BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824DAD88) {
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
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824dadb8
	if (ctx.cr6.eq) goto loc_824DADB8;
	// bl 0x824e5b08
	ctx.lr = 0x824DADB4;
	sub_824E5B08(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
loc_824DADB8:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
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

DEFINE_REX_FUNC(sub_824DC028) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824DC030;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r29,r3,144
	r29.s64 = ctx.r3.s64 + 144;
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824dc07c
	if (ctx.cr6.lt) goto loc_824DC07C;
	// lwz r30,112(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x824dc07c
	if (ctx.cr6.gt) goto loc_824DC07C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824dc074
	if (!ctx.cr6.gt) goto loc_824DC074;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d83e8
	ctx.lr = 0x824DC074;
	sub_824D83E8(ctx, base);
loc_824DC074:
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_824DC07C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824DDAB0) {
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
	ctx.lr = 0x824DDAB8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824DDAD8;
	sub_826A1E70(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x824ddb08
	if (!ctx.cr6.eq) goto loc_824DDB08;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ddbd8
	if (!ctx.cr6.eq) goto loc_824DDBD8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824dda60
	ctx.lr = 0x824DDAFC;
	sub_824DDA60(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x824ddbcc
	if (ctx.cr6.eq) goto loc_824DDBCC;
loc_824DDB08:
	// lhz r11,6(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 6);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + 4);
	// lwz r31,92(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// beq cr6,0x824ddb2c
	if (ctx.cr6.eq) goto loc_824DDB2C;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x824ddb3c
	if (!ctx.cr6.eq) goto loc_824DDB3C;
loc_824DDB2C:
	// clrlwi. r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// beq 0x824ddb3c
	if (ctx.cr0.eq) goto loc_824DDB3C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_824DDB3C:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq 0x824ddce0
	if (ctx.cr0.eq) goto loc_824DDCE0;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_824DDB54:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824ddb64
	if (!ctx.cr6.lt) goto loc_824DDB64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
loc_824DDB64:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// bl 0x824ddab0
	ctx.lr = 0x824DDB80;
	sub_824DDAB0(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x824ddbc0
	if (ctx.cr6.eq) goto loc_824DDBC0;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
loc_824DDBC0:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x824ddb54
	if (!ctx.cr0.eq) goto loc_824DDB54;
	// b 0x824ddce0
	goto loc_824DDCE0;
loc_824DDBCC:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ddce0
	if (ctx.cr6.eq) goto loc_824DDCE0;
loc_824DDBD8:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r31,92(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// beq cr6,0x824ddce0
	if (ctx.cr6.eq) goto loc_824DDCE0;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r10,4
	r30.s64 = ctx.r10.s64 + 4;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_824DDBF8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + r28.u64;
	// lhz r11,6(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// lhz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// beq cr6,0x824ddc1c
	if (ctx.cr6.eq) goto loc_824DDC1C;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x824ddc2c
	if (!ctx.cr6.eq) goto loc_824DDC2C;
loc_824DDC1C:
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// beq 0x824ddc2c
	if (ctx.cr0.eq) goto loc_824DDC2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_824DDC2C:
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lhz r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 8);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824ddc4c
	if (!ctx.cr6.lt) goto loc_824DDC4C;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
loc_824DDC4C:
	// lhz r10,6(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lhz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lhz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lhz r11,2(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lhz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 8);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lhz r11,10(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 10);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x824ddab0
	ctx.lr = 0x824DDC94;
	sub_824DDAB0(ctx, base);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// beq cr6,0x824ddcd4
	if (ctx.cr6.eq) goto loc_824DDCD4;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_824DDCD4:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x824ddbf8
	if (!ctx.cr0.eq) goto loc_824DDBF8;
loc_824DDCE0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824EE8D0) {
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
	ctx.lr = 0x824EE8D8;
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
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,22852
	r27.s64 = ctx.r11.s64 + 22852;
	// addi r26,r10,-26736
	r26.s64 = ctx.r10.s64 + -26736;
	// bne cr6,0x824ee91c
	if (!ctx.cr6.eq) goto loc_824EE91C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-26292
	ctx.r5.s64 = ctx.r11.s64 + -26292;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,1143
	ctx.r7.s64 = 1143;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EE91C;
	sub_824EA978(ctx, base);
loc_824EE91C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x824ede28
	ctx.lr = 0x824EE924;
	sub_824EDE28(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x824ee948
	if (!ctx.cr0.eq) goto loc_824EE948;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-26748
	ctx.r5.s64 = ctx.r11.s64 + -26748;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,1147
	ctx.r7.s64 = 1147;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EE948;
	sub_824EA978(ctx, base);
loc_824EE948:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r25,12(r29)
	REX_STORE_U32(r29.u32 + 12, r25.u32);
	// stw r30,16(r29)
	REX_STORE_U32(r29.u32 + 16, r30.u32);
	// addi r28,r11,-26404
	r28.s64 = ctx.r11.s64 + -26404;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ee96c
	if (!ctx.cr6.eq) goto loc_824EE96C;
	// li r30,0
	r30.s64 = 0;
	// b 0x824ee978
	goto loc_824EE978;
loc_824EE96C:
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824ee9b0
	if (!ctx.cr6.eq) goto loc_824EE9B0;
loc_824EE978:
	// li r7,1158
	ctx.r7.s64 = 1158;
	// b 0x824ee99c
	goto loc_824EE99C;
loc_824EE980:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bgt cr6,0x824ee9bc
	if (ctx.cr6.gt) goto loc_824EE9BC;
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824ee9b0
	if (!ctx.cr6.eq) goto loc_824EE9B0;
	// li r7,1168
	ctx.r7.s64 = 1168;
loc_824EE99C:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EE9B0;
	sub_824EA978(ctx, base);
loc_824EE9B0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824ee980
	if (!ctx.cr6.eq) goto loc_824EE980;
loc_824EE9BC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824edf88
	ctx.lr = 0x824EE9C8;
	sub_824EDF88(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ee9dc
	if (!ctx.cr6.eq) goto loc_824EE9DC;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
loc_824EE9DC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824F2E78) {
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
	ctx.lr = 0x824F2E80;
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
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r27,r11,22852
	r27.s64 = ctx.r11.s64 + 22852;
	// addi r26,r10,-23616
	r26.s64 = ctx.r10.s64 + -23616;
	// bne cr6,0x824f2ecc
	if (!ctx.cr6.eq) goto loc_824F2ECC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-26440
	ctx.r5.s64 = ctx.r11.s64 + -26440;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,298
	ctx.r7.s64 = 298;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2ECC;
	sub_824EA978(ctx, base);
loc_824F2ECC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x824f2ef0
	if (!ctx.cr6.eq) goto loc_824F2EF0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-26452
	ctx.r5.s64 = ctx.r11.s64 + -26452;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,299
	ctx.r7.s64 = 299;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2EF0;
	sub_824EA978(ctx, base);
loc_824F2EF0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x824f2f14
	if (!ctx.cr6.eq) goto loc_824F2F14;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-25940
	ctx.r5.s64 = ctx.r11.s64 + -25940;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,300
	ctx.r7.s64 = 300;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2F14;
	sub_824EA978(ctx, base);
loc_824F2F14:
	// li r4,28
	ctx.r4.s64 = 28;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bctrl 
	ctx.lr = 0x824F2F24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824f2f50
	if (!ctx.cr0.eq) goto loc_824F2F50;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-23360
	ctx.r5.s64 = ctx.r11.s64 + -23360;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,308
	ctx.r7.s64 = 308;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2F48;
	sub_824EA978(ctx, base);
loc_824F2F48:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824f301c
	goto loc_824F301C;
loc_824F2F50:
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825a2698
	ctx.lr = 0x824F2F74;
	sub_825A2698(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824f2fa8
	if (!ctx.cr0.eq) goto loc_824F2FA8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,326
	ctx.r7.s64 = 326;
	// addi r5,r11,-23388
	ctx.r5.s64 = ctx.r11.s64 + -23388;
loc_824F2F8C:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2F9C;
	sub_824EA978(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f28f8
	ctx.lr = 0x824F2FA4;
	sub_824F28F8(ctx, base);
	// b 0x824f2f48
	goto loc_824F2F48;
loc_824F2FA8:
	// li r7,100
	ctx.r7.s64 = 100;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825a5880
	ctx.lr = 0x824F2FC0;
	sub_825A5880(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824f2fdc
	if (!ctx.cr0.eq) goto loc_824F2FDC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,339
	ctx.r7.s64 = 339;
	// addi r5,r11,-23408
	ctx.r5.s64 = ctx.r11.s64 + -23408;
	// b 0x824f2f8c
	goto loc_824F2F8C;
loc_824F2FDC:
	// li r7,100
	ctx.r7.s64 = 100;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825a5c38
	ctx.lr = 0x824F2FF4;
	sub_825A5C38(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824f3010
	if (!ctx.cr0.eq) goto loc_824F3010;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,352
	ctx.r7.s64 = 352;
	// addi r5,r11,-23424
	ctx.r5.s64 = ctx.r11.s64 + -23424;
	// b 0x824f2f8c
	goto loc_824F2F8C;
loc_824F3010:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_824F301C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82501D80) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_82501D9C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82501e2c
	if (ctx.cr6.eq) goto loc_82501E2C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f75b8
	ctx.lr = 0x82501DAC;
	sub_824F75B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82501e1c
	if (ctx.cr0.eq) goto loc_82501E1C;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r8,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0xFFF;
	// xor r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 ^ r31.u64;
	// rlwinm. r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82501e1c
	if (!ctx.cr0.eq) goto loc_82501E1C;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & r31.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82501e1c
	if (ctx.cr0.eq) goto loc_82501E1C;
	// rlwinm. r7,r8,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82501e10
	if (ctx.cr0.eq) goto loc_82501E10;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82501DE8:
	// rlwinm r6,r8,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// srw r6,r6,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r6,r5,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82501de8
	if (ctx.cr6.lt) goto loc_82501DE8;
loc_82501E10:
	// and r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 & r31.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82501e24
	if (!ctx.cr0.eq) goto loc_82501E24;
loc_82501E1C:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x82501d9c
	goto loc_82501D9C;
loc_82501E24:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82501e30
	goto loc_82501E30;
loc_82501E2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82501E30:
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

DEFINE_REX_FUNC(sub_82506788) {
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
	ctx.lr = 0x82506790;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 72);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825067b0
	if (ctx.cr0.eq) goto loc_825067B0;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x824e4368
	ctx.lr = 0x825067B0;
	sub_824E4368(ctx, base);
loc_825067B0:
	// lwz r30,60(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82501ee0
	ctx.lr = 0x825067C4;
	sub_82501EE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825067d4
	if (!ctx.cr0.eq) goto loc_825067D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825068cc
	goto loc_825068CC;
loc_825067D4:
	// lwz r29,28(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,56(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x825051b0
	ctx.lr = 0x825067EC;
	sub_825051B0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82502168
	ctx.lr = 0x825067FC;
	sub_82502168(ctx, base);
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82506824
	if (!ctx.cr0.eq) goto loc_82506824;
	// lbz r11,74(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 74);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8250686c
	if (!ctx.cr0.eq) goto loc_8250686C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8250686c
	if (ctx.cr6.lt) goto loc_8250686C;
loc_82506824:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825066c0
	ctx.lr = 0x82506834;
	sub_825066C0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// beq cr6,0x8250686c
	if (ctx.cr6.eq) goto loc_8250686C;
loc_8250683C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82505988
	ctx.lr = 0x8250684C;
	sub_82505988(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x82504880
	ctx.lr = 0x8250685C;
	sub_82504880(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r11,72(r31)
	REX_STORE_U8(r31.u32 + 72, ctx.r11.u8);
	// b 0x825068cc
	goto loc_825068CC;
loc_8250686C:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r6,56(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82505f68
	ctx.lr = 0x82506884;
	sub_82505F68(ctx, base);
	// lbz r11,74(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 74);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825068a4
	if (!ctx.cr0.eq) goto loc_825068A4;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8250683c
	if (!ctx.cr6.lt) goto loc_8250683C;
loc_825068A4:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825068bc
	if (ctx.cr0.eq) goto loc_825068BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825068c4
	goto loc_825068C4;
loc_825068BC:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_825068C4:
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_825068CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82516D20) {
	REX_FUNC_PROLOGUE();
	// lwz r10,672(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// rlwinm r9,r5,29,3,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFF8;
	// lwz r11,684(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 684);
	// li r8,1
	ctx.r8.s64 = 1;
	// mullw r10,r4,r10
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// clrldi r7,r5,58
	ctx.r7.u64 = ctx.r5.u64 & 0x3F;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sld r7,r8,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// ldx r6,r9,r11
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r10,r4,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r4,r4,58
	ctx.r4.u64 = ctx.r4.u64 & 0x3F;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stdx r7,r9,r11
	REX_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u64);
	// sld r8,r8,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r4.u8 & 0x7F));
	// lwz r11,672(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// lwz r9,684(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 684);
	// mullw r11,r5,r11
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ldx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stdx r9,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8251E728) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8251E730;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
loc_8251E744:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// ble cr6,0x8251e75c
	if (!ctx.cr6.gt) goto loc_8251E75C;
	// bl 0x8251e438
	ctx.lr = 0x8251E758;
	sub_8251E438(ctx, base);
	// b 0x8251e764
	goto loc_8251E764;
loc_8251E75C:
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// bl 0x8251e4b0
	ctx.lr = 0x8251E764;
	sub_8251E4B0(ctx, base);
loc_8251E764:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8251e7b8
	if (ctx.cr6.eq) goto loc_8251E7B8;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// beq cr6,0x8251e7c4
	if (ctx.cr6.eq) goto loc_8251E7C4;
	// lis r10,-27863
	ctx.r10.s64 = -1826029568;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,1186
	ctx.r9.s64 = 1186;
	// ori r10,r10,13532
	ctx.r10.u64 = ctx.r10.u64 | 13532;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// srd r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// srd r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// srd r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bge cr6,0x8251e7d4
	if (!ctx.cr6.lt) goto loc_8251E7D4;
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + r29.u64;
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r4,r31
	ctx.r11.u64 = ctx.r4.u64 + r31.u64;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// ble cr6,0x8251e744
	if (!ctx.cr6.gt) goto loc_8251E744;
loc_8251E7B8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8251E7BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_8251E7C4:
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x8251e7d8
	goto loc_8251E7D8;
loc_8251E7D4:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
loc_8251E7D8:
	// rlwimi r11,r3,2,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8251e7bc
	goto loc_8251E7BC;
}

DEFINE_REX_FUNC(sub_82524528) {
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
	ctx.lr = 0x82524530;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// b 0x825245bc
	goto loc_825245BC;
loc_82524540:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82524550
	if (ctx.cr6.eq) goto loc_82524550;
	// li r29,0
	r29.s64 = 0;
	// b 0x8252455c
	goto loc_8252455C;
loc_82524550:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r29,r11,-40
	r29.s64 = ctx.r11.s64 + -40;
loc_8252455C:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825245b0
	if (ctx.cr0.eq) goto loc_825245B0;
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
loc_8252456C:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825245b0
	if (ctx.cr6.eq) goto loc_825245B0;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252459c
	if (ctx.cr6.eq) goto loc_8252459C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252459c
	if (ctx.cr0.eq) goto loc_8252459C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8250b470
	ctx.lr = 0x8252459C;
	sub_8250B470(ctx, base);
loc_8252459C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8252456c
	if (!ctx.cr6.eq) goto loc_8252456C;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// b 0x8252456c
	goto loc_8252456C;
loc_825245B0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825c2510
	ctx.lr = 0x825245BC;
	sub_825C2510(ctx, base);
loc_825245BC:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82524540
	if (ctx.cr0.eq) goto loc_82524540;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8252DF78) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f0,3716(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8252dfc0
	if (ctx.cr6.eq) goto loc_8252DFC0;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8252DF98:
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8252dfac
	if (!ctx.cr6.lt) goto loc_8252DFAC;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8252dfb8
	goto loc_8252DFB8;
loc_8252DFAC:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8252dfb8
	if (!ctx.cr6.gt) goto loc_8252DFB8;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8252DFB8:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x8252df98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252DF98;
loc_8252DFC0:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8252dff4
	if (ctx.cr6.eq) goto loc_8252DFF4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8252DFCC:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8252dfe0
	if (!ctx.cr6.lt) goto loc_8252DFE0;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8252dfec
	goto loc_8252DFEC;
loc_8252DFE0:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8252dfec
	if (!ctx.cr6.gt) goto loc_8252DFEC;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8252DFEC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8252dfcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252DFCC;
loc_8252DFF4:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252e008
	if (ctx.cr0.eq) goto loc_8252E008;
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_8252E008:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82531020) {
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
	ctx.lr = 0x82531028;
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
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x8253105C;
	sub_825BB860(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x82531080
	if (ctx.cr6.eq) goto loc_82531080;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x8253107C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82531080:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82531088;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x825310ac
	if (ctx.cr6.eq) goto loc_825310AC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825310A8;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825310AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825310B4;
	sub_8250AD28(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// beq cr6,0x825310d8
	if (ctx.cr6.eq) goto loc_825310D8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825310D4;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825310D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825310E0;
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
	ctx.lr = 0x82531110;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82543878) {
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
	ctx.lr = 0x82543880;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825438f0
	if (!ctx.cr0.eq) goto loc_825438F0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82542b30
	ctx.lr = 0x825438A8;
	sub_82542B30(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825438f0
	if (ctx.cr0.eq) goto loc_825438F0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825438f0
	if (!ctx.cr0.eq) goto loc_825438F0;
	// addic r11,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r11.s64 = r29.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// subfe r30,r11,r29
	temp.u8 = (~ctx.r11.u32 + r29.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r29.u32 + ctx.xer.ca < ctx.xer.ca);
	r30.u64 = ~ctx.r11.u64 + r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8252e848
	ctx.lr = 0x825438D4;
	sub_8252E848(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// or r4,r30,r31
	ctx.r4.u64 = r30.u64 | r31.u64;
	// lwzx r3,r11,r27
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// bl 0x82531968
	ctx.lr = 0x825438E4;
	sub_82531968(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_825438F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82549A98) {
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
	ctx.lr = 0x82549AA0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82549ad0
	if (!ctx.cr6.eq) goto loc_82549AD0;
	// lwz r11,336(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82549adc
	if (ctx.cr6.eq) goto loc_82549ADC;
	// li r4,4541
	ctx.r4.s64 = 4541;
	// bl 0x824e4368
	ctx.lr = 0x82549AD0;
	sub_824E4368(ctx, base);
loc_82549AD0:
	// li r4,3640
	ctx.r4.s64 = 3640;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824e4270
	ctx.lr = 0x82549ADC;
	sub_824E4270(ctx, base);
loc_82549ADC:
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// subfic r28,r28,15
	ctx.xer.ca = r28.u32 <= 15;
	r28.u64 = static_cast<uint64_t>(15) - r28.u64;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// clrldi r10,r28,32
	ctx.r10.u64 = r28.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// srd r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// srd r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// srd r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// clrlwi r27,r11,29
	r27.u64 = ctx.r11.u32 & 0x7;
	// bne cr6,0x82549b74
	if (!ctx.cr6.eq) goto loc_82549B74;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825bb860
	ctx.lr = 0x82549B2C;
	sub_825BB860(ctx, base);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r3,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// oris r8,r8,512
	ctx.r8.u64 = ctx.r8.u64 | 33554432;
	// addi r11,r30,32
	ctx.r11.s64 = r30.s64 + 32;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r8,36(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r8,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// addi r11,r9,36
	ctx.r11.s64 = ctx.r9.s64 + 36;
	// lwz r8,36(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 36);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// stw r10,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r10.u32);
	// stw r7,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r7.u32);
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
loc_82549B74:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f4,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x825c1a18
	ctx.lr = 0x82549B94;
	sub_825C1A18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82549BA0;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r27,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x82549BB8;
	sub_8250A620(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x825498e0
	ctx.lr = 0x82549BD8;
	sub_825498E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82549BE8;
	sub_8250AB60(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// lis r9,16508
	ctx.r9.s64 = 1081868288;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwimi r9,r28,13,15,18
	ctx.r9.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 13) & 0x1E000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE1FFF);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,19,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFC1FFF;
	// rlwinm r11,r11,0,9,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFE7FFFFF;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x8250ad28
	ctx.lr = 0x82549C20;
	sub_8250AD28(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82553A48) {
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
	ctx.lr = 0x82553A50;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82553A78;
	sub_825BB860(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x82553a9c
	if (ctx.cr6.eq) goto loc_82553A9C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82553A98;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82553A9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82553AA4;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// beq cr6,0x82553ac8
	if (ctx.cr6.eq) goto loc_82553AC8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,12(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82553AC4;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82553AC8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82553AD0;
	sub_8250AD28(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwimi r10,r11,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// beq cr6,0x82553b28
	if (ctx.cr6.eq) goto loc_82553B28;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r10,r29,-36
	ctx.r10.s64 = r29.s64 + -36;
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
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
loc_82553B28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82559FB0) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255a034
	if (!ctx.cr0.eq) goto loc_8255A034;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x8255a034
	if (ctx.cr0.eq) goto loc_8255A034;
loc_82559FDC:
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// addic r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subfe r9,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// and r31,r9,r8
	r31.u64 = ctx.r9.u64 & ctx.r8.u64;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x8255A028;
	sub_824E4308(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82559fdc
	if (!ctx.cr6.eq) goto loc_82559FDC;
loc_8255A034:
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

DEFINE_REX_FUNC(sub_82564AE0) {
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
	ctx.lr = 0x82564AE8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r28,48(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82564b48
	goto loc_82564B48;
loc_82564B1C:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,44(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x825ba3a0
	ctx.lr = 0x82564B40;
	sub_825BA3A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,48(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
loc_82564B48:
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, ctx.xer);
	// bne cr6,0x82564b1c
	if (!ctx.cr6.eq) goto loc_82564B1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f4,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x825c1a18
	ctx.lr = 0x82564B74;
	sub_825C1A18(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r27,r10,7,29,31
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x825bb9c8
	ctx.lr = 0x82564B9C;
	sub_825BB9C8(ctx, base);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
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
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
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
	// beq cr6,0x82564c4c
	if (ctx.cr6.eq) goto loc_82564C4C;
	// li r24,0
	r24.s64 = 0;
	// addi r26,r3,44
	r26.s64 = ctx.r3.s64 + 44;
loc_82564BEC:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82564c0c
	if (!ctx.cr6.eq) goto loc_82564C0C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x8250ac70
	ctx.lr = 0x82564C08;
	sub_8250AC70(ctx, base);
	// b 0x82564c28
	goto loc_82564C28;
loc_82564C0C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// srw r11,r11,r24
	ctx.r11.u64 = r24.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r24.u8 & 0x3F));
	// clrlwi r5,r11,30
	ctx.r5.u64 = ctx.r11.u32 & 0x3;
	// bl 0x8250acc8
	ctx.lr = 0x82564C28;
	sub_8250ACC8(ctx, base);
loc_82564C28:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82564C34;
	sub_8250AD28(ctx, base);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// stw r3,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// addi r24,r24,2
	r24.s64 = r24.s64 + 2;
	// cmplw cr6,r23,r27
	ctx.cr6.compare<uint32_t>(r23.u32, r27.u32, ctx.xer);
	// blt cr6,0x82564bec
	if (ctx.cr6.lt) goto loc_82564BEC;
loc_82564C4C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82564C58;
	sub_8250AB60(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// lwz r4,48(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// addi r28,r11,48
	r28.s64 = ctx.r11.s64 + 48;
	// bl 0x8250b470
	ctx.lr = 0x82564C78;
	sub_8250B470(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82564C84;
	sub_8250AD28(ctx, base);
	// stw r3,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250acc8
	ctx.lr = 0x82564C9C;
	sub_8250ACC8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac70
	ctx.lr = 0x82564CB0;
	sub_8250AC70(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x82530a10
	ctx.lr = 0x82564CC8;
	sub_82530A10(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r9,652(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 652);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82561980
	ctx.lr = 0x82564CF0;
	sub_82561980(ctx, base);
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82564d0c
	goto loc_82564D0C;
loc_82564D04:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_82564D0C:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82564d04
	if (!ctx.cr6.eq) goto loc_82564D04;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// stw r29,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r29.u32);
	// lwz r5,652(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 652);
	// bl 0x8255e698
	ctx.lr = 0x82564D3C;
	sub_8255E698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,652(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 652);
	// bl 0x8255e698
	ctx.lr = 0x82564D4C;
	sub_8255E698(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_8257FAE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8257FAE8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwimi r11,r10,18,13,13
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x40000) | (ctx.r11.u64 & 0xFFFFFFFFFFFBFFFF);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x8257FB20;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = r31.s64 + -16;
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// rlwimi r9,r10,2,29,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x4) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82580870) {
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
	ctx.lr = 0x82580878;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// li r31,2
	r31.s64 = 2;
	// bl 0x82580638
	ctx.lr = 0x8258089C;
	sub_82580638(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82580638
	ctx.lr = 0x825808B0;
	sub_82580638(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825808d4
	if (ctx.cr6.eq) goto loc_825808D4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82580638
	ctx.lr = 0x825808CC;
	sub_82580638(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,3
	r31.s64 = 3;
loc_825808D4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x825808f4
	if (ctx.cr6.eq) goto loc_825808F4;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r5,244(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82580638
	ctx.lr = 0x825808EC;
	sub_82580638(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_825808F4:
	// lwz r4,564(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 564);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// bl 0x825bb9c8
	ctx.lr = 0x82580908;
	sub_825BB9C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82580914;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82580924;
	sub_8250AD28(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// li r28,2
	r28.s64 = 2;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82580948
	if (ctx.cr6.eq) goto loc_82580948;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82580940;
	sub_8250AD28(ctx, base);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// li r28,3
	r28.s64 = 3;
loc_82580948:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82580968
	if (ctx.cr6.eq) goto loc_82580968;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8258095C;
	sub_8250AD28(ctx, base);
	// addi r11,r28,11
	ctx.r11.s64 = r28.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r3.u32);
loc_82580968:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82580974;
	sub_8250AB60(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82582D38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82582D40;
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
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82582D68;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82582d8c
	if (ctx.cr6.eq) goto loc_82582D8C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82582D88;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82582D8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82582D94;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82582DA4;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82582DB0;
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

DEFINE_REX_FUNC(sub_82587398) {
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
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825873bc
	if (ctx.cr0.eq) goto loc_825873BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825873c8
	goto loc_825873C8;
loc_825873BC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_825873C8:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// beq cr6,0x825873e8
	if (ctx.cr6.eq) goto loc_825873E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825873f4
	goto loc_825873F4;
loc_825873E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_825873F4:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258741c
	if (ctx.cr0.eq) goto loc_8258741C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82587428
	goto loc_82587428;
loc_8258741C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_82587428:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8258746c
	if (!ctx.cr0.eq) goto loc_8258746C;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
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
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x824e4308
	ctx.lr = 0x8258746C;
	sub_824E4308(ctx, base);
loc_8258746C:
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

DEFINE_REX_FUNC(sub_8259D510) {
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
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// lis r31,-32128
	r31.s64 = -2105540608;
	// addi r11,r11,19040
	ctx.r11.s64 = ctx.r11.s64 + 19040;
	// addi r10,r10,19288
	ctx.r10.s64 = ctx.r10.s64 + 19288;
	// stw r11,-17076(r9)
	REX_STORE_U32(ctx.r9.u32 + -17076, ctx.r11.u32);
	// stw r10,-17072(r31)
	REX_STORE_U32(r31.u32 + -17072, ctx.r10.u32);
	// bl 0x82404a60
	ctx.lr = 0x8259D544;
	sub_82404A60(ctx, base);
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

DEFINE_REX_FUNC(sub_8259E1D8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1ca8
	ctx.lr = 0x8259E1E0;
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,11(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 11);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x8259e6b4
	if (!ctx.cr6.eq) goto loc_8259E6B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r7,104(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r9,104(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r8,r7,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8259e224
	if (ctx.cr6.eq) goto loc_8259E224;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8259e6b4
	if (!ctx.cr6.eq) goto loc_8259E6B4;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x8259e6b4
	if (!ctx.cr6.eq) goto loc_8259E6B4;
loc_8259E224:
	// lwz r8,108(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r9,108(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// rlwinm r6,r8,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8259e248
	if (ctx.cr6.eq) goto loc_8259E248;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8259e6b4
	if (!ctx.cr6.eq) goto loc_8259E6B4;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x8259e6b4
	if (!ctx.cr6.eq) goto loc_8259E6B4;
loc_8259E248:
	// lwz r10,112(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8259e6b4
	if (!ctx.cr6.eq) goto loc_8259E6B4;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8259e6b4
	if (!ctx.cr6.eq) goto loc_8259E6B4;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x8259e290
	if (!ctx.cr6.gt) goto loc_8259E290;
	// clrlwi. r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8259e290
	if (ctx.cr0.eq) goto loc_8259E290;
	// lwz r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r9,120(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r10,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
loc_8259E290:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8259e2ac
	if (!ctx.cr6.gt) goto loc_8259E2AC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
loc_8259E2AC:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8259e434
	if (!ctx.cr0.eq) goto loc_8259E434;
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// xor r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// rlwinm. r8,r8,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8259e434
	if (!ctx.cr0.eq) goto loc_8259E434;
	// lwz r5,104(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// blt cr6,0x8259e434
	if (ctx.cr6.lt) goto loc_8259E434;
	// lwz r6,108(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// blt cr6,0x8259e434
	if (ctx.cr6.lt) goto loc_8259E434;
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8259e434
	if (!ctx.cr6.eq) goto loc_8259E434;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8259e434
	if (!ctx.cr6.eq) goto loc_8259E434;
	// lis r9,10240
	ctx.r9.s64 = 671088640;
	// ori r9,r9,258
	ctx.r9.u64 = ctx.r9.u64 | 258;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8259e3bc
	if (ctx.cr6.gt) goto loc_8259E3BC;
	// beq cr6,0x8259e3b0
	if (ctx.cr6.eq) goto loc_8259E3B0;
	// lis r9,1168
	ctx.r9.s64 = 76546048;
	// ori r9,r9,258
	ctx.r9.u64 = ctx.r9.u64 | 258;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8259e3b0
	if (ctx.cr6.eq) goto loc_8259E3B0;
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// ori r9,r9,330
	ctx.r9.u64 = ctx.r9.u64 | 330;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8259e3a4
	if (ctx.cr6.eq) goto loc_8259E3A4;
	// addis r10,r10,-6184
	ctx.r10.s64 = ctx.r10.s64 + -405274624;
	// addic. r10,r10,-323
	ctx.xer.ca = ctx.r10.u32 > 322;
	ctx.r10.s64 = ctx.r10.s64 + -323;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8259e398
	if (ctx.cr0.eq) goto loc_8259E398;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x8259e38c
	if (ctx.cr6.eq) goto loc_8259E38C;
	// cmplwi cr6,r10,67
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 67, ctx.xer);
	// beq cr6,0x8259e364
	if (ctx.cr6.eq) goto loc_8259E364;
	// lis r9,504
	ctx.r9.s64 = 33030144;
	// ori r9,r9,67
	ctx.r9.u64 = ctx.r9.u64 | 67;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8259e434
	if (!ctx.cr6.eq) goto loc_8259E434;
loc_8259E364:
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lwz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,96(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,-17076(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -17076);
loc_8259E374:
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r3,32(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r8,96(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 96);
	// bctrl 
	ctx.lr = 0x8259E388;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8259e424
	goto loc_8259E424;
loc_8259E38C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8259d7a0
	ctx.lr = 0x8259E394;
	sub_8259D7A0(ctx, base);
	// b 0x8259e424
	goto loc_8259E424;
loc_8259E398:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82404cc8
	ctx.lr = 0x8259E3A0;
	sub_82404CC8(ctx, base);
	// b 0x8259e424
	goto loc_8259E424;
loc_8259E3A4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8259d968
	ctx.lr = 0x8259E3AC;
	sub_8259D968(ctx, base);
	// b 0x8259e424
	goto loc_8259E424;
loc_8259E3B0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8259d8a0
	ctx.lr = 0x8259E3B8;
	sub_8259D8A0(ctx, base);
	// b 0x8259e424
	goto loc_8259E424;
loc_8259E3BC:
	// addis r10,r10,-10280
	ctx.r10.s64 = ctx.r10.s64 + -673710080;
	// addic. r10,r10,-323
	ctx.xer.ca = ctx.r10.u32 > 322;
	ctx.r10.s64 = ctx.r10.s64 + -323;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8259e41c
	if (ctx.cr0.eq) goto loc_8259E41C;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8259e410
	if (ctx.cr6.eq) goto loc_8259E410;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x8259e404
	if (ctx.cr6.eq) goto loc_8259E404;
	// cmplwi cr6,r10,67
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 67, ctx.xer);
	// beq cr6,0x8259e3f0
	if (ctx.cr6.eq) goto loc_8259E3F0;
	// lis r9,504
	ctx.r9.s64 = 33030144;
	// ori r9,r9,67
	ctx.r9.u64 = ctx.r9.u64 | 67;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8259e434
	if (!ctx.cr6.eq) goto loc_8259E434;
loc_8259E3F0:
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lwz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,96(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,-17072(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -17072);
	// b 0x8259e374
	goto loc_8259E374;
loc_8259E404:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82404dd0
	ctx.lr = 0x8259E40C;
	sub_82404DD0(ctx, base);
	// b 0x8259e424
	goto loc_8259E424;
loc_8259E410:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8259d5a0
	ctx.lr = 0x8259E418;
	sub_8259D5A0(ctx, base);
	// b 0x8259e424
	goto loc_8259E424;
loc_8259E41C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8259d6a0
	ctx.lr = 0x8259E424;
	sub_8259D6A0(ctx, base);
loc_8259E424:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8259e434
	if (ctx.cr6.lt) goto loc_8259E434;
loc_8259E42C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8259e6bc
	goto loc_8259E6BC;
loc_8259E434:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// li r30,-1
	r30.s64 = -1;
	// ori r31,r10,65535
	r31.u64 = ctx.r10.u64 | 65535;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x8259e458
	if (!ctx.cr6.gt) goto loc_8259E458;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8259E458:
	// bl 0x822f6280
	ctx.lr = 0x8259E45C;
	sub_822F6280(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8259e474
	if (!ctx.cr6.eq) goto loc_8259E474;
loc_8259E468:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8259e6bc
	goto loc_8259E6BC;
loc_8259E474:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8259e4a8
	if (!ctx.cr6.eq) goto loc_8259E4A8;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x8259e498
	if (!ctx.cr6.gt) goto loc_8259E498;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8259E498:
	// bl 0x822f6280
	ctx.lr = 0x8259E49C;
	sub_822F6280(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8259e4d4
	goto loc_8259E4D4;
loc_8259E4A8:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x8259e4bc
	if (!ctx.cr6.gt) goto loc_8259E4BC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8259E4BC:
	// bl 0x822f6280
	ctx.lr = 0x8259E4C0;
	sub_822F6280(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r3
	r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8259E4D4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8259e4e8
	if (!ctx.cr6.eq) goto loc_8259E4E8;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8259E4E4;
	sub_8269CE98(ctx, base);
	// b 0x8259e468
	goto loc_8259E468;
loc_8259E4E8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8259e504
	if (!ctx.cr6.eq) goto loc_8259E504;
	// mr r27,r31
	r27.u64 = r31.u64;
	// mr r26,r30
	r26.u64 = r30.u64;
	// b 0x8259e50c
	goto loc_8259E50C;
loc_8259E504:
	// addi r27,r31,16
	r27.s64 = r31.s64 + 16;
	// addi r26,r30,16
	r26.s64 = r30.s64 + 16;
loc_8259E50C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r25,0
	r25.s64 = 0;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8259e6a0
	if (!ctx.cr6.gt) goto loc_8259E6A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3712);
	f31.f64 = double(temp.f32);
loc_8259E528:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r28,r25,1,0,30
	r28.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259E54C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// beq cr6,0x8259e574
	if (ctx.cr6.eq) goto loc_8259E574;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,1
	ctx.r4.s64 = r28.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259E574;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8259E574:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8259e66c
	if (!ctx.cr6.gt) goto loc_8259E66C;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_8259E58C:
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + r27.u64;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + r31.u64;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + r30.u64;
	// lfsx f13,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + r26.u64;
	// lfsx f0,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f11,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f10,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfsx f10,r11,r30
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfsx f10,r11,r26
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f9,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fadds f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r7,12(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r6,0(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8259e58c
	if (ctx.cr6.lt) goto loc_8259E58C;
loc_8259E66C:
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259E68C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8259e528
	if (ctx.cr6.lt) goto loc_8259E528;
loc_8259E6A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8259E6A8;
	sub_8269CE98(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8259E6B0;
	sub_8269CE98(ctx, base);
	// b 0x8259e42c
	goto loc_8259E42C;
loc_8259E6B4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8259E6BC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_825BB9C8) {
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
	ctx.lr = 0x825BB9D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,110
	ctx.r4.s64 = 110;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x824f71b8
	ctx.lr = 0x825BB9F4;
	sub_824F71B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,35
	ctx.r5.s64 = 35;
	// bl 0x824ff930
	ctx.lr = 0x825BBA04;
	sub_824FF930(ctx, base);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,110
	ctx.r6.s64 = 110;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb1e0
	ctx.lr = 0x825BBA20;
	sub_825BB1E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825bba5c
	if (ctx.cr6.eq) goto loc_825BBA5C;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
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
loc_825BBA5C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825BE100) {
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
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stw r6,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825be1cc
	if (ctx.cr6.eq) goto loc_825BE1CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
loc_825BE130:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// rlwinm r31,r11,29,3,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r30,r1,188
	r30.s64 = ctx.r1.s64 + 188;
	// slw r8,r5,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r5,r31,r30
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + r30.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// clrlwi r31,r11,27
	r31.u64 = ctx.r11.u32 & 0x1F;
	// li r30,-1
	r30.s64 = -1;
	// and r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 & ctx.r5.u64;
	// slw r5,r30,r31
	ctx.r5.u64 = r31.u8 & 0x20 ? 0 : (r30.u32 << (r31.u8 & 0x3F));
	// and r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 & ctx.r5.u64;
	// srw r8,r8,r31
	ctx.r8.u64 = r31.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r31.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x825be1a8
	if (ctx.cr6.lt) goto loc_825BE1A8;
	// beq cr6,0x825be190
	if (ctx.cr6.eq) goto loc_825BE190;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bge cr6,0x825be1ec
	if (!ctx.cr6.lt) goto loc_825BE1EC;
	// lfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x825be1a0
	goto loc_825BE1A0;
loc_825BE190:
	// lfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_825BE1A0:
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// b 0x825be1b4
	goto loc_825BE1B4;
loc_825BE1A8:
	// lfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_825BE1B4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x825be130
	if (ctx.cr6.lt) goto loc_825BE130;
loc_825BE1CC:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x825bdf00
	ctx.lr = 0x825BE1D4;
	sub_825BDF00(ctx, base);
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
loc_825BE1EC:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x825BE1F4;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_825C6880) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stb r11,25(r3)
	REX_STORE_U8(ctx.r3.u32 + 25, ctx.r11.u8);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
loc_825C68AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,48(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm. r8,r8,13,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x825c68cc
	if (!ctx.cr0.eq) goto loc_825C68CC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825c68ac
	goto loc_825C68AC;
loc_825C68CC:
	// lwz r11,116(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x825c6918
	goto loc_825C6918;
loc_825C68F0:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm. r9,r10,10,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825c690c
	if (!ctx.cr0.eq) goto loc_825C690C;
	// rlwinm. r10,r10,12,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c6920
	if (!ctx.cr0.eq) goto loc_825C6920;
loc_825C690C:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_825C6918:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825c68f0
	if (!ctx.cr6.eq) goto loc_825C68F0;
loc_825C6920:
	// lbz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 24);
	// stb r11,25(r3)
	REX_STORE_U8(ctx.r3.u32 + 25, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825CC0E8) {
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
	ctx.lr = 0x825CC0F0;
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
	// beq cr6,0x825cc128
	if (ctx.cr6.eq) goto loc_825CC128;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x825CC124;
	sub_82408848(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_825CC128:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cc144
	if (ctx.cr6.eq) goto loc_825CC144;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c7448
	ctx.lr = 0x825CC140;
	sub_825C7448(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_825CC144:
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
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
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
	// bne 0x825cc1b0
	if (!ctx.cr0.eq) goto loc_825CC1B0;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x825cc1b8
	goto loc_825CC1B8;
loc_825CC1B0:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_825CC1B8:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cc1d0
	if (ctx.cr6.eq) goto loc_825CC1D0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x825CC1D0;
	sub_82409A88(ctx, base);
loc_825CC1D0:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825cc4a4
	if (!ctx.cr6.gt) goto loc_825CC4A4;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r25,r30,2,0,29
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfd f11,20216(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r7.u32 + 20216);
	// subf r30,r25,r28
	r30.u64 = r28.u64 - r25.u64;
	// lfs f5,20328(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20328);
	ctx.f5.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
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
	// lfs f7,19656(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 19656);
	ctx.f7.f64 = double(temp.f32);
	// addi r29,r27,12
	r29.s64 = r27.s64 + 12;
	// lfs f4,20204(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20204);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,19032(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 19032);
	ctx.f6.f64 = double(temp.f32);
loc_825CC244:
	// add r11,r29,r10
	ctx.r11.u64 = r29.u64 + ctx.r10.u64;
	// lfsx f10,r29,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f10,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 + f29.f64));
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
	// beq cr6,0x825cc3f4
	if (ctx.cr6.eq) goto loc_825CC3F4;
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
loc_825CC3F4:
	// cmpwi cr6,r5,127
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 127, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x825cc404
	if (ctx.cr6.lt) goto loc_825CC404;
	// li r11,127
	ctx.r11.s64 = 127;
loc_825CC404:
	// cmpwi cr6,r11,-127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -127, ctx.xer);
	// ble cr6,0x825cc41c
	if (!ctx.cr6.gt) goto loc_825CC41C;
	// cmpwi cr6,r5,127
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 127, ctx.xer);
	// blt cr6,0x825cc420
	if (ctx.cr6.lt) goto loc_825CC420;
	// li r5,127
	ctx.r5.s64 = 127;
	// b 0x825cc420
	goto loc_825CC420;
loc_825CC41C:
	// li r5,-127
	ctx.r5.s64 = -127;
loc_825CC420:
	// cmpwi cr6,r6,127
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 127, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x825cc430
	if (ctx.cr6.lt) goto loc_825CC430;
	// li r11,127
	ctx.r11.s64 = 127;
loc_825CC430:
	// cmpwi cr6,r11,-127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -127, ctx.xer);
	// ble cr6,0x825cc448
	if (!ctx.cr6.gt) goto loc_825CC448;
	// cmpwi cr6,r6,127
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 127, ctx.xer);
	// blt cr6,0x825cc44c
	if (ctx.cr6.lt) goto loc_825CC44C;
	// li r6,127
	ctx.r6.s64 = 127;
	// b 0x825cc44c
	goto loc_825CC44C;
loc_825CC448:
	// li r6,-127
	ctx.r6.s64 = -127;
loc_825CC44C:
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x825cc45c
	if (ctx.cr6.lt) goto loc_825CC45C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_825CC45C:
	// cmpwi cr6,r11,-255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -255, ctx.xer);
	// ble cr6,0x825cc474
	if (!ctx.cr6.gt) goto loc_825CC474;
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// blt cr6,0x825cc478
	if (ctx.cr6.lt) goto loc_825CC478;
	// li r4,255
	ctx.r4.s64 = 255;
	// b 0x825cc478
	goto loc_825CC478;
loc_825CC474:
	// li r4,-255
	ctx.r4.s64 = -255;
loc_825CC478:
	// rlwimi r6,r4,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwimi r5,r11,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stwux r5,r30,r25
	ea = r30.u32 + r25.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	r30.u32 = ea;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825cc244
	if (ctx.cr6.lt) goto loc_825CC244;
loc_825CC4A4:
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

DEFINE_REX_FUNC(sub_825E07A8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// rlwinm. r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825e07fc
	if (!ctx.cr0.eq) goto loc_825E07FC;
	// rlwinm. r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e07fc
	if (!ctx.cr0.eq) goto loc_825E07FC;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// beq cr6,0x825e07fc
	if (ctx.cr6.eq) goto loc_825E07FC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r10,128(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r11,11192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 11192);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825e07fc
	if (!ctx.cr6.eq) goto loc_825E07FC;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x825e07fc
	if (ctx.cr6.eq) goto loc_825E07FC;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// beq cr6,0x825e07fc
	if (ctx.cr6.eq) goto loc_825E07FC;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x825e0800
	if (!ctx.cr6.eq) goto loc_825E0800;
loc_825E07FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825E0800:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E57C0) {
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
	ctx.lr = 0x825E57C8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 140);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825e57ec
	if (!ctx.cr0.eq) goto loc_825E57EC;
	// lbz r11,141(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 141);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e59d4
	if (ctx.cr0.eq) goto loc_825E59D4;
loc_825E57EC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825e0940
	ctx.lr = 0x825E57F4;
	sub_825E0940(ctx, base);
	// lwz r9,100(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 100);
	// lwz r31,56(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e5824
	if (!ctx.cr6.lt) goto loc_825E5824;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825e5828
	goto loc_825E5828;
loc_825E5824:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_825E5828:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825e58d8
	if (!ctx.cr6.eq) goto loc_825E58D8;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825e5864
	if (ctx.cr6.eq) goto loc_825E5864;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,11616
	ctx.r6.s64 = ctx.r11.s64 + 11616;
	// addi r5,r10,13432
	ctx.r5.s64 = ctx.r10.s64 + 13432;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,680
	ctx.r7.s64 = 680;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E5864;
	sub_824EA978(ctx, base);
loc_825E5864:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825e59c0
	if (!ctx.cr0.eq) goto loc_825E59C0;
	// li r3,83
	ctx.r3.s64 = 83;
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825E5880;
	sub_825F9AD0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r31.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,11192
	ctx.r11.s64 = ctx.r11.s64 + 11192;
	// stw r26,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r26.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lfs f4,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f4.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// lwz r4,16(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 16);
	// bl 0x825faab8
	ctx.lr = 0x825E58BC;
	sub_825FAAB8(ctx, base);
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,228(r30)
	REX_STORE_U32(r30.u32 + 228, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825E58D4;
	sub_825FCB18(ctx, base);
	// b 0x825e59c0
	goto loc_825E59C0;
loc_825E58D8:
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825e59c0
	if (!ctx.cr0.eq) goto loc_825E59C0;
	// lwz r11,104(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 104);
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// blt cr6,0x825e593c
	if (ctx.cr6.lt) goto loc_825E593C;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(r30.s32, 7, ctx.xer);
	// bge cr6,0x825e5910
	if (!ctx.cr6.lt) goto loc_825E5910;
	// bl 0x825e94f0
	ctx.lr = 0x825E5904;
	sub_825E94F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r30,-3
	r30.s64 = r30.s64 + -3;
	// b 0x825e593c
	goto loc_825E593C;
loc_825E5910:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,11616
	ctx.r6.s64 = ctx.r11.s64 + 11616;
	// addi r5,r10,19324
	ctx.r5.s64 = ctx.r10.s64 + 19324;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,703
	ctx.r7.s64 = 703;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E5934;
	sub_824EA978(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_825E593C:
	// li r3,102
	ctx.r3.s64 = 102;
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x825fb9b8
	ctx.lr = 0x825E5948;
	sub_825FB9B8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r31,r11,11192
	r31.s64 = ctx.r11.s64 + 11192;
	// stw r26,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r26.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,11192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 11192);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E5980;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825d7c78
	ctx.lr = 0x825E5990;
	sub_825D7C78(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,132(r25)
	REX_STORE_U32(r25.u32 + 132, ctx.r11.u32);
	// lwz r11,228(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 228);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,228(r25)
	REX_STORE_U32(r25.u32 + 228, ctx.r11.u32);
	// bl 0x825fcb18
	ctx.lr = 0x825E59B0;
	sub_825FCB18(ctx, base);
	// lwz r3,104(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 104);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825E59BC;
	sub_825F7718(ctx, base);
	// stw r25,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r25.u32);
loc_825E59C0:
	// lwz r3,100(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 100);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825E59CC;
	sub_825F7718(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_825E59D4:
	// addi r4,r29,20
	ctx.r4.s64 = r29.s64 + 20;
	// lbz r5,124(r29)
	ctx.r5.u64 = REX_LOAD_U8(r29.u32 + 124);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825e35d8
	ctx.lr = 0x825E59E4;
	sub_825E35D8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,136(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 136);
	// bl 0x825e3f00
	ctx.lr = 0x825E59F0;
	sub_825E3F00(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825F6950) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// beq cr6,0x825f6984
	if (ctx.cr6.eq) goto loc_825F6984;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,-88
	ctx.r10.s64 = ctx.r1.s64 + -88;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825F697C:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x825f697c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F697C;
loc_825F6984:
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r7,r4,12
	ctx.r7.s64 = ctx.r4.s64 + 12;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r31,-32255
	r31.s64 = -2113863680;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lfs f8,20208(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20208);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,17280(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 17280);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r1,-76
	ctx.r8.s64 = ctx.r1.s64 + -76;
	// lfs f10,-8120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + -8120);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,15196(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15196);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f11,20244(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20244);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,3720(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 3720);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20240(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20240);
	ctx.f13.f64 = double(temp.f32);
loc_825F69CC:
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x825f69e0
	if (ctx.cr6.eq) goto loc_825F69E0;
	// lfs f6,-4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
loc_825F69E0:
	// fmadds f6,f0,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// rlwinm r11,r9,31,1,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r4,r10,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// fctiwz f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f6,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.f6.u64);
	// lwz r10,-92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// rlwinm r3,r10,28,0,3
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF0000000;
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// stwx r4,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r4.u32);
	// beq cr6,0x825f6a7c
	if (ctx.cr6.eq) goto loc_825F6A7C;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// std r10,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.r10.u64);
	// lfd f6,-88(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// fnmsubs f0,f6,f11,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f11.f64, -ctx.f0.f64)));
	// beq cr6,0x825f6a40
	if (ctx.cr6.eq) goto loc_825F6A40;
	// lfs f6,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f0,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f6.f64)));
	// stfs f6,0(r8)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_825F6A40:
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// bge cr6,0x825f6a7c
	if (!ctx.cr6.lt) goto loc_825F6A7C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f6a5c
	if (ctx.cr6.eq) goto loc_825F6A5C;
	// lfs f6,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f0,f9,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f6.f64)));
	// stfs f6,8(r8)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
loc_825F6A5C:
	// lfs f6,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// fmadds f6,f0,f8,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f6.f64)));
	// stfs f6,12(r8)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// beq cr6,0x825f6a7c
	if (ctx.cr6.eq) goto loc_825F6A7C;
	// lfs f6,16(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f0,f0,f7,f6
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, ctx.f6.f64)));
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 16, temp.u32);
loc_825F6A7C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x825f69cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F69CC;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FB310) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,32568
	ctx.r3.s64 = ctx.r11.s64 + 32568;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FB350) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-19460
	ctx.r3.s64 = ctx.r11.s64 + -19460;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FB5C0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32152
	ctx.r3.s64 = ctx.r11.s64 + -32152;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FB8A0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,141
	ctx.r4.s64 = 141;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825fa990
	ctx.lr = 0x825FB8C0;
	sub_825FA990(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-31464
	ctx.r11.s64 = ctx.r11.s64 + -31464;
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

DEFINE_REX_FUNC(sub_825FD060) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
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

DEFINE_REX_FUNC(sub_825FDB60) {
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
	ctx.lr = 0x825FDB68;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x825fcd38
	ctx.lr = 0x825FDB84;
	sub_825FCD38(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r27,156(r31)
	REX_STORE_U32(r31.u32 + 156, r27.u32);
	// li r28,0
	r28.s64 = 0;
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// addi r11,r11,-30816
	ctx.r11.s64 = ctx.r11.s64 + -30816;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,144(r31)
	REX_STORE_U32(r31.u32 + 144, r28.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,140
	ctx.r4.s64 = 140;
	// stb r10,140(r31)
	REX_STORE_U8(r31.u32 + 140, ctx.r10.u8);
	// stw r28,148(r31)
	REX_STORE_U32(r31.u32 + 148, r28.u32);
	// lwz r30,1452(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FDBBC;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x825fdbdc
	if (ctx.cr0.eq) goto loc_825FDBDC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825fcd38
	ctx.lr = 0x825FDBD4;
	sub_825FCD38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x825fdbe0
	goto loc_825FDBE0;
loc_825FDBDC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_825FDBE0:
	// stw r4,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fd4b8
	ctx.lr = 0x825FDBEC;
	sub_825FD4B8(ctx, base);
	// lwz r4,116(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r30,136(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f7420
	ctx.lr = 0x825FDBFC;
	sub_825F7420(ctx, base);
	// stw r31,948(r30)
	REX_STORE_U32(r30.u32 + 948, r31.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// lwz r27,1452(r29)
	r27.u64 = REX_LOAD_U32(r29.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FDC10;
	sub_825B33A0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x825fdc40
	if (ctx.cr0.eq) goto loc_825FDC40;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825fcd38
	ctx.lr = 0x825FDC28;
	sub_825FCD38(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r31,136(r30)
	REX_STORE_U32(r30.u32 + 136, r31.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r10,r10,-30508
	ctx.r10.s64 = ctx.r10.s64 + -30508;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x825fdc44
	goto loc_825FDC44;
loc_825FDC40:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_825FDC44:
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8260B848) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-15972
	ctx.r11.s64 = ctx.r11.s64 + -15972;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8260b874
	if (ctx.cr0.eq) goto loc_8260B874;
	// bl 0x8264c3d0
	ctx.lr = 0x8260B874;
	sub_8264C3D0(ctx, base);
loc_8260B874:
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

DEFINE_REX_FUNC(sub_8260CBD8) {
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
	ctx.lr = 0x8260CBE0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r24,r3,44
	r24.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260CC18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r23,r31,80
	r23.s64 = r31.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260CC30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260c248
	ctx.lr = 0x8260CC38;
	sub_8260C248(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// blt 0x8260ce10
	if (ctx.cr0.lt) goto loc_8260CE10;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8260cc5c
	if (!ctx.cr6.eq) goto loc_8260CC5C;
	// lis r30,-30570
	r30.s64 = -2003435520;
	// ori r30,r30,1
	r30.u64 = r30.u64 | 1;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_8260CC5C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8260ce10
	if (ctx.cr6.lt) goto loc_8260CE10;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8260cc78
	if (ctx.cr6.lt) goto loc_8260CC78;
	// lis r30,-30570
	r30.s64 = -2003435520;
	// ori r30,r30,1
	r30.u64 = r30.u64 | 1;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_8260CC78:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8260ce10
	if (ctx.cr6.lt) goto loc_8260CE10;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8260cc98
	if (!ctx.cr6.eq) goto loc_8260CC98;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// mulli r10,r28,1068
	ctx.r10.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(1068));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r27,1030(r11)
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 1030);
loc_8260CC98:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8260ccb0
	if (!ctx.cr6.eq) goto loc_8260CCB0;
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 156);
	// mulli r11,r28,1068
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(1068));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r29,1032(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 1032);
loc_8260CCB0:
	// li r11,375
	ctx.r11.s64 = 375;
	// divwu r11,r29,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? r29.u32 / ctx.r11.u32 : 0);
	// mulli r11,r11,375
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(375));
	// subf. r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8260cce0
	if (ctx.cr0.eq) goto loc_8260CCE0;
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,32000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32000, ctx.xer);
	// bge cr6,0x8260ccd4
	if (!ctx.cr6.lt) goto loc_8260CCD4;
	// addi r11,r11,375
	ctx.r11.s64 = ctx.r11.s64 + 375;
loc_8260CCD4:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x8260cce0
	if (ctx.cr6.eq) goto loc_8260CCE0;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_8260CCE0:
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
	// li r4,152
	ctx.r4.s64 = 152;
	// bl 0x8260b5b8
	ctx.lr = 0x8260CCFC;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8260cd1c
	if (ctx.cr0.eq) goto loc_8260CD1C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82615c80
	ctx.lr = 0x8260CD14;
	sub_82615C80(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8260cd20
	goto loc_8260CD20;
loc_8260CD1C:
	// li r29,0
	r29.s64 = 0;
loc_8260CD20:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8260cd38
	if (!ctx.cr6.eq) goto loc_8260CD38;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// b 0x8260ce10
	goto loc_8260CE10;
loc_8260CD38:
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 156);
	// mulli r11,r28,1068
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(1068));
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826155f8
	ctx.lr = 0x8260CD54;
	sub_826155F8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// blt 0x8260cdd0
	if (ctx.cr0.lt) goto loc_8260CDD0;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8260cd9c
	if (ctx.cr6.eq) goto loc_8260CD9C;
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r5,r31,172
	ctx.r5.s64 = r31.s64 + 172;
	// lwz r4,532(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260CD88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// blt 0x8260cdd0
	if (ctx.cr0.lt) goto loc_8260CDD0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
loc_8260CD9C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,408
	ctx.r3.s64 = r31.s64 + 408;
	// bl 0x82613af8
	ctx.lr = 0x8260CDA8;
	sub_82613AF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8260cdc4
	if (ctx.cr0.eq) goto loc_8260CDC4;
	// li r30,0
	r30.s64 = 0;
	// stw r29,0(r22)
	REX_STORE_U32(r22.u32 + 0, r29.u32);
	// stw r29,580(r31)
	REX_STORE_U32(r31.u32 + 580, r29.u32);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// b 0x8260ce10
	goto loc_8260CE10;
loc_8260CDC4:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_8260CDD0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260bc68
	ctx.lr = 0x8260CDDC;
	sub_8260BC68(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r28,r29,4
	r28.s64 = r29.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260CDF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260CE0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8264c3d0
	ctx.lr = 0x8260CE10;
	sub_8264C3D0(ctx, base);
loc_8260CE10:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260CE24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260CE38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x8260ce48
	if (!ctx.cr6.lt) goto loc_8260CE48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260b9b8
	ctx.lr = 0x8260CE48;
	sub_8260B9B8(ctx, base);
loc_8260CE48:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8261b718
	ctx.lr = 0x8260CE50;
	sub_8261B718(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82618EA0) {
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
	// bl 0x82618c90
	ctx.lr = 0x82618EC0;
	sub_82618C90(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82618ed0
	if (ctx.cr0.eq) goto loc_82618ED0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82618ED0;
	sub_8264C3D0(ctx, base);
loc_82618ED0:
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

DEFINE_REX_FUNC(sub_8261BC60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8261BC68;
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261BC90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261ba58
	ctx.lr = 0x8261BC9C;
	sub_8261BA58(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8261b820
	ctx.lr = 0x8261BCA8;
	sub_8261B820(ctx, base);
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
	ctx.lr = 0x8261BCC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82620090) {
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
	ctx.lr = 0x82620098;
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,352(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 352);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// lwz r26,360(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// lhz r21,0(r5)
	r21.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r25,428(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 428);
	// li r19,0
	r19.s64 = 0;
	// lhz r24,34(r30)
	r24.u64 = REX_LOAD_U16(r30.u32 + 34);
	// li r29,0
	r29.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826200f4
	if (!ctx.cr6.eq) goto loc_826200F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-136(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x826a1ce0
	return;
loc_826200F4:
	// lwz r11,424(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82620104
	if (ctx.cr6.eq) goto loc_82620104;
	// li r24,6
	r24.s64 = 6;
loc_82620104:
	// li r20,0
	r20.s64 = 0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x82620278
	if (!ctx.cr6.gt) goto loc_82620278;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,3720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	f31.f64 = double(temp.f32);
	// lfs f30,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	f30.f64 = double(temp.f32);
loc_82620120:
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x82620180
	if (!ctx.cr6.gt) goto loc_82620180;
loc_8262012C:
	// lwz r11,524(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 524);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lhz r5,110(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 110);
	// lwz r4,88(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82620148;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r9,432(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 432);
	// lwz r8,148(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 148);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mullw r11,r31,r9
	ctx.r11.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + r29.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r31,r24
	ctx.cr6.compare<int32_t>(r31.s32, r24.s32, ctx.xer);
	// stfsx f12,r6,r8
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x8262012c
	if (ctx.cr6.lt) goto loc_8262012C;
loc_82620180:
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,432(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 432);
	// mullw r11,r11,r24
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r24.s32);
	// add r23,r11,r23
	r23.u64 = ctx.r11.u64 + r23.u64;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x826201a8
	if (ctx.cr6.eq) goto loc_826201A8;
	// addi r11,r21,-1
	ctx.r11.s64 = r21.s64 + -1;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(r20.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8262026c
	if (!ctx.cr6.eq) goto loc_8262026C;
loc_826201A8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,428(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 428);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826373c0
	ctx.lr = 0x826201B8;
	sub_826373C0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bgt cr6,0x82620290
	if (ctx.cr6.gt) goto loc_82620290;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82620264
	if (!ctx.cr6.gt) goto loc_82620264;
loc_826201D4:
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x8262024c
	if (!ctx.cr6.gt) goto loc_8262024C;
loc_826201E0:
	// lwz r11,432(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 432);
	// lwz r10,148(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 148);
	// mullw r11,r31,r11
	ctx.r11.s64 = int64_t(r31.s32) * int64_t(ctx.r11.s32);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82620214
	if (!ctx.cr6.lt) goto loc_82620214;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82620224
	goto loc_82620224;
loc_82620214:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_82620224:
	// lwz r11,520(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 520);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8262023C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(r31.s32, r26.s32, ctx.xer);
	// blt cr6,0x826201e0
	if (ctx.cr6.lt) goto loc_826201E0;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8262024C:
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826201d4
	if (ctx.cr6.lt) goto loc_826201D4;
loc_82620264:
	// add r22,r10,r22
	r22.u64 = ctx.r10.u64 + r22.u64;
	// li r29,0
	r29.s64 = 0;
loc_8262026C:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// cmpw cr6,r20,r21
	ctx.cr6.compare<int32_t>(r20.s32, r21.s32, ctx.xer);
	// blt cr6,0x82620120
	if (ctx.cr6.lt) goto loc_82620120;
loc_82620278:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// sth r22,0(r18)
	REX_STORE_U16(r18.u32 + 0, r22.u16);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x826a1ce0
	return;
loc_82620290:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_82634E88) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82634f28
	if (ctx.cr6.lt) goto loc_82634F28;
	// subfic r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 <= 4294967295;
	ctx.r11.u64 = static_cast<uint64_t>(-1) - ctx.r4.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82634f28
	if (ctx.cr6.gt) goto loc_82634F28;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x823f02b8
	ctx.lr = 0x82634EC0;
	sub_823F02B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82634f28
	if (ctx.cr6.eq) goto loc_82634F28;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x82634f1c
	if (ctx.cr6.lt) goto loc_82634F1C;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// ble cr6,0x82634eec
	if (!ctx.cr6.gt) goto loc_82634EEC;
loc_82634EDC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r10,r31,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x82634edc
	if (ctx.cr6.gt) goto loc_82634EDC;
loc_82634EEC:
	// li r10,-1
	ctx.r10.s64 = -1;
	// add r9,r3,r31
	ctx.r9.u64 = ctx.r3.u64 + r31.u64;
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// subf r6,r3,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stb r6,-1(r7)
	REX_STORE_U8(ctx.r7.u32 + -1, ctx.r6.u8);
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
loc_82634F1C:
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x823f0350
	ctx.lr = 0x82634F28;
	sub_823F0350(ctx, base);
loc_82634F28:
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

DEFINE_REX_FUNC(sub_82637F90) {
	REX_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// and r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 & ctx.r4.u64;
	// sth r11,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82637FAC:
	// and r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82637fc4
	if (ctx.cr6.eq) goto loc_82637FC4;
	// lhz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r8.u16);
loc_82637FC4:
	// and r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x82637fac
	if (ctx.cr6.lt) goto loc_82637FAC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82638BE8) {
	REX_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82638968
	sub_82638968(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82638D80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82638D88;
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
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 24, ctx.xer);
	// ble cr6,0x82638db4
	if (!ctx.cr6.gt) goto loc_82638DB4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82638DB4:
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// bge cr6,0x82638eb4
	if (!ctx.cr6.lt) goto loc_82638EB4;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82638e18
	if (ctx.cr6.eq) goto loc_82638E18;
	// subfic r11,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82638ddc
	if (ctx.cr6.lt) goto loc_82638DDC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82638DDC:
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 44);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 36);
	// srw r5,r8,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// slw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// slw r4,r6,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 | ctx.r5.u64;
	// and r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ctx.r8.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stw r8,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r8.u32);
	// stw r7,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r7.u32);
loc_82638E18:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82638e8c
	if (ctx.cr6.gt) goto loc_82638E8C;
loc_82638E24:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82638e8c
	if (!ctx.cr6.gt) goto loc_82638E8C;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,84(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r7,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82638E58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r4,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r4.u32);
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// ble cr6,0x82638e24
	if (!ctx.cr6.gt) goto loc_82638E24;
loc_82638E8C:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bge cr6,0x82638eb4
	if (!ctx.cr6.lt) goto loc_82638EB4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82638bf0
	ctx.lr = 0x82638EA8;
	sub_82638BF0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82638ee0
	if (ctx.cr6.lt) goto loc_82638EE0;
loc_82638EB4:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 36);
	// subf r7,r30,r11
	ctx.r7.u64 = ctx.r11.u64 - r30.u64;
	// addi r6,r10,6160
	ctx.r6.s64 = ctx.r10.s64 + 6160;
	// stw r7,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r7.u32);
	// srw r5,r8,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// lwzx r4,r9,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// stw r3,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r3.u32);
loc_82638EE0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826420C0) {
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
	// bl 0x8264c540
	ctx.lr = 0x826420D8;
	sub_8264C540(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-27092
	ctx.r10.s64 = ctx.r10.s64 + -27092;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_826427A8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826427b4
	if (!ctx.cr6.eq) goto loc_826427B4;
	// b 0x8264c3b0
	sub_8264C3B0(ctx, base);
	return;
loc_826427B4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,260(r3)
	REX_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826429C8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r5,r3,252
	ctx.r5.s64 = ctx.r3.s64 + 252;
	// addi r4,r10,-15776
	ctx.r4.s64 = ctx.r10.s64 + -15776;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82642A04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82642a44
	if (ctx.cr0.lt) goto loc_82642A44;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r5,r30,256
	ctx.r5.s64 = r30.s64 + 256;
	// addi r4,r10,-14148
	ctx.r4.s64 = ctx.r10.s64 + -14148;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82642A2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16386
	ctx.r11.u64 = ctx.r11.u64 | 16386;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_82642A44:
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

DEFINE_REX_FUNC(sub_82646FB0) {
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
	ctx.lr = 0x82646FB8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82647200
	if (ctx.cr6.eq) goto loc_82647200;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82647200
	if (ctx.cr6.eq) goto loc_82647200;
	// rlwinm r27,r4,29,3,31
	r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x826471f8
	if (ctx.cr6.eq) goto loc_826471F8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// clrlwi r23,r7,16
	r23.u64 = ctx.r7.u32 & 0xFFFF;
	// li r24,1
	r24.s64 = 1;
	// li r25,128
	r25.s64 = 128;
	// lfd f0,-31200(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -31200);
	// addi r26,r11,-26936
	r26.s64 = ctx.r11.s64 + -26936;
loc_82646FF4:
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(r27.u32, r23.u32, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// blt cr6,0x82647004
	if (ctx.cr6.lt) goto loc_82647004;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82647004:
	// stb r24,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, r24.u8);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stbu r24,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U8(ea, r24.u8);
	ctx.r5.u32 = ea;
	// subf r27,r11,r27
	r27.u64 = r27.u64 - ctx.r11.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// sthu r25,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U16(ea, r25.u16);
	ctx.r5.u32 = ea;
	// sthu r25,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, r25.u16);
	ctx.r5.u32 = ea;
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfsu f13,4(r3)
	ea = 4 + ctx.r3.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r3.u32 = ea;
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f10,f13,f0
	ctx.f10.f64 = ctx.f13.f64 * ctx.f0.f64;
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// fctiwz f9,f11
	ctx.f9.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f9.u64);
	// lwz r9,-108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// fctiwz f8,f10
	ctx.f8.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f8.u64);
	// lwz r6,-108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// beq 0x82647090
	if (ctx.cr0.eq) goto loc_82647090;
	// lfs f12,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfsu f13,4(r3)
	ea = 4 + ctx.r3.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r3.u32 = ea;
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f10,f13,f0
	ctx.f10.f64 = ctx.f13.f64 * ctx.f0.f64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// fctiwz f9,f11
	ctx.f9.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f9.u64);
	// fctiwz f8,f10
	ctx.f8.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f8.u64);
	// lwz r30,-108(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// lwz r7,-100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// b 0x82647098
	goto loc_82647098;
loc_82647090:
	// li r30,0
	r30.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82647098:
	// sth r30,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r30.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sthu r7,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r11.u32 = ea;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// sthu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r11.u32 = ea;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// beq cr6,0x826471f0
	if (ctx.cr6.eq) goto loc_826471F0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826470B8:
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f11.u64);
	// lwz r10,-100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r4,r9,r28
	ctx.r4.u64 = uint32_t((r28.s32 && !(ctx.r9.s32 == INT32_MIN && r28.s32 == -1)) ? ctx.r9.s32 / r28.s32 : 0);
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// ble cr6,0x826470f0
	if (!ctx.cr6.gt) goto loc_826470F0;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x826470fc
	goto loc_826470FC;
loc_826470F0:
	// cmpwi cr6,r4,-8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -8, ctx.xer);
	// bge cr6,0x826470fc
	if (!ctx.cr6.lt) goto loc_826470FC;
	// li r4,-8
	ctx.r4.s64 = -8;
loc_826470FC:
	// mullw r10,r4,r28
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(r28.s32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,32767
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32767, ctx.xer);
	// ble cr6,0x82647114
	if (!ctx.cr6.gt) goto loc_82647114;
	// li r9,32767
	ctx.r9.s64 = 32767;
	// b 0x82647120
	goto loc_82647120;
loc_82647114:
	// cmpwi cr6,r9,-32768
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -32768, ctx.xer);
	// bge cr6,0x82647120
	if (!ctx.cr6.lt) goto loc_82647120;
	// li r9,-32768
	ctx.r9.s64 = -32768;
loc_82647120:
	// rlwinm r11,r4,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// lwzx r10,r11,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// mullw r3,r10,r28
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x8264713c
	if (!ctx.cr6.lt) goto loc_8264713C;
	// li r11,16
	ctx.r11.s64 = 16;
loc_8264713C:
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// mr r29,r30
	r29.u64 = r30.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f11.u64);
	// lwz r9,-100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// divw r11,r8,r31
	ctx.r11.u64 = uint32_t((r31.s32 && !(ctx.r8.s32 == INT32_MIN && r31.s32 == -1)) ? ctx.r8.s32 / r31.s32 : 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82647180
	if (!ctx.cr6.gt) goto loc_82647180;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8264718c
	goto loc_8264718C;
loc_82647180:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x8264718c
	if (!ctx.cr6.lt) goto loc_8264718C;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_8264718C:
	// mullw r9,r11,r31
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x826471a4
	if (!ctx.cr6.gt) goto loc_826471A4;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x826471b0
	goto loc_826471B0;
loc_826471A4:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x826471b0
	if (!ctx.cr6.lt) goto loc_826471B0;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_826471B0:
	// rlwinm r8,r11,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// lwzx r6,r8,r26
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r26.u32);
	// mullw r11,r6,r31
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(r31.s32);
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x826471d0
	if (!ctx.cr6.lt) goto loc_826471D0;
	// li r11,16
	ctx.r11.s64 = 16;
loc_826471D0:
	// rlwinm r8,r4,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// or r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 | ctx.r9.u64;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// stb r4,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r4.u8);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bdnz 0x826470b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826470B8;
loc_826471F0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x82646ff4
	if (!ctx.cr6.eq) goto loc_82646FF4;
loc_826471F8:
	// subf r3,r22,r5
	ctx.r3.u64 = ctx.r5.u64 - r22.u64;
	// b 0x826a1cf0
	return;
loc_82647200:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82656400) {
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
	ctx.lr = 0x82656408;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82656444
	if (ctx.cr6.eq) goto loc_82656444;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,1609
	r30.u64 = r30.u64 | 1609;
	// b 0x8265671c
	goto loc_8265671C;
loc_82656444:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r21,0
	r21.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r21,24(r31)
	REX_STORE_U32(r31.u32 + 24, r21.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82656474;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82652168
	ctx.lr = 0x8265648C;
	sub_82652168(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x826566fc
	if (ctx.cr0.lt) goto loc_826566FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826564ac
	if (!ctx.cr6.lt) goto loc_826564AC;
	// lis r30,-32747
	r30.s64 = -2146107392;
	// ori r30,r30,20994
	r30.u64 = r30.u64 | 20994;
	// b 0x826566fc
	goto loc_826566FC;
loc_826564AC:
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8265650c
	if (ctx.cr6.eq) goto loc_8265650C;
	// lwz r27,324(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_826564CC:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,32778
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32778, ctx.xer);
	// bne cr6,0x826564f0
	if (!ctx.cr6.eq) goto loc_826564F0;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826564e8
	if (!ctx.cr6.eq) goto loc_826564E8;
	// li r7,1
	ctx.r7.s64 = 1;
loc_826564E8:
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x826564fc
	goto loc_826564FC;
loc_826564F0:
	// cmplwi cr6,r11,32779
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32779, ctx.xer);
	// bne cr6,0x826564fc
	if (!ctx.cr6.eq) goto loc_826564FC;
	// li r8,1
	ctx.r8.s64 = 1;
loc_826564FC:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x826564cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826564CC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82656518
	if (!ctx.cr6.eq) goto loc_82656518;
loc_8265650C:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,87
	r30.u64 = r30.u64 | 87;
	// b 0x826566fc
	goto loc_826566FC;
loc_82656518:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8265650c
	if (ctx.cr6.eq) goto loc_8265650C;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82656540
	if (ctx.cr6.eq) goto loc_82656540;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82656548
	if (ctx.cr6.eq) goto loc_82656548;
loc_82656534:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,117
	r30.u64 = r30.u64 | 117;
	// b 0x826566fc
	goto loc_826566FC;
loc_82656540:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82656534
	if (ctx.cr6.eq) goto loc_82656534;
loc_82656548:
	// addi r25,r31,228
	r25.s64 = r31.s64 + 228;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8265ca10
	ctx.lr = 0x82656560;
	sub_8265CA10(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x826566fc
	if (ctx.cr0.lt) goto loc_826566FC;
	// addi r26,r31,240
	r26.s64 = r31.s64 + 240;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8265c550
	ctx.lr = 0x82656580;
	sub_8265C550(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x826566fc
	if (ctx.cr0.lt) goto loc_826566FC;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r23,168(r31)
	REX_STORE_U8(r31.u32 + 168, r23.u8);
	// oris r7,r11,16384
	ctx.r7.u64 = ctx.r11.u64 | 1073741824;
	// stb r22,169(r31)
	REX_STORE_U8(r31.u32 + 169, r22.u8);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// ori r7,r7,1024
	ctx.r7.u64 = ctx.r7.u64 | 1024;
	// subf r11,r8,r28
	ctx.r11.u64 = r28.u64 - ctx.r8.u64;
	// stw r7,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r7.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8264ffb8
	ctx.lr = 0x826565B8;
	sub_8264FFB8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm. r27,r3,0,29,30
	r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x826565d8
	if (ctx.cr0.eq) goto loc_826565D8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x826565d8
	if (!ctx.cr6.eq) goto loc_826565D8;
	// lis r30,-32747
	r30.s64 = -2146107392;
	// ori r30,r30,21001
	r30.u64 = r30.u64 | 21001;
	// b 0x826566fc
	goto loc_826566FC;
loc_826565D8:
	// rlwimi r7,r29,10,20,20
	ctx.r7.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 10) & 0x800) | (ctx.r7.u64 & 0xFFFFFFFFFFFFF7FF);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r7,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r7.u32);
	// rlwinm r8,r29,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82655208
	ctx.lr = 0x82656600;
	sub_82655208(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x826566fc
	if (ctx.cr0.lt) goto loc_826566FC;
	// mr r30,r21
	r30.u64 = r21.u64;
	// addi r28,r31,380
	r28.s64 = r31.s64 + 380;
loc_82656610:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265663c
	if (ctx.cr6.eq) goto loc_8265663C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8265d0d8
	ctx.lr = 0x8265662C;
	sub_8265D0D8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8265c758
	ctx.lr = 0x8265663C;
	sub_8265C758(ctx, base);
loc_8265663C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x82656610
	if (ctx.cr6.lt) goto loc_82656610;
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x823ef900
	ctx.lr = 0x82656654;
	sub_823EF900(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stw r11,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82656688
	if (!ctx.cr6.eq) goto loc_82656688;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x82656688
	if (!ctx.cr6.eq) goto loc_82656688;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82655a20
	ctx.lr = 0x82656684;
	sub_82655A20(ctx, base);
	// b 0x82656718
	goto loc_82656718;
loc_82656688:
	// lbz r9,169(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 169);
	// addi r30,r31,200
	r30.s64 = r31.s64 + 200;
	// lbz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 168);
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// stw r29,176(r31)
	REX_STORE_U32(r31.u32 + 176, r29.u32);
	// addi r8,r31,48
	ctx.r8.s64 = r31.s64 + 48;
	// addi r7,r31,40
	ctx.r7.s64 = r31.s64 + 40;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// stb r9,173(r31)
	REX_STORE_U8(r31.u32 + 173, ctx.r9.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,172(r31)
	REX_STORE_U8(r31.u32 + 172, ctx.r11.u8);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// std r21,200(r31)
	REX_STORE_U64(r31.u32 + 200, r21.u64);
	// std r21,208(r31)
	REX_STORE_U64(r31.u32 + 208, r21.u64);
	// std r21,216(r31)
	REX_STORE_U64(r31.u32 + 216, r21.u64);
	// stw r21,224(r31)
	REX_STORE_U32(r31.u32 + 224, r21.u32);
	// lbz r6,169(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 169);
	// lbz r5,168(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 168);
	// bl 0x8264da18
	ctx.lr = 0x826566D4;
	sub_8264DA18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265670c
	if (ctx.cr0.eq) goto loc_8265670C;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8265670c
	if (ctx.cr6.eq) goto loc_8265670C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ede70
	ctx.lr = 0x826566EC;
	sub_823EDE70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x826566fc
	if (ctx.cr0.lt) goto loc_826566FC;
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
loc_826566FC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654f40
	ctx.lr = 0x82656708;
	sub_82654F40(ctx, base);
	// b 0x8265671c
	goto loc_8265671C;
loc_8265670C:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r11,r11,23072
	ctx.r11.s64 = ctx.r11.s64 + 23072;
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
loc_82656718:
	// mr r30,r21
	r30.u64 = r21.u64;
loc_8265671C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_826682B8) {
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
	// cmplwi cr6,r6,5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 5, ctx.xer);
	// blt cr6,0x82668394
	if (ctx.cr6.lt) goto loc_82668394;
	// lwz r9,1(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 1);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82668394
	if (ctx.cr6.eq) goto loc_82668394;
	// lwz r11,60(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82668394
	if (ctx.cr6.eq) goto loc_82668394;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82668394
	if (ctx.cr6.eq) goto loc_82668394;
	// lwz r11,240(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// addi r10,r3,240
	ctx.r10.s64 = ctx.r3.s64 + 240;
	// b 0x82668310
	goto loc_82668310;
loc_826682FC:
	// lwz r8,56(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82668324
	if (ctx.cr6.eq) goto loc_82668324;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82668310:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82668320
	if (ctx.cr6.eq) goto loc_82668320;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826682fc
	if (!ctx.cr0.eq) goto loc_826682FC;
loc_82668320:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82668324:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8266835c
	if (ctx.cr6.eq) goto loc_8266835C;
	// lwz r11,292(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 292);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82668374
	if (ctx.cr0.eq) goto loc_82668374;
	// lwz r10,60(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r10,29,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1F;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lbz r10,136(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 136);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82668364
	if (ctx.cr0.eq) goto loc_82668364;
loc_8266835C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8266839c
	goto loc_8266839C;
loc_82668364:
	// addi r10,r4,136
	ctx.r10.s64 = ctx.r4.s64 + 136;
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
loc_82668374:
	// lwz r11,152(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266838c
	if (ctx.cr6.eq) goto loc_8266838C;
	// lwz r11,292(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 292);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266835c
	if (!ctx.cr0.eq) goto loc_8266835C;
loc_8266838C:
	// bl 0x826664b0
	ctx.lr = 0x82668390;
	sub_826664B0(ctx, base);
	// b 0x8266839c
	goto loc_8266839C;
loc_82668394:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4106
	ctx.r3.u64 = ctx.r3.u64 | 4106;
loc_8266839C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8266FBC0) {
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
	ctx.lr = 0x8266FBC8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lis r10,-32646
	ctx.r10.s64 = -2139488256;
	// lwz r28,20(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r5,32(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// ori r27,r10,4106
	r27.u64 = ctx.r10.u64 | 4106;
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r7,220(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8266fc04
	if (!ctx.cr6.eq) goto loc_8266FC04;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8266fd80
	if (ctx.cr6.eq) goto loc_8266FD80;
loc_8266FC04:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826762a8
	ctx.lr = 0x8266FC10;
	sub_826762A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8266fd14
	if (ctx.cr0.eq) goto loc_8266FD14;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8266fc6c
	if (ctx.cr0.eq) goto loc_8266FC6C;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266fc3c
	if (ctx.cr0.eq) goto loc_8266FC3C;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8266fc5c
	if (!ctx.cr6.gt) goto loc_8266FC5C;
loc_8266FC3C:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8266adb8
	ctx.lr = 0x8266FC50;
	sub_8266ADB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8266fda4
	if (!ctx.cr0.eq) goto loc_8266FDA4;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_8266FC5C:
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266fdb8
	if (ctx.cr0.eq) goto loc_8266FDB8;
	// b 0x8266fd78
	goto loc_8266FD78;
loc_8266FC6C:
	// lwz r8,220(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8266fcf8
	if (ctx.cr0.eq) goto loc_8266FCF8;
	// lwz r9,212(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 212);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8266FC84:
	// rlwinm r6,r11,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// lwzx r30,r9,r10
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r5,r11,29
	ctx.r5.u64 = ctx.r11.u32 & 0x7;
	// li r4,1
	ctx.r4.s64 = 1;
	// slw r5,r4,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r5.u8 & 0x3F));
	// lbzx r6,r6,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// and. r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8266fcbc
	if (!ctx.cr0.eq) goto loc_8266FCBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8266fc84
	if (ctx.cr6.lt) goto loc_8266FC84;
	// b 0x8266fcf8
	goto loc_8266FCF8;
loc_8266FCBC:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,16(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 16);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r30
	r31.u64 = r30.u64;
	// bl 0x82675b70
	ctx.lr = 0x8266FCD8;
	sub_82675B70(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,74
	ctx.r11.s64 = ctx.r11.s64 + 74;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8266FCF8:
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266fd5c
	if (ctx.cr0.eq) goto loc_8266FD5C;
	// lwz r11,36(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 36);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8266fd20
	if (ctx.cr6.eq) goto loc_8266FD20;
loc_8266FD14:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4106
	ctx.r3.u64 = ctx.r3.u64 | 4106;
	// b 0x8266fda4
	goto loc_8266FDA4;
loc_8266FD20:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8266fd3c
	if (!ctx.cr6.eq) goto loc_8266FD3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8266fd4c
	goto loc_8266FD4C;
loc_8266FD3C:
	// subf. r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// ble 0x8266fd4c
	if (!ctx.cr0.gt) goto loc_8266FD4C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8266FD4C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8266fd5c
	if (ctx.cr6.eq) goto loc_8266FD5C;
	// blt cr6,0x8266fda4
	if (ctx.cr6.lt) goto loc_8266FDA4;
	// b 0x8266fdb8
	goto loc_8266FDB8;
loc_8266FD5C:
	// lwz r11,36(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 36);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8266fd78
	if (!ctx.cr6.eq) goto loc_8266FD78;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_8266FD78:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_8266FD80:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x8266fda0
	if (ctx.cr6.lt) goto loc_8266FDA0;
	// lwz r10,292(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8266fdcc
	if (ctx.cr0.eq) goto loc_8266FDCC;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// beq cr6,0x8266fde4
	if (ctx.cr6.eq) goto loc_8266FDE4;
loc_8266FDA0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8266FDA4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8266bfc8
	ctx.lr = 0x8266FDB8;
	sub_8266BFC8(ctx, base);
loc_8266FDB8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82675ad0
	ctx.lr = 0x8266FDC0;
	sub_82675AD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
loc_8266FDCC:
	// lwz r10,180(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8266fde4
	if (!ctx.cr6.eq) goto loc_8266FDE4;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bne cr6,0x8266fda0
	if (!ctx.cr6.eq) goto loc_8266FDA0;
loc_8266FDE4:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-5
	ctx.r10.s64 = ctx.r10.s64 + -5;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bgt cr6,0x8266fda0
	if (ctx.cr6.gt) goto loc_8266FDA0;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,-10904
	ctx.r12.s64 = ctx.r12.s64 + -10904;
	// lbzx r0,r12,r10
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32153
	ctx.r12.s64 = -2107179008;
	// nop 
	// addi r12,r12,-608
	ctx.r12.s64 = ctx.r12.s64 + -608;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8266FE1C;
	case 1:
		goto loc_8266FE34;
	case 2:
		goto loc_8266FE4C;
	case 3:
		goto loc_8266FE64;
	case 4:
		goto loc_8266FE84;
	case 5:
		goto loc_8266FE9C;
	case 6:
		goto loc_8266FEB4;
	case 7:
		goto loc_8266FECC;
	case 8:
		goto loc_8266FEE4;
	case 9:
		goto loc_8266FF14;
	case 10:
		goto loc_8266FF2C;
	case 11:
		goto loc_8266FF44;
	case 12:
		goto loc_8266FF5C;
	case 13:
		goto loc_8266FF74;
	case 14:
		goto loc_8266FF8C;
	case 15:
		goto loc_8266FFA4;
	case 16:
		goto loc_8266FFBC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8266FE1C:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r6,32(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8266d460
	ctx.lr = 0x8266FE30;
	sub_8266D460(ctx, base);
	// b 0x8266ffd0
	goto loc_8266FFD0;
loc_8266FE34:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82665760
	ctx.lr = 0x8266FE48;
	sub_82665760(ctx, base);
	// b 0x8266ffd0
	goto loc_8266FFD0;
loc_8266FE4C:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826658a8
	ctx.lr = 0x8266FE60;
	sub_826658A8(ctx, base);
	// b 0x8266ffd0
	goto loc_8266FFD0;
loc_8266FE64:
	// cmplwi cr6,r5,9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 9, ctx.xer);
	// blt cr6,0x8266ff0c
	if (ctx.cr6.lt) goto loc_8266FF0C;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// lwz r4,1(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1);
	// lwz r5,5(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 5);
	// lwz r6,60(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 60);
	// bl 0x82673878
	ctx.lr = 0x8266FE80;
	sub_82673878(ctx, base);
	// b 0x8266ffd0
	goto loc_8266FFD0;
loc_8266FE84:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826616d8
	ctx.lr = 0x8266FE98;
	sub_826616D8(ctx, base);
	// b 0x8266ffd0
	goto loc_8266FFD0;
loc_8266FE9C:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82661750
	ctx.lr = 0x8266FEB0;
	sub_82661750(ctx, base);
	// b 0x8266ffd0
	goto loc_8266FFD0;
loc_8266FEB4:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8266da38
	ctx.lr = 0x8266FEC8;
	sub_8266DA38(ctx, base);
	// b 0x8266ffd0
	goto loc_8266FFD0;
loc_8266FECC:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826682b8
	ctx.lr = 0x8266FEE0;
	sub_826682B8(ctx, base);
	// b 0x8266ffd0
	goto loc_8266FFD0;
loc_8266FEE4:
	// cmplwi cr6,r5,5
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5, ctx.xer);
	// blt cr6,0x8266ff0c
	if (ctx.cr6.lt) goto loc_8266FF0C;
	// lwz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266ff0c
	if (ctx.cr6.eq) goto loc_8266FF0C;
	// lwz r10,24(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8266ff0c
	if (ctx.cr6.eq) goto loc_8266FF0C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8266ffd0
	goto loc_8266FFD0;
loc_8266FF0C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x8266ffd0
	goto loc_8266FFD0;
loc_8266FF14:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82665a38
	ctx.lr = 0x8266FF28;
	sub_82665A38(ctx, base);
	// b 0x8266ffd0
	goto loc_8266FFD0;
loc_8266FF2C:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826683b0
	ctx.lr = 0x8266FF40;
	sub_826683B0(ctx, base);
	// b 0x8266ffd0
	goto loc_8266FFD0;
loc_8266FF44:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8266b510
	ctx.lr = 0x8266FF58;
	sub_8266B510(ctx, base);
	// b 0x8266ffd0
	goto loc_8266FFD0;
loc_8266FF5C:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82665be8
	ctx.lr = 0x8266FF70;
	sub_82665BE8(ctx, base);
	// b 0x8266ffd0
	goto loc_8266FFD0;
loc_8266FF74:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8266ba60
	ctx.lr = 0x8266FF88;
	sub_8266BA60(ctx, base);
	// b 0x8266ffd0
	goto loc_8266FFD0;
loc_8266FF8C:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8266dcc0
	ctx.lr = 0x8266FFA0;
	sub_8266DCC0(ctx, base);
	// b 0x8266ffd0
	goto loc_8266FFD0;
loc_8266FFA4:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82665d08
	ctx.lr = 0x8266FFB8;
	sub_82665D08(ctx, base);
	// b 0x8266ffd0
	goto loc_8266FFD0;
loc_8266FFBC:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8266e240
	ctx.lr = 0x8266FFD0;
	sub_8266E240(ctx, base);
loc_8266FFD0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8266fda4
	if (!ctx.cr6.eq) goto loc_8266FDA4;
	// b 0x8266fdb8
	goto loc_8266FDB8;
}

DEFINE_REX_FUNC(sub_82682780) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82682798
	if (ctx.cr6.gt) goto loc_82682798;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82682798:
	// b 0x826826f0
	sub_826826F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82682A90) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// beq 0x82682adc
	if (ctx.cr0.eq) goto loc_82682ADC;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x826710f8
	ctx.lr = 0x82682AC0;
	sub_826710F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82682adc
	if (ctx.cr0.lt) goto loc_82682ADC;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// bl 0x82676d18
	ctx.lr = 0x82682ADC;
	sub_82676D18(ctx, base);
loc_82682ADC:
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

DEFINE_REX_FUNC(sub_82684E68) {
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-10144
	ctx.r11.s64 = ctx.r11.s64 + -10144;
	// addi r10,r10,-10160
	ctx.r10.s64 = ctx.r10.s64 + -10160;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r30,r3,80
	r30.s64 = ctx.r3.s64 + 80;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826829e8
	ctx.lr = 0x82684EA4;
	sub_826829E8(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82130e88
	ctx.lr = 0x82684EAC;
	sub_82130E88(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,31396
	ctx.r11.s64 = ctx.r11.s64 + 31396;
	// addi r10,r10,5148
	ctx.r10.s64 = ctx.r10.s64 + 5148;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82687498) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 1);
	// bne cr6,0x826874b4
	if (!ctx.cr6.eq) goto loc_826874B4;
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// b 0x826874d8
	goto loc_826874D8;
loc_826874B4:
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 1);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bge cr6,0x826874e0
	if (!ctx.cr6.lt) goto loc_826874E0;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
loc_826874D8:
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// blr 
	return;
loc_826874E0:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_826874E8:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 1);
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// bge cr6,0x8268750c
	if (!ctx.cr6.lt) goto loc_8268750C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x826874e8
	goto loc_826874E8;
loc_8268750C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8268751c
	if (ctx.cr6.eq) goto loc_8268751C;
	// stw r5,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// b 0x82687520
	goto loc_82687520;
loc_8268751C:
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
loc_82687520:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8268AC08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8268AC10;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,52(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,52
	r30.s64 = ctx.r3.s64 + 52;
	// li r28,0
	r28.s64 = 0;
loc_8268AC24:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8268ac74
	if (ctx.cr6.eq) goto loc_8268AC74;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x8268ac74
	if (ctx.cr6.eq) goto loc_8268AC74;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268ac64
	if (ctx.cr6.eq) goto loc_8268AC64;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8268ac58
	if (!ctx.cr6.eq) goto loc_8268AC58;
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
loc_8268AC58:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
loc_8268AC64:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268ab68
	ctx.lr = 0x8268AC6C;
	sub_8268AB68(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x8268ac24
	goto loc_8268AC24;
loc_8268AC74:
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r29,r31,44
	r29.s64 = r31.s64 + 44;
loc_8268AC7C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8268adb8
	if (ctx.cr6.eq) goto loc_8268ADB8;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x8268adb8
	if (ctx.cr6.eq) goto loc_8268ADB8;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268acc0
	if (ctx.cr6.eq) goto loc_8268ACC0;
	// lwz r8,4(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8268acb4
	if (!ctx.cr6.eq) goto loc_8268ACB4;
	// stw r28,4(r29)
	REX_STORE_U32(r29.u32 + 4, r28.u32);
loc_8268ACB4:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// stw r28,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r28.u32);
loc_8268ACC0:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8268ada8
	if (!ctx.cr6.eq) goto loc_8268ADA8;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lbz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 60);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r10,140(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 140);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8268acec
	if (ctx.cr6.eq) goto loc_8268ACEC;
	// stb r10,60(r31)
	REX_STORE_U8(r31.u32 + 60, ctx.r10.u8);
loc_8268ACEC:
	// lhz r10,62(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 62);
	// cmplwi cr6,r10,2048
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2048, ctx.xer);
	// blt cr6,0x8268acfc
	if (ctx.cr6.lt) goto loc_8268ACFC;
	// sth r28,62(r31)
	REX_STORE_U16(r31.u32 + 62, r28.u16);
loc_8268ACFC:
	// lhz r10,-2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lbz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 60);
	// li r7,259
	ctx.r7.s64 = 259;
	// rlwimi r10,r8,12,0,19
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// sth r10,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r10.u16);
	// lhz r10,62(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 62);
	// rlwimi r8,r10,1,20,30
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFE) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF001);
	// sth r8,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r8.u16);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lhz r10,62(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 62);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,62(r31)
	REX_STORE_U16(r31.u32 + 62, ctx.r10.u16);
	// lhz r10,-2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lwz r8,208(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 208);
	// rlwinm r8,r8,0,12,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF0000;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwimi r10,r9,27,31,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// sth r10,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r10.u16);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// stw r28,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268ad7c
	if (ctx.cr6.eq) goto loc_8268AD7C;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// b 0x8268ad80
	goto loc_8268AD80;
loc_8268AD7C:
	// stw r4,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r4.u32);
loc_8268AD80:
	// stw r4,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r8,228(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r10,228(r11)
	REX_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
	// b 0x8268adb0
	goto loc_8268ADB0;
loc_8268ADA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268ab68
	ctx.lr = 0x8268ADB0;
	sub_8268AB68(ctx, base);
loc_8268ADB0:
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x8268ac7c
	goto loc_8268AC7C;
loc_8268ADB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826999D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826999D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-5936
	ctx.r11.s64 = ctx.r11.s64 + -5936;
	// mulli r10,r10,96
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(96));
	// addi r11,r11,14404
	ctx.r11.s64 = ctx.r11.s64 + 14404;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lhz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82699a18
	if (!ctx.cr6.eq) goto loc_82699A18;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82699a44
	if (ctx.cr6.eq) goto loc_82699A44;
loc_82699A18:
	// li r5,96
	ctx.r5.s64 = 96;
	// lwz r28,12(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82699A2C;
	sub_826A2E60(ctx, base);
	// lbz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 30);
	// sth r30,20(r31)
	REX_STORE_U16(r31.u32 + 20, r30.u16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
	// stb r11,30(r31)
	REX_STORE_U8(r31.u32 + 30, ctx.r11.u8);
loc_82699A44:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8269B588) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269B6B8) {
	REX_FUNC_PROLOGUE();
	// b 0x826a2b40
	sub_826A2B40(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8269B6F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8269B700;
	// lhz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// li r31,1
	r31.s64 = 1;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// slw r30,r31,r10
	r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r10.u8 & 0x3F));
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r31,r4,r3
	r31.u64 = ctx.r4.u64 + ctx.r3.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// extsh r30,r30
	r30.s64 = r30.s16;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// bgt cr6,0x8269b774
	if (ctx.cr6.gt) goto loc_8269B774;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// srw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & r30.u64;
	// bne cr6,0x8269b7c0
	if (!ctx.cr6.eq) goto loc_8269B7C0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8269b76c
	if (!ctx.cr6.eq) goto loc_8269B76C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8269b7c0
	goto loc_8269B7C0;
loc_8269B76C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8269b7c0
	goto loc_8269B7C0;
loc_8269B774:
	// lbz r29,0(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subfic r10,r8,8
	ctx.xer.ca = ctx.r8.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - ctx.r8.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// srw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r9.u8 & 0x3F));
	// bne cr6,0x8269b794
	if (!ctx.cr6.eq) goto loc_8269B794;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8269b798
	goto loc_8269B798;
loc_8269B794:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8269B798:
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsh r31,r30
	r31.s64 = r30.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// sraw r8,r31,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r31.s32 < 0) & (((r31.s32 >> temp.u32) << temp.u32) != r31.s32);
	ctx.r8.s64 = r31.s32 >> temp.u32;
	// and r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 & ctx.r3.u64;
	// addi r4,r4,-8
	ctx.r4.s64 = ctx.r4.s64 + -8;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
loc_8269B7C0:
	// sth r10,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r10.u16);
	// stb r9,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r9.u8);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8269F078) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8269f0e8
	if (ctx.cr0.eq) goto loc_8269F0E8;
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
loc_8269F094:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8269f0cc
	if (ctx.cr6.eq) goto loc_8269F0CC;
loc_8269F0A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8269f0cc
	if (ctx.cr0.eq) goto loc_8269F0CC;
	// lbzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// subf. r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8269f0cc
	if (!ctx.cr0.eq) goto loc_8269F0CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8269f0a0
	if (!ctx.cr0.eq) goto loc_8269F0A0;
loc_8269F0CC:
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lbzu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsb. r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8269f094
	if (!ctx.cr0.eq) goto loc_8269F094;
loc_8269F0E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savegprlr_26) {
	REX_FUNC_PROLOGUE();
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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

DEFINE_REX_FUNC(sub_826A23A0) {
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
	// bl 0x826a3a68
	ctx.lr = 0x826A23B8;
	sub_826A3A68(ctx, base);
	// stw r31,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, r31.u32);
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

DEFINE_REX_FUNC(__restfpr_27) {
	REX_FUNC_PROLOGUE();
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f27,-40(r12)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_826A3690) {
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
	// b 0x826a36c8
	goto loc_826A36C8;
loc_826A36B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a36c4
	if (ctx.cr6.eq) goto loc_826A36C4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A36C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826A36C4:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_826A36C8:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// blt cr6,0x826a36b0
	if (ctx.cr6.lt) goto loc_826A36B0;
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

DEFINE_REX_FUNC(__savevmx_104) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_124) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_826A4A90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
loc_826A4A98:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lbzu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmpwi cr7,r6,0
	ctx.cr7.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// subf. r3,r6,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr7,0x826a4ae0
	if (ctx.cr7.eq) goto loc_826A4AE0;
	// beq 0x826a4a98
	if (ctx.cr0.eq) goto loc_826A4A98;
	// cmpwi cr5,r6,65
	ctx.cr5.compare<int32_t>(ctx.r6.s32, 65, ctx.xer);
	// cmpwi cr6,r6,90
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 90, ctx.xer);
	// blt cr5,0x826a4ac4
	if (ctx.cr5.lt) goto loc_826A4AC4;
	// bgt cr6,0x826a4ac4
	if (ctx.cr6.gt) goto loc_826A4AC4;
	// ori r6,r6,32
	ctx.r6.u64 = ctx.r6.u64 | 32;
loc_826A4AC4:
	// cmpwi r5,65
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 65, ctx.xer);
	// cmpwi cr1,r5,90
	ctx.cr1.compare<int32_t>(ctx.r5.s32, 90, ctx.xer);
	// blt 0x826a4ad8
	if (ctx.cr0.lt) goto loc_826A4AD8;
	// bgt cr1,0x826a4ad8
	if (ctx.cr1.gt) goto loc_826A4AD8;
	// ori r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 | 32;
loc_826A4AD8:
	// subf. r3,r6,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a4a98
	if (ctx.cr0.eq) goto loc_826A4A98;
loc_826A4AE0:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A5BE8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,21352
	ctx.r9.s64 = ctx.r10.s64 + 21352;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_826A5BF8:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x826a5c1c
	if (ctx.cr6.eq) goto loc_826A5C1C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// blt cr6,0x826a5bf8
	if (ctx.cr6.lt) goto loc_826A5BF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826A5C1C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A9738) {
	REX_FUNC_PROLOGUE();
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A9F68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
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
	// bl 0x826b03f0
	ctx.lr = 0x826A9F88;
	sub_826B03F0(ctx, base);
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

DEFINE_REX_FUNC(sub_826AAD40) {
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
	ctx.lr = 0x826AAD48;
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r26,r25
	r26.u64 = r25.u64;
	// stw r25,80(r31)
	REX_STORE_U32(r31.u32 + 80, r25.u32);
	// bl 0x826a9928
	ctx.lr = 0x826AAD64;
	sub_826A9928(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lis r24,-32106
	r24.s64 = -2104098816;
loc_826AAD74:
	// stw r28,84(r31)
	REX_STORE_U32(r31.u32 + 84, r28.u32);
	// lwz r11,31544(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 31544);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x826aae88
	if (!ctx.cr6.lt) goto loc_826AAE88;
	// lwz r27,31540(r29)
	r27.u64 = REX_LOAD_U32(r29.u32 + 31540);
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r27
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826aae24
	if (ctx.cr6.eq) goto loc_826AAE24;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826aadb4
	if (!ctx.cr0.eq) goto loc_826AADB4;
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826aadbc
	if (ctx.cr0.eq) goto loc_826AADBC;
loc_826AADB4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826aae10
	goto loc_826AAE10;
loc_826AADBC:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// ble cr6,0x826aaddc
	if (!ctx.cr6.gt) goto loc_826AADDC;
	// cmpwi cr6,r28,20
	ctx.cr6.compare<int32_t>(r28.s32, 20, ctx.xer);
	// bge cr6,0x826aaddc
	if (!ctx.cr6.lt) goto loc_826AADDC;
	// addi r3,r28,16
	ctx.r3.s64 = r28.s64 + 16;
	// bl 0x826a97e8
	ctx.lr = 0x826AADD4;
	sub_826A97E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826aae88
	if (ctx.cr0.eq) goto loc_826AAE88;
loc_826AADDC:
	// lwz r11,31540(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 31540);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x8269e190
	ctx.lr = 0x826AADEC;
	sub_8269E190(ctx, base);
	// lwz r11,31540(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 31540);
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826aae18
	if (ctx.cr0.eq) goto loc_826AAE18;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269e220
	ctx.lr = 0x826AAE0C;
	sub_8269E220(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_826AAE10:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x826aad74
	goto loc_826AAD74;
loc_826AAE18:
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r4,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// b 0x826aae88
	goto loc_826AAE88;
loc_826AAE24:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x8269d6a8
	ctx.lr = 0x826AAE2C;
	sub_8269D6A8(ctx, base);
	// stwx r3,r30,r27
	REX_STORE_U32(r30.u32 + r27.u32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826aae88
	if (ctx.cr0.eq) goto loc_826AAE88;
	// lwz r11,31540(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 31540);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x826a96c8
	ctx.lr = 0x826AAE4C;
	sub_826A96C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,31540(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 31540);
	// bne 0x826aae6c
	if (!ctx.cr0.eq) goto loc_826AAE6C;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x8269d770
	ctx.lr = 0x826AAE60;
	sub_8269D770(ctx, base);
	// lwz r11,31540(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 31540);
	// stwx r25,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r25.u32);
	// b 0x826aae88
	goto loc_826AAE88;
loc_826AAE6C:
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x827938a4
	ctx.lr = 0x826AAE78;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,31540(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 31540);
	// lwzx r26,r30,r11
	r26.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// stw r26,80(r31)
	REX_STORE_U32(r31.u32 + 80, r26.u32);
	// stw r25,12(r26)
	REX_STORE_U32(r26.u32 + 12, r25.u32);
loc_826AAE88:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x826aaeb4
	if (ctx.cr6.eq) goto loc_826AAEB4;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// stw r11,12(r26)
	REX_STORE_U32(r26.u32 + 12, ctx.r11.u32);
	// stw r25,4(r26)
	REX_STORE_U32(r26.u32 + 4, r25.u32);
	// stw r25,8(r26)
	REX_STORE_U32(r26.u32 + 8, r25.u32);
	// stw r25,0(r26)
	REX_STORE_U32(r26.u32 + 0, r25.u32);
	// stw r25,28(r26)
	REX_STORE_U32(r26.u32 + 28, r25.u32);
	// stw r10,16(r26)
	REX_STORE_U32(r26.u32 + 16, ctx.r10.u32);
loc_826AAEB4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = r31.s64 + 160;
	// bl 0x826aaecc
	ctx.lr = 0x826AAEC0;
	ctx.r24 = r24;
	ctx.r25 = r25;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_826AAECC(ctx, base);
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
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_826B8038) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B8540) {
	REX_FUNC_PROLOGUE();
	// lwz r3,120(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B8728) {
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
	// bl 0x826bf6c0
	ctx.lr = 0x826B8740;
	sub_826BF6C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,672(r31)
	REX_STORE_U32(r31.u32 + 672, ctx.r11.u32);
	// stw r10,660(r31)
	REX_STORE_U32(r31.u32 + 660, ctx.r10.u32);
	// stw r11,676(r31)
	REX_STORE_U32(r31.u32 + 676, ctx.r11.u32);
	// stw r11,664(r31)
	REX_STORE_U32(r31.u32 + 664, ctx.r11.u32);
	// stw r11,668(r31)
	REX_STORE_U32(r31.u32 + 668, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_826BA738) {
	REX_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// b 0x823f02b8
	sub_823F02B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826BA910) {
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
	// addi r10,r11,28504
	ctx.r10.s64 = ctx.r11.s64 + 28504;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,100(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 100);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826BA944;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bc158
	ctx.lr = 0x826BA94C;
	sub_826BC158(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826ba96c
	if (ctx.cr6.eq) goto loc_826BA96C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// bl 0x823f0350
	ctx.lr = 0x826BA968;
	sub_823F0350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_826BA96C:
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

DEFINE_REX_FUNC(sub_826BE6E0) {
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
	ctx.lr = 0x826BE6E8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r10,r11,29688
	ctx.r10.s64 = ctx.r11.s64 + 29688;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826be91c
	if (ctx.cr6.eq) goto loc_826BE91C;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// blt cr6,0x826be91c
	if (ctx.cr6.lt) goto loc_826BE91C;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// bgt cr6,0x826be91c
	if (ctx.cr6.gt) goto loc_826BE91C;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826be91c
	if (ctx.cr6.eq) goto loc_826BE91C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,608(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 608);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x826c6880
	ctx.lr = 0x826BE744;
	sub_826C6880(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be8d4
	if (ctx.cr6.lt) goto loc_826BE8D4;
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826BE764:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x826be764
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826BE764;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r7,608(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 608);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,524(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 524);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x826c8920
	ctx.lr = 0x826BE784;
	sub_826C8920(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be8d4
	if (ctx.cr6.lt) goto loc_826BE8D4;
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addic r10,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	ctx.r10.s64 = r28.s64 + -1;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// subfe r8,r10,r28
	temp.u8 = (~ctx.r10.u32 + r28.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r28.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r6,r11,11,0,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// li r29,1
	r29.s64 = 1;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r7,r9,29704
	ctx.r7.s64 = ctx.r9.s64 + 29704;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bl 0x826bd8d0
	ctx.lr = 0x826BE7C4;
	sub_826BD8D0(ctx, base);
	// stw r3,552(r31)
	REX_STORE_U32(r31.u32 + 552, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826be7dc
	if (!ctx.cr6.eq) goto loc_826BE7DC;
	// lis r30,-32688
	r30.s64 = -2142240768;
	// ori r30,r30,186
	r30.u64 = r30.u64 | 186;
	// b 0x826be8d4
	goto loc_826BE8D4;
loc_826BE7DC:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,608(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 608);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826c6700
	ctx.lr = 0x826BE7EC;
	sub_826C6700(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be8d4
	if (ctx.cr6.lt) goto loc_826BE8D4;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lwz r3,608(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 608);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,-11424
	ctx.r5.s64 = ctx.r11.s64 + -11424;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826c63a0
	ctx.lr = 0x826BE810;
	sub_826C63A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be8d4
	if (ctx.cr6.lt) goto loc_826BE8D4;
	// stw r29,636(r31)
	REX_STORE_U32(r31.u32 + 636, r29.u32);
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r3,608(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 608);
	// addi r5,r11,-11424
	ctx.r5.s64 = ctx.r11.s64 + -11424;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826c63a0
	ctx.lr = 0x826BE838;
	sub_826C63A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be8d4
	if (ctx.cr6.lt) goto loc_826BE8D4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,608(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 608);
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// stw r11,640(r31)
	REX_STORE_U32(r31.u32 + 640, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r10,-11424
	ctx.r5.s64 = ctx.r10.s64 + -11424;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x826c63a0
	ctx.lr = 0x826BE864;
	sub_826C63A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be8d4
	if (ctx.cr6.lt) goto loc_826BE8D4;
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r3,608(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 608);
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// stw r11,644(r31)
	REX_STORE_U32(r31.u32 + 644, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r10,-11424
	ctx.r5.s64 = ctx.r10.s64 + -11424;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x826c63a0
	ctx.lr = 0x826BE890;
	sub_826C63A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be8d4
	if (ctx.cr6.lt) goto loc_826BE8D4;
	// li r11,5
	ctx.r11.s64 = 5;
	// cntlzw r10,r25
	ctx.r10.u64 = r25.u32 == 0 ? 32 : __builtin_clz(r25.u32);
	// stw r11,648(r31)
	REX_STORE_U32(r31.u32 + 648, ctx.r11.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bc590
	ctx.lr = 0x826BE8C8;
	sub_826BC590(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826be90c
	if (!ctx.cr6.lt) goto loc_826BE90C;
loc_826BE8D4:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826be90c
	if (ctx.cr6.eq) goto loc_826BE90C;
	// bl 0x826c87b0
	ctx.lr = 0x826BE8E4;
	sub_826C87B0(ctx, base);
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 548);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826be8fc
	if (!ctx.cr6.eq) goto loc_826BE8FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,548(r31)
	REX_STORE_U32(r31.u32 + 548, ctx.r11.u32);
loc_826BE8FC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,608(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x826c68d8
	ctx.lr = 0x826BE90C;
	sub_826C68D8(ctx, base);
loc_826BE90C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bd9a0
	ctx.lr = 0x826BE914;
	sub_826BD9A0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cfc
	return;
loc_826BE91C:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_826D3588) {
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
	ctx.lr = 0x826D3590;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lwz r30,28(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D35BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d3700
	if (ctx.cr6.lt) goto loc_826D3700;
	// li r5,76
	ctx.r5.s64 = 76;
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r29,8(r30)
	REX_STORE_U64(r30.u32 + 8, r29.u64);
	// std r29,32(r30)
	REX_STORE_U64(r30.u32 + 32, r29.u64);
	// std r29,40(r30)
	REX_STORE_U64(r30.u32 + 40, r29.u64);
	// bl 0x826a2e60
	ctx.lr = 0x826D35E0;
	sub_826A2E60(ctx, base);
	// li r5,92
	ctx.r5.s64 = 92;
	// lwz r3,52(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x826D35F0;
	sub_826A2E60(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r31,56(r30)
	REX_STORE_U32(r30.u32 + 56, r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r31,60(r30)
	REX_STORE_U32(r30.u32 + 60, r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// sth r31,64(r30)
	REX_STORE_U16(r30.u32 + 64, r31.u16);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r11.u32);
	// stw r31,84(r30)
	REX_STORE_U32(r30.u32 + 84, r31.u32);
	// stw r31,88(r30)
	REX_STORE_U32(r30.u32 + 88, r31.u32);
	// stw r31,92(r30)
	REX_STORE_U32(r30.u32 + 92, r31.u32);
	// stw r31,96(r30)
	REX_STORE_U32(r30.u32 + 96, r31.u32);
	// std r31,104(r30)
	REX_STORE_U64(r30.u32 + 104, r31.u64);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// bl 0x826c6d18
	ctx.lr = 0x826D3630;
	sub_826C6D18(ctx, base);
	// lis r10,-32688
	ctx.r10.s64 = -2142240768;
	// ori r29,r10,22
	r29.u64 = ctx.r10.u64 | 22;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// beq cr6,0x826d36e4
	if (ctx.cr6.eq) goto loc_826D36E4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d3700
	if (ctx.cr6.lt) goto loc_826D3700;
	// li r28,1
	r28.s64 = 1;
loc_826D364C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d3700
	if (ctx.cr6.lt) goto loc_826D3700;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d36c8
	if (ctx.cr6.eq) goto loc_826D36C8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x826d3674
	if (!ctx.cr6.eq) goto loc_826D3674;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// b 0x826d3680
	goto loc_826D3680;
loc_826D3674:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x826d3684
	if (!ctx.cr6.eq) goto loc_826D3684;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
loc_826D3680:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_826D3684:
	// stw r31,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r31.u8);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r31.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, r31.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, r31.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,40(r7)
	REX_STORE_U32(ctx.r7.u32 + 40, r31.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, r31.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,20(r5)
	REX_STORE_U32(ctx.r5.u32 + 20, r31.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, r31.u32);
loc_826D36C8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826c6d80
	ctx.lr = 0x826D36DC;
	sub_826C6D80(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bne cr6,0x826d364c
	if (!ctx.cr6.eq) goto loc_826D364C;
loc_826D36E4:
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// bl 0x826c6de8
	ctx.lr = 0x826D36F0;
	sub_826C6DE8(ctx, base);
	// subf r11,r29,r3
	ctx.r11.u64 = ctx.r3.u64 - r29.u64;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_826D3700:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826DDCE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826DDCF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// clrldi r29,r4,32
	r29.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_826DDD08:
	// lwz r9,44(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826ddd34
	if (ctx.cr6.eq) goto loc_826DDD34;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_826DDD34:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// ld r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 64);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + r29.u64;
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(r30.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x826ddda0
	if (!ctx.cr6.lt) goto loc_826DDDA0;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826DDD64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ddda0
	if (ctx.cr6.lt) goto loc_826DDDA0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826dd148
	ctx.lr = 0x826DDD78;
	sub_826DD148(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ddda0
	if (ctx.cr6.lt) goto loc_826DDDA0;
	// lwz r10,144(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// ld r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + r29.u64;
	// stw r10,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r10.u32);
	// cmpld cr6,r30,r9
	ctx.cr6.compare<uint64_t>(r30.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x826ddd08
	if (ctx.cr6.lt) goto loc_826DDD08;
loc_826DDDA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826E0070) {
	REX_FUNC_PROLOGUE();
	// b 0x826dfde0
	sub_826DFDE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826E0288) {
	REX_FUNC_PROLOGUE();
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826e029c
	if (!ctx.cr6.gt) goto loc_826E029C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
loc_826E029C:
	// b 0x826df798
	sub_826DF798(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826E07F0) {
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
	// beq cr6,0x826e0a08
	if (ctx.cr6.eq) goto loc_826E0A08;
	// addi r3,r3,664
	ctx.r3.s64 = ctx.r3.s64 + 664;
	// bl 0x826f4130
	ctx.lr = 0x826E0818;
	sub_826F4130(ctx, base);
	// lwz r3,356(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 356);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e0830
	if (ctx.cr6.eq) goto loc_826E0830;
	// bl 0x82634e78
	ctx.lr = 0x826E082C;
	sub_82634E78(ctx, base);
	// stw r30,356(r31)
	REX_STORE_U32(r31.u32 + 356, r30.u32);
loc_826E0830:
	// lwz r3,360(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e0844
	if (ctx.cr6.eq) goto loc_826E0844;
	// bl 0x82634e78
	ctx.lr = 0x826E0840;
	sub_82634E78(ctx, base);
	// stw r30,360(r31)
	REX_STORE_U32(r31.u32 + 360, r30.u32);
loc_826E0844:
	// lwz r3,364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 364);
	// bl 0x82634f40
	ctx.lr = 0x826E084C;
	sub_82634F40(ctx, base);
	// lwz r3,368(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 368);
	// bl 0x82634f40
	ctx.lr = 0x826E0854;
	sub_82634F40(ctx, base);
	// lwz r3,324(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 324);
	// bl 0x82634f40
	ctx.lr = 0x826E085C;
	sub_82634F40(ctx, base);
	// lwz r3,328(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 328);
	// bl 0x82634f40
	ctx.lr = 0x826E0864;
	sub_82634F40(ctx, base);
	// lwz r3,436(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 436);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e0878
	if (ctx.cr6.eq) goto loc_826E0878;
	// bl 0x82634e78
	ctx.lr = 0x826E0874;
	sub_82634E78(ctx, base);
	// stw r30,436(r31)
	REX_STORE_U32(r31.u32 + 436, r30.u32);
loc_826E0878:
	// lwz r3,340(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 340);
	// stw r30,432(r31)
	REX_STORE_U32(r31.u32 + 432, r30.u32);
	// stw r30,428(r31)
	REX_STORE_U32(r31.u32 + 428, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e0894
	if (ctx.cr6.eq) goto loc_826E0894;
	// bl 0x82634e78
	ctx.lr = 0x826E0890;
	sub_82634E78(ctx, base);
	// stw r30,340(r31)
	REX_STORE_U32(r31.u32 + 340, r30.u32);
loc_826E0894:
	// lwz r3,344(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 344);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e08a8
	if (ctx.cr6.eq) goto loc_826E08A8;
	// bl 0x82634e78
	ctx.lr = 0x826E08A4;
	sub_82634E78(ctx, base);
	// stw r30,344(r31)
	REX_STORE_U32(r31.u32 + 344, r30.u32);
loc_826E08A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e35c0
	ctx.lr = 0x826E08B0;
	sub_826E35C0(ctx, base);
	// lwz r3,352(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 352);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e08c4
	if (ctx.cr6.eq) goto loc_826E08C4;
	// bl 0x82634e78
	ctx.lr = 0x826E08C0;
	sub_82634E78(ctx, base);
	// stw r30,352(r31)
	REX_STORE_U32(r31.u32 + 352, r30.u32);
loc_826E08C4:
	// lwz r3,332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e08d8
	if (ctx.cr6.eq) goto loc_826E08D8;
	// bl 0x82634e78
	ctx.lr = 0x826E08D4;
	sub_82634E78(ctx, base);
	// stw r30,332(r31)
	REX_STORE_U32(r31.u32 + 332, r30.u32);
loc_826E08D8:
	// lwz r3,336(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 336);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e08ec
	if (ctx.cr6.eq) goto loc_826E08EC;
	// bl 0x82634e78
	ctx.lr = 0x826E08E8;
	sub_82634E78(ctx, base);
	// stw r30,336(r31)
	REX_STORE_U32(r31.u32 + 336, r30.u32);
loc_826E08EC:
	// lwz r3,412(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 412);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e0900
	if (ctx.cr6.eq) goto loc_826E0900;
	// bl 0x82634e78
	ctx.lr = 0x826E08FC;
	sub_82634E78(ctx, base);
	// stw r30,412(r31)
	REX_STORE_U32(r31.u32 + 412, r30.u32);
loc_826E0900:
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e0914
	if (ctx.cr6.eq) goto loc_826E0914;
	// bl 0x82634e78
	ctx.lr = 0x826E0910;
	sub_82634E78(ctx, base);
	// stw r30,416(r31)
	REX_STORE_U32(r31.u32 + 416, r30.u32);
loc_826E0914:
	// lwz r3,420(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e0928
	if (ctx.cr6.eq) goto loc_826E0928;
	// bl 0x82634e78
	ctx.lr = 0x826E0924;
	sub_82634E78(ctx, base);
	// stw r30,420(r31)
	REX_STORE_U32(r31.u32 + 420, r30.u32);
loc_826E0928:
	// lwz r3,424(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e093c
	if (ctx.cr6.eq) goto loc_826E093C;
	// bl 0x82634e78
	ctx.lr = 0x826E0938;
	sub_82634E78(ctx, base);
	// stw r30,424(r31)
	REX_STORE_U32(r31.u32 + 424, r30.u32);
loc_826E093C:
	// lwz r3,316(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 316);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e0950
	if (ctx.cr6.eq) goto loc_826E0950;
	// bl 0x82634e78
	ctx.lr = 0x826E094C;
	sub_82634E78(ctx, base);
	// stw r30,316(r31)
	REX_STORE_U32(r31.u32 + 316, r30.u32);
loc_826E0950:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x826e0964
	if (!ctx.cr6.gt) goto loc_826E0964;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82637ec0
	ctx.lr = 0x826E0964;
	sub_82637EC0(ctx, base);
loc_826E0964:
	// lwz r3,552(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 552);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e0978
	if (ctx.cr6.eq) goto loc_826E0978;
	// bl 0x82634e78
	ctx.lr = 0x826E0974;
	sub_82634E78(ctx, base);
	// stw r30,552(r31)
	REX_STORE_U32(r31.u32 + 552, r30.u32);
loc_826E0978:
	// lwz r3,556(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 556);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e098c
	if (ctx.cr6.eq) goto loc_826E098C;
	// bl 0x82634e78
	ctx.lr = 0x826E0988;
	sub_82634E78(ctx, base);
	// stw r30,556(r31)
	REX_STORE_U32(r31.u32 + 556, r30.u32);
loc_826E098C:
	// lwz r3,560(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 560);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e09a0
	if (ctx.cr6.eq) goto loc_826E09A0;
	// bl 0x82634e78
	ctx.lr = 0x826E099C;
	sub_82634E78(ctx, base);
	// stw r30,560(r31)
	REX_STORE_U32(r31.u32 + 560, r30.u32);
loc_826E09A0:
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 564);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e09b4
	if (ctx.cr6.eq) goto loc_826E09B4;
	// bl 0x82634e78
	ctx.lr = 0x826E09B0;
	sub_82634E78(ctx, base);
	// stw r30,564(r31)
	REX_STORE_U32(r31.u32 + 564, r30.u32);
loc_826E09B4:
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e09c4
	if (ctx.cr6.eq) goto loc_826E09C4;
	// bl 0x826ed328
	ctx.lr = 0x826E09C4;
	sub_826ED328(ctx, base);
loc_826E09C4:
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e09d8
	if (ctx.cr6.eq) goto loc_826E09D8;
	// bl 0x82634e78
	ctx.lr = 0x826E09D4;
	sub_82634E78(ctx, base);
	// stw r30,568(r31)
	REX_STORE_U32(r31.u32 + 568, r30.u32);
loc_826E09D8:
	// lwz r3,584(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 584);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e09ec
	if (ctx.cr6.eq) goto loc_826E09EC;
	// bl 0x82634e78
	ctx.lr = 0x826E09E8;
	sub_82634E78(ctx, base);
	// stw r30,584(r31)
	REX_STORE_U32(r31.u32 + 584, r30.u32);
loc_826E09EC:
	// lwz r3,740(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 740);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e0a00
	if (ctx.cr6.eq) goto loc_826E0A00;
	// bl 0x82634e78
	ctx.lr = 0x826E09FC;
	sub_82634E78(ctx, base);
	// stw r30,740(r31)
	REX_STORE_U32(r31.u32 + 740, r30.u32);
loc_826E0A00:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82634e78
	ctx.lr = 0x826E0A08;
	sub_82634E78(ctx, base);
loc_826E0A08:
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

DEFINE_REX_FUNC(sub_826F4EE8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,120(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r11,40(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x826f4f04
	if (!ctx.cr6.eq) goto loc_826F4F04;
	// lwz r10,32(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_826F4F04:
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x826f4f58
	if (!ctx.cr6.eq) goto loc_826F4F58;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,16
	ctx.r8.s64 = 16;
	// sth r9,28(r4)
	REX_STORE_U16(ctx.r4.u32 + 28, ctx.r9.u16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r8,30(r4)
	REX_STORE_U16(ctx.r4.u32 + 30, ctx.r8.u16);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r10,0
	ctx.r10.s64 = 0;
loc_826F4F2C:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r5,r9,r11
	REX_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u16);
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826f4f2c
	if (ctx.cr6.lt) goto loc_826F4F2C;
	// blr 
	return;
loc_826F4F58:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,8
	ctx.r8.s64 = 8;
	// sth r9,28(r4)
	REX_STORE_U16(ctx.r4.u32 + 28, ctx.r9.u16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r8,30(r4)
	REX_STORE_U16(ctx.r4.u32 + 30, ctx.r8.u16);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r10,0
	ctx.r10.s64 = 0;
loc_826F4F74:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// sthx r5,r9,r11
	REX_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u16);
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x826f4f74
	if (ctx.cr6.lt) goto loc_826F4F74;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826FAE60) {
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
	ctx.lr = 0x826FAE68;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r30,r9,r10
	r30.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826faea8
	if (ctx.cr6.lt) goto loc_826FAEA8;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// add r28,r11,r5
	r28.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x826faeac
	goto loc_826FAEAC;
loc_826FAEA8:
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
loc_826FAEAC:
	// subf r11,r28,r5
	ctx.r11.u64 = ctx.r5.u64 - r28.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r27,r28,2,0,29
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826FAEC8;
	sub_826A1E70(ctx, base);
	// rlwinm r6,r30,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r6,r29
	ctx.r11.u64 = ctx.r6.u64 + r29.u64;
	// subf. r8,r9,r30
	ctx.r8.u64 = r30.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// ble 0x826faf18
	if (!ctx.cr0.gt) goto loc_826FAF18;
loc_826FAEE4:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	// lfs f13,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r4,r5,r30
	ctx.r4.u64 = r30.u64 - ctx.r5.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x826faee4
	if (ctx.cr6.lt) goto loc_826FAEE4;
loc_826FAF18:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r8,r10,r30
	ctx.r8.u64 = r30.u64 - ctx.r10.u64;
	// rlwinm r10,r8,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// and r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 & ctx.r8.u64;
	// subf r8,r4,r30
	ctx.r8.u64 = r30.u64 - ctx.r4.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// blt cr6,0x826fafa4
	if (ctx.cr6.lt) goto loc_826FAFA4;
	// addi r7,r8,-3
	ctx.r7.s64 = ctx.r8.s64 + -3;
loc_826FAF50:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lfs f13,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// lfs f10,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f9,-4(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f8,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// stfs f6,-8(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f5,-12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f5.f64 = double(temp.f32);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// lfs f4,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// stfs f3,-12(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// blt cr6,0x826faf50
	if (ctx.cr6.lt) goto loc_826FAF50;
loc_826FAFA4:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x826fafd0
	if (!ctx.cr6.lt) goto loc_826FAFD0;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826FAFB8:
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x826fafb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826FAFB8;
loc_826FAFD0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826faff4
	if (ctx.cr6.lt) goto loc_826FAFF4;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x826a1e70
	ctx.lr = 0x826FAFEC;
	sub_826A1E70(ctx, base);
	// stw r28,16(r31)
	REX_STORE_U32(r31.u32 + 16, r28.u32);
	// b 0x826fb034
	goto loc_826FB034;
loc_826FAFF4:
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// add r4,r3,r6
	ctx.r4.u64 = ctx.r3.u64 + ctx.r6.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269cc20
	ctx.lr = 0x826FB004;
	sub_8269CC20(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// subf r8,r30,r9
	ctx.r8.u64 = ctx.r9.u64 - r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826FB024;
	sub_826A1E70(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r11,r30,r28
	ctx.r11.u64 = r28.u64 - r30.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r7.u32);
loc_826FB034:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x826fb044
	if (ctx.cr6.eq) goto loc_826FB044;
	// stw r30,0(r26)
	REX_STORE_U32(r26.u32 + 0, r30.u32);
loc_826FB044:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82716DB0) {
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
	ctx.lr = 0x82716DB8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// lis r11,21845
	ctx.r11.s64 = 1431633920;
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// li r19,0
	r19.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r11,r11,21846
	ctx.r11.u64 = ctx.r11.u64 | 21846;
	// rlwinm r22,r10,31,1,31
	r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// mulhw r10,r22,r11
	ctx.r10.s64 = (int64_t(r22.s32) * int64_t(ctx.r11.s32)) >> 32;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r20,r19
	r20.u64 = r19.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r30,r8,31,1,31
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf. r6,r7,r22
	ctx.r6.u64 = r22.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82716ef8
	if (!ctx.cr0.eq) goto loc_82716EF8;
	// mulhw r10,r30,r11
	ctx.r10.s64 = (int64_t(r30.s32) * int64_t(ctx.r11.s32)) >> 32;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf. r9,r10,r30
	ctx.r9.u64 = r30.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82716ef8
	if (ctx.cr0.eq) goto loc_82716EF8;
	// clrlwi r21,r30,31
	r21.u64 = r30.u32 & 0x1;
	// mr r25,r19
	r25.u64 = r19.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82716fd8
	if (!ctx.cr6.gt) goto loc_82716FD8;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r27,r19
	r27.u64 = r19.u64;
	// add r24,r30,r11
	r24.u64 = r30.u64 + ctx.r11.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r26,r11,26824
	r26.s64 = ctx.r11.s64 + 26824;
loc_82716E48:
	// mr r28,r21
	r28.u64 = r21.u64;
	// cmpw cr6,r21,r30
	ctx.cr6.compare<int32_t>(r21.s32, r30.s32, ctx.xer);
	// bge cr6,0x82716ee4
	if (!ctx.cr6.lt) goto loc_82716EE4;
loc_82716E54:
	// addi r5,r26,64
	ctx.r5.s64 = r26.s64 + 64;
	// lwz r3,84(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 84);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r31,r27,r28
	r31.u64 = r27.u64 + r28.u64;
	// bl 0x827064e0
	ctx.lr = 0x82716E6C;
	sub_827064E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82717138
	if (!ctx.cr6.eq) goto loc_82717138;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r6,r31,r29
	ctx.r6.u64 = r31.u64 + r29.u64;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// add r10,r30,r29
	ctx.r10.u64 = r30.u64 + r29.u64;
	// stbx r8,r31,r29
	REX_STORE_U8(r31.u32 + r29.u32, ctx.r8.u8);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// stb r7,1(r6)
	REX_STORE_U8(ctx.r6.u32 + 1, ctx.r7.u8);
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// stbx r5,r10,r31
	REX_STORE_U8(ctx.r10.u32 + r31.u32, ctx.r5.u8);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + r31.u64;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stb r3,1(r4)
	REX_STORE_U8(ctx.r4.u32 + 1, ctx.r3.u8);
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// stbx r7,r9,r31
	REX_STORE_U8(ctx.r9.u32 + r31.u32, ctx.r7.u8);
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(r28.s32, r30.s32, ctx.xer);
	// stb r6,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r6.u8);
	// blt cr6,0x82716e54
	if (ctx.cr6.lt) goto loc_82716E54;
loc_82716EE4:
	// addi r25,r25,3
	r25.s64 = r25.s64 + 3;
	// add r27,r24,r27
	r27.u64 = r24.u64 + r27.u64;
	// cmpw cr6,r25,r22
	ctx.cr6.compare<int32_t>(r25.s32, r22.s32, ctx.xer);
	// blt cr6,0x82716e48
	if (ctx.cr6.lt) goto loc_82716E48;
	// b 0x82716fd8
	goto loc_82716FD8;
loc_82716EF8:
	// mulhw r11,r30,r11
	ctx.r11.s64 = (int64_t(r30.s32) * int64_t(ctx.r11.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// clrlwi r20,r22,31
	r20.u64 = r22.u32 & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r25,r20
	r25.u64 = r20.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r20,r22
	ctx.cr6.compare<int32_t>(r20.s32, r22.s32, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r21,r11,r30
	r21.u64 = r30.u64 - ctx.r11.u64;
	// bge cr6,0x82716fd8
	if (!ctx.cr6.lt) goto loc_82716FD8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mullw r27,r30,r20
	r27.s64 = int64_t(r30.s32) * int64_t(r20.s32);
	// rlwinm r24,r30,1,0,30
	r24.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r26,r11,26824
	r26.s64 = ctx.r11.s64 + 26824;
loc_82716F30:
	// mr r28,r21
	r28.u64 = r21.u64;
	// cmpw cr6,r21,r30
	ctx.cr6.compare<int32_t>(r21.s32, r30.s32, ctx.xer);
	// bge cr6,0x82716fc8
	if (!ctx.cr6.lt) goto loc_82716FC8;
loc_82716F3C:
	// addi r5,r26,64
	ctx.r5.s64 = r26.s64 + 64;
	// lwz r3,84(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 84);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r31,r27,r28
	r31.u64 = r27.u64 + r28.u64;
	// bl 0x827064e0
	ctx.lr = 0x82716F54;
	sub_827064E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82717138
	if (!ctx.cr6.eq) goto loc_82717138;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r31,r29
	ctx.r9.u64 = r31.u64 + r29.u64;
	// add r8,r31,r29
	ctx.r8.u64 = r31.u64 + r29.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r6,r10,31
	ctx.r6.u64 = ctx.r10.u32 & 0x1;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stbx r7,r31,r29
	REX_STORE_U8(r31.u32 + r29.u32, ctx.r7.u8);
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// stb r6,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r6.u8);
	// clrlwi r5,r10,31
	ctx.r5.u64 = ctx.r10.u32 & 0x1;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stb r5,2(r8)
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r5.u8);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + r31.u64;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + r31.u64;
	// stbx r3,r11,r31
	REX_STORE_U8(ctx.r11.u32 + r31.u32, ctx.r3.u8);
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// addi r28,r28,3
	r28.s64 = r28.s64 + 3;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(r28.s32, r30.s32, ctx.xer);
	// stb r8,1(r4)
	REX_STORE_U8(ctx.r4.u32 + 1, ctx.r8.u8);
	// stb r7,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r7.u8);
	// blt cr6,0x82716f3c
	if (ctx.cr6.lt) goto loc_82716F3C;
loc_82716FC8:
	// addi r25,r25,2
	r25.s64 = r25.s64 + 2;
	// add r27,r27,r24
	r27.u64 = r27.u64 + r24.u64;
	// cmpw cr6,r25,r22
	ctx.cr6.compare<int32_t>(r25.s32, r22.s32, ctx.xer);
	// blt cr6,0x82716f30
	if (ctx.cr6.lt) goto loc_82716F30;
loc_82716FD8:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x82717084
	if (!ctx.cr6.gt) goto loc_82717084;
	// mr r26,r29
	r26.u64 = r29.u64;
	// mr r25,r21
	r25.u64 = r21.u64;
loc_82716FE8:
	// lwz r3,84(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 84);
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
	// bge 0x82717010
	if (!ctx.cr0.lt) goto loc_82717010;
	// bl 0x82725e38
	ctx.lr = 0x82717010;
	sub_82725E38(ctx, base);
loc_82717010:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82717060
	if (ctx.cr6.eq) goto loc_82717060;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82717078
	if (!ctx.cr6.gt) goto loc_82717078;
	// subf r27,r30,r26
	r27.u64 = r26.u64 - r30.u64;
	// mr r31,r22
	r31.u64 = r22.u64;
loc_82717028:
	// lwz r3,84(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 84);
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
	// rldicl r28,r10,1,63
	r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82717050
	if (!ctx.cr0.lt) goto loc_82717050;
	// bl 0x82725e38
	ctx.lr = 0x82717050;
	sub_82725E38(ctx, base);
loc_82717050:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stbux r28,r27,r30
	ea = r27.u32 + r30.u32;
	REX_STORE_U8(ea, r28.u8);
	r27.u32 = ea;
	// bne 0x82717028
	if (!ctx.cr0.eq) goto loc_82717028;
	// b 0x82717078
	goto loc_82717078;
loc_82717060:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82717078
	if (!ctx.cr6.gt) goto loc_82717078;
	// subf r11,r30,r26
	ctx.r11.u64 = r26.u64 - r30.u64;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
loc_82717070:
	// stbux r19,r11,r30
	ea = ctx.r11.u32 + r30.u32;
	REX_STORE_U8(ea, r19.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82717070
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82717070;
loc_82717078:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// bne 0x82716fe8
	if (!ctx.cr0.eq) goto loc_82716FE8;
loc_82717084:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x82717134
	if (ctx.cr6.eq) goto loc_82717134;
	// lwz r3,84(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 84);
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
	// bge 0x827170b4
	if (!ctx.cr0.lt) goto loc_827170B4;
	// bl 0x82725e38
	ctx.lr = 0x827170B4;
	sub_82725E38(ctx, base);
loc_827170B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8271710c
	if (ctx.cr6.eq) goto loc_8271710C;
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmpw cr6,r21,r30
	ctx.cr6.compare<int32_t>(r21.s32, r30.s32, ctx.xer);
	// bge cr6,0x82717134
	if (!ctx.cr6.lt) goto loc_82717134;
loc_827170C8:
	// lwz r3,84(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 84);
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
	// rldicl r28,r10,1,63
	r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x827170f0
	if (!ctx.cr0.lt) goto loc_827170F0;
	// bl 0x82725e38
	ctx.lr = 0x827170F0;
	sub_82725E38(ctx, base);
loc_827170F0:
	// stbx r28,r31,r29
	REX_STORE_U8(r31.u32 + r29.u32, r28.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
	// blt cr6,0x827170c8
	if (ctx.cr6.lt) goto loc_827170C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce4
	return;
loc_8271710C:
	// cmpw cr6,r21,r30
	ctx.cr6.compare<int32_t>(r21.s32, r30.s32, ctx.xer);
	// bge cr6,0x82717134
	if (!ctx.cr6.lt) goto loc_82717134;
	// add r10,r21,r29
	ctx.r10.u64 = r21.u64 + r29.u64;
	// subf. r11,r21,r30
	ctx.r11.u64 = r30.u64 - r21.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// beq 0x82717134
	if (ctx.cr0.eq) goto loc_82717134;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8271712C:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8271712c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8271712C;
loc_82717134:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82717138:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_82736980) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cac
	ctx.lr = 0x82736988;
	// li r9,32
	ctx.r9.s64 = 32;
	// vspltisw128 v63,11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0xB)));
	// li r10,96
	ctx.r10.s64 = 96;
	// lvx128 v62,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// vspltisw128 v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_set1_epi32(int(0x2)));
	// li r8,112
	ctx.r8.s64 = 112;
	// vspltisw128 v60,4
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0x4)));
	// addi r7,r11,31696
	ctx.r7.s64 = ctx.r11.s64 + 31696;
	// vslw128 v0,v62,v63
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v62.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v63.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_sllv_epi32(a, shift));
	}
	// lvx128 v59,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,32
	ctx.r6.s64 = 32;
	// lvx128 v58,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v57,v59,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vcsxwfp128 v56,v58,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// li r5,64
	ctx.r5.s64 = 64;
	// li r31,80
	r31.s64 = 80;
	// vspltisw128 v55,3
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_set1_epi32(int(0x3)));
	// li r11,64
	ctx.r11.s64 = 64;
	// lvx128 v10,r7,r8
	ea = (ctx.r7.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,96
	ctx.r8.s64 = 96;
	// li r6,48
	ctx.r6.s64 = 48;
	// vspltisw128 v54,8
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_set1_epi32(int(0x8)));
	// lvx128 v8,r7,r5
	ea = (ctx.r7.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,-32
	ctx.r5.s64 = -32;
	// lvx128 v7,r7,r31
	ea = (ctx.r7.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,-16
	r31.s64 = -16;
	// lvx128 v53,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw128 v52,14
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_set1_epi32(int(0xE)));
	// vcsxwfp128 v51,v53,0
	simde_mm_store_ps(ctx.v51.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// lvx128 v6,r7,r8
	ea = (ctx.r7.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r7,r5
	ea = (ctx.r7.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v50,v10,v57
	simde_mm_store_ps(ctx.v50.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vaddsws v0,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vmulfp128 v49,v9,v57
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vmulfp128 v48,v8,v56
	simde_mm_store_ps(ctx.v48.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vmulfp128 v47,v7,v56
	simde_mm_store_ps(ctx.v47.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vmulfp128 v46,v6,v51
	simde_mm_store_ps(ctx.v46.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v51.f32)));
	// vmulfp128 v45,v5,v51
	simde_mm_store_ps(ctx.v45.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v51.f32)));
	// vcfpsxws128 v12,v50,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v50.f32)));
	// vcfpsxws128 v11,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v49.f32)));
	// vcfpsxws128 v4,v48,0
	simde_mm_store_si128((simde__m128i*)ctx.v4.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v48.f32)));
	// vcfpsxws128 v3,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v3.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v47.f32)));
	// vcfpsxws128 v2,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v46.f32)));
	// vcfpsxws128 v1,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v45.f32)));
	// vsubsws v30,v11,v4
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v4.s32[0]);
	v30.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v4.s32[1]);
	v30.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v4.s32[2]);
	v30.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v4.s32[3]);
	v30.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v29,v12,v3
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v3.s32[0]);
	v29.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v3.s32[1]);
	v29.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v3.s32[2]);
	v29.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v3.s32[3]);
	v29.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v31,v11,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v3,v12,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v11,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// vor v4,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)v29.u8));
	// vsubsws v28,v0,v2
	temp.s64 = int64_t(ctx.v0.s32[0]) - int64_t(ctx.v2.s32[0]);
	v28.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[1]) - int64_t(ctx.v2.s32[1]);
	v28.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[2]) - int64_t(ctx.v2.s32[2]);
	v28.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[3]) - int64_t(ctx.v2.s32[3]);
	v28.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v2,v0,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v12,v11,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v11,v11,v4
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v4.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v4.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v4.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v4.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v4,v0,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v0,v0,v1
	temp.s64 = int64_t(ctx.v0.s32[0]) - int64_t(ctx.v1.s32[0]);
	ctx.v0.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[1]) - int64_t(ctx.v1.s32[1]);
	ctx.v0.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[2]) - int64_t(ctx.v1.s32[2]);
	ctx.v0.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[3]) - int64_t(ctx.v1.s32[3]);
	ctx.v0.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vslw128 v27,v12,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v26,v12,v61
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v61.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v25,v11,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v24,v11,v61
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v61.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v23,v0,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v30,v26,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v22,v0,v3
	temp.s64 = int64_t(ctx.v0.s32[0]) - int64_t(ctx.v3.s32[0]);
	v22.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[1]) - int64_t(ctx.v3.s32[1]);
	v22.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[2]) - int64_t(ctx.v3.s32[2]);
	v22.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[3]) - int64_t(ctx.v3.s32[3]);
	v22.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// lvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsws v21,v24,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v20,v4,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v3,v12,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v19,v30,v55
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v55.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vor v12,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v21.u8));
	// vor v1,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v28.u8));
	// vsraw128 v44,v20,v54
	ctx.v44.s32[0] = v20.s32[0] >> (ctx.v54.u8[0] & 0x1F);
	ctx.v44.s32[1] = v20.s32[1] >> (ctx.v54.u8[4] & 0x1F);
	ctx.v44.s32[2] = v20.s32[2] >> (ctx.v54.u8[8] & 0x1F);
	ctx.v44.s32[3] = v20.s32[3] >> (ctx.v54.u8[12] & 0x1F);
	// vaddsws v17,v3,v19
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v30,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// lvx128 v11,r7,r31
	ea = (ctx.r7.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v43,v23,v54
	ctx.v43.s32[0] = v23.s32[0] >> (ctx.v54.u8[0] & 0x1F);
	ctx.v43.s32[1] = v23.s32[1] >> (ctx.v54.u8[4] & 0x1F);
	ctx.v43.s32[2] = v23.s32[2] >> (ctx.v54.u8[8] & 0x1F);
	ctx.v43.s32[3] = v23.s32[3] >> (ctx.v54.u8[12] & 0x1F);
	// vslw128 v18,v12,v55
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v55.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vsubsws v16,v4,v31
	temp.s64 = int64_t(ctx.v4.s32[0]) - int64_t(v31.s32[0]);
	v16.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v4.s32[1]) - int64_t(v31.s32[1]);
	v16.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v4.s32[2]) - int64_t(v31.s32[2]);
	v16.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v4.s32[3]) - int64_t(v31.s32[3]);
	v16.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v15,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v14,v30,v18
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// li r4,16
	ctx.r4.s64 = 16;
	// vsraw128 v12,v15,v54
	ctx.v12.s32[0] = v15.s32[0] >> (ctx.v54.u8[0] & 0x1F);
	ctx.v12.s32[1] = v15.s32[1] >> (ctx.v54.u8[4] & 0x1F);
	ctx.v12.s32[2] = v15.s32[2] >> (ctx.v54.u8[8] & 0x1F);
	ctx.v12.s32[3] = v15.s32[3] >> (ctx.v54.u8[12] & 0x1F);
	// vsraw128 v42,v22,v54
	ctx.v42.s32[0] = v22.s32[0] >> (ctx.v54.u8[0] & 0x1F);
	ctx.v42.s32[1] = v22.s32[1] >> (ctx.v54.u8[4] & 0x1F);
	ctx.v42.s32[2] = v22.s32[2] >> (ctx.v54.u8[8] & 0x1F);
	ctx.v42.s32[3] = v22.s32[3] >> (ctx.v54.u8[12] & 0x1F);
	// vsraw128 v41,v16,v54
	ctx.v41.s32[0] = v16.s32[0] >> (ctx.v54.u8[0] & 0x1F);
	ctx.v41.s32[1] = v16.s32[1] >> (ctx.v54.u8[4] & 0x1F);
	ctx.v41.s32[2] = v16.s32[2] >> (ctx.v54.u8[8] & 0x1F);
	ctx.v41.s32[3] = v16.s32[3] >> (ctx.v54.u8[12] & 0x1F);
	// vaddsws v4,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v3,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v2,v2,v12
	temp.s64 = int64_t(ctx.v2.s32[0]) - int64_t(ctx.v12.s32[0]);
	ctx.v2.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v2.s32[1]) - int64_t(ctx.v12.s32[1]);
	ctx.v2.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v2.s32[2]) - int64_t(ctx.v12.s32[2]);
	ctx.v2.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v2.s32[3]) - int64_t(ctx.v12.s32[3]);
	ctx.v2.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v12,v4,v54
	ctx.v12.s32[0] = ctx.v4.s32[0] >> (ctx.v54.u8[0] & 0x1F);
	ctx.v12.s32[1] = ctx.v4.s32[1] >> (ctx.v54.u8[4] & 0x1F);
	ctx.v12.s32[2] = ctx.v4.s32[2] >> (ctx.v54.u8[8] & 0x1F);
	ctx.v12.s32[3] = ctx.v4.s32[3] >> (ctx.v54.u8[12] & 0x1F);
	// vsraw128 v40,v3,v54
	ctx.v40.s32[0] = ctx.v3.s32[0] >> (ctx.v54.u8[0] & 0x1F);
	ctx.v40.s32[1] = ctx.v3.s32[1] >> (ctx.v54.u8[4] & 0x1F);
	ctx.v40.s32[2] = ctx.v3.s32[2] >> (ctx.v54.u8[8] & 0x1F);
	ctx.v40.s32[3] = ctx.v3.s32[3] >> (ctx.v54.u8[12] & 0x1F);
	// vsraw128 v39,v2,v54
	ctx.v39.s32[0] = ctx.v2.s32[0] >> (ctx.v54.u8[0] & 0x1F);
	ctx.v39.s32[1] = ctx.v2.s32[1] >> (ctx.v54.u8[4] & 0x1F);
	ctx.v39.s32[2] = ctx.v2.s32[2] >> (ctx.v54.u8[8] & 0x1F);
	ctx.v39.s32[3] = ctx.v2.s32[3] >> (ctx.v54.u8[12] & 0x1F);
	// vaddsws v31,v1,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v30,v1,v12
	temp.s64 = int64_t(ctx.v1.s32[0]) - int64_t(ctx.v12.s32[0]);
	v30.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[1]) - int64_t(ctx.v12.s32[1]);
	v30.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[2]) - int64_t(ctx.v12.s32[2]);
	v30.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[3]) - int64_t(ctx.v12.s32[3]);
	v30.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmrghw128 v38,v40,v43
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), simde_mm_load_si128((simde__m128i*)ctx.v40.u32)));
	// vmrglw128 v37,v40,v43
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), simde_mm_load_si128((simde__m128i*)ctx.v40.u32)));
	// vmrghw128 v35,v42,v39
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// vsraw128 v36,v31,v54
	ctx.v36.s32[0] = v31.s32[0] >> (ctx.v54.u8[0] & 0x1F);
	ctx.v36.s32[1] = v31.s32[1] >> (ctx.v54.u8[4] & 0x1F);
	ctx.v36.s32[2] = v31.s32[2] >> (ctx.v54.u8[8] & 0x1F);
	ctx.v36.s32[3] = v31.s32[3] >> (ctx.v54.u8[12] & 0x1F);
	// vmrglw128 v33,v42,v39
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// vsraw128 v34,v30,v54
	ctx.v34.s32[0] = v30.s32[0] >> (ctx.v54.u8[0] & 0x1F);
	ctx.v34.s32[1] = v30.s32[1] >> (ctx.v54.u8[4] & 0x1F);
	ctx.v34.s32[2] = v30.s32[2] >> (ctx.v54.u8[8] & 0x1F);
	ctx.v34.s32[3] = v30.s32[3] >> (ctx.v54.u8[12] & 0x1F);
	// vmrghw128 v32,v44,v36
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.u32), simde_mm_load_si128((simde__m128i*)ctx.v44.u32)));
	// vmrglw128 v63,v44,v36
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.u32), simde_mm_load_si128((simde__m128i*)ctx.v44.u32)));
	// vmrghw128 v62,v34,v41
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), simde_mm_load_si128((simde__m128i*)ctx.v34.u32)));
	// vmrglw128 v59,v34,v41
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), simde_mm_load_si128((simde__m128i*)ctx.v34.u32)));
	// vmrglw128 v58,v32,v38
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// vmrglw128 v57,v63,v37
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vmrglw128 v56,v35,v62
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// vmrglw128 v53,v33,v59
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), simde_mm_load_si128((simde__m128i*)ctx.v33.u32)));
	// vcsxwfp128 v4,v58,0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// vmrghw128 v49,v32,v38
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// vcsxwfp128 v2,v57,0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vmrghw128 v48,v35,v62
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// vcsxwfp128 v1,v56,0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// vmrghw128 v51,v63,v37
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vcsxwfp128 v31,v53,0
	simde_mm_store_ps(v31.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// vmrghw128 v50,v33,v59
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), simde_mm_load_si128((simde__m128i*)ctx.v33.u32)));
	// vslw128 v29,v49,v54
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v49.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v54.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v28,v48,v54
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v48.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v54.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vcsxwfp128 v3,v51,0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vcsxwfp128 v30,v50,0
	simde_mm_store_ps(v30.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// vaddsws v12,v29,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v11,v28,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vmaddfp v29,v10,v4,v0
	simde_mm_store_ps(v29.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v28,v8,v2,v0
	simde_mm_store_ps(v28.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v4,v9,v4,v0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v2,v7,v2,v0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v9,v9,v1,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v8,v8,v31,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(v31.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v10,v10,v1,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v7,v7,v31,v0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(v31.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v27,v6,v3,v0
	simde_mm_store_ps(v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v3,v5,v3,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v6,v6,v30,v0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(v30.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v5,v30,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(v30.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vcfpsxws128 v47,v29,0
	simde_mm_store_si128((simde__m128i*)ctx.v47.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v29.f32)));
	// vcfpsxws128 v45,v28,0
	simde_mm_store_si128((simde__m128i*)ctx.v45.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v28.f32)));
	// vcfpsxws128 v46,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v4.f32)));
	// vcfpsxws128 v44,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v44.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v2.f32)));
	// vcfpsxws128 v43,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v9.f32)));
	// vcfpsxws128 v42,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v8.f32)));
	// vcfpsxws128 v41,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v41.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v10.f32)));
	// vcfpsxws128 v40,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v40.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v7.f32)));
	// vcfpsxws128 v39,v27,0
	simde_mm_store_si128((simde__m128i*)ctx.v39.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v27.f32)));
	// vcfpsxws128 v38,v3,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v3.f32)));
	// vcfpsxws128 v37,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vcfpsxws128 v36,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v36.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v0.f32)));
	// vsraw128 v0,v47,v55
	ctx.v0.s32[0] = ctx.v47.s32[0] >> (ctx.v55.u8[0] & 0x1F);
	ctx.v0.s32[1] = ctx.v47.s32[1] >> (ctx.v55.u8[4] & 0x1F);
	ctx.v0.s32[2] = ctx.v47.s32[2] >> (ctx.v55.u8[8] & 0x1F);
	ctx.v0.s32[3] = ctx.v47.s32[3] >> (ctx.v55.u8[12] & 0x1F);
	// vsraw128 v9,v45,v55
	ctx.v9.s32[0] = ctx.v45.s32[0] >> (ctx.v55.u8[0] & 0x1F);
	ctx.v9.s32[1] = ctx.v45.s32[1] >> (ctx.v55.u8[4] & 0x1F);
	ctx.v9.s32[2] = ctx.v45.s32[2] >> (ctx.v55.u8[8] & 0x1F);
	ctx.v9.s32[3] = ctx.v45.s32[3] >> (ctx.v55.u8[12] & 0x1F);
	// vsraw128 v10,v46,v55
	ctx.v10.s32[0] = ctx.v46.s32[0] >> (ctx.v55.u8[0] & 0x1F);
	ctx.v10.s32[1] = ctx.v46.s32[1] >> (ctx.v55.u8[4] & 0x1F);
	ctx.v10.s32[2] = ctx.v46.s32[2] >> (ctx.v55.u8[8] & 0x1F);
	ctx.v10.s32[3] = ctx.v46.s32[3] >> (ctx.v55.u8[12] & 0x1F);
	// vsraw128 v8,v44,v55
	ctx.v8.s32[0] = ctx.v44.s32[0] >> (ctx.v55.u8[0] & 0x1F);
	ctx.v8.s32[1] = ctx.v44.s32[1] >> (ctx.v55.u8[4] & 0x1F);
	ctx.v8.s32[2] = ctx.v44.s32[2] >> (ctx.v55.u8[8] & 0x1F);
	ctx.v8.s32[3] = ctx.v44.s32[3] >> (ctx.v55.u8[12] & 0x1F);
	// vsraw128 v7,v43,v55
	ctx.v7.s32[0] = ctx.v43.s32[0] >> (ctx.v55.u8[0] & 0x1F);
	ctx.v7.s32[1] = ctx.v43.s32[1] >> (ctx.v55.u8[4] & 0x1F);
	ctx.v7.s32[2] = ctx.v43.s32[2] >> (ctx.v55.u8[8] & 0x1F);
	ctx.v7.s32[3] = ctx.v43.s32[3] >> (ctx.v55.u8[12] & 0x1F);
	// vsraw128 v6,v42,v55
	ctx.v6.s32[0] = ctx.v42.s32[0] >> (ctx.v55.u8[0] & 0x1F);
	ctx.v6.s32[1] = ctx.v42.s32[1] >> (ctx.v55.u8[4] & 0x1F);
	ctx.v6.s32[2] = ctx.v42.s32[2] >> (ctx.v55.u8[8] & 0x1F);
	ctx.v6.s32[3] = ctx.v42.s32[3] >> (ctx.v55.u8[12] & 0x1F);
	// vsraw128 v5,v41,v55
	ctx.v5.s32[0] = ctx.v41.s32[0] >> (ctx.v55.u8[0] & 0x1F);
	ctx.v5.s32[1] = ctx.v41.s32[1] >> (ctx.v55.u8[4] & 0x1F);
	ctx.v5.s32[2] = ctx.v41.s32[2] >> (ctx.v55.u8[8] & 0x1F);
	ctx.v5.s32[3] = ctx.v41.s32[3] >> (ctx.v55.u8[12] & 0x1F);
	// vsubsws v27,v10,v9
	temp.s64 = int64_t(ctx.v10.s32[0]) - int64_t(ctx.v9.s32[0]);
	v27.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[1]) - int64_t(ctx.v9.s32[1]);
	v27.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[2]) - int64_t(ctx.v9.s32[2]);
	v27.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[3]) - int64_t(ctx.v9.s32[3]);
	v27.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v4,v40,v55
	ctx.v4.s32[0] = ctx.v40.s32[0] >> (ctx.v55.u8[0] & 0x1F);
	ctx.v4.s32[1] = ctx.v40.s32[1] >> (ctx.v55.u8[4] & 0x1F);
	ctx.v4.s32[2] = ctx.v40.s32[2] >> (ctx.v55.u8[8] & 0x1F);
	ctx.v4.s32[3] = ctx.v40.s32[3] >> (ctx.v55.u8[12] & 0x1F);
	// vsubsws v1,v0,v8
	temp.s64 = int64_t(ctx.v0.s32[0]) - int64_t(ctx.v8.s32[0]);
	ctx.v1.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[1]) - int64_t(ctx.v8.s32[1]);
	ctx.v1.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[2]) - int64_t(ctx.v8.s32[2]);
	ctx.v1.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[3]) - int64_t(ctx.v8.s32[3]);
	ctx.v1.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v2,v0,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v3,v10,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v8,v7,v6
	temp.s64 = int64_t(ctx.v7.s32[0]) - int64_t(ctx.v6.s32[0]);
	ctx.v8.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[1]) - int64_t(ctx.v6.s32[1]);
	ctx.v8.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[2]) - int64_t(ctx.v6.s32[2]);
	ctx.v8.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[3]) - int64_t(ctx.v6.s32[3]);
	ctx.v8.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v9,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v27.u8));
	// vsubsws v26,v5,v4
	temp.s64 = int64_t(ctx.v5.s32[0]) - int64_t(ctx.v4.s32[0]);
	v26.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[1]) - int64_t(ctx.v4.s32[1]);
	v26.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[2]) - int64_t(ctx.v4.s32[2]);
	v26.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[3]) - int64_t(ctx.v4.s32[3]);
	v26.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v7,v7,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v6,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)v26.u8));
	// li r8,48
	ctx.r8.s64 = 48;
	// vsraw128 v0,v39,v55
	ctx.v0.s32[0] = ctx.v39.s32[0] >> (ctx.v55.u8[0] & 0x1F);
	ctx.v0.s32[1] = ctx.v39.s32[1] >> (ctx.v55.u8[4] & 0x1F);
	ctx.v0.s32[2] = ctx.v39.s32[2] >> (ctx.v55.u8[8] & 0x1F);
	ctx.v0.s32[3] = ctx.v39.s32[3] >> (ctx.v55.u8[12] & 0x1F);
	// li r7,80
	ctx.r7.s64 = 80;
	// vsraw128 v10,v37,v55
	ctx.v10.s32[0] = ctx.v37.s32[0] >> (ctx.v55.u8[0] & 0x1F);
	ctx.v10.s32[1] = ctx.v37.s32[1] >> (ctx.v55.u8[4] & 0x1F);
	ctx.v10.s32[2] = ctx.v37.s32[2] >> (ctx.v55.u8[8] & 0x1F);
	ctx.v10.s32[3] = ctx.v37.s32[3] >> (ctx.v55.u8[12] & 0x1F);
	// li r6,112
	ctx.r6.s64 = 112;
	// vaddsws v25,v9,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// li r5,128
	ctx.r5.s64 = 128;
	// vaddsws v24,v8,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// li r31,144
	r31.s64 = 144;
	// vsubsws v23,v12,v0
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v0.s32[0]);
	v23.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v0.s32[1]);
	v23.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v0.s32[2]);
	v23.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v0.s32[3]);
	v23.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// li r30,160
	r30.s64 = 160;
	// vsubsws v22,v11,v10
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v10.s32[0]);
	v22.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v10.s32[1]);
	v22.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v10.s32[2]);
	v22.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v10.s32[3]);
	v22.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// li r29,176
	r29.s64 = 176;
	// vaddsws v21,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// li r28,192
	r28.s64 = 192;
	// vaddsws v20,v11,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// li r27,208
	r27.s64 = 208;
	// vor v0,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)v25.u8));
	// li r26,224
	r26.s64 = 224;
	// vor v10,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v24.u8));
	// li r25,240
	r25.s64 = 240;
	// vsubsws v9,v9,v1
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v1.s32[0]);
	ctx.v9.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v1.s32[1]);
	ctx.v9.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v1.s32[2]);
	ctx.v9.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v1.s32[3]);
	ctx.v9.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v8,v8,v6
	temp.s64 = int64_t(ctx.v8.s32[0]) - int64_t(ctx.v6.s32[0]);
	ctx.v8.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[1]) - int64_t(ctx.v6.s32[1]);
	ctx.v8.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[2]) - int64_t(ctx.v6.s32[2]);
	ctx.v8.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[3]) - int64_t(ctx.v6.s32[3]);
	ctx.v8.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vslw128 v19,v0,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v18,v0,v61
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v61.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v17,v10,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v16,v10,v61
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v61.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v15,v9,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v14,v9,v61
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v61.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v1,v8,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v30,v8,v61
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v61.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v31,v5,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v6,v18,v19
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v5,v16,v17
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v28,v30,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v29,v14,v15
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v4,v0,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v1,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v27,v6,v55
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v55.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v26,v5,v55
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v55.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vor v6,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)v29.u8));
	// vor v5,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)v28.u8));
	// vaddsws v25,v4,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v24,v1,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v30,v9,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v29,v8,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v19,v6,v55
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v55.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v18,v5,v55
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v55.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vsraw128 v10,v36,v55
	ctx.v10.s32[0] = ctx.v36.s32[0] >> (ctx.v55.u8[0] & 0x1F);
	ctx.v10.s32[1] = ctx.v36.s32[1] >> (ctx.v55.u8[4] & 0x1F);
	ctx.v10.s32[2] = ctx.v36.s32[2] >> (ctx.v55.u8[8] & 0x1F);
	ctx.v10.s32[3] = ctx.v36.s32[3] >> (ctx.v55.u8[12] & 0x1F);
	// vsraw128 v0,v38,v55
	ctx.v0.s32[0] = ctx.v38.s32[0] >> (ctx.v55.u8[0] & 0x1F);
	ctx.v0.s32[1] = ctx.v38.s32[1] >> (ctx.v55.u8[4] & 0x1F);
	ctx.v0.s32[2] = ctx.v38.s32[2] >> (ctx.v55.u8[8] & 0x1F);
	ctx.v0.s32[3] = ctx.v38.s32[3] >> (ctx.v55.u8[12] & 0x1F);
	// vaddsws v17,v30,v19
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v16,v29,v18
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v15,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v14,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v1,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v30,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v9,v11,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v8,v12,v0
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v8.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v8.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v8.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v8.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v4,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v10,v11,v10
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v10.s32[0]);
	ctx.v10.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v10.s32[1]);
	ctx.v10.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v10.s32[2]);
	ctx.v10.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v10.s32[3]);
	ctx.v10.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v6,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)v23.u8));
	// vor v5,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)v22.u8));
	// vor v0,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)v21.u8));
	// vor v11,v20,v20
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v20.u8));
	// vsraw128 v1,v1,v54
	ctx.v1.s32[0] = ctx.v1.s32[0] >> (ctx.v54.u8[0] & 0x1F);
	ctx.v1.s32[1] = ctx.v1.s32[1] >> (ctx.v54.u8[4] & 0x1F);
	ctx.v1.s32[2] = ctx.v1.s32[2] >> (ctx.v54.u8[8] & 0x1F);
	ctx.v1.s32[3] = ctx.v1.s32[3] >> (ctx.v54.u8[12] & 0x1F);
	// vsraw128 v30,v30,v54
	v30.s32[0] = v30.s32[0] >> (ctx.v54.u8[0] & 0x1F);
	v30.s32[1] = v30.s32[1] >> (ctx.v54.u8[4] & 0x1F);
	v30.s32[2] = v30.s32[2] >> (ctx.v54.u8[8] & 0x1F);
	v30.s32[3] = v30.s32[3] >> (ctx.v54.u8[12] & 0x1F);
	// vsraw128 v12,v15,v54
	ctx.v12.s32[0] = v15.s32[0] >> (ctx.v54.u8[0] & 0x1F);
	ctx.v12.s32[1] = v15.s32[1] >> (ctx.v54.u8[4] & 0x1F);
	ctx.v12.s32[2] = v15.s32[2] >> (ctx.v54.u8[8] & 0x1F);
	ctx.v12.s32[3] = v15.s32[3] >> (ctx.v54.u8[12] & 0x1F);
	// vsraw128 v13,v14,v54
	ctx.v13.s32[0] = v14.s32[0] >> (ctx.v54.u8[0] & 0x1F);
	ctx.v13.s32[1] = v14.s32[1] >> (ctx.v54.u8[4] & 0x1F);
	ctx.v13.s32[2] = v14.s32[2] >> (ctx.v54.u8[8] & 0x1F);
	ctx.v13.s32[3] = v14.s32[3] >> (ctx.v54.u8[12] & 0x1F);
	// vaddsws v29,v4,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v28,v9,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v27,v0,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v26,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v25,v6,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v24,v5,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v23,v8,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v22,v10,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v21,v8,v2
	temp.s64 = int64_t(ctx.v8.s32[0]) - int64_t(ctx.v2.s32[0]);
	v21.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[1]) - int64_t(ctx.v2.s32[1]);
	v21.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[2]) - int64_t(ctx.v2.s32[2]);
	v21.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[3]) - int64_t(ctx.v2.s32[3]);
	v21.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v20,v10,v31
	temp.s64 = int64_t(ctx.v10.s32[0]) - int64_t(v31.s32[0]);
	v20.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[1]) - int64_t(v31.s32[1]);
	v20.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[2]) - int64_t(v31.s32[2]);
	v20.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[3]) - int64_t(v31.s32[3]);
	v20.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v19,v6,v1
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v1.s32[0]);
	v19.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v1.s32[1]);
	v19.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v1.s32[2]);
	v19.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v1.s32[3]);
	v19.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v18,v5,v30
	temp.s64 = int64_t(ctx.v5.s32[0]) - int64_t(v30.s32[0]);
	v18.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[1]) - int64_t(v30.s32[1]);
	v18.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[2]) - int64_t(v30.s32[2]);
	v18.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[3]) - int64_t(v30.s32[3]);
	v18.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v17,v0,v12
	temp.s64 = int64_t(ctx.v0.s32[0]) - int64_t(ctx.v12.s32[0]);
	v17.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[1]) - int64_t(ctx.v12.s32[1]);
	v17.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[2]) - int64_t(ctx.v12.s32[2]);
	v17.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[3]) - int64_t(ctx.v12.s32[3]);
	v17.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v16,v11,v13
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v13.s32[0]);
	v16.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v13.s32[1]);
	v16.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v13.s32[2]);
	v16.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v13.s32[3]);
	v16.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v15,v4,v3
	temp.s64 = int64_t(ctx.v4.s32[0]) - int64_t(ctx.v3.s32[0]);
	v15.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v4.s32[1]) - int64_t(ctx.v3.s32[1]);
	v15.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v4.s32[2]) - int64_t(ctx.v3.s32[2]);
	v15.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v4.s32[3]) - int64_t(ctx.v3.s32[3]);
	v15.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v14,v9,v7
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v7.s32[0]);
	v14.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v7.s32[1]);
	v14.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v7.s32[2]);
	v14.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v7.s32[3]);
	v14.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v35,v29,v52
	ctx.v35.s32[0] = v29.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v35.s32[1] = v29.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v35.s32[2] = v29.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v35.s32[3] = v29.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// vsraw128 v34,v28,v52
	ctx.v34.s32[0] = v28.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v34.s32[1] = v28.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v34.s32[2] = v28.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v34.s32[3] = v28.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// vsraw128 v33,v27,v52
	ctx.v33.s32[0] = v27.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v33.s32[1] = v27.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v33.s32[2] = v27.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v33.s32[3] = v27.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// vsraw128 v32,v26,v52
	ctx.v32.s32[0] = v26.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v32.s32[1] = v26.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v32.s32[2] = v26.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v32.s32[3] = v26.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// vsraw128 v63,v25,v52
	ctx.v63.s32[0] = v25.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v63.s32[1] = v25.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v63.s32[2] = v25.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v63.s32[3] = v25.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// stvx128 v35,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v62,v24,v52
	ctx.v62.s32[0] = v24.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v62.s32[1] = v24.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v62.s32[2] = v24.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v62.s32[3] = v24.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// stvx128 v34,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v61,v23,v52
	ctx.v61.s32[0] = v23.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v61.s32[1] = v23.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v61.s32[2] = v23.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v61.s32[3] = v23.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// stvx128 v33,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v60,v22,v52
	ctx.v60.s32[0] = v22.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v60.s32[1] = v22.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v60.s32[2] = v22.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v60.s32[3] = v22.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// stvx128 v32,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v59,v21,v52
	ctx.v59.s32[0] = v21.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v59.s32[1] = v21.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v59.s32[2] = v21.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v59.s32[3] = v21.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// stvx128 v63,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v58,v20,v52
	ctx.v58.s32[0] = v20.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v58.s32[1] = v20.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v58.s32[2] = v20.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v58.s32[3] = v20.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// stvx128 v62,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v57,v19,v52
	ctx.v57.s32[0] = v19.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v57.s32[1] = v19.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v57.s32[2] = v19.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v57.s32[3] = v19.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// stvx128 v61,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v56,v18,v52
	ctx.v56.s32[0] = v18.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v56.s32[1] = v18.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v56.s32[2] = v18.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v56.s32[3] = v18.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// stvx128 v60,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v55,v17,v52
	ctx.v55.s32[0] = v17.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v55.s32[1] = v17.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v55.s32[2] = v17.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v55.s32[3] = v17.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// stvx128 v59,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v54,v16,v52
	ctx.v54.s32[0] = v16.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v54.s32[1] = v16.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v54.s32[2] = v16.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v54.s32[3] = v16.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// stvx128 v58,r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v53,v15,v52
	ctx.v53.s32[0] = v15.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v53.s32[1] = v15.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v53.s32[2] = v15.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v53.s32[3] = v15.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// stvx128 v57,r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v52,v14,v52
	ctx.v52.s32[0] = v14.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v52.s32[1] = v14.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v52.s32[2] = v14.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v52.s32[3] = v14.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// stvx128 v56,r3,r29
	ea = (ctx.r3.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r3,r28
	ea = (ctx.r3.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r3,r27
	ea = (ctx.r3.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v53,r3,r26
	ea = (ctx.r3.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v52,r3,r25
	ea = (ctx.r3.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_827B81E8) {
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
	ctx.lr = 0x827B81F0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x4)));
	// li r9,1120
	ctx.r9.s64 = 1120;
	// vspltish v13,7
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x7)));
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// addi r27,r1,128
	r27.s64 = ctx.r1.s64 + 128;
	// lwz r31,1164(r6)
	r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vspltish v1,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x1)));
	// vrlh v12,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, result);
	}
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v2,r6,r9
	ea = (ctx.r6.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// vsubshs v11,v12,v2
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// stvx128 v13,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// stvx128 v11,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x827af878
	ctx.lr = 0x827B8248;
	sub_827AF878(ctx, base);
	// clrlwi r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	// vspltish v9,8
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x8)));
	// vspltish v8,-1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// vspltisb v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// vspltish v10,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x3)));
	// slw r9,r8,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// vspltish v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x0)));
	// vslh v8,v8,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x827b82f8
	if (!ctx.cr6.eq) goto loc_827B82F8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827b83a4
	if (!ctx.cr6.gt) goto loc_827B83A4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_827B8294:
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v13,v0,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v9,v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// vsldoi128 v7,v0,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// lvx128 v6,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v13,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v4,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v3,v13,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
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
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x827b8294
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B8294;
	// b 0x827b83a4
	goto loc_827B83A4;
loc_827B82F8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827b83a4
	if (!ctx.cr6.gt) goto loc_827B83A4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_827B8310:
	// lvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lvx128 v13,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v9,v0,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// vsldoi128 v7,v0,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vsldoi128 v6,v0,v61,6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 10));
	// vsldoi v5,v13,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vsldoi v4,v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vadduhm v3,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsldoi v2,v13,v0,6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vadduhm v1,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v9,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vor v0,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vadduhm v31,v13,v2
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubshs v30,v11,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v0,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v27,v11,v31
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vadduhm v26,v9,v29
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// lvx128 v9,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v25,v0,v28
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// lvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v24,v26,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v23,v25,v9
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
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
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x827b8310
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B8310;
loc_827B83A4:
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
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_827C8EC8) {
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
	ctx.lr = 0x827C8ED0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r4,620(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 620);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r28,r3,232
	r28.s64 = ctx.r3.s64 + 232;
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,40(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r5,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x827c8f38
	if (ctx.cr6.lt) goto loc_827C8F38;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82731930
	ctx.lr = 0x827C8F30;
	sub_82731930(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x827c8f90
	goto loc_827C8F90;
loc_827C8F38:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827c8f8c
	if (!ctx.cr6.gt) goto loc_827C8F8C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_827C8F44:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r5,26
	ctx.r8.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r3,r5,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// lbzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r25,r28,r3
	r25.u64 = REX_LOAD_U8(r28.u32 + ctx.r3.u32);
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// or r9,r25,r9
	ctx.r9.u64 = r25.u64 | ctx.r9.u64;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r5,r3,r30
	REX_STORE_U16(ctx.r3.u32 + r30.u32, ctx.r5.u16);
	// bdnz 0x827c8f44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827C8F44;
loc_827C8F8C:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_827C8F90:
	// li r23,16
	r23.s64 = 16;
	// li r24,32
	r24.s64 = 32;
	// li r25,48
	r25.s64 = 48;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827c8ff0
	if (!ctx.cr6.eq) goto loc_827C8FF0;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v13,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// stvx128 v13,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r26,r23
	ea = (r26.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r26,r24
	ea = (r26.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r26,r25
	ea = (r26.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x827c8ffc
	goto loc_827C8FFC;
loc_827C8FF0:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827aeec8
	ctx.lr = 0x827C8FFC;
	sub_827AEEC8(ctx, base);
loc_827C8FFC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,620(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 620);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r30,40(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r5,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x827c9050
	if (ctx.cr6.lt) goto loc_827C9050;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82731930
	ctx.lr = 0x827C9048;
	sub_82731930(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x827c90a8
	goto loc_827C90A8;
loc_827C9050:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827c90a4
	if (!ctx.cr6.gt) goto loc_827C90A4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_827C905C:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r5,26
	ctx.r8.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r3,r5,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// lbzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r29,r28,r3
	r29.u64 = REX_LOAD_U8(r28.u32 + ctx.r3.u32);
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// or r9,r29,r9
	ctx.r9.u64 = r29.u64 | ctx.r9.u64;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r5,r3,r30
	REX_STORE_U16(ctx.r3.u32 + r30.u32, ctx.r5.u16);
	// bdnz 0x827c905c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827C905C;
loc_827C90A4:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_827C90A8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827c9104
	if (!ctx.cr6.eq) goto loc_827C9104;
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r11,r26,64
	ctx.r11.s64 = r26.s64 + 64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// srawi r9,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v13,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r23
	ea = (ctx.r11.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r24
	ea = (ctx.r11.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r25
	ea = (ctx.r11.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf4
	return;
loc_827C9104:
	// addi r4,r26,64
	ctx.r4.s64 = r26.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827aeec8
	ctx.lr = 0x827C9110;
	sub_827AEEC8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_827D6118) {
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
	ctx.lr = 0x827D6120;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// lwz r10,3744(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3744);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// stw r8,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,3748(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3748);
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// lwz r10,3756(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3756);
	// lwz r8,3752(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3752);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r31,268(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// beq cr6,0x827d616c
	if (ctx.cr6.eq) goto loc_827D616C;
	// lwz r30,3780(r20)
	r30.u64 = REX_LOAD_U32(r20.u32 + 3780);
	// b 0x827d6170
	goto loc_827D6170;
loc_827D616C:
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
loc_827D6170:
	// lwz r11,3760(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 3760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d6188
	if (ctx.cr6.eq) goto loc_827D6188;
	// lwz r10,224(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 224);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x827d618c
	goto loc_827D618C;
loc_827D6188:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
loc_827D618C:
	// lwz r11,3764(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 3764);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d61a4
	if (ctx.cr6.eq) goto loc_827D61A4;
	// lwz r10,224(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 224);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x827d61a8
	goto loc_827D61A8;
loc_827D61A4:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_827D61A8:
	// lhz r11,50(r23)
	ctx.r11.u64 = REX_LOAD_U16(r23.u32 + 50);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lhz r10,74(r23)
	ctx.r10.u64 = REX_LOAD_U16(r23.u32 + 74);
	// cmplw cr6,r7,r27
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r27.u32, ctx.xer);
	// rlwinm r15,r11,31,1,31
	r15.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r9,76(r23)
	ctx.r9.u64 = REX_LOAD_U16(r23.u32 + 76);
	// rotlwi r29,r10,4
	r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// mullw r11,r15,r7
	ctx.r11.s64 = int64_t(r15.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r9,r9,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r26,r11,r10
	r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r11,r9,r7
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mullw r10,r29,r7
	ctx.r10.s64 = int64_t(r29.s32) * int64_t(ctx.r7.s32);
	// rlwinm r9,r26,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// add r21,r10,r5
	r21.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r14,r9,r31
	r14.u64 = ctx.r9.u64 + r31.u64;
	// add r22,r11,r4
	r22.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r19,r11,r3
	r19.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r18,r10,r30
	r18.u64 = ctx.r10.u64 + r30.u64;
	// add r17,r11,r6
	r17.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r16,r11,r8
	r16.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bge cr6,0x827d62e8
	if (!ctx.cr6.lt) goto loc_827D62E8;
loc_827D6200:
	// mr r30,r21
	r30.u64 = r21.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x827d62bc
	if (ctx.cr6.eq) goto loc_827D62BC;
	// mr r31,r22
	r31.u64 = r22.u64;
	// subf r27,r22,r19
	r27.u64 = r19.u64 - r22.u64;
	// subf r26,r22,r16
	r26.u64 = r16.u64 - r22.u64;
	// subf r25,r22,r17
	r25.u64 = r17.u64 - r22.u64;
	// subf r24,r21,r18
	r24.u64 = r18.u64 - r21.u64;
loc_827D6224:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// rlwinm r11,r11,24,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x827d62a0
	if (ctx.cr6.eq) goto loc_827D62A0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// add r8,r26,r31
	ctx.r8.u64 = r26.u64 + r31.u64;
	// add r7,r25,r31
	ctx.r7.u64 = r25.u64 + r31.u64;
	// add r6,r24,r30
	ctx.r6.u64 = r24.u64 + r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// blt cr6,0x827d6294
	if (ctx.cr6.lt) goto loc_827D6294;
	// beq cr6,0x827d6284
	if (ctx.cr6.eq) goto loc_827D6284;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// add r11,r27,r31
	ctx.r11.u64 = r27.u64 + r31.u64;
	// blt cr6,0x827d6278
	if (ctx.cr6.lt) goto loc_827D6278;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x827d5100
	ctx.lr = 0x827D6274;
	sub_827D5100(ctx, base);
	// b 0x827d62a0
	goto loc_827D62A0;
loc_827D6278:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x827d38d8
	ctx.lr = 0x827D6280;
	sub_827D38D8(ctx, base);
	// b 0x827d62a0
	goto loc_827D62A0;
loc_827D6284:
	// add r11,r27,r31
	ctx.r11.u64 = r27.u64 + r31.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x827d4110
	ctx.lr = 0x827D6290;
	sub_827D4110(ctx, base);
	// b 0x827d62a0
	goto loc_827D62A0;
loc_827D6294:
	// add r11,r27,r31
	ctx.r11.u64 = r27.u64 + r31.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x827d3438
	ctx.lr = 0x827D62A0;
	sub_827D3438(ctx, base);
loc_827D62A0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r14,r14,24
	r14.s64 = r14.s64 + 24;
	// cmplw cr6,r29,r15
	ctx.cr6.compare<uint32_t>(r29.u32, r15.u32, ctx.xer);
	// blt cr6,0x827d6224
	if (ctx.cr6.lt) goto loc_827D6224;
	// lwz r27,300(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
loc_827D62BC:
	// lwz r11,232(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 232);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,228(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 228);
	// add r22,r11,r22
	r22.u64 = ctx.r11.u64 + r22.u64;
	// add r21,r10,r21
	r21.u64 = ctx.r10.u64 + r21.u64;
	// add r19,r11,r19
	r19.u64 = ctx.r11.u64 + r19.u64;
	// add r18,r10,r18
	r18.u64 = ctx.r10.u64 + r18.u64;
	// add r17,r11,r17
	r17.u64 = ctx.r11.u64 + r17.u64;
	// add r16,r11,r16
	r16.u64 = ctx.r11.u64 + r16.u64;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// blt cr6,0x827d6200
	if (ctx.cr6.lt) goto loc_827D6200;
loc_827D62E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

