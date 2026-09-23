#include "hydrothunder_funcs.107.h"

DEFINE_REX_FUNC(sub_82125EF0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15752
	ctx.r3.s64 = ctx.r11.s64 + -15752;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82126968) {
	REX_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82126FC0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,6220(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82126fe4
	if (!ctx.cr6.eq) goto loc_82126FE4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82126FE4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82128150) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82128158;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82128214
	goto loc_82128214;
loc_82128170:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r29,12
	r30.s64 = r29.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82128190
	if (!ctx.cr6.lt) goto loc_82128190;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82128194
	if (!ctx.cr6.gt) goto loc_82128194;
loc_82128190:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82128194:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821281d8
	if (ctx.cr0.eq) goto loc_821281D8;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// srawi r30,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r30.s64 = ctx.r10.s32 >> 2;
	// bne cr6,0x821281bc
	if (!ctx.cr6.eq) goto loc_821281BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212a8c0
	ctx.lr = 0x821281BC;
	sub_8212A8C0(ctx, base);
loc_821281BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82128200
	if (ctx.cr6.eq) goto loc_82128200;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x821281fc
	goto loc_821281FC;
loc_821281D8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821281ec
	if (!ctx.cr6.eq) goto loc_821281EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212a8c0
	ctx.lr = 0x821281EC;
	sub_8212A8C0(ctx, base);
loc_821281EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82128200
	if (ctx.cr6.eq) goto loc_82128200;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_821281FC:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82128200:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,88(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 88);
loc_82128214:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82128170
	if (!ctx.cr6.eq) goto loc_82128170;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82130698) {
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
	ctx.lr = 0x821306A0;
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r21,r11,-22256
	r21.s64 = ctx.r11.s64 + -22256;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821306d0
	if (ctx.cr6.eq) goto loc_821306D0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r11,-22016
	ctx.r3.s64 = ctx.r11.s64 + -22016;
	// li r5,193
	ctx.r5.s64 = 193;
	// bl 0x821231d0
	ctx.lr = 0x821306D0;
	sub_821231D0(ctx, base);
loc_821306D0:
	// li r22,0
	r22.s64 = 0;
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 16);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r22,20(r29)
	REX_STORE_U32(r29.u32 + 20, r22.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82793624
	ctx.lr = 0x821306EC;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821308a4
	if (ctx.cr0.eq) goto loc_821308A4;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r24,r7,-25252
	r24.s64 = ctx.r7.s64 + -25252;
	// addi r23,r8,-25320
	r23.s64 = ctx.r8.s64 + -25320;
	// addi r26,r9,-22032
	r26.s64 = ctx.r9.s64 + -22032;
	// addi r30,r10,-22044
	r30.s64 = ctx.r10.s64 + -22044;
	// addi r25,r11,-22064
	r25.s64 = ctx.r11.s64 + -22064;
loc_8213071C:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r28,r22
	r28.u64 = r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82130888
	if (!ctx.cr6.gt) goto loc_82130888;
	// mr r27,r22
	r27.u64 = r22.u64;
loc_82130730:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x82130744
	if (ctx.cr6.lt) goto loc_82130744;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82130754
	if (ctx.cr6.lt) goto loc_82130754;
loc_82130744:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x82130754;
	sub_821231D0(ctx, base);
loc_82130754:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwzx r31,r11,r27
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82130778;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x821307f4
	if (ctx.cr6.eq) goto loc_821307F4;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// beq cr6,0x821307dc
	if (ctx.cr6.eq) goto loc_821307DC;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821307b8
	if (ctx.cr6.eq) goto loc_821307B8;
	// lis r10,3588
	ctx.r10.s64 = 235143168;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82130814
	if (!ctx.cr6.eq) goto loc_82130814;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x821307e4
	goto loc_821307E4;
loc_821307B8:
	// lis r11,21
	ctx.r11.s64 = 1376256;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ori r11,r11,4336
	ctx.r11.u64 = ctx.r11.u64 | 4336;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82130808
	goto loc_82130808;
loc_821307DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_821307E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821307F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82130814
	goto loc_82130814;
loc_821307F4:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r4,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
loc_82130808:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82130814;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82130814:
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ori r10,r10,7
	ctx.r10.u64 = ctx.r10.u64 | 7;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82130848
	if (!ctx.cr6.eq) goto loc_82130848;
	// stw r22,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r22.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r6,17
	ctx.r6.s64 = 17;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x82130840;
	sub_8216B6A8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// b 0x8213086c
	goto loc_8213086C;
loc_82130848:
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82130874
	if (!ctx.cr6.eq) goto loc_82130874;
	// stw r22,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, r22.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r6,14
	ctx.r6.s64 = 14;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8216b6a8
	ctx.lr = 0x82130868;
	sub_8216B6A8(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
loc_8213086C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216bc98
	ctx.lr = 0x82130874;
	sub_8216BC98(ctx, base);
loc_82130874:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82130730
	if (ctx.cr6.lt) goto loc_82130730;
loc_82130888:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82793624
	ctx.lr = 0x8213089C;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8213071c
	if (!ctx.cr0.eq) goto loc_8213071C;
loc_821308A4:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821308c4
	if (ctx.cr6.eq) goto loc_821308C4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r11,-21964
	ctx.r3.s64 = ctx.r11.s64 + -21964;
	// li r5,200
	ctx.r5.s64 = 200;
	// bl 0x821231d0
	ctx.lr = 0x821308C4;
	sub_821231D0(ctx, base);
loc_821308C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r11.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82141F68) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141F84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,-6
	ctx.r11.s64 = ctx.r3.s64 + -6;
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

DEFINE_REX_FUNC(sub_82144A68) {
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
	ctx.lr = 0x82144A70;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,4(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r30,r28,1
	r30.s64 = r28.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82144adc
	if (!ctx.cr6.gt) goto loc_82144ADC;
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
	// bgt cr6,0x82144aa8
	if (ctx.cr6.gt) goto loc_82144AA8;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82144AA8:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82144adc
	if (!ctx.cr6.gt) goto loc_82144ADC;
	// li r4,16
	ctx.r4.s64 = 16;
	// mulli r3,r29,92
	ctx.r3.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(92));
	// bl 0x8269d1d0
	ctx.lr = 0x82144ABC;
	sub_8269D1D0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r5,r28,92
	ctx.r5.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(92));
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82144ACC;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x82144AD4;
	sub_8269D1B8(ctx, base);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_82144ADC:
	// addic. r29,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r29.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// blt 0x82144af0
	if (ctx.cr0.lt) goto loc_82144AF0;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// blt cr6,0x82144b08
	if (ctx.cr6.lt) goto loc_82144B08;
loc_82144AF0:
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
	ctx.lr = 0x82144B08;
	sub_821231D0(ctx, base);
loc_82144B08:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r10,r29,92
	ctx.r10.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(92));
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,92
	ctx.r5.s64 = 92;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82144B20;
	sub_826A1E70(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8214AC48) {
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
	ctx.lr = 0x8214AC50;
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8214ae6c
	if (ctx.cr6.lt) goto loc_8214AE6C;
	// li r27,0
	r27.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// bl 0x822f6280
	ctx.lr = 0x8214AC74;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214ae80
	if (ctx.cr0.eq) goto loc_8214AE80;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r31,25
	r31.s64 = 25;
loc_8214AC94:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a6a80
	ctx.lr = 0x8214AC9C;
	sub_821A6A80(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bge 0x8214ac94
	if (!ctx.cr0.lt) goto loc_8214AC94;
	// li r28,0
	r28.s64 = 0;
	// b 0x8214adf8
	goto loc_8214ADF8;
loc_8214ACB0:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// beq cr6,0x8214acf4
	if (ctx.cr6.eq) goto loc_8214ACF4;
	// lis r8,16383
	ctx.r8.s64 = 1073676288;
	// ori r8,r8,65534
	ctx.r8.u64 = ctx.r8.u64 | 65534;
	// subf r8,r27,r8
	ctx.r8.u64 = ctx.r8.u64 - r27.u64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x8214ae74
	if (ctx.cr6.lt) goto loc_8214AE74;
	// lwz r8,4(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// stw r8,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r8.u32);
loc_8214ACF4:
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// beq cr6,0x8214adb4
	if (ctx.cr6.eq) goto loc_8214ADB4;
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
loc_8214AD34:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ad94
	if (ctx.cr6.eq) goto loc_8214AD94;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214b0a0
	ctx.lr = 0x8214AD4C;
	sub_8214B0A0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8214ad7c
	if (ctx.cr6.eq) goto loc_8214AD7C;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r27,4(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// b 0x8214ad84
	goto loc_8214AD84;
loc_8214AD7C:
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8214AD84:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// blt cr6,0x8214ad34
	if (ctx.cr6.lt) goto loc_8214AD34;
loc_8214AD94:
	// cmplwi cr6,r30,25
	ctx.cr6.compare<uint32_t>(r30.u32, 25, ctx.xer);
	// bne cr6,0x8214adb4
	if (!ctx.cr6.eq) goto loc_8214ADB4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x8214b0a0
	ctx.lr = 0x8214ADA8;
	sub_8214B0A0(ctx, base);
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8214adf8
	goto loc_8214ADF8;
loc_8214ADB4:
	// mulli r10,r30,12
	ctx.r10.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(12));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8214adec
	if (ctx.cr6.eq) goto loc_8214ADEC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_8214ADEC:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bne cr6,0x8214adf8
	if (!ctx.cr6.eq) goto loc_8214ADF8;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_8214ADF8:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214acb0
	if (!ctx.cr6.eq) goto loc_8214ACB0;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// ble cr6,0x8214ae2c
	if (!ctx.cr6.gt) goto loc_8214AE2C;
	// addi r31,r1,124
	r31.s64 = ctx.r1.s64 + 124;
	// addi r30,r28,-1
	r30.s64 = r28.s64 + -1;
loc_8214AE14:
	// addi r4,r31,-12
	ctx.r4.s64 = r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214b0a0
	ctx.lr = 0x8214AE20;
	sub_8214B0A0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// bne 0x8214ae14
	if (!ctx.cr0.eq) goto loc_8214AE14;
loc_8214AE2C:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mulli r11,r28,12
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(12));
	// lwz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// bl 0x8214aea0
	ctx.lr = 0x8214AE4C;
	sub_8214AEA0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r5,26
	ctx.r5.s64 = 26;
	// addi r6,r11,-21760
	ctx.r6.s64 = ctx.r11.s64 + -21760;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8212e1b0
	ctx.lr = 0x8214AE64;
	sub_8212E1B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8214ab00
	ctx.lr = 0x8214AE6C;
	sub_8214AB00(ctx, base);
loc_8214AE6C:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x826a1d00
	return;
loc_8214AE74:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x8214AE80;
	sub_822F6020(ctx, base);
loc_8214AE80:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x8214AE9C;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8215B568) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215b5ec
	if (ctx.cr6.eq) goto loc_8215B5EC;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8215b5ec
	if (!ctx.cr6.lt) goto loc_8215B5EC;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8215b5b8
	if (ctx.cr6.eq) goto loc_8215B5B8;
	// lbz r11,-1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8215b5ec
	if (!ctx.cr6.eq) goto loc_8215B5EC;
loc_8215B5B8:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// and r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 & r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8215b668
	goto loc_8215B668;
loc_8215B5EC:
	// lwz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8215b664
	if (ctx.cr6.eq) goto loc_8215B664;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(r30.s32, -1, ctx.xer);
	// beq cr6,0x8215b664
	if (ctx.cr6.eq) goto loc_8215B664;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215b624
	if (!ctx.cr6.eq) goto loc_8215B624;
	// clrlwi r3,r30,24
	ctx.r3.u64 = r30.u32 & 0xFF;
	// bl 0x8269ded8
	ctx.lr = 0x8215B614;
	sub_8269DED8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8215b624
	if (ctx.cr6.eq) goto loc_8215B624;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8215b668
	goto loc_8215B668;
loc_8215B624:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r11,r31,64
	ctx.r11.s64 = r31.s64 + 64;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8215b664
	if (ctx.cr6.eq) goto loc_8215B664;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r10,r11,r31
	ctx.r10.u64 = r31.u64 - ctx.r11.u64;
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r30.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r10,r10,65
	ctx.r10.s64 = ctx.r10.s64 + 65;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8215b668
	goto loc_8215B668;
loc_8215B664:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8215B668:
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

DEFINE_REX_FUNC(sub_82163998) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821639A0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,52(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82163bac
	if (ctx.cr6.eq) goto loc_82163BAC;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r3,6072(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821639CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r10,16715
	ctx.r10.s64 = 1095434240;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r7,5
	ctx.r7.s64 = 5;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ori r10,r10,20550
	ctx.r10.u64 = ctx.r10.u64 | 20550;
	// stw r3,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// lwz r3,6072(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6072);
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82163A1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82163a2c
	if (!ctx.cr0.eq) goto loc_82163A2C;
loc_82163A24:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82163bb0
	goto loc_82163BB0;
loc_82163A2C:
	// lwz r3,6072(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6072);
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82163A4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 24, ctx.xer);
	// bne cr6,0x82163a24
	if (!ctx.cr6.eq) goto loc_82163A24;
	// lwz r3,6072(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6072);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82163A70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82163a24
	if (ctx.cr0.eq) goto loc_82163A24;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82163b1c
	goto loc_82163B1C;
loc_82163A84:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82163AA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82163a24
	if (!ctx.cr6.eq) goto loc_82163A24;
	// lwz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 28);
	// addi r11,r29,8
	ctx.r11.s64 = r29.s64 + 8;
	// lwz r3,6072(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6072);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82163ac4
	if (ctx.cr6.lt) goto loc_82163AC4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82163AC4:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r11,76(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82163AE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82163a24
	if (!ctx.cr6.eq) goto loc_82163A24;
	// lwz r3,6072(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6072);
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r29,36
	ctx.r5.s64 = r29.s64 + 36;
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82163B0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 24, ctx.xer);
	// bne cr6,0x82163a24
	if (!ctx.cr6.eq) goto loc_82163A24;
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_82163B1C:
	// lwz r3,6072(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6072);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bne cr6,0x82163a84
	if (!ctx.cr6.eq) goto loc_82163A84;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82163B3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82163a24
	if (ctx.cr0.eq) goto loc_82163A24;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82163ba0
	if (ctx.cr6.eq) goto loc_82163BA0;
loc_82163B74:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82120ac0
	ctx.lr = 0x82163B88;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82163B90;
	sub_8269CE98(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82163b74
	if (!ctx.cr6.eq) goto loc_82163B74;
loc_82163BA0:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82162298
	ctx.lr = 0x82163BAC;
	sub_82162298(ctx, base);
loc_82163BAC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82163BB0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82176218) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cac
	ctx.lr = 0x82176220;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f12,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f11,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f9,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f8,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f6,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// fsubs f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// addi r7,r1,-80
	ctx.r7.s64 = ctx.r1.s64 + -80;
	// addi r6,r11,256
	ctx.r6.s64 = ctx.r11.s64 + 256;
	// addi r31,r11,256
	r31.s64 = ctx.r11.s64 + 256;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// mfcr r30
	r30.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r30.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r30.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r30.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r30.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r30.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r30.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r30.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r30.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r30.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r30.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r30.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r30.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r30.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r30.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r30.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r30.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r30.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r30.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r30.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r30.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r30.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r30.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r30.u64 |= ctx.cr5.so ? 0x100 : 0;
	r30.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r30.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r30.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r30.u64 |= ctx.cr6.so ? 0x10 : 0;
	r30.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r30.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r30.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r30.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// mfcr r29
	r29.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r29.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r29.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r29.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r29.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r29.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r29.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r29.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r29.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r29.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r29.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r29.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r29.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r29.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r29.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r29.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r29.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r29.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r29.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r29.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r29.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r29.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r29.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r29.u64 |= ctx.cr5.so ? 0x100 : 0;
	r29.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r29.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r29.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r29.u64 |= ctx.cr6.so ? 0x10 : 0;
	r29.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r29.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r29.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r29.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r27,r30,27,29,29
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x4;
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// rlwinm r30,r30,30,29,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x4;
	// mfcr r28
	r28.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r28.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r28.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r28.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r28.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r28.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r28.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r28.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r28.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r28.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r28.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r28.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r28.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r28.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r28.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r28.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r28.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r28.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r28.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r28.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r28.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r28.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r28.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r28.u64 |= ctx.cr5.so ? 0x100 : 0;
	r28.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r28.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r28.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r28.u64 |= ctx.cr6.so ? 0x10 : 0;
	r28.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r28.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r28.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r28.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r26,r29,27,29,29
	r26.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x4;
	// rlwinm r25,r28,27,29,29
	r25.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 27) & 0x4;
	// or r30,r27,r30
	r30.u64 = r27.u64 | r30.u64;
	// rlwinm r29,r29,30,29,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x4;
	// rlwinm r28,r28,30,29,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x4;
	// or r29,r26,r29
	r29.u64 = r26.u64 | r29.u64;
	// or r28,r25,r28
	r28.u64 = r25.u64 | r28.u64;
	// lfsx f10,r9,r30
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// fsel f13,f10,f13,f12
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// addi r27,r1,-80
	r27.s64 = ctx.r1.s64 + -80;
	// lfsx f7,r10,r29
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f12,r8,r28
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r28.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f11,f7,f11,f9
	ctx.f11.f64 = ctx.f7.f64 >= 0.0 ? ctx.f11.f64 : ctx.f9.f64;
	// fsel f12,f12,f8,f6
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? ctx.f8.f64 : ctx.f6.f64;
	// stfs f11,-76(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// stfs f12,-72(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// ld r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// std r9,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r9.u64);
	// std r10,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r10.u64);
	// lfs f12,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fsubs f6,f12,f13
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f5,f10,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
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
	// rlwinm r7,r10,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
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
	// rlwinm r4,r9,27,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r3,r8,27,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// or r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 | ctx.r8.u64;
	// lfsx f0,r6,r10
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f7,r31,r9
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsel f0,f0,f8,f9
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f8.f64 : ctx.f9.f64;
	// lfsx f9,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsel f13,f7,f12,f13
	ctx.f13.f64 = ctx.f7.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// stfs f0,-80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// fsel f0,f9,f10,f11
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f10.f64 : ctx.f11.f64;
	// stfs f13,-76(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// stfs f0,-72(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// ld r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U64(r27.u32 + 8);
	// ld r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 0);
	// std r11,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// std r10,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r10.u64);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_821915F8) {
	REX_FUNC_PROLOGUE();
	// lbz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82191600) {
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
	// bl 0x821911f8
	ctx.lr = 0x82191620;
	sub_821911F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-31980
	ctx.r11.s64 = ctx.r11.s64 + -31980;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// stb r11,40(r31)
	REX_STORE_U8(r31.u32 + 40, ctx.r11.u8);
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// stb r11,41(r31)
	REX_STORE_U8(r31.u32 + 41, ctx.r11.u8);
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
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

DEFINE_REX_FUNC(sub_82193E80) {
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
	ctx.lr = 0x82193E88;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,12(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82193EB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwa r9,16(r11)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 16));
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwa r11,12(r11)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 12));
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r10,164(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 164);
	// frsp f31,f13
	f31.f64 = double(float(ctx.f13.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// frsp f30,f0
	f30.f64 = double(float(ctx.f0.f64));
	// bctrl 
	ctx.lr = 0x82193EFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82193F14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82193F2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82193F44;
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
	ctx.lr = 0x82193F64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82193F88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82193FA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 / f31.f64));
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f10,f0,f30
	ctx.f10.f64 = double(float(ctx.f0.f64 / f30.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f12,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fadds f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f10,172(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219403C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r7,20
	ctx.r7.s64 = 20;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194060;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194074;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219408C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821940A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821940BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821940D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821A4720) {
	REX_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// b 0x821a3910
	sub_821A3910(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A4CA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823fc860
	ctx.lr = 0x821A4CBC;
	sub_823FC860(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A4CCC:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821a4ccc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A4CCC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x823fbf60
	ctx.lr = 0x821A4CE8;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A4CF8:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821a4cf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A4CF8;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r9,r31,-8
	ctx.r9.s64 = r31.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A4D14:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821a4d14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A4D14;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A8638) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// addi r8,r11,16592
	ctx.r8.s64 = ctx.r11.s64 + 16592;
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lfs f0,172(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// lfs f13,596(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// std r10,96(r3)
	REX_STORE_U64(ctx.r3.u32 + 96, ctx.r10.u64);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// std r9,104(r3)
	REX_STORE_U64(ctx.r3.u32 + 104, ctx.r9.u64);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// ld r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// lfs f0,15048(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// std r9,112(r3)
	REX_STORE_U64(ctx.r3.u32 + 112, ctx.r9.u64);
	// std r8,120(r3)
	REX_STORE_U64(ctx.r3.u32 + 120, ctx.r8.u64);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stw r11,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AC318) {
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
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x821AC330;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821ac36c
	if (ctx.cr0.eq) goto loc_821AC36C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178268
	ctx.lr = 0x821AC344;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// addi r10,r10,-24072
	ctx.r10.s64 = ctx.r10.s64 + -24072;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// bl 0x8212cf70
	ctx.lr = 0x821AC364;
	sub_8212CF70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x821ac370
	goto loc_821AC370;
loc_821AC36C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AC370:
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

DEFINE_REX_FUNC(sub_821AFC20) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15216
	ctx.r3.s64 = ctx.r11.s64 + -15216;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B0418) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
loc_821B0438:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821b0438
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B0438;
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x821884b0
	ctx.lr = 0x821B0454;
	sub_821884B0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B1B14) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B1EE8) {
	REX_FUNC_PROLOGUE();
	// b 0x821b2030
	sub_821B2030(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B2158) {
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
	ctx.lr = 0x821B2160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2c9c
	ctx.lr = 0x821B2168;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b23a0
	if (ctx.cr0.eq) goto loc_821B23A0;
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// lwz r10,112(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r9,r1,216
	ctx.r9.s64 = ctx.r1.s64 + 216;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r28,6096(r8)
	r28.u64 = REX_LOAD_U32(ctx.r8.u32 + 6096);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821B2198:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821b2198
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B2198;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,176
	ctx.r4.s64 = ctx.r11.s64 + 176;
	// bl 0x8218cc20
	ctx.lr = 0x821B21B4;
	sub_8218CC20(ctx, base);
	// li r11,128
	ctx.r11.s64 = 128;
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// li r31,0
	r31.s64 = 0;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
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
loc_821B21E8:
	// addi r29,r31,1
	r29.s64 = r31.s64 + 1;
	// lfs f0,132(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * f31.f64));
	// extsw r10,r29
	ctx.r10.s64 = r29.s32;
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
	ctx.lr = 0x821B2234;
	sub_82139C28(ctx, base);
	// fneg f26,f1
	ctx.fpscr.disableFlushMode();
	f26.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x82135630
	ctx.lr = 0x821B2240;
	sub_82135630(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x82139c28
	ctx.lr = 0x821B224C;
	sub_82139C28(ctx, base);
	// fneg f25,f1
	ctx.fpscr.disableFlushMode();
	f25.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x82135630
	ctx.lr = 0x821B2258;
	sub_82135630(ctx, base);
	// lfs f4,124(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lfs f3,120(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 120);
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
	// lfs f2,128(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 128);
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
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
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
	ctx.lr = 0x821B232C;
	sub_82136F38(ctx, base);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82136f38
	ctx.lr = 0x821B2344;
	sub_82136F38(ctx, base);
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(r31.s32, 16, ctx.xer);
	// bge cr6,0x821b2394
	if (!ctx.cr6.lt) goto loc_821B2394;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82136f38
	ctx.lr = 0x821B2364;
	sub_82136F38(ctx, base);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82136f38
	ctx.lr = 0x821B237C;
	sub_82136F38(ctx, base);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82136f38
	ctx.lr = 0x821B2394;
	sub_82136F38(ctx, base);
loc_821B2394:
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(r29.s32, 16, ctx.xer);
	// ble cr6,0x821b21e8
	if (!ctx.cr6.gt) goto loc_821B21E8;
loc_821B23A0:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2ce8
	ctx.lr = 0x821B23AC;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821C5160) {
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
	// lbz r11,884(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 884);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c51f8
	if (ctx.cr0.eq) goto loc_821C51F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r3,824
	ctx.r4.s64 = ctx.r3.s64 + 824;
	// stb r11,884(r3)
	REX_STORE_U8(ctx.r3.u32 + 884, ctx.r11.u8);
	// lwz r11,844(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 844);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821c51a0
	if (ctx.cr6.lt) goto loc_821C51A0;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_821C51A0:
	// lis r31,-32106
	r31.s64 = -2104098816;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,6184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6184);
	// bl 0x82150fc0
	ctx.lr = 0x821C51B0;
	sub_82150FC0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x821c51f8
	if (ctx.cr0.eq) goto loc_821C51F8;
	// lwz r3,6184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6184);
	// bl 0x82151118
	ctx.lr = 0x821C51C0;
	sub_82151118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821c51f8
	if (ctx.cr0.eq) goto loc_821C51F8;
	// lwz r3,124(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C51E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,124(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C51F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C51F8:
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

DEFINE_REX_FUNC(sub_821CA0F0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14764
	ctx.r3.s64 = ctx.r11.s64 + -14764;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CA430) {
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
	ctx.lr = 0x821CA444;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ca454
	if (ctx.cr0.eq) goto loc_821CA454;
	// bl 0x821ca468
	ctx.lr = 0x821CA450;
	sub_821CA468(ctx, base);
	// b 0x821ca458
	goto loc_821CA458;
loc_821CA454:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821CA458:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CCC78) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r11,-10000
	ctx.r11.s64 = -10000;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r31,0
	r31.s64 = 0;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r11,-2602
	ctx.r11.s64 = -2602;
	// li r8,200
	ctx.r8.s64 = 200;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r9,831
	ctx.r9.s64 = 831;
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,624(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r8,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r9,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// lfs f11,628(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// lfs f10,632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 632);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,636(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 636);
	ctx.f9.f64 = double(temp.f32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lfs f8,640(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 640);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-16132(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -16132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,644(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 644);
	ctx.f7.f64 = double(temp.f32);
	// lwz r11,6100(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 6100);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f9,176(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f8,180(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f7,184(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CCD78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

DEFINE_REX_FUNC(sub_821D7F08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821D7F10;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821626c0
	ctx.lr = 0x821D7F2C;
	sub_821626C0(ctx, base);
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821d7fa4
	goto loc_821D7FA4;
loc_821D7F38:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x821a5c28
	ctx.lr = 0x821D7F4C;
	sub_821A5C28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82125c20
	ctx.lr = 0x821D7F6C;
	sub_82125C20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// bl 0x82125c98
	ctx.lr = 0x821D7F7C;
	sub_82125C98(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// lbz r10,1(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 1);
	// lbz r9,2(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 2);
	// lbz r8,3(r29)
	ctx.r8.u64 = REX_LOAD_U8(r29.u32 + 3);
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r10,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// stb r9,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// stb r8,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r8.u8);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
loc_821D7FA4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d7f38
	if (!ctx.cr6.eq) goto loc_821D7F38;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821DC170) {
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
	ctx.lr = 0x821DC178;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r9,84(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r8,88(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r24,r11,12104
	r24.s64 = ctx.r11.s64 + 12104;
	// lwz r27,100(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r31,r3,84
	r31.s64 = ctx.r3.s64 + 84;
	// addi r23,r10,12092
	r23.s64 = ctx.r10.s64 + 12092;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821dc268
	if (!ctx.cr6.lt) goto loc_821DC268;
	// rlwinm r29,r27,2,0,29
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_821DC1B4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f270
	ctx.lr = 0x821DC1BC;
	sub_8215F270(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82178a50
	ctx.lr = 0x821DC1D8;
	sub_82178A50(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x821DC1E8;
	sub_8215F670(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821dc1fc
	if (ctx.cr6.lt) goto loc_821DC1FC;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x821dc200
	goto loc_821DC200;
loc_821DC1FC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_821DC200:
	// bl 0x8215fbf8
	ctx.lr = 0x821DC204;
	sub_8215FBF8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821DC214;
	sub_82120AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// addi r30,r11,12
	r30.s64 = ctx.r11.s64 + 12;
	// bl 0x8215f670
	ctx.lr = 0x821DC22C;
	sub_8215F670(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821dc240
	if (ctx.cr6.lt) goto loc_821DC240;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x821dc244
	goto loc_821DC244;
loc_821DC240:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_821DC244:
	// bl 0x8215fbf8
	ctx.lr = 0x821DC248;
	sub_8215FBF8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821dc1b4
	if (ctx.cr6.lt) goto loc_821DC1B4;
loc_821DC268:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r28,0
	r28.s64 = 0;
	// addi r25,r11,-26856
	r25.s64 = ctx.r11.s64 + -26856;
loc_821DC274:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821dc298
	if (!ctx.cr6.eq) goto loc_821DC298;
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
	// b 0x821dc29c
	goto loc_821DC29C;
loc_821DC298:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821DC29C:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821dc4a4
	if (!ctx.cr6.lt) goto loc_821DC4A4;
	// addi r27,r28,1
	r27.s64 = r28.s64 + 1;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_821DC2AC:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821dc2d0
	if (!ctx.cr6.eq) goto loc_821DC2D0;
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
	// b 0x821dc2d4
	goto loc_821DC2D4;
loc_821DC2D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821DC2D4:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821dc49c
	if (!ctx.cr6.lt) goto loc_821DC49C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f200
	ctx.lr = 0x821DC2E8;
	sub_8215F200(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8215f670
	ctx.lr = 0x821DC2F0;
	sub_8215F670(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821dc31c
	if (!ctx.cr6.eq) goto loc_821DC31C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821dc314
	if (ctx.cr6.lt) goto loc_821DC314;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821dc320
	goto loc_821DC320;
loc_821DC314:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// b 0x821dc320
	goto loc_821DC320;
loc_821DC31C:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_821DC320:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f200
	ctx.lr = 0x821DC32C;
	sub_8215F200(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8215f670
	ctx.lr = 0x821DC334;
	sub_8215F670(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821dc358
	if (!ctx.cr6.eq) goto loc_821DC358;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821dc35c
	if (ctx.cr6.lt) goto loc_821DC35C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821dc35c
	goto loc_821DC35C;
loc_821DC358:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821DC35C:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_821DC360:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r30,r8,r9
	r30.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821dc384
	if (ctx.cr0.eq) goto loc_821DC384;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x821dc360
	if (ctx.cr6.eq) goto loc_821DC360;
loc_821DC384:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f200
	ctx.lr = 0x821DC390;
	sub_8215F200(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8215f670
	ctx.lr = 0x821DC398;
	sub_8215F670(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821dc3c4
	if (!ctx.cr6.eq) goto loc_821DC3C4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821dc3bc
	if (ctx.cr6.lt) goto loc_821DC3BC;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821dc3c8
	goto loc_821DC3C8;
loc_821DC3BC:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// b 0x821dc3c8
	goto loc_821DC3C8;
loc_821DC3C4:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_821DC3C8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f200
	ctx.lr = 0x821DC3D4;
	sub_8215F200(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8215f670
	ctx.lr = 0x821DC3DC;
	sub_8215F670(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821dc400
	if (!ctx.cr6.eq) goto loc_821DC400;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821dc404
	if (ctx.cr6.lt) goto loc_821DC404;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821dc404
	goto loc_821DC404;
loc_821DC400:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821DC404:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_821DC408:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821dc42c
	if (ctx.cr0.eq) goto loc_821DC42C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821dc408
	if (ctx.cr6.eq) goto loc_821DC408;
loc_821DC42C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bgt cr6,0x821dc440
	if (ctx.cr6.gt) goto loc_821DC440;
	// bne cr6,0x821dc494
	if (!ctx.cr6.eq) goto loc_821DC494;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821dc494
	if (!ctx.cr6.gt) goto loc_821DC494;
loc_821DC440:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f200
	ctx.lr = 0x821DC44C;
	sub_8215F200(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f200
	ctx.lr = 0x821DC45C;
	sub_8215F200(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215efb0
	ctx.lr = 0x821DC474;
	sub_8215EFB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215efb0
	ctx.lr = 0x821DC480;
	sub_8215EFB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215efb0
	ctx.lr = 0x821DC48C;
	sub_8215EFB0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x821DC494;
	sub_8215F0F0(ctx, base);
loc_821DC494:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x821dc2ac
	goto loc_821DC2AC;
loc_821DC49C:
	// mr r28,r27
	r28.u64 = r27.u64;
	// b 0x821dc274
	goto loc_821DC274;
loc_821DC4A4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_821F53D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821F53E0;
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
	// beq cr6,0x821f5414
	if (ctx.cr6.eq) goto loc_821F5414;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,22816
	ctx.r4.s64 = ctx.r11.s64 + 22816;
	// addi r3,r10,22864
	ctx.r3.s64 = ctx.r10.s64 + 22864;
	// li r5,333
	ctx.r5.s64 = 333;
	// bl 0x821231d0
	ctx.lr = 0x821F5414;
	sub_821231D0(ctx, base);
loc_821F5414:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x821F5428;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17264
	ctx.r4.s64 = ctx.r11.s64 + -17264;
	// bl 0x8215f338
	ctx.lr = 0x821F5434;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x821f6130
	ctx.lr = 0x821F5440;
	sub_821F6130(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821F7D70) {
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
	ctx.lr = 0x821F7D94;
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
	ctx.lr = 0x821F7DAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6264(r10)
	REX_STORE_U32(ctx.r10.u32 + 6264, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821FA9F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821FAA00;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,24920
	ctx.r4.s64 = ctx.r11.s64 + 24920;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x8215f338
	ctx.lr = 0x821FAA24;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821FAA28;
	sub_8215F990(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,24892
	ctx.r4.s64 = ctx.r11.s64 + 24892;
	// bl 0x8215f338
	ctx.lr = 0x821FAA3C;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821FAA40;
	sub_8215F990(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,24864
	ctx.r4.s64 = ctx.r11.s64 + 24864;
	// bl 0x8215f338
	ctx.lr = 0x821FAA54;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821FAA58;
	sub_8215F990(ctx, base);
	// stw r3,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821FC3A0) {
	REX_FUNC_PROLOGUE();
	// lbz r3,40(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 40);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FC5D8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,168(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// mulli r11,r4,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(56));
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FCDA8) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,6100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6100);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FCDE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821fce00
	if (!ctx.cr0.eq) goto loc_821FCE00;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FCE00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FCE00:
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

DEFINE_REX_FUNC(sub_82200600) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
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

DEFINE_REX_FUNC(sub_82200B80) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6288(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6288);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82201CE0) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c90
	ctx.lr = 0x82201CE8;
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// li r21,0
	r21.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82201e44
	if (!ctx.cr6.gt) goto loc_82201E44;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r23,0
	r23.s64 = 0;
	// addi r20,r10,-25252
	r20.s64 = ctx.r10.s64 + -25252;
	// lfs f31,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f31.f64 = double(temp.f32);
	// addi r19,r11,-25320
	r19.s64 = ctx.r11.s64 + -25320;
loc_82201D28:
	// lwz r11,44(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 44);
	// lwzx r11,r23,r11
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + ctx.r11.u32);
	// lwz r27,128(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82201D48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82201e30
	if (!ctx.cr6.gt) goto loc_82201E30;
	// mr r25,r18
	r25.u64 = r18.u64;
loc_82201D5C:
	// lwz r28,0(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82201dc4
	if (ctx.cr6.eq) goto loc_82201DC4;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82201dc4
	if (!ctx.cr6.gt) goto loc_82201DC4;
	// li r29,0
	r29.s64 = 0;
loc_82201D7C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x82201d90
	if (ctx.cr6.lt) goto loc_82201D90;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82201da0
	if (ctx.cr6.lt) goto loc_82201DA0;
loc_82201D90:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x82201DA0;
	sub_821231D0(ctx, base);
loc_82201DA0:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// beq cr6,0x82201e14
	if (ctx.cr6.eq) goto loc_82201E14;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82201d7c
	if (ctx.cr6.lt) goto loc_82201D7C;
loc_82201DC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82201DC8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82201e00
	if (ctx.cr0.eq) goto loc_82201E00;
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
	ctx.lr = 0x82201DE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, ctx.xer);
	// beq cr6,0x82201e00
	if (ctx.cr6.eq) goto loc_82201E00;
	// lfs f0,192(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82201e1c
	if (!ctx.cr6.gt) goto loc_82201E1C;
loc_82201E00:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmpw cr6,r26,r22
	ctx.cr6.compare<int32_t>(r26.s32, r22.s32, ctx.xer);
	// blt cr6,0x82201d5c
	if (ctx.cr6.lt) goto loc_82201D5C;
	// b 0x82201e30
	goto loc_82201E30;
loc_82201E14:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82201dc8
	goto loc_82201DC8;
loc_82201E1C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82201E30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82201E30:
	// lwz r11,36(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 36);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82201d28
	if (ctx.cr6.lt) goto loc_82201D28;
loc_82201E44:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_8220A9F8) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_8220BB20) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14364
	ctx.r3.s64 = ctx.r11.s64 + -14364;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220BF60) {
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
	// lwz r4,112(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 112);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6280(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6280);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220BF90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_8220D9C0) {
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
	// li r3,300
	ctx.r3.s64 = 300;
	// bl 0x822f6280
	ctx.lr = 0x8220D9D4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220d9e4
	if (ctx.cr0.eq) goto loc_8220D9E4;
	// bl 0x8220d9f8
	ctx.lr = 0x8220D9E0;
	sub_8220D9F8(ctx, base);
	// b 0x8220d9e8
	goto loc_8220D9E8;
loc_8220D9E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220D9E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220F410) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14164
	ctx.r3.s64 = ctx.r11.s64 + -14164;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220F6F0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14148
	ctx.r3.s64 = ctx.r11.s64 + -14148;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220FC90) {
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
	// li r3,288
	ctx.r3.s64 = 288;
	// bl 0x822f6280
	ctx.lr = 0x8220FCA8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8220fd24
	if (ctx.cr0.eq) goto loc_8220FD24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e8048
	ctx.lr = 0x8220FCB8;
	sub_822E8048(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-29740
	ctx.r11.s64 = ctx.r11.s64 + -29740;
	// addi r4,r10,-31184
	ctx.r4.s64 = ctx.r10.s64 + -31184;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,260
	ctx.r3.s64 = r31.s64 + 260;
	// bl 0x82120600
	ctx.lr = 0x8220FCD4;
	sub_82120600(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x8220FCDC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220fd08
	if (ctx.cr0.eq) goto loc_8220FD08;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-1184
	ctx.r10.s64 = ctx.r10.s64 + -1184;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8220fd0c
	goto loc_8220FD0C;
loc_8220FD08:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8220FD0C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r5,r11,-29816
	ctx.r5.s64 = ctx.r11.s64 + -29816;
	// bl 0x8216be80
	ctx.lr = 0x8220FD1C;
	sub_8216BE80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8220fd28
	goto loc_8220FD28;
loc_8220FD24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220FD28:
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

DEFINE_REX_FUNC(sub_82216088) {
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
	ctx.lr = 0x82216090;
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f29.u64);
	// stfd f30,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f30.u64);
	// stfd f31,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f12,288(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f11,292(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f11.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,428(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r11,-27460
	ctx.r6.s64 = ctx.r11.s64 + -27460;
	// lfs f13,432(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 432);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// lfs f12,436(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 436);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,440(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 440);
	ctx.f11.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r3,444
	ctx.r5.s64 = ctx.r3.s64 + 444;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r3,288
	r29.s64 = ctx.r3.s64 + 288;
	// bl 0x82215f60
	ctx.lr = 0x822160F8;
	sub_82215F60(ctx, base);
	// lfs f13,288(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,536(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 536);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,540(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 540);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,544(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 544);
	ctx.f11.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r11,16528
	ctx.r6.s64 = ctx.r11.s64 + 16528;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r31,552
	ctx.r5.s64 = r31.s64 + 552;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,292(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f12,548(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 548);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82215f60
	ctx.lr = 0x8221614C;
	sub_82215F60(ctx, base);
	// lfs f13,288(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,320(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,324(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,328(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 328);
	ctx.f11.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r11,-27452
	ctx.r6.s64 = ctx.r11.s64 + -27452;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r31,336
	ctx.r5.s64 = r31.s64 + 336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,292(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f12,332(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 332);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82215f60
	ctx.lr = 0x822161A0;
	sub_82215F60(ctx, base);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lfs f0,644(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 644);
	ctx.f0.f64 = double(temp.f32);
	// addi r19,r31,280
	r19.s64 = r31.s64 + 280;
	// lfs f13,288(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,648(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 648);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,652(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 652);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r31,308
	ctx.r5.s64 = r31.s64 + 308;
	// lwz r3,6096(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6096);
	// lfs f10,656(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 656);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,280(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 280);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f8,284(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 284);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,292(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// addi r20,r11,16592
	r20.s64 = ctx.r11.s64 + 16592;
	// lfs f7,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f29,16592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16592);
	f29.f64 = double(temp.f32);
	// lfs f0,12(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fdivs f8,f0,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// lfs f0,4(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f7,f29,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f7.f64, f29.f64, ctx.f0.f64)));
	// fmuls f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f9,f11
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f8,f10
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82136970
	ctx.lr = 0x82216228;
	sub_82136970(ctx, base);
	// ld r10,288(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 288);
	// lwz r9,296(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 296);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// ble cr6,0x822163a0
	if (!ctx.cr6.gt) goto loc_822163A0;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f30.f64 = double(temp.f32);
	// lfs f31,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f31.f64 = double(temp.f32);
	// addi r28,r31,660
	r28.s64 = r31.s64 + 660;
	// addi r27,r31,768
	r27.s64 = r31.s64 + 768;
	// addi r25,r31,676
	r25.s64 = r31.s64 + 676;
	// addi r22,r31,816
	r22.s64 = r31.s64 + 816;
	// addi r21,r10,-17296
	r21.s64 = ctx.r10.s64 + -17296;
loc_82216260:
	// addi r24,r11,1
	r24.s64 = ctx.r11.s64 + 1;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// lfs f12,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f11,12(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 + ctx.f0.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// rlwinm r26,r11,27,31,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x826a06d8
	ctx.lr = 0x822162A4;
	sub_826A06D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x82215f60
	ctx.lr = 0x822162C4;
	sub_82215F60(ctx, base);
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
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f11,12(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215f60
	ctx.lr = 0x8221630C;
	sub_82215F60(ctx, base);
	// mr r30,r22
	r30.u64 = r22.u64;
	// li r23,2
	r23.s64 = 2;
loc_82216314:
	// lwz r11,-16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221637c
	if (ctx.cr6.eq) goto loc_8221637C;
	// lwz r11,-12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -12);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82216334
	if (ctx.cr6.lt) goto loc_82216334;
	// lwz r6,-32(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + -32);
	// b 0x82216338
	goto loc_82216338;
loc_82216334:
	// addi r6,r30,-32
	ctx.r6.s64 = r30.s64 + -32;
loc_82216338:
	// lfs f0,-4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 + ctx.f13.f64));
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lbz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 12);
	// bl 0x82215f60
	ctx.lr = 0x8221637C;
	sub_82215F60(ctx, base);
loc_8221637C:
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// bne 0x82216314
	if (!ctx.cr0.eq) goto loc_82216314;
	// lwz r10,296(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 296);
	// lfs f0,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82216260
	if (ctx.cr6.lt) goto loc_82216260;
loc_822163A0:
	// lbz r11,880(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 880);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822163cc
	if (ctx.cr0.eq) goto loc_822163CC;
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lfs f0,1552(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r20.u32 + 1552);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,884
	ctx.r3.s64 = r31.s64 + 884;
	// lfs f13,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f13,f29,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, f29.f64, ctx.f0.f64)));
	// bl 0x8226bf68
	ctx.lr = 0x822163CC;
	sub_8226BF68(ctx, base);
loc_822163CC:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
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

DEFINE_REX_FUNC(sub_82235428) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82236c70
	ctx.lr = 0x82235444;
	sub_82236C70(ctx, base);
	// lwz r11,884(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 884);
	// addi r30,r31,884
	r30.s64 = r31.s64 + 884;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822354a4
	if (ctx.cr6.lt) goto loc_822354A4;
	// lwz r11,880(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 880);
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
	ctx.lr = 0x82235478;
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
	ctx.lr = 0x8223548C;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-19272
	ctx.r3.s64 = ctx.r11.s64 + -19272;
	// bl 0x8216bc98
	ctx.lr = 0x8223549C;
	sub_8216BC98(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_822354A4:
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

DEFINE_REX_FUNC(sub_822398C8) {
	REX_FUNC_PROLOGUE();
	// b 0x82279e68
	sub_82279E68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82239E60) {
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
	ctx.lr = 0x82239E68;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x8223a030
	ctx.lr = 0x82239E74;
	sub_8223A030(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,16492
	ctx.r4.s64 = ctx.r11.s64 + 16492;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x82239E88;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-17776
	ctx.r4.s64 = ctx.r11.s64 + -17776;
	// bl 0x8215f338
	ctx.lr = 0x82239E94;
	sub_8215F338(ctx, base);
	// lis r27,-32106
	r27.s64 = -2104098816;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// lwz r3,6284(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6284);
	// bne cr6,0x82239ec4
	if (!ctx.cr6.eq) goto loc_82239EC4;
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	r31.s64 = ctx.r11.s32 >> 4;
	// b 0x82239ec8
	goto loc_82239EC8;
loc_82239EC4:
	// li r31,0
	r31.s64 = 0;
loc_82239EC8:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82239ED8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82239ef8
	if (ctx.cr6.eq) goto loc_82239EF8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-18236
	ctx.r4.s64 = ctx.r11.s64 + -18236;
	// addi r3,r10,-17760
	ctx.r3.s64 = ctx.r10.s64 + -17760;
	// li r5,660
	ctx.r5.s64 = 660;
	// bl 0x821231d0
	ctx.lr = 0x82239EF8;
	sub_821231D0(ctx, base);
loc_82239EF8:
	// lwz r3,3784(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 3784);
	// bl 0x82237098
	ctx.lr = 0x82239F00;
	sub_82237098(ctx, base);
	// lwz r11,6284(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 6284);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82239F20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8223a024
	if (!ctx.cr0.gt) goto loc_8223A024;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r28,0
	r28.s64 = 0;
	// lis r23,-32106
	r23.s64 = -2104098816;
	// addi r24,r11,-20932
	r24.s64 = ctx.r11.s64 + -20932;
loc_82239F38:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8223a024
	if (ctx.cr6.eq) goto loc_8223A024;
	// lwz r8,6284(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 6284);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x8215f1b0
	ctx.lr = 0x82239F54;
	sub_8215F1B0(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82239F58;
	sub_8215F990(ctx, base);
	// lwz r11,56(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 56);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82239F6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82151d50
	ctx.lr = 0x82239F78;
	sub_82151D50(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82151d50
	ctx.lr = 0x82239F84;
	sub_82151D50(ctx, base);
	// addi r5,r29,544
	ctx.r5.s64 = r29.s64 + 544;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r26,32
	ctx.r4.s64 = r26.s64 + 32;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x821efa90
	ctx.lr = 0x82239F9C;
	sub_821EFA90(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82151d50
	ctx.lr = 0x82239FA4;
	sub_82151D50(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821a1f88
	ctx.lr = 0x82239FB0;
	sub_821A1F88(ctx, base);
	// lwz r3,6288(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 6288);
	// lwz r11,3828(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 3828);
	// add r29,r11,r28
	r29.u64 = ctx.r11.u64 + r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82239FCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,228(r29)
	REX_STORE_U32(r29.u32 + 228, ctx.r3.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120600
	ctx.lr = 0x82239FDC;
	sub_82120600(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd0c8
	ctx.lr = 0x82239FE8;
	sub_821DD0C8(ctx, base);
	// bl 0x82237098
	ctx.lr = 0x82239FEC;
	sub_82237098(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8223A000;
	sub_82120AC0(ctx, base);
	// lwz r3,6284(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6284);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,320
	r28.s64 = r28.s64 + 320;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223A01C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82239f38
	if (ctx.cr6.lt) goto loc_82239F38;
loc_8223A024:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_822460B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822460B8;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// bl 0x82178268
	ctx.lr = 0x822460D0;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r29,r30,116
	r29.s64 = r30.s64 + 116;
	// addi r11,r11,-15464
	ctx.r11.s64 = ctx.r11.s64 + -15464;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x822460F0;
	sub_82120AC0(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822460F8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82246164
	if (ctx.cr0.eq) goto loc_82246164;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-28692
	ctx.r4.s64 = ctx.r11.s64 + -28692;
	// bl 0x82120600
	ctx.lr = 0x82246110;
	sub_82120600(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r28,1
	r28.s64 = 1;
	// lwz r4,-15376(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15376);
	// bl 0x82120600
	ctx.lr = 0x82246124;
	sub_82120600(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d58c8
	ctx.lr = 0x82246138;
	sub_821D58C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x82246148;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-17592
	ctx.r9.s64 = ctx.r11.s64 + -17592;
	// stw r10,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// b 0x82246168
	goto loc_82246168;
loc_82246164:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82246168:
	// stw r11,144(r30)
	REX_STORE_U32(r30.u32 + 144, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x8224617C;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82246194
	if (ctx.cr0.eq) goto loc_82246194;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x82246194;
	sub_82120AC0(ctx, base);
loc_82246194:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x8224619C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822461bc
	if (ctx.cr0.eq) goto loc_822461BC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821dc550
	ctx.lr = 0x822461B4;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822461c0
	goto loc_822461C0;
loc_822461BC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822461C0:
	// stw r4,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r4.u32);
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x822461CC;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822461D4;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82246254
	if (ctx.cr0.eq) goto loc_82246254;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8216b9a8
	ctx.lr = 0x822461EC;
	sub_8216B9A8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-22996
	ctx.r4.s64 = ctx.r11.s64 + -22996;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82246204;
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
	ctx.lr = 0x82246218;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82246244
	if (ctx.cr0.eq) goto loc_82246244;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,25312
	ctx.r10.s64 = ctx.r10.s64 + 25312;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82246248
	goto loc_82246248;
loc_82246244:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82246248:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x82246258
	goto loc_82246258;
loc_82246254:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82246258:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82246270;
	sub_82264568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82252528) {
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
	ctx.lr = 0x82252530;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// addi r28,r3,16
	r28.s64 = ctx.r3.s64 + 16;
	// li r3,848
	ctx.r3.s64 = 848;
	// stb r27,8(r31)
	REX_STORE_U8(r31.u32 + 8, r27.u8);
	// stb r27,16(r31)
	REX_STORE_U8(r31.u32 + 16, r27.u8);
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// stb r29,24(r31)
	REX_STORE_U8(r31.u32 + 24, r29.u8);
	// bl 0x822f6280
	ctx.lr = 0x82252560;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82252570
	if (ctx.cr0.eq) goto loc_82252570;
	// bl 0x82252a88
	ctx.lr = 0x8225256C;
	sub_82252A88(ctx, base);
	// b 0x82252574
	goto loc_82252574;
loc_82252570:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82252574:
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6056(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6056);
	// bl 0x8212d668
	ctx.lr = 0x82252588;
	sub_8212D668(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,6100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6100);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822525A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-11700
	ctx.r4.s64 = ctx.r11.s64 + -11700;
	// bl 0x82120600
	ctx.lr = 0x822525B8;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6260(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6260);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822525D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x822525E8;
	sub_82120AC0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822525f8
	if (ctx.cr6.eq) goto loc_822525F8;
	// bl 0x82179f70
	ctx.lr = 0x822525F8;
	sub_82179F70(ctx, base);
loc_822525F8:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6288(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6288);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82252610;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,6048(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x82252620;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225264c
	if (ctx.cr0.eq) goto loc_8225264C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,10192
	ctx.r10.s64 = ctx.r10.s64 + 10192;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82252650
	goto loc_82252650;
loc_8225264C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82252650:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r10,-23856
	ctx.r5.s64 = ctx.r10.s64 + -23856;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225266C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lbz r10,25(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822526ac
	if (!ctx.cr0.eq) goto loc_822526AC;
	// stb r27,24(r31)
	REX_STORE_U8(r31.u32 + 24, r27.u8);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stb r27,25(r11)
	REX_STORE_U8(ctx.r11.u32 + 25, r27.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r9,-11680
	ctx.r4.s64 = ctx.r9.s64 + -11680;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// bl 0x821ea0e0
	ctx.lr = 0x82252698;
	sub_821EA0E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822526b4
	if (ctx.cr0.eq) goto loc_822526B4;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x822fbe20
	ctx.lr = 0x822526A8;
	sub_822FBE20(ctx, base);
	// b 0x822526b4
	goto loc_822526B4;
loc_822526AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82252988
	ctx.lr = 0x822526B4;
	sub_82252988(ctx, base);
loc_822526B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8225B080) {
	REX_FUNC_PROLOGUE();
	// lwz r11,160(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,52(r11)
	REX_STORE_U8(ctx.r11.u32 + 52, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225BE30) {
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
	ctx.lr = 0x8225BE38;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r29,1573(r3)
	REX_STORE_U8(ctx.r3.u32 + 1573, r29.u8);
	// bl 0x822626a8
	ctx.lr = 0x8225BE4C;
	sub_822626A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8404
	ctx.r4.s64 = ctx.r11.s64 + -8404;
	// bl 0x82120600
	ctx.lr = 0x8225BE5C;
	sub_82120600(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82262608
	ctx.lr = 0x8225BE68;
	sub_82262608(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8225BE78;
	sub_82120AC0(ctx, base);
	// addi r3,r31,1572
	ctx.r3.s64 = r31.s64 + 1572;
	// bl 0x82270580
	ctx.lr = 0x8225BE80;
	sub_82270580(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82270690
	ctx.lr = 0x8225BE88;
	sub_82270690(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r26,r31,192
	r26.s64 = r31.s64 + 192;
	// addi r11,r31,281
	ctx.r11.s64 = r31.s64 + 281;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8225BE98:
	// lbz r10,-1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8225bea8
	if (ctx.cr0.eq) goto loc_8225BEA8;
	// stb r29,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r29.u8);
loc_8225BEA8:
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// bdnz 0x8225be98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8225BE98;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r29
	r30.u64 = r29.u64;
	// stb r11,1528(r31)
	REX_STORE_U8(r31.u32 + 1528, ctx.r11.u8);
	// lis r28,-32106
	r28.s64 = -2104098816;
	// stb r11,1529(r31)
	REX_STORE_U8(r31.u32 + 1529, ctx.r11.u8);
loc_8225BEC4:
	// lwz r3,6152(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225BED8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x8227d560
	ctx.lr = 0x8225BEE8;
	sub_8227D560(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// blt cr6,0x8225bec4
	if (ctx.cr6.lt) goto loc_8225BEC4;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6156(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6156);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225BF0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 272);
	// li r27,-1
	r27.s64 = -1;
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8225bf90
	if (!ctx.cr6.gt) goto loc_8225BF90;
loc_8225BF20:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8228c340
	ctx.lr = 0x8225BF2C;
	sub_8228C340(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225BF44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225bf80
	if (ctx.cr0.eq) goto loc_8225BF80;
	// stb r29,101(r30)
	REX_STORE_U8(r30.u32 + 101, r29.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r29,100(r30)
	REX_STORE_U8(r30.u32 + 100, r29.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r29,98(r30)
	REX_STORE_U8(r30.u32 + 98, r29.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r29,99(r30)
	REX_STORE_U8(r30.u32 + 99, r29.u8);
	// stb r29,102(r30)
	REX_STORE_U8(r30.u32 + 102, r29.u8);
	// stb r29,103(r30)
	REX_STORE_U8(r30.u32 + 103, r29.u8);
	// stb r29,104(r30)
	REX_STORE_U8(r30.u32 + 104, r29.u8);
	// stw r27,112(r30)
	REX_STORE_U32(r30.u32 + 112, r27.u32);
	// lwz r3,128(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 128);
	// bl 0x8227d560
	ctx.lr = 0x8225BF80;
	sub_8227D560(ctx, base);
loc_8225BF80:
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 272);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8225bf20
	if (ctx.cr6.lt) goto loc_8225BF20;
loc_8225BF90:
	// std r27,1576(r31)
	REX_STORE_U64(r31.u32 + 1576, r27.u64);
	// std r27,1584(r31)
	REX_STORE_U64(r31.u32 + 1584, r27.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82266A58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82266A7C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82266A8C;
	sub_82120AC0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82266160
	ctx.lr = 0x82266A9C;
	sub_82266160(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82266b34
	if (ctx.cr0.eq) goto loc_82266B34;
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
	ctx.lr = 0x82266ABC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82266AE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq 0x82266b14
	if (ctx.cr0.eq) goto loc_82266B14;
	// bl 0x82120ac0
	ctx.lr = 0x82266AF8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82266B08;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26856
	ctx.r3.s64 = ctx.r11.s64 + -26856;
	// b 0x82266b5c
	goto loc_82266B5C;
loc_82266B14:
	// bl 0x82120ac0
	ctx.lr = 0x82266B18;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82266B28;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,30216
	ctx.r3.s64 = ctx.r11.s64 + 30216;
	// b 0x82266b5c
	goto loc_82266B5C;
loc_82266B34:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82266B44;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82266B54;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,30512
	ctx.r3.s64 = ctx.r11.s64 + 30512;
loc_82266B5C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8226E158) {
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
	ctx.lr = 0x8226E160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,16568
	ctx.r4.s64 = ctx.r11.s64 + 16568;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// bl 0x82125d00
	ctx.lr = 0x8226E184;
	sub_82125D00(ctx, base);
	// lis r27,-32106
	r27.s64 = -2104098816;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r3,6256(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6256);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bne 0x8226e224
	if (!ctx.cr0.eq) goto loc_8226E224;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x8226e204
	goto loc_8226E204;
loc_8226E1AC:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// bl 0x8226e028
	ctx.lr = 0x8226E1C0;
	sub_8226E028(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226e29c
	if (ctx.cr0.eq) goto loc_8226E29C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8212fcf0
	ctx.lr = 0x8226E1D8;
	sub_8212FCF0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x8228ca78
	ctx.lr = 0x8226E1E8;
	sub_8228CA78(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lwz r3,6256(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6256);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_8226E204:
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226E218;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226e1ac
	if (!ctx.cr0.eq) goto loc_8226E1AC;
	// b 0x8226e29c
	goto loc_8226E29C;
loc_8226E224:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8226e284
	goto loc_8226E284;
loc_8226E22C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// bl 0x8226e028
	ctx.lr = 0x8226E240;
	sub_8226E028(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226e29c
	if (ctx.cr0.eq) goto loc_8226E29C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8212fcf0
	ctx.lr = 0x8226E258;
	sub_8212FCF0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x8228ca78
	ctx.lr = 0x8226E268;
	sub_8228CA78(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lwz r3,6256(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6256);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_8226E284:
	// lwz r11,148(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226E294;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226e22c
	if (!ctx.cr0.eq) goto loc_8226E22C;
loc_8226E29C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82275958) {
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
	ctx.lr = 0x82275960;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,656(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 656);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r4,r3,752
	ctx.r4.s64 = ctx.r3.s64 + 752;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x823fbd18
	ctx.lr = 0x82275990;
	sub_823FBD18(ctx, base);
	// ld r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r8,16592
	ctx.r8.s64 = ctx.r8.s64 + 16592;
	// std r7,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r6,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r11,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r11.u64);
	// lfs f12,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,656(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 656);
	// lfs f0,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
	// lfs f0,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// lfs f10,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r10,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r10.u64);
	// std r11,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r11.u64);
	// lwz r11,656(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 656);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// ld r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// std r10,0(r28)
	REX_STORE_U64(r28.u32 + 0, ctx.r10.u64);
	// ld r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// std r11,8(r28)
	REX_STORE_U64(r28.u32 + 8, ctx.r11.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8227D690) {
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
	ctx.lr = 0x8227D698;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-608
	r29.s64 = ctx.r11.s64 + -608;
	// bne cr6,0x8227d6d0
	if (!ctx.cr6.eq) goto loc_8227D6D0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,30052
	ctx.r3.s64 = ctx.r11.s64 + 30052;
	// li r5,172
	ctx.r5.s64 = 172;
	// bl 0x821231d0
	ctx.lr = 0x8227D6D0;
	sub_821231D0(ctx, base);
loc_8227D6D0:
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(r30.u32, 6, ctx.xer);
	// bge cr6,0x8227d6ec
	if (!ctx.cr6.lt) goto loc_8227D6EC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,30080
	ctx.r3.s64 = ctx.r11.s64 + 30080;
	// li r5,173
	ctx.r5.s64 = 173;
	// bl 0x821231d0
	ctx.lr = 0x8227D6EC;
	sub_821231D0(ctx, base);
loc_8227D6EC:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,32775
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32775, ctx.xer);
	// beq cr6,0x8227d70c
	if (ctx.cr6.eq) goto loc_8227D70C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// li r5,177
	ctx.r5.s64 = 177;
	// bl 0x821231d0
	ctx.lr = 0x8227D70C;
	sub_821231D0(ctx, base);
loc_8227D70C:
	// lwz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// bl 0x8215d3f0
	ctx.lr = 0x8227D71C;
	sub_8215D3F0(ctx, base);
	// addi r6,r30,-6
	ctx.r6.s64 = r30.s64 + -6;
	// addi r5,r31,6
	ctx.r5.s64 = r31.s64 + 6;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215d448
	ctx.lr = 0x8227D730;
	sub_8215D448(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227d758
	if (!ctx.cr0.eq) goto loc_8227D758;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8227D740;
	sub_8215F0F0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-540
	ctx.r4.s64 = ctx.r11.s64 + -540;
	// addi r3,r10,-416
	ctx.r3.s64 = ctx.r10.s64 + -416;
	// li r5,446
	ctx.r5.s64 = 446;
	// bl 0x821231d0
	ctx.lr = 0x8227D758;
	sub_821231D0(ctx, base);
loc_8227D758:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82125438
	ctx.lr = 0x8227D760;
	sub_82125438(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82284458) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x82284460;
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lbz r10,104(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 104);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,1
	r29.s64 = 1;
	// lfs f30,-16132(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -16132);
	f30.f64 = double(temp.f32);
	// li r28,0
	r28.s64 = 0;
	// lfs f31,1108(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1108);
	f31.f64 = double(temp.f32);
	// lbz r10,656(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 656);
	// bne 0x822844dc
	if (!ctx.cr0.eq) goto loc_822844DC;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822844bc
	if (!ctx.cr0.eq) goto loc_822844BC;
	// lfs f0,608(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 608);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82284500
	if (!ctx.cr6.gt) goto loc_82284500;
loc_822844BC:
	// stb r29,104(r31)
	REX_STORE_U8(r31.u32 + 104, r29.u8);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x82285000
	ctx.lr = 0x822844C8;
	sub_82285000(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8224cae0
	ctx.lr = 0x822844D8;
	sub_8224CAE0(ctx, base);
	// b 0x82284500
	goto loc_82284500;
loc_822844DC:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82284500
	if (!ctx.cr0.eq) goto loc_82284500;
	// lfs f0,608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 608);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82284500
	if (!ctx.cr6.lt) goto loc_82284500;
	// stb r28,104(r31)
	REX_STORE_U8(r31.u32 + 104, r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x82285058
	ctx.lr = 0x82284500;
	sub_82285058(ctx, base);
loc_82284500:
	// lbz r11,105(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 105);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbz r10,656(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 656);
	// bne 0x82284580
	if (!ctx.cr0.eq) goto loc_82284580;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82284528
	if (!ctx.cr0.eq) goto loc_82284528;
	// lfs f0,608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 608);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x822845ec
	if (!ctx.cr6.gt) goto loc_822845EC;
loc_82284528:
	// lwz r11,468(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// addi r8,r11,320
	ctx.r8.s64 = ctx.r11.s64 + 320;
	// ld r8,320(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 320);
	// ld r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 328);
	// lfs f0,-13148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -13148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// std r8,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
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
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x822845ec
	if (!ctx.cr6.lt) goto loc_822845EC;
	// stb r29,105(r31)
	REX_STORE_U8(r31.u32 + 105, r29.u8);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82285000
	ctx.lr = 0x8228457C;
	sub_82285000(ctx, base);
	// b 0x822845ec
	goto loc_822845EC;
loc_82284580:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82284594
	if (!ctx.cr0.eq) goto loc_82284594;
	// lfs f0,608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 608);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// blt cr6,0x822845dc
	if (ctx.cr6.lt) goto loc_822845DC;
loc_82284594:
	// lwz r11,468(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r8,r11,320
	ctx.r8.s64 = ctx.r11.s64 + 320;
	// ld r8,320(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 320);
	// ld r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 328);
	// lfs f0,-13144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -13144);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// std r8,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x822845ec
	if (!ctx.cr6.gt) goto loc_822845EC;
loc_822845DC:
	// stb r28,105(r31)
	REX_STORE_U8(r31.u32 + 105, r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82285058
	ctx.lr = 0x822845EC;
	sub_82285058(ctx, base);
loc_822845EC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lbz r10,106(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 106);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// bne 0x82284630
	if (!ctx.cr0.eq) goto loc_82284630;
	// bl 0x8224c7c8
	ctx.lr = 0x82284608;
	sub_8224C7C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228464c
	if (ctx.cr0.eq) goto loc_8228464C;
	// stb r29,106(r31)
	REX_STORE_U8(r31.u32 + 106, r29.u8);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x82285000
	ctx.lr = 0x8228461C;
	sub_82285000(ctx, base);
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x8224cae0
	ctx.lr = 0x8228462C;
	sub_8224CAE0(ctx, base);
	// b 0x8228464c
	goto loc_8228464C;
loc_82284630:
	// bl 0x8224c7c8
	ctx.lr = 0x82284634;
	sub_8224C7C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228464c
	if (!ctx.cr0.eq) goto loc_8228464C;
	// stb r28,106(r31)
	REX_STORE_U8(r31.u32 + 106, r28.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x82285058
	ctx.lr = 0x8228464C;
	sub_82285058(ctx, base);
loc_8228464C:
	// lbz r11,107(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 107);
	// lfs f30,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 60);
	f30.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,684(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 684);
	ctx.f0.f64 = double(temp.f32);
	// bne 0x8228467c
	if (!ctx.cr0.eq) goto loc_8228467C;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x82284694
	if (!ctx.cr6.gt) goto loc_82284694;
	// stb r29,107(r31)
	REX_STORE_U8(r31.u32 + 107, r29.u8);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x82285000
	ctx.lr = 0x82284678;
	sub_82285000(ctx, base);
	// b 0x82284694
	goto loc_82284694;
loc_8228467C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x82284694
	if (ctx.cr6.gt) goto loc_82284694;
	// stb r28,107(r31)
	REX_STORE_U8(r31.u32 + 107, r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x82285058
	ctx.lr = 0x82284694;
	sub_82285058(ctx, base);
loc_82284694:
	// lbz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 108);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,688(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 688);
	ctx.f0.f64 = double(temp.f32);
	// bne 0x822846c0
	if (!ctx.cr0.eq) goto loc_822846C0;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x822846d8
	if (!ctx.cr6.gt) goto loc_822846D8;
	// stb r29,108(r31)
	REX_STORE_U8(r31.u32 + 108, r29.u8);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82285000
	ctx.lr = 0x822846BC;
	sub_82285000(ctx, base);
	// b 0x822846d8
	goto loc_822846D8;
loc_822846C0:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x822846d8
	if (ctx.cr6.gt) goto loc_822846D8;
	// stb r28,108(r31)
	REX_STORE_U8(r31.u32 + 108, r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82285058
	ctx.lr = 0x822846D8;
	sub_82285058(ctx, base);
loc_822846D8:
	// lfs f13,596(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,172(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,128
	ctx.r11.s64 = r31.s64 + 128;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,152(r31)
	REX_STORE_U64(r31.u32 + 152, ctx.r11.u64);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,128(r31)
	REX_STORE_U64(r31.u32 + 128, ctx.r11.u64);
	// std r9,144(r31)
	REX_STORE_U64(r31.u32 + 144, ctx.r9.u64);
	// std r10,136(r31)
	REX_STORE_U64(r31.u32 + 136, ctx.r10.u64);
	// bl 0x82284e80
	ctx.lr = 0x82284738;
	sub_82284E80(ctx, base);
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x82284e80
	ctx.lr = 0x82284748;
	sub_82284E80(ctx, base);
	// lbz r11,106(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 106);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82284764
	if (ctx.cr0.eq) goto loc_82284764;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82284e80
	ctx.lr = 0x82284764;
	sub_82284E80(ctx, base);
loc_82284764:
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82284e80
	ctx.lr = 0x82284774;
	sub_82284E80(ctx, base);
	// addi r4,r31,72
	ctx.r4.s64 = r31.s64 + 72;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x82284e80
	ctx.lr = 0x82284784;
	sub_82284E80(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x82284e80
	ctx.lr = 0x82284794;
	sub_82284E80(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822847d4
	if (ctx.cr6.eq) goto loc_822847D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822847B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822847D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822847D4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822A0430) {
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
	// bl 0x826a1c94
	ctx.lr = 0x822A0438;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a2c8c
	ctx.lr = 0x822A0440;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f10,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r31,108(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f6,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// std r11,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// fcmpu cr6,f10,f6
	ctx.cr6.compare(ctx.f10.f64, ctx.f6.f64);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// std r9,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// li r24,0
	r24.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// bge cr6,0x822a04a0
	if (!ctx.cr6.lt) goto loc_822A04A0;
	// fmr f6,f10
	ctx.f6.f64 = ctx.f10.f64;
loc_822A04A0:
	// lfs f11,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f11,f7
	ctx.cr6.compare(ctx.f11.f64, ctx.f7.f64);
	// bge cr6,0x822a04b4
	if (!ctx.cr6.lt) goto loc_822A04B4;
	// fmr f7,f11
	ctx.f7.f64 = ctx.f11.f64;
loc_822A04B4:
	// lfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f13,f8
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// bge cr6,0x822a04c8
	if (!ctx.cr6.lt) goto loc_822A04C8;
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
loc_822A04C8:
	// lfs f9,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// bge cr6,0x822a04d8
	if (!ctx.cr6.lt) goto loc_822A04D8;
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
loc_822A04D8:
	// lfs f12,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x822a04e8
	if (!ctx.cr6.lt) goto loc_822A04E8;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
loc_822A04E8:
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822a04f8
	if (!ctx.cr6.lt) goto loc_822A04F8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822A04F8:
	// lfs f5,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fsubs f5,f11,f5
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// lfs f11,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f4,f13,f11
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f13,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f3,f10,f13
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f13,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f22,f13,f12
	f22.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f12,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f23,f12,f9
	f23.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// lfs f12,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f24,f8,f12
	f24.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f13,8(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fadds f21,f13,f0
	f21.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f28,f0,f6
	f28.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// lfs f0,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f25,f7,f0
	f25.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fmuls f12,f5,f5
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmr f11,f4
	ctx.f11.f64 = ctx.f4.f64;
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// fmr f9,f3
	ctx.f9.f64 = ctx.f3.f64;
	// lfs f10,308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 308);
	ctx.f10.f64 = double(temp.f32);
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// fmadds f12,f4,f4,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, ctx.f4.f64, ctx.f12.f64)));
	// fmadds f12,f3,f3,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f3.f64, ctx.f3.f64, ctx.f12.f64)));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmuls f12,f5,f8
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmuls f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f0,f3,f8
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fmuls f9,f5,f12
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// fmadds f9,f4,f11,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f4.f64, ctx.f11.f64, ctx.f9.f64)));
	// fmadds f26,f3,f0,f9
	f26.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f9.f64)));
	// bne cr6,0x822a05a0
	if (!ctx.cr6.eq) goto loc_822A05A0;
	// fmr f27,f10
	f27.f64 = ctx.f10.f64;
	// b 0x822a05a4
	goto loc_822A05A4;
loc_822A05A0:
	// fdivs f27,f13,f0
	ctx.fpscr.disableFlushMode();
	f27.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_822A05A4:
	// fcmpu cr6,f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// bne cr6,0x822a05b4
	if (!ctx.cr6.eq) goto loc_822A05B4;
	// fmr f29,f10
	f29.f64 = ctx.f10.f64;
	// b 0x822a05b8
	goto loc_822A05B8;
loc_822A05B4:
	// fdivs f29,f13,f12
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
loc_822A05B8:
	// fcmpu cr6,f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
	// bne cr6,0x822a05c8
	if (!ctx.cr6.eq) goto loc_822A05C8;
	// fmr f30,f10
	f30.f64 = ctx.f10.f64;
	// b 0x822a05cc
	goto loc_822A05CC;
loc_822A05C8:
	// fdivs f30,f13,f11
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
loc_822A05CC:
	// fcmpu cr6,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f27.f64, f31.f64);
	// li r20,1
	r20.s64 = 1;
	// blt cr6,0x822a05dc
	if (ctx.cr6.lt) goto loc_822A05DC;
	// li r20,0
	r20.s64 = 0;
loc_822A05DC:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f31.f64);
	// li r21,1
	r21.s64 = 1;
	// blt cr6,0x822a05ec
	if (ctx.cr6.lt) goto loc_822A05EC;
	// li r21,0
	r21.s64 = 0;
loc_822A05EC:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f30.f64, f31.f64);
	// li r23,1
	r23.s64 = 1;
	// blt cr6,0x822a05fc
	if (ctx.cr6.lt) goto loc_822A05FC;
	// li r23,0
	r23.s64 = 0;
loc_822A05FC:
	// lwz r11,68(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822a0864
	if (!ctx.cr6.gt) goto loc_822A0864;
loc_822A0608:
	// ld r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U64(r31.u32 + 24);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 8);
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ld r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U64(r31.u32 + 16);
	// lfs f13,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// std r6,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// lfs f11,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lfs f10,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f9,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// std r7,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// lfs f6,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f4,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// lfs f7,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f3,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f0,f6,f11
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f13,f5,f10
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f12,f4,f9
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fcmpu cr6,f28,f3
	ctx.cr6.compare(f28.f64, ctx.f3.f64);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bgt cr6,0x822a06b0
	if (ctx.cr6.gt) goto loc_822A06B0;
	// lfs f0,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f23,f0
	ctx.cr6.compare(f23.f64, ctx.f0.f64);
	// bge cr6,0x822a06b4
	if (!ctx.cr6.lt) goto loc_822A06B4;
loc_822A06B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822A06B4:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f24,f0
	ctx.cr6.compare(f24.f64, ctx.f0.f64);
	// bgt cr6,0x822a06cc
	if (ctx.cr6.gt) goto loc_822A06CC;
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f21,f0
	ctx.cr6.compare(f21.f64, ctx.f0.f64);
	// bge cr6,0x822a06d0
	if (!ctx.cr6.lt) goto loc_822A06D0;
loc_822A06CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822A06D0:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f25,f0
	ctx.cr6.compare(f25.f64, ctx.f0.f64);
	// bgt cr6,0x822a06e8
	if (ctx.cr6.gt) goto loc_822A06E8;
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f22,f0
	ctx.cr6.compare(f22.f64, ctx.f0.f64);
	// bge cr6,0x822a06ec
	if (!ctx.cr6.lt) goto loc_822A06EC;
loc_822A06E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822A06EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a07e8
	if (ctx.cr0.eq) goto loc_822A07E8;
	// rlwinm r11,r21,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// lfs f13,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r20,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// subf r7,r9,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r9.u64;
	// lfsx f12,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfsx f10,r11,r6
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f10,f9,f0
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fmuls f0,f12,f27
	ctx.f0.f64 = double(float(ctx.f12.f64 * f27.f64));
	// fmuls f12,f11,f29
	ctx.f12.f64 = double(float(ctx.f11.f64 * f29.f64));
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64));
	// fmuls f11,f10,f27
	ctx.f11.f64 = double(float(ctx.f10.f64 * f27.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x822a07e8
	if (ctx.cr6.gt) goto loc_822A07E8;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x822a07e8
	if (ctx.cr6.gt) goto loc_822A07E8;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822a0768
	if (!ctx.cr6.gt) goto loc_822A0768;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822A0768:
	// fcmpu cr6,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x822a0774
	if (!ctx.cr6.lt) goto loc_822A0774;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
loc_822A0774:
	// rlwinm r11,r23,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lfsx f12,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f13,f12,f30
	ctx.f13.f64 = double(float(ctx.f12.f64 * f30.f64));
	// fmuls f12,f10,f30
	ctx.f12.f64 = double(float(ctx.f10.f64 * f30.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x822a07e8
	if (ctx.cr6.gt) goto loc_822A07E8;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x822a07e8
	if (ctx.cr6.gt) goto loc_822A07E8;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822a07bc
	if (!ctx.cr6.gt) goto loc_822A07BC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822A07BC:
	// fcmpu cr6,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x822a07c8
	if (!ctx.cr6.lt) goto loc_822A07C8;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
loc_822A07C8:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f26.f64);
	// bge cr6,0x822a07dc
	if (!ctx.cr6.lt) goto loc_822A07DC;
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x822a07e0
	if (ctx.cr6.gt) goto loc_822A07E0;
loc_822A07DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822A07E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x822a07ec
	goto loc_822A07EC;
loc_822A07E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822A07EC:
	// clrlwi r30,r11,24
	r30.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// beq 0x822a082c
	if (ctx.cr0.eq) goto loc_822A082C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822a0834
	if (ctx.cr6.eq) goto loc_822A0834;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A082C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A082C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x822a0850
	if (!ctx.cr6.eq) goto loc_822A0850;
loc_822A0834:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x822a0850
	if (!ctx.cr6.eq) goto loc_822A0850;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r24,r11,r24
	r24.u64 = ctx.r11.u64 + r24.u64;
	// add r31,r10,r31
	r31.u64 = ctx.r10.u64 + r31.u64;
	// b 0x822a0858
	goto loc_822A0858;
loc_822A0850:
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
loc_822A0858:
	// lwz r11,68(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 68);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822a0608
	if (ctx.cr6.lt) goto loc_822A0608;
loc_822A0864:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r25.s32, ctx.xer);
	// bge cr6,0x822a0878
	if (!ctx.cr6.lt) goto loc_822A0878;
	// stw r25,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r25.u32);
loc_822A0878:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a2cd8
	ctx.lr = 0x822A0884;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_822C2C50) {
	REX_FUNC_PROLOGUE();
	// lbz r3,10495(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 10495);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2CE0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10564(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10564);
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2FC8) {
	REX_FUNC_PROLOGUE();
	// stw r4,12060(r3)
	REX_STORE_U32(ctx.r3.u32 + 12060, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C31A8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,20,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r11,r11,0,12,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
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

DEFINE_REX_FUNC(sub_822C37C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10688(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10688);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3A08) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwimi r11,r4,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,10560(r3)
	REX_STORE_U32(ctx.r3.u32 + 10560, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C44D0) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1156);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r3,r11,21,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C5618) {
	REX_FUNC_PROLOGUE();
	// eieio 
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,10888(r3)
	REX_STORE_U32(ctx.r3.u32 + 10888, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C5F70) {
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
	// bl 0x82793a84
	ctx.lr = 0x822C5F88;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822c5f9c
	if (!ctx.cr6.eq) goto loc_822C5F9C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2064(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2064);
	// b 0x822c5fa4
	goto loc_822C5FA4;
loc_822C5F9C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2068(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2068);
loc_822C5FA4:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c5fbc
	if (ctx.cr6.eq) goto loc_822C5FBC;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_822C5FBC:
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

DEFINE_REX_FUNC(sub_822C9B20) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x823ef2f8
	sub_823EF2F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822CA270) {
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
	ctx.lr = 0x822CA278;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x822ca1b0
	ctx.lr = 0x822CA288;
	sub_822CA1B0(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// lwz r11,104(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 104);
	// addi r31,r28,96
	r31.s64 = r28.s64 + 96;
	// stw r27,100(r28)
	REX_STORE_U32(r28.u32 + 100, r27.u32);
	// ori r26,r10,14
	r26.u64 = ctx.r10.u64 | 14;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x822ca308
	if (!ctx.cr6.lt) goto loc_822CA308;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r30,100
	ctx.cr6.compare<uint32_t>(r30.u32, 100, ctx.xer);
	// bge cr6,0x822ca2bc
	if (!ctx.cr6.lt) goto loc_822CA2BC;
	// li r30,100
	r30.s64 = 100;
loc_822CA2BC:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// mulli r3,r30,12
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(12));
	// bl 0x823f02b8
	ctx.lr = 0x822CA2C8;
	sub_823F02B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x822ca2d8
	if (!ctx.cr0.eq) goto loc_822CA2D8;
	// stw r26,80(r28)
	REX_STORE_U32(r28.u32 + 80, r26.u32);
	// b 0x822ca308
	goto loc_822CA308;
loc_822CA2D8:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ca304
	if (ctx.cr6.eq) goto loc_822CA304;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mulli r5,r11,12
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// bl 0x826a1e70
	ctx.lr = 0x822CA2F8;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x823f0350
	ctx.lr = 0x822CA304;
	sub_823F0350(ctx, base);
loc_822CA304:
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_822CA308:
	// lwz r11,116(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 116);
	// addi r31,r28,108
	r31.s64 = r28.s64 + 108;
	// stw r27,112(r28)
	REX_STORE_U32(r28.u32 + 112, r27.u32);
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// bge cr6,0x822ca378
	if (!ctx.cr6.lt) goto loc_822CA378;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r30,50
	ctx.cr6.compare<uint32_t>(r30.u32, 50, ctx.xer);
	// bge cr6,0x822ca32c
	if (!ctx.cr6.lt) goto loc_822CA32C;
	// li r30,50
	r30.s64 = 50;
loc_822CA32C:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823f02b8
	ctx.lr = 0x822CA338;
	sub_823F02B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x822ca348
	if (!ctx.cr0.eq) goto loc_822CA348;
	// stw r26,80(r28)
	REX_STORE_U32(r28.u32 + 80, r26.u32);
	// b 0x822ca378
	goto loc_822CA378;
loc_822CA348:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ca374
	if (ctx.cr6.eq) goto loc_822CA374;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x826a1e70
	ctx.lr = 0x822CA368;
	sub_826A1E70(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x823f0350
	ctx.lr = 0x822CA374;
	sub_823F0350(ctx, base);
loc_822CA374:
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_822CA378:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,19892(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 19892);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ca398
	if (ctx.cr0.eq) goto loc_822CA398;
	// lwz r11,276(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 276);
	// addi r31,r28,268
	r31.s64 = r28.s64 + 268;
	// stw r27,272(r28)
	REX_STORE_U32(r28.u32 + 272, r27.u32);
	// b 0x822ca484
	goto loc_822CA484;
loc_822CA398:
	// lwz r11,288(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 288);
	// addi r31,r28,280
	r31.s64 = r28.s64 + 280;
	// stw r27,284(r28)
	REX_STORE_U32(r28.u32 + 284, r27.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x822ca408
	if (!ctx.cr6.lt) goto loc_822CA408;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// bge cr6,0x822ca3bc
	if (!ctx.cr6.lt) goto loc_822CA3BC;
	// li r30,2
	r30.s64 = 2;
loc_822CA3BC:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x822CA3C8;
	sub_823F02B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x822ca3d8
	if (!ctx.cr0.eq) goto loc_822CA3D8;
	// stw r26,80(r28)
	REX_STORE_U32(r28.u32 + 80, r26.u32);
	// b 0x822ca408
	goto loc_822CA408;
loc_822CA3D8:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ca404
	if (ctx.cr6.eq) goto loc_822CA404;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x822CA3F8;
	sub_826A1E70(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x823f0350
	ctx.lr = 0x822CA404;
	sub_823F0350(ctx, base);
loc_822CA404:
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_822CA408:
	// lwz r11,300(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 300);
	// addi r31,r28,292
	r31.s64 = r28.s64 + 292;
	// stw r27,296(r28)
	REX_STORE_U32(r28.u32 + 296, r27.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x822ca478
	if (!ctx.cr6.lt) goto loc_822CA478;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(r30.u32, 16, ctx.xer);
	// bge cr6,0x822ca42c
	if (!ctx.cr6.lt) goto loc_822CA42C;
	// li r30,16
	r30.s64 = 16;
loc_822CA42C:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x822CA438;
	sub_823F02B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x822ca448
	if (!ctx.cr0.eq) goto loc_822CA448;
	// stw r26,80(r28)
	REX_STORE_U32(r28.u32 + 80, r26.u32);
	// b 0x822ca478
	goto loc_822CA478;
loc_822CA448:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ca474
	if (ctx.cr6.eq) goto loc_822CA474;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x822CA468;
	sub_826A1E70(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x823f0350
	ctx.lr = 0x822CA474;
	sub_823F0350(ctx, base);
loc_822CA474:
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_822CA478:
	// lwz r11,312(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 312);
	// addi r31,r28,304
	r31.s64 = r28.s64 + 304;
	// stw r27,308(r28)
	REX_STORE_U32(r28.u32 + 308, r27.u32);
loc_822CA484:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x822ca4e8
	if (!ctx.cr6.lt) goto loc_822CA4E8;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(r30.u32, 16, ctx.xer);
	// bge cr6,0x822ca49c
	if (!ctx.cr6.lt) goto loc_822CA49C;
	// li r30,16
	r30.s64 = 16;
loc_822CA49C:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x822CA4A8;
	sub_823F02B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x822ca4b8
	if (!ctx.cr0.eq) goto loc_822CA4B8;
	// stw r26,80(r28)
	REX_STORE_U32(r28.u32 + 80, r26.u32);
	// b 0x822ca4e8
	goto loc_822CA4E8;
loc_822CA4B8:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ca4e4
	if (ctx.cr6.eq) goto loc_822CA4E4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x822CA4D8;
	sub_826A1E70(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x823f0350
	ctx.lr = 0x822CA4E4;
	sub_823F0350(ctx, base);
loc_822CA4E4:
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_822CA4E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822DDC08) {
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
	ctx.lr = 0x822DDC10;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,68
	r27.s64 = ctx.r3.s64 + 68;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82793c94
	ctx.lr = 0x822DDC2C;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822dddbc
	if (!ctx.cr6.eq) goto loc_822DDDBC;
	// lis r28,256
	r28.s64 = 16777216;
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r25,0
	r25.s64 = 0;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// slw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r11.u8 & 0x3F));
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// bne 0x822ddcf0
	if (!ctx.cr0.eq) goto loc_822DDCF0;
	// bl 0x82793a84
	ctx.lr = 0x822DDC7C;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822ddc8c
	if (!ctx.cr6.eq) goto loc_822DDC8C;
	// lwz r11,2064(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 2064);
	// b 0x822ddc90
	goto loc_822DDC90;
loc_822DDC8C:
	// lwz r11,2068(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2068);
loc_822DDC90:
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// addi r11,r11,11416
	ctx.r11.s64 = ctx.r11.s64 + 11416;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822DDCA4:
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// slw r10,r28,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r8.u8 & 0x3F));
	// and. r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822ddccc
	if (ctx.cr0.eq) goto loc_822DDCCC;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
loc_822DDCCC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bdnz 0x822ddca4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DDCA4;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ddcf0
	if (!ctx.cr6.eq) goto loc_822DDCF0;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
loc_822DDCF0:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82793ca4
	ctx.lr = 0x822DDCFC;
	__imp__KfReleaseSpinLock(ctx, base);
	// bl 0x82793a84
	ctx.lr = 0x822DDD00;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822ddd10
	if (!ctx.cr6.eq) goto loc_822DDD10;
	// lwz r11,2064(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 2064);
	// b 0x822ddd14
	goto loc_822DDD14;
loc_822DDD10:
	// lwz r11,2068(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2068);
loc_822DDD14:
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r27,6
	r27.s64 = 6;
	// addi r30,r28,11340
	r30.s64 = r28.s64 + 11340;
loc_822DDD20:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ddd8c
	if (ctx.cr6.eq) goto loc_822DDD8C;
	// lwz r11,256(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r10,10896(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 10896);
	// lwz r29,-4(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + -4);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// rlwimi r29,r9,0,30,31
	r29.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3) | (r29.u64 & 0xFFFFFFFFFFFFFFFC);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_822DDD64:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c5318
	ctx.lr = 0x822DDD6C;
	sub_822C5318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822ddd84
	if (ctx.cr0.eq) goto loc_822DDD84;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x822ddd64
	if (!ctx.cr6.eq) goto loc_822DDD64;
loc_822DDD84:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c5250
	ctx.lr = 0x822DDD8C;
	sub_822C5250(ctx, base);
loc_822DDD8C:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r30,r30,108
	r30.s64 = r30.s64 + 108;
	// bne 0x822ddd20
	if (!ctx.cr0.eq) goto loc_822DDD20;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822dddac
	if (ctx.cr6.eq) goto loc_822DDDAC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82793e54
	ctx.lr = 0x822DDDAC;
	__imp__KeUnlockL2(ctx, base);
loc_822DDDAC:
	// lwsync 
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,0(r31)
	REX_STORE_U32(r31.u32 + 0, r25.u32);
	// b 0x822dddcc
	goto loc_822DDDCC;
loc_822DDDBC:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82793ca4
	ctx.lr = 0x822DDDC8;
	__imp__KfReleaseSpinLock(ctx, base);
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
loc_822DDDCC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_822E8760) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r11,124(r4)
	REX_STORE_U8(ctx.r4.u32 + 124, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E98E8) {
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
	// lwz r11,128(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 128);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8216b740
	ctx.lr = 0x822E9918;
	sub_8216B740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822E9920:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e9920
	if (!ctx.cr6.eq) goto loc_822E9920;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r3,r30,120
	ctx.r3.s64 = r30.s64 + 120;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82120c08
	ctx.lr = 0x822E9944;
	sub_82120C08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_822ECFD8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822ED620) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822ED628;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x822ED638;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r11,r11,14888
	ctx.r11.s64 = ctx.r11.s64 + 14888;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x822ED64C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ed664
	if (ctx.cr0.eq) goto loc_822ED664;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822ed708
	ctx.lr = 0x822ED65C;
	sub_822ED708(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822ed668
	goto loc_822ED668;
loc_822ED664:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822ED668:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x822ED670;
	sub_821D3988(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822ED678;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-29688
	r30.s64 = ctx.r11.s64 + -29688;
	// beq 0x822ed6a4
	if (ctx.cr0.eq) goto loc_822ED6A4;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-10816
	ctx.r11.s64 = ctx.r11.s64 + -10816;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x822ed6a8
	goto loc_822ED6A8;
loc_822ED6A4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822ED6A8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// addi r5,r11,-28924
	ctx.r5.s64 = ctx.r11.s64 + -28924;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216be80
	ctx.lr = 0x822ED6BC;
	sub_8216BE80(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822ED6C4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ed6e8
	if (ctx.cr0.eq) goto loc_822ED6E8;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-10800
	ctx.r11.s64 = ctx.r11.s64 + -10800;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x822ed6ec
	goto loc_822ED6EC;
loc_822ED6E8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822ED6EC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r11,-27100
	ctx.r5.s64 = ctx.r11.s64 + -27100;
	// bl 0x8216be80
	ctx.lr = 0x822ED6FC;
	sub_8216BE80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822F37D8) {
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
	ctx.lr = 0x822F37E0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// not r10,r8
	ctx.r10.u64 = ~ctx.r8.u64;
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// li r27,1
	r27.s64 = 1;
	// stw r6,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stb r27,12(r3)
	REX_STORE_U8(ctx.r3.u32 + 12, r27.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,13(r31)
	REX_STORE_U8(r31.u32 + 13, ctx.r10.u8);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// stb r27,8232(r31)
	REX_STORE_U8(r31.u32 + 8232, r27.u8);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r11,8240(r31)
	REX_STORE_U32(r31.u32 + 8240, ctx.r11.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r11,8236(r31)
	REX_STORE_U32(r31.u32 + 8236, ctx.r11.u32);
	// addi r10,r9,14920
	ctx.r10.s64 = ctx.r9.s64 + 14920;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822cea50
	ctx.lr = 0x822F3850;
	sub_822CEA50(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r10,r11,11216
	ctx.r10.s64 = ctx.r11.s64 + 11216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822cea50
	ctx.lr = 0x822F387C;
	sub_822CEA50(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt 0x822f392c
	if (ctx.cr0.lt) goto loc_822F392C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f392c
	if (!ctx.cr0.eq) goto loc_822F392C;
	// lwz r11,8240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8240);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r28,r11,12
	r28.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// addi r11,r28,12
	ctx.r11.s64 = r28.s64 + 12;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bgt cr6,0x822f392c
	if (ctx.cr6.gt) goto loc_822F392C;
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x822f38c4
	if (ctx.cr0.eq) goto loc_822F38C4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,19072
	ctx.r4.s64 = ctx.r11.s64 + 19072;
	// bl 0x822f3d00
	ctx.lr = 0x822F38C0;
	sub_822F3D00(ctx, base);
	// b 0x822f38d0
	goto loc_822F38D0;
loc_822F38C4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-19772
	ctx.r4.s64 = ctx.r11.s64 + -19772;
	// bl 0x822f3a00
	ctx.lr = 0x822F38D0;
	sub_822F3A00(ctx, base);
loc_822F38D0:
	// stb r27,8232(r31)
	REX_STORE_U8(r31.u32 + 8232, r27.u8);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,19228
	ctx.r4.s64 = ctx.r11.s64 + 19228;
	// add r29,r28,r30
	r29.u64 = r28.u64 + r30.u64;
	// bl 0x822f3d00
	ctx.lr = 0x822F38E8;
	sub_822F3D00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,19284
	ctx.r4.s64 = ctx.r11.s64 + 19284;
	// bl 0x822f3c00
	ctx.lr = 0x822F38F8;
	sub_822F3C00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,8(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r4,r11,19048
	ctx.r4.s64 = ctx.r11.s64 + 19048;
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwzx r5,r28,r30
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + r30.u32);
	// bl 0x822f3c00
	ctx.lr = 0x822F3914;
	sub_822F3C00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,19212
	ctx.r4.s64 = ctx.r11.s64 + 19212;
	// bl 0x822f3d00
	ctx.lr = 0x822F3924;
	sub_822F3D00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3938
	ctx.lr = 0x822F392C;
	sub_822F3938(ctx, base);
loc_822F392C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822F9FA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
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
	// bl 0x826a1cb4
	ctx.lr = 0x822F9FB0;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2c90
	ctx.lr = 0x822F9FB8;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f30,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f30.f64 = double(temp.f32);
	// fmr f29,f30
	f29.f64 = f30.f64;
	// fmr f28,f30
	f28.f64 = f30.f64;
	// fmr f31,f30
	f31.f64 = f30.f64;
	// bne cr6,0x822f9fe8
	if (!ctx.cr6.eq) goto loc_822F9FE8;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x822fa2f4
	goto loc_822FA2F4;
loc_822F9FE8:
	// lis r29,-32126
	r29.s64 = -2105409536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-10820(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -10820);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8232f6d0
	ctx.lr = 0x822F9FFC;
	sub_8232F6D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fa2f4
	if (!ctx.cr0.eq) goto loc_822FA2F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f22,3796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3796);
	f22.f64 = double(temp.f32);
	// ble cr6,0x822fa2d8
	if (!ctx.cr6.gt) goto loc_822FA2D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f24,3792(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3792);
	f24.f64 = double(temp.f32);
	// lfs f26,3788(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3788);
	f26.f64 = double(temp.f32);
	// lfs f23,3740(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3740);
	f23.f64 = double(temp.f32);
	// lfs f25,3784(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3784);
	f25.f64 = double(temp.f32);
	// lfs f27,3716(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3716);
	f27.f64 = double(temp.f32);
loc_822FA044:
	// lwz r11,-10820(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -10820);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8232f770
	ctx.lr = 0x822FA064;
	sub_8232F770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fa2f4
	if (!ctx.cr0.eq) goto loc_822FA2F4;
	// lwz r11,-10820(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -10820);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8232f640
	ctx.lr = 0x822FA084;
	sub_8232F640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fa2f4
	if (!ctx.cr0.eq) goto loc_822FA2F4;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addi r30,r31,176
	r30.s64 = r31.s64 + 176;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822fa0bc
	if (ctx.cr0.eq) goto loc_822FA0BC;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ef2f8
	ctx.lr = 0x822FA0AC;
	sub_823EF2F8(ctx, base);
	// lfs f9,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// b 0x822fa0ec
	goto loc_822FA0EC;
loc_822FA0BC:
	// lfs f0,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f0,176(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_822FA0EC:
	// fmuls f0,f10,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f0,f9,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f0.f64)));
	// fmadds f0,f8,f8,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f8.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f22
	ctx.cr6.compare(ctx.f0.f64, f22.f64);
	// bge cr6,0x822fa2c8
	if (!ctx.cr6.lt) goto loc_822FA2C8;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// fmr f22,f0
	f22.f64 = ctx.f0.f64;
	// rlwinm. r11,r10,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822fa198
	if (!ctx.cr0.eq) goto loc_822FA198;
	// lfs f12,216(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x822fa124
	if (ctx.cr6.lt) goto loc_822FA124;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_822FA124:
	// lfs f13,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822fa134
	if (!ctx.cr6.lt) goto loc_822FA134;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822FA134:
	// rlwinm. r11,r10,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822fa154
	if (ctx.cr0.eq) goto loc_822FA154;
	// fsubs f13,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, f27.f64);
	// ble cr6,0x822fa198
	if (!ctx.cr6.gt) goto loc_822FA198;
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fdivs f29,f0,f13
	f29.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x822fa184
	goto loc_822FA184;
loc_822FA154:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822fa174
	if (!ctx.cr6.gt) goto loc_822FA174;
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, f30.f64);
	// beq cr6,0x822fa174
	if (ctx.cr6.eq) goto loc_822FA174;
	// lfs f11,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmadds f0,f0,f12,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f11.f64)));
loc_822FA174:
	// fcmpu cr6,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f25.f64);
	// bge cr6,0x822fa180
	if (!ctx.cr6.lt) goto loc_822FA180;
	// fmr f0,f25
	ctx.f0.f64 = f25.f64;
loc_822FA180:
	// fdivs f29,f13,f0
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_822FA184:
	// fcmpu cr6,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f27.f64);
	// bge cr6,0x822fa190
	if (!ctx.cr6.lt) goto loc_822FA190;
	// fmr f29,f27
	f29.f64 = f27.f64;
loc_822FA190:
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f30.f64);
	// ble cr6,0x822fa19c
	if (!ctx.cr6.gt) goto loc_822FA19C;
loc_822FA198:
	// fmr f29,f30
	ctx.fpscr.disableFlushMode();
	f29.f64 = f30.f64;
loc_822FA19C:
	// lfs f11,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f23
	ctx.cr6.compare(ctx.f11.f64, f23.f64);
	// blt cr6,0x822fa1b4
	if (ctx.cr6.lt) goto loc_822FA1B4;
	// lfs f13,248(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f23
	ctx.cr6.compare(ctx.f13.f64, f23.f64);
	// bge cr6,0x822fa25c
	if (!ctx.cr6.lt) goto loc_822FA25C;
loc_822FA1B4:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// bgt cr6,0x822fa1c4
	if (ctx.cr6.gt) goto loc_822FA1C4;
	// fmr f0,f27
	ctx.f0.f64 = f27.f64;
	// b 0x822fa21c
	goto loc_822FA21C;
loc_822FA1C4:
	// fdivs f12,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f30.f64 / ctx.f0.f64));
	// lfs f7,204(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 204);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,208(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmadds f0,f6,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f0.f64)));
	// fnmadds f0,f5,f12,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, f26.f64);
	// bge cr6,0x822fa208
	if (!ctx.cr6.lt) goto loc_822FA208;
	// fmr f0,f26
	ctx.f0.f64 = f26.f64;
	// b 0x822fa214
	goto loc_822FA214;
loc_822FA208:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x822fa214
	if (!ctx.cr6.gt) goto loc_822FA214;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
loc_822FA214:
	// fsubs f0,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 - ctx.f0.f64));
	// fmuls f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 * f24.f64));
loc_822FA21C:
	// lfs f13,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822fa230
	if (!ctx.cr6.lt) goto loc_822FA230;
	// fmr f28,f30
	f28.f64 = f30.f64;
	// b 0x822fa25c
	goto loc_822FA25C;
loc_822FA230:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x822fa258
	if (!ctx.cr6.lt) goto loc_822FA258;
	// lfs f13,248(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,256(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(f30.f64 - ctx.f0.f64));
	// fmadds f28,f12,f0,f13
	f28.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// b 0x822fa25c
	goto loc_822FA25C;
loc_822FA258:
	// lfs f28,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 256);
	f28.f64 = double(temp.f32);
loc_822FA25C:
	// lwz r11,-10820(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -10820);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm. r10,r10,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// beq 0x822fa294
	if (ctx.cr0.eq) goto loc_822FA294;
	// lfs f12,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f12,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f10,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fadds f12,f11,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// b 0x822fa298
	goto loc_822FA298;
loc_822FA294:
	// lfs f12,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
loc_822FA298:
	// stfs f12,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8232fc08
	ctx.lr = 0x822FA2B8;
	sub_8232FC08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fa2f4
	if (!ctx.cr0.eq) goto loc_822FA2F4;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f30,f0
	f31.f64 = double(float(f30.f64 - ctx.f0.f64));
loc_822FA2C8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822fa044
	if (ctx.cr6.lt) goto loc_822FA044;
loc_822FA2D8:
	// fmuls f0,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f28.f64 * f29.f64));
	// lfs f13,264(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 - ctx.f13.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
loc_822FA2F4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2cdc
	ctx.lr = 0x822FA300;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82314BA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82314BB0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82314bd0
	if (!ctx.cr6.eq) goto loc_82314BD0;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82314ca4
	goto loc_82314CA4;
loc_82314BD0:
	// li r31,0
	r31.s64 = 0;
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82314bec
	if (!ctx.cr6.eq) goto loc_82314BEC;
	// li r3,95
	ctx.r3.s64 = 95;
	// b 0x82314ca4
	goto loc_82314CA4;
loc_82314BEC:
	// bl 0x82316590
	ctx.lr = 0x82314BF0;
	sub_82316590(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82314C04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82314c14
	if (!ctx.cr0.eq) goto loc_82314C14;
	// li r3,96
	ctx.r3.s64 = 96;
	// b 0x82314ca4
	goto loc_82314CA4;
loc_82314C14:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,5612
	ctx.r5.s64 = ctx.r10.s64 + 5612;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// li r6,630
	ctx.r6.s64 = 630;
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x82314C3C;
	sub_82330A38(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82314c68
	if (ctx.cr0.eq) goto loc_82314C68;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r31,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, r31.u8);
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r31.u32);
	// addi r10,r10,5680
	ctx.r10.s64 = ctx.r10.s64 + 5680;
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r31.u32);
	// stw r31,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r31.u32);
	// b 0x82314c6c
	goto loc_82314C6C;
loc_82314C68:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82314C6C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82314c7c
	if (!ctx.cr6.eq) goto loc_82314C7C;
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x82314ca4
	goto loc_82314CA4;
loc_82314C7C:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stw r28,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r28.u32);
	// stb r31,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, r31.u8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// std r9,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82314CA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8231A9F0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8231ab58
	sub_8231AB58(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8231ABF8) {
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
	// addi r11,r11,6088
	ctx.r11.s64 = ctx.r11.s64 + 6088;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8231ac24
	if (ctx.cr0.eq) goto loc_8231AC24;
	// bl 0x8269ce98
	ctx.lr = 0x8231AC24;
	sub_8269CE98(ctx, base);
loc_8231AC24:
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

DEFINE_REX_FUNC(sub_8231EA38) {
	REX_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8231ea84
	if (ctx.cr6.eq) goto loc_8231EA84;
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8231ea84
	if (!ctx.cr6.lt) goto loc_8231EA84;
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm. r8,r11,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwzx r4,r9,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// beq 0x8231ea7c
	if (ctx.cr0.eq) goto loc_8231EA7C;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-10820(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -10820);
	// b 0x82303ea8
	sub_82303EA8(ctx, base);
	return;
loc_8231EA7C:
	// lwz r3,40(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// b 0x8230a640
	sub_8230A640(ctx, base);
	return;
loc_8231EA84:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82320DA8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82320dc0
	if (ctx.cr6.eq) goto loc_82320DC0;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x82320dc4
	goto loc_82320DC4;
loc_82320DC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82320DC4:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82323D20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82323d38
	if (!ctx.cr6.eq) goto loc_82323D38;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82323dd4
	goto loc_82323DD4;
loc_82323D38:
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82323dc4
	goto loc_82323DC4;
loc_82323D4C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// bne cr6,0x82323d5c
	if (!ctx.cr6.eq) goto loc_82323D5C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82323D5C:
	// lwz r7,52(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// addi r5,r11,52
	ctx.r5.s64 = ctx.r11.s64 + 52;
	// b 0x82323db8
	goto loc_82323DB8;
loc_82323D68:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// bne cr6,0x82323d78
	if (!ctx.cr6.eq) goto loc_82323D78;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82323D78:
	// lwz r9,52(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// b 0x82323da0
	goto loc_82323DA0;
loc_82323D88:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82323d98
	if (!ctx.cr6.eq) goto loc_82323D98;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82323D98:
	// lwz r9,52(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 52);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82323DA0:
	// addic r31,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	r31.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// subfe r9,r31,r9
	temp.u8 = (~r31.u32 + ctx.r9.u32 < ~r31.u32) | (~r31.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~r31.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bne cr6,0x82323d88
	if (!ctx.cr6.eq) goto loc_82323D88;
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
loc_82323DB8:
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82323d68
	if (!ctx.cr6.eq) goto loc_82323D68;
	// lwz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
loc_82323DC4:
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82323d4c
	if (!ctx.cr6.eq) goto loc_82323D4C;
	// stw r8,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82323DD4:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82329440) {
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
	// bl 0x82329370
	ctx.lr = 0x82329458;
	sub_82329370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82329488
	if (!ctx.cr0.eq) goto loc_82329488;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,7904
	ctx.r5.s64 = ctx.r10.s64 + 7904;
	// li r6,702
	ctx.r6.s64 = 702;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82329484;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82329488:
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

DEFINE_REX_FUNC(sub_8232B188) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,8192
	ctx.r10.s64 = ctx.r10.s64 + 8192;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,17(r3)
	REX_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232C4F8) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c528
	if (!ctx.cr6.eq) goto loc_8232C528;
loc_8232C520:
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x8232c5b4
	goto loc_8232C5B4;
loc_8232C528:
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232c520
	if (ctx.cr6.eq) goto loc_8232C520;
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232c548
	if (ctx.cr6.eq) goto loc_8232C548;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x8232c54c
	goto loc_8232C54C;
loc_8232C548:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232C54C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c568
	if (!ctx.cr6.eq) goto loc_8232C568;
	// li r6,40
	ctx.r6.s64 = 40;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x8232C568;
	sub_82331A00(ctx, base);
loc_8232C568:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232c594
	if (ctx.cr6.eq) goto loc_8232C594;
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
	ctx.lr = 0x8232C58C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232c5b4
	if (!ctx.cr0.eq) goto loc_8232C5B4;
loc_8232C594:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232c5b0
	if (ctx.cr6.eq) goto loc_8232C5B0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82311468
	ctx.lr = 0x8232C5A8;
	sub_82311468(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232c5b4
	if (!ctx.cr0.eq) goto loc_8232C5B4;
loc_8232C5B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232C5B4:
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

DEFINE_REX_FUNC(sub_823302C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2c98
	ctx.lr = 0x823302D8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// fmr f27,f5
	f27.f64 = ctx.f5.f64;
	// fmr f26,f6
	f26.f64 = ctx.f6.f64;
	// fmr f25,f7
	f25.f64 = ctx.f7.f64;
	// fmr f24,f8
	f24.f64 = ctx.f8.f64;
	// bl 0x82351018
	ctx.lr = 0x82330304;
	sub_82351018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82330334
	if (!ctx.cr6.eq) goto loc_82330334;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// fmr f8,f24
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = f24.f64;
	// fmr f7,f25
	ctx.f7.f64 = f25.f64;
	// fmr f6,f26
	ctx.f6.f64 = f26.f64;
	// fmr f5,f27
	ctx.f5.f64 = f27.f64;
	// fmr f4,f28
	ctx.f4.f64 = f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82351598
	ctx.lr = 0x82330334;
	sub_82351598(ctx, base);
loc_82330334:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2ce4
	ctx.lr = 0x82330340;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82336108) {
	REX_FUNC_PROLOGUE();
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82336140
	if (ctx.cr6.eq) goto loc_82336140;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82336140
	if (ctx.cr6.eq) goto loc_82336140;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82336140
	if (ctx.cr6.eq) goto loc_82336140;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82336140
	if (ctx.cr6.eq) goto loc_82336140;
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r6,21964(r3)
	REX_STORE_U8(ctx.r3.u32 + 21964, ctx.r6.u8);
	// b 0x82336154
	goto loc_82336154;
loc_82336140:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stb r7,21964(r3)
	REX_STORE_U8(ctx.r3.u32 + 21964, ctx.r7.u8);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82336154:
	// stw r11,21972(r3)
	REX_STORE_U32(ctx.r3.u32 + 21972, ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,21976(r3)
	REX_STORE_U32(ctx.r3.u32 + 21976, ctx.r10.u32);
	// stw r9,21980(r3)
	REX_STORE_U32(ctx.r3.u32 + 21980, ctx.r9.u32);
	// stw r7,21984(r3)
	REX_STORE_U32(ctx.r3.u32 + 21984, ctx.r7.u32);
	// blt cr6,0x82336170
	if (ctx.cr6.lt) goto loc_82336170;
	// stw r8,21968(r3)
	REX_STORE_U32(ctx.r3.u32 + 21968, ctx.r8.u32);
loc_82336170:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233E9A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8233E9A8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x100000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233ea28
	if (ctx.cr6.eq) goto loc_8233EA28;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ed608
	ctx.lr = 0x8233E9D4;
	sub_823ED608(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ea0c
	if (ctx.cr6.eq) goto loc_8233EA0C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8233ea1c
	if (ctx.cr6.eq) goto loc_8233EA1C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ed690
	ctx.lr = 0x8233E9F0;
	sub_823ED690(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bgt cr6,0x8233ea00
	if (ctx.cr6.gt) goto loc_8233EA00;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_8233EA00:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x8233EA0C;
	sub_823EF2F8(ctx, base);
loc_8233EA0C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8233ea1c
	if (ctx.cr6.eq) goto loc_8233EA1C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ed698
	ctx.lr = 0x8233EA1C;
	sub_823ED698(ctx, base);
loc_8233EA1C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_8233EA28:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a2d70
	ctx.lr = 0x8233EA34;
	sub_826A2D70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82340D48) {
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
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82340718
	ctx.lr = 0x82340D70;
	sub_82340718(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82340d80
	if (ctx.cr6.eq) goto loc_82340D80;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82340D80:
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

DEFINE_REX_FUNC(sub_823423E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x82342400
	if (!ctx.cr6.lt) goto loc_82342400;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
loc_82342400:
	// fcmpu cr6,f2,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// bge cr6,0x8234240c
	if (!ctx.cr6.lt) goto loc_8234240C;
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
loc_8234240C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3740(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3740);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82342420
	if (!ctx.cr6.gt) goto loc_82342420;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82342420:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x8234242c
	if (!ctx.cr6.gt) goto loc_8234242C;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
loc_8234242C:
	// fcmpu cr6,f3,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// bge cr6,0x8234244c
	if (!ctx.cr6.lt) goto loc_8234244C;
	// stfs f1,116(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// fmr f3,f13
	ctx.f3.f64 = ctx.f13.f64;
	// stfs f2,120(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f13,124(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// blr 
	return;
loc_8234244C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x82342460
	if (!ctx.cr6.gt) goto loc_82342460;
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
loc_82342460:
	// stfs f1,116(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f2,120(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stfs f3,124(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234A660) {
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
	ctx.lr = 0x8234A668;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,284(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 284);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// beq cr6,0x8234a720
	if (ctx.cr6.eq) goto loc_8234A720;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8234a0a8
	ctx.lr = 0x8234A6B4;
	sub_8234A0A8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82349998
	ctx.lr = 0x8234A6CC;
	sub_82349998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234a708
	if (!ctx.cr6.eq) goto loc_8234A708;
loc_8234A6D4:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234a708
	if (ctx.cr6.eq) goto loc_8234A708;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82349998
	ctx.lr = 0x8234A700;
	sub_82349998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8234a6d4
	if (ctx.cr6.eq) goto loc_8234A6D4;
loc_8234A708:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8234a0a8
	ctx.lr = 0x8234A71C;
	sub_8234A0A8(ctx, base);
	// b 0x8234a734
	goto loc_8234A734;
loc_8234A720:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82349ca8
	ctx.lr = 0x8234A72C;
	sub_82349CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234a828
	if (!ctx.cr6.eq) goto loc_8234A828;
loc_8234A734:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82349998
	ctx.lr = 0x8234A74C;
	sub_82349998(ctx, base);
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8234a774
	if (ctx.cr6.eq) goto loc_8234A774;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82349ca8
	ctx.lr = 0x8234A76C;
	sub_82349CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234a828
	if (!ctx.cr6.eq) goto loc_8234A828;
loc_8234A774:
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8234a328
	ctx.lr = 0x8234A790;
	sub_8234A328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234a828
	if (!ctx.cr6.eq) goto loc_8234A828;
	// clrlwi r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234a7f8
	if (ctx.cr6.eq) goto loc_8234A7F8;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82349998
	ctx.lr = 0x8234A7BC;
	sub_82349998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234a7f8
	if (!ctx.cr6.eq) goto loc_8234A7F8;
loc_8234A7C4:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234a7f8
	if (ctx.cr6.eq) goto loc_8234A7F8;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82349998
	ctx.lr = 0x8234A7F0;
	sub_82349998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8234a7c4
	if (ctx.cr6.eq) goto loc_8234A7C4;
loc_8234A7F8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8234a824
	if (ctx.cr6.eq) goto loc_8234A824;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8234a328
	ctx.lr = 0x8234A81C;
	sub_8234A328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234a828
	if (!ctx.cr6.eq) goto loc_8234A828;
loc_8234A824:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234A828:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82353E78) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
	// addi r10,r11,9872
	ctx.r10.s64 = ctx.r11.s64 + 9872;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x823536d0
	ctx.lr = 0x82353EA8;
	sub_823536D0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r9,9880
	ctx.r7.s64 = ctx.r9.s64 + 9880;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,304
	ctx.r10.s64 = r30.s64 + 304;
	// stw r7,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r11.u32);
	// stw r10,320(r31)
	REX_STORE_U32(r31.u32 + 320, ctx.r10.u32);
	// lfs f0,3992(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3992);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r11.u32);
	// stw r11,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r11.u32);
	// stw r11,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r11.u32);
	// stb r11,312(r31)
	REX_STORE_U8(r31.u32 + 312, ctx.r11.u8);
	// stfs f0,356(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 356, temp.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r11.u32);
	// stw r11,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r11.u32);
	// stw r11,352(r31)
	REX_STORE_U32(r31.u32 + 352, ctx.r11.u32);
	// stb r6,12(r31)
	REX_STORE_U8(r31.u32 + 12, ctx.r6.u8);
	// stw r31,336(r31)
	REX_STORE_U32(r31.u32 + 336, r31.u32);
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

DEFINE_REX_FUNC(sub_82356658) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82331458
	ctx.lr = 0x8235667C;
	sub_82331458(ctx, base);
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// blt cr6,0x8235668c
	if (ctx.cr6.lt) goto loc_8235668C;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x823566a0
	goto loc_823566A0;
loc_8235668C:
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,1
	ctx.r3.s64 = r30.s64 + 1;
	// bl 0x823314a0
	ctx.lr = 0x8235669C;
	sub_823314A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823566A0:
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

DEFINE_REX_FUNC(sub_82358550) {
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
	ctx.lr = 0x82358558;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82358594
	if (!ctx.cr6.eq) goto loc_82358594;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82358588
	if (ctx.cr6.eq) goto loc_82358588;
	// stw r29,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r29.u32);
loc_82358588:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_82358594:
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82358724
	if (!ctx.cr6.eq) goto loc_82358724;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r26,r29
	r26.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823586a0
	if (!ctx.cr6.gt) goto loc_823586A0;
	// mr r30,r29
	r30.u64 = r29.u64;
	// addi r28,r25,-4
	r28.s64 = r25.s64 + -4;
loc_823585B4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8235868c
	if (!ctx.cr6.eq) goto loc_8235868C;
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8235868c
	if (!ctx.cr6.eq) goto loc_8235868C;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823585f0
	if (ctx.cr6.eq) goto loc_823585F0;
	// clrlwi r11,r24,24
	ctx.r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235868c
	if (ctx.cr6.eq) goto loc_8235868C;
loc_823585F0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,128(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 128);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82358610;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235868c
	if (!ctx.cr6.eq) goto loc_8235868C;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8235868c
	if (!ctx.cr6.eq) goto loc_8235868C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r30,r8
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r8.u32);
	// lwz r7,36(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// ori r6,r7,256
	ctx.r6.u64 = ctx.r7.u64 | 256;
	// stw r6,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r30,r5
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r5.u32);
	// lwz r4,36(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r3,r4,0,25,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r3,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r3.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,0,20,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r7,r30,r8
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + ctx.r8.u32);
	// stwu r7,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	r28.u32 = ea;
	// beq cr6,0x8235870c
	if (ctx.cr6.eq) goto loc_8235870C;
loc_8235868C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823585b4
	if (ctx.cr6.lt) goto loc_823585B4;
loc_823586A0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x823586f4
	if (!ctx.cr6.gt) goto loc_823586F4;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_823586B0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823586ec
	if (ctx.cr6.eq) goto loc_823586EC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r8,r9,0,28,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r8,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,36(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// rlwinm r5,r6,0,24,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r5,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r5.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,36(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// ori r10,r3,128
	ctx.r10.u64 = ctx.r3.u64 | 128;
	// stw r10,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r10.u32);
loc_823586EC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823586b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823586B0;
loc_823586F4:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82358700
	if (ctx.cr6.eq) goto loc_82358700;
	// stw r29,0(r23)
	REX_STORE_U32(r23.u32 + 0, r29.u32);
loc_82358700:
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_8235870C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82358718
	if (ctx.cr6.eq) goto loc_82358718;
	// stw r29,0(r23)
	REX_STORE_U32(r23.u32 + 0, r29.u32);
loc_82358718:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_82358724:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x823586a0
	if (ctx.cr6.lt) goto loc_823586A0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823586a0
	if (!ctx.cr6.lt) goto loc_823586A0;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// bgt cr6,0x82358700
	if (ctx.cr6.gt) goto loc_82358700;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// ori r8,r9,16
	ctx.r8.u64 = ctx.r9.u64 | 16;
	// stw r8,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r10,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r6,36(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// ori r5,r6,256
	ctx.r5.u64 = ctx.r6.u64 | 256;
	// stw r5,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r10,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r8,r9,0,25,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r8,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r6,r10,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stw r6,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r6.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8236B578) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,336(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 336);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,344(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 344);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmadds f12,f9,f12,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f13.f64)));
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x8236b5bc
	if (!ctx.cr6.lt) goto loc_8236B5BC;
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
	// b 0x8236b5c0
	goto loc_8236B5C0;
loc_8236B5BC:
	// fmr f9,f11
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f11.f64;
loc_8236B5C0:
	// lfs f11,352(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 352);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8236b5e0
	if (!ctx.cr6.lt) goto loc_8236B5E0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8236B5E0:
	// fmuls f0,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fsubs f13,f10,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f13,380(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 380, temp.u32);
	// fadds f11,f9,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f11,384(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 384, temp.u32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f10,388(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 388, temp.u32);
	// fadds f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f9,392(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 392, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823721F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82372200
	if (!ctx.cr6.eq) goto loc_82372200;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82372200:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt cr6,0x82372218
	if (ctx.cr6.lt) goto loc_82372218;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stfs f1,316(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 316, temp.u32);
	// blr 
	return;
loc_82372218:
	// stfs f1,324(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 324, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82374810) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,-7928(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7928);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82374844
	if (!ctx.cr6.eq) goto loc_82374844;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lwz r11,-7924(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7924);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82374858
	if (ctx.cr6.eq) goto loc_82374858;
loc_82374844:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2000
	ctx.r4.s64 = 2000;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823bf000
	ctx.lr = 0x82374854;
	sub_823BF000(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82374858:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82376410) {
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
	ctx.lr = 0x82376418;
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x82376430;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376668
	if (!ctx.cr6.eq) goto loc_82376668;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823759b8
	ctx.lr = 0x8237644C;
	sub_823759B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82376460
	if (ctx.cr6.eq) goto loc_82376460;
loc_82376454:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x826a1cf0
	return;
loc_82376460:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r11,17972
	ctx.r4.s64 = ctx.r11.s64 + 17972;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823316d8
	ctx.lr = 0x82376474;
	sub_823316D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376454
	if (!ctx.cr6.eq) goto loc_82376454;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823759b8
	ctx.lr = 0x82376490;
	sub_823759B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376664
	if (!ctx.cr6.eq) goto loc_82376664;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r22,0
	r22.s64 = 0;
	// addi r27,r4,-24496
	r27.s64 = ctx.r4.s64 + -24496;
	// addi r26,r5,17956
	r26.s64 = ctx.r5.s64 + 17956;
	// addi r30,r6,17708
	r30.s64 = ctx.r6.s64 + 17708;
	// addi r25,r7,17948
	r25.s64 = ctx.r7.s64 + 17948;
	// addi r29,r8,9028
	r29.s64 = ctx.r8.s64 + 9028;
	// addi r24,r9,17940
	r24.s64 = ctx.r9.s64 + 17940;
	// addi r28,r10,17716
	r28.s64 = ctx.r10.s64 + 17716;
	// addi r23,r11,18800
	r23.s64 = ctx.r11.s64 + 18800;
loc_823764DC:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x823316d8
	ctx.lr = 0x823764EC;
	sub_823316D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x82376538
	if (!ctx.cr6.eq) goto loc_82376538;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823759b8
	ctx.lr = 0x82376508;
	sub_823759B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376664
	if (!ctx.cr6.eq) goto loc_82376664;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239e6b0
	ctx.lr = 0x82376534;
	sub_8239E6B0(ctx, base);
	// b 0x82376648
	goto loc_82376648;
loc_82376538:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x823316d8
	ctx.lr = 0x82376544;
	sub_823316D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x82376590
	if (!ctx.cr6.eq) goto loc_82376590;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823759b8
	ctx.lr = 0x82376560;
	sub_823759B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376664
	if (!ctx.cr6.eq) goto loc_82376664;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239e6b0
	ctx.lr = 0x8237658C;
	sub_8239E6B0(ctx, base);
	// b 0x82376648
	goto loc_82376648;
loc_82376590:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x823316d8
	ctx.lr = 0x8237659C;
	sub_823316D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x82376600
	if (!ctx.cr6.eq) goto loc_82376600;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823759b8
	ctx.lr = 0x823765BC;
	sub_823759B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376664
	if (!ctx.cr6.eq) goto loc_82376664;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stbx r22,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, r22.u8);
	// bl 0x826a08a0
	ctx.lr = 0x823765D8;
	sub_826A08A0(ctx, base);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239e6b0
	ctx.lr = 0x823765FC;
	sub_8239E6B0(ctx, base);
	// b 0x82376648
	goto loc_82376648;
loc_82376600:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x823316d8
	ctx.lr = 0x8237660C;
	sub_823316D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x82376630
	if (ctx.cr6.eq) goto loc_82376630;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x823316d8
	ctx.lr = 0x82376624;
	sub_823316D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376648
	if (!ctx.cr6.eq) goto loc_82376648;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82376630:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823759b8
	ctx.lr = 0x82376640;
	sub_823759B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82376664
	if (!ctx.cr6.eq) goto loc_82376664;
loc_82376648:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823759b8
	ctx.lr = 0x8237665C;
	sub_823759B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823764dc
	if (ctx.cr6.eq) goto loc_823764DC;
loc_82376664:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82376668:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_823901A8) {
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c88
	ctx.lr = 0x823901B0;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x826a2ca8
	ctx.lr = 0x823901B8;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2184(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2184);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r9,520(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 520);
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r7,2180(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 2180);
	// lwz r10,788(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 788);
	// mullw r11,r7,r10
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// lbz r6,532(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 532);
	// rotlwi r8,r6,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823908b8
	if (ctx.cr0.eq) goto loc_823908B8;
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r23,r25
	r23.u64 = r25.u64;
	// ble cr6,0x823908b8
	if (!ctx.cr6.gt) goto loc_823908B8;
	// addi r24,r11,4
	r24.s64 = ctx.r11.s64 + 4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,21845
	ctx.r7.s64 = 1431633920;
	// lfs f28,15200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15200);
	f28.f64 = double(temp.f32);
	// lis r6,218
	ctx.r6.s64 = 14286848;
	// lfs f29,19036(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 19036);
	f29.f64 = double(temp.f32);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lfs f30,3720(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3720);
	f30.f64 = double(temp.f32);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// lfs f31,19092(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 19092);
	f31.f64 = double(temp.f32);
	// addi r20,r3,792
	r20.s64 = ctx.r3.s64 + 792;
	// ori r21,r7,21846
	r21.u64 = ctx.r7.u64 | 21846;
	// li r16,56
	r16.s64 = 56;
	// li r18,64
	r18.s64 = 64;
	// ori r17,r6,30208
	r17.u64 = ctx.r6.u64 | 30208;
	// addi r26,r11,30952
	r26.s64 = ctx.r11.s64 + 30952;
	// addi r22,r10,32120
	r22.s64 = ctx.r10.s64 + 32120;
	// addi r19,r9,32064
	r19.s64 = ctx.r9.s64 + 32064;
loc_82390260:
	// lwz r29,0(r20)
	r29.u64 = REX_LOAD_U32(r20.u32 + 0);
	// lwz r10,1424(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 1424);
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// lbz r11,592(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 592);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82390288
	if (!ctx.cr6.lt) goto loc_82390288;
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r27,r11,2204
	r27.s64 = ctx.r11.s64 + 2204;
	// b 0x8239028c
	goto loc_8239028C;
loc_82390288:
	// mr r27,r19
	r27.u64 = r19.u64;
loc_8239028C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x823902a8
	if (!ctx.cr6.eq) goto loc_823902A8;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x823902ac
	if (ctx.cr6.eq) goto loc_823902AC;
loc_823902A8:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_823902AC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823902bc
	if (ctx.cr6.eq) goto loc_823902BC;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_823902BC:
	// lbz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U8(r24.u32 + 0);
	// lbz r9,-1(r24)
	ctx.r9.u64 = REX_LOAD_U8(r24.u32 + -1);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rlwinm r31,r10,28,4,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r25,476(r11)
	REX_STORE_U32(ctx.r11.u32 + 476, r25.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r30,r10,28
	r30.u64 = ctx.r10.u32 & 0xF;
	// stw r25,480(r8)
	REX_STORE_U32(ctx.r8.u32 + 480, r25.u32);
	// cmplwi cr6,r9,14
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14, ctx.xer);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r25,460(r7)
	REX_STORE_U8(ctx.r7.u32 + 460, r25.u8);
	// bgt cr6,0x82390734
	if (ctx.cr6.gt) goto loc_82390734;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,776
	ctx.r12.s64 = ctx.r12.s64 + 776;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82390344;
	case 1:
		goto loc_823903E4;
	case 2:
		goto loc_82390424;
	case 3:
		goto loc_82390450;
	case 4:
		goto loc_8239045C;
	case 5:
		goto loc_82390468;
	case 6:
		goto loc_823904F8;
	case 7:
		goto loc_82390544;
	case 8:
		goto loc_82390734;
	case 9:
		goto loc_82390734;
	case 10:
		goto loc_82390550;
	case 11:
		goto loc_82390734;
	case 12:
		goto loc_82390734;
	case 13:
		goto loc_82390734;
	case 14:
		goto loc_82390594;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82390344:
	// lbz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U8(r24.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82390734
	if (ctx.cr6.eq) goto loc_82390734;
	// lwz r9,2168(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 2168);
	// mulhw r11,r9,r21
	ctx.r11.s64 = (int64_t(ctx.r9.s32) * int64_t(r21.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r8,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r8.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82390384
	if (ctx.cr6.eq) goto loc_82390384;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823903d0
	if (!ctx.cr6.eq) goto loc_823903D0;
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// b 0x82390388
	goto loc_82390388;
loc_82390384:
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
loc_82390388:
	// lbz r11,593(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 593);
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 4);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r26
	ctx.r6.u64 = ctx.r11.u64 + r26.u64;
	// add r5,r10,r26
	ctx.r5.u64 = ctx.r10.u64 + r26.u64;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r4,-4(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + -4);
	// lwz r3,-4(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + -4);
	// mulli r11,r4,8363
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(8363));
	// mulli r10,r3,8363
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(8363));
	// divwu r8,r10,r9
	ctx.r8.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// divwu r6,r11,r9
	ctx.r6.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// subf r5,r6,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r6.u64;
	// stw r5,480(r7)
	REX_STORE_U32(ctx.r7.u32 + 480, ctx.r5.u32);
loc_823903D0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// b 0x82390734
	goto loc_82390734;
loc_823903E4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U8(r24.u32 + 0);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r8,464(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stw r7,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r7.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,464(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// cmpwi cr6,r6,56
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 56, ctx.xer);
	// bge cr6,0x82390414
	if (!ctx.cr6.lt) goto loc_82390414;
	// stw r16,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, r16.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82390414:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// b 0x82390734
	goto loc_82390734;
loc_82390424:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U8(r24.u32 + 0);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r9,464(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r8,460(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// stb r7,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r7.u8);
	// b 0x82390734
	goto loc_82390734;
loc_82390450:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238f668
	ctx.lr = 0x82390458;
	sub_8238F668(ctx, base);
	// b 0x82390734
	goto loc_82390734;
loc_8239045C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238f6e8
	ctx.lr = 0x82390464;
	sub_8238F6E8(ctx, base);
	// b 0x82390734
	goto loc_82390734;
loc_82390468:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238f668
	ctx.lr = 0x82390470;
	sub_8238F668(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823904b4
	if (ctx.cr6.eq) goto loc_823904B4;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,468(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 468);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,468(r10)
	REX_STORE_U32(ctx.r10.u32 + 468, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,468(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// ble cr6,0x823904e8
	if (!ctx.cr6.gt) goto loc_823904E8;
	// stw r18,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, r18.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// b 0x82390734
	goto loc_82390734;
loc_823904B4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823904e4
	if (ctx.cr6.eq) goto loc_823904E4;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,468(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 468);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r8,468(r10)
	REX_STORE_U32(ctx.r10.u32 + 468, ctx.r8.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,468(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x823904e8
	if (!ctx.cr6.lt) goto loc_823904E8;
	// stw r25,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, r25.u32);
loc_823904E4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823904E8:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// b 0x82390734
	goto loc_82390734;
loc_823904F8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238f6e8
	ctx.lr = 0x82390500;
	sub_8238F6E8(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823904b4
	if (ctx.cr6.eq) goto loc_823904B4;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,468(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 468);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,468(r10)
	REX_STORE_U32(ctx.r10.u32 + 468, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,468(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// ble cr6,0x823904e8
	if (!ctx.cr6.gt) goto loc_823904E8;
	// stw r18,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, r18.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// b 0x82390734
	goto loc_82390734;
loc_82390544:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238f7f0
	ctx.lr = 0x8239054C;
	sub_8238F7F0(ctx, base);
	// b 0x82390734
	goto loc_82390734;
loc_82390550:
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823904b4
	if (ctx.cr6.eq) goto loc_823904B4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,468(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,468(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// cmpwi cr6,r9,64
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 64, ctx.xer);
	// ble cr6,0x823904e8
	if (!ctx.cr6.gt) goto loc_823904E8;
	// stw r18,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, r18.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// b 0x82390734
	goto loc_82390734;
loc_82390594:
	// clrlwi r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x823906d0
	if (ctx.cr6.eq) goto loc_823906D0;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x823906a4
	if (ctx.cr6.eq) goto loc_823906A4;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x82390734
	if (!ctx.cr6.eq) goto loc_82390734;
	// lwz r11,2168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 2168);
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x82390670
	if (!ctx.cr6.eq) goto loc_82390670;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bne cr6,0x823905fc
	if (!ctx.cr6.eq) goto loc_823905FC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823c84a0
	ctx.lr = 0x823905E0;
	sub_823C84A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823905f8
	if (ctx.cr6.eq) goto loc_823905F8;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// stw r19,448(r22)
	REX_STORE_U32(r22.u32 + 448, r19.u32);
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// b 0x823905fc
	goto loc_823905FC;
loc_823905F8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823905FC:
	// lbz r9,-3(r24)
	ctx.r9.u64 = REX_LOAD_U8(r24.u32 + -3);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82390624
	if (ctx.cr6.eq) goto loc_82390624;
	// lbz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U8(r27.u32 + 8);
	// stw r10,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r9,460(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stb r8,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r8.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82390624:
	// add r10,r23,r28
	ctx.r10.u64 = r23.u64 + r28.u64;
	// lbz r9,1276(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1276);
	// stw r9,472(r11)
	REX_STORE_U32(ctx.r11.u32 + 472, ctx.r9.u32);
	// lwz r8,596(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 596);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,464(r7)
	REX_STORE_U32(ctx.r7.u32 + 464, ctx.r8.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r6,460(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 | 1;
	// stb r5,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r5.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r4,460(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r3,r4,4
	ctx.r3.u64 = ctx.r4.u64 | 4;
	// stb r3,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r3.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// b 0x82390734
	goto loc_82390734;
loc_82390670:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r8,460(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r7,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r7.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r6,460(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r5,r5,0,29,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// b 0x82390730
	goto loc_82390730;
loc_823906A4:
	// lwz r11,2168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 2168);
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82390734
	if (!ctx.cr6.eq) goto loc_82390734;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r25,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, r25.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// b 0x82390734
	goto loc_82390734;
loc_823906D0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390734
	if (ctx.cr6.eq) goto loc_82390734;
	// lwz r9,2168(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 2168);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r8,r9,r11
	ctx.r8.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// andc r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// subf. r5,r7,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bne 0x82390734
	if (!ctx.cr0.eq) goto loc_82390734;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r8,460(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r7,r8,2
	ctx.r7.u64 = ctx.r8.u64 | 2;
	// stb r7,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r7.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r6,460(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r5,r6,4
	ctx.r5.u64 = ctx.r6.u64 | 4;
loc_82390730:
	// stb r5,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r5.u8);
loc_82390734:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,480(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 480);
	// lwz r9,464(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// add. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8239075c
	if (!ctx.cr0.eq) goto loc_8239075C;
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8239075C:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82390788
	if (ctx.cr6.eq) goto loc_82390788;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823c8798
	ctx.lr = 0x82390784;
	sub_823C8798(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82390788:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823907d8
	if (ctx.cr6.eq) goto loc_823907D8;
	// lwz r10,476(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 476);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// lwz r9,468(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// lfs f0,624(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * f31.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f1,f9,f30
	ctx.f1.f64 = double(float(ctx.f9.f64 * f30.f64));
	// bl 0x8234bbc8
	ctx.lr = 0x823907D4;
	sub_8234BBC8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823907D8:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82390820
	if (ctx.cr6.eq) goto loc_82390820;
	// lwz r10,472(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 472);
	// lfs f0,2148(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fsubs f10,f11,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 - f29.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f1,f9,f28
	ctx.f1.f64 = double(float(ctx.f9.f64 * f28.f64));
	// bl 0x8234be00
	ctx.lr = 0x8239081C;
	sub_8234BE00(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82390820:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82390870
	if (ctx.cr6.eq) goto loc_82390870;
	// lwz r10,480(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 480);
	// lwz r9,464(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x82390848
	if (!ctx.cr6.lt) goto loc_82390848;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82390848:
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r10,r17,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(r17.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? r17.s32 / ctx.r10.s32 : 0);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x8234e480
	ctx.lr = 0x8239086C;
	sub_8234E480(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82390870:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823908a0
	if (ctx.cr6.eq) goto loc_823908A0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8234f290
	ctx.lr = 0x8239088C;
	sub_8234F290(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,20(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 20);
	// bl 0x82334ca0
	ctx.lr = 0x82390898;
	sub_82334CA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r25,488(r11)
	REX_STORE_U32(ctx.r11.u32 + 488, r25.u32);
loc_823908A0:
	// lwz r11,788(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 788);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// addi r24,r24,5
	r24.s64 = r24.s64 + 5;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82390260
	if (ctx.cr6.lt) goto loc_82390260;
loc_823908B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x826a2cf4
	ctx.lr = 0x823908C8;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_823CBEE0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x823cbf64
	if (ctx.cr6.gt) goto loc_823CBF64;
loc_823CBF0C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823cbf40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823CBF40;
	// bdzf 4*cr6+eq,0x823cbf80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823CBF80;
	// bdzf 4*cr6+eq,0x823cbf80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823CBF80;
	// bdzf 4*cr6+eq,0x823cbf80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823CBF80;
	// bdzf 4*cr6+eq,0x823cbf64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823CBF64;
	// bdzf 4*cr6+eq,0x823cbf64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823CBF64;
	// bne cr6,0x823cbf80
	if (!ctx.cr6.eq) goto loc_823CBF80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823caa08
	ctx.lr = 0x823CBF3C;
	sub_823CAA08(ctx, base);
	// b 0x823cbf4c
	goto loc_823CBF4C;
loc_823CBF40:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cac20
	ctx.lr = 0x823CBF4C;
	sub_823CAC20(ctx, base);
loc_823CBF4C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cbf64
	if (ctx.cr6.eq) goto loc_823CBF64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// ble cr6,0x823cbf0c
	if (!ctx.cr6.gt) goto loc_823CBF0C;
loc_823CBF64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823CBF68:
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
loc_823CBF80:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823cbf68
	goto loc_823CBF68;
}

DEFINE_REX_FUNC(sub_823CE490) {
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
	// addi r4,r4,472
	ctx.r4.s64 = ctx.r4.s64 + 472;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x823e1ef8
	ctx.lr = 0x823CE4B4;
	sub_823E1EF8(ctx, base);
	// addi r4,r31,576
	ctx.r4.s64 = r31.s64 + 576;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e1a90
	ctx.lr = 0x823CE4C0;
	sub_823E1A90(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_823CF780) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823cf7d8
	if (ctx.cr6.eq) goto loc_823CF7D8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x823cf7b4
	if (!ctx.cr6.lt) goto loc_823CF7B4;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x823cf7d8
	if (ctx.cr6.lt) goto loc_823CF7D8;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_823CF7B4:
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823cf7c8
	if (ctx.cr6.lt) goto loc_823CF7C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823CF7C8:
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_823CF7D8:
	// lwz r3,76(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D0CE8) {
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
	ctx.lr = 0x823D0CF0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823d0e44
	if (ctx.cr6.eq) goto loc_823D0E44;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,4(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x823e2c70
	ctx.lr = 0x823D0D1C;
	sub_823E2C70(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823e2da8
	ctx.lr = 0x823D0D28;
	sub_823E2DA8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ef5f0
	ctx.lr = 0x823D0D3C;
	sub_823EF5F0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r31,6
	r31.s64 = 6;
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
loc_823D0D48:
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x823e2da8
	ctx.lr = 0x823D0D58;
	sub_823E2DA8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stbu r3,1(r30)
	ea = 1 + r30.u32;
	REX_STORE_U8(ea, ctx.r3.u8);
	r30.u32 = ea;
	// bne cr6,0x823d0d48
	if (!ctx.cr6.eq) goto loc_823D0D48;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-28920
	ctx.r10.s64 = ctx.r10.s64 + -28920;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
loc_823D0D74:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823d0d94
	if (!ctx.cr0.eq) goto loc_823D0D94;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823d0d74
	if (!ctx.cr6.eq) goto loc_823D0D74;
loc_823D0D94:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823d0da8
	if (ctx.cr6.eq) goto loc_823D0DA8;
	// li r3,-132
	ctx.r3.s64 = -132;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cfc
	return;
loc_823D0DA8:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// beq cr6,0x823d0e14
	if (ctx.cr6.eq) goto loc_823D0E14;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(r28.s32, 3, ctx.xer);
	// beq cr6,0x823d0df0
	if (ctx.cr6.eq) goto loc_823D0DF0;
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(r28.s32, 5, ctx.xer);
	// bne cr6,0x823d0e44
	if (!ctx.cr6.eq) goto loc_823D0E44;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d0e44
	if (ctx.cr6.eq) goto loc_823D0E44;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d0e44
	if (ctx.cr6.eq) goto loc_823D0E44;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823d0838
	ctx.lr = 0x823D0DE8;
	sub_823D0838(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cfc
	return;
loc_823D0DF0:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d0e44
	if (ctx.cr6.eq) goto loc_823D0E44;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823d0630
	ctx.lr = 0x823D0E0C;
	sub_823D0630(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cfc
	return;
loc_823D0E14:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d0e44
	if (ctx.cr6.eq) goto loc_823D0E44;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823d0e44
	if (!ctx.cr6.eq) goto loc_823D0E44;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823d04f0
	ctx.lr = 0x823D0E3C;
	sub_823D04F0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cfc
	return;
loc_823D0E44:
	// li r3,-133
	ctx.r3.s64 = -133;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_823D9548) {
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
	ctx.lr = 0x823D9550;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// ble cr6,0x823d95b0
	if (!ctx.cr6.gt) goto loc_823D95B0;
	// addi r11,r4,-9
	ctx.r11.s64 = ctx.r4.s64 + -9;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r27,r10,r27
	r27.u64 = r27.u64 - ctx.r10.u64;
loc_823D957C:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823dafa8
	ctx.lr = 0x823D9588;
	sub_823DAFA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823db000
	ctx.lr = 0x823D95A0;
	sub_823DB000(ctx, base);
	// rlwinm r11,r28,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFFFF00;
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// or r28,r11,r31
	r28.u64 = ctx.r11.u64 | r31.u64;
	// bne 0x823d957c
	if (!ctx.cr0.eq) goto loc_823D957C;
loc_823D95B0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823dafa8
	ctx.lr = 0x823D95BC;
	sub_823DAFA8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// slw r6,r11,r27
	ctx.r6.u64 = r27.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r27.u8 & 0x3F));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823db000
	ctx.lr = 0x823D95D8;
	sub_823DB000(ctx, base);
	// slw r10,r28,r27
	ctx.r10.u64 = r27.u8 & 0x20 ? 0 : (r28.u32 << (r27.u8 & 0x3F));
	// or r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 | r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823DCB40) {
	REX_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823dcbb8
	if (ctx.cr6.eq) goto loc_823DCBB8;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,28(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bge cr6,0x823dcbb8
	if (!ctx.cr6.lt) goto loc_823DCBB8;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r10,r11,-31944
	ctx.r10.s64 = ctx.r11.s64 + -31944;
loc_823DCB70:
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// subfic r7,r11,24
	ctx.xer.ca = ctx.r11.u32 <= 24;
	ctx.r7.u64 = static_cast<uint64_t>(24) - ctx.r11.u64;
	// rlwinm r6,r8,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// srw r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r8,r8,8,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00;
	// xor r7,r4,r6
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// stw r6,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// xor r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// rotlwi r8,r6,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x823dcb70
	if (ctx.cr6.lt) goto loc_823DCB70;
loc_823DCBB8:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E0810) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r7,r9,-3440
	ctx.r7.s64 = ctx.r9.s64 + -3440;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stb r8,22(r6)
	REX_STORE_U8(ctx.r6.u32 + 22, ctx.r8.u8);
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stb r8,23(r5)
	REX_STORE_U8(ctx.r5.u32 + 23, ctx.r8.u8);
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stb r8,24(r4)
	REX_STORE_U8(ctx.r4.u32 + 24, ctx.r8.u8);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stb r8,25(r9)
	REX_STORE_U8(ctx.r9.u32 + 25, ctx.r8.u8);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823e0884
	if (!ctx.cr6.gt) goto loc_823E0884;
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823E0860:
	// lbzx r9,r6,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// rlwinm r5,r11,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwinm r4,r11,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// xor r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// xor r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// bdnz 0x823e0860
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E0860;
loc_823E0884:
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823e08c0
	if (!ctx.cr6.gt) goto loc_823E08C0;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823E089C:
	// lbzx r9,r8,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r6,r11,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwinm r5,r11,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// xor r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// xor r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// bdnz 0x823e089c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E089C;
loc_823E08C0:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r7,r11,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r6,r11,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// stb r11,22(r10)
	REX_STORE_U8(ctx.r10.u32 + 22, ctx.r11.u8);
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stb r8,23(r5)
	REX_STORE_U8(ctx.r5.u32 + 23, ctx.r8.u8);
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stb r7,24(r4)
	REX_STORE_U8(ctx.r4.u32 + 24, ctx.r7.u8);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stb r6,25(r3)
	REX_STORE_U8(ctx.r3.u32 + 25, ctx.r6.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E5E30) {
	REX_FUNC_PROLOGUE();
	// subfic r11,r3,16384
	ctx.xer.ca = ctx.r3.u32 <= 16384;
	ctx.r11.u64 = static_cast<uint64_t>(16384) - ctx.r3.u64;
	// addi r10,r3,16384
	ctx.r10.s64 = ctx.r3.s64 + 16384;
	// rlwinm r9,r11,15,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r8,r9,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// subf r3,r7,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r7.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E7090) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mullw r11,r4,r6
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r9,r6,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r9,r5,268
	ctx.r9.s64 = ctx.r5.s64 + 268;
	// ld r31,268(r8)
	r31.u64 = REX_LOAD_U64(ctx.r8.u32 + 268);
	// rlwinm r6,r4,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// lfs f0,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lfd f0,32424(r4)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r4.u32 + 32424);
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
loc_823E70E8:
	// lfs f11,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f9,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f4,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f2,f4,f11
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// lfs f6,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lfs f3,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// fmuls f1,f3,f12
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f12,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f4,f5,f8
	ctx.f11.f64 = double(float(std::fma(ctx.f4.f64, ctx.f5.f64, ctx.f8.f64)));
	// fmadds f8,f3,f6,f7
	ctx.f8.f64 = double(float(std::fma(ctx.f3.f64, ctx.f6.f64, ctx.f7.f64)));
	// fmsubs f7,f10,f5,f2
	ctx.f7.f64 = double(float(std::fma(ctx.f10.f64, ctx.f5.f64, -ctx.f2.f64)));
	// fmsubs f6,f9,f6,f1
	ctx.f6.f64 = double(float(std::fma(ctx.f9.f64, ctx.f6.f64, -ctx.f1.f64)));
	// fadds f5,f11,f8
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// fsubs f4,f8,f11
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fadds f3,f7,f6
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fsubs f2,f6,f7
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fnmsub f1,f5,f0,f12
	ctx.f1.f64 = -std::fma(ctx.f5.f64, ctx.f0.f64, -ctx.f12.f64);
	// fmuls f12,f13,f4
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f11,f13,f2
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// frsp f10,f1
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f9,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fnmsub f8,f3,f0,f9
	ctx.f8.f64 = -std::fma(ctx.f3.f64, ctx.f0.f64, -ctx.f9.f64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f6,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f2,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f2,4(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fadds f1,f6,f3
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// stfsu f1,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,4(r8)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f8,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfsu f7,8(r8)
	ea = 8 + ctx.r8.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// lfs f6,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfsu f3,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823e70e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E70E8;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823ECC70) {
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
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// bl 0x823efeb8
	ctx.lr = 0x823ECC84;
	sub_823EFEB8(ctx, base);
	// addi r11,r3,-192
	ctx.r11.s64 = ctx.r3.s64 + -192;
	// li r10,192
	ctx.r10.s64 = 192;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

DEFINE_REX_FUNC(sub_823ED6A8) {
	REX_FUNC_PROLOGUE();
	// b 0x82793a44
	__imp__MmQueryAddressProtect(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823EDA30) {
	REX_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x823f01e8
	sub_823F01E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823EDB90) {
	REX_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x823f0420
	sub_823F0420(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823EE100) {
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
	ctx.lr = 0x823EE108;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823ee130
	if (ctx.cr6.eq) goto loc_823EE130;
	// stw r28,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r28.u32);
loc_823EE130:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x823ee1d4
	if (ctx.cr6.eq) goto loc_823EE1D4;
	// li r6,259
	ctx.r6.s64 = 259;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r6,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// lwz r11,-30824(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -30824);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// clrlwi r6,r4,31
	ctx.r6.u64 = ctx.r4.u32 & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addic r7,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 & r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE188;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ee1b0
	if (ctx.cr0.lt) goto loc_823EE1B0;
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// beq cr6,0x823ee1b0
	if (ctx.cr6.eq) goto loc_823EE1B0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823ee1a8
	if (ctx.cr6.eq) goto loc_823EE1A8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_823EE1A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823ee274
	goto loc_823EE274;
loc_823EE1B0:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 | 17;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823ee26c
	if (!ctx.cr6.eq) goto loc_823EE26C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823ee1cc
	if (ctx.cr6.eq) goto loc_823EE1CC;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
loc_823EE1CC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x823ee26c
	goto loc_823EE26C;
loc_823EE1D4:
	// lwz r11,-30824(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -30824);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE1F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x823ee220
	if (!ctx.cr6.eq) goto loc_823EE220;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82793a94
	ctx.lr = 0x823EE214;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ee238
	if (ctx.cr0.lt) goto loc_823EE238;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823EE220:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823ee238
	if (ctx.cr6.lt) goto loc_823EE238;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x823ee274
	goto loc_823EE274;
loc_823EE238:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 | 17;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823ee254
	if (!ctx.cr6.eq) goto loc_823EE254;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// b 0x823ee274
	goto loc_823EE274;
loc_823EE254:
	// rlwinm r11,r3,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823ee26c
	if (!ctx.cr6.eq) goto loc_823EE26C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_823EE26C:
	// bl 0x823f0020
	ctx.lr = 0x823EE270;
	sub_823F0020(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EE274:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823F6FF8) {
	REX_FUNC_PROLOGUE();
	// lbz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 24);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// slw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r9,24(r3)
	REX_STORE_U8(ctx.r3.u32 + 24, ctx.r9.u8);
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_823F7024:
	// lwz r11,2136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2136);
	// lwz r10,2140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823f7044
	if (ctx.cr6.lt) goto loc_823F7044;
	// lwz r11,2132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2132);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,25(r3)
	REX_STORE_U8(ctx.r3.u32 + 25, ctx.r10.u8);
	// stw r11,2136(r3)
	REX_STORE_U32(ctx.r3.u32 + 2136, ctx.r11.u32);
loc_823F7044:
	// lwz r11,2136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2136);
	// lbz r10,21(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 21);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 20);
	// lwz r11,2136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2136(r3)
	REX_STORE_U32(ctx.r3.u32 + 2136, ctx.r11.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 24);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,2136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r11,2136(r3)
	REX_STORE_U32(ctx.r3.u32 + 2136, ctx.r11.u32);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// stb r10,24(r3)
	REX_STORE_U8(ctx.r3.u32 + 24, ctx.r10.u8);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x823f7024
	if (!ctx.cr6.gt) goto loc_823F7024;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823FBCC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
loc_823FBCD4:
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lhzu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// addi r6,r1,-12
	ctx.r6.s64 = ctx.r1.s64 + -12;
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
	// stvewx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823fbcd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FBCD4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823FF268) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823FF270;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823ff284
	if (!ctx.cr6.eq) goto loc_823FF284;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x823ff2fc
	goto loc_823FF2FC;
loc_823FF284:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	r30.s64 = 0;
	// li r31,49
	r31.s64 = 49;
	// addi r29,r11,16624
	r29.s64 = ctx.r11.s64 + 16624;
loc_823FF294:
	// add r11,r31,r30
	ctx.r11.u64 = r31.u64 + r30.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mulli r8,r9,12
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r8,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + r29.u32);
	// add r7,r8,r29
	ctx.r7.u64 = ctx.r8.u64 + r29.u64;
loc_823FF2AC:
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r28,0(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// subf r6,r28,r6
	ctx.r6.u64 = ctx.r6.u64 - r28.u64;
	// beq 0x823ff2d0
	if (ctx.cr0.eq) goto loc_823FF2D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x823ff2ac
	if (ctx.cr6.eq) goto loc_823FF2AC;
loc_823FF2D0:
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x823ff300
	if (ctx.cr0.eq) goto loc_823FF300;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x823ff2e8
	if (!ctx.cr6.lt) goto loc_823FF2E8;
	// addi r30,r9,1
	r30.s64 = ctx.r9.s64 + 1;
	// b 0x823ff2ec
	goto loc_823FF2EC;
loc_823FF2E8:
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
loc_823FF2EC:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// blt cr6,0x823ff294
	if (ctx.cr6.lt) goto loc_823FF294;
loc_823FF2F4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_823FF2FC:
	// b 0x826a1d08
	return;
loc_823FF300:
	// addi r11,r29,8
	ctx.r11.s64 = r29.s64 + 8;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x823ff2f4
	if (!ctx.cr6.eq) goto loc_823FF2F4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823ff334
	if (ctx.cr6.eq) goto loc_823FF334;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
loc_823FF334:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ff2fc
	goto loc_823FF2FC;
}

DEFINE_REX_FUNC(sub_824048B8) {
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
	ctx.lr = 0x824048C0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r9,68(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r8,60(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r7,64(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824048fc
	if (ctx.cr0.eq) goto loc_824048FC;
loc_824048F0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82404a54
	goto loc_82404A54;
loc_824048FC:
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r6,68(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r5,64(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// lwz r10,60(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824048f0
	if (!ctx.cr0.eq) goto loc_824048F0;
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r10,0,26,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// addis r10,r10,-6688
	ctx.r10.s64 = ctx.r10.s64 + -438304768;
	// addic. r10,r10,-18
	ctx.xer.ca = ctx.r10.u32 > 17;
	ctx.r10.s64 = ctx.r10.s64 + -18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82404954
	if (ctx.cr0.eq) goto loc_82404954;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8240494c
	if (ctx.cr6.eq) goto loc_8240494C;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x824048f0
	if (!ctx.cr6.eq) goto loc_824048F0;
loc_8240494C:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x82404958
	goto loc_82404958;
loc_82404954:
	// li r10,8
	ctx.r10.s64 = 8;
loc_82404958:
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r5,96(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r30,r8,30,2,31
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r3,100(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// li r25,0
	r25.s64 = 0;
	// lwz r31,76(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mullw r8,r7,r5
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// lwz r7,32(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,64(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 64);
	// lwz r29,96(r6)
	r29.u64 = REX_LOAD_U32(ctx.r6.u32 + 96);
	// lwz r27,100(r6)
	r27.u64 = REX_LOAD_U32(ctx.r6.u32 + 100);
	// lwz r26,76(r6)
	r26.u64 = REX_LOAD_U32(ctx.r6.u32 + 76);
	// lwz r24,60(r6)
	r24.u64 = REX_LOAD_U32(ctx.r6.u32 + 60);
	// lwz r23,104(r6)
	r23.u64 = REX_LOAD_U32(ctx.r6.u32 + 104);
	// lwz r5,32(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 32);
	// lwz r22,112(r9)
	r22.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// rlwinm r4,r4,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r6,r27,r26
	ctx.r6.s64 = int64_t(r27.s32) * int64_t(r26.s32);
	// mullw r4,r4,r29
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(r29.s32);
	// mullw r31,r3,r31
	r31.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// rlwinm r29,r24,30,2,31
	r29.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 30) & 0x3FFFFFFF;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// mullw r3,r29,r10
	ctx.r3.s64 = int64_t(r29.s32) * int64_t(ctx.r10.s32);
	// mullw r4,r30,r10
	ctx.r4.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// rlwinm r31,r23,30,2,31
	r31.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 30) & 0x3FFFFFFF;
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mullw r24,r31,r10
	r24.s64 = int64_t(r31.s32) * int64_t(ctx.r10.s32);
	// add r27,r6,r5
	r27.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r26,r8,r7
	r26.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// ble cr6,0x82404a50
	if (!ctx.cr6.gt) goto loc_82404A50;
	// lwz r10,108(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 108);
loc_824049E4:
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82404a30
	if (ctx.cr6.eq) goto loc_82404A30;
loc_824049F8:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82404A08;
	sub_826A1E70(ctx, base);
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r7,96(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 96);
	// lwz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r10,108(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 108);
	// add r30,r7,r30
	r30.u64 = ctx.r7.u64 + r30.u64;
	// add r29,r8,r29
	r29.u64 = ctx.r8.u64 + r29.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824049f8
	if (ctx.cr6.lt) goto loc_824049F8;
loc_82404A30:
	// lwz r7,100(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 100);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r8,100(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r6,112(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// add r27,r7,r27
	r27.u64 = ctx.r7.u64 + r27.u64;
	// add r26,r8,r26
	r26.u64 = ctx.r8.u64 + r26.u64;
	// cmplw cr6,r25,r6
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x824049e4
	if (ctx.cr6.lt) goto loc_824049E4;
loc_82404A50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82404A54:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82410180) {
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
	// bge cr6,0x82410244
	if (!ctx.cr6.lt) goto loc_82410244;
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
loc_824101E4:
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
	// bdnz 0x824101e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824101E4;
loc_82410244:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82410260
	if (ctx.cr6.eq) goto loc_82410260;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x82410260;
	sub_825C73B8(ctx, base);
loc_82410260:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241027c
	if (ctx.cr6.eq) goto loc_8241027C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82409820
	ctx.lr = 0x8241027C;
	sub_82409820(ctx, base);
loc_8241027C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82411EF0) {
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
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82411f6c
	if (!ctx.cr6.lt) goto loc_82411F6C;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
loc_82411F4C:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfsu f13,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x82411f4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82411F4C;
loc_82411F6C:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82411f88
	if (ctx.cr6.eq) goto loc_82411F88;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x82411F88;
	sub_825C73B8(ctx, base);
loc_82411F88:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82411fa4
	if (ctx.cr6.eq) goto loc_82411FA4;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82409820
	ctx.lr = 0x82411FA4;
	sub_82409820(ctx, base);
loc_82411FA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82416DE0) {
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
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x823f02b8
	ctx.lr = 0x82416E08;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82416e30
	if (ctx.cr0.eq) goto loc_82416E30;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x82416e34
	goto loc_82416E34;
loc_82416E30:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82416E34:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82416e48
	if (!ctx.cr6.eq) goto loc_82416E48;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82416e50
	goto loc_82416E50;
loc_82416E48:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82416cf0
	ctx.lr = 0x82416E50;
	sub_82416CF0(ctx, base);
loc_82416E50:
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

DEFINE_REX_FUNC(sub_8241A160) {
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
	ctx.lr = 0x8241A168;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r29,r11,31,1,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8241a1d0
	if (ctx.cr0.eq) goto loc_8241A1D0;
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
loc_8241A198:
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8241a1b0
	if (!ctx.cr6.gt) goto loc_8241A1B0;
	// addi r8,r29,1
	ctx.r8.s64 = r29.s64 + 1;
	// b 0x8241a1b8
	goto loc_8241A1B8;
loc_8241A1B0:
	// bge cr6,0x8241a1c8
	if (!ctx.cr6.lt) goto loc_8241A1C8;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_8241A1B8:
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// rlwinm r29,r10,31,1,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// blt cr6,0x8241a198
	if (ctx.cr6.lt) goto loc_8241A198;
loc_8241A1C8:
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8241a2e8
	if (ctx.cr6.lt) goto loc_8241A2E8;
loc_8241A1D0:
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8241a284
	if (!ctx.cr6.eq) goto loc_8241A284;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8241a1f4
	if (!ctx.cr6.eq) goto loc_8241A1F4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8241A1F4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x8241A200;
	sub_823F02B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8241a254
	if (ctx.cr0.eq) goto loc_8241A254;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x8241A21C;
	sub_826A1E70(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x823f0350
	ctx.lr = 0x8241A228;
	sub_823F0350(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8241a240
	if (!ctx.cr6.eq) goto loc_8241A240;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8241A240:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x8241A24C;
	sub_823F02B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8241a260
	if (!ctx.cr0.eq) goto loc_8241A260;
loc_8241A254:
	// lis r26,-32761
	r26.s64 = -2147024896;
	// ori r26,r26,14
	r26.u64 = r26.u64 | 14;
	// b 0x8241a2f4
	goto loc_8241A2F4;
loc_8241A260:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x8241A274;
	sub_826A1E70(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x823f0350
	ctx.lr = 0x8241A280;
	sub_823F0350(ctx, base);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_8241A284:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// ble cr6,0x8241a2c4
	if (!ctx.cr6.gt) goto loc_8241A2C4;
	// subf r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8241A29C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bdnz 0x8241a29c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241A29C;
loc_8241A2C4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r28,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r28.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8241A2E8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8241a2f4
	if (ctx.cr6.eq) goto loc_8241A2F4;
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
loc_8241A2F4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823f0350
	ctx.lr = 0x8241A300;
	sub_823F0350(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82437930) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82437938;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82437988
	if (!ctx.cr6.gt) goto loc_82437988;
	// li r30,0
	r30.s64 = 0;
loc_82437958:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x82437748
	ctx.lr = 0x8243796C;
	sub_82437748(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8243798c
	if (ctx.cr0.lt) goto loc_8243798C;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82437958
	if (ctx.cr6.lt) goto loc_82437958;
loc_82437988:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8243798C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824380B0) {
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
	// add r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 + ctx.r7.u64;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srad r11,r9,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r11.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x822c8f70
	ctx.lr = 0x824380EC;
	sub_822C8F70(ctx, base);
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

DEFINE_REX_FUNC(sub_8243B1F8) {
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
	ctx.lr = 0x8243B200;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,10(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 10);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// bne 0x8243b478
	if (!ctx.cr0.eq) goto loc_8243B478;
	// lis r10,21592
	ctx.r10.s64 = 1415053312;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8243b420
	if (ctx.cr6.eq) goto loc_8243B420;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8243b344
	if (ctx.cr6.eq) goto loc_8243B344;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8243b4f0
	if (!ctx.cr6.eq) goto loc_8243B4F0;
	// lhz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8243b304
	if (ctx.cr6.lt) goto loc_8243B304;
	// beq cr6,0x8243b2b8
	if (ctx.cr6.eq) goto loc_8243B2B8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8243b4f0
	if (!ctx.cr6.lt) goto loc_8243B4F0;
	// lhz r11,2(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8243b2ac
	if (ctx.cr6.lt) goto loc_8243B2AC;
	// beq cr6,0x8243b2a0
	if (ctx.cr6.eq) goto loc_8243B2A0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8243b294
	if (ctx.cr6.lt) goto loc_8243B294;
	// bne cr6,0x8243b4f0
	if (!ctx.cr6.eq) goto loc_8243B4F0;
loc_8243B288:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// addi r31,r11,-32592
	r31.s64 = ctx.r11.s64 + -32592;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B294:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// addi r31,r11,-32368
	r31.s64 = ctx.r11.s64 + -32368;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B2A0:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// addi r31,r11,-32512
	r31.s64 = ctx.r11.s64 + -32512;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B2AC:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// addi r31,r11,-32592
	r31.s64 = ctx.r11.s64 + -32592;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B2B8:
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8243b2f8
	if (ctx.cr6.lt) goto loc_8243B2F8;
	// beq cr6,0x8243b2ec
	if (ctx.cr6.eq) goto loc_8243B2EC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8243b2e0
	if (ctx.cr6.lt) goto loc_8243B2E0;
	// bne cr6,0x8243b4f0
	if (!ctx.cr6.eq) goto loc_8243B4F0;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// addi r31,r11,-32672
	r31.s64 = ctx.r11.s64 + -32672;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B2E0:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r31,r11,32736
	r31.s64 = ctx.r11.s64 + 32736;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B2EC:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// addi r31,r11,-32760
	r31.s64 = ctx.r11.s64 + -32760;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B2F8:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r31,r11,32736
	r31.s64 = ctx.r11.s64 + 32736;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B304:
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8243b338
	if (ctx.cr6.lt) goto loc_8243B338;
	// beq cr6,0x8243b4ac
	if (ctx.cr6.eq) goto loc_8243B4AC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8243b32c
	if (ctx.cr6.lt) goto loc_8243B32C;
	// bne cr6,0x8243b4f0
	if (!ctx.cr6.eq) goto loc_8243B4F0;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r31,r11,32632
	r31.s64 = ctx.r11.s64 + 32632;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B32C:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r31,r11,32544
	r31.s64 = ctx.r11.s64 + 32544;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B338:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r31,r11,32504
	r31.s64 = ctx.r11.s64 + 32504;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B344:
	// lhz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8243b3e0
	if (ctx.cr6.lt) goto loc_8243B3E0;
	// beq cr6,0x8243b3a0
	if (ctx.cr6.eq) goto loc_8243B3A0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8243b4f0
	if (!ctx.cr6.lt) goto loc_8243B4F0;
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8243b394
	if (ctx.cr6.lt) goto loc_8243B394;
	// beq cr6,0x8243b388
	if (ctx.cr6.eq) goto loc_8243B388;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8243b37c
	if (ctx.cr6.lt) goto loc_8243B37C;
	// bne cr6,0x8243b4f0
	if (!ctx.cr6.eq) goto loc_8243B4F0;
	// b 0x8243b4d0
	goto loc_8243B4D0;
loc_8243B37C:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r31,r11,32368
	r31.s64 = ctx.r11.s64 + 32368;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B388:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r31,r11,32224
	r31.s64 = ctx.r11.s64 + 32224;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B394:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r31,r11,32144
	r31.s64 = ctx.r11.s64 + 32144;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B3A0:
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8243b3d4
	if (ctx.cr6.lt) goto loc_8243B3D4;
	// beq cr6,0x8243b3c8
	if (ctx.cr6.eq) goto loc_8243B3C8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8243b4dc
	if (ctx.cr6.lt) goto loc_8243B4DC;
	// bne cr6,0x8243b4f0
	if (!ctx.cr6.eq) goto loc_8243B4F0;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r31,r11,32064
	r31.s64 = ctx.r11.s64 + 32064;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B3C8:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r31,r11,31976
	r31.s64 = ctx.r11.s64 + 31976;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B3D4:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r31,r11,31936
	r31.s64 = ctx.r11.s64 + 31936;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B3E0:
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8243b414
	if (ctx.cr6.lt) goto loc_8243B414;
	// beq cr6,0x8243b4e8
	if (ctx.cr6.eq) goto loc_8243B4E8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8243b408
	if (ctx.cr6.lt) goto loc_8243B408;
	// bne cr6,0x8243b4f0
	if (!ctx.cr6.eq) goto loc_8243B4F0;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r31,r11,31832
	r31.s64 = ctx.r11.s64 + 31832;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B408:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r31,r11,31744
	r31.s64 = ctx.r11.s64 + 31744;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B414:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r31,r11,31704
	r31.s64 = ctx.r11.s64 + 31704;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B420:
	// lhz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8243b4f0
	if (!ctx.cr6.eq) goto loc_8243B4F0;
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8243b46c
	if (ctx.cr6.lt) goto loc_8243B46C;
	// beq cr6,0x8243b460
	if (ctx.cr6.eq) goto loc_8243B460;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8243b454
	if (ctx.cr6.lt) goto loc_8243B454;
	// bne cr6,0x8243b4f0
	if (!ctx.cr6.eq) goto loc_8243B4F0;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// addi r31,r11,-32232
	r31.s64 = ctx.r11.s64 + -32232;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B454:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// addi r31,r11,-32024
	r31.s64 = ctx.r11.s64 + -32024;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B460:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// addi r31,r11,-32160
	r31.s64 = ctx.r11.s64 + -32160;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B46C:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// addi r31,r11,-32232
	r31.s64 = ctx.r11.s64 + -32232;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B478:
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8243b4b8
	if (ctx.cr6.eq) goto loc_8243B4B8;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8243b4f0
	if (!ctx.cr6.eq) goto loc_8243B4F0;
	// lhz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8243b4ac
	if (ctx.cr6.lt) goto loc_8243B4AC;
	// beq cr6,0x8243b2e0
	if (ctx.cr6.eq) goto loc_8243B2E0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8243b4f0
	if (!ctx.cr6.lt) goto loc_8243B4F0;
	// b 0x8243b288
	goto loc_8243B288;
loc_8243B4AC:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r31,r11,32504
	r31.s64 = ctx.r11.s64 + 32504;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B4B8:
	// lhz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8243b4e8
	if (ctx.cr6.lt) goto loc_8243B4E8;
	// beq cr6,0x8243b4dc
	if (ctx.cr6.eq) goto loc_8243B4DC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8243b4f0
	if (!ctx.cr6.lt) goto loc_8243B4F0;
loc_8243B4D0:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r31,r11,32144
	r31.s64 = ctx.r11.s64 + 32144;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B4DC:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r31,r11,31936
	r31.s64 = ctx.r11.s64 + 31936;
	// b 0x8243b4f0
	goto loc_8243B4F0;
loc_8243B4E8:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r31,r11,31704
	r31.s64 = ctx.r11.s64 + 31704;
loc_8243B4F0:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x823f02b8
	ctx.lr = 0x8243B4FC;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8243b524
	if (ctx.cr0.eq) goto loc_8243B524;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82437520
	ctx.lr = 0x8243B51C;
	sub_82437520(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8243b528
	goto loc_8243B528;
loc_8243B524:
	// li r31,0
	r31.s64 = 0;
loc_8243B528:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8243b554
	if (ctx.cr6.eq) goto loc_8243B554;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243b560
	ctx.lr = 0x8243B538;
	sub_8243B560(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bge 0x8243b558
	if (!ctx.cr0.lt) goto loc_8243B558;
	// bl 0x82437998
	ctx.lr = 0x8243B548;
	sub_82437998(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x8243B554;
	sub_823F0350(ctx, base);
loc_8243B554:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8243B558:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8244A470) {
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
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8244a564
	if (ctx.cr6.eq) goto loc_8244A564;
	// lbz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8244a564
	if (ctx.cr0.eq) goto loc_8244A564;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8244A4AC:
	// lbz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8244a4f0
	if (ctx.cr0.eq) goto loc_8244A4F0;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,119
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 119, ctx.xer);
	// bgt cr6,0x8244a53c
	if (ctx.cr6.gt) goto loc_8244A53C;
	// beq cr6,0x8244a534
	if (ctx.cr6.eq) goto loc_8244A534;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// beq cr6,0x8244a534
	if (ctx.cr6.eq) goto loc_8244A534;
	// cmplwi cr6,r11,98
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 98, ctx.xer);
	// beq cr6,0x8244a554
	if (ctx.cr6.eq) goto loc_8244A554;
	// cmplwi cr6,r11,103
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 103, ctx.xer);
	// beq cr6,0x8244a55c
	if (ctx.cr6.eq) goto loc_8244A55C;
	// cmplwi cr6,r11,114
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 114, ctx.xer);
	// bne cr6,0x8244a510
	if (!ctx.cr6.eq) goto loc_8244A510;
loc_8244A4E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8244A4EC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_8244A4F0:
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// or r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 | ctx.r3.u64;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// blt cr6,0x8244a4ac
	if (ctx.cr6.lt) goto loc_8244A4AC;
	// lbz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8244a568
	if (ctx.cr0.eq) goto loc_8244A568;
loc_8244A510:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,2004
	ctx.r5.s64 = 2004;
	// addi r6,r11,-29144
	ctx.r6.s64 = ctx.r11.s64 + -29144;
	// bl 0x8241a4f0
	ctx.lr = 0x8244A524;
	sub_8241A4F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// b 0x8244a568
	goto loc_8244A568;
loc_8244A534:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8244a4ec
	goto loc_8244A4EC;
loc_8244A53C:
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// beq cr6,0x8244a4e8
	if (ctx.cr6.eq) goto loc_8244A4E8;
	// cmplwi cr6,r11,121
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 121, ctx.xer);
	// beq cr6,0x8244a55c
	if (ctx.cr6.eq) goto loc_8244A55C;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bne cr6,0x8244a510
	if (!ctx.cr6.eq) goto loc_8244A510;
loc_8244A554:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8244a4ec
	goto loc_8244A4EC;
loc_8244A55C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8244a4ec
	goto loc_8244A4EC;
loc_8244A564:
	// li r3,228
	ctx.r3.s64 = 228;
loc_8244A568:
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

DEFINE_REX_FUNC(sub_82454DE0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,588(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82455098) {
	REX_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,624(r12)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r12.u32 + 624);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82455688) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82455690;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1544);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824556d4
	if (!ctx.cr6.gt) goto loc_824556D4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r29,r11,28460
	r29.s64 = ctx.r11.s64 + 28460;
loc_824556B0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x824556BC;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824556d8
	if (ctx.cr0.lt) goto loc_824556D8;
	// lwz r11,1544(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1544);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824556b0
	if (ctx.cr6.lt) goto loc_824556B0;
loc_824556D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824556D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82458348) {
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
	// addi r4,r10,14576
	ctx.r4.s64 = ctx.r10.s64 + 14576;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245836C;
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

DEFINE_REX_FUNC(sub_824585E8) {
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
	// addi r4,r10,14796
	ctx.r4.s64 = ctx.r10.s64 + 14796;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245860C;
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

DEFINE_REX_FUNC(sub_82459968) {
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
	ctx.lr = 0x82459970;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// bl 0x82455688
	ctx.lr = 0x82459984;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,15808
	ctx.r4.s64 = ctx.r11.s64 + 15808;
	// bl 0x824555b8
	ctx.lr = 0x8245999C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// lwz r9,1816(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r26,r11,15876
	r26.s64 = ctx.r11.s64 + 15876;
	// addi r25,r10,14160
	r25.s64 = ctx.r10.s64 + 14160;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82459a30
	if (!ctx.cr6.gt) goto loc_82459A30;
loc_824599C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x824599CC;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82404168
	ctx.lr = 0x824599EC;
	sub_82404168(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82459A00;
	sub_82404168(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82459A18;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824599c4
	if (ctx.cr6.lt) goto loc_824599C4;
loc_82459A30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82459A38;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,14352
	ctx.r4.s64 = ctx.r11.s64 + 14352;
	// bl 0x824555b8
	ctx.lr = 0x82459A50;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r23,r11,14344
	r23.s64 = ctx.r11.s64 + 14344;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r11,408(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82459A7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,14096
	ctx.r4.s64 = ctx.r11.s64 + 14096;
	// bl 0x824555b8
	ctx.lr = 0x82459A94;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r24,r10,14372
	r24.s64 = ctx.r10.s64 + 14372;
	// beq cr6,0x82459b20
	if (ctx.cr6.eq) goto loc_82459B20;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,15784
	r29.s64 = ctx.r11.s64 + 15784;
loc_82459ABC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82459AC4;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82459AE0;
	sub_82404168(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x82459AF4;
	sub_82404168(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82459B08;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82459abc
	if (ctx.cr6.lt) goto loc_82459ABC;
loc_82459B20:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r27,r9,15756
	r27.s64 = ctx.r9.s64 + 15756;
	// addi r28,r10,15864
	r28.s64 = ctx.r10.s64 + 15864;
	// beq cr6,0x82459ba4
	if (ctx.cr6.eq) goto loc_82459BA4;
loc_82459B3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82459B44;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x82459B60;
	sub_82404168(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82404168
	ctx.lr = 0x82459B74;
	sub_82404168(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82459B8C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82459b3c
	if (ctx.cr6.lt) goto loc_82459B3C;
loc_82459BA4:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82459c04
	if (ctx.cr6.eq) goto loc_82459C04;
loc_82459BB0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82459BB8;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82459BD4;
	sub_82404168(ctx, base);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82459BEC;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82459bb0
	if (ctx.cr6.lt) goto loc_82459BB0;
loc_82459C04:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82459c84
	if (ctx.cr6.eq) goto loc_82459C84;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,15656
	r29.s64 = ctx.r11.s64 + 15656;
loc_82459C18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82459C20;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82459C3C;
	sub_82404168(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82404168
	ctx.lr = 0x82459C50;
	sub_82404168(ctx, base);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82459C6C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82459c18
	if (ctx.cr6.lt) goto loc_82459C18;
loc_82459C84:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82459cfc
	if (ctx.cr6.eq) goto loc_82459CFC;
loc_82459C90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82459C98;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82404168
	ctx.lr = 0x82459CB8;
	sub_82404168(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82459CCC;
	sub_82404168(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82459CE4;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82459c90
	if (ctx.cr6.lt) goto loc_82459C90;
loc_82459CFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82459D04;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,15836
	ctx.r4.s64 = ctx.r11.s64 + 15836;
	// bl 0x824555b8
	ctx.lr = 0x82459D1C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82459da8
	if (ctx.cr6.eq) goto loc_82459DA8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,15624
	r29.s64 = ctx.r11.s64 + 15624;
loc_82459D3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82459D44;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x82459D60;
	sub_82404168(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82404168
	ctx.lr = 0x82459D74;
	sub_82404168(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82459D90;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82459d3c
	if (ctx.cr6.lt) goto loc_82459D3C;
loc_82459DA8:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82459e20
	if (ctx.cr6.eq) goto loc_82459E20;
loc_82459DB4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82459DBC;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82404168
	ctx.lr = 0x82459DDC;
	sub_82404168(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x82459DF0;
	sub_82404168(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82459E08;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82459db4
	if (ctx.cr6.lt) goto loc_82459DB4;
loc_82459E20:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r28,r10,14148
	r28.s64 = ctx.r10.s64 + 14148;
	// beq cr6,0x82459ea4
	if (ctx.cr6.eq) goto loc_82459EA4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,15596
	r29.s64 = ctx.r11.s64 + 15596;
loc_82459E3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82459E44;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82404168
	ctx.lr = 0x82459E60;
	sub_82404168(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82459E74;
	sub_82404168(ctx, base);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82459E8C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82459e3c
	if (ctx.cr6.lt) goto loc_82459E3C;
loc_82459EA4:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82459f50
	if (ctx.cr6.eq) goto loc_82459F50;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,15568
	r29.s64 = ctx.r11.s64 + 15568;
loc_82459EB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82459EC0;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82404168
	ctx.lr = 0x82459EE0;
	sub_82404168(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82404168
	ctx.lr = 0x82459EF4;
	sub_82404168(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82459F08;
	sub_82404168(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x82459F1C;
	sub_82404168(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82459F38;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459f54
	if (ctx.cr0.lt) goto loc_82459F54;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82459eb8
	if (ctx.cr6.lt) goto loc_82459EB8;
loc_82459F50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82459F54:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8247AFF8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247b088
	if (ctx.cr0.eq) goto loc_8247B088;
	// lwz r8,12(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r7,24(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8247b030
	if (!ctx.cr0.eq) goto loc_8247B030;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8247B030:
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r11,4
	ctx.r11.s64 = 4;
loc_8247B040:
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r10,44(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247b074
	if (ctx.cr0.eq) goto loc_8247B074;
	// lwz r10,24(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,-4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,44(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// lwz r10,44(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8247b074
	if (ctx.cr6.eq) goto loc_8247B074;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8247B074:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8247b040
	if (ctx.cr6.lt) goto loc_8247B040;
	// blr 
	return;
loc_8247B088:
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r7,12(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8247B0A8:
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r9,44(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8247b0f4
	if (ctx.cr0.eq) goto loc_8247B0F4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8247b0f4
	if (!ctx.cr6.lt) goto loc_8247B0F4;
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r5,4(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,44(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// lwz r9,44(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8247b0f4
	if (!ctx.cr6.eq) goto loc_8247B0F4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8247B0F4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8247b0a8
	if (ctx.cr6.lt) goto loc_8247B0A8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82489CE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82489CF0;
	// std r7,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824009e0
	ctx.lr = 0x82489D30;
	sub_824009E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stb r4,351(r1)
	REX_STORE_U8(ctx.r1.u32 + 351, ctx.r4.u8);
	// beq cr6,0x82489d74
	if (ctx.cr6.eq) goto loc_82489D74;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82489d70
	if (ctx.cr6.eq) goto loc_82489D70;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82489d64
	if (ctx.cr6.eq) goto loc_82489D64;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82489d74
	if (!ctx.cr6.eq) goto loc_82489D74;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// b 0x82489d74
	goto loc_82489D74;
loc_82489D64:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// b 0x82489d74
	goto loc_82489D74;
loc_82489D70:
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
loc_82489D74:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r3,196(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 196);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r11,28576
	ctx.r6.s64 = ctx.r11.s64 + 28576;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8241a718
	ctx.lr = 0x82489D8C;
	sub_8241A718(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82493788) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82493790;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82444750
	ctx.lr = 0x824937A8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824937c0
	if (ctx.cr0.eq) goto loc_824937C0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82445760
	ctx.lr = 0x824937BC;
	sub_82445760(ctx, base);
	// b 0x824937c4
	goto loc_824937C4;
loc_824937C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824937C4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824937e0
	if (ctx.cr6.eq) goto loc_824937E0;
	// lwz r11,108(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 108);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,108(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,108(r29)
	REX_STORE_U32(r29.u32 + 108, ctx.r11.u32);
loc_824937E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82494570) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82494578;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82444750
	ctx.lr = 0x8249458C;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824945a0
	if (ctx.cr0.eq) goto loc_824945A0;
	// bl 0x82446f70
	ctx.lr = 0x82494598;
	sub_82446F70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824945a4
	goto loc_824945A4;
loc_824945A0:
	// li r31,0
	r31.s64 = 0;
loc_824945A4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82494624
	if (ctx.cr6.eq) goto loc_82494624;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r11.u32);
	// beq cr6,0x824945f0
	if (ctx.cr6.eq) goto loc_824945F0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824945E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82494624
	if (ctx.cr0.eq) goto loc_82494624;
loc_824945F0:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824945F8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82494618
	if (ctx.cr0.eq) goto loc_82494618;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-22516
	ctx.r6.s64 = ctx.r11.s64 + -22516;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82444918
	ctx.lr = 0x82494614;
	sub_82444918(ctx, base);
	// b 0x8249461c
	goto loc_8249461C;
loc_82494618:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249461C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82494628
	if (!ctx.cr6.eq) goto loc_82494628;
loc_82494624:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82494628:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82497680) {
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
	ctx.lr = 0x82497688;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824977a4
	if (ctx.cr6.eq) goto loc_824977A4;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x824977a4
	if (!ctx.cr6.eq) goto loc_824977A4;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// addi r30,r4,16
	r30.s64 = ctx.r4.s64 + 16;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x824977a4
	if (!ctx.cr6.eq) goto loc_824977A4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824977a4
	if (ctx.cr6.eq) goto loc_824977A4;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x824977a4
	if (!ctx.cr6.eq) goto loc_824977A4;
	// lwz r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x824977a4
	if (!ctx.cr6.eq) goto loc_824977A4;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82444750
	ctx.lr = 0x824976E4;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824976fc
	if (ctx.cr0.eq) goto loc_824976FC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82444d78
	ctx.lr = 0x824976F4;
	sub_82444D78(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x82497700
	goto loc_82497700;
loc_824976FC:
	// li r27,0
	r27.s64 = 0;
loc_82497700:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824977a4
	if (ctx.cr6.eq) goto loc_824977A4;
	// lwz r28,24(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r29,24(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 24);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_82497714:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82497714
	if (!ctx.cr6.eq) goto loc_82497714;
	// subf r10,r28,r11
	ctx.r10.u64 = ctx.r11.u64 - r28.u64;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82497734:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82497734
	if (!ctx.cr6.eq) goto loc_82497734;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82444608
	ctx.lr = 0x82497768;
	sub_82444608(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x824977a4
	if (ctx.cr0.eq) goto loc_824977A4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r5,r11,19204
	ctx.r5.s64 = ctx.r11.s64 + 19204;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82404168
	ctx.lr = 0x8249778C;
	sub_82404168(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = r31.u64 + r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
	// stw r31,24(r27)
	REX_STORE_U32(r27.u32 + 24, r31.u32);
	// b 0x824977a8
	goto loc_824977A8;
loc_824977A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824977A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824A1F10) {
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
	ctx.lr = 0x824A1F18;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r14,0
	r14.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r14,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r14.u32);
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// stw r14,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r14.u32);
	// mr r15,r6
	r15.u64 = ctx.r6.u64;
	// stw r14,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r14.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r14,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r14.u32);
	// mr r16,r14
	r16.u64 = r14.u64;
	// stw r14,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r14.u32);
	// stw r14,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r14.u32);
	// beq cr6,0x824a2550
	if (ctx.cr6.eq) goto loc_824A2550;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x824a2550
	if (!ctx.cr6.eq) goto loc_824A2550;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r18,r4,16
	r18.s64 = ctx.r4.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1f78
	if (ctx.cr6.eq) goto loc_824A1F78;
	// lwz r6,36(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x824a1f7c
	goto loc_824A1F7C;
loc_824A1F78:
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
loc_824A1F7C:
	// li r9,6
	ctx.r9.s64 = 6;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// beq cr6,0x824a1f8c
	if (ctx.cr6.eq) goto loc_824A1F8C;
	// li r9,22
	ctx.r9.s64 = 22;
loc_824A1F8C:
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 20);
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r31,r14
	r31.u64 = r14.u64;
	// bl 0x8249b4f0
	ctx.lr = 0x824A1FB4;
	sub_8249B4F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a2538
	if (ctx.cr0.lt) goto loc_824A2538;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824a1fc8
	if (!ctx.cr6.eq) goto loc_824A1FC8;
	// li r31,1
	r31.s64 = 1;
loc_824A1FC8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// addi r30,r11,32416
	r30.s64 = ctx.r11.s64 + 32416;
	// bne cr6,0x824a201c
	if (!ctx.cr6.eq) goto loc_824A201C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x824a2108
	if (!ctx.cr6.eq) goto loc_824A2108;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,101
	ctx.r5.s64 = 101;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82497848
	ctx.lr = 0x824A2004;
	sub_82497848(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a2538
	if (ctx.cr0.lt) goto loc_824A2538;
	// lwz r16,144(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824a2024
	if (!ctx.cr6.eq) goto loc_824A2024;
	// li r31,1
	r31.s64 = 1;
loc_824A201C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x824a2064
	if (!ctx.cr6.eq) goto loc_824A2064;
loc_824A2024:
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 20);
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8249b4f0
	ctx.lr = 0x824A2050;
	sub_8249B4F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a2538
	if (ctx.cr0.lt) goto loc_824A2538;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824a2064
	if (!ctx.cr6.eq) goto loc_824A2064;
	// li r31,1
	r31.s64 = 1;
loc_824A2064:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// bne cr6,0x824a20b0
	if (!ctx.cr6.eq) goto loc_824A20B0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x824a20fc
	if (!ctx.cr6.eq) goto loc_824A20FC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,101
	ctx.r5.s64 = 101;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82497848
	ctx.lr = 0x824A2098;
	sub_82497848(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a2538
	if (ctx.cr0.lt) goto loc_824A2538;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824a20b8
	if (!ctx.cr6.eq) goto loc_824A20B8;
	// lwz r16,144(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r31,1
	r31.s64 = 1;
loc_824A20B0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x824a20fc
	if (!ctx.cr6.eq) goto loc_824A20FC;
loc_824A20B8:
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824c6b98
	ctx.lr = 0x824A20CC;
	sub_824C6B98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a2538
	if (ctx.cr0.lt) goto loc_824A2538;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824a2548
	if (ctx.cr6.eq) goto loc_824A2548;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,8(r18)
	ctx.r7.u64 = REX_LOAD_U32(r18.u32 + 8);
	// li r5,3004
	ctx.r5.s64 = 3004;
	// addi r6,r11,-10960
	ctx.r6.s64 = ctx.r11.s64 + -10960;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82494d48
	ctx.lr = 0x824A20F8;
	sub_82494D48(ctx, base);
	// b 0x824a2538
	goto loc_824A2538;
loc_824A20FC:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// mr r19,r16
	r19.u64 = r16.u64;
	// bne cr6,0x824a210c
	if (!ctx.cr6.eq) goto loc_824A210C;
loc_824A2108:
	// lwz r19,152(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
loc_824A210C:
	// lwz r24,44(r19)
	r24.u64 = REX_LOAD_U32(r19.u32 + 44);
	// addi r23,r1,156
	r23.s64 = ctx.r1.s64 + 156;
	// addi r22,r1,160
	r22.s64 = ctx.r1.s64 + 160;
	// mr r25,r17
	r25.u64 = r17.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x824a2368
	if (ctx.cr6.eq) goto loc_824A2368;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r21,r11,-6432
	r21.s64 = ctx.r11.s64 + -6432;
	// addi r20,r10,-14616
	r20.s64 = ctx.r10.s64 + -14616;
loc_824A2134:
	// lwz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 12);
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// lwz r27,8(r24)
	r27.u64 = REX_LOAD_U32(r24.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a2160
	if (ctx.cr6.eq) goto loc_824A2160;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// bne cr6,0x824a2160
	if (!ctx.cr6.eq) goto loc_824A2160;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
loc_824A2160:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// beq cr6,0x824a2178
	if (ctx.cr6.eq) goto loc_824A2178;
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a235c
	if (ctx.cr0.eq) goto loc_824A235C;
loc_824A2178:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824a2354
	if (ctx.cr6.eq) goto loc_824A2354;
	// lwz r28,24(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 24);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r30,48(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 48);
	// beq cr6,0x824a219c
	if (ctx.cr6.eq) goto loc_824A219C;
	// lwz r29,16(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x824a21a0
	goto loc_824A21A0;
loc_824A219C:
	// mr r29,r14
	r29.u64 = r14.u64;
loc_824A21A0:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A21A8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a21c4
	if (ctx.cr0.eq) goto loc_824A21C4;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x824A21C0;
	sub_82444918(ctx, base);
	// b 0x824a21c8
	goto loc_824A21C8;
loc_824A21C4:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
loc_824A21C8:
	// stw r3,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a2538
	if (ctx.cr6.eq) goto loc_824A2538;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A21DC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a21f8
	if (ctx.cr0.eq) goto loc_824A21F8;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x824A21F4;
	sub_82444918(ctx, base);
	// b 0x824a21fc
	goto loc_824A21FC;
loc_824A21F8:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
loc_824A21FC:
	// stw r3,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a2538
	if (ctx.cr6.eq) goto loc_824A2538;
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a22a4
	if (ctx.cr0.eq) goto loc_824A22A4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824987e0
	ctx.lr = 0x824A2228;
	sub_824987E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// beq 0x824a23b8
	if (ctx.cr0.eq) goto loc_824A23B8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,8(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8249c6f0
	ctx.lr = 0x824A2248;
	sub_8249C6F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x824a2538
	if (ctx.cr0.eq) goto loc_824A2538;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x824a2264
	if (ctx.cr6.eq) goto loc_824A2264;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r31.u32);
	// b 0x824a22a4
	goto loc_824A22A4;
loc_824A2264:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,20(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 20);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8249c4a8
	ctx.lr = 0x824A2274;
	sub_8249C4A8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x824a2538
	if (ctx.cr0.eq) goto loc_824A2538;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8249d2e8
	ctx.lr = 0x824A2294;
	sub_8249D2E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a2538
	if (ctx.cr0.eq) goto loc_824A2538;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
loc_824A22A4:
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a233c
	if (ctx.cr0.eq) goto loc_824A233C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824956c8
	ctx.lr = 0x824A22BC;
	sub_824956C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824a23c4
	if (!ctx.cr0.eq) goto loc_824A23C4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824987e0
	ctx.lr = 0x824A22D8;
	sub_824987E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824a23c4
	if (ctx.cr0.eq) goto loc_824A23C4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,20(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 20);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8249c4a8
	ctx.lr = 0x824A22F0;
	sub_8249C4A8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x824a2538
	if (ctx.cr0.eq) goto loc_824A2538;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8249c6f0
	ctx.lr = 0x824A230C;
	sub_8249C6F0(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x824a2538
	if (ctx.cr0.eq) goto loc_824A2538;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,8(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8249d2e8
	ctx.lr = 0x824A232C;
	sub_8249D2E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a2538
	if (ctx.cr0.eq) goto loc_824A2538;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
loc_824A233C:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lwz r25,12(r25)
	r25.u64 = REX_LOAD_U32(r25.u32 + 12);
	// addi r23,r11,12
	r23.s64 = ctx.r11.s64 + 12;
	// addi r22,r10,12
	r22.s64 = ctx.r10.s64 + 12;
	// b 0x824a235c
	goto loc_824A235C;
loc_824A2354:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824a2370
	if (ctx.cr6.eq) goto loc_824A2370;
loc_824A235C:
	// lwz r24,12(r24)
	r24.u64 = REX_LOAD_U32(r24.u32 + 12);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x824a2134
	if (!ctx.cr6.eq) goto loc_824A2134;
loc_824A2368:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x824a24b0
	if (!ctx.cr6.eq) goto loc_824A24B0;
loc_824A2370:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x824a24b0
	if (!ctx.cr6.eq) goto loc_824A24B0;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82444750
	ctx.lr = 0x824A2380;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a23e4
	if (ctx.cr0.eq) goto loc_824A23E4;
	// cntlzw r11,r16
	ctx.r11.u64 = r16.u32 == 0 ? 32 : __builtin_clz(r16.u32);
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r8,1
	ctx.r8.s64 = 1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,31
	ctx.r5.s64 = ctx.r11.s64 + 31;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824474c0
	ctx.lr = 0x824A23B0;
	sub_824474C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a23e8
	goto loc_824A23E8;
loc_824A23B8:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x824a23d0
	goto loc_824A23D0;
loc_824A23C4:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_824A23D0:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// lwz r5,8(r18)
	ctx.r5.u64 = REX_LOAD_U32(r18.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82498c30
	ctx.lr = 0x824A23E0;
	sub_82498C30(ctx, base);
	// b 0x824a2538
	goto loc_824A2538;
loc_824A23E4:
	// mr r31,r14
	r31.u64 = r14.u64;
loc_824A23E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824a2538
	if (ctx.cr6.eq) goto loc_824A2538;
	// lwz r11,40(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a241c
	if (ctx.cr6.eq) goto loc_824A241C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A2410;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a2538
	if (ctx.cr0.eq) goto loc_824A2538;
loc_824A241C:
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// bl 0x82444750
	ctx.lr = 0x824A242C;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a244c
	if (ctx.cr0.eq) goto loc_824A244C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-24696
	ctx.r6.s64 = ctx.r11.s64 + -24696;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x824A2448;
	sub_82444918(ctx, base);
	// b 0x824a2450
	goto loc_824A2450;
loc_824A244C:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
loc_824A2450:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// beq cr6,0x824a2538
	if (ctx.cr6.eq) goto loc_824A2538;
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// bl 0x824974b0
	ctx.lr = 0x824A247C;
	sub_824974B0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82493e80
	ctx.lr = 0x824A248C;
	sub_82493E80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824a253c
	if (ctx.cr0.eq) goto loc_824A253C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8249ad80
	ctx.lr = 0x824A24A0;
	sub_8249AD80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a253c
	if (ctx.cr0.eq) goto loc_824A253C;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a253c
	goto loc_824A253C;
loc_824A24B0:
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x824a24d0
	if (ctx.cr6.eq) goto loc_824A24D0;
loc_824A24C0:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a24c0
	if (!ctx.cr6.eq) goto loc_824A24C0;
loc_824A24D0:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// bne cr6,0x824a2500
	if (!ctx.cr6.eq) goto loc_824A2500;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x824a24ec
	if (ctx.cr6.eq) goto loc_824A24EC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,25300
	ctx.r9.s64 = ctx.r11.s64 + 25300;
	// b 0x824a24f4
	goto loc_824A24F4;
loc_824A24EC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r9,r11,-26856
	ctx.r9.s64 = ctx.r11.s64 + -26856;
loc_824A24F4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-6476
	ctx.r6.s64 = ctx.r11.s64 + -6476;
	// b 0x824a2524
	goto loc_824A2524;
loc_824A2500:
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x824a2514
	if (ctx.cr6.eq) goto loc_824A2514;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,25300
	ctx.r9.s64 = ctx.r11.s64 + 25300;
	// b 0x824a251c
	goto loc_824A251C;
loc_824A2514:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r9,r11,-26856
	ctx.r9.s64 = ctx.r11.s64 + -26856;
loc_824A251C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-6532
	ctx.r6.s64 = ctx.r11.s64 + -6532;
loc_824A2524:
	// li r5,3013
	ctx.r5.s64 = 3013;
	// lwz r7,8(r18)
	ctx.r7.u64 = REX_LOAD_U32(r18.u32 + 8);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82494d48
	ctx.lr = 0x824A2538;
	sub_82494D48(ctx, base);
loc_824A2538:
	// mr r31,r14
	r31.u64 = r14.u64;
loc_824A253C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x824a2554
	if (!ctx.cr6.eq) goto loc_824A2554;
loc_824A2548:
	// lwz r3,164(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// b 0x824a2554
	goto loc_824A2554;
loc_824A2550:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A2554:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824C6D60) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x823f02b8
	ctx.lr = 0x824C6D7C;
	sub_823F02B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824c6d94
	if (!ctx.cr6.eq) goto loc_824C6D94;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_824C6D94:
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// subf r9,r3,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stb r9,-1(r10)
	REX_STORE_U8(ctx.r10.u32 + -1, ctx.r9.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C7F30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824C7F38;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,432(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 432);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824c80c0
	if (ctx.cr6.eq) goto loc_824C80C0;
	// lwz r11,164(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c80c0
	if (ctx.cr6.eq) goto loc_824C80C0;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c7f94
	if (!ctx.cr6.eq) goto loc_824C7F94;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824C7F90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
loc_824C7F94:
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,112(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824c80b4
	if (!ctx.cr6.gt) goto loc_824C80B4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r11,76
	ctx.r6.s64 = ctx.r11.s64 + 76;
loc_824C7FB4:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c80c0
	if (ctx.cr6.eq) goto loc_824C80C0;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824c80c0
	if (ctx.cr6.eq) goto loc_824C80C0;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824c80c0
	if (ctx.cr6.eq) goto loc_824C80C0;
	// lhz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824c80c0
	if (ctx.cr6.eq) goto loc_824C80C0;
	// lhz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824c80c0
	if (ctx.cr6.eq) goto loc_824C80C0;
	// lhz r10,18(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824c80c0
	if (ctx.cr6.eq) goto loc_824C80C0;
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c80c0
	if (ctx.cr6.eq) goto loc_824C80C0;
	// lwz r11,164(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 164);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x824c80c0
	if (ctx.cr6.lt) goto loc_824C80C0;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x824c8034
	if (ctx.cr6.eq) goto loc_824C8034;
	// li r29,1
	r29.s64 = 1;
loc_824C8034:
	// li r10,8
	ctx.r10.s64 = 8;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r5,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u32);
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x824c8050
	if (ctx.cr6.eq) goto loc_824C8050;
	// li r29,1
	r29.s64 = 1;
loc_824C8050:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x824c8068
	if (ctx.cr6.eq) goto loc_824C8068;
	// li r29,1
	r29.s64 = 1;
loc_824C8068:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x824c8080
	if (ctx.cr6.eq) goto loc_824C8080;
	// li r29,1
	r29.s64 = 1;
loc_824C8080:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x824c8098
	if (ctx.cr6.eq) goto loc_824C8098;
	// li r29,1
	r29.s64 = 1;
loc_824C8098:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// addi r8,r8,256
	ctx.r8.s64 = ctx.r8.s64 + 256;
	// addi r6,r6,84
	ctx.r6.s64 = ctx.r6.s64 + 84;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824c7fb4
	if (ctx.cr6.lt) goto loc_824C7FB4;
loc_824C80B4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_824C80C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824D3768) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// vspltisw128 v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x4)));
	// vspltisw128 v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0x2)));
	// vor128 v61,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// addi r11,r11,20816
	ctx.r11.s64 = ctx.r11.s64 + 20816;
	// vspltisw128 v62,8
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x8)));
	// vspltisw128 v60,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0x1)));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// vcsxwfp128 v7,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vcsxwfp128 v13,v59,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// addi r10,r10,20800
	ctx.r10.s64 = ctx.r10.s64 + 20800;
	// vcsxwfp128 v5,v62,0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v58,v60,8
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3B800000)))));
	// vcsxwfp128 v60,v60,7
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3C000000)))));
	// vspltw128 v59,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v10,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v6,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vspltw128 v11,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vmulfp128 v0,v61,v59
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vspltw128 v63,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v59,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// vspltw128 v57,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v62,v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// vcmpgtfp128 v12,v63,v61
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vcmpgtfp128 v8,v59,v61
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vcmpgtfp128 v9,v57,v61
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vmaddfp v7,v0,v7,v10
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v6,v0,v5,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v10,v0,v13,v11
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v63,v7,v58
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v58.f32)));
	// vmulfp128 v60,v6,v60
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vrfiz128 v63,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v63.f32), SIMDE_MM_FROUND_TO_ZERO | SIMDE_MM_FROUND_NO_EXC));
	// vrfiz128 v60,v60
	simde_mm_store_ps(ctx.v60.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v60.f32), SIMDE_MM_FROUND_TO_ZERO | SIMDE_MM_FROUND_NO_EXC));
	// vaddfp128 v13,v7,v63
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vaddfp128 v11,v6,v60
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vsel v12,v11,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vsel v13,v12,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vsel v12,v13,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v1,v12,v62
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vrlimi128 v1,v61,1,0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 228), 1));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D9F70) {
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
	ctx.lr = 0x824D9F78;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824da014
	if (ctx.cr6.lt) goto loc_824DA014;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r31,388(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 388);
	// bl 0x824d7948
	ctx.lr = 0x824D9F9C;
	sub_824D7948(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r27,r11,21860
	r27.s64 = ctx.r11.s64 + 21860;
	// addi r4,r10,28488
	ctx.r4.s64 = ctx.r10.s64 + 28488;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9FB8;
	sub_824EAC90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d8700
	ctx.lr = 0x824D9FC0;
	sub_824D8700(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824da008
	if (ctx.cr6.eq) goto loc_824DA008;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r28,r11,r31
	r28.u64 = ctx.r11.u64 + r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x824da008
	if (!ctx.cr6.gt) goto loc_824DA008;
loc_824D9FE0:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824d9e88
	ctx.lr = 0x824D9FF4;
	sub_824D9E88(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,20
	r28.s64 = r28.s64 + 20;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824d9fe0
	if (ctx.cr6.lt) goto loc_824D9FE0;
loc_824DA008:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d79a8
	ctx.lr = 0x824DA014;
	sub_824D79A8(ctx, base);
loc_824DA014:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824DCB38) {
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
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x824dbc80
	ctx.lr = 0x824DCB50;
	sub_824DBC80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824DD708) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8269d770
	ctx.lr = 0x824DD71C;
	sub_8269D770(ctx, base);
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

DEFINE_REX_FUNC(sub_824DDEA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824DDEB0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ddfc8
	if (ctx.cr0.eq) goto loc_824DDFC8;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824ddfc8
	if (!ctx.cr0.eq) goto loc_824DDFC8;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824ddeec
	if (!ctx.cr0.eq) goto loc_824DDEEC;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824ddeec
	if (!ctx.cr0.eq) goto loc_824DDEEC;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x824ddef0
	if (!ctx.cr0.eq) goto loc_824DDEF0;
loc_824DDEEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824DDEF0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ddfc8
	if (ctx.cr0.eq) goto loc_824DDFC8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r30,r10,-19552
	r30.s64 = ctx.r10.s64 + -19552;
	// rlwinm r29,r11,10,25,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r29,r30
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + r30.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x824ddf2c
	if (ctx.cr6.lt) goto loc_824DDF2C;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824ddf2c
	if (!ctx.cr0.eq) goto loc_824DDF2C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r4,9(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 9);
	// bl 0x824dde08
	ctx.lr = 0x824DDF28;
	sub_824DDE08(ctx, base);
	// stb r3,9(r31)
	REX_STORE_U8(r31.u32 + 9, ctx.r3.u8);
loc_824DDF2C:
	// lwzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r30.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x824ddf54
	if (ctx.cr6.lt) goto loc_824DDF54;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824ddf54
	if (!ctx.cr0.eq) goto loc_824DDF54;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r4,10(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 10);
	// bl 0x824dde08
	ctx.lr = 0x824DDF50;
	sub_824DDE08(ctx, base);
	// stb r3,10(r31)
	REX_STORE_U8(r31.u32 + 10, ctx.r3.u8);
loc_824DDF54:
	// lwzx r10,r29,r30
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + r30.u32);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// addi r30,r11,-19112
	r30.s64 = ctx.r11.s64 + -19112;
	// bge cr6,0x824ddf7c
	if (!ctx.cr6.lt) goto loc_824DDF7C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,8,24,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824ddf98
	if (!ctx.cr6.eq) goto loc_824DDF98;
loc_824DDF7C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824ddf98
	if (!ctx.cr0.eq) goto loc_824DDF98;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824dde08
	ctx.lr = 0x824DDF94;
	sub_824DDE08(ctx, base);
	// stb r3,11(r31)
	REX_STORE_U8(r31.u32 + 11, ctx.r3.u8);
loc_824DDF98:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,8,24,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x824ddfbc
	if (!ctx.cr6.eq) goto loc_824DDFBC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r4,11(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 11);
	// bl 0x824dde08
	ctx.lr = 0x824DDFB8;
	sub_824DDE08(ctx, base);
	// stb r3,11(r31)
	REX_STORE_U8(r31.u32 + 11, ctx.r3.u8);
loc_824DDFBC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_824DDFC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824E7E68) {
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
	ctx.lr = 0x824E7E70;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// li r17,0
	r17.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824e7e9c
	if (!ctx.cr6.eq) goto loc_824E7E9C;
	// mr r18,r17
	r18.u64 = r17.u64;
	// b 0x824e7ea8
	goto loc_824E7EA8;
loc_824E7E9C:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r18,r11,27,31,31
	r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_824E7EA8:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824e7ebc
	if (ctx.cr6.lt) goto loc_824E7EBC;
	// bl 0x826b40a0
	ctx.lr = 0x824E7EBC;
	sub_826B40A0(ctx, base);
loc_824E7EBC:
	// lwz r30,0(r14)
	r30.u64 = REX_LOAD_U32(r14.u32 + 0);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r16,0(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwzu r11,4(r30)
	ea = 4 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e7ed8
	if (!ctx.cr0.eq) goto loc_824E7ED8;
	// bl 0x826b40a0
	ctx.lr = 0x824E7ED8;
	sub_826B40A0(ctx, base);
loc_824E7ED8:
	// lwz r22,0(r30)
	r22.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwzu r28,4(r30)
	ea = 4 + r30.u32;
	r28.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// addi r15,r30,4
	r15.s64 = r30.s64 + 4;
	// rlwimi r11,r22,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// clrlwi r30,r22,21
	r30.u64 = r22.u32 & 0x7FF;
	// rlwinm r29,r11,24,27,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(r29.u32, 3, ctx.xer);
	// beq cr6,0x824e7f00
	if (ctx.cr6.eq) goto loc_824E7F00;
	// bl 0x826b40a0
	ctx.lr = 0x824E7F00;
	sub_826B40A0(ctx, base);
loc_824E7F00:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824e5c68
	ctx.lr = 0x824E7F14;
	sub_824E5C68(ctx, base);
	// lwz r23,80(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,80
	ctx.r11.s64 = 80;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r9,r23,16,10,15
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 16) & 0x3F0000;
	// rlwimi r11,r30,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// or r20,r9,r10
	r20.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stwu r20,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, r20.u32);
	r31.u32 = ea;
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// rlwimi r8,r23,16,10,15
	ctx.r8.u64 = (__builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 16) & 0x3F0000) | (ctx.r8.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r24,33
	r24.s64 = 33;
	// or r21,r8,r10
	r21.u64 = ctx.r8.u64 | ctx.r10.u64;
	// ori r10,r11,12816
	ctx.r10.u64 = ctx.r11.u64 | 12816;
	// stwu r21,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, r21.u32);
	r31.u32 = ea;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r28,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFF0000;
	// lis r8,228
	ctx.r8.s64 = 14942208;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// stwu r10,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r31.u32 = ea;
	// stwu r24,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, r24.u32);
	r31.u32 = ea;
	// stwu r21,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, r21.u32);
	r31.u32 = ea;
	// stwu r9,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r31.u32 = ea;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// beq cr6,0x824e7fc4
	if (ctx.cr6.eq) goto loc_824E7FC4;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,-19960
	ctx.r9.s64 = ctx.r9.s64 + -19960;
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,18,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xC;
	// rlwinm r7,r8,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r7,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r25,r9,r11
	r25.u64 = ctx.r9.u64 | ctx.r11.u64;
	// b 0x824e7fc8
	goto loc_824E7FC8;
loc_824E7FC4:
	// li r25,12816
	r25.s64 = 12816;
loc_824E7FC8:
	// rlwinm r3,r28,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xF000000;
	// bl 0x824e5b18
	ctx.lr = 0x824E7FD0;
	sub_824E5B18(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824e6198
	ctx.lr = 0x824E7FE4;
	sub_824E6198(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x824e800c
	if (!ctx.cr6.eq) goto loc_824E800C;
	// cmplwi cr6,r25,12816
	ctx.cr6.compare<uint32_t>(r25.u32, 12816, ctx.xer);
	// bne cr6,0x824e800c
	if (!ctx.cr6.eq) goto loc_824E800C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r29,r3,16
	r29.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r10,r11,16,10,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F0000;
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | r29.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x824e802c
	goto loc_824E802C;
loc_824E800C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r29,r3,16
	r29.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// or r9,r27,r25
	ctx.r9.u64 = r27.u64 | r25.u64;
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | r29.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stwu r9,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r31.u32 = ea;
loc_824E802C:
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// clrlwi r26,r11,26
	r26.u64 = ctx.r11.u32 & 0x3F;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r30,16
	ctx.r9.u64 = r30.u32 & 0xFFFF;
	// oris r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 65536;
	// oris r9,r9,81
	ctx.r9.u64 = ctx.r9.u64 | 5308416;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// stwu r17,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r17.u32);
	ctx.r11.u32 = ea;
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r11.u32 = ea;
	// stwu r21,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x824e8088
	if (!ctx.cr6.eq) goto loc_824E8088;
	// cmplwi cr6,r25,12816
	ctx.cr6.compare<uint32_t>(r25.u32, 12816, ctx.xer);
	// bne cr6,0x824e8088
	if (!ctx.cr6.eq) goto loc_824E8088;
	// rlwinm r8,r26,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0xFFFF0000;
	// or r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 | r29.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x824e80a0
	goto loc_824E80A0;
loc_824E8088:
	// rlwinm r8,r26,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0xFFFF0000;
	// or r7,r27,r25
	ctx.r7.u64 = r27.u64 | r25.u64;
	// oris r8,r8,64
	ctx.r8.u64 = ctx.r8.u64 | 4194304;
	// or r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 | r29.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
loc_824E80A0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// oris r10,r10,65
	ctx.r10.u64 = ctx.r10.u64 | 4259840;
	// li r8,50
	ctx.r8.s64 = 50;
	// li r28,4369
	r28.s64 = 4369;
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(r23.s32, 4, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// li r8,93
	ctx.r8.s64 = 93;
	// rlwimi r10,r18,8,23,23
	ctx.r10.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 8) & 0x100) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFEFF);
	// clrlwi r10,r10,23
	ctx.r10.u64 = ctx.r10.u32 & 0x1FF;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// beq cr6,0x824e80ec
	if (ctx.cr6.eq) goto loc_824E80EC;
	// bl 0x826b40a0
	ctx.lr = 0x824E80EC;
	sub_826B40A0(ctx, base);
loc_824E80EC:
	// cmplwi cr6,r16,67
	ctx.cr6.compare<uint32_t>(r16.u32, 67, ctx.xer);
	// bne cr6,0x824e8110
	if (!ctx.cr6.eq) goto loc_824E8110;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e6318
	ctx.lr = 0x824E8104;
	sub_824E6318(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r20.u32);
	// b 0x824e8248
	goto loc_824E8248;
loc_824E8110:
	// cmplwi cr6,r16,68
	ctx.cr6.compare<uint32_t>(r16.u32, 68, ctx.xer);
	// bne cr6,0x824e824c
	if (!ctx.cr6.eq) goto loc_824E824C;
	// stw r20,0(r31)
	REX_STORE_U32(r31.u32 + 0, r20.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// stwu r20,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, r20.u32);
	r31.u32 = ea;
	// lis r10,68
	ctx.r10.s64 = 4456448;
	// rlwinm r9,r26,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0xFFFF0000;
	// ori r7,r10,15
	ctx.r7.u64 = ctx.r10.u64 | 15;
	// li r10,272
	ctx.r10.s64 = 272;
	// oris r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 4194304;
	// stwu r11,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r31.u32 = ea;
	// addi r11,r30,16
	ctx.r11.s64 = r30.s64 + 16;
	// or r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 | r29.u64;
	// or r6,r27,r25
	ctx.r6.u64 = r27.u64 | r25.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// li r5,73
	ctx.r5.s64 = 73;
	// stwu r7,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	r31.u32 = ea;
	// oris r11,r11,65
	ctx.r11.u64 = ctx.r11.u64 | 4259840;
	// rlwinm. r4,r22,0,8,11
	ctx.r4.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stwu r10,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r31.u32 = ea;
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// stwu r9,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r31.u32 = ea;
	// stwu r6,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	r31.u32 = ea;
	// stwu r11,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r31.u32 = ea;
	// stwu r17,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, r17.u32);
	r31.u32 = ea;
	// stwu r11,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r31.u32 = ea;
	// stwu r28,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, r28.u32);
	r31.u32 = ea;
	// stwu r5,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	r31.u32 = ea;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// beq 0x824e818c
	if (ctx.cr0.eq) goto loc_824E818C;
	// li r8,256
	ctx.r8.s64 = 256;
loc_824E818C:
	// rlwinm. r10,r22,8,28,31
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 8) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// beq 0x824e81c8
	if (ctx.cr0.eq) goto loc_824E81C8;
	// rlwinm. r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824e81b4
	if (ctx.cr0.eq) goto loc_824E81B4;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,-19976
	ctx.r9.s64 = ctx.r9.s64 + -19976;
	// b 0x824e81bc
	goto loc_824E81BC;
loc_824E81B4:
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// addi r9,r9,-19992
	ctx.r9.s64 = ctx.r9.s64 + -19992;
loc_824E81BC:
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r9,r10,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
loc_824E81C8:
	// or. r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x824e81ec
	if (!ctx.cr0.eq) goto loc_824E81EC;
	// rlwinm r10,r22,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xF0000;
	// lis r9,15
	ctx.r9.s64 = 983040;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824e81ec
	if (!ctx.cr6.eq) goto loc_824E81EC;
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r20.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x824e8238
	goto loc_824E8238;
loc_824E81EC:
	// stw r21,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r21.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// rlwinm. r6,r22,0,15,15
	ctx.r6.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r9,r22,0,12,15
	ctx.r9.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xF0000;
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// beq 0x824e8208
	if (ctx.cr0.eq) goto loc_824E8208;
	// li r11,1
	ctx.r11.s64 = 1;
loc_824E8208:
	// rlwinm. r6,r9,0,14,14
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x824e8214
	if (ctx.cr0.eq) goto loc_824E8214;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_824E8214:
	// rlwinm. r6,r9,0,13,13
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x824e8220
	if (ctx.cr0.eq) goto loc_824E8220;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_824E8220:
	// rlwinm. r9,r9,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824e822c
	if (ctx.cr0.eq) goto loc_824E822C;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_824E822C:
	// or r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 | ctx.r8.u64;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_824E8238:
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r20.u32);
	// li r10,8738
	ctx.r10.s64 = 8738;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
loc_824E8248:
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
loc_824E824C:
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stw r15,0(r14)
	REX_STORE_U32(r14.u32 + 0, r15.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8250AED8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r5,4(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
loc_8250AEE4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8250af58
	if (ctx.cr6.eq) goto loc_8250AF58;
	// lwz r7,0(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r11,r7,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250af04
	if (!ctx.cr0.eq) goto loc_8250AF04;
	// rlwinm. r11,r7,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8250af08
	if (ctx.cr0.eq) goto loc_8250AF08;
loc_8250AF04:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8250AF08:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250af50
	if (ctx.cr0.eq) goto loc_8250AF50;
	// rlwinm. r8,r7,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8250af4c
	if (ctx.cr0.eq) goto loc_8250AF4C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8250AF24:
	// rlwinm r4,r7,27,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0xFF;
	// li r31,1
	r31.s64 = 1;
	// srw r4,r4,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r4,r31,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r4.u8 & 0x3F));
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8250af24
	if (ctx.cr6.lt) goto loc_8250AF24;
loc_8250AF4C:
	// or r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 | ctx.r6.u64;
loc_8250AF50:
	// lwz r5,8(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// b 0x8250aee4
	goto loc_8250AEE4;
loc_8250AF58:
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r9,r9,36262
	ctx.r9.u64 = ctx.r9.u64 | 36262;
	// clrldi r8,r6,32
	ctx.r8.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// rldimi r11,r9,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// srd r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// srd r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// srd r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwimi r6,r11,13,16,18
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xE000) | (ctx.r6.u64 & 0xFFFFFFFFFFFF1FFF);
	// rlwimi r10,r6,1,27,30
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1E) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE1);
	// rlwimi r10,r6,1,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825171E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825171E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// rlwinm r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// bne cr6,0x8251720c
	if (!ctx.cr6.eq) goto loc_8251720C;
loc_82517204:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82517338
	goto loc_82517338;
loc_8251720C:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
loc_82517210:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82517248
	if (ctx.cr6.eq) goto loc_82517248;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82517240
	if (ctx.cr6.eq) goto loc_82517240;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x82517240
	if (!ctx.cr6.eq) goto loc_82517240;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8251724c
	if (!ctx.cr0.eq) goto loc_8251724C;
loc_82517240:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82517210
	goto loc_82517210;
loc_82517248:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8251724C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82517204
	if (!ctx.cr6.eq) goto loc_82517204;
	// lwz r11,680(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 680);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,28(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r9,80(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825172bc
	if (ctx.cr6.eq) goto loc_825172BC;
	// lwz r10,672(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 672);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825172a8
	if (!ctx.cr6.lt) goto loc_825172A8;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_82517288:
	// ldx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// ld r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// and r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ctx.r6.u64;
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// bne cr6,0x825172b4
	if (!ctx.cr6.eq) goto loc_825172B4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82517288
	if (ctx.cr6.lt) goto loc_82517288;
loc_825172A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825172AC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x825172e4
	goto loc_825172E4;
loc_825172B4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825172ac
	goto loc_825172AC;
loc_825172BC:
	// rlwinm r10,r29,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0x1FFFFFF8;
	// li r11,1
	ctx.r11.s64 = 1;
	// clrldi r7,r29,58
	ctx.r7.u64 = r29.u64 & 0x3F;
	// sld r7,r11,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r7.u8 & 0x7F));
	// ldx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x825172e0
	if (!ctx.cr6.eq) goto loc_825172E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825172E0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_825172E4:
	// bne 0x82517204
	if (!ctx.cr0.eq) goto loc_82517204;
	// lwz r31,20(r8)
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82517334
	if (!ctx.cr0.eq) goto loc_82517334;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82517334
	if (ctx.cr0.eq) goto loc_82517334;
loc_825172FC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251731c
	if (ctx.cr0.eq) goto loc_8251731C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r4,18(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 18);
	// bl 0x825164c0
	ctx.lr = 0x82517314;
	sub_825164C0(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82517204
	if (ctx.cr6.eq) goto loc_82517204;
loc_8251731C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82517334
	if (!ctx.cr0.eq) goto loc_82517334;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825172fc
	if (!ctx.cr6.eq) goto loc_825172FC;
loc_82517334:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82517338:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82526EE8) {
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
	ctx.lr = 0x82526EF0;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82526f44
	if (!ctx.cr0.eq) goto loc_82526F44;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82526f44
	if (ctx.cr0.eq) goto loc_82526F44;
loc_82526F14:
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r7,20(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// oris r9,r9,256
	ctx.r9.u64 = ctx.r9.u64 | 16777216;
	// ori r7,r7,8191
	ctx.r7.u64 = ctx.r7.u64 | 8191;
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r7,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// lwz r11,40(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82526f44
	if (!ctx.cr0.eq) goto loc_82526F44;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82526f14
	if (!ctx.cr6.eq) goto loc_82526F14;
loc_82526F44:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r16,r10,20016
	r16.s64 = ctx.r10.s64 + 20016;
	// bne 0x82526fa4
	if (!ctx.cr0.eq) goto loc_82526FA4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82526fa4
	if (ctx.cr0.eq) goto loc_82526FA4;
loc_82526F60:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// b 0x82526f74
	goto loc_82526F74;
loc_82526F6C:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_82526F74:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82526f6c
	if (!ctx.cr6.eq) goto loc_82526F6C;
	// stw r16,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r16.u32);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r9,0,19,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC001FFF;
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82526fa4
	if (!ctx.cr0.eq) goto loc_82526FA4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82526f60
	if (!ctx.cr6.eq) goto loc_82526F60;
loc_82526FA4:
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a2e60
	ctx.lr = 0x82526FB8;
	sub_826A2E60(ctx, base);
	// li r18,0
	r18.s64 = 0;
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// stw r21,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r21.u32);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// stw r18,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r18.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r18,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r18.u32);
	// stw r18,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r18.u32);
	// stw r21,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r21.u32);
	// bl 0x825251f0
	ctx.lr = 0x82526FE0;
	sub_825251F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82527058
	if (ctx.cr0.eq) goto loc_82527058;
loc_82526FE8:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r30,32(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x8252700c
	goto loc_8252700C;
loc_82526FFC:
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8252707c
	if (ctx.cr6.eq) goto loc_8252707C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8252700C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82526ffc
	if (!ctx.cr6.eq) goto loc_82526FFC;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_82527020:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252704c
	if (!ctx.cr0.eq) goto loc_8252704C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82522878
	ctx.lr = 0x82527038;
	sub_82522878(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252704c
	if (ctx.cr0.eq) goto loc_8252704C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82524df8
	ctx.lr = 0x8252704C;
	sub_82524DF8(ctx, base);
loc_8252704C:
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82526fe8
	if (!ctx.cr6.eq) goto loc_82526FE8;
loc_82527058:
	// addi r30,r15,92
	r30.s64 = r15.s64 + 92;
	// li r29,4
	r29.s64 = 4;
loc_82527060:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825270d4
	if (ctx.cr6.eq) goto loc_825270D4;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x82527094
	goto loc_82527094;
loc_8252707C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82527020
	goto loc_82527020;
loc_82527084:
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82527100
	if (ctx.cr6.eq) goto loc_82527100;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82527094:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82527084
	if (!ctx.cr6.eq) goto loc_82527084;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_825270A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825270d4
	if (!ctx.cr0.eq) goto loc_825270D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82522878
	ctx.lr = 0x825270C0;
	sub_82522878(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825270d4
	if (ctx.cr0.eq) goto loc_825270D4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82524df8
	ctx.lr = 0x825270D4;
	sub_82524DF8(ctx, base);
loc_825270D4:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82527060
	if (!ctx.cr0.eq) goto loc_82527060;
	// lwz r11,36(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 36);
	// addi r30,r15,32
	r30.s64 = r15.s64 + 32;
	// mr r22,r18
	r22.u64 = r18.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r17,r18
	r17.u64 = r18.u64;
	// bne 0x82527180
	if (!ctx.cr0.eq) goto loc_82527180;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x82527174
	goto loc_82527174;
loc_82527100:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825270a8
	goto loc_825270A8;
loc_82527108:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82525ae8
	ctx.lr = 0x82527118;
	sub_82525AE8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82527138
	if (ctx.cr6.lt) goto loc_82527138;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8252713c
	if (!ctx.cr6.gt) goto loc_8252713C;
loc_82527138:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8252713C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82527148
	if (ctx.cr0.eq) goto loc_82527148;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
loc_82527148:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82522770
	ctx.lr = 0x82527154;
	sub_82522770(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825267f0
	ctx.lr = 0x82527164;
	sub_825267F0(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82527180
	if (!ctx.cr0.eq) goto loc_82527180;
loc_82527174:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82527108
	if (!ctx.cr0.eq) goto loc_82527108;
loc_82527180:
	// addi r19,r15,24
	r19.s64 = r15.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r23,r19,4
	r23.s64 = r19.s64 + 4;
	// addi r11,r19,-36
	ctx.r11.s64 = r19.s64 + -36;
	// ori r20,r23,1
	r20.u64 = r23.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r20,24(r15)
	REX_STORE_U32(r15.u32 + 24, r20.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stw r11,28(r15)
	REX_STORE_U32(r15.u32 + 28, ctx.r11.u32);
	// bl 0x825245d0
	ctx.lr = 0x825271A8;
	sub_825245D0(ctx, base);
	// lwz r11,76(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82527ae0
	if (ctx.cr0.eq) goto loc_82527AE0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825227f0
	ctx.lr = 0x825271BC;
	sub_825227F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82527ae0
	if (ctx.cr0.eq) goto loc_82527AE0;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r20.u32);
	// stw r8,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r8.u32);
	// bl 0x82525ae8
	ctx.lr = 0x82527200;
	sub_82525AE8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82527220
	if (ctx.cr6.lt) goto loc_82527220;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82527224
	if (!ctx.cr6.gt) goto loc_82527224;
loc_82527220:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_82527224:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82527230
	if (ctx.cr0.eq) goto loc_82527230;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
loc_82527230:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x82527ad4
	goto loc_82527AD4;
loc_82527238:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82526348
	ctx.lr = 0x82527248;
	sub_82526348(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r25,r18
	r25.u64 = r18.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x82527330
	if (ctx.cr6.eq) goto loc_82527330;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82527274
	if (ctx.cr6.lt) goto loc_82527274;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82527278
	if (!ctx.cr6.gt) goto loc_82527278;
loc_82527274:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_82527278:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82527330
	if (ctx.cr0.eq) goto loc_82527330;
	// rlwinm. r11,r10,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82527290
	if (ctx.cr0.eq) goto loc_82527290;
	// li r29,-1
	r29.s64 = -1;
	// b 0x8252729c
	goto loc_8252729C;
loc_82527290:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825239f8
	ctx.lr = 0x82527298;
	sub_825239F8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8252729C:
	// addi r11,r17,1
	ctx.r11.s64 = r17.s64 + 1;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// blt cr6,0x82527330
	if (ctx.cr6.lt) goto loc_82527330;
	// lwz r8,4(r24)
	ctx.r8.u64 = REX_LOAD_U32(r24.u32 + 4);
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// mr r30,r18
	r30.u64 = r18.u64;
loc_825272B4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82527304
	if (ctx.cr6.eq) goto loc_82527304;
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825272fc
	if (ctx.cr6.eq) goto loc_825272FC;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r15.u32, ctx.xer);
	// bne cr6,0x825272fc
	if (!ctx.cr6.eq) goto loc_825272FC;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// beq cr6,0x825272fc
	if (ctx.cr6.eq) goto loc_825272FC;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825272fc
	if (ctx.cr6.lt) goto loc_825272FC;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_825272FC:
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x825272b4
	goto loc_825272B4;
loc_82527304:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825274a0
	if (ctx.cr6.eq) goto loc_825274A0;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// ble cr6,0x8252748c
	if (!ctx.cr6.gt) goto loc_8252748C;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// ble cr6,0x82527330
	if (!ctx.cr6.gt) goto loc_82527330;
	// addi r10,r22,1
	ctx.r10.s64 = r22.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8252748c
	if (!ctx.cr6.gt) goto loc_8252748C;
loc_82527330:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8252734c
	if (ctx.cr6.lt) goto loc_8252734C;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82527350
	if (!ctx.cr6.gt) goto loc_82527350;
loc_8252734C:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_82527350:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825273cc
	if (ctx.cr0.eq) goto loc_825273CC;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82502168
	ctx.lr = 0x82527370;
	sub_82502168(ctx, base);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82526348
	ctx.lr = 0x82527380;
	sub_82526348(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825230e0
	ctx.lr = 0x82527390;
	sub_825230E0(ctx, base);
	// mr r25,r31
	r25.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825273cc
	if (ctx.cr6.eq) goto loc_825273CC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825273b8
	if (ctx.cr6.lt) goto loc_825273B8;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x825273bc
	if (!ctx.cr6.gt) goto loc_825273BC;
loc_825273B8:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_825273BC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825273cc
	if (ctx.cr0.eq) goto loc_825273CC;
	// mr r25,r24
	r25.u64 = r24.u64;
	// mr r24,r31
	r24.u64 = r31.u64;
loc_825273CC:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82522770
	ctx.lr = 0x825273D8;
	sub_82522770(ctx, base);
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r31,r11,36
	r31.s64 = ctx.r11.s64 + 36;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// addi r10,r31,-36
	ctx.r10.s64 = r31.s64 + -36;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// lwz r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// stw r20,0(r31)
	REX_STORE_U32(r31.u32 + 0, r20.u32);
	// stw r10,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r10.u32);
	// bl 0x82525ae8
	ctx.lr = 0x82527414;
	sub_82525AE8(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82527a80
	if (ctx.cr6.eq) goto loc_82527A80;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82522770
	ctx.lr = 0x82527428;
	sub_82522770(ctx, base);
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r9.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// bl 0x82525ae8
	ctx.lr = 0x82527468;
	sub_82525AE8(ctx, base);
	// b 0x82527aac
	goto loc_82527AAC;
loc_8252746C:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82527484
	if (ctx.cr0.eq) goto loc_82527484;
	// mr r30,r18
	r30.u64 = r18.u64;
	// b 0x8252748c
	goto loc_8252748C;
loc_82527484:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,-40
	r30.s64 = ctx.r11.s64 + -40;
loc_8252748C:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8252746c
	if (ctx.cr6.eq) goto loc_8252746C;
	// b 0x825274c0
	goto loc_825274C0;
loc_825274A0:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825274b4
	if (ctx.cr0.eq) goto loc_825274B4;
	// mr r30,r18
	r30.u64 = r18.u64;
	// b 0x825274c0
	goto loc_825274C0;
loc_825274B4:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,-40
	r30.s64 = ctx.r11.s64 + -40;
loc_825274C0:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82523318
	ctx.lr = 0x825274D4;
	sub_82523318(ctx, base);
	// mr r31,r18
	r31.u64 = r18.u64;
loc_825274D8:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825233d8
	ctx.lr = 0x825274E0;
	sub_825233D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825274ec
	if (ctx.cr0.eq) goto loc_825274EC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_825274EC:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bge cr6,0x82527504
	if (!ctx.cr6.lt) goto loc_82527504;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825235d0
	ctx.lr = 0x825274FC;
	sub_825235D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825274d8
	if (!ctx.cr0.eq) goto loc_825274D8;
loc_82527504:
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82527330
	if (ctx.cr6.gt) goto loc_82527330;
	// addi r11,r1,44
	ctx.r11.s64 = ctx.r1.s64 + 44;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825268b8
	ctx.lr = 0x82527538;
	sub_825268B8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82527330
	if (!ctx.cr0.eq) goto loc_82527330;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r26,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r26.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x82527330
	if (ctx.cr0.eq) goto loc_82527330;
	// mr r28,r26
	r28.u64 = r26.u64;
loc_82527558:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82527574
	if (ctx.cr6.lt) goto loc_82527574;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82527578
	if (!ctx.cr6.gt) goto loc_82527578;
loc_82527574:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_82527578:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825275a4
	if (!ctx.cr0.eq) goto loc_825275A4;
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82527598
	if (ctx.cr0.eq) goto loc_82527598;
	// mr r28,r18
	r28.u64 = r18.u64;
	// b 0x82527558
	goto loc_82527558;
loc_82527598:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r28,r11,-40
	r28.s64 = ctx.r11.s64 + -40;
	// b 0x82527558
	goto loc_82527558;
loc_825275A4:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r30,r28
	r30.u64 = r28.u64;
	// bl 0x82523318
	ctx.lr = 0x825275BC;
	sub_82523318(ctx, base);
	// mr r27,r18
	r27.u64 = r18.u64;
loc_825275C0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825234a0
	ctx.lr = 0x825275CC;
	sub_825234A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252764c
	if (ctx.cr0.eq) goto loc_8252764C;
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x825275e4
	if (!ctx.cr6.eq) goto loc_825275E4;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
loc_825275E4:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x825230e0
	ctx.lr = 0x825275F0;
	sub_825230E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82502168
	ctx.lr = 0x825275FC;
	sub_82502168(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82502168
	ctx.lr = 0x82527608;
	sub_82502168(ctx, base);
loc_82527608:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82527724
	if (!ctx.cr0.eq) goto loc_82527724;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82527728
	if (ctx.cr0.eq) goto loc_82527728;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82527640
	if (ctx.cr6.lt) goto loc_82527640;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82527644
	if (!ctx.cr6.gt) goto loc_82527644;
loc_82527640:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_82527644:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82527608
	if (ctx.cr0.eq) goto loc_82527608;
loc_8252764C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825235d0
	ctx.lr = 0x82527654;
	sub_825235D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825275c0
	if (!ctx.cr0.eq) goto loc_825275C0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82527728
	if (ctx.cr6.eq) goto loc_82527728;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82527680
	if (!ctx.cr0.eq) goto loc_82527680;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82527764
	if (!ctx.cr0.eq) goto loc_82527764;
loc_82527680:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8252769c
	if (ctx.cr6.lt) goto loc_8252769C;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x825276a0
	if (!ctx.cr6.gt) goto loc_825276A0;
loc_8252769C:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_825276A0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82527764
	if (ctx.cr0.eq) goto loc_82527764;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82501ee0
	ctx.lr = 0x825276B4;
	sub_82501EE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82527764
	if (ctx.cr0.eq) goto loc_82527764;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82526348
	ctx.lr = 0x825276CC;
	sub_82526348(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82527764
	if (ctx.cr0.eq) goto loc_82527764;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82502168
	ctx.lr = 0x825276E0;
	sub_82502168(ctx, base);
	// stw r31,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825234a0
	ctx.lr = 0x825276F0;
	sub_825234A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq 0x82527774
	if (ctx.cr0.eq) goto loc_82527774;
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,20(r24)
	REX_STORE_U32(r24.u32 + 20, ctx.r11.u32);
	// bl 0x82524df8
	ctx.lr = 0x82527710;
	sub_82524DF8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mr r24,r31
	r24.u64 = r31.u64;
	// bl 0x82524528
	ctx.lr = 0x82527720;
	sub_82524528(ctx, base);
	// b 0x825273cc
	goto loc_825273CC;
loc_82527724:
	// mr r30,r18
	r30.u64 = r18.u64;
loc_82527728:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825235d0
	ctx.lr = 0x82527730;
	sub_825235D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82527728
	if (!ctx.cr0.eq) goto loc_82527728;
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252775c
	if (!ctx.cr0.eq) goto loc_8252775C;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252775c
	if (ctx.cr0.eq) goto loc_8252775C;
	// li r30,1
	r30.s64 = 1;
loc_8252775C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8252778c
	if (ctx.cr6.eq) goto loc_8252778C;
loc_82527764:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82524528
	ctx.lr = 0x82527770;
	sub_82524528(ctx, base);
	// b 0x82527330
	goto loc_82527330;
loc_82527774:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// bl 0x82524df8
	ctx.lr = 0x82527788;
	sub_82524DF8(ctx, base);
	// b 0x82527764
	goto loc_82527764;
loc_8252778C:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82523318
	ctx.lr = 0x825277A0;
	sub_82523318(ctx, base);
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmplw cr6,r26,r28
	ctx.cr6.compare<uint32_t>(r26.u32, r28.u32, ctx.xer);
	// clrlwi r29,r11,19
	r29.u64 = ctx.r11.u32 & 0x1FFF;
	// beq cr6,0x8252781c
	if (ctx.cr6.eq) goto loc_8252781C;
loc_825277B4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825277cc
	if (ctx.cr0.eq) goto loc_825277CC;
	// mr r30,r18
	r30.u64 = r18.u64;
	// b 0x825277d4
	goto loc_825277D4;
loc_825277CC:
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r10,-40
	r30.s64 = ctx.r10.s64 + -40;
loc_825277D4:
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82523730
	ctx.lr = 0x82527800;
	sub_82523730(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82525ae8
	ctx.lr = 0x82527810;
	sub_82525AE8(ctx, base);
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bne cr6,0x825277b4
	if (!ctx.cr6.eq) goto loc_825277B4;
loc_8252781C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825234a0
	ctx.lr = 0x82527828;
	sub_825234A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82527970
	if (ctx.cr0.eq) goto loc_82527970;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi r29,r9,19
	r29.u64 = ctx.r9.u32 & 0x1FFF;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82527858
	if (ctx.cr0.eq) goto loc_82527858;
	// mr r30,r18
	r30.u64 = r18.u64;
	// b 0x82527860
	goto loc_82527860;
loc_82527858:
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r10,-40
	r30.s64 = ctx.r10.s64 + -40;
loc_82527860:
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x825236b0
	ctx.lr = 0x8252788C;
	sub_825236B0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82525ae8
	ctx.lr = 0x8252789C;
	sub_82525AE8(ctx, base);
	// mr r31,r30
	r31.u64 = r30.u64;
	// addi r17,r17,-1
	r17.s64 = r17.s64 + -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82527988
	if (ctx.cr6.eq) goto loc_82527988;
loc_825278AC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825278c8
	if (ctx.cr6.lt) goto loc_825278C8;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x825278cc
	if (!ctx.cr6.gt) goto loc_825278CC;
loc_825278C8:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_825278CC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82527968
	if (!ctx.cr0.eq) goto loc_82527968;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825278f0
	if (ctx.cr0.eq) goto loc_825278F0;
	// mr r30,r18
	r30.u64 = r18.u64;
	// b 0x825278f8
	goto loc_825278F8;
loc_825278F0:
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r10,-40
	r30.s64 = ctx.r10.s64 + -40;
loc_825278F8:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r28,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// rlwinm r6,r9,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r28,r10,-36
	r28.s64 = ctx.r10.s64 + -36;
	// addi r5,r29,1
	ctx.r5.s64 = r29.s64 + 1;
	// stw r8,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r8.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bl 0x82525ae8
	ctx.lr = 0x82527958;
	sub_82525AE8(ctx, base);
	// mr r28,r31
	r28.u64 = r31.u64;
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x825278ac
	if (!ctx.cr6.eq) goto loc_825278AC;
loc_82527968:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82527988
	if (ctx.cr6.eq) goto loc_82527988;
loc_82527970:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825235d0
	ctx.lr = 0x82527978;
	sub_825235D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252781c
	if (!ctx.cr0.eq) goto loc_8252781C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82527af4
	if (!ctx.cr6.eq) goto loc_82527AF4;
loc_82527988:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
loc_8252798C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825279cc
	if (ctx.cr6.eq) goto loc_825279CC;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825279bc
	if (ctx.cr6.eq) goto loc_825279BC;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x825279bc
	if (!ctx.cr6.eq) goto loc_825279BC;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825279c4
	if (!ctx.cr0.eq) goto loc_825279C4;
loc_825279BC:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8252798c
	goto loc_8252798C;
loc_825279C4:
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// b 0x825279d0
	goto loc_825279D0;
loc_825279CC:
	// mr r30,r18
	r30.u64 = r18.u64;
loc_825279D0:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82524060
	ctx.lr = 0x825279E0;
	sub_82524060(ctx, base);
	// li r5,8191
	ctx.r5.s64 = 8191;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82525ae8
	ctx.lr = 0x825279F0;
	sub_82525AE8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825267f0
	ctx.lr = 0x82527A00;
	sub_825267F0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825c2288
	ctx.lr = 0x82527A14;
	sub_825C2288(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82527a68
	if (!ctx.cr0.eq) goto loc_82527A68;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82527a68
	if (ctx.cr0.eq) goto loc_82527A68;
loc_82527A2C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x82527a48
	if (!ctx.cr6.eq) goto loc_82527A48;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82523820
	ctx.lr = 0x82527A48;
	sub_82523820(ctx, base);
loc_82527A48:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// beq cr6,0x82527a68
	if (ctx.cr6.eq) goto loc_82527A68;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82527a68
	if (!ctx.cr0.eq) goto loc_82527A68;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82527a2c
	if (!ctx.cr6.eq) goto loc_82527A2C;
loc_82527A68:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82527ae0
	if (ctx.cr6.eq) goto loc_82527AE0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82523820
	ctx.lr = 0x82527A7C;
	sub_82523820(ctx, base);
	// b 0x82527ae0
	goto loc_82527AE0;
loc_82527A80:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82527a9c
	if (ctx.cr6.lt) goto loc_82527A9C;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82527aa0
	if (!ctx.cr6.gt) goto loc_82527AA0;
loc_82527A9C:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_82527AA0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82527aac
	if (ctx.cr0.eq) goto loc_82527AAC;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
loc_82527AAC:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// cmplwi cr6,r22,8191
	ctx.cr6.compare<uint32_t>(r22.u32, 8191, ctx.xer);
	// beq cr6,0x82527b00
	if (ctx.cr6.eq) goto loc_82527B00;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825267f0
	ctx.lr = 0x82527AC8;
	sub_825267F0(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82527ae0
	if (ctx.cr6.eq) goto loc_82527AE0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_82527AD4:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825267f0
	ctx.lr = 0x82527AE0;
	sub_825267F0(ctx, base);
loc_82527AE0:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82527238
	if (!ctx.cr6.eq) goto loc_82527238;
	// lwz r31,216(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// b 0x82527b8c
	goto loc_82527B8C;
loc_82527AF4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824e4368
	ctx.lr = 0x82527B00;
	sub_824E4368(ctx, base);
loc_82527B00:
	// li r4,3641
	ctx.r4.s64 = 3641;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824e4368
	ctx.lr = 0x82527B0C;
	sub_824E4368(ctx, base);
loc_82527B0C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// b 0x82527b28
	goto loc_82527B28;
loc_82527B18:
	// cmplw cr6,r10,r16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r16.u32, ctx.xer);
	// beq cr6,0x82527b30
	if (ctx.cr6.eq) goto loc_82527B30;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82527B28:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82527b18
	if (!ctx.cr6.eq) goto loc_82527B18;
loc_82527B30:
	// stw r18,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r18.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82522770
	ctx.lr = 0x82527B40;
	sub_82522770(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,0(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,0(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r10.u32);
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r20.u32);
	// stw r9,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r9.u32);
	// bl 0x82525ae8
	ctx.lr = 0x82527B7C;
	sub_82525AE8(ctx, base);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// cmplwi cr6,r22,8191
	ctx.cr6.compare<uint32_t>(r22.u32, 8191, ctx.xer);
	// beq cr6,0x82527bb0
	if (ctx.cr6.eq) goto loc_82527BB0;
	// lwz r31,32(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 32);
loc_82527B8C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82527b0c
	if (!ctx.cr6.eq) goto loc_82527B0C;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x82527d48
	if (ctx.cr6.eq) goto loc_82527D48;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82527bbc
	if (ctx.cr0.eq) goto loc_82527BBC;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// b 0x82527bc8
	goto loc_82527BC8;
loc_82527BB0:
	// li r4,3641
	ctx.r4.s64 = 3641;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824e4368
	ctx.lr = 0x82527BBC;
	sub_824E4368(ctx, base);
loc_82527BBC:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r6,r11,-40
	ctx.r6.s64 = ctx.r11.s64 + -40;
loc_82527BC8:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82523318
	ctx.lr = 0x82527BD8;
	sub_82523318(ctx, base);
loc_82527BD8:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825233d8
	ctx.lr = 0x82527BE0;
	sub_825233D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82527d38
	if (ctx.cr0.eq) goto loc_82527D38;
	// lwz r30,160(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82527d38
	if (ctx.cr0.eq) goto loc_82527D38;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825239f8
	ctx.lr = 0x82527C00;
	sub_825239F8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82527d38
	if (!ctx.cr6.eq) goto loc_82527D38;
	// addi r11,r1,52
	ctx.r11.s64 = ctx.r1.s64 + 52;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825268b8
	ctx.lr = 0x82527C30;
	sub_825268B8(ctx, base);
	// lwz r29,92(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82527d38
	if (!ctx.cr0.eq) goto loc_82527D38;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82527d38
	if (ctx.cr6.eq) goto loc_82527D38;
	// rlwinm r31,r29,0,0,30
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82527c5c
	if (!ctx.cr0.eq) goto loc_82527C5C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82527d2c
	if (!ctx.cr6.eq) goto loc_82527D2C;
loc_82527C5C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x825230e0
	ctx.lr = 0x82527C68;
	sub_825230E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82501ee0
	ctx.lr = 0x82527C74;
	sub_82501EE0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82502168
	ctx.lr = 0x82527C84;
	sub_82502168(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82527d2c
	if (ctx.cr0.eq) goto loc_82527D2C;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r10,r31,36
	ctx.r10.s64 = r31.s64 + 36;
	// rlwinm r6,r9,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
	// stw r7,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r7.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r8.u32);
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x82524060
	ctx.lr = 0x82527CF0;
	sub_82524060(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x82525ae8
	ctx.lr = 0x82527D04;
	sub_82525AE8(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82527d14
	if (!ctx.cr6.eq) goto loc_82527D14;
	// stw r29,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r29.u32);
loc_82527D14:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825c2288
	ctx.lr = 0x82527D28;
	sub_825C2288(ctx, base);
	// b 0x82527d38
	goto loc_82527D38;
loc_82527D2C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82524528
	ctx.lr = 0x82527D38;
	sub_82524528(ctx, base);
loc_82527D38:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825235d0
	ctx.lr = 0x82527D40;
	sub_825235D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82527bd8
	if (!ctx.cr0.eq) goto loc_82527BD8;
loc_82527D48:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82502650
	ctx.lr = 0x82527D5C;
	sub_82502650(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_825B4278) {
	REX_FUNC_PROLOGUE();
	// li r11,256
	ctx.r11.s64 = 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r10,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r9,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825B5888) {
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
	ctx.lr = 0x825B5890;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825B58AC;
	sub_824F02C0(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,8
	r31.s64 = ctx.r11.s64 + 8;
	// beq 0x825b59f8
	if (ctx.cr0.eq) goto loc_825B59F8;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r27,1
	r27.s64 = 1;
	// bl 0x825a1088
	ctx.lr = 0x825B58CC;
	sub_825A1088(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b5940
	if (ctx.cr0.eq) goto loc_825B5940;
	// li r30,0
	r30.s64 = 0;
loc_825B58D8:
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// bge cr6,0x825b5938
	if (!ctx.cr6.lt) goto loc_825B5938;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825B58F0;
	sub_824F05F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b5928
	if (ctx.cr0.eq) goto loc_825B5928;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// blt cr6,0x825b5928
	if (ctx.cr6.lt) goto loc_825B5928;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// ble cr6,0x825b5924
	if (!ctx.cr6.gt) goto loc_825B5924;
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// ble cr6,0x825b5928
	if (!ctx.cr6.gt) goto loc_825B5928;
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// bgt cr6,0x825b5928
	if (ctx.cr6.gt) goto loc_825B5928;
loc_825B5924:
	// li r27,0
	r27.s64 = 0;
loc_825B5928:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x825b58d8
	if (!ctx.cr6.eq) goto loc_825B58D8;
loc_825B5938:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(r27.u32, 1, ctx.xer);
	// bne cr6,0x825b59f8
	if (!ctx.cr6.eq) goto loc_825B59F8;
loc_825B5940:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825B5950;
	sub_824F05F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwimi r11,r3,0,27,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825B596C;
	sub_824F05F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwimi r11,r3,8,19,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0x1F00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE0FF);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825B5988;
	sub_824F05F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwimi r11,r3,5,24,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF1F);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825B59A4;
	sub_824F05F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwimi r11,r3,16,11,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x1F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFE0FFFF);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825B59C0;
	sub_824F05F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwimi r11,r3,24,3,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x1F000000) | (ctx.r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825B59DC;
	sub_824F05F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r11,r3,21,8,10
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 21) & 0xE00000) | (ctx.r11.u64 & 0xFFFFFFFFFF1FFFFF);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// b 0x825b5a10
	goto loc_825B5A10;
loc_825B59F8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// rlwimi r10,r11,0,19,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE000);
	// rlwimi r10,r11,0,3,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFF0000) | (ctx.r10.u64 & 0xFFFFFFFFE000FFFF);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_825B5A10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825BCBE0) {
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
	ctx.lr = 0x825BCBE8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825bcc14
	if (ctx.cr0.eq) goto loc_825BCC14;
loc_825BCC0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825bce48
	goto loc_825BCE48;
loc_825BCC14:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// li r23,0
	r23.s64 = 0;
loc_825BCC1C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bcc30
	if (ctx.cr6.eq) goto loc_825BCC30;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// b 0x825bcc1c
	goto loc_825BCC1C;
loc_825BCC30:
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r5,r11,-25880
	ctx.r5.s64 = ctx.r11.s64 + -25880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82528f28
	ctx.lr = 0x825BCC44;
	sub_82528F28(ctx, base);
	// lwz r29,0(r22)
	r29.u64 = REX_LOAD_U32(r22.u32 + 0);
loc_825BCC48:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825bcd14
	if (ctx.cr6.eq) goto loc_825BCD14;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// lwz r25,12(r29)
	r25.u64 = REX_LOAD_U32(r29.u32 + 12);
	// li r30,1
	r30.s64 = 1;
	// lwz r31,0(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r27,r11,2,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// rlwinm r26,r11,7,29,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
loc_825BCC6C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825bcd04
	if (ctx.cr6.eq) goto loc_825BCD04;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// rlwinm r9,r11,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825bccf8
	if (!ctx.cr6.eq) goto loc_825BCCF8;
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x825bccf8
	if (!ctx.cr6.eq) goto loc_825BCCF8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x825bccb4
	if (ctx.cr6.eq) goto loc_825BCCB4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b8fb0
	ctx.lr = 0x825BCCA8;
	sub_825B8FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825bccc0
	if (!ctx.cr0.eq) goto loc_825BCCC0;
	// b 0x825bccf8
	goto loc_825BCCF8;
loc_825BCCB4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bne cr6,0x825bccf8
	if (!ctx.cr6.eq) goto loc_825BCCF8;
loc_825BCCC0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// bne 0x825bccd8
	if (!ctx.cr0.eq) goto loc_825BCCD8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_825BCCD8:
	// rlwinm r11,r30,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 29) & 0x1FFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r9,r30,27
	ctx.r9.u64 = r30.u32 & 0x1F;
	// li r28,1
	r28.s64 = 1;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_825BCCF8:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x825bcc6c
	goto loc_825BCC6C;
loc_825BCD04:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825bcc0c
	if (ctx.cr0.eq) goto loc_825BCC0C;
	// lwz r29,4(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 4);
	// b 0x825bcc48
	goto loc_825BCC48;
loc_825BCD14:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x825bce44
	if (ctx.cr6.eq) goto loc_825BCE44;
	// addi r5,r23,-1
	ctx.r5.s64 = r23.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825ba800
	ctx.lr = 0x825BCD2C;
	sub_825BA800(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825bcc0c
	if (!ctx.cr0.eq) goto loc_825BCC0C;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// li r31,0
	r31.s64 = 0;
	// rlwinm. r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825bcd74
	if (ctx.cr0.eq) goto loc_825BCD74;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// ble cr6,0x825bcd6c
	if (!ctx.cr6.gt) goto loc_825BCD6C;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x825bcd6c
	if (ctx.cr6.eq) goto loc_825BCD6C;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x825bcd6c
	if (ctx.cr6.eq) goto loc_825BCD6C;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x825bcd74
	if (!ctx.cr6.gt) goto loc_825BCD74;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x825bcd74
	if (ctx.cr6.gt) goto loc_825BCD74;
loc_825BCD6C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825bcd78
	goto loc_825BCD78;
loc_825BCD74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BCD78:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825bcdd4
	if (ctx.cr0.eq) goto loc_825BCDD4;
	// lwz r4,44(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 44);
	// li r31,2
	r31.s64 = 2;
	// lwz r3,44(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 44);
	// bl 0x825b8fb0
	ctx.lr = 0x825BCD90;
	sub_825B8FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825bcdac
	if (ctx.cr0.eq) goto loc_825BCDAC;
	// lwz r4,48(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 48);
	// lwz r3,48(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 48);
	// bl 0x825b8fb0
	ctx.lr = 0x825BCDA4;
	sub_825B8FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825bcdd4
	if (!ctx.cr0.eq) goto loc_825BCDD4;
loc_825BCDAC:
	// lwz r4,44(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 44);
	// lwz r3,48(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 48);
	// bl 0x825b8fb0
	ctx.lr = 0x825BCDB8;
	sub_825B8FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825bcc0c
	if (ctx.cr0.eq) goto loc_825BCC0C;
	// lwz r4,48(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 48);
	// lwz r3,44(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 44);
	// bl 0x825b8fb0
	ctx.lr = 0x825BCDCC;
	sub_825B8FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825bcc0c
	if (ctx.cr0.eq) goto loc_825BCC0C;
loc_825BCDD4:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// mr r29,r31
	r29.u64 = r31.u64;
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825bce44
	if (!ctx.cr6.lt) goto loc_825BCE44;
	// addi r11,r31,11
	ctx.r11.s64 = r31.s64 + 11;
	// subf r30,r22,r24
	r30.u64 = r24.u64 - r22.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r22
	r31.u64 = ctx.r11.u64 + r22.u64;
loc_825BCDF8:
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825bce1c
	if (ctx.cr0.eq) goto loc_825BCE1C;
	// bl 0x825b8fb0
	ctx.lr = 0x825BCE10;
	sub_825B8FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825bcc0c
	if (ctx.cr0.eq) goto loc_825BCC0C;
	// b 0x825bce2c
	goto loc_825BCE2C;
loc_825BCE1C:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825bcc0c
	if (!ctx.cr6.eq) goto loc_825BCC0C;
loc_825BCE2C:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825bcdf8
	if (ctx.cr6.lt) goto loc_825BCDF8;
loc_825BCE44:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825BCE48:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_825CDA68) {
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
	// bge cr6,0x825cdb40
	if (!ctx.cr6.lt) goto loc_825CDB40;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
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
	// lfs f13,20236(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20236);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20232(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20232);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f12.f64 = double(temp.f32);
loc_825CDAD4:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r10,r10,21,11,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1FFFFF;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r10,r10,27,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3F;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// stfs f12,12(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,8(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x825cdad4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CDAD4;
loc_825CDB40:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cdb5c
	if (ctx.cr6.eq) goto loc_825CDB5C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x825CDB5C;
	sub_825C73B8(ctx, base);
loc_825CDB5C:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cdb78
	if (ctx.cr6.eq) goto loc_825CDB78;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c7788
	ctx.lr = 0x825CDB78;
	sub_825C7788(ctx, base);
loc_825CDB78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D0EA0) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,1080
	ctx.r11.s64 = ctx.r11.s64 + 1080;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x825cf930
	ctx.lr = 0x825D0EC4;
	sub_825CF930(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d0ed4
	if (ctx.cr6.eq) goto loc_825D0ED4;
	// bl 0x8269ce98
	ctx.lr = 0x825D0ED4;
	sub_8269CE98(ctx, base);
loc_825D0ED4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6d18
	ctx.lr = 0x825D0EDC;
	sub_825C6D18(ctx, base);
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

DEFINE_REX_FUNC(sub_825D2A60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825D2A68;
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
	// bne cr6,0x825d2aa4
	if (!ctx.cr6.eq) goto loc_825D2AA4;
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
	// li r7,1571
	ctx.r7.s64 = 1571;
	// bl 0x824ea978
	ctx.lr = 0x825D2AA4;
	sub_824EA978(ctx, base);
loc_825D2AA4:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825D2AB0;
	sub_824F02C0(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x825d2b14
	if (!ctx.cr6.eq) goto loc_825D2B14;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d2ad4
	if (ctx.cr6.eq) goto loc_825D2AD4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D2AD4;
	sub_824F0950(ctx, base);
loc_825D2AD4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d2b0c
	if (ctx.cr6.eq) goto loc_825D2B0C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d2b0c
	if (ctx.cr6.eq) goto loc_825D2B0C;
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
	// li r6,23
	ctx.r6.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,92(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// bctrl 
	ctx.lr = 0x825D2B0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D2B0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d2b6c
	goto loc_825D2B6C;
loc_825D2B14:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d2b30
	if (ctx.cr6.eq) goto loc_825D2B30;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D2B30;
	sub_824F0950(ctx, base);
loc_825D2B30:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d2b68
	if (ctx.cr6.eq) goto loc_825D2B68;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d2b68
	if (ctx.cr6.eq) goto loc_825D2B68;
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
	// li r6,23
	ctx.r6.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,92(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// bctrl 
	ctx.lr = 0x825D2B68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D2B68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D2B6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825D5910) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D61D8) {
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
	ctx.lr = 0x825D61E0;
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d6220
	if (!ctx.cr6.eq) goto loc_825D6220;
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
	// li r7,447
	ctx.r7.s64 = 447;
	// bl 0x824ea978
	ctx.lr = 0x825D6220;
	sub_824EA978(ctx, base);
loc_825D6220:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D6230;
	sub_824F05F0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x825d6298
	if (!ctx.cr6.eq) goto loc_825D6298;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d6254
	if (ctx.cr6.eq) goto loc_825D6254;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D6254;
	sub_824F0950(ctx, base);
loc_825D6254:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d6290
	if (ctx.cr6.eq) goto loc_825D6290;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d6290
	if (ctx.cr6.eq) goto loc_825D6290;
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
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,105
	ctx.r6.s64 = 105;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,420(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 420);
	// bctrl 
	ctx.lr = 0x825D6290;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D6290:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d62f4
	goto loc_825D62F4;
loc_825D6298:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d62b4
	if (ctx.cr6.eq) goto loc_825D62B4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D62B4;
	sub_824F0950(ctx, base);
loc_825D62B4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d62f0
	if (ctx.cr6.eq) goto loc_825D62F0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d62f0
	if (ctx.cr6.eq) goto loc_825D62F0;
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
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,105
	ctx.r6.s64 = 105;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,420(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 420);
	// bctrl 
	ctx.lr = 0x825D62F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D62F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D62F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825DEA80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,100
	ctx.r11.s64 = 100;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// eqv r11,r11,r10
	ctx.r11.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x825deadc
	if (ctx.cr6.eq) goto loc_825DEADC;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x825dead4
	if (ctx.cr6.eq) goto loc_825DEAD4;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x825deadc
	if (ctx.cr6.eq) goto loc_825DEADC;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x825dead4
	if (ctx.cr6.eq) goto loc_825DEAD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825DEAD4:
	// lhz r3,10(r3)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + 10);
	// blr 
	return;
loc_825DEADC:
	// lhz r3,6(r3)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + 6);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E32C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825E32D0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2736(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 2736);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r9,60(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// lwz r29,8(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r10.u32);
	// stw r9,40(r4)
	REX_STORE_U32(ctx.r4.u32 + 40, ctx.r9.u32);
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// stw r11,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x825e3364
	if (ctx.cr6.lt) goto loc_825E3364;
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r4,r10,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bl 0x825e06b0
	ctx.lr = 0x825E3330;
	sub_825E06B0(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,48(r31)
	REX_STORE_U8(r31.u32 + 48, ctx.r11.u8);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_825E3364:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825E92D8) {
	REX_FUNC_PROLOGUE();
	// rlwinm r10,r4,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r11,2140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2140);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825EC4D0) {
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
	// bl 0x825fd328
	ctx.lr = 0x825EC4E8;
	sub_825FD328(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fca88
	ctx.lr = 0x825EC4F0;
	sub_825FCA88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825eb258
	ctx.lr = 0x825EC4F8;
	sub_825EB258(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825eb7d0
	ctx.lr = 0x825EC500;
	sub_825EB7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d79a8
	ctx.lr = 0x825EC508;
	sub_825D79A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82607078
	ctx.lr = 0x825EC510;
	sub_82607078(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d86d8
	ctx.lr = 0x825EC518;
	sub_825D86D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825ec544
	if (!ctx.cr0.eq) goto loc_825EC544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,14672
	ctx.r6.s64 = ctx.r11.s64 + 14672;
	// addi r5,r10,15144
	ctx.r5.s64 = ctx.r10.s64 + 15144;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,1428
	ctx.r7.s64 = 1428;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EC544;
	sub_824EA978(ctx, base);
loc_825EC544:
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

DEFINE_REX_FUNC(sub_825F0D98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825F0DA0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x825f0db8
	goto loc_825F0DB8;
loc_825F0DAC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f0b98
	ctx.lr = 0x825F0DB8;
	sub_825F0B98(ctx, base);
loc_825F0DB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f02f8
	ctx.lr = 0x825F0DC0;
	sub_825F02F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825f0dac
	if (!ctx.cr0.eq) goto loc_825F0DAC;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x825ec700
	ctx.lr = 0x825F0DD4;
	sub_825EC700(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,0
	r29.s64 = 0;
loc_825F0DDC:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwzx r10,r10,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825f0e1c
	if (ctx.cr6.eq) goto loc_825F0E1C;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r30,40(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// stwx r10,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x825fcb18
	ctx.lr = 0x825F0E0C;
	sub_825FCB18(ctx, base);
	// lwz r10,228(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 228);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r10,228(r30)
	REX_STORE_U32(r30.u32 + 228, ctx.r10.u32);
loc_825F0E1C:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(r29.s32, 8, ctx.xer);
	// blt cr6,0x825f0ddc
	if (ctx.cr6.lt) goto loc_825F0DDC;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r3,16(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r30,8(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x825f0e64
	goto loc_825F0E64;
loc_825F0E38:
	// lwz r29,40(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// bl 0x825f7460
	ctx.lr = 0x825F0E40;
	sub_825F7460(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x825fcb18
	ctx.lr = 0x825F0E4C;
	sub_825FCB18(ctx, base);
	// lwz r10,228(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 228);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// stw r10,228(r29)
	REX_STORE_U32(r29.u32 + 228, ctx.r10.u32);
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
loc_825F0E64:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x825f0e38
	if (!ctx.cr6.eq) goto loc_825F0E38;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f0e80
	if (ctx.cr6.eq) goto loc_825F0E80;
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,228(r11)
	REX_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
loc_825F0E80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ef858
	ctx.lr = 0x825F0E88;
	sub_825EF858(ctx, base);
	// addi r30,r31,36
	r30.s64 = r31.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f73d8
	ctx.lr = 0x825F0E94;
	sub_825F73D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f0ec8
	if (ctx.cr0.eq) goto loc_825F0EC8;
	// addi r29,r31,60
	r29.s64 = r31.s64 + 60;
loc_825F0EA0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f73d8
	ctx.lr = 0x825F0EA8;
	sub_825F73D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825f0ec8
	if (!ctx.cr0.eq) goto loc_825F0EC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ef858
	ctx.lr = 0x825F0EB8;
	sub_825EF858(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f73d8
	ctx.lr = 0x825F0EC0;
	sub_825F73D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825f0ea0
	if (!ctx.cr0.eq) goto loc_825F0EA0;
loc_825F0EC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825F7300) {
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
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,18112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825f732c
	if (ctx.cr6.eq) goto loc_825F732C;
	// bl 0x825f7108
	ctx.lr = 0x825F7328;
	sub_825F7108(ctx, base);
	// b 0x825f7348
	goto loc_825F7348;
loc_825F732C:
	// bl 0x825f6338
	ctx.lr = 0x825F7330;
	sub_825F6338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x825f7348
	if (ctx.cr0.lt) goto loc_825F7348;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f6600
	ctx.lr = 0x825F7340;
	sub_825F6600(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_825F7348:
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

DEFINE_REX_FUNC(sub_825F7F30) {
	REX_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825f7f44
	if (!ctx.cr6.eq) goto loc_825F7F44;
	// b 0x825f7ea0
	sub_825F7EA0(ctx, base);
	return;
loc_825F7F44:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825f7f5c
	if (!ctx.cr6.eq) goto loc_825F7F5C;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_825F7F5C:
	// b 0x825f7ea0
	sub_825F7EA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825F8A50) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x825f7fb8
	ctx.lr = 0x825F8A70;
	sub_825F7FB8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,28700
	ctx.r11.s64 = ctx.r11.s64 + 28700;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,1412(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1412);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lwz r11,1412(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1412);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1412(r30)
	REX_STORE_U32(r30.u32 + 1412, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_825F9A90) {
	REX_FUNC_PROLOGUE();
	// lbz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825f9ac4
	if (ctx.cr6.eq) goto loc_825F9AC4;
	// lbz r11,129(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 129);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825f9ac4
	if (ctx.cr6.eq) goto loc_825F9AC4;
	// lbz r11,130(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 130);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825f9ac4
	if (ctx.cr6.eq) goto loc_825F9AC4;
	// lbz r11,131(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 131);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_825F9AC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FA7A8) {
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
	ctx.lr = 0x825FA7B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825FA7D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-21368
	ctx.r11.s64 = ctx.r11.s64 + -21368;
	// mulli r8,r9,52
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(52));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r30,r10,22852
	r30.s64 = ctx.r10.s64 + 22852;
	// addi r29,r9,30240
	r29.s64 = ctx.r9.s64 + 30240;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// bne cr6,0x825fa828
	if (!ctx.cr6.eq) goto loc_825FA828;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,30640
	ctx.r5.s64 = ctx.r11.s64 + 30640;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1432
	ctx.r7.s64 = 1432;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FA828;
	sub_824EA978(ctx, base);
loc_825FA828:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825fa898
	if (ctx.cr0.eq) goto loc_825FA898;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// beq cr6,0x825fa858
	if (ctx.cr6.eq) goto loc_825FA858;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,30616
	ctx.r5.s64 = ctx.r11.s64 + 30616;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1434
	ctx.r7.s64 = 1434;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FA858;
	sub_824EA978(ctx, base);
loc_825FA858:
	// lbz r11,154(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 154);
	// li r10,53
	ctx.r10.s64 = 53;
	// lbz r9,153(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 153);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,154(r31)
	REX_STORE_U8(r31.u32 + 154, ctx.r11.u8);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825fa898
	if (ctx.cr6.eq) goto loc_825FA898;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,30580
	ctx.r5.s64 = ctx.r11.s64 + 30580;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1438
	ctx.r7.s64 = 1438;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FA898;
	sub_824EA978(ctx, base);
loc_825FA898:
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// stb r11,132(r31)
	REX_STORE_U8(r31.u32 + 132, ctx.r11.u8);
	// stb r11,133(r31)
	REX_STORE_U8(r31.u32 + 133, ctx.r11.u8);
	// stb r11,134(r31)
	REX_STORE_U8(r31.u32 + 134, ctx.r11.u8);
	// stb r11,135(r31)
	REX_STORE_U8(r31.u32 + 135, ctx.r11.u8);
	// bne cr6,0x825fa8c8
	if (!ctx.cr6.eq) goto loc_825FA8C8;
	// clrlwi r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	// stb r11,136(r31)
	REX_STORE_U8(r31.u32 + 136, ctx.r11.u8);
	// stb r11,137(r31)
	REX_STORE_U8(r31.u32 + 137, ctx.r11.u8);
	// stb r11,138(r31)
	REX_STORE_U8(r31.u32 + 138, ctx.r11.u8);
	// stb r11,139(r31)
	REX_STORE_U8(r31.u32 + 139, ctx.r11.u8);
loc_825FA8C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82607A88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82607A90;
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
	ctx.lr = 0x82607AB0;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x82607ad4
	if (ctx.cr0.eq) goto loc_82607AD4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f9668
	ctx.lr = 0x82607AD0;
	sub_825F9668(ctx, base);
	// b 0x82607ad8
	goto loc_82607AD8;
loc_82607AD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82607AD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8260A820) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x8260a850
	if (ctx.cr6.eq) goto loc_8260A850;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// beq cr6,0x8260a850
	if (ctx.cr6.eq) goto loc_8260A850;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x8260a850
	if (ctx.cr6.eq) goto loc_8260A850;
	// cmpwi cr6,r11,142
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 142, ctx.xer);
	// beq cr6,0x8260a850
	if (ctx.cr6.eq) goto loc_8260A850;
	// cmpwi cr6,r11,143
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 143, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8260a854
	if (!ctx.cr6.eq) goto loc_8260A854;
loc_8260A850:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8260A854:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8260B1D0) {
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
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823f02b8
	ctx.lr = 0x8260B1F0;
	sub_823F02B8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8260b208
	if (ctx.cr0.eq) goto loc_8260B208;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8260b214
	goto loc_8260B214;
loc_8260B208:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_8260B214:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8260C728) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8260C730;
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8260c754
	if (!ctx.cr6.eq) goto loc_8260C754;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8260dfa0
	ctx.lr = 0x8260C750;
	sub_8260DFA0(ctx, base);
	// b 0x8260c798
	goto loc_8260C798;
loc_8260C754:
	// bl 0x82613198
	ctx.lr = 0x8260C758;
	sub_82613198(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8260c798
	if (ctx.cr0.eq) goto loc_8260C798;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8260c784
	if (ctx.cr6.eq) goto loc_8260C784;
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// b 0x8260c788
	goto loc_8260C788;
loc_8260C784:
	// stw r3,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r3.u32);
loc_8260C788:
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
loc_8260C798:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8260EA30) {
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
	ctx.lr = 0x8260EA38;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260EA68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	r30.s64 = 0;
	// lfs f30,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// beq cr6,0x8260eabc
	if (ctx.cr6.eq) goto loc_8260EABC;
	// stfs f31,76(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r5,80(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8260ea98
	if (ctx.cr6.eq) goto loc_8260EA98;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8260ea9c
	goto loc_8260EA9C;
loc_8260EA98:
	// lwz r4,60(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
loc_8260EA9C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260EAB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8260eabc
	if (!ctx.cr0.lt) goto loc_8260EABC;
	// stfs f30,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
loc_8260EABC:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260EAD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

DEFINE_REX_FUNC(sub_82613198) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r30,0
	r30.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826131d4
	if (!ctx.cr6.lt) goto loc_826131D4;
	// bl 0x82793a84
	ctx.lr = 0x826131C8;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x826131d4
	if (ctx.cr6.eq) goto loc_826131D4;
	// li r30,1
	r30.s64 = 1;
loc_826131D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826131e8
	if (ctx.cr6.eq) goto loc_826131E8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82613258
	if (ctx.cr6.eq) goto loc_82613258;
loc_826131E8:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82613248
	if (ctx.cr6.gt) goto loc_82613248;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8260b5b8
	ctx.lr = 0x82613214;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82613258
	if (ctx.cr0.eq) goto loc_82613258;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// b 0x82613258
	goto loc_82613258;
loc_82613248:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-15940
	ctx.r3.s64 = ctx.r11.s64 + -15940;
	// bl 0x823ecbd8
	ctx.lr = 0x82613254;
	sub_823ECBD8(ctx, base);
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
loc_82613258:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82613270
	if (ctx.cr6.eq) goto loc_82613270;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82613274
	goto loc_82613274;
loc_82613270:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82613274:
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

DEFINE_REX_FUNC(sub_82617290) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82617288
	sub_82617288(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82617AA8) {
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
	// li r31,0
	r31.s64 = 0;
	// addi r10,r11,-15776
	ctx.r10.s64 = ctx.r11.s64 + -15776;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_82617ACC:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82617aec
	if (!ctx.cr0.eq) goto loc_82617AEC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82617acc
	if (!ctx.cr6.eq) goto loc_82617ACC;
loc_82617AEC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82617b2c
	if (ctx.cr0.eq) goto loc_82617B2C;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-14180
	ctx.r10.s64 = ctx.r10.s64 + -14180;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_82617B04:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82617b24
	if (!ctx.cr0.eq) goto loc_82617B24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82617b04
	if (!ctx.cr6.eq) goto loc_82617B04;
loc_82617B24:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82617b44
	if (!ctx.cr0.eq) goto loc_82617B44;
loc_82617B2C:
	// stw r3,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82617B40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82617b54
	goto loc_82617B54;
loc_82617B44:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r31,r31,16386
	r31.u64 = r31.u64 | 16386;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82617B54:
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

DEFINE_REX_FUNC(sub_8261D098) {
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
	ctx.lr = 0x8261D0A0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// mr r23,r25
	r23.u64 = r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8261d310
	if (!ctx.cr6.gt) goto loc_8261D310;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// mr r26,r25
	r26.u64 = r25.u64;
	// ori r24,r10,14
	r24.u64 = ctx.r10.u64 | 14;
	// addi r22,r11,20576
	r22.s64 = ctx.r11.s64 + 20576;
loc_8261D0D8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x8261d350
	if (ctx.cr6.lt) goto loc_8261D350;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r11,r26,r11
	ctx.r11.u64 = r26.u64 + ctx.r11.u64;
	// lwz r10,84(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r28,r11,4
	r28.s64 = ctx.r11.s64 + 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261D104;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8261d120
	if (!ctx.cr6.eq) goto loc_8261D120;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261D120;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8261D120:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// lwz r10,120(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 120);
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r29,4(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bne cr6,0x8261d150
	if (!ctx.cr6.eq) goto loc_8261D150;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261d14c
	if (ctx.cr6.eq) goto loc_8261D14C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8261d150
	goto loc_8261D150;
loc_8261D14C:
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
loc_8261D150:
	// lwz r7,128(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 128);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8261d198
	if (!ctx.cr6.eq) goto loc_8261D198;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261d174
	if (ctx.cr6.eq) goto loc_8261D174;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8261d198
	goto loc_8261D198;
loc_8261D174:
	// lwz r7,132(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 132);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8261d198
	if (!ctx.cr6.eq) goto loc_8261D198;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261D194;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_8261D198:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r6,r26,r11
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	// bl 0x8261bf30
	ctx.lr = 0x8261D1BC;
	sub_8261BF30(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8261d2f4
	if (ctx.cr0.lt) goto loc_8261D2F4;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x8260b5b8
	ctx.lr = 0x8261D1DC;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261d1f8
	if (ctx.cr0.eq) goto loc_8261D1F8;
	// stw r25,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r25,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r25.u32);
	// stw r25,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r25.u32);
	// b 0x8261d1fc
	goto loc_8261D1FC;
loc_8261D1F8:
	// mr r29,r25
	r29.u64 = r25.u64;
loc_8261D1FC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8261d250
	if (ctx.cr6.eq) goto loc_8261D250;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261d218
	if (ctx.cr6.eq) goto loc_8261D218;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8261d21c
	goto loc_8261D21C;
loc_8261D218:
	// lwz r7,60(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 60);
loc_8261D21C:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r4,r26,r11
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	// bl 0x8261c8a8
	ctx.lr = 0x8261D234;
	sub_8261C8A8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8261d2a8
	if (ctx.cr0.lt) goto loc_8261D2A8;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82613af8
	ctx.lr = 0x8261D248;
	sub_82613AF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8261d258
	if (!ctx.cr0.eq) goto loc_8261D258;
loc_8261D250:
	// mr r31,r24
	r31.u64 = r24.u64;
	// b 0x8261d2a8
	goto loc_8261D2A8;
loc_8261D258:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8261d28c
	if (ctx.cr6.eq) goto loc_8261D28C;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lis r4,4919
	ctx.r4.s64 = 322371584;
	// ori r4,r4,61441
	ctx.r4.u64 = ctx.r4.u64 | 61441;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261D284;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8261d2a8
	if (ctx.cr0.lt) goto loc_8261D2A8;
loc_8261D28C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r28,80
	ctx.r3.s64 = r28.s64 + 80;
	// bl 0x82613af8
	ctx.lr = 0x8261D298;
	sub_82613AF8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r31,r11,r24
	r31.u64 = ctx.r11.u64 & r24.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x8261d2f4
	if (!ctx.cr0.lt) goto loc_8261D2F4;
loc_8261D2A8:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261d2c0
	if (ctx.cr6.eq) goto loc_8261D2C0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8261d2c4
	goto loc_8261D2C4;
loc_8261D2C0:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_8261D2C4:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x8261d2d0
	if (!ctx.cr6.eq) goto loc_8261D2D0;
	// bl 0x8261c050
	ctx.lr = 0x8261D2D0;
	sub_8261C050(ctx, base);
loc_8261D2D0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8261d2e8
	if (ctx.cr6.eq) goto loc_8261D2E8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8261c968
	ctx.lr = 0x8261D2E0;
	sub_8261C968(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x8261D2E8;
	sub_8264C3D0(ctx, base);
loc_8261D2E8:
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8260b9b0
	ctx.lr = 0x8261D2F4;
	sub_8260B9B0(ctx, base);
loc_8261D2F4:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8261d0d8
	if (ctx.cr6.lt) goto loc_8261D0D8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x8261d350
	if (ctx.cr6.lt) goto loc_8261D350;
loc_8261D310:
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r5,76(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261d328
	if (ctx.cr6.eq) goto loc_8261D328;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8261d32c
	goto loc_8261D32C;
loc_8261D328:
	// lwz r4,60(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 60);
loc_8261D32C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r6,4919
	ctx.r6.s64 = 322371584;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r6,r6,61441
	ctx.r6.u64 = ctx.r6.u64 | 61441;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261D348;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x8261d358
	if (!ctx.cr0.lt) goto loc_8261D358;
loc_8261D350:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8261cf68
	ctx.lr = 0x8261D358;
	sub_8261CF68(ctx, base);
loc_8261D358:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82636450) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// srawi r3,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826372B0) {
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
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826a2e60
	ctx.lr = 0x826372D0;
	sub_826A2E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fad28
	ctx.lr = 0x826372D8;
	sub_826FAD28(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x826fadd0
	ctx.lr = 0x826372E0;
	sub_826FADD0(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x826fadd0
	ctx.lr = 0x826372E8;
	sub_826FADD0(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x826fadd0
	ctx.lr = 0x826372F0;
	sub_826FADD0(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x826fadd0
	ctx.lr = 0x826372F8;
	sub_826FADD0(ctx, base);
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

DEFINE_REX_FUNC(sub_826382D8) {
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
	ctx.lr = 0x826382E0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826384f8
	if (ctx.cr6.eq) goto loc_826384F8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826384f8
	if (ctx.cr6.eq) goto loc_826384F8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826384f8
	if (ctx.cr6.eq) goto loc_826384F8;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// blt cr6,0x826384f8
	if (ctx.cr6.lt) goto loc_826384F8;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x826384f8
	if (ctx.cr6.gt) goto loc_826384F8;
	// mullw r22,r5,r5
	r22.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// rlwinm r5,r22,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8263833C;
	sub_826A2E60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82638378
	if (!ctx.cr6.gt) goto loc_82638378;
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82638354:
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// beq cr6,0x82638368
	if (ctx.cr6.eq) goto loc_82638368;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
loc_82638368:
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stwx r10,r8,r26
	REX_STORE_U32(ctx.r8.u32 + r26.u32, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82638354
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82638354;
loc_82638378:
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x826383c4
	if (!ctx.cr6.gt) goto loc_826383C4;
loc_82638388:
	// addi r31,r29,1
	r31.s64 = r29.s64 + 1;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r30,r27
	ctx.r3.u64 = r30.u64 + r27.u64;
	// bl 0x82638170
	ctx.lr = 0x826383A8;
	sub_82638170(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826384ec
	if (ctx.cr6.lt) goto loc_826384EC;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// mr r29,r31
	r29.u64 = r31.u64;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(r31.s32, r28.s32, ctx.xer);
	// blt cr6,0x82638388
	if (ctx.cr6.lt) goto loc_82638388;
loc_826383C4:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82638404
	if (!ctx.cr6.gt) goto loc_82638404;
	// lis r11,31
	ctx.r11.s64 = 2031616;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
	// addi r10,r26,-4
	ctx.r10.s64 = r26.s64 + -4;
	// lis r8,32
	ctx.r8.s64 = 2097152;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
loc_826383E0:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826383f4
	if (ctx.cr6.lt) goto loc_826383F4;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x826383f8
	goto loc_826383F8;
loc_826383F4:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_826383F8:
	// rlwinm r11,r11,0,0,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFC00000;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x826383e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826383E0;
loc_82638404:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// lfs f0,6156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6156);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x826384ac
	if (ctx.cr6.lt) goto loc_826384AC;
	// addi r9,r22,-3
	ctx.r9.s64 = r22.s64 + -3;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
loc_82638420:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,12(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f1,104(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfsu f11,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// blt cr6,0x82638420
	if (ctx.cr6.lt) goto loc_82638420;
loc_826384AC:
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r22.s32, ctx.xer);
	// bge cr6,0x826384ec
	if (!ctx.cr6.lt) goto loc_826384EC;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r22
	ctx.r10.u64 = r22.u64 - ctx.r10.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826384C8:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsu f10,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x826384c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826384C8;
loc_826384EC:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf0
	return;
loc_826384F8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82643408) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82643410;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,184(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,188(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r10,20(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// add r30,r11,r9
	r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// ble cr6,0x8264347c
	if (!ctx.cr6.gt) goto loc_8264347C;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82643460
	if (!ctx.cr6.eq) goto loc_82643460;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,532(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 532);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82643460:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,188(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x826a1e70
	ctx.lr = 0x82643470;
	sub_826A1E70(ctx, base);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// b 0x826434a4
	goto loc_826434A4;
loc_8264347C:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82643494
	if (ctx.cr6.eq) goto loc_82643494;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82643490;
	sub_826A1E70(ctx, base);
	// b 0x82643498
	goto loc_82643498;
loc_82643494:
	// stw r4,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r4.u32);
loc_82643498:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// mr r30,r29
	r30.u64 = r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
loc_826434A4:
	// ld r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 200);
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// lwz r8,184(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 184);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// std r10,200(r31)
	REX_STORE_U64(r31.u32 + 200, ctx.r10.u64);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,20(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826435a0
	if (!ctx.cr6.eq) goto loc_826435A0;
	// lwz r10,264(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82643568
	if (ctx.cr6.eq) goto loc_82643568;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// add r10,r4,r30
	ctx.r10.u64 = ctx.r4.u64 + r30.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82643514
	if (!ctx.cr6.eq) goto loc_82643514;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,532(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 532);
	// bl 0x826a1e70
	ctx.lr = 0x82643508;
	sub_826A1E70(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,532(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 532);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_82643514:
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264353c
	if (ctx.cr6.eq) goto loc_8264353C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r5,8(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264353C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264353C:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82643568
	if (ctx.cr0.eq) goto loc_82643568;
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82643568
	if (ctx.cr6.eq) goto loc_82643568;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643568;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82643568:
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 184);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82643580
	if (ctx.cr0.eq) goto loc_82643580;
	// std r29,200(r31)
	REX_STORE_U64(r31.u32 + 200, r29.u64);
loc_82643580:
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82643594
	if (ctx.cr6.eq) goto loc_82643594;
	// stw r29,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r29.u32);
	// b 0x82643598
	goto loc_82643598;
loc_82643594:
	// bl 0x8264c3d0
	ctx.lr = 0x82643598;
	sub_8264C3D0(ctx, base);
loc_82643598:
	// stw r29,184(r31)
	REX_STORE_U32(r31.u32 + 184, r29.u32);
	// stw r29,188(r31)
	REX_STORE_U32(r31.u32 + 188, r29.u32);
loc_826435A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8264E300) {
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
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r10,1334
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1334, ctx.xer);
	// blt cr6,0x8264e3b8
	if (ctx.cr6.lt) goto loc_8264E3B8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8264e3b8
	if (ctx.cr6.eq) goto loc_8264E3B8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r10,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// std r3,84(r1)
	REX_STORE_U64(ctx.r1.u32 + 84, ctx.r3.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// ori r4,r4,27
	ctx.r4.u64 = ctx.r4.u64 | 27;
	// li r3,251
	ctx.r3.s64 = 251;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x827937c4
	ctx.lr = 0x8264E370;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8264e390
	if (!ctx.cr0.lt) goto loc_8264E390;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,20999
	ctx.r11.u64 = ctx.r11.u64 | 20999;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8264e3b8
	if (ctx.cr6.eq) goto loc_8264E3B8;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x8264e3c4
	goto loc_8264E3C4;
loc_8264E390:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8264e3b0
	if (!ctx.cr6.eq) goto loc_8264E3B0;
	// bl 0x823f0058
	ctx.lr = 0x8264E39C;
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
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8264e3c4
	goto loc_8264E3C4;
loc_8264E3B0:
	// li r3,997
	ctx.r3.s64 = 997;
	// b 0x8264e3c4
	goto loc_8264E3C4;
loc_8264E3B8:
	// li r11,1334
	ctx.r11.s64 = 1334;
	// li r3,122
	ctx.r3.s64 = 122;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8264E3C4:
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

DEFINE_REX_FUNC(sub_82650988) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r3,248
	ctx.r10.s64 = ctx.r3.s64 + 248;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x826509b0
	goto loc_826509B0;
loc_826509A0:
	// lwz r9,304(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// rlwinm. r9,r9,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x826509c4
	if (ctx.cr0.eq) goto loc_826509C4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_826509B0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826509a0
	if (!ctx.cr0.eq) goto loc_826509A0;
	// blr 
	return;
loc_826509C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82653A98) {
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
	ctx.lr = 0x82653AA0;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r4,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r4.u32);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// stw r5,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r5.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r6,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r6.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r3,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r3.u32);
	// lwz r4,100(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// stw r7,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r7.u32);
	// stw r8,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r8.u32);
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// bl 0x826510d8
	ctx.lr = 0x82653AE0;
	sub_826510D8(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r23,0
	r23.s64 = 0;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r11,420(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 420);
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82653b08
	if (ctx.cr6.eq) goto loc_82653B08;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82653b0c
	goto loc_82653B0C;
loc_82653B08:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82653B0C:
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82653b34
	if (ctx.cr0.eq) goto loc_82653B34;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82653b34
	if (ctx.cr6.eq) goto loc_82653B34;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82653b2c
	if (!ctx.cr6.eq) goto loc_82653B2C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82653b34
	if (!ctx.cr6.eq) goto loc_82653B34;
loc_82653B2C:
	// li r24,-1
	r24.s64 = -1;
	// b 0x82653b38
	goto loc_82653B38;
loc_82653B34:
	// li r24,-97
	r24.s64 = -97;
loc_82653B38:
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// sth r24,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r24.u16);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mr r28,r23
	r28.u64 = r23.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// std r23,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r23.u64);
	// stw r23,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r23.u32);
	// beq cr6,0x82653c2c
	if (ctx.cr6.eq) goto loc_82653C2C;
	// addi r26,r1,128
	r26.s64 = ctx.r1.s64 + 128;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_82653B60:
	// lwz r29,0(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 0);
	// clrlwi r31,r24,16
	r31.u64 = r24.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 16);
	// std r11,0(r26)
	REX_STORE_U64(r26.u32 + 0, ctx.r11.u64);
	// bl 0x82650688
	ctx.lr = 0x82653B78;
	sub_82650688(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// and r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 & r31.u64;
	// rlwinm. r10,r8,0,25,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x60;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// bne 0x82653b90
	if (!ctx.cr0.eq) goto loc_82653B90;
	// andi. r24,r31,65439
	r24.u64 = r31.u64 & 65439;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
loc_82653B90:
	// andi. r11,r11,80
	ctx.r11.u64 = ctx.r11.u64 & 80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82653bcc
	if (ctx.cr0.eq) goto loc_82653BCC;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// slw r9,r9,r28
	ctx.r9.u64 = r28.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r28.u8 & 0x3F));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82653BB0:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// or r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stb r7,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// bdnz 0x82653bb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82653BB0;
loc_82653BCC:
	// lwz r11,396(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 396);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82653be8
	if (ctx.cr0.eq) goto loc_82653BE8;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lhzx r9,r30,r10
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + ctx.r10.u32);
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// sthx r9,r30,r10
	REX_STORE_U16(r30.u32 + ctx.r10.u32, ctx.r9.u16);
loc_82653BE8:
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82653c00
	if (ctx.cr0.eq) goto loc_82653C00;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lhzx r9,r30,r10
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + ctx.r10.u32);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// sthx r9,r30,r10
	REX_STORE_U16(r30.u32 + ctx.r10.u32, ctx.r9.u16);
loc_82653C00:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r11,396(r29)
	REX_STORE_U32(r29.u32 + 396, ctx.r11.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// sthx r8,r30,r10
	REX_STORE_U16(r30.u32 + ctx.r10.u32, ctx.r8.u16);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmplw cr6,r28,r22
	ctx.cr6.compare<uint32_t>(r28.u32, r22.u32, ctx.xer);
	// blt cr6,0x82653b60
	if (ctx.cr6.lt) goto loc_82653B60;
	// sth r24,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r24.u16);
loc_82653C2C:
	// lwz r11,740(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 740);
	// mr r14,r23
	r14.u64 = r23.u64;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// mr r29,r23
	r29.u64 = r23.u64;
	// rlwinm r19,r11,13,27,27
	r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x10;
	// li r15,-1
	r15.s64 = -1;
	// b 0x82653c58
	goto loc_82653C58;
loc_82653C48:
	// lhz r24,80(r1)
	r24.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r23,0
	r23.s64 = 0;
	// lwz r22,356(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r25,340(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
loc_82653C58:
	// addi r11,r29,95
	ctx.r11.s64 = r29.s64 + 95;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r16,r11,2,0,29
	r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwzx r11,r16,r25
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82653c88
	if (ctx.cr6.eq) goto loc_82653C88;
	// bl 0x82652540
	ctx.lr = 0x82653C78;
	sub_82652540(ctx, base);
	// lwzx r11,r16,r25
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + r25.u32);
	// lwz r18,36(r11)
	r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r17,40(r11)
	r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x82653cb0
	goto loc_82653CB0;
loc_82653C88:
	// bl 0x82652790
	ctx.lr = 0x82653C8C;
	sub_82652790(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82654018
	if (ctx.cr0.lt) goto loc_82654018;
	// add r11,r29,r25
	ctx.r11.u64 = r29.u64 + r25.u64;
	// lbz r11,736(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 736);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82653f04
	if (ctx.cr0.eq) goto loc_82653F04;
	// rlwinm r3,r11,2,25,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x78;
	// mr r18,r23
	r18.u64 = r23.u64;
	// mr r17,r23
	r17.u64 = r23.u64;
loc_82653CB0:
	// clrlwi r24,r24,16
	r24.u64 = r24.u32 & 0xFFFF;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// and r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 & r24.u64;
	// andi. r10,r11,80
	ctx.r10.u64 = ctx.r11.u64 & 80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r20,r11,16
	r20.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82653cd8
	if (ctx.cr0.eq) goto loc_82653CD8;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r10,255
	ctx.r10.s64 = 255;
	// stbx r10,r29,r11
	REX_STORE_U8(r29.u32 + ctx.r11.u32, ctx.r10.u8);
loc_82653CD8:
	// mr r26,r23
	r26.u64 = r23.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82653f04
	if (ctx.cr6.eq) goto loc_82653F04;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lwz r27,348(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// rlwinm r22,r24,0,25,26
	r22.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x60;
	// addi r25,r1,112
	r25.s64 = ctx.r1.s64 + 112;
	// addi r23,r1,128
	r23.s64 = ctx.r1.s64 + 128;
	// lbzx r21,r29,r11
	r21.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
loc_82653CFC:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r31,0(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r28,r24,0,27,28
	r28.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x18;
	// slw r11,r11,r26
	ctx.r11.u64 = r26.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r26.u8 & 0x3F));
	// and. r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 & r21.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r22
	r30.u64 = r22.u64;
	// beq 0x82653d4c
	if (ctx.cr0.eq) goto loc_82653D4C;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ee6b0
	ctx.lr = 0x82653D30;
	sub_823EE6B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82653d44
	if (!ctx.cr0.eq) goto loc_82653D44;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82653d4c
	if (!ctx.cr6.eq) goto loc_82653D4C;
loc_82653D44:
	// andi. r28,r28,65519
	r28.u64 = r28.u64 & 65519;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// andi. r30,r30,65471
	r30.u64 = r30.u64 & 65471;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
loc_82653D4C:
	// cmplwi cr6,r29,255
	ctx.cr6.compare<uint32_t>(r29.u32, 255, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// bne cr6,0x82653d60
	if (!ctx.cr6.eq) goto loc_82653D60;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82653d68
	goto loc_82653D68;
loc_82653D60:
	// slw r11,r9,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r29.u8 & 0x3F));
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82653D68:
	// lbz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 392);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82653d9c
	if (!ctx.cr0.eq) goto loc_82653D9C;
	// cmplwi cr6,r29,255
	ctx.cr6.compare<uint32_t>(r29.u32, 255, ctx.xer);
	// bne cr6,0x82653d88
	if (!ctx.cr6.eq) goto loc_82653D88;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82653d90
	goto loc_82653D90;
loc_82653D88:
	// slw r11,r9,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r29.u8 & 0x3F));
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82653D90:
	// rlwinm r11,r11,4,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF0;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82653da4
	if (ctx.cr0.eq) goto loc_82653DA4;
loc_82653D9C:
	// li r28,0
	r28.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_82653DA4:
	// clrlwi r11,r30,16
	ctx.r11.u64 = r30.u32 & 0xFFFF;
	// and r10,r11,r20
	ctx.r10.u64 = ctx.r11.u64 & r20.u64;
	// clrlwi. r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82653de8
	if (ctx.cr0.eq) goto loc_82653DE8;
	// lhz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 0);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82653de8
	if (ctx.cr0.eq) goto loc_82653DE8;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// and. r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 & r18.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82653dd0
	if (ctx.cr0.eq) goto loc_82653DD0;
	// rlwinm r14,r19,0,27,27
	r14.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0x10;
loc_82653DD0:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// and. r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 & r17.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82653df4
	if (ctx.cr0.eq) goto loc_82653DF4;
	// rlwinm r11,r19,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0x10;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82653df4
	goto loc_82653DF4;
loc_82653DE8:
	// li r14,0
	r14.s64 = 0;
	// rlwinm r19,r19,0,28,26
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r14.u32);
loc_82653DF4:
	// lwz r8,340(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwzx r10,r16,r8
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82653ee8
	if (ctx.cr6.eq) goto loc_82653EE8;
	// clrlwi r11,r28,16
	ctx.r11.u64 = r28.u32 & 0xFFFF;
	// and r7,r11,r20
	ctx.r7.u64 = ctx.r11.u64 & r20.u64;
	// clrlwi. r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82653e74
	if (ctx.cr0.eq) goto loc_82653E74;
	// lhz r7,0(r25)
	ctx.r7.u64 = REX_LOAD_U16(r25.u32 + 0);
	// and. r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82653e74
	if (ctx.cr0.eq) goto loc_82653E74;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// and. r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82653e38
	if (ctx.cr0.eq) goto loc_82653E38;
	// slw r11,r9,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r29.u8 & 0x3F));
	// or r19,r11,r19
	r19.u64 = ctx.r11.u64 | r19.u64;
loc_82653E38:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,32(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82653e74
	if (ctx.cr0.eq) goto loc_82653E74;
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82653e74
	if (ctx.cr0.eq) goto loc_82653E74;
	// lbz r10,393(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 393);
	// slw r9,r9,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r29.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r10,393(r31)
	REX_STORE_U8(r31.u32 + 393, ctx.r10.u8);
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
	// b 0x82653e88
	goto loc_82653E88;
loc_82653E74:
	// lbz r11,393(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 393);
	// slw r10,r9,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r29.u8 & 0x3F));
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// stb r11,393(r31)
	REX_STORE_U8(r31.u32 + 393, ctx.r11.u8);
loc_82653E88:
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// rlwinm. r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82653ea0
	if (!ctx.cr0.eq) goto loc_82653EA0;
	// lwz r10,380(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82653ee8
	if (ctx.cr6.eq) goto loc_82653EE8;
loc_82653EA0:
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82653ee8
	if (!ctx.cr0.eq) goto loc_82653EE8;
	// lwz r10,428(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 428);
	// addi r11,r8,424
	ctx.r11.s64 = ctx.r8.s64 + 424;
	// ld r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82653edc
	if (ctx.cr6.eq) goto loc_82653EDC;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653ED4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82653ee0
	goto loc_82653EE0;
loc_82653EDC:
	// li r30,0
	r30.s64 = 0;
loc_82653EE0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82654018
	if (ctx.cr6.lt) goto loc_82654018;
loc_82653EE8:
	// lwz r11,356(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r23,r23,8
	r23.s64 = r23.s64 + 8;
	// addi r25,r25,2
	r25.s64 = r25.s64 + 2;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82653cfc
	if (ctx.cr6.lt) goto loc_82653CFC;
loc_82653F04:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(r29.u32, 4, ctx.xer);
	// blt cr6,0x82653c48
	if (ctx.cr6.lt) goto loc_82653C48;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne cr6,0x82653f28
	if (!ctx.cr6.eq) goto loc_82653F28;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82653f28
	if (!ctx.cr6.eq) goto loc_82653F28;
	// rlwinm r19,r19,0,28,26
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_82653F28:
	// lwz r25,340(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,400(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 400);
	// bl 0x8265d778
	ctx.lr = 0x82653F3C;
	sub_8265D778(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82654018
	if (!ctx.cr0.eq) goto loc_82654018;
	// lwz r3,420(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 420);
	// lwz r26,356(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82653f7c
	if (ctx.cr6.eq) goto loc_82653F7C;
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// lwz r10,380(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,372(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r6,364(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r4,348(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// bl 0x82660120
	ctx.lr = 0x82653F74;
	sub_82660120(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82654018
	if (ctx.cr0.lt) goto loc_82654018;
loc_82653F7C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82654018
	if (ctx.cr6.eq) goto loc_82654018;
	// lwz r28,348(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// addi r27,r1,104
	r27.s64 = ctx.r1.s64 + 104;
loc_82653F8C:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653FA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82653fb4
	if (ctx.cr0.eq) goto loc_82653FB4;
	// li r29,1
	r29.s64 = 1;
loc_82653FB4:
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82653fc8
	if (ctx.cr0.eq) goto loc_82653FC8;
	// clrlwi r10,r29,16
	ctx.r10.u64 = r29.u32 & 0xFFFF;
	// ori r29,r10,2
	r29.u64 = ctx.r10.u64 | 2;
loc_82653FC8:
	// lhz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 0);
	// clrlwi r9,r29,16
	ctx.r9.u64 = r29.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82653fe0
	if (!ctx.cr6.eq) goto loc_82653FE0;
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82654008
	if (ctx.cr0.eq) goto loc_82654008;
loc_82653FE0:
	// rlwinm. r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,22,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
	// beq 0x82654008
	if (ctx.cr0.eq) goto loc_82654008;
	// lwz r3,12(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654008;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82654008:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// bne 0x82653f8c
	if (!ctx.cr0.eq) goto loc_82653F8C;
loc_82654018:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82676F78) {
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
	ctx.lr = 0x82676F80;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,40(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lbz r3,2(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// bl 0x82680a30
	ctx.lr = 0x82676FA4;
	sub_82680A30(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82677120
	if (!ctx.cr6.eq) goto loc_82677120;
	// lwz r11,164(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 164);
	// lwz r10,284(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 284);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82677120
	if (!ctx.cr6.lt) goto loc_82677120;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,44(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x82681130
	ctx.lr = 0x82676FCC;
	sub_82681130(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82677120
	if (ctx.cr0.eq) goto loc_82677120;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r11,3(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 3);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82677120
	if (!ctx.cr6.eq) goto loc_82677120;
	// lhz r11,5(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 5);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82677120
	if (ctx.cr6.lt) goto loc_82677120;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,1607
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1607, ctx.xer);
	// bgt cr6,0x82677120
	if (ctx.cr6.gt) goto loc_82677120;
	// lhz r9,7(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 7);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bgt cr6,0x82677120
	if (ctx.cr6.gt) goto loc_82677120;
	// lhz r11,9(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 9);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82677120
	if (ctx.cr6.lt) goto loc_82677120;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r8,60000
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 60000, ctx.xer);
	// bgt cr6,0x82677120
	if (ctx.cr6.gt) goto loc_82677120;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82677120
	if (ctx.cr6.gt) goto loc_82677120;
	// lwz r11,19(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 19);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82677120
	if (ctx.cr0.eq) goto loc_82677120;
	// lwz r10,68(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 68);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82677120
	if (ctx.cr6.gt) goto loc_82677120;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82680a68
	ctx.lr = 0x8267705C;
	sub_82680A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82677120
	if (ctx.cr0.eq) goto loc_82677120;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,19(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 19);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82677120
	if (ctx.cr6.gt) goto loc_82677120;
	// addi r30,r29,172
	r30.s64 = r29.s64 + 172;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827938a4
	ctx.lr = 0x82677084;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,288(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 288);
	// addi r11,r29,288
	ctx.r11.s64 = r29.s64 + 288;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r7,18(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 18);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826770e0
	if (ctx.cr6.eq) goto loc_826770E0;
loc_826770AC:
	// lwz r6,12(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lhz r9,10(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x826770cc
	if (!ctx.cr6.eq) goto loc_826770CC;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82677118
	if (ctx.cr6.eq) goto loc_82677118;
loc_826770CC:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826770e0
	if (ctx.cr6.eq) goto loc_826770E0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x826770ac
	if (!ctx.cr0.eq) goto loc_826770AC;
loc_826770E0:
	// lwz r9,284(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 284);
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,284(r29)
	REX_STORE_U32(r29.u32 + 284, ctx.r9.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x827938b4
	ctx.lr = 0x82677110;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82677124
	goto loc_82677124;
loc_82677118:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827938b4
	ctx.lr = 0x82677120;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82677120:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82677124:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82681170) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// sth r7,7(r3)
	REX_STORE_U16(ctx.r3.u32 + 7, ctx.r7.u16);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r30,2
	r30.s64 = 2;
	// sth r6,5(r3)
	REX_STORE_U16(ctx.r3.u32 + 5, ctx.r6.u16);
	// li r31,0
	r31.s64 = 0;
	// sth r8,9(r3)
	REX_STORE_U16(ctx.r3.u32 + 9, ctx.r8.u16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r30,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, r30.u8);
	// li r6,256
	ctx.r6.s64 = 256;
	// stw r31,19(r3)
	REX_STORE_U32(ctx.r3.u32 + 19, r31.u32);
	// stw r31,23(r3)
	REX_STORE_U32(ctx.r3.u32 + 23, r31.u32);
	// addi r8,r3,31
	ctx.r8.s64 = ctx.r3.s64 + 31;
	// stb r31,31(r3)
	REX_STORE_U8(ctx.r3.u32 + 31, r31.u8);
	// li r3,32
	ctx.r3.s64 = 32;
	// sth r6,3(r7)
	REX_STORE_U16(ctx.r7.u32 + 3, ctx.r6.u16);
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// stw r4,11(r7)
	REX_STORE_U32(ctx.r7.u32 + 11, ctx.r4.u32);
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// stw r5,15(r7)
	REX_STORE_U32(ctx.r7.u32 + 15, ctx.r5.u32);
	// stw r9,27(r7)
	REX_STORE_U32(ctx.r7.u32 + 27, ctx.r9.u32);
loc_826811C8:
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x826811f4
	if (ctx.cr0.eq) goto loc_826811F4;
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// slw r9,r9,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r31.u8 & 0x3F));
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stb r9,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
loc_826811F4:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x826811c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826811C8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r11,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826834E8) {
	REX_FUNC_PROLOGUE();
	// li r11,40
	ctx.r11.s64 = 40;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82683520
	if (!ctx.cr6.eq) goto loc_82683520;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
loc_82683520:
	// stw r11,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// stw r11,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// stw r5,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r5.u32);
	// stw r6,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// stw r7,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82685AA8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,196(r3)
	REX_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r5,r3,32
	ctx.r5.s64 = ctx.r3.s64 + 32;
	// ld r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 20);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r3,r10,540
	ctx.r3.s64 = ctx.r10.s64 + 540;
	// b 0x826831d8
	sub_826831D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82686C90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82686C98;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 32);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// lis r9,0
	ctx.r9.s64 = 0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// ori r10,r9,65535
	ctx.r10.u64 = ctx.r9.u64 | 65535;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82686CD0:
	// rlwinm r5,r11,29,19,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFF;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// slw r4,r7,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r4.u8 & 0x3F));
	// lbzx r5,r5,r30
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + r30.u32);
	// and. r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82686cf8
	if (ctx.cr0.eq) goto loc_82686CF8;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
loc_82686CF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82686d30
	if (ctx.cr6.eq) goto loc_82686D30;
	// rlwinm. r8,r8,31,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82686d18
	if (!ctx.cr0.eq) goto loc_82686D18;
	// stb r9,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r9.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// li r8,64
	ctx.r8.s64 = 64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82686D18:
	// addi r5,r29,37
	ctx.r5.s64 = r29.s64 + 37;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r5.u32, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// blt cr6,0x82686cd0
	if (ctx.cr6.lt) goto loc_82686CD0;
	// b 0x82686d3c
	goto loc_82686D3C;
loc_82686D30:
	// rlwimi r9,r7,7,0,24
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80) | (ctx.r9.u64 & 0xFFFFFFFF0000007F);
	// stb r9,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r9.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82686D3C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82686d68
	if (ctx.cr6.eq) goto loc_82686D68;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82686D54;
	sub_826A2E60(ctx, base);
	// lhz r11,38(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 38);
	// lhz r10,34(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 34);
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// sth r11,38(r30)
	REX_STORE_U16(r30.u32 + 38, ctx.r11.u16);
	// sth r10,36(r30)
	REX_STORE_U16(r30.u32 + 36, ctx.r10.u16);
loc_82686D68:
	// subf r3,r29,r31
	ctx.r3.u64 = r31.u64 - r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8268C9F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8268C9F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268cad8
	if (ctx.cr6.eq) goto loc_8268CAD8;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268ca20
	if (ctx.cr6.eq) goto loc_8268CA20;
	// bl 0x827941b4
	ctx.lr = 0x8268CA1C;
	__imp__XamVoiceClose(ctx, base);
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
loc_8268CA20:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82691ce0
	ctx.lr = 0x8268CA28;
	sub_82691CE0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r29,r28
	r29.u64 = r28.u64;
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8268ca5c
	if (!ctx.cr6.gt) goto loc_8268CA5C;
	// addi r30,r31,44
	r30.s64 = r31.s64 + 44;
loc_8268CA40:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8268ec70
	ctx.lr = 0x8268CA48;
	sub_8268EC70(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268ca40
	if (ctx.cr6.lt) goto loc_8268CA40;
loc_8268CA5C:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8268ca98
	if (!ctx.cr6.gt) goto loc_8268CA98;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
loc_8268CA70:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268CA84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268ca70
	if (ctx.cr6.lt) goto loc_8268CA70;
loc_8268CA98:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// bl 0x8268efa0
	ctx.lr = 0x8268CAA0;
	sub_8268EFA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82793874
	ctx.lr = 0x8268CAAC;
	__imp__XMsgCancelIORequest(ctx, base);
	// lwz r3,188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 188);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268cac8
	if (ctx.cr6.eq) goto loc_8268CAC8;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x823f0350
	ctx.lr = 0x8268CAC4;
	sub_823F0350(ctx, base);
	// stw r28,188(r31)
	REX_STORE_U32(r31.u32 + 188, r28.u32);
loc_8268CAC8:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// bl 0x823f0350
	ctx.lr = 0x8268CAD8;
	sub_823F0350(ctx, base);
loc_8268CAD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82694D08) {
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
	ctx.lr = 0x82694D10;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r6,43
	ctx.r6.s64 = 43;
	// li r5,87
	ctx.r5.s64 = 87;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x82696910
	ctx.lr = 0x82694D44;
	sub_82696910(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-2464(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -2464);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x826a3cb0
	ctx.lr = 0x82694D68;
	sub_826A3CB0(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r31,92(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(r31.s32, 7, ctx.xer);
	// ble cr6,0x82694d80
	if (!ctx.cr6.gt) goto loc_82694D80;
	// li r31,7
	r31.s64 = 7;
loc_82694D80:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82694ba8
	ctx.lr = 0x82694D94;
	sub_82694BA8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f13,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f0,-2468(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -2468);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x826964b8
	ctx.lr = 0x82694DC0;
	sub_826964B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,32500(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32500);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82696b18
	ctx.lr = 0x82694DD8;
	sub_82696B18(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826949d8
	ctx.lr = 0x82694DEC;
	sub_826949D8(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,-2472(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -2472);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,14180(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 14180);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 * ctx.f0.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82694e70
	if (!ctx.cr6.gt) goto loc_82694E70;
	// addi r7,r29,-4
	ctx.r7.s64 = r29.s64 + -4;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_82694E24:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// bge cr6,0x82694e5c
	if (!ctx.cr6.lt) goto loc_82694E5C;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lfsx f12,r6,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + r27.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r6,r5
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x82694e5c
	if (ctx.cr6.lt) goto loc_82694E5C;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82694e5c
	if (!ctx.cr6.gt) goto loc_82694E5C;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82694E5C:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82694e24
	if (ctx.cr6.lt) goto loc_82694E24;
loc_82694E70:
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stwx r10,r7,r29
	REX_STORE_U32(ctx.r7.u32 + r29.u32, ctx.r10.u32);
	// stwx r10,r8,r29
	REX_STORE_U32(ctx.r8.u32 + r29.u32, ctx.r10.u32);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8269DF4C) {
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
	// lwz r30,156(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// b 0x8269df84
	goto loc_8269DF84;
loc_8269DF84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269e1e0
	ctx.lr = 0x8269DF8C;
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

DEFINE_REX_FUNC(sub_8269EE1C) {
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
	ctx.lr = 0x8269EE3C;
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

DEFINE_REX_FUNC(sub_826A0748) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// bne cr6,0x826a0760
	if (!ctx.cr6.eq) goto loc_826A0760;
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// blt cr6,0x826a0764
	if (ctx.cr6.lt) goto loc_826A0764;
loc_826A0760:
	// li r9,0
	ctx.r9.s64 = 0;
loc_826A0764:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826a0780
	if (ctx.cr6.eq) goto loc_826A0780;
	// li r9,45
	ctx.r9.s64 = 45;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stb r9,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_826A0780:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// clrldi r8,r5,32
	ctx.r8.u64 = ctx.r5.u64 & 0xFFFFFFFF;
loc_826A0788:
	// divdu r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 ? ctx.r10.u64 / ctx.r8.u64 : 0;
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
	// mulld r9,r9,r8
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r8.u64);
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// divdu r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 ? ctx.r10.u64 / ctx.r8.u64 : 0;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// ble cr6,0x826a07b4
	if (!ctx.cr6.gt) goto loc_826A07B4;
	// addi r9,r9,87
	ctx.r9.s64 = ctx.r9.s64 + 87;
	// b 0x826a07b8
	goto loc_826A07B8;
loc_826A07B4:
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
loc_826A07B8:
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bgt cr6,0x826a0788
	if (ctx.cr6.gt) goto loc_826A0788;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_826A07D4:
	// lbz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r9,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r9.u8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826a07d4
	if (ctx.cr6.lt) goto loc_826A07D4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A2D70) {
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
	ctx.lr = 0x826A2D78;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826a2d98
	if (!ctx.cr6.eq) goto loc_826A2D98;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8269d6a8
	ctx.lr = 0x826A2D94;
	sub_8269D6A8(ctx, base);
	// b 0x826a2e24
	goto loc_826A2E24;
loc_826A2D98:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x826a2dac
	if (!ctx.cr6.eq) goto loc_826A2DAC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269d770
	ctx.lr = 0x826A2DA8;
	sub_8269D770(ctx, base);
	// b 0x826a2e20
	goto loc_826A2E20;
loc_826A2DAC:
	// li r29,-4096
	r29.s64 = -4096;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bgt cr6,0x826a2e08
	if (ctx.cr6.gt) goto loc_826A2E08;
	// lis r27,-32119
	r27.s64 = -2104950784;
loc_826A2DBC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x826a2dc8
	if (!ctx.cr6.eq) goto loc_826A2DC8;
	// li r31,1
	r31.s64 = 1;
loc_826A2DC8:
	// bl 0x823f5788
	ctx.lr = 0x826A2DCC;
	sub_823F5788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x823f4310
	ctx.lr = 0x826A2DDC;
	sub_823F4310(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x826a2e58
	if (!ctx.cr0.eq) goto loc_826A2E58;
	// lwz r11,9036(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 9036);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826a2e44
	if (ctx.cr6.eq) goto loc_826A2E44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e20
	ctx.lr = 0x826A2DF8;
	sub_826A1E20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a2e2c
	if (ctx.cr0.eq) goto loc_826A2E2C;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// ble cr6,0x826a2dbc
	if (!ctx.cr6.gt) goto loc_826A2DBC;
loc_826A2E08:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e20
	ctx.lr = 0x826A2E10;
	sub_826A1E20(ctx, base);
	// bl 0x826a33d0
	ctx.lr = 0x826A2E14;
	sub_826A33D0(ctx, base);
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_826A2E20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A2E24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_826A2E2C:
	// bl 0x826a33d0
	ctx.lr = 0x826A2E30;
	sub_826A33D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823ee280
	ctx.lr = 0x826A2E38;
	sub_823EE280(ctx, base);
	// bl 0x826a3360
	ctx.lr = 0x826A2E3C;
	sub_826A3360(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x826a2e20
	goto loc_826A2E20;
loc_826A2E44:
	// bl 0x826a33d0
	ctx.lr = 0x826A2E48;
	sub_826A33D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823ee280
	ctx.lr = 0x826A2E50;
	sub_823EE280(ctx, base);
	// bl 0x826a3360
	ctx.lr = 0x826A2E54;
	sub_826A3360(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_826A2E58:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x826a2e24
	goto loc_826A2E24;
}

DEFINE_REX_FUNC(__restvmx_31) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v31{};
	uint32_t ea{};
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_70) {
	REX_FUNC_PROLOGUE();
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
	// li r11,-928
	ctx.r11.s64 = -928;
	// lvx128 v70,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v70.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-912
	ctx.r11.s64 = -912;
	// lvx128 v71,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v71.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-896
	ctx.r11.s64 = -896;
	// lvx128 v72,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v72.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-880
	ctx.r11.s64 = -880;
	// lvx128 v73,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v73.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-864
	ctx.r11.s64 = -864;
	// lvx128 v74,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v74.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-848
	ctx.r11.s64 = -848;
	// lvx128 v75,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v75.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-832
	ctx.r11.s64 = -832;
	// lvx128 v76,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v76.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-816
	ctx.r11.s64 = -816;
	// lvx128 v77,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v77.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-800
	ctx.r11.s64 = -800;
	// lvx128 v78,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v78.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v79.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v80.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v81.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v82.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v83.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v84.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(sub_826B8118) {
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
	ctx.lr = 0x826B8120;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// addi r31,r1,-2000
	r31.s64 = ctx.r1.s64 + -2000;
	// stwu r1,-2000(r1)
	ea = -2000 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r27,r3,136
	r27.s64 = ctx.r3.s64 + 136;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822a5470
	ctx.lr = 0x826B813C;
	sub_822A5470(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// std r11,528(r30)
	REX_STORE_U64(r30.u32 + 528, ctx.r11.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,500(r30)
	REX_STORE_U32(r30.u32 + 500, ctx.r10.u32);
	// stw r11,536(r30)
	REX_STORE_U32(r30.u32 + 536, ctx.r11.u32);
	// stw r11,540(r30)
	REX_STORE_U32(r30.u32 + 540, ctx.r11.u32);
	// stw r11,544(r30)
	REX_STORE_U32(r30.u32 + 544, ctx.r11.u32);
	// lwz r3,52(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,56(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826B8174;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x826b81c8
	if (ctx.cr6.lt) goto loc_826B81C8;
	// lwz r11,548(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 548);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r30,520
	ctx.r3.s64 = r30.s64 + 520;
	// bl 0x826be6e0
	ctx.lr = 0x826B81A8;
	sub_826BE6E0(ctx, base);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// ori r29,r9,65535
	r29.u64 = ctx.r9.u64 | 65535;
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r6,r29
	r28.u64 = ctx.r6.u64 & r29.u64;
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
	// b 0x826b81d0
	goto loc_826B81D0;
loc_826B81C8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r29,r11,65535
	r29.u64 = ctx.r11.u64 | 65535;
loc_826B81D0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x826b831c
	if (ctx.cr6.lt) goto loc_826B831C;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r3,520(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 520);
	// bl 0x826bd7a0
	ctx.lr = 0x826B81E4;
	sub_826BD7A0(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r9,r29
	r28.u64 = ctx.r9.u64 & r29.u64;
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x826b831c
	if (ctx.cr6.lt) goto loc_826B831C;
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// lwz r4,508(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 508);
	// lwz r3,520(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 520);
	// bl 0x826be928
	ctx.lr = 0x826B8210;
	sub_826BE928(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r9,r29
	r28.u64 = ctx.r9.u64 & r29.u64;
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x826b831c
	if (ctx.cr6.lt) goto loc_826B831C;
	// li r5,1016
	ctx.r5.s64 = 1016;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,928
	ctx.r3.s64 = r31.s64 + 928;
	// bl 0x826a2e60
	ctx.lr = 0x826B823C;
	sub_826A2E60(ctx, base);
	// lwz r11,508(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 508);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r4,r31,928
	ctx.r4.s64 = r31.s64 + 928;
	// sth r11,928(r31)
	REX_STORE_U16(r31.u32 + 928, ctx.r11.u16);
	// addi r3,r30,520
	ctx.r3.s64 = r30.s64 + 520;
	// stw r10,932(r31)
	REX_STORE_U32(r31.u32 + 932, ctx.r10.u32);
	// bl 0x826bebf8
	ctx.lr = 0x826B8258;
	sub_826BEBF8(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r6,r29
	r28.u64 = ctx.r6.u64 & r29.u64;
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x826b831c
	if (ctx.cr6.lt) goto loc_826B831C;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B828C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826B82A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r7,0(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r6,44(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826B82BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 140);
	// bl 0x826b6388
	ctx.lr = 0x826B82C8;
	sub_826B6388(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 144);
	// bl 0x826b6390
	ctx.lr = 0x826B82D4;
	sub_826B6390(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x826b6398
	ctx.lr = 0x826B82E0;
	sub_826B6398(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,144(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r4,140(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mullw r11,r5,r4
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r4,r11,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x826b63a0
	ctx.lr = 0x826B82F8;
	sub_826B63A0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x826b8310
	if (ctx.cr6.eq) goto loc_826B8310;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
loc_826B8310:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822a5468
	ctx.lr = 0x826B831C;
	sub_822A5468(ctx, base);
loc_826B831C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826b8338
	goto loc_826B8338;
loc_826B8338:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,2000
	ctx.r1.s64 = r31.s64 + 2000;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826CA380) {
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
	ctx.lr = 0x826CA388;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r29,0(r3)
	r29.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lwz r10,208(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// li r18,0
	r18.s64 = 0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r18.u32);
	// mr r23,r18
	r23.u64 = r18.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r22,r11,-24
	r22.s64 = ctx.r11.s64 + -24;
	// bne cr6,0x826ca820
	if (!ctx.cr6.eq) goto loc_826CA820;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r3,8
	ctx.r3.s64 = 8;
	// ori r19,r11,32768
	r19.u64 = ctx.r11.u64 | 32768;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x823f02b8
	ctx.lr = 0x826CA3CC;
	sub_823F02B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,208(r24)
	REX_STORE_U32(r24.u32 + 208, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826ca3e4
	if (!ctx.cr6.eq) goto loc_826CA3E4;
loc_826CA3DC:
	// li r23,5
	r23.s64 = 5;
	// b 0x826ca7ac
	goto loc_826CA7AC;
loc_826CA3E4:
	// addi r31,r29,2
	r31.s64 = r29.s64 + 2;
	// stw r18,0(r30)
	REX_STORE_U32(r30.u32 + 0, r18.u32);
	// stw r18,4(r30)
	REX_STORE_U32(r30.u32 + 4, r18.u32);
	// cmpld cr6,r31,r22
	ctx.cr6.compare<uint64_t>(r31.u64, r22.u64, ctx.xer);
	// ble cr6,0x826ca400
	if (!ctx.cr6.gt) goto loc_826CA400;
loc_826CA3F8:
	// li r23,6
	r23.s64 = 6;
	// b 0x826ca7ac
	goto loc_826CA7AC;
loc_826CA400:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826b9678
	ctx.lr = 0x826CA414;
	sub_826B9678(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x826ca7a8
	if (!ctx.cr6.eq) goto loc_826CA7A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r31
	r29.u64 = r31.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r11,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r11.u16);
	// rlwinm r31,r11,4,12,27
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// mr r20,r11
	r20.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f02b8
	ctx.lr = 0x826CA458;
	sub_823F02B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// bne cr6,0x826ca46c
	if (!ctx.cr6.eq) goto loc_826CA46C;
	// li r23,5
	r23.s64 = 5;
	// b 0x826ca7ac
	goto loc_826CA7AC;
loc_826CA46C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x826CA478;
	sub_826A2E60(ctx, base);
	// mr r21,r18
	r21.u64 = r18.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x826ca820
	if (ctx.cr6.eq) goto loc_826CA820;
	// mr r28,r18
	r28.u64 = r18.u64;
loc_826CA488:
	// addi r31,r29,2
	r31.s64 = r29.s64 + 2;
	// cmpld cr6,r31,r22
	ctx.cr6.compare<uint64_t>(r31.u64, r22.u64, ctx.xer);
	// bgt cr6,0x826ca3f8
	if (ctx.cr6.gt) goto loc_826CA3F8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826b9678
	ctx.lr = 0x826CA4A8;
	sub_826B9678(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x826ca7a8
	if (!ctx.cr6.eq) goto loc_826CA7A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// std r31,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r31.u64);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthx r7,r9,r28
	REX_STORE_U16(ctx.r9.u32 + r28.u32, ctx.r7.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + r28.u64;
	// addi r7,r6,4
	ctx.r7.s64 = ctx.r6.s64 + 4;
	// bl 0x826c8b80
	ctx.lr = 0x826CA4F8;
	sub_826C8B80(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826ca7ac
	if (!ctx.cr6.eq) goto loc_826CA7AC;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ca53c
	if (ctx.cr6.eq) goto loc_826CA53C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_826CA528:
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x826ca528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826CA528;
loc_826CA53C:
	// ld r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// addi r31,r4,4
	r31.s64 = ctx.r4.s64 + 4;
	// cmpld cr6,r31,r22
	ctx.cr6.compare<uint64_t>(r31.u64, r22.u64, ctx.xer);
	// bgt cr6,0x826ca3f8
	if (ctx.cr6.gt) goto loc_826CA3F8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826b9678
	ctx.lr = 0x826CA55C;
	sub_826B9678(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x826ca7a8
	if (!ctx.cr6.eq) goto loc_826CA7A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r31
	r25.u64 = r31.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// std r31,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r31.u64);
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r7,8(r9)
	REX_STORE_U16(ctx.r9.u32 + 8, ctx.r7.u16);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lbz r3,1(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r3,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r4,r9,r28
	ctx.r4.u64 = ctx.r9.u64 + r28.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r11,10(r4)
	REX_STORE_U16(ctx.r4.u32 + 10, ctx.r11.u16);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// lhz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x826ca654
	if (!ctx.cr6.eq) goto loc_826CA654;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// addi r6,r11,10
	ctx.r6.s64 = ctx.r11.s64 + 10;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826c8b80
	ctx.lr = 0x826CA5EC;
	sub_826C8B80(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826ca7ac
	if (!ctx.cr6.eq) goto loc_826CA7AC;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// lhz r9,10(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ca630
	if (ctx.cr6.eq) goto loc_826CA630;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_826CA61C:
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x826ca61c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826CA61C;
loc_826CA630:
	// ld r29,88(r1)
	r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
loc_826CA634:
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// cmplw cr6,r21,r20
	ctx.cr6.compare<uint32_t>(r21.u32, r20.u32, ctx.xer);
	// blt cr6,0x826ca488
	if (ctx.cr6.lt) goto loc_826CA488;
	// std r22,0(r24)
	REX_STORE_U64(r24.u32 + 0, r22.u64);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce0
	return;
loc_826CA654:
	// lhz r9,10(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// add r8,r9,r25
	ctx.r8.u64 = ctx.r9.u64 + r25.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// cmpld cr6,r8,r22
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, r22.u64, ctx.xer);
	// bgt cr6,0x826ca3f8
	if (ctx.cr6.gt) goto loc_826CA3F8;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// clrlwi r3,r9,16
	ctx.r3.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x823f02b8
	ctx.lr = 0x826CA674;
	sub_823F02B8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + r28.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826ca3dc
	if (ctx.cr6.eq) goto loc_826CA3DC;
	// mr r31,r18
	r31.u64 = r18.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x826ca6fc
	if (ctx.cr6.eq) goto loc_826CA6FC;
loc_826CA6A0:
	// subf r27,r31,r26
	r27.u64 = r26.u64 - r31.u64;
	// cmplwi cr6,r27,128
	ctx.cr6.compare<uint32_t>(r27.u32, 128, ctx.xer);
	// ble cr6,0x826ca6b0
	if (!ctx.cr6.gt) goto loc_826CA6B0;
	// li r27,128
	r27.s64 = 128;
loc_826CA6B0:
	// clrldi r11,r31,32
	ctx.r11.u64 = r31.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826b9678
	ctx.lr = 0x826CA6C8;
	sub_826B9678(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, ctx.xer);
	// bne cr6,0x826ca7a8
	if (!ctx.cr6.eq) goto loc_826CA7A8;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826CA6F0;
	sub_826A1E70(ctx, base);
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// blt cr6,0x826ca6a0
	if (ctx.cr6.lt) goto loc_826CA6A0;
loc_826CA6FC:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// bne cr6,0x826ca7a8
	if (!ctx.cr6.eq) goto loc_826CA7A8;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrldi r10,r31,32
	ctx.r10.u64 = r31.u64 & 0xFFFFFFFF;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r29,r10,r25
	r29.u64 = ctx.r10.u64 + r25.u64;
	// lhz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x826ca634
	if (ctx.cr6.gt) goto loc_826CA634;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x826ca738
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826CA738;
	// bdzf 4*cr6+eq,0x826ca760
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826CA760;
	// bne cr6,0x826ca790
	if (!ctx.cr6.eq) goto loc_826CA790;
loc_826CA738:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stb r8,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// stb r7,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// b 0x826ca634
	goto loc_826CA634;
loc_826CA760:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
loc_826CA770:
	// lbz r8,-1(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + -1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lbz r7,1(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// stbu r7,-1(r9)
	ea = -1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r9.u32 = ea;
	// blt cr6,0x826ca770
	if (ctx.cr6.lt) goto loc_826CA770;
	// b 0x826ca634
	goto loc_826CA634;
loc_826CA790:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// b 0x826ca634
	goto loc_826CA634;
loc_826CA7A8:
	// li r23,3
	r23.s64 = 3;
loc_826CA7AC:
	// lwz r30,208(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 208);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826ca820
	if (ctx.cr6.eq) goto loc_826CA820;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ca810
	if (ctx.cr6.eq) goto loc_826CA810;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// mr r29,r18
	r29.u64 = r18.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ca800
	if (ctx.cr6.eq) goto loc_826CA800;
	// mr r31,r18
	r31.u64 = r18.u64;
loc_826CA7D8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823f0350
	ctx.lr = 0x826CA7EC;
	sub_823F0350(ctx, base);
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826ca7d8
	if (ctx.cr6.lt) goto loc_826CA7D8;
loc_826CA800:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x823f0350
	ctx.lr = 0x826CA80C;
	sub_823F0350(ctx, base);
	// stw r18,4(r30)
	REX_STORE_U32(r30.u32 + 4, r18.u32);
loc_826CA810:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r3,208(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 208);
	// bl 0x823f0350
	ctx.lr = 0x826CA81C;
	sub_823F0350(ctx, base);
	// stw r18,208(r24)
	REX_STORE_U32(r24.u32 + 208, r18.u32);
loc_826CA820:
	// std r22,0(r24)
	REX_STORE_U64(r24.u32 + 0, r22.u64);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_826EF828) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// blt cr6,0x826ef874
	if (ctx.cr6.lt) goto loc_826EF874;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r10,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_826EF85C:
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f0.f64)));
	// fmadds f13,f10,f10,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f13.f64)));
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bdnz 0x826ef85c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826EF85C;
loc_826EF874:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826ef884
	if (!ctx.cr6.gt) goto loc_826EF884;
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
loc_826EF884:
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fadds f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826F3420) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826F3428;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsh r30,r5
	r30.s64 = ctx.r5.s16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r30.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// li r4,64
	ctx.r4.s64 = 64;
	// rlwinm r3,r9,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r28,0
	r28.s64 = 0;
	// bl 0x82634e88
	ctx.lr = 0x826F3458;
	sub_82634E88(ctx, base);
	// stw r3,28(r29)
	REX_STORE_U32(r29.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826f3474
	if (!ctx.cr6.eq) goto loc_826F3474;
loc_826F3464:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_826F3474:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x826a2e60
	ctx.lr = 0x826F348C;
	sub_826A2E60(ctx, base);
	// lhz r8,34(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 34);
	// li r4,64
	ctx.r4.s64 = 64;
	// mullw r7,r8,r8
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// mullw r6,r7,r30
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(r30.s32);
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82634e88
	ctx.lr = 0x826F34A4;
	sub_82634E88(ctx, base);
	// stw r3,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826f3464
	if (ctx.cr6.eq) goto loc_826F3464;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x826a2e60
	ctx.lr = 0x826F34C8;
	sub_826A2E60(ctx, base);
	// lhz r8,34(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 34);
	// li r4,64
	ctx.r4.s64 = 64;
	// mullw r7,r8,r8
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82634e88
	ctx.lr = 0x826F34DC;
	sub_82634E88(ctx, base);
	// stw r3,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826f3464
	if (ctx.cr6.eq) goto loc_826F3464;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x826a2e60
	ctx.lr = 0x826F34FC;
	sub_826A2E60(ctx, base);
	// lhz r9,34(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 34);
	// li r4,64
	ctx.r4.s64 = 64;
	// mullw r8,r9,r9
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// rlwinm r3,r8,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82634e88
	ctx.lr = 0x826F3510;
	sub_82634E88(ctx, base);
	// stw r3,40(r29)
	REX_STORE_U32(r29.u32 + 40, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826f3464
	if (ctx.cr6.eq) goto loc_826F3464;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x826a2e60
	ctx.lr = 0x826F3530;
	sub_826A2E60(ctx, base);
	// lhz r9,34(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 34);
	// li r4,64
	ctx.r4.s64 = 64;
	// mullw r8,r9,r30
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// rlwinm r3,r8,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82634e88
	ctx.lr = 0x826F3544;
	sub_82634E88(ctx, base);
	// stw r3,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826f3464
	if (ctx.cr6.eq) goto loc_826F3464;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x826a2e60
	ctx.lr = 0x826F3564;
	sub_826A2E60(ctx, base);
	// lhz r9,34(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 34);
	// li r4,64
	ctx.r4.s64 = 64;
	// mullw r8,r9,r30
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82634e88
	ctx.lr = 0x826F3578;
	sub_82634E88(ctx, base);
	// stw r3,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826f3464
	if (ctx.cr6.eq) goto loc_826F3464;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x826F3598;
	sub_826A2E60(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82700598) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827005a8
	if (!ctx.cr6.eq) goto loc_827005A8;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_827005A8:
	// b 0x826fb630
	sub_826FB630(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82701658) {
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
	ctx.lr = 0x82701660;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3948(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3948);
	// li r24,0
	r24.s64 = 0;
	// lwz r10,15588(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15588);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r11,20752(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20752);
	// rlwinm r8,r10,28,0,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF0000000;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r7,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// srawi. r11,r8,28
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 28;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,20752(r3)
	REX_STORE_U32(ctx.r3.u32 + 20752, ctx.r9.u32);
	// mr r25,r24
	r25.u64 = r24.u64;
	// addi r27,r10,4
	r27.s64 = ctx.r10.s64 + 4;
	// blt 0x827016a8
	if (ctx.cr0.lt) goto loc_827016A8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x827016b0
	if (!ctx.cr6.gt) goto loc_827016B0;
loc_827016A8:
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x82701764
	if (!ctx.cr6.eq) goto loc_82701764;
loc_827016B0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x827016c0
	if (!ctx.cr6.lt) goto loc_827016C0;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// b 0x827016cc
	goto loc_827016CC;
loc_827016C0:
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// ble cr6,0x827016cc
	if (!ctx.cr6.gt) goto loc_827016CC;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_827016CC:
	// lwz r10,15580(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15580);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x827016fc
	if (ctx.cr6.eq) goto loc_827016FC;
	// bge cr6,0x827016f8
	if (!ctx.cr6.lt) goto loc_827016F8;
	// lwz r10,20760(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20760);
	// mulli r9,r10,218
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(218));
	// mulli r8,r10,243
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(243));
	// srawi r7,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 8;
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// stw r7,20764(r31)
	REX_STORE_U32(r31.u32 + 20764, ctx.r7.u32);
	// stw r6,20760(r31)
	REX_STORE_U32(r31.u32 + 20760, ctx.r6.u32);
loc_827016F8:
	// stw r11,15580(r31)
	REX_STORE_U32(r31.u32 + 15580, ctx.r11.u32);
loc_827016FC:
	// lwz r11,20696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82701724
	if (ctx.cr6.eq) goto loc_82701724;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ecc50
	ctx.lr = 0x82701710;
	sub_823ECC50(ctx, base);
	// ld r10,20672(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 20672);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stw r24,20696(r31)
	REX_STORE_U32(r31.u32 + 20696, r24.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,20672(r31)
	REX_STORE_U64(r31.u32 + 20672, ctx.r11.u64);
loc_82701724:
	// lwz r11,20696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20696);
	// std r24,20680(r31)
	REX_STORE_U64(r31.u32 + 20680, r24.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r24,20672(r31)
	REX_STORE_U64(r31.u32 + 20672, r24.u64);
	// stw r24,3444(r31)
	REX_STORE_U32(r31.u32 + 3444, r24.u32);
	// bne cr6,0x82701be4
	if (!ctx.cr6.eq) goto loc_82701BE4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ecc50
	ctx.lr = 0x82701744;
	sub_823ECC50(ctx, base);
	// ld r10,20672(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 20672);
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r11,20696(r31)
	REX_STORE_U32(r31.u32 + 20696, ctx.r11.u32);
	// std r8,20672(r31)
	REX_STORE_U64(r31.u32 + 20672, ctx.r8.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_82701764:
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// bge cr6,0x827017a4
	if (!ctx.cr6.lt) goto loc_827017A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fc950
	ctx.lr = 0x82701774;
	sub_826FC950(ctx, base);
	// lwz r11,20752(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20752);
	// std r24,20672(r31)
	REX_STORE_U64(r31.u32 + 20672, r24.u64);
	// std r24,20680(r31)
	REX_STORE_U64(r31.u32 + 20680, r24.u64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r24,3444(r31)
	REX_STORE_U32(r31.u32 + 3444, r24.u32);
	// bgt cr6,0x82701bdc
	if (ctx.cr6.gt) goto loc_82701BDC;
	// bl 0x823ef900
	ctx.lr = 0x82701790;
	sub_823EF900(ctx, base);
	// stw r3,20860(r31)
	REX_STORE_U32(r31.u32 + 20860, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fc8f0
	ctx.lr = 0x8270179C;
	sub_826FC8F0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_827017A4:
	// bl 0x823ef900
	ctx.lr = 0x827017A8;
	sub_823EF900(ctx, base);
	// lwz r11,20864(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20864);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r11,r11,8000
	ctx.r11.s64 = ctx.r11.s64 + 8000;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82701820
	if (!ctx.cr6.gt) goto loc_82701820;
	// stw r3,20864(r31)
	REX_STORE_U32(r31.u32 + 20864, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,114
	ctx.r4.s64 = 114;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82725628
	ctx.lr = 0x827017D0;
	sub_82725628(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,114
	ctx.r4.s64 = 114;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82725628
	ctx.lr = 0x827017E4;
	sub_82725628(ctx, base);
	// stw r3,20660(r31)
	REX_STORE_U32(r31.u32 + 20660, ctx.r3.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82701820
	if (ctx.cr6.lt) goto loc_82701820;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// bgt cr6,0x82701820
	if (ctx.cr6.gt) goto loc_82701820;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,15580(r31)
	REX_STORE_U32(r31.u32 + 15580, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,15576(r31)
	REX_STORE_U32(r31.u32 + 15576, ctx.r11.u32);
	// bl 0x827253e0
	ctx.lr = 0x8270180C;
	sub_827253E0(ctx, base);
	// lwz r11,20660(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20660);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,20652(r31)
	REX_STORE_U32(r31.u32 + 20652, ctx.r8.u32);
loc_82701820:
	// lwz r11,20652(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20652);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82701be4
	if (ctx.cr6.eq) goto loc_82701BE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fc950
	ctx.lr = 0x82701834;
	sub_826FC950(ctx, base);
	// lwz r11,20656(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20656);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// bgt cr6,0x82701848
	if (ctx.cr6.gt) goto loc_82701848;
	// lwz r28,15580(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 15580);
loc_82701848:
	// lwz r11,20740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20740);
	// lwz r10,20736(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20736);
	// addi r9,r11,5176
	ctx.r9.s64 = ctx.r11.s64 + 5176;
	// ld r8,20672(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 20672);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// lwzx r7,r11,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// add r6,r10,r5
	ctx.r6.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r6,20736(r31)
	REX_STORE_U32(r31.u32 + 20736, ctx.r6.u32);
	// stwx r5,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r5.u32);
	// lwz r9,20736(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20736);
	// ld r3,20680(r31)
	ctx.r3.u64 = REX_LOAD_U64(r31.u32 + 20680);
	// lwz r11,20740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20740);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r4,29
	ctx.r10.u64 = ctx.r4.u32 & 0x7;
	// lwz r11,3444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3444);
	// extsw r30,r3
	r30.s64 = ctx.r3.s32;
	// srawi r4,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 3;
	// stw r10,20740(r31)
	REX_STORE_U32(r31.u32 + 20740, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827018b4
	if (ctx.cr6.gt) goto loc_827018B4;
	// lwz r10,15588(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15588);
	// lis r9,12288
	ctx.r9.s64 = 805306368;
	// rlwinm r8,r10,16,0,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF0000000;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8270192c
	if (ctx.cr6.lt) goto loc_8270192C;
loc_827018B4:
	// lwz r10,20756(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20756);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,20756(r31)
	REX_STORE_U32(r31.u32 + 20756, ctx.r11.u32);
	// ble cr6,0x827018f4
	if (!ctx.cr6.gt) goto loc_827018F4;
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble 0x827018d4
	if (!ctx.cr0.gt) goto loc_827018D4;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_827018D4:
	// lwz r11,20760(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20760);
	// mulli r10,r11,230
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(230));
	// srawi r11,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 8;
	// mulli r9,r11,230
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(230));
	// stw r11,20760(r31)
	REX_STORE_U32(r31.u32 + 20760, ctx.r11.u32);
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stw r8,20764(r31)
	REX_STORE_U32(r31.u32 + 20764, ctx.r8.u32);
	// b 0x827018fc
	goto loc_827018FC;
loc_827018F4:
	// stw r26,20860(r31)
	REX_STORE_U32(r31.u32 + 20860, r26.u32);
	// stw r24,20852(r31)
	REX_STORE_U32(r31.u32 + 20852, r24.u32);
loc_827018FC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82701928
	if (!ctx.cr6.gt) goto loc_82701928;
	// addi r11,r28,5193
	ctx.r11.s64 = r28.s64 + 5193;
	// addi r10,r28,5192
	ctx.r10.s64 = r28.s64 + 5192;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwzx r6,r8,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82701928
	if (!ctx.cr6.eq) goto loc_82701928;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_82701928:
	// stw r24,3444(r31)
	REX_STORE_U32(r31.u32 + 3444, r24.u32);
loc_8270192C:
	// lwz r7,15588(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 15588);
	// rlwinm r11,r7,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// srawi r6,r11,28
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 28;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x8270196c
	if (!ctx.cr6.eq) goto loc_8270196C;
	// lwz r11,20748(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20748);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// srawi r9,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 16;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// neg r11,r8
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8270196c
	if (!ctx.cr6.gt) goto loc_8270196C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82701968
	if (!ctx.cr6.gt) goto loc_82701968;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_82701968:
	// stw r26,20860(r31)
	REX_STORE_U32(r31.u32 + 20860, r26.u32);
loc_8270196C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x827019e8
	if (!ctx.cr6.gt) goto loc_827019E8;
	// addi r11,r28,5192
	ctx.r11.s64 = r28.s64 + 5192;
	// lwz r8,20760(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20760);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + r31.u64;
loc_82701984:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x827019e8
	if (!ctx.cr6.gt) goto loc_827019E8;
	// lwz r29,20744(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 20744);
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(r29.s32, 7, ctx.xer);
	// ble cr6,0x827019b8
	if (!ctx.cr6.gt) goto loc_827019B8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x827019b8
	if (!ctx.cr6.gt) goto loc_827019B8;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// b 0x827019e0
	goto loc_827019E0;
loc_827019B8:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x827019e8
	if (!ctx.cr6.gt) goto loc_827019E8;
	// lwz r11,20656(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20656);
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r25,r24
	r25.u64 = r24.u64;
	// bgt cr6,0x827019e0
	if (ctx.cr6.gt) goto loc_827019E0;
	// lwz r25,15580(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 15580);
loc_827019E0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bgt cr6,0x82701984
	if (ctx.cr6.gt) goto loc_82701984;
loc_827019E8:
	// lwz r8,15580(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15580);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r11,25068
	r29.s64 = ctx.r11.s64 + 25068;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82701ac0
	if (!ctx.cr6.eq) goto loc_82701AC0;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// bge cr6,0x82701ac0
	if (!ctx.cr6.lt) goto loc_82701AC0;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x82701a2c
	if (!ctx.cr6.gt) goto loc_82701A2C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82701ac0
	if (!ctx.cr6.eq) goto loc_82701AC0;
	// lwz r11,20748(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20748);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// srawi r9,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 16;
	// neg r7,r10
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82701ac0
	if (!ctx.cr6.gt) goto loc_82701AC0;
loc_82701A2C:
	// lwz r11,20860(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20860);
	// lwz r6,20852(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 20852);
	// subf r7,r11,r26
	ctx.r7.u64 = r26.u64 - ctx.r11.u64;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82701a48
	if (!ctx.cr6.lt) goto loc_82701A48;
	// lwz r10,20760(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20760);
	// b 0x82701a4c
	goto loc_82701A4C;
loc_82701A48:
	// lwz r10,20764(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20764);
loc_82701A4C:
	// addi r9,r28,1
	ctx.r9.s64 = r28.s64 + 1;
	// addi r11,r9,5192
	ctx.r11.s64 = ctx.r9.s64 + 5192;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82701ab0
	if (!ctx.cr6.lt) goto loc_82701AB0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82701ab0
	if (!ctx.cr6.lt) goto loc_82701AB0;
	// addi r11,r29,-20
	ctx.r11.s64 = r29.s64 + -20;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x82701a90
	if (ctx.cr6.gt) goto loc_82701A90;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82701ac0
	if (!ctx.cr6.lt) goto loc_82701AC0;
loc_82701A90:
	// addi r11,r29,-20
	ctx.r11.s64 = r29.s64 + -20;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82701ab0
	if (!ctx.cr6.gt) goto loc_82701AB0;
	// addi r11,r26,-500
	ctx.r11.s64 = r26.s64 + -500;
	// stw r11,20860(r31)
	REX_STORE_U32(r31.u32 + 20860, ctx.r11.u32);
loc_82701AB0:
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82701ac0
	if (!ctx.cr6.lt) goto loc_82701AC0;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// stw r11,20852(r31)
	REX_STORE_U32(r31.u32 + 20852, ctx.r11.u32);
loc_82701AC0:
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// ble cr6,0x82701b08
	if (!ctx.cr6.gt) goto loc_82701B08;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82701b08
	if (!ctx.cr6.gt) goto loc_82701B08;
	// cmpw cr6,r8,r27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r27.s32, ctx.xer);
	// bgt cr6,0x82701b08
	if (ctx.cr6.gt) goto loc_82701B08;
	// addi r11,r8,2599
	ctx.r11.s64 = ctx.r8.s64 + 2599;
	// extsw r10,r30
	ctx.r10.s64 = r30.s32;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + r31.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stdx r10,r11,r31
	REX_STORE_U64(ctx.r11.u32 + r31.u32, ctx.r10.u64);
	// lwz r11,15580(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15580);
	// addi r9,r11,5208
	ctx.r9.s64 = ctx.r11.s64 + 5208;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stwx r8,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r8.u32);
loc_82701B08:
	// lwz r11,15580(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15580);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82701b30
	if (!ctx.cr6.eq) goto loc_82701B30;
	// lwz r10,20656(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20656);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82701b30
	if (ctx.cr6.gt) goto loc_82701B30;
	// lwz r11,20744(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20744);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20744(r31)
	REX_STORE_U32(r31.u32 + 20744, ctx.r11.u32);
	// b 0x82701bd4
	goto loc_82701BD4;
loc_82701B30:
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// lwzx r9,r30,r29
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + r29.u32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stw r8,15540(r31)
	REX_STORE_U32(r31.u32 + 15540, ctx.r8.u32);
	// lwzx r7,r30,r29
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + r29.u32);
	// rlwinm r6,r7,31,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x1;
	// stw r6,15544(r31)
	REX_STORE_U32(r31.u32 + 15544, ctx.r6.u32);
	// lwzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r29.u32);
	// lwzx r5,r10,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// xor r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// rlwinm r3,r4,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82701b78
	if (ctx.cr6.eq) goto loc_82701B78;
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// lwz r4,3948(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3948);
	// bl 0x82759ca8
	ctx.lr = 0x82701B78;
	sub_82759CA8(ctx, base);
loc_82701B78:
	// lwz r11,15580(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15580);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82701bc4
	if (!ctx.cr6.lt) goto loc_82701BC4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r26,20860(r31)
	REX_STORE_U32(r31.u32 + 20860, r26.u32);
	// ble cr6,0x82701bb0
	if (!ctx.cr6.gt) goto loc_82701BB0;
	// addi r10,r29,-20
	ctx.r10.s64 = r29.s64 + -20;
	// addi r9,r29,-20
	ctx.r9.s64 = r29.s64 + -20;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r30,r9
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// lwzx r6,r8,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// subf r10,r6,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r6.u64;
	// add r5,r10,r26
	ctx.r5.u64 = ctx.r10.u64 + r26.u64;
	// stw r5,20860(r31)
	REX_STORE_U32(r31.u32 + 20860, ctx.r5.u32);
loc_82701BB0:
	// lwz r10,20852(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20852);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82701bc4
	if (!ctx.cr6.lt) goto loc_82701BC4;
	// stw r11,20852(r31)
	REX_STORE_U32(r31.u32 + 20852, ctx.r11.u32);
loc_82701BC4:
	// stw r28,15580(r31)
	REX_STORE_U32(r31.u32 + 15580, r28.u32);
	// stw r28,3668(r31)
	REX_STORE_U32(r31.u32 + 3668, r28.u32);
	// stw r25,20656(r31)
	REX_STORE_U32(r31.u32 + 20656, r25.u32);
	// stw r24,20744(r31)
	REX_STORE_U32(r31.u32 + 20744, r24.u32);
loc_82701BD4:
	// std r24,20672(r31)
	REX_STORE_U64(r31.u32 + 20672, r24.u64);
	// std r24,20680(r31)
	REX_STORE_U64(r31.u32 + 20680, r24.u64);
loc_82701BDC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fc8f0
	ctx.lr = 0x82701BE4;
	sub_826FC8F0(ctx, base);
loc_82701BE4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_827391C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x827391D0;
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,3756(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3756);
	// lwz r5,3380(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3380);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,188(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// lwz r7,200(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r31,140(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// divwu r28,r9,r5
	r28.u64 = uint32_t(ctx.r5.u32 ? ctx.r9.u32 / ctx.r5.u32 : 0);
	// divwu r27,r7,r5
	r27.u64 = uint32_t(ctx.r5.u32 ? ctx.r7.u32 / ctx.r5.u32 : 0);
	// lwz r10,224(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// lwz r29,136(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// divwu r30,r31,r5
	r30.u64 = uint32_t(ctx.r5.u32 ? r31.u32 / ctx.r5.u32 : 0);
	// lwz r8,3744(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3744);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r7,3748(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3748);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r9,3752(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3752);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r5,r29,r5
	ctx.r5.u64 = uint32_t(ctx.r5.u32 ? r29.u32 / ctx.r5.u32 : 0);
	// stw r6,3844(r3)
	REX_STORE_U32(ctx.r3.u32 + 3844, ctx.r6.u32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r28,3848(r3)
	REX_STORE_U32(ctx.r3.u32 + 3848, r28.u32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r6,3852(r3)
	REX_STORE_U32(ctx.r3.u32 + 3852, ctx.r6.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r27,3856(r3)
	REX_STORE_U32(ctx.r3.u32 + 3856, r27.u32);
	// stw r30,3836(r3)
	REX_STORE_U32(ctx.r3.u32 + 3836, r30.u32);
	// stw r5,3840(r3)
	REX_STORE_U32(ctx.r3.u32 + 3840, ctx.r5.u32);
	// stw r11,3860(r3)
	REX_STORE_U32(ctx.r3.u32 + 3860, ctx.r11.u32);
	// stw r10,3864(r3)
	REX_STORE_U32(ctx.r3.u32 + 3864, ctx.r10.u32);
	// stw r31,3872(r3)
	REX_STORE_U32(ctx.r3.u32 + 3872, r31.u32);
	// stw r4,3780(r3)
	REX_STORE_U32(ctx.r3.u32 + 3780, ctx.r4.u32);
	// stw r8,3824(r3)
	REX_STORE_U32(ctx.r3.u32 + 3824, ctx.r8.u32);
	// stw r7,3828(r3)
	REX_STORE_U32(ctx.r3.u32 + 3828, ctx.r7.u32);
	// stw r9,3832(r3)
	REX_STORE_U32(ctx.r3.u32 + 3832, ctx.r9.u32);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_827400A8) {
	REX_FUNC_PROLOGUE();
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
	// vspltish v15,15
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_set1_epi16(short(0xF)));
	// li r0,0
	ctx.r0.s64 = 0;
	// addi r8,r3,128
	ctx.r8.s64 = ctx.r3.s64 + 128;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r12,r6,r6
	ctx.r12.u64 = ctx.r6.u64 + ctx.r6.u64;
	// vslb v8,v15,v15
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// add r11,r9,r9
	ctx.r11.u64 = ctx.r9.u64 + ctx.r9.u64;
	// add r10,r12,r9
	ctx.r10.u64 = ctx.r12.u64 + ctx.r9.u64;
	// lvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvx128 v4,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v16,v0,v8
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v3,r8,r12
	ea = (ctx.r8.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r3,r12
	ea = (ctx.r3.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v17,v1,v8
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v7,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r12,r10,r11
	ctx.r12.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lvx128 v6,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// vaddshs v18,v2,v8
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v0,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddshs v19,v3,v8
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v11,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v1,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// lvx128 v5,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,4
	ctx.r6.s64 = 4;
	// vaddshs v20,v4,v8
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v2,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// lvx128 v9,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v21,v5,v8
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v13,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v16,v8,v8
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// lvx128 v15,r8,r12
	ea = (ctx.r8.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64;
	// vaddshs v22,v6,v8
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v3,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddshs v23,v7,v8
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v8,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lvx128 v14,r3,r12
	ea = (ctx.r3.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v4,v20,v20
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// stvewx v0,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stvewx v0,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v5,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// stvewx v1,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v1.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stvewx v1,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v1.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v6,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// stvewx v2,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v2.u32[3 - ((ea & 0xF) >> 2)]);
	// add r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stvewx v2,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v2.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v24,v8,v16
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvewx v3,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v3.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v25,v9,v16
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvewx v3,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v3.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v26,v10,v16
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvewx v4,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v4.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v27,v11,v16
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddshs v28,v12,v16
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvewx v4,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v4.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v29,v13,v16
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvewx v5,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v5.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v30,v14,v16
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvewx v5,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v5.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v31,v15,v16
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvewx v6,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v6.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v7,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// vpkshus v8,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// stvewx v6,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v6.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v9,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vpkshus v10,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vpkshus v11,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vpkshus v12,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vpkshus v13,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vpkshus v14,v30,v30
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vpkshus v15,v31,v31
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// add r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64;
	// stvewx v7,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v7.u32[3 - ((ea & 0xF) >> 2)]);
	// add r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stvewx v7,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v7.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stvewx v8,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v8.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stvewx v8,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v8.u32[3 - ((ea & 0xF) >> 2)]);
	// add r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64;
	// stvewx v9,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v9,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// add r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stvewx v10,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v10,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v11,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v11,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v12,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v12,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v13,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v13,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v14,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, v14.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v14,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, v14.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v15,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, v15.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v15,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, v15.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8274ED20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8274ED28;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r29,1
	r29.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8274ed5c
	if (ctx.cr6.eq) goto loc_8274ED5C;
	// lwz r8,136(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r31,1928(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 1928);
	// rlwinm r6,r8,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r6,r6,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r6.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
loc_8274ED5C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8274edd8
	if (ctx.cr6.eq) goto loc_8274EDD8;
	// lwz r31,1924(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 1924);
	// addic. r30,r5,-32
	ctx.xer.ca = ctx.r5.u32 > 31;
	r30.s64 = ctx.r5.s64 + -32;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8274edf8
	if (ctx.cr0.eq) goto loc_8274EDF8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8274edd8
	if (ctx.cr6.eq) goto loc_8274EDD8;
	// lwz r8,1920(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1920);
	// lwz r7,1916(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 1916);
	// addi r5,r8,-16
	ctx.r5.s64 = ctx.r8.s64 + -16;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r7,r30
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + r30.u32);
	// lhzx r5,r5,r6
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// lhzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r6.u32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// subf r7,r7,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r5,r8,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r8.u64;
	// srawi r8,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 31;
	// srawi r28,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	r28.s64 = ctx.r5.s32 >> 31;
	// xor r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// xor r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 ^ r28.u64;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// subf r7,r28,r5
	ctx.r7.u64 = ctx.r5.u64 - r28.u64;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8274edd8
	if (!ctx.cr6.lt) goto loc_8274EDD8;
	// lwz r31,1928(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 1928);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
loc_8274EDD8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8274edf8
	if (ctx.cr6.eq) goto loc_8274EDF8;
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r7,r8,0,27,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x18;
	// subfic r6,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.u64 = static_cast<uint64_t>(0) - ctx.r7.u64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r4,r29
	r29.u64 = ctx.r4.u64 & r29.u64;
loc_8274EDF8:
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r30,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r30.u32);
	// bne cr6,0x8274ee0c
	if (!ctx.cr6.eq) goto loc_8274EE0C;
	// li r31,-1
	r31.s64 = -1;
loc_8274EE0C:
	// stw r31,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r31.u32);
	// lwz r11,1928(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1928);
	// subf r9,r31,r11
	ctx.r9.u64 = ctx.r11.u64 - r31.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8275A0A0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8275a0d0
	if (ctx.cr6.eq) goto loc_8275A0D0;
	// bl 0x8271b1a0
	ctx.lr = 0x8275A0CC;
	sub_8271B1A0(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
loc_8275A0D0:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8275a0e4
	if (ctx.cr6.eq) goto loc_8275A0E4;
	// bl 0x8271b1a0
	ctx.lr = 0x8275A0E0;
	sub_8271B1A0(ctx, base);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_8275A0E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8271b1a0
	ctx.lr = 0x8275A0EC;
	sub_8271B1A0(ctx, base);
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

DEFINE_REX_FUNC(sub_8275C1E8) {
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
	ctx.lr = 0x8275C1F0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// lwz r6,52(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// subf r4,r8,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r8.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// add r19,r7,r10
	r19.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r27,r9,2
	r27.s64 = ctx.r9.s64 + 2;
	// add r18,r11,r6
	r18.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r30,r8,2
	r30.s64 = ctx.r8.s64 + 2;
	// addi r14,r4,-2
	r14.s64 = ctx.r4.s64 + -2;
	// li r15,8
	r15.s64 = 8;
loc_8275C21C:
	// li r8,2
	ctx.r8.s64 = 2;
	// add r28,r14,r30
	r28.u64 = r14.u64 + r30.u64;
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// subf r29,r28,r30
	r29.u64 = r30.u64 - r28.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r25,r30,-1
	r25.s64 = r30.s64 + -1;
	// addi r24,r27,-1
	r24.s64 = r27.s64 + -1;
	// addi r23,r30,1
	r23.s64 = r30.s64 + 1;
	// addi r22,r27,1
	r22.s64 = r27.s64 + 1;
	// addi r31,r7,-1
	r31.s64 = ctx.r7.s64 + -1;
	// addi r8,r19,1
	ctx.r8.s64 = r19.s64 + 1;
	// subf r21,r19,r7
	r21.u64 = ctx.r7.u64 - r19.u64;
	// addi r20,r29,-2
	r20.s64 = r29.s64 + -2;
loc_8275C25C:
	// lbz r7,1(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 1);
	// add r29,r28,r6
	r29.u64 = r28.u64 + ctx.r6.u64;
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r7,-1(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + -1);
	// stb r7,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// lbzx r26,r21,r8
	r26.u64 = REX_LOAD_U8(r21.u32 + ctx.r8.u32);
	// lwz r7,48(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// stbux r26,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, r26.u8);
	ctx.r11.u32 = ea;
	// lbz r26,0(r8)
	r26.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// stbux r26,r9,r7
	ea = ctx.r9.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, r26.u8);
	ctx.r9.u32 = ea;
	// lbzx r29,r20,r29
	r29.u64 = REX_LOAD_U8(r20.u32 + r29.u32);
	// lwz r7,48(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// stb r29,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, r29.u8);
	// lbzx r29,r28,r6
	r29.u64 = REX_LOAD_U8(r28.u32 + ctx.r6.u32);
	// stb r29,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, r29.u8);
	// lbz r26,3(r31)
	r26.u64 = REX_LOAD_U8(r31.u32 + 3);
	// lwz r29,56(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// stbux r26,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, r26.u8);
	ctx.r11.u32 = ea;
	// lbz r26,1(r8)
	r26.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// stbux r26,r9,r7
	ea = ctx.r9.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, r26.u8);
	ctx.r9.u32 = ea;
	// lbz r26,4(r31)
	r26.u64 = REX_LOAD_U8(r31.u32 + 4);
	// lwz r7,48(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// stbux r26,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, r26.u8);
	ctx.r11.u32 = ea;
	// lbz r26,2(r8)
	r26.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// stbux r26,r9,r7
	ea = ctx.r9.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, r26.u8);
	ctx.r9.u32 = ea;
	// lbzx r26,r25,r6
	r26.u64 = REX_LOAD_U8(r25.u32 + ctx.r6.u32);
	// lwz r7,48(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// stbux r26,r5,r29
	ea = ctx.r5.u32 + r29.u32;
	REX_STORE_U8(ea, r26.u8);
	ctx.r5.u32 = ea;
	// lbzx r26,r24,r6
	r26.u64 = REX_LOAD_U8(r24.u32 + ctx.r6.u32);
	// stbux r26,r4,r29
	ea = ctx.r4.u32 + r29.u32;
	REX_STORE_U8(ea, r26.u8);
	ctx.r4.u32 = ea;
	// lbz r26,5(r31)
	r26.u64 = REX_LOAD_U8(r31.u32 + 5);
	// lwz r29,56(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// stbux r26,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, r26.u8);
	ctx.r11.u32 = ea;
	// lbz r26,3(r8)
	r26.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// stbux r26,r9,r7
	ea = ctx.r9.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, r26.u8);
	ctx.r9.u32 = ea;
	// lbz r26,6(r31)
	r26.u64 = REX_LOAD_U8(r31.u32 + 6);
	// lwz r7,48(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// stbux r26,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, r26.u8);
	ctx.r11.u32 = ea;
	// lbz r26,4(r8)
	r26.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// stbux r26,r9,r7
	ea = ctx.r9.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, r26.u8);
	ctx.r9.u32 = ea;
	// lbzx r26,r30,r6
	r26.u64 = REX_LOAD_U8(r30.u32 + ctx.r6.u32);
	// lwz r7,48(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// stbux r26,r5,r29
	ea = ctx.r5.u32 + r29.u32;
	REX_STORE_U8(ea, r26.u8);
	ctx.r5.u32 = ea;
	// lbzx r26,r27,r6
	r26.u64 = REX_LOAD_U8(r27.u32 + ctx.r6.u32);
	// stbux r26,r4,r29
	ea = ctx.r4.u32 + r29.u32;
	REX_STORE_U8(ea, r26.u8);
	ctx.r4.u32 = ea;
	// lbz r26,7(r31)
	r26.u64 = REX_LOAD_U8(r31.u32 + 7);
	// lwz r29,56(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// stbux r26,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, r26.u8);
	ctx.r11.u32 = ea;
	// lbz r26,5(r8)
	r26.u64 = REX_LOAD_U8(ctx.r8.u32 + 5);
	// stbux r26,r9,r7
	ea = ctx.r9.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, r26.u8);
	ctx.r9.u32 = ea;
	// lwz r7,48(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lbzu r26,8(r31)
	ea = 8 + r31.u32;
	r26.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// stbux r26,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, r26.u8);
	ctx.r11.u32 = ea;
	// lbz r26,6(r8)
	r26.u64 = REX_LOAD_U8(ctx.r8.u32 + 6);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// stbux r26,r9,r7
	ea = ctx.r9.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, r26.u8);
	ctx.r9.u32 = ea;
	// lbzx r26,r23,r6
	r26.u64 = REX_LOAD_U8(r23.u32 + ctx.r6.u32);
	// lwz r7,48(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stbux r26,r5,r29
	ea = ctx.r5.u32 + r29.u32;
	REX_STORE_U8(ea, r26.u8);
	ctx.r5.u32 = ea;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lbzx r7,r22,r6
	ctx.r7.u64 = REX_LOAD_U8(r22.u32 + ctx.r6.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// stbux r7,r4,r29
	ea = ctx.r4.u32 + r29.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r4.u32 = ea;
	// lwz r7,56(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// bdnz 0x8275c25c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275C25C;
	// lwz r9,52(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// add r7,r19,r10
	ctx.r7.u64 = r19.u64 + ctx.r10.u64;
	// lwz r8,60(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// addic. r15,r15,-1
	ctx.xer.ca = r15.u32 > 0;
	r15.s64 = r15.s64 + -1;
	ctx.cr0.compare<int32_t>(r15.s32, 0, ctx.xer);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r9,r18
	ctx.r11.u64 = ctx.r9.u64 + r18.u64;
	// add r19,r7,r10
	r19.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r30,r30,r6
	r30.u64 = r30.u64 + ctx.r6.u64;
	// add r27,r27,r6
	r27.u64 = r27.u64 + ctx.r6.u64;
	// add r18,r9,r11
	r18.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r17,r8,r17
	r17.u64 = ctx.r8.u64 + r17.u64;
	// add r16,r8,r16
	r16.u64 = ctx.r8.u64 + r16.u64;
	// bne 0x8275c21c
	if (!ctx.cr0.eq) goto loc_8275C21C;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82767898) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x827678A0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827679b8
	if (ctx.cr6.eq) goto loc_827679B8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827679b8
	if (!ctx.cr6.gt) goto loc_827679B8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bne cr6,0x827678dc
	if (!ctx.cr6.eq) goto loc_827678DC;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
loc_827678DC:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bne cr6,0x827678fc
	if (!ctx.cr6.eq) goto loc_827678FC;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_827678FC:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// beq cr6,0x827679b8
	if (ctx.cr6.eq) goto loc_827679B8;
loc_82767910:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82767924
	if (ctx.cr6.eq) goto loc_82767924;
	// bl 0x8271b1b0
	ctx.lr = 0x82767920;
	sub_8271B1B0(ctx, base);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
loc_82767924:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82767938
	if (ctx.cr6.eq) goto loc_82767938;
	// bl 0x8271b1b0
	ctx.lr = 0x82767934;
	sub_8271B1B0(ctx, base);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
loc_82767938:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276794c
	if (ctx.cr6.eq) goto loc_8276794C;
	// bl 0x8271b1b0
	ctx.lr = 0x82767948;
	sub_8271B1B0(ctx, base);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
loc_8276794C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8271b1a0
	ctx.lr = 0x82767954;
	sub_8271B1A0(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827679b8
	if (ctx.cr6.eq) goto loc_827679B8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827679b8
	if (!ctx.cr6.gt) goto loc_827679B8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bne cr6,0x82767984
	if (!ctx.cr6.eq) goto loc_82767984;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
loc_82767984:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bne cr6,0x827679a4
	if (!ctx.cr6.eq) goto loc_827679A4;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_827679A4:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// bne cr6,0x82767910
	if (!ctx.cr6.eq) goto loc_82767910;
loc_827679B8:
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82767740
	ctx.lr = 0x827679C0;
	sub_82767740(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827679d4
	if (ctx.cr6.eq) goto loc_827679D4;
	// bl 0x8271b1a0
	ctx.lr = 0x827679D0;
	sub_8271B1A0(ctx, base);
	// stw r30,12(r29)
	REX_STORE_U32(r29.u32 + 12, r30.u32);
loc_827679D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8276E940) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8276e954
	if (ctx.cr6.lt) goto loc_8276E954;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8276e958
	goto loc_8276E958;
loc_8276E954:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8276E958:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x8276e968
	if (!ctx.cr6.gt) goto loc_8276E968;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8276e974
	goto loc_8276E974;
loc_8276E968:
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8276e974
	if (!ctx.cr6.gt) goto loc_8276E974;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_8276E974:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8276e984
	if (!ctx.cr6.gt) goto loc_8276E984;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8276e990
	goto loc_8276E990;
loc_8276E984:
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8276e990
	if (!ctx.cr6.gt) goto loc_8276E990;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8276E990:
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8276e9a8
	if (ctx.cr6.lt) goto loc_8276E9A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8276E9A8:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x8276e9b8
	if (!ctx.cr6.gt) goto loc_8276E9B8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x8276e9c4
	goto loc_8276E9C4;
loc_8276E9B8:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8276e9c4
	if (!ctx.cr6.gt) goto loc_8276E9C4;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_8276E9C4:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8276e9d4
	if (!ctx.cr6.gt) goto loc_8276E9D4;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x8276e9e0
	goto loc_8276E9E0;
loc_8276E9D4:
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8276e9e0
	if (!ctx.cr6.gt) goto loc_8276E9E0;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_8276E9E0:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8276e9f0
	if (!ctx.cr6.gt) goto loc_8276E9F0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8276e9fc
	goto loc_8276E9FC;
loc_8276E9F0:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8276e9fc
	if (!ctx.cr6.gt) goto loc_8276E9FC;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8276E9FC:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8276ea0c
	if (!ctx.cr6.gt) goto loc_8276EA0C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8276ea18
	goto loc_8276EA18;
loc_8276EA0C:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8276ea18
	if (!ctx.cr6.gt) goto loc_8276EA18;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8276EA18:
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfc r10,r7,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r7.u64;
	// eqv r9,r7,r11
	ctx.r9.u64 = ~(ctx.r7.u64 ^ ctx.r11.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82770860) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x8277086c
	if (!ctx.cr6.lt) goto loc_8277086C;
	// neg r4,r4
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r4.u64);
loc_8277086C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x82770878
	if (!ctx.cr6.lt) goto loc_82770878;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
loc_82770878:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x82770884
	if (!ctx.cr6.lt) goto loc_82770884;
	// neg r6,r6
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r6.u64);
loc_82770884:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x82770890
	if (!ctx.cr6.lt) goto loc_82770890;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
loc_82770890:
	// stw r4,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// stw r5,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r5.u32);
	// stw r6,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r6.u32);
	// stw r7,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827710F0) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r9.u32);
	// lwz r8,20(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r7,48(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r6.u32);
	// lwz r5,-48(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// rlwinm r4,r5,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// divw r10,r4,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r4.s32 / ctx.r11.s32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r9,r4,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// andc r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r10,-52(r1)
	REX_STORE_U32(ctx.r1.u32 + -52, ctx.r10.u32);
	// lwz r6,-72(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r4,20(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,36(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// divw r11,r5,r3
	ctx.r11.u64 = uint32_t((ctx.r3.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r5.s32 / ctx.r3.s32 : 0);
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// andc r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 & ~ctx.r9.u64;
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r11,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// lwz r7,-72(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// lwz r5,20(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,36(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// mullw r3,r6,r4
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// lwz r11,-72(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// divw r10,r3,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r3.s32 / ctx.r11.s32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r9,r3,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// andc r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r10,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r10.u32);
	// lwz r6,-48(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,-92(r1)
	REX_STORE_U32(ctx.r1.u32 + -92, ctx.r5.u32);
	// lwz r4,20(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,32(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-64(r1)
	REX_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// lwz r10,-72(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// li r9,2
	ctx.r9.s64 = 2;
	// divw r8,r10,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// stw r8,-60(r1)
	REX_STORE_U32(ctx.r1.u32 + -60, ctx.r8.u32);
	// lwz r7,20(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r6,36(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// li r5,2
	ctx.r5.s64 = 2;
	// divw r4,r6,r5
	ctx.r4.u64 = uint32_t((ctx.r5.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r6.s32 / ctx.r5.s32 : 0);
	// stw r4,-44(r1)
	REX_STORE_U32(ctx.r1.u32 + -44, ctx.r4.u32);
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,2
	ctx.r10.s64 = 2;
	// divw r9,r11,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// stw r9,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r9.u32);
	// lwz r8,-32(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r7,36(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82771214
	if (!ctx.cr6.gt) goto loc_82771214;
	// lwz r6,36(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// stw r6,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r6.u32);
loc_82771214:
	// lwz r5,-80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgt cr6,0x82771224
	if (ctx.cr6.gt) goto loc_82771224;
	// b 0x827715f4
	goto loc_827715F4;
loc_82771224:
	// lwz r4,20(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,40(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8277124c
	if (ctx.cr6.eq) goto loc_8277124C;
	// lwz r11,-80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// addi r10,r11,-256
	ctx.r10.s64 = ctx.r11.s64 + -256;
	// li r9,2
	ctx.r9.s64 = 2;
	// divw r8,r10,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// stw r8,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// b 0x82771254
	goto loc_82771254;
loc_8277124C:
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r7.u32);
loc_82771254:
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// stw r6,-76(r1)
	REX_STORE_U32(ctx.r1.u32 + -76, ctx.r6.u32);
	// lwz r5,-80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lwz r11,-76(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,-76(r1)
	REX_STORE_U32(ctx.r1.u32 + -76, ctx.r10.u32);
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r8,28(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r7,-64(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lwz r5,56(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// add r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r4,-84(r1)
	REX_STORE_U32(ctx.r1.u32 + -84, ctx.r4.u32);
	// lwz r3,-76(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82771384
	if (!ctx.cr6.lt) goto loc_82771384;
	// lwz r11,-80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r10,-76(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r8,-80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// divw r7,r9,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r6,r9,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// addi r5,r6,-1
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// andc r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r7,-28(r1)
	REX_STORE_U32(ctx.r1.u32 + -28, ctx.r7.u32);
	// lwz r3,28(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// stw r3,-88(r1)
	REX_STORE_U32(ctx.r1.u32 + -88, ctx.r3.u32);
	// b 0x827712e0
	goto loc_827712E0;
loc_827712D4:
	// lwz r11,-88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -88);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,-88(r1)
	REX_STORE_U32(ctx.r1.u32 + -88, ctx.r10.u32);
loc_827712E0:
	// lwz r9,28(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r8,-28(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r6,-88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -88);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8277135c
	if (!ctx.cr6.lt) goto loc_8277135C;
	// lwz r5,20(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,64(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// stw r4,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,-40(r1)
	REX_STORE_U32(ctx.r1.u32 + -40, ctx.r3.u32);
	// b 0x8277131c
	goto loc_8277131C;
loc_82771310:
	// lwz r11,-40(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,-40(r1)
	REX_STORE_U32(ctx.r1.u32 + -40, ctx.r10.u32);
loc_8277131C:
	// lwz r9,-40(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// lwz r8,-64(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82771358
	if (!ctx.cr6.lt) goto loc_82771358;
	// lwz r7,-24(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// lbz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lwz r5,-84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// stb r6,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r6.u8);
	// lwz r4,-84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// stw r3,-84(r1)
	REX_STORE_U32(ctx.r1.u32 + -84, ctx.r3.u32);
	// lwz r11,-24(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// b 0x82771310
	goto loc_82771310;
loc_82771358:
	// b 0x827712d4
	goto loc_827712D4;
loc_8277135C:
	// lwz r9,-80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r8,-28(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r6,-76(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r5,-76(r1)
	REX_STORE_U32(ctx.r1.u32 + -76, ctx.r5.u32);
	// lwz r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r3,-28(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stw r11,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r11.u32);
loc_82771384:
	// lwz r10,28(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// stw r10,-88(r1)
	REX_STORE_U32(ctx.r1.u32 + -88, ctx.r10.u32);
	// b 0x8277139c
	goto loc_8277139C;
loc_82771390:
	// lwz r9,-88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -88);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,-88(r1)
	REX_STORE_U32(ctx.r1.u32 + -88, ctx.r8.u32);
loc_8277139C:
	// lwz r7,-88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -88);
	// lwz r6,-32(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8277147c
	if (!ctx.cr6.lt) goto loc_8277147C;
	// lwz r5,-76(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// stw r4,-68(r1)
	REX_STORE_U32(ctx.r1.u32 + -68, ctx.r4.u32);
	// lwz r3,-76(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// lwz r10,-64(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r9,-96(r1)
	REX_STORE_U32(ctx.r1.u32 + -96, ctx.r9.u32);
	// lwz r8,-68(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// subfic r7,r8,256
	ctx.xer.ca = ctx.r8.u32 <= 256;
	ctx.r7.u64 = static_cast<uint64_t>(256) - ctx.r8.u64;
	// stw r7,-56(r1)
	REX_STORE_U32(ctx.r1.u32 + -56, ctx.r7.u32);
	// lwz r6,20(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r5,64(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 64);
	// lwz r4,-96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// add r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stw r3,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-40(r1)
	REX_STORE_U32(ctx.r1.u32 + -40, ctx.r11.u32);
	// b 0x82771404
	goto loc_82771404;
loc_827713F8:
	// lwz r10,-40(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,-40(r1)
	REX_STORE_U32(ctx.r1.u32 + -40, ctx.r9.u32);
loc_82771404:
	// lwz r8,-40(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// lwz r7,-64(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82771468
	if (!ctx.cr6.lt) goto loc_82771468;
	// lwz r6,-20(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// lbz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// lwz r4,-56(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// mullw r3,r4,r5
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// lwz r10,-64(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lwz r8,-68(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 + ctx.r7.u64;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// lwz r3,-84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// stb r4,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// lwz r11,-84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,-84(r1)
	REX_STORE_U32(ctx.r1.u32 + -84, ctx.r10.u32);
	// lwz r9,-20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r8.u32);
	// b 0x827713f8
	goto loc_827713F8;
loc_82771468:
	// lwz r7,-76(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r6,-80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r5,-76(r1)
	REX_STORE_U32(ctx.r1.u32 + -76, ctx.r5.u32);
	// b 0x82771390
	goto loc_82771390;
loc_8277147C:
	// lwz r4,-32(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r3,36(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x827715f4
	if (!ctx.cr6.lt) goto loc_827715F4;
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// stw r11,-88(r1)
	REX_STORE_U32(ctx.r1.u32 + -88, ctx.r11.u32);
	// b 0x827714a4
	goto loc_827714A4;
loc_82771498:
	// lwz r10,-88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -88);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,-88(r1)
	REX_STORE_U32(ctx.r1.u32 + -88, ctx.r9.u32);
loc_827714A4:
	// lwz r8,-88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -88);
	// lwz r7,36(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x827715f4
	if (!ctx.cr6.lt) goto loc_827715F4;
	// lwz r6,-76(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stw r5,-68(r1)
	REX_STORE_U32(ctx.r1.u32 + -68, ctx.r5.u32);
	// lwz r4,-76(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// srawi r3,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 8;
	// lwz r11,-64(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// mullw r10,r11,r3
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// stw r10,-96(r1)
	REX_STORE_U32(ctx.r1.u32 + -96, ctx.r10.u32);
	// lwz r9,-68(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// subfic r8,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r8.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// stw r8,-56(r1)
	REX_STORE_U32(ctx.r1.u32 + -56, ctx.r8.u32);
	// lwz r7,20(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r6,64(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// lwz r5,-96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// add r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stw r4,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// lwz r3,-76(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// lwz r10,-72(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8277158c
	if (!ctx.cr6.lt) goto loc_8277158C;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,-40(r1)
	REX_STORE_U32(ctx.r1.u32 + -40, ctx.r8.u32);
	// b 0x82771524
	goto loc_82771524;
loc_82771518:
	// lwz r7,-40(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r6,-40(r1)
	REX_STORE_U32(ctx.r1.u32 + -40, ctx.r6.u32);
loc_82771524:
	// lwz r5,-40(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// lwz r4,-64(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82771588
	if (!ctx.cr6.lt) goto loc_82771588;
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lwz r10,-56(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r7,-64(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// lbzx r6,r8,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// lwz r5,-68(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// mullw r4,r5,r6
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// add r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 + ctx.r4.u64;
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,-84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// stb r10,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r8,-84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,-84(r1)
	REX_STORE_U32(ctx.r1.u32 + -84, ctx.r7.u32);
	// lwz r6,-16(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// stw r5,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// b 0x82771518
	goto loc_82771518;
loc_82771588:
	// b 0x827715e0
	goto loc_827715E0;
loc_8277158C:
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,-40(r1)
	REX_STORE_U32(ctx.r1.u32 + -40, ctx.r4.u32);
	// b 0x827715a4
	goto loc_827715A4;
loc_82771598:
	// lwz r3,-40(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,-40(r1)
	REX_STORE_U32(ctx.r1.u32 + -40, ctx.r11.u32);
loc_827715A4:
	// lwz r10,-40(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// lwz r9,-64(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x827715e0
	if (!ctx.cr6.lt) goto loc_827715E0;
	// lwz r8,-16(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// lbz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lwz r6,-84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// stb r7,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r7.u8);
	// lwz r5,-84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// stw r4,-84(r1)
	REX_STORE_U32(ctx.r1.u32 + -84, ctx.r4.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// b 0x82771598
	goto loc_82771598;
loc_827715E0:
	// lwz r10,-76(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r9,-80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,-76(r1)
	REX_STORE_U32(ctx.r1.u32 + -76, ctx.r8.u32);
	// b 0x82771498
	goto loc_82771498;
loc_827715F4:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82793170) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,-14480
	ctx.r11.s64 = ctx.r11.s64 + -14480;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x8214ab00
	sub_8214AB00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82793458) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r10,-11132
	ctx.r3.s64 = ctx.r10.s64 + -11132;
	// addi r11,r11,2552
	ctx.r11.s64 = ctx.r11.s64 + 2552;
	// stw r11,-11132(r10)
	REX_STORE_U32(ctx.r10.u32 + -11132, ctx.r11.u32);
	// b 0x822f5ee0
	sub_822F5EE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82793678) {
	REX_FUNC_PROLOGUE();
	// .long 0x20003cb
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793768) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000259
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793898) {
	REX_FUNC_PROLOGUE();
	// .long 0x201012e
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827939C8) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010097
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793B38) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010143
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793CD8) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101d9
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793E98) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010104
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82794088) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000006
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82794298) {
	REX_FUNC_PROLOGUE();
	// .long 0x20102e1
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82799868) {
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
	// lwz r11,14808(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14808);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,3416(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3416);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r9,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x827998a8
	if (ctx.cr6.eq) goto loc_827998A8;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x827998b0
	goto loc_827998B0;
loc_827998A8:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
loc_827998B0:
	// stw r11,14812(r31)
	REX_STORE_U32(r31.u32 + 14812, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2952(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2952);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,14816(r31)
	REX_STORE_U32(r31.u32 + 14816, ctx.r10.u32);
	// addi r8,r11,732
	ctx.r8.s64 = ctx.r11.s64 + 732;
	// lwz r10,2112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2112);
	// addi r7,r11,735
	ctx.r7.s64 = ctx.r11.s64 + 735;
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 248);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,266
	ctx.r10.s64 = ctx.r10.s64 + 266;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r7,r6,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,2904(r31)
	REX_STORE_U32(r31.u32 + 2904, ctx.r7.u32);
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// stw r5,2916(r31)
	REX_STORE_U32(r31.u32 + 2916, ctx.r5.u32);
	// lwz r11,2124(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 2124);
	// stw r11,2116(r31)
	REX_STORE_U32(r31.u32 + 2116, ctx.r11.u32);
	// lwzx r10,r6,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// stw r10,2120(r31)
	REX_STORE_U32(r31.u32 + 2120, ctx.r10.u32);
	// stw r9,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r9.u32);
	// bl 0x8274e3f0
	ctx.lr = 0x82799914;
	sub_8274E3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827407a8
	ctx.lr = 0x8279991C;
	sub_827407A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82756b90
	ctx.lr = 0x82799928;
	sub_82756B90(ctx, base);
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

DEFINE_REX_FUNC(sub_827AF610) {
	REX_FUNC_PROLOGUE();
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
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// vspltish v12,8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x8)));
	// vspltish v11,-1
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltish v4,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// vslh v30,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x4)));
	// vor128 v63,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vspltish v3,5
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_set1_epi16(short(0x5)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// bne cr6,0x827af730
	if (!ctx.cr6.eq) goto loc_827AF730;
	// lvx128 v59,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lvx128 v60,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v61,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v11,v62,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v61,v59,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v9,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v31,v57,v58,v5
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v11,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v12,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827af860
	if (!ctx.cr6.gt) goto loc_827AF860;
	// li r9,0
	ctx.r9.s64 = 0;
loc_827AF6A4:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vslh v8,v12,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v7,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vslh v31,v11,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v11,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vslh v6,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v7,v8
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// lvx128 v56,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v5,v31,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v28,v6,v12
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vperm128 v31,v55,v56,v7
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v6,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v28,v29
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vmrghb v8,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v28,v9,v6
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vor v9,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor v11,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vadduhm v27,v29,v5
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vslh v26,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v12,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vadduhm v25,v27,v2
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubshs v24,v0,v26
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vadduhm v23,v28,v24
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v8,v25,v23
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vsrah v22,v8,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v22,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v63,v63,v22
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)v22.u8)));
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// blt cr6,0x827af6a4
	if (ctx.cr6.lt) goto loc_827AF6A4;
	// b 0x827af860
	goto loc_827AF860;
loc_827AF730:
	// lvx128 v51,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v54,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v53,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v53,v51,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v50,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v11,v54,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v49,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v9,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v5,v49,v50,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v7,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v8,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v12,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v11,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827af860
	if (!ctx.cr6.gt) goto loc_827AF860;
	// li r8,0
	ctx.r8.s64 = 0;
loc_827AF780:
	// vslh v5,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vslh v31,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// vslh v29,v12,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// vsubshs v26,v7,v5
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// lvx128 v48,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v27,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v47,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v24,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// vperm128 v5,v47,v48,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor v7,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vadduhm v20,v31,v12
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v22,v11,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v11,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v9,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vmrghb v12,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v19,v28,v29
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vsubshs v31,v6,v27
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vslh v18,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v8,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v6,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vadduhm v16,v25,v11
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vor v8,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vmrglb v11,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v15,v21,v22
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v5,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v29,v20,v19
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vslh v14,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v17,v18
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v25,v16,v15
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vslh v28,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v24,v29,v5
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vsubshs v23,v0,v14
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vadduhm v21,v25,v27
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vsubshs v22,v0,v28
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vadduhm v20,v24,v2
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v19,v26,v23
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v17,v21,v2
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v18,v31,v22
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v5,v20,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v31,v17,v18
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsrah v16,v5,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v31,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v46,v63,v16
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// stvx128 v16,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// vor128 v63,v46,v15
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// blt cr6,0x827af780
	if (ctx.cr6.lt) goto loc_827AF780;
loc_827AF860:
	// vand128 v13,v63,v30
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// vcmpgtuh. v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827BF6A8) {
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
	ctx.lr = 0x827BF6B0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1152(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1152);
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vspltish v0,6
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x6)));
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
	ctx.lr = 0x827BF704;
	sub_827AF298(ctx, base);
	// cntlzw r7,r28
	ctx.r7.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// vspltish v11,8
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x8)));
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// vspltish v10,-1
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// and r9,r5,r27
	ctx.r9.u64 = ctx.r5.u64 & r27.u64;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r4,r9,3
	ctx.r4.s64 = ctx.r9.s64 + 3;
	// vslh v2,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x4)));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// slw r9,r6,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// bne cr6,0x827bf800
	if (!ctx.cr6.eq) goto loc_827BF800;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827bf8f8
	if (!ctx.cr6.gt) goto loc_827BF8F8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_827BF764:
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
	// bdnz 0x827bf764
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BF764;
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
loc_827BF800:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827bf8f8
	if (!ctx.cr6.gt) goto loc_827BF8F8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_827BF818:
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
	// bdnz 0x827bf818
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BF818;
loc_827BF8F8:
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
}

