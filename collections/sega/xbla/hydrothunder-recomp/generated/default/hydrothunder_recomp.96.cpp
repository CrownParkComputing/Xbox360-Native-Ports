#include "hydrothunder_funcs.96.h"

DEFINE_REX_FUNC(sub_82125950) {
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
	// bl 0x82793614
	ctx.lr = 0x82125960;
	__imp__XGetGameRegion(ctx, base);
	// cmplwi cr6,r3,766
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 766, ctx.xer);
	// bgt cr6,0x821259e4
	if (ctx.cr6.gt) goto loc_821259E4;
	// beq cr6,0x82125a48
	if (ctx.cr6.eq) goto loc_82125A48;
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// beq cr6,0x821259d8
	if (ctx.cr6.eq) goto loc_821259D8;
	// cmplwi cr6,r3,257
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 257, ctx.xer);
	// beq cr6,0x821259cc
	if (ctx.cr6.eq) goto loc_821259CC;
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// beq cr6,0x821259c0
	if (ctx.cr6.eq) goto loc_821259C0;
	// cmplwi cr6,r3,508
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 508, ctx.xer);
	// beq cr6,0x821259b4
	if (ctx.cr6.eq) goto loc_821259B4;
	// cmplwi cr6,r3,511
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 511, ctx.xer);
	// beq cr6,0x821259a8
	if (ctx.cr6.eq) goto loc_821259A8;
	// cmplwi cr6,r3,513
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 513, ctx.xer);
	// bne cr6,0x82125a0c
	if (!ctx.cr6.eq) goto loc_82125A0C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-25464
	ctx.r3.s64 = ctx.r11.s64 + -25464;
	// b 0x82125a50
	goto loc_82125A50;
loc_821259A8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-25520
	ctx.r3.s64 = ctx.r11.s64 + -25520;
	// b 0x82125a50
	goto loc_82125A50;
loc_821259B4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-25488
	ctx.r3.s64 = ctx.r11.s64 + -25488;
	// b 0x82125a50
	goto loc_82125A50;
loc_821259C0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-25500
	ctx.r3.s64 = ctx.r11.s64 + -25500;
	// b 0x82125a50
	goto loc_82125A50;
loc_821259CC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-25512
	ctx.r3.s64 = ctx.r11.s64 + -25512;
	// b 0x82125a50
	goto loc_82125A50;
loc_821259D8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-25536
	ctx.r3.s64 = ctx.r11.s64 + -25536;
	// b 0x82125a50
	goto loc_82125A50;
loc_821259E4:
	// cmplwi cr6,r3,767
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 767, ctx.xer);
	// beq cr6,0x82125a48
	if (ctx.cr6.eq) goto loc_82125A48;
	// cmplwi cr6,r3,1023
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1023, ctx.xer);
	// beq cr6,0x82125a3c
	if (ctx.cr6.eq) goto loc_82125A3C;
	// cmplwi cr6,r3,32767
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32767, ctx.xer);
	// beq cr6,0x82125a30
	if (ctx.cr6.eq) goto loc_82125A30;
	// cmplwi cr6,r3,32768
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32768, ctx.xer);
	// beq cr6,0x82125a24
	if (ctx.cr6.eq) goto loc_82125A24;
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// beq cr6,0x82125a18
	if (ctx.cr6.eq) goto loc_82125A18;
loc_82125A0C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26856
	ctx.r3.s64 = ctx.r11.s64 + -26856;
	// b 0x82125a50
	goto loc_82125A50;
loc_82125A18:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-25404
	ctx.r3.s64 = ctx.r11.s64 + -25404;
	// b 0x82125a50
	goto loc_82125A50;
loc_82125A24:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-25424
	ctx.r3.s64 = ctx.r11.s64 + -25424;
	// b 0x82125a50
	goto loc_82125A50;
loc_82125A30:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-25436
	ctx.r3.s64 = ctx.r11.s64 + -25436;
	// b 0x82125a50
	goto loc_82125A50;
loc_82125A3C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-25452
	ctx.r3.s64 = ctx.r11.s64 + -25452;
	// b 0x82125a50
	goto loc_82125A50;
loc_82125A48:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-25476
	ctx.r3.s64 = ctx.r11.s64 + -25476;
loc_82125A50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212E940) {
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
	ctx.lr = 0x8212E948;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212e9cc
	if (ctx.cr6.eq) goto loc_8212E9CC;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8212e9cc
	if (!ctx.cr0.gt) goto loc_8212E9CC;
	// addi r27,r3,8
	r27.s64 = ctx.r3.s64 + 8;
loc_8212E974:
	// add r11,r29,r28
	ctx.r11.u64 = r29.u64 + r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// srawi r31,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r31.s64 = ctx.r11.s32 >> 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8228ca78
	ctx.lr = 0x8212E988;
	sub_8228CA78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x82170348
	ctx.lr = 0x8212E99C;
	sub_82170348(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8212e9ac
	if (ctx.cr0.eq) goto loc_8212E9AC;
	// mr r29,r31
	r29.u64 = r31.u64;
	// b 0x8212e9c4
	goto loc_8212E9C4;
loc_8212E9AC:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82170348
	ctx.lr = 0x8212E9B8;
	sub_82170348(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8212ea10
	if (ctx.cr0.eq) goto loc_8212EA10;
	// addi r28,r31,1
	r28.s64 = r31.s64 + 1;
loc_8212E9C4:
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(r28.s32, r29.s32, ctx.xer);
	// blt cr6,0x8212e974
	if (ctx.cr6.lt) goto loc_8212E974;
loc_8212E9CC:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// blt cr6,0x8212e9f0
	if (ctx.cr6.lt) goto loc_8212E9F0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-23044
	ctx.r4.s64 = ctx.r11.s64 + -23044;
	// addi r3,r10,-23000
	ctx.r3.s64 = ctx.r10.s64 + -23000;
	// li r5,259
	ctx.r5.s64 = 259;
	// bl 0x821231d0
	ctx.lr = 0x8212E9F0;
	sub_821231D0(ctx, base);
loc_8212E9F0:
	// li r3,2044
	ctx.r3.s64 = 2044;
	// bl 0x822f6280
	ctx.lr = 0x8212E9F8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8212ea24
	if (ctx.cr0.eq) goto loc_8212EA24;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x821704f0
	ctx.lr = 0x8212EA08;
	sub_821704F0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// b 0x8212ea28
	goto loc_8212EA28;
loc_8212EA10:
	// lwz r11,2040(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 2040);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2040(r9)
	REX_STORE_U32(ctx.r9.u32 + 2040, ctx.r11.u32);
	// b 0x8212ead4
	goto loc_8212EAD4;
loc_8212EA24:
	// li r26,0
	r26.s64 = 0;
loc_8212EA28:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212fcf0
	ctx.lr = 0x8212EA3C;
	sub_8212FCF0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// ble cr6,0x8212ea80
	if (!ctx.cr6.gt) goto loc_8212EA80;
loc_8212EA4C:
	// addi r27,r29,-1
	r27.s64 = r29.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8228ca78
	ctx.lr = 0x8212EA5C;
	sub_8228CA78(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228ca78
	ctx.lr = 0x8212EA6C;
	sub_8228CA78(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r29,r27
	r29.u64 = r27.u64;
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(r27.s32, r28.s32, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bgt cr6,0x8212ea4c
	if (ctx.cr6.gt) goto loc_8212EA4C;
loc_8212EA80:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228ca78
	ctx.lr = 0x8212EA8C;
	sub_8228CA78(ctx, base);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// ble cr6,0x8212ead0
	if (!ctx.cr6.gt) goto loc_8212EAD0;
loc_8212EAAC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228ca78
	ctx.lr = 0x8212EAB8;
	sub_8228CA78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r29,1888(r11)
	REX_STORE_U32(ctx.r11.u32 + 1888, r29.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212eaac
	if (ctx.cr6.lt) goto loc_8212EAAC;
loc_8212EAD0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8212EAD4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8213A968) {
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
	// addi r11,r11,-18696
	ctx.r11.s64 = ctx.r11.s64 + -18696;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8213a994
	if (ctx.cr0.eq) goto loc_8213A994;
	// bl 0x8269ce98
	ctx.lr = 0x8213A994;
	sub_8269CE98(ctx, base);
loc_8213A994:
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

DEFINE_REX_FUNC(sub_8213C4A8) {
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
	ctx.lr = 0x8213C4B0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,41(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 41);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213c4d4
	if (ctx.cr0.eq) goto loc_8213C4D4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26916
	ctx.r3.s64 = ctx.r11.s64 + -26916;
	// bl 0x822f6058
	ctx.lr = 0x8213C4D4;
	sub_822F6058(ctx, base);
loc_8213C4D4:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// addi r9,r5,8
	ctx.r9.s64 = ctx.r5.s64 + 8;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lbz r10,41(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8213c50c
	if (!ctx.cr0.eq) goto loc_8213C50C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8213c4fc
	goto loc_8213C4FC;
loc_8213C4F4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_8213C4FC:
	// lbz r8,41(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 41);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8213c4f4
	if (ctx.cr0.eq) goto loc_8213C4F4;
	// b 0x8213c534
	goto loc_8213C534;
loc_8213C50C:
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// b 0x8213c528
	goto loc_8213C528;
loc_8213C514:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213c534
	if (!ctx.cr6.eq) goto loc_8213C534;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8213C528:
	// lbz r10,41(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8213c514
	if (ctx.cr0.eq) goto loc_8213C514;
loc_8213C534:
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lbz r10,41(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8213c550
	if (ctx.cr0.eq) goto loc_8213C550;
	// lwz r28,0(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x8213c574
	goto loc_8213C574;
loc_8213C550:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r10,41(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 41);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8213c568
	if (ctx.cr0.eq) goto loc_8213C568;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// b 0x8213c574
	goto loc_8213C574;
loc_8213C568:
	// lwz r28,8(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(r26.u32, r25.u32, ctx.xer);
	// bne cr6,0x8213c64c
	if (!ctx.cr6.eq) goto loc_8213C64C;
loc_8213C574:
	// lbz r11,41(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 41);
	// lwz r31,4(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8213c588
	if (!ctx.cr0.eq) goto loc_8213C588;
	// stw r31,4(r28)
	REX_STORE_U32(r28.u32 + 4, r31.u32);
loc_8213C588:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, ctx.xer);
	// bne cr6,0x8213c5a0
	if (!ctx.cr6.eq) goto loc_8213C5A0;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// b 0x8213c5b8
	goto loc_8213C5B8;
loc_8213C5A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bne cr6,0x8213c5b4
	if (!ctx.cr6.eq) goto loc_8213C5B4;
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x8213c5b8
	goto loc_8213C5B8;
loc_8213C5B4:
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
loc_8213C5B8:
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bne cr6,0x8213c600
	if (!ctx.cr6.eq) goto loc_8213C600;
	// lbz r11,41(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 41);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213c5dc
	if (ctx.cr0.eq) goto loc_8213C5DC;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x8213c5fc
	goto loc_8213C5FC;
loc_8213C5DC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x8213c5f0
	goto loc_8213C5F0;
loc_8213C5E8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8213C5F0:
	// lbz r8,41(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8213c5e8
	if (ctx.cr0.eq) goto loc_8213C5E8;
loc_8213C5FC:
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8213C600:
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bne cr6,0x8213c6e0
	if (!ctx.cr6.eq) goto loc_8213C6E0;
	// lbz r11,41(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 41);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213c624
	if (ctx.cr0.eq) goto loc_8213C624;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x8213c644
	goto loc_8213C644;
loc_8213C624:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x8213c638
	goto loc_8213C638;
loc_8213C630:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8213C638:
	// lbz r8,41(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8213c630
	if (ctx.cr0.eq) goto loc_8213C630;
loc_8213C644:
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x8213c6e0
	goto loc_8213C6E0;
loc_8213C64C:
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8213c66c
	if (!ctx.cr6.eq) goto loc_8213C66C;
	// mr r31,r26
	r31.u64 = r26.u64;
	// b 0x8213c694
	goto loc_8213C694;
loc_8213C66C:
	// lbz r11,41(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 41);
	// lwz r31,4(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8213c680
	if (!ctx.cr0.eq) goto loc_8213C680;
	// stw r31,4(r28)
	REX_STORE_U32(r28.u32 + 4, r31.u32);
loc_8213C680:
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
loc_8213C694:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, ctx.xer);
	// bne cr6,0x8213c6ac
	if (!ctx.cr6.eq) goto loc_8213C6AC;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
	// b 0x8213c6c8
	goto loc_8213C6C8;
loc_8213C6AC:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, ctx.xer);
	// bne cr6,0x8213c6c4
	if (!ctx.cr6.eq) goto loc_8213C6C4;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
	// b 0x8213c6c8
	goto loc_8213C6C8;
loc_8213C6C4:
	// stw r26,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r26.u32);
loc_8213C6C8:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// lbz r11,40(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 40);
	// lbz r10,40(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 40);
	// stb r10,40(r26)
	REX_STORE_U8(r26.u32 + 40, ctx.r10.u8);
	// stb r11,40(r25)
	REX_STORE_U8(r25.u32 + 40, ctx.r11.u8);
loc_8213C6E0:
	// lbz r11,40(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 40);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8213c878
	if (!ctx.cr6.eq) goto loc_8213C878;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// li r30,1
	r30.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8213c874
	if (ctx.cr6.eq) goto loc_8213C874;
	// li r29,0
	r29.s64 = 0;
loc_8213C704:
	// lbz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 40);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8213c874
	if (!ctx.cr6.eq) goto loc_8213C874;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8213c7bc
	if (!ctx.cr6.eq) goto loc_8213C7BC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 40);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8213c744
	if (!ctx.cr0.eq) goto loc_8213C744;
	// stb r30,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r29,40(r31)
	REX_STORE_U8(r31.u32 + 40, r29.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8213cb78
	ctx.lr = 0x8213C740;
	sub_8213CB78(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_8213C744:
	// lbz r10,41(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8213c810
	if (!ctx.cr0.eq) goto loc_8213C810;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,40(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 40);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8213c770
	if (!ctx.cr6.eq) goto loc_8213C770;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,40(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 40);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x8213c80c
	if (ctx.cr6.eq) goto loc_8213C80C;
loc_8213C770:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,40(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 40);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8213c798
	if (!ctx.cr6.eq) goto loc_8213C798;
	// stb r30,40(r10)
	REX_STORE_U8(ctx.r10.u32 + 40, r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, r29.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8213cbe0
	ctx.lr = 0x8213C794;
	sub_8213CBE0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_8213C798:
	// lbz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// stb r30,40(r31)
	REX_STORE_U8(r31.u32 + 40, r30.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, r30.u8);
	// bl 0x8213cb78
	ctx.lr = 0x8213C7B8;
	sub_8213CB78(ctx, base);
	// b 0x8213c874
	goto loc_8213C874;
loc_8213C7BC:
	// lbz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 40);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8213c7e0
	if (!ctx.cr0.eq) goto loc_8213C7E0;
	// stb r30,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r29,40(r31)
	REX_STORE_U8(r31.u32 + 40, r29.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8213cbe0
	ctx.lr = 0x8213C7DC;
	sub_8213CBE0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8213C7E0:
	// lbz r10,41(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8213c810
	if (!ctx.cr0.eq) goto loc_8213C810;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,40(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 40);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8213c82c
	if (!ctx.cr6.eq) goto loc_8213C82C;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,40(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 40);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8213c82c
	if (!ctx.cr6.eq) goto loc_8213C82C;
loc_8213C80C:
	// stb r29,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, r29.u8);
loc_8213C810:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r28,r31
	r28.u64 = r31.u64;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8213c704
	if (!ctx.cr6.eq) goto loc_8213C704;
	// b 0x8213c874
	goto loc_8213C874;
loc_8213C82C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,40(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 40);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8213c854
	if (!ctx.cr6.eq) goto loc_8213C854;
	// stb r30,40(r10)
	REX_STORE_U8(ctx.r10.u32 + 40, r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, r29.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8213cb78
	ctx.lr = 0x8213C850;
	sub_8213CB78(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8213C854:
	// lbz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// stb r30,40(r31)
	REX_STORE_U8(r31.u32 + 40, r30.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, r30.u8);
	// bl 0x8213cbe0
	ctx.lr = 0x8213C874;
	sub_8213CBE0(ctx, base);
loc_8213C874:
	// stb r30,40(r28)
	REX_STORE_U8(r28.u32 + 40, r30.u8);
loc_8213C878:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r25,12
	ctx.r3.s64 = r25.s64 + 12;
	// bl 0x82120ac0
	ctx.lr = 0x8213C888;
	sub_82120AC0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8213C890;
	sub_8269CE98(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213c8a4
	if (ctx.cr6.eq) goto loc_8213C8A4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r11.u32);
loc_8213C8A4:
	// stw r26,0(r24)
	REX_STORE_U32(r24.u32 + 0, r26.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8215C0D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8215C0D8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215c224
	if (ctx.cr6.eq) goto loc_8215C224;
	// lbz r11,65(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 65);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215c224
	if (ctx.cr0.eq) goto loc_8215C224;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215C10C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8215c11c
	if (!ctx.cr6.eq) goto loc_8215C11C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215c228
	goto loc_8215C228;
loc_8215C11C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215bd58
	ctx.lr = 0x8215C124;
	sub_8215BD58(ctx, base);
	// addi r29,r30,68
	r29.s64 = r30.s64 + 68;
loc_8215C128:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8215c140
	if (!ctx.cr6.lt) goto loc_8215C140;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x8215c148
	if (ctx.cr6.lt) goto loc_8215C148;
loc_8215C140:
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x8215c14c
	goto loc_8215C14C;
loc_8215C148:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_8215C14C:
	// lwz r3,60(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 60);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215C170;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8215c1a4
	if (ctx.cr6.lt) goto loc_8215C1A4;
	// beq cr6,0x8215c1ac
	if (ctx.cr6.eq) goto loc_8215C1AC;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// li r31,1
	r31.s64 = 1;
	// beq cr6,0x8215c18c
	if (ctx.cr6.eq) goto loc_8215C18C;
loc_8215C188:
	// li r31,0
	r31.s64 = 0;
loc_8215C18C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8215C19C;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8215c228
	goto loc_8215C228;
loc_8215C1A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,65(r30)
	REX_STORE_U8(r30.u32 + 65, ctx.r11.u8);
loc_8215C1AC:
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bge cr6,0x8215c1c4
	if (!ctx.cr6.lt) goto loc_8215C1C4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_8215C1C4:
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf. r31,r11,r9
	r31.u64 = ctx.r9.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8215c1f4
	if (ctx.cr0.eq) goto loc_8215C1F4;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bge cr6,0x8215c1dc
	if (!ctx.cr6.lt) goto loc_8215C1DC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8215C1DC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r6,76(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 76);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8269e4b8
	ctx.lr = 0x8215C1EC;
	sub_8269E4B8(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8215c188
	if (!ctx.cr6.eq) goto loc_8215C188;
loc_8215C1F4:
	// lbz r11,65(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 65);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215c21c
	if (ctx.cr0.eq) goto loc_8215C21C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8215c128
	if (!ctx.cr6.eq) goto loc_8215C128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8212a778
	ctx.lr = 0x8215C218;
	sub_8212A778(ctx, base);
	// b 0x8215c128
	goto loc_8215C128;
loc_8215C21C:
	// li r31,1
	r31.s64 = 1;
	// b 0x8215c18c
	goto loc_8215C18C;
loc_8215C224:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8215C228:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82167FA0) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82167ffc
	if (ctx.cr6.eq) goto loc_82167FFC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r4,r9,-23796
	ctx.r4.s64 = ctx.r9.s64 + -23796;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lfs f0,228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,584(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 584);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bctrl 
	ctx.lr = 0x82167FFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82167FFC:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r31,r11,-41
	r31.s64 = ctx.r11.s64 + -41;
	// lwz r3,6076(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6076);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82168040
	if (ctx.cr6.eq) goto loc_82168040;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,23320
	ctx.r4.s64 = ctx.r10.s64 + 23320;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216802C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82168040
	if (!ctx.cr6.eq) goto loc_82168040;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
loc_82168040:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216806c
	if (ctx.cr6.eq) goto loc_8216806C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r10,23340
	ctx.r4.s64 = ctx.r10.s64 + 23340;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216806C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216806C:
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

DEFINE_REX_FUNC(sub_8216FA20) {
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
	ctx.lr = 0x8216FA28;
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
	// addi r29,r28,1
	r29.s64 = r28.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8216fa94
	if (!ctx.cr6.gt) goto loc_8216FA94;
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
	// bgt cr6,0x8216fa60
	if (ctx.cr6.gt) goto loc_8216FA60;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8216FA60:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8216fa94
	if (!ctx.cr6.gt) goto loc_8216FA94;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r30,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8269d1d0
	ctx.lr = 0x8216FA74;
	sub_8269D1D0(ctx, base);
	// rlwinm r5,r28,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8216FA84;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8216FA8C;
	sub_8269D1B8(ctx, base);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_8216FA94:
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r4,r29,-1
	ctx.r4.s64 = r29.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216fab8
	ctx.lr = 0x8216FAA4;
	sub_8216FAB8(ctx, base);
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 0);
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82172C88) {
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
	// lwz r4,12(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6060(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// bl 0x8212eae0
	ctx.lr = 0x82172CAC;
	sub_8212EAE0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82172CCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82172CEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82172D00;
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

DEFINE_REX_FUNC(sub_821786C0) {
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
	ctx.lr = 0x821786C8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821786e8
	if (ctx.cr6.eq) goto loc_821786E8;
	// bl 0x82179260
	ctx.lr = 0x821786E4;
	sub_82179260(ctx, base);
	// b 0x821787e0
	goto loc_821787E0;
loc_821786E8:
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r10,64(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 64);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82178718
	if (ctx.cr0.eq) goto loc_82178718;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,28384
	ctx.r4.s64 = ctx.r11.s64 + 28384;
	// bl 0x8215f670
	ctx.lr = 0x8217870C;
	sub_8215F670(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82179010
	ctx.lr = 0x82178718;
	sub_82179010(ctx, base);
loc_82178718:
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// addi r31,r30,80
	r31.s64 = r30.s64 + 80;
	// lwz r10,80(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 80);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217874c
	if (ctx.cr0.eq) goto loc_8217874C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,-17264
	ctx.r4.s64 = ctx.r11.s64 + -17264;
	// bl 0x8215f670
	ctx.lr = 0x82178740;
	sub_8215F670(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8219b840
	ctx.lr = 0x8217874C;
	sub_8219B840(ctx, base);
loc_8217874C:
	// lwz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821787c8
	if (ctx.cr6.eq) goto loc_821787C8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,28400
	ctx.r4.s64 = ctx.r11.s64 + 28400;
	// bl 0x8215f670
	ctx.lr = 0x82178768;
	sub_8215F670(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 96);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821787c0
	goto loc_821787C0;
loc_82178778:
	// lwz r26,8(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82178790;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r28,0(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8215f670
	ctx.lr = 0x821787A4;
	sub_8215F670(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821787B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 96);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821787C0:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82178778
	if (!ctx.cr6.eq) goto loc_82178778;
loc_821787C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821787E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821787E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8217F770) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8217f4b0
	ctx.lr = 0x8217F798;
	sub_8217F4B0(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r30,98(r1)
	REX_STORE_U32(ctx.r1.u32 + 98, r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217F7D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_821847B8) {
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
	ctx.lr = 0x821847C0;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x826a2ca4
	ctx.lr = 0x821847C8;
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82184ac0
	if (!ctx.cr6.gt) goto loc_82184AC0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r31,-32243
	r31.s64 = -2113077248;
	// addi r10,r11,16592
	ctx.r10.s64 = ctx.r11.s64 + 16592;
	// lis r27,-32126
	r27.s64 = -2105409536;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f9,15048(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 15048);
	ctx.f9.f64 = double(temp.f32);
	// addi r29,r4,100
	r29.s64 = ctx.r4.s64 + 100;
	// lfs f3,292(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 292);
	ctx.f3.f64 = double(temp.f32);
	// addi r28,r4,104
	r28.s64 = ctx.r4.s64 + 104;
	// lfs f4,288(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 288);
	ctx.f4.f64 = double(temp.f32);
	// addi r30,r4,96
	r30.s64 = ctx.r4.s64 + 96;
	// lfs f2,180(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 180);
	ctx.f2.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f7,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// addi r31,r11,-27152
	r31.s64 = ctx.r11.s64 + -27152;
	// lfs f1,-16132(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + -16132);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r9,-27136
	ctx.r9.s64 = ctx.r9.s64 + -27136;
loc_8218482C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r27,0(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x82184aa0
	if (!ctx.cr6.eq) goto loc_82184AA0;
	// lfs f11,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,160(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f13,f11,f8
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// lfs f10,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f31,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	f31.f64 = double(temp.f32);
	// lfs f6,100(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,164(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f6,f10,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// lfs f30,176(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 176);
	f30.f64 = double(temp.f32);
	// fsubs f5,f10,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// lfs f29,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	f29.f64 = double(temp.f32);
	// lfs f28,180(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 180);
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
	// bge cr6,0x82184aa0
	if (!ctx.cr6.lt) goto loc_82184AA0;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f6,164(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,100(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 100);
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
	// bge cr6,0x82184aa0
	if (!ctx.cr6.lt) goto loc_82184AA0;
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
	// mfcr r27
	r27.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r27.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r27.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r27.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r27.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r27.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r27.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r27.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r27.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r27.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r27.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r27.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r27.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r27.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r27.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r27.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r27.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r27.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r27.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r27.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r27.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r27.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r27.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r27.u64 |= ctx.cr5.so ? 0x100 : 0;
	r27.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r27.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r27.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r27.u64 |= ctx.cr6.so ? 0x10 : 0;
	r27.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r27.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r27.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r27.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r26,r27,27,29,29
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 27) & 0x4;
	// rlwinm r27,r27,30,29,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x4;
	// or r27,r26,r27
	r27.u64 = r26.u64 | r27.u64;
	// lfsx f6,r11,r27
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsel f6,f6,f9,f30
	ctx.f6.f64 = ctx.f6.f64 >= 0.0 ? ctx.f9.f64 : f30.f64;
	// fdivs f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 / ctx.f5.f64));
	// fsubs f6,f8,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fcmpu cr6,f6,f9
	ctx.cr6.compare(ctx.f6.f64, ctx.f9.f64);
	// ble cr6,0x82184aa0
	if (!ctx.cr6.gt) goto loc_82184AA0;
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
	// bge cr6,0x82184aa0
	if (!ctx.cr6.lt) goto loc_82184AA0;
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
	// bge cr6,0x821849b0
	if (!ctx.cr6.lt) goto loc_821849B0;
	// fdivs f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
loc_821849B0:
	// lfs f11,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x821849cc
	if (!ctx.cr6.gt) goto loc_821849CC;
	// fsubs f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fsubs f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fdivs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_821849CC:
	// fmadds f12,f10,f6,f4
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f6.f64, ctx.f4.f64)));
	// addi r11,r10,256
	ctx.r11.s64 = ctx.r10.s64 + 256;
	// fsubs f11,f5,f8
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// stfs f7,-144(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// addi r27,r1,-144
	r27.s64 = ctx.r1.s64 + -144;
	// lvx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,-156
	r26.s64 = ctx.r1.s64 + -156;
	// addi r25,r1,-160
	r25.s64 = ctx.r1.s64 + -160;
	// addi r24,r10,256
	r24.s64 = ctx.r10.s64 + 256;
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f9
	ctx.cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// mfcr r23
	r23.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r23.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r23.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r23.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r23.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r23.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r23.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r23.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r23.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r23.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r23.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r23.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r23.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r23.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r23.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r23.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r23.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r23.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r23.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r23.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r23.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r23.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r23.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r23.u64 |= ctx.cr5.so ? 0x100 : 0;
	r23.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r23.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r23.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r23.u64 |= ctx.cr6.so ? 0x10 : 0;
	r23.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r23.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r23.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r23.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fmuls f12,f10,f3
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// rlwinm r22,r23,27,29,29
	r22.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 27) & 0x4;
	// rlwinm r23,r23,30,29,29
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 30) & 0x4;
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// or r23,r22,r23
	r23.u64 = r22.u64 | r23.u64;
	// lfsx f11,r11,r23
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
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
	// rlwinm r23,r11,27,29,29
	r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r11,r23,r11
	ctx.r11.u64 = r23.u64 | ctx.r11.u64;
	// fnmsubs f12,f12,f2,f10
	ctx.f12.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f2.f64, -ctx.f10.f64)));
	// fsubs f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f12,f11,f12,f10
	ctx.f12.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f10.f64;
	// stfs f12,-140(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// stfs f11,-136(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,-132(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// lvx128 v63,r0,r27
	ea = (r27.u32) & ~0xF;
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
	// stvewx128 v62,r0,r26
	ea = (r26.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v63,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v63,v61,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// stvewx128 v63,r0,r25
	ea = (r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,-160(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -160);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r24,r11
	temp.u32 = REX_LOAD_U32(r24.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f13,f10,f13,f7
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f7.f64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f0,f0,f1,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, ctx.f11.f64)));
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_82184AA0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwz r27,0(r4)
	r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r6,r27
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r27.s32, ctx.xer);
	// blt cr6,0x8218482c
	if (ctx.cr6.lt) goto loc_8218482C;
loc_82184AC0:
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x826a2cf0
	ctx.lr = 0x82184AC8;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_821A7088) {
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
	// bl 0x821a7360
	ctx.lr = 0x821A70A0;
	sub_821A7360(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821a70b0
	if (!ctx.cr0.eq) goto loc_821A70B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821a70fc
	goto loc_821A70FC;
loc_821A70B0:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6180(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a70f8
	if (ctx.cr6.eq) goto loc_821A70F8;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821a70d4
	if (ctx.cr6.lt) goto loc_821A70D4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821A70D4:
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
	ctx.lr = 0x821A70EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x821a70fc
	if (ctx.cr0.eq) goto loc_821A70FC;
loc_821A70F8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821A70FC:
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

DEFINE_REX_FUNC(sub_821A9A78) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c94
	ctx.lr = 0x821A9A80;
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -128, f30.u64);
	// stfd f31,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// std r28,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, r28.u64);
	// bl 0x82160340
	ctx.lr = 0x821A9AA4;
	sub_82160340(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r31,6072(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 6072);
	// bl 0x8215ef60
	ctx.lr = 0x821A9AB4;
	sub_8215EF60(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,18800
	ctx.r4.s64 = ctx.r11.s64 + 18800;
	// bl 0x8215f338
	ctx.lr = 0x821A9AC0;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821A9AC4;
	sub_8215FA30(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A9ADC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82126238
	ctx.lr = 0x821A9AEC;
	sub_82126238(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82160388
	ctx.lr = 0x821A9AFC;
	sub_82160388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82120ac0
	ctx.lr = 0x821A9B18;
	sub_82120AC0(ctx, base);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne 0x821aa1e4
	if (!ctx.cr0.eq) goto loc_821AA1E4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-25328
	ctx.r4.s64 = ctx.r11.s64 + -25328;
	// bl 0x8215f670
	ctx.lr = 0x821A9B30;
	sub_8215F670(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821d8318
	ctx.lr = 0x821A9B3C;
	sub_821D8318(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821d83e0
	ctx.lr = 0x821A9B44;
	sub_821D83E0(ctx, base);
	// addi r19,r25,96
	r19.s64 = r25.s64 + 96;
	// lwz r4,136(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8216fb90
	ctx.lr = 0x821A9B54;
	sub_8216FB90(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821a9ba0
	if (!ctx.cr6.gt) goto loc_821A9BA0;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_821A9B68:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x821a8c10
	ctx.lr = 0x821A9B74;
	sub_821A8C10(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821a9b68
	if (ctx.cr6.lt) goto loc_821A9B68;
loc_821A9BA0:
	// addi r20,r25,108
	r20.s64 = r25.s64 + 108;
	// lwz r4,152(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8212fcf0
	ctx.lr = 0x821A9BB0;
	sub_8212FCF0(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821a9bf0
	if (!ctx.cr6.gt) goto loc_821A9BF0;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_821A9BC4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r29,160(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8228ca78
	ctx.lr = 0x821A9BD4;
	sub_8228CA78(ctx, base);
	// lwzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r29.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821a9bc4
	if (ctx.cr6.lt) goto loc_821A9BC4;
loc_821A9BF0:
	// li r21,3
	r21.s64 = 3;
	// addi r30,r25,120
	r30.s64 = r25.s64 + 120;
	// divw r4,r11,r21
	ctx.r4.u64 = uint32_t((r21.s32 && !(ctx.r11.s32 == INT32_MIN && r21.s32 == -1)) ? ctx.r11.s32 / r21.s32 : 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82125c20
	ctx.lr = 0x821A9C04;
	sub_82125C20(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r31,r28
	r31.u64 = r28.u64;
	// divw. r11,r11,r21
	ctx.r11.u64 = uint32_t((r21.s32 && !(ctx.r11.s32 == INT32_MIN && r21.s32 == -1)) ? ctx.r11.s32 / r21.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821a9c40
	if (!ctx.cr0.gt) goto loc_821A9C40;
loc_821A9C14:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r29,176(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82125c98
	ctx.lr = 0x821A9C24;
	sub_82125C98(ctx, base);
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + r31.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// divw r11,r11,r21
	ctx.r11.u64 = uint32_t((r21.s32 && !(ctx.r11.s32 == INT32_MIN && r21.s32 == -1)) ? ctx.r11.s32 / r21.s32 : 0);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821a9c14
	if (ctx.cr6.lt) goto loc_821A9C14;
loc_821A9C40:
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821a9c68
	if (!ctx.cr6.eq) goto loc_821A9C68;
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r29,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	r29.s64 = ctx.r11.s32 >> 4;
	// b 0x821a9c6c
	goto loc_821A9C6C;
loc_821A9C68:
	// mr r29,r28
	r29.u64 = r28.u64;
loc_821A9C6C:
	// lwz r11,140(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 140);
	// addi r30,r25,132
	r30.s64 = r25.s64 + 132;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821a9cd0
	if (!ctx.cr6.gt) goto loc_821A9CD0;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(r31.s32, r29.s32, ctx.xer);
	// bgt cr6,0x821a9c94
	if (ctx.cr6.gt) goto loc_821A9C94;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_821A9C94:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821a9cd0
	if (!ctx.cr6.gt) goto loc_821A9CD0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mulli r3,r31,34
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(34));
	// bl 0x8269d1d0
	ctx.lr = 0x821A9CA8;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mulli r5,r11,34
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(34));
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821A9CBC;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821A9CC4;
	sub_8269D1B8(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r27,0(r30)
	REX_STORE_U32(r30.u32 + 0, r27.u32);
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
loc_821A9CD0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r31,r28
	r31.u64 = r28.u64;
	// lis r24,-32106
	r24.s64 = -2104098816;
	// addi r22,r11,-26856
	r22.s64 = ctx.r11.s64 + -26856;
	// addi r26,r10,-24712
	r26.s64 = ctx.r10.s64 + -24712;
	// addi r23,r9,-24724
	r23.s64 = ctx.r9.s64 + -24724;
loc_821A9CF4:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821a9d18
	if (!ctx.cr6.eq) goto loc_821A9D18;
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x821a9d1c
	goto loc_821A9D1C;
loc_821A9D18:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_821A9D1C:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821a9e68
	if (!ctx.cr6.lt) goto loc_821A9E68;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82120600
	ctx.lr = 0x821A9D30;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8215f1b0
	ctx.lr = 0x821A9D3C;
	sub_8215F1B0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// bl 0x821aa8d0
	ctx.lr = 0x821A9D44;
	sub_821AA8D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82120ac0
	ctx.lr = 0x821A9D58;
	sub_82120AC0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821a9d7c
	if (!ctx.cr6.eq) goto loc_821A9D7C;
	// lwz r29,8(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821a9d80
	if (ctx.cr6.lt) goto loc_821A9D80;
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x821a9d80
	goto loc_821A9D80;
loc_821A9D7C:
	// mr r29,r22
	r29.u64 = r22.u64;
loc_821A9D80:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821aa988
	ctx.lr = 0x821A9D8C;
	sub_821AA988(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x8269cd20
	ctx.lr = 0x821A9D98;
	sub_8269CD20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821aa988
	ctx.lr = 0x821A9DA4;
	sub_821AA988(ctx, base);
	// lwz r29,6164(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 6164);
	// stb r28,31(r3)
	REX_STORE_U8(ctx.r3.u32 + 31, r28.u8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x821a9de0
	if (ctx.cr6.eq) goto loc_821A9DE0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r27,0(r29)
	r27.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821aa988
	ctx.lr = 0x821A9DC4;
	sub_821AA988(ctx, base);
	// lwz r11,76(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 76);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A9DD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r29,r3,24
	r29.u64 = ctx.r3.u32 & 0xFF;
	// b 0x821a9de4
	goto loc_821A9DE4;
loc_821A9DE0:
	// mr r29,r28
	r29.u64 = r28.u64;
loc_821A9DE4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821aa988
	ctx.lr = 0x821A9DF0;
	sub_821AA988(ctx, base);
	// stb r29,32(r3)
	REX_STORE_U8(ctx.r3.u32 + 32, r29.u8);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82120600
	ctx.lr = 0x821A9E00;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8215f1b0
	ctx.lr = 0x821A9E0C;
	sub_8215F1B0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// bl 0x821aa8d0
	ctx.lr = 0x821A9E14;
	sub_821AA8D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82120ac0
	ctx.lr = 0x821A9E28;
	sub_82120AC0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821aa988
	ctx.lr = 0x821A9E34;
	sub_821AA988(ctx, base);
	// stb r28,33(r3)
	REX_STORE_U8(ctx.r3.u32 + 33, r28.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821aa988
	ctx.lr = 0x821A9E44;
	sub_821AA988(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r11,r3,33
	ctx.r11.s64 = ctx.r3.s64 + 33;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821a9e5c
	if (!ctx.cr6.eq) goto loc_821A9E5C;
	// lbz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 8);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_821A9E5C:
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x821a9cf4
	goto loc_821A9CF4;
loc_821A9E68:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a8258
	ctx.lr = 0x821A9E70;
	sub_821A8258(ctx, base);
	// lwz r11,100(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821aa1e4
	if (ctx.cr6.eq) goto loc_821AA1E4;
	// lwz r11,112(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821aa1e4
	if (ctx.cr6.eq) goto loc_821AA1E4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r27,r11,16592
	r27.s64 = ctx.r11.s64 + 16592;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r30,r25,144
	r30.s64 = r25.s64 + 144;
	// mr r29,r28
	r29.u64 = r28.u64;
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// lfs f13,596(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,172(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,168(r25)
	REX_STORE_U64(r25.u32 + 168, ctx.r9.u64);
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,144(r25)
	REX_STORE_U64(r25.u32 + 144, ctx.r11.u64);
	// std r9,152(r25)
	REX_STORE_U64(r25.u32 + 152, ctx.r9.u64);
	// std r10,160(r25)
	REX_STORE_U64(r25.u32 + 160, ctx.r10.u64);
	// lwz r11,100(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821a9f18
	if (!ctx.cr6.gt) goto loc_821A9F18;
loc_821A9EF0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x821a8c10
	ctx.lr = 0x821A9EFC;
	sub_821A8C10(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82176218
	ctx.lr = 0x821A9F08;
	sub_82176218(ctx, base);
	// lwz r11,100(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 100);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821a9ef0
	if (ctx.cr6.lt) goto loc_821A9EF0;
loc_821A9F18:
	// lwz r11,112(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 112);
	// mr r29,r28
	r29.u64 = r28.u64;
	// divw. r26,r11,r21
	r26.u64 = uint32_t((r21.s32 && !(ctx.r11.s32 == INT32_MIN && r21.s32 == -1)) ? ctx.r11.s32 / r21.s32 : 0);
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble 0x821aa010
	if (!ctx.cr0.gt) goto loc_821AA010;
	// lfs f31,920(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 920);
	f31.f64 = double(temp.f32);
	// li r31,2
	r31.s64 = 2;
	// lfs f30,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	f30.f64 = double(temp.f32);
loc_821A9F34:
	// addi r4,r31,-2
	ctx.r4.s64 = r31.s64 + -2;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8228ca78
	ctx.lr = 0x821A9F40;
	sub_8228CA78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821a8c10
	ctx.lr = 0x821A9F50;
	sub_821A8C10(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r4,r31,-1
	ctx.r4.s64 = r31.s64 + -1;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8228ca78
	ctx.lr = 0x821A9F60;
	sub_8228CA78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821a8c10
	ctx.lr = 0x821A9F70;
	sub_821A8C10(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8228ca78
	ctx.lr = 0x821A9F80;
	sub_8228CA78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821a8c10
	ctx.lr = 0x821A9F90;
	sub_821A8C10(ctx, base);
	// lfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,4(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f9,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,4(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f9,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,8(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f8,8(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f9,f8,f11
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f8,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f6,f11,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmsubs f13,f13,f10,f8
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, -ctx.f8.f64)));
	// fmsubs f12,f12,f11,f7
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f11.f64, -ctx.f7.f64)));
	// fmsubs f0,f9,f0,f6
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, -ctx.f6.f64)));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x821aa1e4
	if (ctx.cr6.lt) goto loc_821AA1E4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,3
	r31.s64 = r31.s64 + 3;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(r29.s32, r26.s32, ctx.xer);
	// blt cr6,0x821a9f34
	if (ctx.cr6.lt) goto loc_821A9F34;
loc_821AA010:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f31,12(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 12);
	f31.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stfs f31,320(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f31,324(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stw r25,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, r25.u32);
	// addi r31,r11,-24644
	r31.s64 = ctx.r11.s64 + -24644;
	// stfs f31,328(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// li r3,192
	ctx.r3.s64 = 192;
	// lfs f30,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f30.f64 = double(temp.f32);
	// stw r31,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, r31.u32);
	// stfs f30,332(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// bl 0x822c1a70
	ctx.lr = 0x821AA044;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821aa054
	if (ctx.cr0.eq) goto loc_821AA054;
	// bl 0x8229d500
	ctx.lr = 0x821AA050;
	sub_8229D500(ctx, base);
	// b 0x821aa058
	goto loc_821AA058;
loc_821AA054:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_821AA058:
	// stw r3,176(r25)
	REX_STORE_U32(r25.u32 + 176, ctx.r3.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,160(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f12,168(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f11,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f10,164(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f10,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8229d630
	ctx.lr = 0x821AA0A8;
	sub_8229D630(ctx, base);
	// stfs f31,272(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f31,276(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stw r25,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, r25.u32);
	// stfs f31,280(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stw r31,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r31.u32);
	// stfs f30,284(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x822b0370
	ctx.lr = 0x821AA0CC;
	sub_822B0370(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r10,21
	ctx.r10.s64 = 21;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r11,5672
	ctx.r11.s64 = ctx.r11.s64 + 5672;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r31,1
	r31.s64 = 1;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r28,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, r28.u32);
	// stw r11,416(r1)
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r28,484(r1)
	REX_STORE_U32(ctx.r1.u32 + 484, r28.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stb r31,488(r1)
	REX_STORE_U8(ctx.r1.u32 + 488, r31.u8);
	// stb r28,489(r1)
	REX_STORE_U8(ctx.r1.u32 + 489, r28.u8);
	// stw r10,420(r1)
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r10.u32);
	// lwz r4,176(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 176);
	// bl 0x8229e970
	ctx.lr = 0x821AA114;
	sub_8229E970(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821AA11C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821aa19c
	if (ctx.cr0.eq) goto loc_821AA19C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stb r31,20(r3)
	REX_STORE_U8(ctx.r3.u32 + 20, r31.u8);
	// stw r28,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r28.u32);
	// lfs f0,924(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 924);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// addi r10,r11,-24484
	ctx.r10.s64 = ctx.r11.s64 + -24484;
	// stw r28,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// lfs f13,304(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// stb r31,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, r31.u8);
	// lfs f12,60(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// stw r28,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r28.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r28,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r28,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r28.u32);
	// stb r31,60(r3)
	REX_STORE_U8(ctx.r3.u32 + 60, r31.u8);
	// stw r28,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r28.u32);
	// stw r28,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, r28.u32);
	// stw r28,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, r28.u32);
	// stb r31,80(r3)
	REX_STORE_U8(ctx.r3.u32 + 80, r31.u8);
	// stw r28,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, r28.u32);
	// stw r28,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, r28.u32);
	// stw r28,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, r28.u32);
	// stfs f30,84(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f13,88(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f12,96(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// b 0x821aa1a0
	goto loc_821AA1A0;
loc_821AA19C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_821AA1A0:
	// stw r4,180(r25)
	REX_STORE_U32(r25.u32 + 180, ctx.r4.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8229af30
	ctx.lr = 0x821AA1AC;
	sub_8229AF30(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8229e410
	ctx.lr = 0x821AA1B4;
	sub_8229E410(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-24540
	ctx.r11.s64 = ctx.r11.s64 + -24540;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// stw r11,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// bl 0x82120ac0
	ctx.lr = 0x821AA1D4;
	sub_82120AC0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8215f0f0
	ctx.lr = 0x821AA1DC;
	sub_8215F0F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821aa200
	goto loc_821AA200;
loc_821AA1E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x82120ac0
	ctx.lr = 0x821AA1F4;
	sub_82120AC0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8215f0f0
	ctx.lr = 0x821AA1FC;
	sub_8215F0F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AA200:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_821E4B78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821E4B80;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,104(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821e4bb4
	if (ctx.cr6.eq) goto loc_821E4BB4;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E4BAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
loc_821E4BB4:
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r28,6040(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,96(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r4,-15304(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + -15304);
	// bl 0x82120600
	ctx.lr = 0x821E4BCC;
	sub_82120600(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E4BE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821E4BFC;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e4c14
	if (ctx.cr0.eq) goto loc_821E4C14;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x821e4ca0
	ctx.lr = 0x821E4C10;
	sub_821E4CA0(ctx, base);
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
loc_821E4C14:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821E9C80) {
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
	ctx.lr = 0x821E9C88;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x821e9cfc
	if (ctx.cr0.lt) goto loc_821E9CFC;
	// mulli r31,r30,48
	r31.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(48));
loc_821E9CB4:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x821e9cf0
	if (!ctx.cr6.lt) goto loc_821E9CF0;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// blt cr6,0x821e9cf0
	if (ctx.cr6.lt) goto loc_821E9CF0;
	// lwz r3,40(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 40);
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E9CF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E9CF0:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,-48
	r31.s64 = r31.s64 + -48;
	// bge 0x821e9cb4
	if (!ctx.cr0.lt) goto loc_821E9CB4;
loc_821E9CFC:
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

DEFINE_REX_FUNC(sub_821EE0F0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,32(r3)
	REX_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EEED8) {
	REX_FUNC_PROLOGUE();
	// lis r3,22593
	ctx.r3.s64 = 1480654848;
	// ori r3,r3,2410
	ctx.r3.u64 = ctx.r3.u64 | 2410;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EEFB8) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,16276
	ctx.r5.s64 = ctx.r11.s64 + 16276;
	// bl 0x82121610
	ctx.lr = 0x821EEFD4;
	sub_82121610(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x821eefe8
	if (!ctx.cr6.lt) goto loc_821EEFE8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_821EEFE8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120600
	ctx.lr = 0x821EEFF0;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,6100(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6100);
	// bl 0x821680e8
	ctx.lr = 0x821EF000;
	sub_821680E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821EF010;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821EF020;
	sub_82120AC0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F5210) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821F5218;
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
	// beq cr6,0x821f524c
	if (ctx.cr6.eq) goto loc_821F524C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,22816
	ctx.r4.s64 = ctx.r11.s64 + 22816;
	// addi r3,r10,22864
	ctx.r3.s64 = ctx.r10.s64 + 22864;
	// li r5,302
	ctx.r5.s64 = 302;
	// bl 0x821231d0
	ctx.lr = 0x821F524C;
	sub_821231D0(ctx, base);
loc_821F524C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x821F5260;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23184
	ctx.r4.s64 = ctx.r11.s64 + 23184;
	// bl 0x8215f338
	ctx.lr = 0x821F526C;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x821f6130
	ctx.lr = 0x821F5278;
	sub_821F6130(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821F6C58) {
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
	ctx.lr = 0x821F6C68;
	// lwz r11,212(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f1,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// beq 0x821f6dcc
	if (ctx.cr0.eq) goto loc_821F6DCC;
	// lwz r11,212(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 212);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f6dcc
	if (ctx.cr0.eq) goto loc_821F6DCC;
	// lfs f0,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,72(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,72(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,64(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f12,64(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,336(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 336);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f8,336(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 336);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// lfs f3,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// lfs f31,68(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 68);
	f31.f64 = double(temp.f32);
	// lfs f7,340(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 340);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f31,f3,f31
	f31.f64 = double(float(ctx.f3.f64 - f31.f64));
	// lfs f6,340(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 340);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f11,f9
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f30,68(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 68);
	f30.f64 = double(temp.f32);
	// fmuls f2,f10,f8
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lfs f12,344(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 344);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,344(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 344);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f3,f3,f30
	ctx.f3.f64 = double(float(ctx.f3.f64 - f30.f64));
	// fmuls f28,f7,f13
	f28.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f30,324(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 324);
	f30.f64 = double(temp.f32);
	// fmuls f26,f6,f0
	f26.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f29,324(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 324);
	f29.f64 = double(temp.f32);
	// lfs f27,328(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 328);
	f27.f64 = double(temp.f32);
	// lfs f25,328(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 328);
	f25.f64 = double(temp.f32);
	// lfs f24,320(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 320);
	f24.f64 = double(temp.f32);
	// fmuls f19,f31,f12
	f19.f64 = double(float(f31.f64 * ctx.f12.f64));
	// lfs f23,320(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 320);
	f23.f64 = double(temp.f32);
	// lfs f22,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	f22.f64 = double(temp.f32);
	// fmsubs f4,f12,f13,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, -ctx.f4.f64)));
	// lfs f21,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	f21.f64 = double(temp.f32);
	// fmsubs f2,f5,f0,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, -ctx.f2.f64)));
	// lfs f20,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	f20.f64 = double(temp.f32);
	// fmuls f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// lfs f13,700(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 700);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f9,f31,f9,f28
	ctx.f9.f64 = double(float(std::fma(f31.f64, ctx.f9.f64, -f28.f64)));
	// lfs f12,1160(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1160);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f8,f3,f8,f26
	ctx.f8.f64 = double(float(std::fma(ctx.f3.f64, ctx.f8.f64, -f26.f64)));
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f11,f11,f7,f19
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, -f19.f64)));
	// fadds f4,f4,f30
	ctx.f4.f64 = double(float(ctx.f4.f64 + f30.f64));
	// fadds f3,f2,f29
	ctx.f3.f64 = double(float(ctx.f2.f64 + f29.f64));
	// fmsubs f10,f10,f6,f5
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f6.f64, -ctx.f5.f64)));
	// fadds f9,f9,f27
	ctx.f9.f64 = double(float(ctx.f9.f64 + f27.f64));
	// fadds f8,f8,f25
	ctx.f8.f64 = double(float(ctx.f8.f64 + f25.f64));
	// fadds f11,f11,f24
	ctx.f11.f64 = double(float(ctx.f11.f64 + f24.f64));
	// fsubs f7,f3,f4
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fadds f10,f10,f23
	ctx.f10.f64 = double(float(ctx.f10.f64 + f23.f64));
	// fsubs f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmuls f8,f22,f7
	ctx.f8.f64 = double(float(f22.f64 * ctx.f7.f64));
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmadds f10,f21,f9,f8
	ctx.f10.f64 = double(float(std::fma(f21.f64, ctx.f9.f64, ctx.f8.f64)));
	// fnmadds f11,f11,f20,f10
	ctx.f11.f64 = double(float(-std::fma(ctx.f11.f64, f20.f64, ctx.f10.f64)));
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
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
	// lfsx f12,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
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
	// lfsx f13,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f1,f13,f1,f0
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
loc_821F6DCC:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2cd0
	ctx.lr = 0x821F6DD4;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82208508) {
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
	ctx.lr = 0x8220852C;
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
	ctx.lr = 0x82208544;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6320(r10)
	REX_STORE_U32(ctx.r10.u32 + 6320, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8220AC98) {
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
	// lwz r4,128(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// addi r11,r11,32656
	ctx.r11.s64 = ctx.r11.s64 + 32656;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220ACD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220ACF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x8220ACF8;
	sub_82178388(ctx, base);
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

DEFINE_REX_FUNC(sub_8220DF38) {
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
	// addi r3,r3,260
	ctx.r3.s64 = ctx.r3.s64 + 260;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x8220DF64;
	sub_82120AC0(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// bl 0x822e6f28
	ctx.lr = 0x8220DF6C;
	sub_822E6F28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x8220DF74;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220df84
	if (ctx.cr0.eq) goto loc_8220DF84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8220DF84;
	sub_8269CE98(ctx, base);
loc_8220DF84:
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

DEFINE_REX_FUNC(sub_82211DD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82211DE0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// bl 0x8216b740
	ctx.lr = 0x82211DFC;
	sub_8216B740(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b740
	ctx.lr = 0x82211E08;
	sub_8216B740(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// addi r11,r29,480
	ctx.r11.s64 = r29.s64 + 480;
loc_82211E18:
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82211e30
	if (!ctx.cr6.eq) goto loc_82211E30;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82211e44
	if (ctx.cr6.eq) goto loc_82211E44;
loc_82211E30:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x82211e18
	if (ctx.cr6.lt) goto loc_82211E18;
	// b 0x82211eb0
	goto loc_82211EB0;
loc_82211E44:
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215fbf8
	ctx.lr = 0x82211E58;
	sub_8215FBF8(ctx, base);
	// mulli r11,r31,60
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(60));
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,520(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 520);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211E7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82211E80:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82211e80
	if (!ctx.cr6.eq) goto loc_82211E80;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r31,492
	ctx.r3.s64 = r31.s64 + 492;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82120c08
	ctx.lr = 0x82211EA8;
	sub_82120C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x82211EB0;
	sub_8215F0F0(ctx, base);
loc_82211EB0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8221AC38) {
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
	ctx.lr = 0x8221AC40;
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r3,800
	r31.s64 = ctx.r3.s64 + 800;
	// addi r28,r11,-17296
	r28.s64 = ctx.r11.s64 + -17296;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x8221AC60;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8221AC64;
	sub_8215FA30(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r11,792(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 792);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r27,r10,22808
	r27.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x8221AC80;
	sub_8215F338(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8221AC88;
	sub_8215F2D0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26344
	ctx.r4.s64 = ctx.r11.s64 + -26344;
	// bl 0x8215f338
	ctx.lr = 0x8221AC9C;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8221ACA0;
	sub_8215F990(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x8221ACB0;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8221ACB4;
	sub_8215FA30(ctx, base);
	// lwz r11,792(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 792);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x8221ACC8;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8221ACD0;
	sub_8215F2D0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,20272
	ctx.r4.s64 = ctx.r11.s64 + 20272;
	// bl 0x8215f338
	ctx.lr = 0x8221ACDC;
	sub_8215F338(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8221ACE4;
	sub_8215F1B0(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r26,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r26.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r11,23052
	r31.s64 = ctx.r11.s64 + 23052;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x8221AD04;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r27,r11,-26856
	r27.s64 = ctx.r11.s64 + -26856;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8221ad30
	if (!ctx.cr6.eq) goto loc_8221AD30;
	// lwz r5,8(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221ad34
	if (ctx.cr6.lt) goto loc_8221AD34;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x8221ad34
	goto loc_8221AD34;
loc_8221AD30:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
loc_8221AD34:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8221AD38:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221ad38
	if (!ctx.cr6.eq) goto loc_8221AD38;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8216b6a8
	ctx.lr = 0x8221AD64;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-26456
	ctx.r4.s64 = ctx.r11.s64 + -26456;
	// bl 0x82120600
	ctx.lr = 0x8221AD74;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x8221AD80;
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
	ctx.lr = 0x8221ADA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8221ADB0;
	sub_82120AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8221be80
	ctx.lr = 0x8221ADB8;
	sub_8221BE80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221ae4c
	if (ctx.cr0.eq) goto loc_8221AE4C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-26304
	ctx.r4.s64 = ctx.r11.s64 + -26304;
	// bl 0x8221af88
	ctx.lr = 0x8221ADD0;
	sub_8221AF88(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-26288
	ctx.r4.s64 = ctx.r11.s64 + -26288;
	// bl 0x8215f338
	ctx.lr = 0x8221ADE0;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8221ae04
	if (!ctx.cr6.eq) goto loc_8221AE04;
	// lwz r5,8(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221ae08
	if (ctx.cr6.lt) goto loc_8221AE08;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x8221ae08
	goto loc_8221AE08;
loc_8221AE04:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
loc_8221AE08:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r26,544(r1)
	REX_STORE_U32(ctx.r1.u32 + 544, r26.u32);
loc_8221AE10:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221ae10
	if (!ctx.cr6.eq) goto loc_8221AE10;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8216b6a8
	ctx.lr = 0x8221AE3C;
	sub_8216B6A8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r11,31540
	ctx.r3.s64 = ctx.r11.s64 + 31540;
	// b 0x8221af7c
	goto loc_8221AF7C;
loc_8221AE4C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x8221AE58;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8221ae7c
	if (!ctx.cr6.eq) goto loc_8221AE7C;
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221ae80
	if (ctx.cr6.lt) goto loc_8221AE80;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x8221ae80
	goto loc_8221AE80;
loc_8221AE7C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_8221AE80:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8221af88
	ctx.lr = 0x8221AE88;
	sub_8221AF88(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-26268
	ctx.r4.s64 = ctx.r11.s64 + -26268;
	// bl 0x8215f338
	ctx.lr = 0x8221AE98;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8221aebc
	if (!ctx.cr6.eq) goto loc_8221AEBC;
	// lwz r5,8(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221aec0
	if (ctx.cr6.lt) goto loc_8221AEC0;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x8221aec0
	goto loc_8221AEC0;
loc_8221AEBC:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
loc_8221AEC0:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r26,400(r1)
	REX_STORE_U32(ctx.r1.u32 + 400, r26.u32);
loc_8221AEC8:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221aec8
	if (!ctx.cr6.eq) goto loc_8221AEC8;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8216b6a8
	ctx.lr = 0x8221AEF4;
	sub_8216B6A8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r11,31540
	ctx.r3.s64 = ctx.r11.s64 + 31540;
	// bl 0x8216bc98
	ctx.lr = 0x8221AF04;
	sub_8216BC98(ctx, base);
	// stw r26,688(r1)
	REX_STORE_U32(ctx.r1.u32 + 688, r26.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-26656
	ctx.r4.s64 = ctx.r11.s64 + -26656;
	// bl 0x8215f338
	ctx.lr = 0x8221AF18;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8221af3c
	if (!ctx.cr6.eq) goto loc_8221AF3C;
	// lwz r5,8(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221af40
	if (ctx.cr6.lt) goto loc_8221AF40;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x8221af40
	goto loc_8221AF40;
loc_8221AF3C:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
loc_8221AF40:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8221AF44:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221af44
	if (!ctx.cr6.eq) goto loc_8221AF44;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8216b6a8
	ctx.lr = 0x8221AF70;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// addi r3,r11,-26644
	ctx.r3.s64 = ctx.r11.s64 + -26644;
loc_8221AF7C:
	// bl 0x8216bc98
	ctx.lr = 0x8221AF80;
	sub_8216BC98(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82231A18) {
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
	ctx.lr = 0x82231A20;
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,176(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// li r27,0
	r27.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r29,r27
	r29.u64 = r27.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82231a6c
	if (ctx.cr6.eq) goto loc_82231A6C;
	// lwz r3,6288(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6288);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82231A68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82231A6C:
	// lwz r4,180(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82231a90
	if (ctx.cr6.eq) goto loc_82231A90;
	// lwz r3,6288(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6288);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82231A8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82231A90:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82231aa8
	if (ctx.cr6.eq) goto loc_82231AA8;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
	// b 0x82231aac
	goto loc_82231AAC;
loc_82231AA8:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82231AAC:
	// stfs f13,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// addi r30,r31,184
	r30.s64 = r31.s64 + 184;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82231ac0
	if (ctx.cr6.eq) goto loc_82231AC0;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
loc_82231AC0:
	// addi r31,r31,188
	r31.s64 = r31.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// bl 0x82231b48
	ctx.lr = 0x82231AD4;
	sub_82231B48(ctx, base);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82231af8
	if (ctx.cr6.eq) goto loc_82231AF8;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,192(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 192, temp.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
loc_82231AF8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82231b14
	if (ctx.cr6.eq) goto loc_82231B14;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f0,192(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 192, temp.u32);
	// stwx r28,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r28.u32);
loc_82231B14:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,6292(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6292);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82231B34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8223BB38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8223BB40;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3884(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3884);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r31,320(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
loc_8223BB54:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8223bb80
	if (ctx.cr6.eq) goto loc_8223BB80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8222f9c8
	ctx.lr = 0x8223BB68;
	sub_8222F9C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8222f608
	ctx.lr = 0x8223BB70;
	sub_8222F608(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// blt cr6,0x8223bb54
	if (ctx.cr6.lt) goto loc_8223BB54;
loc_8223BB80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8223E3E8) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca4
	ctx.lr = 0x8223E3F0;
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f29.u64);
	// stfd f30,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,6284(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E41C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// li r27,0
	r27.s64 = 0;
	// ble 0x8223e5c0
	if (!ctx.cr0.gt) goto loc_8223E5C0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r7,r11,16592
	ctx.r7.s64 = ctx.r11.s64 + 16592;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lfs f29,15048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	f29.f64 = double(temp.f32);
	// addi r26,r11,1624
	r26.s64 = ctx.r11.s64 + 1624;
	// lfs f31,812(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 812);
	f31.f64 = double(temp.f32);
	// addi r25,r10,16536
	r25.s64 = ctx.r10.s64 + 16536;
	// lfs f30,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	f30.f64 = double(temp.f32);
	// addi r24,r9,16492
	r24.s64 = ctx.r9.s64 + 16492;
loc_8223E458:
	// lwz r3,6284(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6284);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E470;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6284(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6284);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r28,744(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 744);
	// lwz r11,84(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,3848(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3848);
	// mulli r11,r3,320
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(320));
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 224);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8223e55c
	if (!ctx.cr0.eq) goto loc_8223E55C;
	// lbz r11,113(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 113);
	// li r5,16
	ctx.r5.s64 = 16;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8223e4c0
	if (ctx.cr0.eq) goto loc_8223E4C0;
	// li r5,22
	ctx.r5.s64 = 22;
loc_8223E4C0:
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// ble cr6,0x8223e4d0
	if (!ctx.cr6.gt) goto loc_8223E4D0;
	// ori r5,r5,2048
	ctx.r5.u64 = ctx.r5.u64 | 2048;
loc_8223E4D0:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,116(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 116);
	// lfs f13,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lfs f12,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,72
	ctx.r11.s64 = r31.s64 + 72;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// blt cr6,0x8223e514
	if (ctx.cr6.lt) goto loc_8223E514;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8223E514:
	// lwz r10,152(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 152);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r11,r31,132
	ctx.r11.s64 = r31.s64 + 132;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8223e52c
	if (ctx.cr6.lt) goto loc_8223E52C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8223E52C:
	// lwz r10,180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 180);
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r11,r31,160
	ctx.r11.s64 = r31.s64 + 160;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8223e544
	if (ctx.cr6.lt) goto loc_8223E544;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8223E544:
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227a1a8
	ctx.lr = 0x8223E558;
	sub_8227A1A8(ctx, base);
	// b 0x8223e5b4
	goto loc_8223E5B4;
loc_8223E55C:
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// blt cr6,0x8223e5b4
	if (ctx.cr6.lt) goto loc_8223E5B4;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8223e5b4
	if (!ctx.cr6.lt) goto loc_8223E5B4;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x8223E57C;
	sub_8215F338(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8215f338
	ctx.lr = 0x8223E584;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8223e598
	if (!ctx.cr6.eq) goto loc_8223E598;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x8223e59c
	goto loc_8223E59C;
loc_8223E598:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8223E59C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223e5b4
	if (!ctx.cr0.eq) goto loc_8223E5B4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,304(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227aaf0
	ctx.lr = 0x8223E5B4;
	sub_8227AAF0(ctx, base);
loc_8223E5B4:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(r27.s32, r23.s32, ctx.xer);
	// blt cr6,0x8223e458
	if (ctx.cr6.lt) goto loc_8223E458;
loc_8223E5C0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8224EF18) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb0
	ctx.lr = 0x8224EF20;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2c8c
	ctx.lr = 0x8224EF28;
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8224b620
	ctx.lr = 0x8224EF34;
	sub_8224B620(ctx, base);
	// lwz r3,200(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 200);
	// bl 0x821e9ec0
	ctx.lr = 0x8224EF3C;
	sub_821E9EC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82120ac0
	ctx.lr = 0x8224EF50;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x8224EF60;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r27,r11,16592
	r27.s64 = ctx.r11.s64 + 16592;
	// addi r4,r10,13968
	ctx.r4.s64 = ctx.r10.s64 + 13968;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,12(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x8215f338
	ctx.lr = 0x8224EF80;
	sub_8215F338(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x8215fba8
	ctx.lr = 0x8224EF88;
	sub_8215FBA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224efa8
	if (!ctx.cr0.eq) goto loc_8224EFA8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-13532
	ctx.r4.s64 = ctx.r11.s64 + -13532;
	// addi r3,r10,-13184
	ctx.r3.s64 = ctx.r10.s64 + -13184;
	// li r5,1598
	ctx.r5.s64 = 1598;
	// bl 0x821231d0
	ctx.lr = 0x8224EFA8;
	sub_821231D0(ctx, base);
loc_8224EFA8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,32412
	ctx.r4.s64 = ctx.r11.s64 + 32412;
	// bl 0x8215f338
	ctx.lr = 0x8224EFB8;
	sub_8215F338(ctx, base);
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// bl 0x8215fba8
	ctx.lr = 0x8224EFC0;
	sub_8215FBA8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,23052
	ctx.r4.s64 = ctx.r11.s64 + 23052;
	// bl 0x8215f338
	ctx.lr = 0x8224EFD0;
	sub_8215F338(ctx, base);
	// addi r4,r31,236
	ctx.r4.s64 = r31.s64 + 236;
	// bl 0x8215fba8
	ctx.lr = 0x8224EFD8;
	sub_8215FBA8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,14048
	ctx.r4.s64 = ctx.r11.s64 + 14048;
	// bl 0x8215f338
	ctx.lr = 0x8224EFE8;
	sub_8215F338(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x8215fba8
	ctx.lr = 0x8224EFF0;
	sub_8215FBA8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-17504
	ctx.r4.s64 = ctx.r11.s64 + -17504;
	// bl 0x8215f338
	ctx.lr = 0x8224F000;
	sub_8215F338(ctx, base);
	// addi r26,r31,264
	r26.s64 = r31.s64 + 264;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215fb50
	ctx.lr = 0x8224F00C;
	sub_8215FB50(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-13128
	ctx.r4.s64 = ctx.r11.s64 + -13128;
	// bl 0x8215f338
	ctx.lr = 0x8224F01C;
	sub_8215F338(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x8215fb50
	ctx.lr = 0x8224F024;
	sub_8215FB50(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-13112
	ctx.r4.s64 = ctx.r11.s64 + -13112;
	// bl 0x8215f338
	ctx.lr = 0x8224F034;
	sub_8215F338(ctx, base);
	// addi r4,r31,268
	ctx.r4.s64 = r31.s64 + 268;
	// bl 0x8215fb50
	ctx.lr = 0x8224F03C;
	sub_8215FB50(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-13096
	ctx.r4.s64 = ctx.r11.s64 + -13096;
	// bl 0x8215f338
	ctx.lr = 0x8224F04C;
	sub_8215F338(ctx, base);
	// addi r4,r31,272
	ctx.r4.s64 = r31.s64 + 272;
	// bl 0x8215fb50
	ctx.lr = 0x8224F054;
	sub_8215FB50(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-13076
	ctx.r4.s64 = ctx.r11.s64 + -13076;
	// bl 0x8215f338
	ctx.lr = 0x8224F064;
	sub_8215F338(ctx, base);
	// addi r4,r31,276
	ctx.r4.s64 = r31.s64 + 276;
	// bl 0x8215fb50
	ctx.lr = 0x8224F06C;
	sub_8215FB50(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-13056
	ctx.r4.s64 = ctx.r11.s64 + -13056;
	// bl 0x8215f338
	ctx.lr = 0x8224F07C;
	sub_8215F338(ctx, base);
	// addi r4,r31,280
	ctx.r4.s64 = r31.s64 + 280;
	// bl 0x8215fb50
	ctx.lr = 0x8224F084;
	sub_8215FB50(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-13040
	ctx.r4.s64 = ctx.r11.s64 + -13040;
	// bl 0x8215f338
	ctx.lr = 0x8224F094;
	sub_8215F338(ctx, base);
	// addi r4,r31,284
	ctx.r4.s64 = r31.s64 + 284;
	// bl 0x8215fb50
	ctx.lr = 0x8224F09C;
	sub_8215FB50(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-13024
	ctx.r4.s64 = ctx.r11.s64 + -13024;
	// bl 0x8215f338
	ctx.lr = 0x8224F0AC;
	sub_8215F338(ctx, base);
	// addi r4,r31,288
	ctx.r4.s64 = r31.s64 + 288;
	// bl 0x8215fb50
	ctx.lr = 0x8224F0B4;
	sub_8215FB50(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-23796
	ctx.r4.s64 = ctx.r11.s64 + -23796;
	// bl 0x8215f338
	ctx.lr = 0x8224F0C4;
	sub_8215F338(ctx, base);
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r10,-13316
	ctx.r4.s64 = ctx.r10.s64 + -13316;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821fd140
	ctx.lr = 0x8224F0DC;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq 0x8224f0f4
	if (ctx.cr0.eq) goto loc_8224F0F4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-23184
	ctx.r4.s64 = ctx.r11.s64 + -23184;
	// b 0x8224f0fc
	goto loc_8224F0FC;
loc_8224F0F4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,22752
	ctx.r4.s64 = ctx.r11.s64 + 22752;
loc_8224F0FC:
	// bl 0x8215f338
	ctx.lr = 0x8224F100;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,-12996
	ctx.r4.s64 = ctx.r11.s64 + -12996;
	// bl 0x8215f338
	ctx.lr = 0x8224F110;
	sub_8215F338(ctx, base);
	// addi r4,r31,292
	ctx.r4.s64 = r31.s64 + 292;
	// bl 0x8215fba8
	ctx.lr = 0x8224F118;
	sub_8215FBA8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14608
	ctx.r4.s64 = ctx.r11.s64 + -14608;
	// bl 0x8215f338
	ctx.lr = 0x8224F128;
	sub_8215F338(ctx, base);
	// addi r4,r31,320
	ctx.r4.s64 = r31.s64 + 320;
	// bl 0x8215fba8
	ctx.lr = 0x8224F130;
	sub_8215FBA8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-12980
	ctx.r4.s64 = ctx.r11.s64 + -12980;
	// bl 0x8215f338
	ctx.lr = 0x8224F140;
	sub_8215F338(ctx, base);
	// addi r4,r31,348
	ctx.r4.s64 = r31.s64 + 348;
	// bl 0x8215fba8
	ctx.lr = 0x8224F148;
	sub_8215FBA8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-13196
	ctx.r4.s64 = ctx.r11.s64 + -13196;
	// bl 0x8215f338
	ctx.lr = 0x8224F158;
	sub_8215F338(ctx, base);
	// addi r4,r31,376
	ctx.r4.s64 = r31.s64 + 376;
	// bl 0x8215fba8
	ctx.lr = 0x8224F160;
	sub_8215FBA8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-13284
	ctx.r4.s64 = ctx.r11.s64 + -13284;
	// bl 0x8215f338
	ctx.lr = 0x8224F170;
	sub_8215F338(ctx, base);
	// addi r4,r31,404
	ctx.r4.s64 = r31.s64 + 404;
	// bl 0x8215fba8
	ctx.lr = 0x8224F178;
	sub_8215FBA8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-13992
	ctx.r4.s64 = ctx.r11.s64 + -13992;
	// bl 0x8215f338
	ctx.lr = 0x8224F188;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224f204
	if (ctx.cr6.eq) goto loc_8224F204;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-12968
	ctx.r4.s64 = ctx.r11.s64 + -12968;
	// bl 0x8215f338
	ctx.lr = 0x8224F1A4;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8224f1b8
	if (!ctx.cr6.eq) goto loc_8224F1B8;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x8224f1bc
	goto loc_8224F1BC;
loc_8224F1B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8224F1BC:
	// stb r11,752(r31)
	REX_STORE_U8(r31.u32 + 752, ctx.r11.u8);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-12960
	ctx.r4.s64 = ctx.r11.s64 + -12960;
	// bl 0x8215f338
	ctx.lr = 0x8224F1D0;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8224f1e4
	if (!ctx.cr6.eq) goto loc_8224F1E4;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x8224f1e8
	goto loc_8224F1E8;
loc_8224F1E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8224F1E8:
	// stb r11,753(r31)
	REX_STORE_U8(r31.u32 + 753, ctx.r11.u8);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-12952
	ctx.r4.s64 = ctx.r11.s64 + -12952;
	// bl 0x8215f338
	ctx.lr = 0x8224F1FC;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8224F200;
	sub_8215F990(ctx, base);
	// stw r3,756(r31)
	REX_STORE_U32(r31.u32 + 756, ctx.r3.u32);
loc_8224F204:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r11,-12940
	r29.s64 = ctx.r11.s64 + -12940;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x8224F218;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-16604
	ctx.r4.s64 = ctx.r11.s64 + -16604;
	// bl 0x8215f338
	ctx.lr = 0x8224F224;
	sub_8215F338(ctx, base);
	// addi r4,r31,720
	ctx.r4.s64 = r31.s64 + 720;
	// bl 0x82166f38
	ctx.lr = 0x8224F22C;
	sub_82166F38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x8224F238;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-20636
	ctx.r4.s64 = ctx.r11.s64 + -20636;
	// bl 0x8215f338
	ctx.lr = 0x8224F244;
	sub_8215F338(ctx, base);
	// addi r4,r31,736
	ctx.r4.s64 = r31.s64 + 736;
	// bl 0x8215fb50
	ctx.lr = 0x8224F24C;
	sub_8215FB50(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-28692
	ctx.r4.s64 = ctx.r11.s64 + -28692;
	// bl 0x8215f338
	ctx.lr = 0x8224F25C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8224F260;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,928(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 928);
	// bl 0x821e79a0
	ctx.lr = 0x8224F26C;
	sub_821E79A0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,13544
	ctx.r4.s64 = ctx.r11.s64 + 13544;
	// bl 0x8215f338
	ctx.lr = 0x8224F27C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8224F280;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,932(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 932);
	// bl 0x821e79a0
	ctx.lr = 0x8224F28C;
	sub_821E79A0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,13564
	ctx.r4.s64 = ctx.r11.s64 + 13564;
	// bl 0x8215f338
	ctx.lr = 0x8224F29C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8224F2A0;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,936(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 936);
	// bl 0x821d5b38
	ctx.lr = 0x8224F2AC;
	sub_821D5B38(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-12924
	ctx.r4.s64 = ctx.r11.s64 + -12924;
	// bl 0x8215f338
	ctx.lr = 0x8224F2BC;
	sub_8215F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,472(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 472);
	// bl 0x8227fbe8
	ctx.lr = 0x8224F2C8;
	sub_8227FBE8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-12916
	ctx.r4.s64 = ctx.r11.s64 + -12916;
	// bl 0x8215f338
	ctx.lr = 0x8224F2D8;
	sub_8215F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,476(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 476);
	// bl 0x82281fd8
	ctx.lr = 0x8224F2E4;
	sub_82281FD8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-12908
	ctx.r4.s64 = ctx.r11.s64 + -12908;
	// bl 0x8215f338
	ctx.lr = 0x8224F2F4;
	sub_8215F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,480(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 480);
	// bl 0x82283868
	ctx.lr = 0x8224F300;
	sub_82283868(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-17168
	ctx.r4.s64 = ctx.r11.s64 + -17168;
	// bl 0x8215f338
	ctx.lr = 0x8224F310;
	sub_8215F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 484);
	// bl 0x82284200
	ctx.lr = 0x8224F31C;
	sub_82284200(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-12896
	ctx.r4.s64 = ctx.r11.s64 + -12896;
	// bl 0x8215f338
	ctx.lr = 0x8224F32C;
	sub_8215F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,488(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 488);
	// bl 0x82285760
	ctx.lr = 0x8224F338;
	sub_82285760(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-12888
	ctx.r4.s64 = ctx.r11.s64 + -12888;
	// bl 0x8215f338
	ctx.lr = 0x8224F348;
	sub_8215F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,464(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 464);
	// bl 0x82275030
	ctx.lr = 0x8224F354;
	sub_82275030(ctx, base);
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// lwz r3,204(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8224f378
	if (ctx.cr6.eq) goto loc_8224F378;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224F378;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224F378:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lfs f21,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f21.f64 = double(temp.f32);
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// stfs f21,80(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// stfs f21,84(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stfs f21,88(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r29,0(r10)
	r29.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r4,-15304(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + -15304);
	// lwz r28,6040(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// std r5,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r5.u64);
	// std r29,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, r29.u64);
	// std r9,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// std r10,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// bl 0x82120600
	ctx.lr = 0x8224F3D4;
	sub_82120600(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224F3F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82120ac0
	ctx.lr = 0x8224F404;
	sub_82120AC0(ctx, base);
	// lfs f31,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	f31.f64 = double(temp.f32);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224f50c
	if (ctx.cr0.eq) goto loc_8224F50C;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x821e4ca0
	ctx.lr = 0x8224F41C;
	sub_821E4CA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// stw r11,940(r31)
	REX_STORE_U32(r31.u32 + 940, ctx.r11.u32);
	// stw r11,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r11.u32);
	// bl 0x822c1a70
	ctx.lr = 0x8224F430;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224f444
	if (ctx.cr0.eq) goto loc_8224F444;
	// addi r4,r31,496
	ctx.r4.s64 = r31.s64 + 496;
	// bl 0x822a50b0
	ctx.lr = 0x8224F440;
	sub_822A50B0(ctx, base);
	// b 0x8224f448
	goto loc_8224F448;
loc_8224F444:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224F448:
	// stw r3,944(r31)
	REX_STORE_U32(r31.u32 + 944, ctx.r3.u32);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8224fb98
	ctx.lr = 0x8224F454;
	sub_8224FB98(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,944(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 944);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224F470;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f13,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lfs f12,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// fadds f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f10,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// fadds f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f9,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// fadds f6,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r11,r31,576
	ctx.r11.s64 = r31.s64 + 576;
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// std r5,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
	// fmuls f0,f8,f31
	ctx.f0.f64 = double(float(ctx.f8.f64 * f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f7,f31
	ctx.f0.f64 = double(float(ctx.f7.f64 * f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f6,f31
	ctx.f0.f64 = double(float(ctx.f6.f64 * f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// std r5,576(r31)
	REX_STORE_U64(r31.u32 + 576, ctx.r5.u64);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// std r9,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// std r10,584(r31)
	REX_STORE_U64(r31.u32 + 584, ctx.r10.u64);
loc_8224F50C:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822c1a70
	ctx.lr = 0x8224F514;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224f528
	if (ctx.cr0.eq) goto loc_8224F528;
	// bl 0x822a5488
	ctx.lr = 0x8224F520;
	sub_822A5488(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x8224f52c
	goto loc_8224F52C;
loc_8224F528:
	// li r28,0
	r28.s64 = 0;
loc_8224F52C:
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82126320
	ctx.lr = 0x8224F534;
	sub_82126320(ctx, base);
	// lfs f0,576(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,580(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,584(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 584);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8216cfa0
	ctx.lr = 0x8224F564;
	sub_8216CFA0(ctx, base);
	// lwz r30,944(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 944);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8224f58c
	if (ctx.cr6.eq) goto loc_8224F58C;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x821c3ec8
	ctx.lr = 0x8224F57C;
	sub_821C3EC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822a56b0
	ctx.lr = 0x8224F58C;
	sub_822A56B0(ctx, base);
loc_8224F58C:
	// lfs f22,596(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 596);
	f22.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f23,172(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 172);
	f23.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f22,100(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r30,r31,544
	r30.s64 = r31.s64 + 544;
	// stfs f22,96(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f22,104(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// stfs f23,88(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f23,84(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stfs f23,80(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,552(r31)
	REX_STORE_U64(r31.u32 + 552, ctx.r8.u64);
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,568(r31)
	REX_STORE_U64(r31.u32 + 568, ctx.r9.u64);
	// std r11,560(r31)
	REX_STORE_U64(r31.u32 + 560, ctx.r11.u64);
	// std r10,544(r31)
	REX_STORE_U64(r31.u32 + 544, ctx.r10.u64);
	// bl 0x82176218
	ctx.lr = 0x8224F5EC;
	sub_82176218(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82176218
	ctx.lr = 0x8224F5FC;
	sub_82176218(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,192(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8224f610
	if (!ctx.cr6.lt) goto loc_8224F610;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_8224F610:
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r29,468(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 468);
	// lwz r3,6164(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6164);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224F62C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f29,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	f29.f64 = double(temp.f32);
	// stb r3,712(r29)
	REX_STORE_U8(r29.u32 + 712, ctx.r3.u8);
	// lfs f28,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	f28.f64 = double(temp.f32);
	// fsubs f30,f29,f28
	f30.f64 = double(float(f29.f64 - f28.f64));
	// lfs f27,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	f27.f64 = double(temp.f32);
	// lfs f26,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	f26.f64 = double(temp.f32);
	// lfs f25,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	f25.f64 = double(temp.f32);
	// fsubs f11,f27,f26
	ctx.f11.f64 = double(float(f27.f64 - f26.f64));
	// lfs f24,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	f24.f64 = double(temp.f32);
	// lfs f12,920(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 920);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f25,f24
	ctx.f0.f64 = double(float(f25.f64 - f24.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// fcmpu cr6,f30,f12
	ctx.cr6.compare(f30.f64, ctx.f12.f64);
	// bge cr6,0x8224f71c
	if (!ctx.cr6.lt) goto loc_8224F71C;
	// stfs f23,96(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,472(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 472);
	// stfs f23,104(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f23,100(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f22,112(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// stfs f22,116(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// lwz r3,436(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 436);
	// stfs f22,120(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// ld r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r11,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// std r6,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// bl 0x821e7310
	ctx.lr = 0x8224F6C8;
	sub_821E7310(ctx, base);
	// lfs f0,272(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f13,256(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,276(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,260(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,280(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f11,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
loc_8224F71C:
	// fmuls f10,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f1,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f0,936(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 936);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// stfs f21,92(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,468(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 468);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fadds f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fmuls f11,f9,f1
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822c0b70
	ctx.lr = 0x8224F780;
	sub_822C0B70(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,468(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 468);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224F798;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,6164(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 6164);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224F7B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stfs f21,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,468(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 468);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822c07b8
	ctx.lr = 0x8224F7DC;
	sub_822C07B8(ctx, base);
	// fadds f0,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f29.f64 + f28.f64));
	// fadds f13,f27,f26
	ctx.f13.f64 = double(float(f27.f64 + f26.f64));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// fadds f12,f25,f24
	ctx.f12.f64 = double(float(f25.f64 + f24.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f11,f30,f31
	ctx.f11.f64 = double(float(f30.f64 * f31.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// stfs f11,48(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// std r9,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// std r10,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// bl 0x8224f860
	ctx.lr = 0x8224F830;
	sub_8224F860(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x8224F840;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82120ac0
	ctx.lr = 0x8224F850;
	sub_82120AC0(ctx, base);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2cd8
	ctx.lr = 0x8224F85C;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8228E5A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8228E5B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6060(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6060);
	// bl 0x8212e8b0
	ctx.lr = 0x8228E5C4;
	sub_8212E8B0(ctx, base);
	// lwz r4,140(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r30,0
	r30.s64 = 0;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8228e5f0
	if (ctx.cr6.eq) goto loc_8228E5F0;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E5EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,140(r31)
	REX_STORE_U32(r31.u32 + 140, r30.u32);
loc_8228E5F0:
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228e61c
	if (ctx.cr6.eq) goto loc_8228E61C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E618;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,144(r31)
	REX_STORE_U32(r31.u32 + 144, r30.u32);
loc_8228E61C:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228e648
	if (ctx.cr6.eq) goto loc_8228E648;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E644;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,148(r31)
	REX_STORE_U32(r31.u32 + 148, r30.u32);
loc_8228E648:
	// lwz r3,152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228e668
	if (ctx.cr6.eq) goto loc_8228E668;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E664;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,152(r31)
	REX_STORE_U32(r31.u32 + 152, r30.u32);
loc_8228E668:
	// lwz r4,156(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8228e680
	if (ctx.cr6.eq) goto loc_8228E680;
	// lwz r3,6060(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6060);
	// bl 0x8212eae0
	ctx.lr = 0x8228E67C;
	sub_8212EAE0(ctx, base);
	// stw r30,156(r31)
	REX_STORE_U32(r31.u32 + 156, r30.u32);
loc_8228E680:
	// lwz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8228e6a4
	if (ctx.cr6.eq) goto loc_8228E6A4;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E6A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
loc_8228E6A4:
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8228e6c8
	if (ctx.cr6.eq) goto loc_8228E6C8;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E6C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
loc_8228E6C8:
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8228e6ec
	if (ctx.cr6.eq) goto loc_8228E6EC;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E6E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
loc_8228E6EC:
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8228e710
	if (ctx.cr6.eq) goto loc_8228E710;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E70C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
loc_8228E710:
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8228e734
	if (ctx.cr6.eq) goto loc_8228E734;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E730;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
loc_8228E734:
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8228e758
	if (ctx.cr6.eq) goto loc_8228E758;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E754;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
loc_8228E758:
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8228e77c
	if (ctx.cr6.eq) goto loc_8228E77C;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E778;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
loc_8228E77C:
	// lwz r4,104(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8228e7a0
	if (ctx.cr6.eq) goto loc_8228E7A0;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E79C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,104(r31)
	REX_STORE_U32(r31.u32 + 104, r30.u32);
loc_8228E7A0:
	// addi r30,r31,104
	r30.s64 = r31.s64 + 104;
	// li r31,8
	r31.s64 = 8;
loc_8228E7A8:
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwzu r4,4(r30)
	ea = 4 + r30.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E7C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8228e7a8
	if (!ctx.cr0.eq) goto loc_8228E7A8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822A3C10) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f10,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lfs f11,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,100(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// ble cr6,0x822a3c8c
	if (!ctx.cr6.gt) goto loc_822A3C8C;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_822A3C58:
	// lfs f13,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f6,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f13,f6,f7,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, ctx.f7.f64, ctx.f13.f64)));
	// fmadds f13,f5,f8,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, ctx.f8.f64, ctx.f13.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822a3c80
	if (!ctx.cr6.gt) goto loc_822A3C80;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_822A3C80:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x822a3c58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A3C58;
loc_822A3C8C:
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f9,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A7658) {
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
	ctx.lr = 0x822A7660;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bne 0x822a7684
	if (!ctx.cr0.eq) goto loc_822A7684;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
loc_822A7684:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bne cr6,0x822a7694
	if (!ctx.cr6.eq) goto loc_822A7694;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
loc_822A7694:
	// lwz r30,204(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 204);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// ble cr6,0x822a76b0
	if (!ctx.cr6.gt) goto loc_822A76B0;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822a76b4
	if (ctx.cr6.lt) goto loc_822A76B4;
loc_822A76B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822A76B4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a7760
	if (ctx.cr0.eq) goto loc_822A7760;
	// lwz r11,204(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 204);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bge cr6,0x822a7760
	if (!ctx.cr6.lt) goto loc_822A7760;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A76E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// bl 0x822a73f8
	ctx.lr = 0x822A76FC;
	sub_822A73F8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r6,r31,48
	ctx.r6.s64 = r31.s64 + 48;
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r26,784(r11)
	REX_STORE_U32(ctx.r11.u32 + 784, r26.u32);
	// stw r27,788(r11)
	REX_STORE_U32(ctx.r11.u32 + 788, r27.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A7728;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,792(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a7760
	if (ctx.cr6.eq) goto loc_822A7760;
	// lwz r11,784(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 784);
	// lwz r10,144(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 144);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822a7754
	if (ctx.cr6.eq) goto loc_822A7754;
	// addi r5,r28,16
	ctx.r5.s64 = r28.s64 + 16;
	// addi r4,r28,80
	ctx.r4.s64 = r28.s64 + 80;
	// b 0x822a775c
	goto loc_822A775C;
loc_822A7754:
	// addi r5,r28,80
	ctx.r5.s64 = r28.s64 + 80;
	// addi r4,r28,16
	ctx.r4.s64 = r28.s64 + 16;
loc_822A775C:
	// bl 0x822ad788
	ctx.lr = 0x822A7760;
	sub_822AD788(ctx, base);
loc_822A7760:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_822B4308) {
	REX_FUNC_PROLOGUE();
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x822B4310;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2c70
	ctx.lr = 0x822B4318;
	// lwz r11,10332(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10332);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r3,10332
	r30.s64 = ctx.r3.s64 + 10332;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b4684
	if (ctx.cr6.eq) goto loc_822B4684;
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b4340
	if (ctx.cr6.eq) goto loc_822B4340;
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// stw r9,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
loc_822B4340:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b4354
	if (ctx.cr6.eq) goto loc_822B4354;
	// lwz r9,52(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// stw r9,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r9.u32);
loc_822B4354:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822b4368
	if (!ctx.cr6.eq) goto loc_822B4368;
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_822B4368:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// addi r3,r28,10324
	ctx.r3.s64 = r28.s64 + 10324;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r29,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r29.u32);
	// lwz r10,10324(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 10324);
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r10,10324(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 10324);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b4398
	if (ctx.cr6.eq) goto loc_822B4398;
	// stw r11,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
loc_822B4398:
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r6,16
	ctx.r10.s64 = ctx.r6.s64 + 16;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r27,-32243
	r27.s64 = -2113077248;
	// addi r9,r31,1
	ctx.r9.s64 = r31.s64 + 1;
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r9,r5,16
	ctx.r9.s64 = ctx.r5.s64 + 16;
	// stw r5,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
	// stw r6,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r6.u32);
	// lfs f0,15048(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stb r29,59(r11)
	REX_STORE_U8(ctx.r11.u32 + 59, r29.u8);
	// stfs f0,-196(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -196, temp.u32);
	// stw r4,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// lfs f11,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,24(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lfs f5,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f12,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r6,16592
	ctx.r6.s64 = ctx.r6.s64 + 16592;
	// lfs f7,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,20(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,-212(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -212, temp.u32);
	// fsubs f0,f8,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f11,304(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 304);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f10,f9,f5
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fmuls f9,f6,f13
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f5,f10,f7
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmsubs f0,f10,f0,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, -ctx.f9.f64)));
	// stfs f0,-204(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// fmsubs f0,f7,f13,f8
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, -ctx.f8.f64)));
	// stfs f0,-200(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// fmsubs f0,f12,f6,f5
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f6.f64, -ctx.f5.f64)));
	// stfs f0,-208(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// ld r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U64(r31.u32 + 0);
	// std r5,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// ld r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U64(r31.u32 + 8);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// std r5,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmadds f10,f13,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f10.f64)));
	// fsqrts f6,f10
	ctx.f6.f64 = double(float(sqrt(ctx.f10.f64)));
	// fcmpu cr6,f6,f11
	ctx.cr6.compare(ctx.f6.f64, ctx.f11.f64);
	// bgt cr6,0x822b4480
	if (ctx.cr6.gt) goto loc_822B4480;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_822B4480:
	// lfs f11,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// clrlwi. r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f10,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsubs f5,f9,f11
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f4,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f10,f9
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f2,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f31,f4,f2
	f31.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// fsubs f30,f1,f4
	f30.f64 = double(float(ctx.f1.f64 - ctx.f4.f64));
	// lfs f29,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	f29.f64 = double(temp.f32);
	// fsubs f28,f2,f1
	f28.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f27,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	f27.f64 = double(temp.f32);
	// lfs f26,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	f26.f64 = double(temp.f32);
	// fsubs f25,f29,f27
	f25.f64 = double(float(f29.f64 - f27.f64));
	// fsubs f24,f26,f29
	f24.f64 = double(float(f26.f64 - f29.f64));
	// lfs f7,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f23,f27,f26
	f23.f64 = double(float(f27.f64 - f26.f64));
	// fmuls f22,f13,f8
	f22.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f21,f13,f5
	f21.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmuls f20,f13,f3
	f20.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmuls f19,f0,f31
	f19.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f18,f0,f30
	f18.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fmuls f17,f0,f28
	f17.f64 = double(float(ctx.f0.f64 * f28.f64));
	// fmuls f16,f12,f25
	f16.f64 = double(float(ctx.f12.f64 * f25.f64));
	// fmuls f15,f12,f24
	f15.f64 = double(float(ctx.f12.f64 * f24.f64));
	// fmuls f14,f12,f23
	f14.f64 = double(float(ctx.f12.f64 * f23.f64));
	// fmsubs f31,f12,f31,f22
	f31.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, -f22.f64)));
	// fmsubs f30,f12,f30,f21
	f30.f64 = double(float(std::fma(ctx.f12.f64, f30.f64, -f21.f64)));
	// fmsubs f28,f12,f28,f20
	f28.f64 = double(float(std::fma(ctx.f12.f64, f28.f64, -f20.f64)));
	// fmsubs f25,f13,f25,f19
	f25.f64 = double(float(std::fma(ctx.f13.f64, f25.f64, -f19.f64)));
	// fmsubs f24,f13,f24,f18
	f24.f64 = double(float(std::fma(ctx.f13.f64, f24.f64, -f18.f64)));
	// fmsubs f23,f13,f23,f17
	f23.f64 = double(float(std::fma(ctx.f13.f64, f23.f64, -f17.f64)));
	// fmsubs f8,f0,f8,f16
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, -f16.f64)));
	// fmsubs f5,f0,f5,f15
	ctx.f5.f64 = double(float(std::fma(ctx.f0.f64, ctx.f5.f64, -f15.f64)));
	// fmsubs f3,f0,f3,f14
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, ctx.f3.f64, -f14.f64)));
	// fmuls f31,f31,f29
	f31.f64 = double(float(f31.f64 * f29.f64));
	// fmuls f30,f30,f26
	f30.f64 = double(float(f30.f64 * f26.f64));
	// fmuls f29,f28,f27
	f29.f64 = double(float(f28.f64 * f27.f64));
	// fmadds f11,f25,f11,f31
	ctx.f11.f64 = double(float(std::fma(f25.f64, ctx.f11.f64, f31.f64)));
	// fmadds f9,f24,f9,f30
	ctx.f9.f64 = double(float(std::fma(f24.f64, ctx.f9.f64, f30.f64)));
	// fmadds f10,f23,f10,f29
	ctx.f10.f64 = double(float(std::fma(f23.f64, ctx.f10.f64, f29.f64)));
	// fmadds f8,f8,f4,f11
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f4.f64, ctx.f11.f64)));
	// stfs f8,-216(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// fmadds f11,f5,f1,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f5.f64, ctx.f1.f64, ctx.f9.f64)));
	// stfs f11,-220(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// fmadds f10,f3,f2,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f3.f64, ctx.f2.f64, ctx.f10.f64)));
	// stfs f10,-224(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// beq 0x822b4554
	if (ctx.cr0.eq) goto loc_822B4554;
	// fmr f9,f6
	ctx.f9.f64 = ctx.f6.f64;
	// b 0x822b4558
	goto loc_822B4558;
loc_822B4554:
	// fmr f9,f7
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f7.f64;
loc_822B4558:
	// fcmpu cr6,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// addi r10,r1,-224
	ctx.r10.s64 = ctx.r1.s64 + -224;
	// blt cr6,0x822b4568
	if (ctx.cr6.lt) goto loc_822B4568;
	// addi r10,r1,-220
	ctx.r10.s64 = ctx.r1.s64 + -220;
loc_822B4568:
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f8
	ctx.cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// blt cr6,0x822b4578
	if (ctx.cr6.lt) goto loc_822B4578;
	// addi r10,r1,-216
	ctx.r10.s64 = ctx.r1.s64 + -216;
loc_822B4578:
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// lfs f10,1088(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1088);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// blt cr6,0x822b4594
	if (ctx.cr6.lt) goto loc_822B4594;
	// lfs f11,-212(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -212);
	ctx.f11.f64 = double(temp.f32);
loc_822B4594:
	// stfs f11,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822b4604
	if (ctx.cr6.eq) goto loc_822B4604;
	// lfs f11,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f7,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 / ctx.f6.f64));
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f9,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// clrlwi. r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f13,f12,f9,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, ctx.f11.f64)));
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmadds f0,f0,f8,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f13.f64)));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// bne 0x822b45fc
	if (!ctx.cr0.eq) goto loc_822B45FC;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lfs f0,1092(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1092);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822b45fc
	if (!ctx.cr6.lt) goto loc_822B45FC;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x822b4608
	goto loc_822B4608;
loc_822B45FC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x822b4690
	goto loc_822B4690;
loc_822B4604:
	// li r10,2
	ctx.r10.s64 = 2;
loc_822B4608:
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b4620
	if (ctx.cr6.eq) goto loc_822B4620;
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// stw r9,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
loc_822B4620:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b4634
	if (ctx.cr6.eq) goto loc_822B4634;
	// lwz r9,52(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// stw r9,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r9.u32);
loc_822B4634:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822b4648
	if (!ctx.cr6.eq) goto loc_822B4648;
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_822B4648:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r29,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r29.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b4670
	if (ctx.cr6.eq) goto loc_822B4670;
	// stw r11,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
loc_822B4670:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// b 0x822b468c
	goto loc_822B468C;
loc_822B4684:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_822B468C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B4690:
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2cbc
	ctx.lr = 0x822B4698;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822CDC88) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9936));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x822cb540
	sub_822CB540(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822CDEA0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9936));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CE150) {
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
	ctx.lr = 0x822CE158;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,1
	r27.s64 = 1;
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r27,19888(r3)
	REX_STORE_U32(ctx.r3.u32 + 19888, r27.u32);
	// addi r30,r3,9932
	r30.s64 = ctx.r3.s64 + 9932;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_822CE174:
	// addi r3,r30,-9916
	ctx.r3.s64 = r30.s64 + -9916;
	// bl 0x822ca1b0
	ctx.lr = 0x822CE17C;
	sub_822CA1B0(ctx, base);
	// cntlzw r11,r29
	ctx.r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r27,0(r30)
	REX_STORE_U32(r30.u32 + 0, r27.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// stw r11,-4(r30)
	REX_STORE_U32(r30.u32 + -4, ctx.r11.u32);
	// addi r30,r30,9936
	r30.s64 = r30.s64 + 9936;
	// blt cr6,0x822ce174
	if (ctx.cr6.lt) goto loc_822CE174;
	// stw r28,19900(r31)
	REX_STORE_U32(r31.u32 + 19900, r28.u32);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// stw r28,19892(r31)
	REX_STORE_U32(r31.u32 + 19892, r28.u32);
	// li r29,2
	r29.s64 = 2;
loc_822CE1AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ca1b0
	ctx.lr = 0x822CE1B4;
	sub_822CA1B0(ctx, base);
	// stw r27,9916(r30)
	REX_STORE_U32(r30.u32 + 9916, r27.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,9936
	r30.s64 = r30.s64 + 9936;
	// bne 0x822ce1ac
	if (!ctx.cr0.eq) goto loc_822CE1AC;
	// lwz r3,19896(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19896);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ce1e4
	if (ctx.cr6.eq) goto loc_822CE1E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CE1E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,19896(r31)
	REX_STORE_U32(r31.u32 + 19896, r28.u32);
loc_822CE1E4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r28,19904(r31)
	REX_STORE_U32(r31.u32 + 19904, r28.u32);
	// stw r28,19932(r31)
	REX_STORE_U32(r31.u32 + 19932, r28.u32);
	// stw r11,19936(r31)
	REX_STORE_U32(r31.u32 + 19936, ctx.r11.u32);
	// stw r28,19944(r31)
	REX_STORE_U32(r31.u32 + 19944, r28.u32);
	// stw r28,19952(r31)
	REX_STORE_U32(r31.u32 + 19952, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822D4B48) {
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
	// bl 0x82793a84
	ctx.lr = 0x822D4B60;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822d4b84
	if (!ctx.cr6.eq) goto loc_822D4B84;
	// addi r11,r31,16940
	ctx.r11.s64 = r31.s64 + 16940;
	// addi r10,r11,4800
	ctx.r10.s64 = ctx.r11.s64 + 4800;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// addi r11,r10,-160
	ctx.r11.s64 = ctx.r10.s64 + -160;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// b 0x822d4b9c
	goto loc_822D4B9C;
loc_822D4B84:
	// lwz r10,16940(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16940);
	// addi r11,r10,4800
	ctx.r11.s64 = ctx.r10.s64 + 4800;
	// addi r9,r11,-160
	ctx.r9.s64 = ctx.r11.s64 + -160;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// stw r9,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r9.u32);
loc_822D4B9C:
	// lbz r11,10941(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10941);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stb r11,10941(r31)
	REX_STORE_U8(r31.u32 + 10941, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_822D7750) {
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
	ctx.lr = 0x822D7758;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,12(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d7774
	if (ctx.cr6.eq) goto loc_822D7774;
	// bl 0x822d6058
	ctx.lr = 0x822D7774;
	sub_822D6058(ctx, base);
loc_822D7774:
	// li r4,360
	ctx.r4.s64 = 360;
	// lwz r31,4(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d48b8
	ctx.lr = 0x822D7784;
	sub_822D48B8(ctx, base);
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// lis r11,-16383
	ctx.r11.s64 = -1073676288;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// ori r11,r11,15872
	ctx.r11.u64 = ctx.r11.u64 | 15872;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// li r8,487
	ctx.r8.s64 = 487;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r31,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0xFFF;
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// li r6,488
	ctx.r6.s64 = 488;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r31,3
	ctx.r10.u64 = r31.u32 & 0x1FFFFFFF;
	// li r28,919
	r28.s64 = 919;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r27,920
	r27.s64 = 920;
	// ori r4,r10,2
	ctx.r4.u64 = ctx.r10.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// ori r6,r9,2
	ctx.r6.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r8,r9,512
	ctx.r8.s64 = ctx.r9.s64 + 512;
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// li r28,922
	r28.s64 = 922;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// li r6,3532
	ctx.r6.s64 = 3532;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r9,921
	ctx.r9.s64 = 921;
	// ori r26,r10,2
	r26.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// clrlwi r8,r10,3
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// addi r10,r9,512
	ctx.r10.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// addi r10,r31,28
	ctx.r10.s64 = r31.s64 + 28;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// ori r4,r9,2
	ctx.r4.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// li r28,3533
	r28.s64 = 3533;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r25,3534
	r25.s64 = 3534;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// ori r26,r10,2
	r26.u64 = ctx.r10.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,36
	ctx.r10.s64 = r31.s64 + 36;
	// li r5,3536
	ctx.r5.s64 = 3536;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// addi r8,r9,512
	ctx.r8.s64 = ctx.r9.s64 + 512;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// ori r6,r9,2
	ctx.r6.u64 = ctx.r9.u64 | 2;
	// addi r9,r31,44
	ctx.r9.s64 = r31.s64 + 44;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// rlwinm r7,r9,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r10,r9,3
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// rlwinm r9,r7,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// li r4,3535
	ctx.r4.s64 = 3535;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// li r26,3538
	r26.s64 = 3538;
	// li r22,3539
	r22.s64 = 3539;
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// ori r6,r10,2
	ctx.r6.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,40
	ctx.r10.s64 = r31.s64 + 40;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,52
	ctx.r10.s64 = r31.s64 + 52;
	// ori r27,r9,2
	r27.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// li r4,3537
	ctx.r4.s64 = 3537;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// ori r24,r10,2
	r24.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,48
	ctx.r10.s64 = r31.s64 + 48;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r8,r9,512
	ctx.r8.s64 = ctx.r9.s64 + 512;
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// addi r10,r31,60
	ctx.r10.s64 = r31.s64 + 60;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// addi r9,r31,56
	ctx.r9.s64 = r31.s64 + 56;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// rlwinm r6,r9,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// ori r23,r8,2
	r23.u64 = ctx.r8.u64 | 2;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// addi r6,r6,512
	ctx.r6.s64 = ctx.r6.s64 + 512;
	// addi r8,r31,68
	ctx.r8.s64 = r31.s64 + 68;
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r6,r6,0,19,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// rlwinm r5,r8,12,20,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r7,r5,512
	ctx.r7.s64 = ctx.r5.s64 + 512;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// ori r20,r9,2
	r20.u64 = ctx.r9.u64 | 2;
	// ori r4,r10,2
	ctx.r4.u64 = ctx.r10.u64 | 2;
	// rlwinm r9,r7,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// clrlwi r10,r8,3
	ctx.r10.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// li r6,3148
	ctx.r6.s64 = 3148;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// ori r7,r10,2
	ctx.r7.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,64
	ctx.r10.s64 = r31.s64 + 64;
	// li r28,3149
	r28.s64 = 3149;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// li r19,3150
	r19.s64 = 3150;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,76
	ctx.r10.s64 = r31.s64 + 76;
	// ori r5,r9,2
	ctx.r5.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r26,3152
	r26.s64 = 3152;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r24,3153
	r24.s64 = 3153;
	// ori r25,r10,2
	r25.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,72
	ctx.r10.s64 = r31.s64 + 72;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// li r6,3151
	ctx.r6.s64 = 3151;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
	// ori r27,r9,2
	r27.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// li r22,3154
	r22.s64 = 3154;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// stwu r20,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r20.u32);
	ctx.r3.u32 = ea;
	// li r20,3155
	r20.s64 = 3155;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r19,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r19.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r7,3658
	ctx.r7.s64 = 3658;
	// li r4,3657
	ctx.r4.s64 = 3657;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// li r27,3661
	r27.s64 = 3661;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,92
	ctx.r10.s64 = r31.s64 + 92;
	// ori r6,r9,2
	ctx.r6.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r20,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r20.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// ori r5,r9,2
	ctx.r5.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r6,3660
	ctx.r6.s64 = 3660;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,100
	ctx.r10.s64 = r31.s64 + 100;
	// ori r7,r9,2
	ctx.r7.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// ori r26,r9,2
	r26.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// addi r8,r9,512
	ctx.r8.s64 = ctx.r9.s64 + 512;
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// addi r10,r31,108
	ctx.r10.s64 = r31.s64 + 108;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r7,3664
	ctx.r7.s64 = 3664;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// li r6,3663
	ctx.r6.s64 = 3663;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,104
	ctx.r10.s64 = r31.s64 + 104;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r4,3667
	ctx.r4.s64 = 3667;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,116
	ctx.r10.s64 = r31.s64 + 116;
	// ori r7,r9,2
	ctx.r7.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r26,3666
	r26.s64 = 3666;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r23,3212
	r23.s64 = 3212;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,112
	ctx.r10.s64 = r31.s64 + 112;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// ori r27,r9,2
	r27.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// li r22,3214
	r22.s64 = 3214;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,124
	ctx.r10.s64 = r31.s64 + 124;
	// ori r24,r9,2
	r24.u64 = ctx.r9.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// addi r9,r31,120
	ctx.r9.s64 = r31.s64 + 120;
	// addi r7,r8,512
	ctx.r7.s64 = ctx.r8.s64 + 512;
	// rlwinm r6,r9,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r8,r10,3
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// addi r6,r6,512
	ctx.r6.s64 = ctx.r6.s64 + 512;
	// addi r10,r31,132
	ctx.r10.s64 = r31.s64 + 132;
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r6,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r8,r7,512
	ctx.r8.s64 = ctx.r7.s64 + 512;
	// ori r27,r9,2
	r27.u64 = ctx.r9.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r9,r8,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// ori r6,r5,2
	ctx.r6.u64 = ctx.r5.u64 | 2;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r5,3213
	ctx.r5.s64 = 3213;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// ori r28,r10,2
	r28.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r26,3215
	r26.s64 = 3215;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,140
	ctx.r10.s64 = r31.s64 + 140;
	// li r24,3216
	r24.s64 = 3216;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// ori r5,r9,2
	ctx.r5.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// ori r23,r10,2
	r23.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,136
	ctx.r10.s64 = r31.s64 + 136;
	// li r4,3217
	ctx.r4.s64 = 3217;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r8,r10,3
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// addi r10,r31,148
	ctx.r10.s64 = r31.s64 + 148;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r21,3219
	r21.s64 = 3219;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// addi r9,r31,144
	ctx.r9.s64 = r31.s64 + 144;
	// ori r22,r8,2
	r22.u64 = ctx.r8.u64 | 2;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// rlwinm r7,r9,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// ori r6,r10,2
	ctx.r6.u64 = ctx.r10.u64 | 2;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r10,r31,156
	ctx.r10.s64 = r31.s64 + 156;
	// li r8,3218
	ctx.r8.s64 = 3218;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// ori r20,r9,2
	r20.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r5,3228
	ctx.r5.s64 = 3228;
	// li r7,3229
	ctx.r7.s64 = 3229;
	// li r27,3230
	r27.s64 = 3230;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// li r23,3231
	r23.s64 = 3231;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// clrlwi r8,r10,3
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r10,r9,512
	ctx.r10.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// addi r10,r31,152
	ctx.r10.s64 = r31.s64 + 152;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,164
	ctx.r10.s64 = r31.s64 + 164;
	// ori r28,r9,2
	r28.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r21,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r20,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r20.u32);
	ctx.r3.u32 = ea;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r24,r10,2
	r24.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,160
	ctx.r10.s64 = r31.s64 + 160;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,172
	ctx.r10.s64 = r31.s64 + 172;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// ori r5,r9,2
	ctx.r5.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// li r22,3232
	r22.s64 = 3232;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r6,3233
	ctx.r6.s64 = 3233;
	// li r26,4102
	r26.s64 = 4102;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// ori r7,r10,2
	ctx.r7.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,168
	ctx.r10.s64 = r31.s64 + 168;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// li r28,3235
	r28.s64 = 3235;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,180
	ctx.r10.s64 = r31.s64 + 180;
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// ori r4,r10,2
	ctx.r4.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,176
	ctx.r10.s64 = r31.s64 + 176;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,188
	ctx.r10.s64 = r31.s64 + 188;
	// li r23,4105
	r23.s64 = 4105;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// li r5,3234
	ctx.r5.s64 = 3234;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// ori r7,r9,2
	ctx.r7.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,184
	ctx.r10.s64 = r31.s64 + 184;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// ori r25,r9,2
	r25.u64 = ctx.r9.u64 | 2;
	// addi r9,r31,196
	ctx.r9.s64 = r31.s64 + 196;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r9,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// ori r24,r8,2
	r24.u64 = ctx.r8.u64 | 2;
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// li r4,4101
	ctx.r4.s64 = 4101;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r10,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// addi r10,r31,192
	ctx.r10.s64 = r31.s64 + 192;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r5,4104
	ctx.r5.s64 = 4104;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,204
	ctx.r10.s64 = r31.s64 + 204;
	// ori r6,r9,2
	ctx.r6.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// li r28,3591
	r28.s64 = 3591;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r25,3590
	r25.s64 = 3590;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r21,3670
	r21.s64 = 3670;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// ori r26,r10,2
	r26.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,200
	ctx.r10.s64 = r31.s64 + 200;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r8,r9,512
	ctx.r8.s64 = ctx.r9.s64 + 512;
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// addi r10,r31,212
	ctx.r10.s64 = r31.s64 + 212;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r9,r31,208
	ctx.r9.s64 = r31.s64 + 208;
	// ori r23,r8,2
	r23.u64 = ctx.r8.u64 | 2;
	// rlwinm r7,r9,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// rlwinm r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r10,r31,220
	ctx.r10.s64 = r31.s64 + 220;
	// ori r4,r9,2
	ctx.r4.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r7,3594
	ctx.r7.s64 = 3594;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,216
	ctx.r10.s64 = r31.s64 + 216;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r5,3593
	ctx.r5.s64 = 3593;
	// li r28,3669
	r28.s64 = 3669;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// li r26,3673
	r26.s64 = 3673;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r25,3672
	r25.s64 = 3672;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// ori r27,r10,2
	r27.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,228
	ctx.r10.s64 = r31.s64 + 228;
	// li r22,3676
	r22.s64 = 3676;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r20,3675
	r20.s64 = 3675;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,224
	ctx.r10.s64 = r31.s64 + 224;
	// ori r4,r9,2
	ctx.r4.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r21,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r3.u32 = ea;
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// ori r23,r10,2
	r23.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,236
	ctx.r10.s64 = r31.s64 + 236;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// li r27,3682
	r27.s64 = 3682;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,232
	ctx.r10.s64 = r31.s64 + 232;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r8,r10,3
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// addi r10,r31,244
	ctx.r10.s64 = r31.s64 + 244;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// ori r5,r9,2
	ctx.r5.u64 = ctx.r9.u64 | 2;
	// stwu r20,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r20.u32);
	ctx.r3.u32 = ea;
	// addi r9,r7,512
	ctx.r9.s64 = ctx.r7.s64 + 512;
	// li r8,3679
	ctx.r8.s64 = 3679;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// li r5,3678
	ctx.r5.s64 = 3678;
	// ori r4,r10,2
	ctx.r4.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,240
	ctx.r10.s64 = r31.s64 + 240;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,252
	ctx.r10.s64 = r31.s64 + 252;
	// ori r6,r9,2
	ctx.r6.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r24,3685
	r24.s64 = 3685;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// li r4,3681
	ctx.r4.s64 = 3681;
	// ori r25,r10,2
	r25.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,248
	ctx.r10.s64 = r31.s64 + 248;
	// li r7,3684
	ctx.r7.s64 = 3684;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// addi r8,r9,512
	ctx.r8.s64 = ctx.r9.s64 + 512;
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// addi r10,r31,260
	ctx.r10.s64 = r31.s64 + 260;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r28,3688
	r28.s64 = 3688;
	// ori r6,r10,2
	ctx.r6.u64 = ctx.r10.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,256
	ctx.r10.s64 = r31.s64 + 256;
	// li r26,3687
	r26.s64 = 3687;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,268
	ctx.r10.s64 = r31.s64 + 268;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// ori r4,r9,2
	ctx.r4.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r27,r10,2
	r27.u64 = ctx.r10.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,264
	ctx.r10.s64 = r31.s64 + 264;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,276
	ctx.r10.s64 = r31.s64 + 276;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// ori r24,r9,2
	r24.u64 = ctx.r9.u64 | 2;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// addi r9,r31,272
	ctx.r9.s64 = r31.s64 + 272;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r9,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// rlwinm r8,r7,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// li r4,3691
	ctx.r4.s64 = 3691;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// li r5,3690
	ctx.r5.s64 = 3690;
	// ori r23,r9,2
	r23.u64 = ctx.r9.u64 | 2;
	// addi r10,r31,284
	ctx.r10.s64 = r31.s64 + 284;
	// li r22,3694
	r22.s64 = 3694;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,280
	ctx.r10.s64 = r31.s64 + 280;
	// ori r7,r9,2
	ctx.r7.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// li r26,3697
	r26.s64 = 3697;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r6,3700
	ctx.r6.s64 = 3700;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r24,3696
	r24.s64 = 3696;
	// ori r27,r10,2
	r27.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,292
	ctx.r10.s64 = r31.s64 + 292;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// li r4,3693
	ctx.r4.s64 = 3693;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,288
	ctx.r10.s64 = r31.s64 + 288;
	// ori r28,r9,2
	r28.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r8,r9,512
	ctx.r8.s64 = ctx.r9.s64 + 512;
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// addi r10,r31,300
	ctx.r10.s64 = r31.s64 + 300;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// add r23,r8,r9
	r23.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// addi r9,r31,296
	ctx.r9.s64 = r31.s64 + 296;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// ori r23,r23,2
	r23.u64 = r23.u64 | 2;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r10,r9,3
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r9,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// rlwinm r9,r7,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r7,r10,2
	ctx.r7.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,308
	ctx.r10.s64 = r31.s64 + 308;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// li r4,3699
	ctx.r4.s64 = 3699;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// li r5,3703
	ctx.r5.s64 = 3703;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// li r8,3702
	ctx.r8.s64 = 3702;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,304
	ctx.r10.s64 = r31.s64 + 304;
	// ori r28,r9,2
	r28.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// li r25,3706
	r25.s64 = 3706;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r21,3709
	r21.s64 = 3709;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,316
	ctx.r10.s64 = r31.s64 + 316;
	// ori r26,r9,2
	r26.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// li r7,3705
	ctx.r7.s64 = 3705;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,312
	ctx.r10.s64 = r31.s64 + 312;
	// ori r24,r9,2
	r24.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// li r6,3708
	ctx.r6.s64 = 3708;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,324
	ctx.r10.s64 = r31.s64 + 324;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// ori r22,r9,2
	r22.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r5,3617
	ctx.r5.s64 = 3617;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// ori r7,r10,2
	ctx.r7.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,320
	ctx.r10.s64 = r31.s64 + 320;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,332
	ctx.r10.s64 = r31.s64 + 332;
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r21,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r28,3616
	r28.s64 = 3616;
	// ori r4,r10,2
	ctx.r4.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,328
	ctx.r10.s64 = r31.s64 + 328;
	// li r27,3620
	r27.s64 = 3620;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,340
	ctx.r10.s64 = r31.s64 + 340;
	// ori r7,r9,2
	ctx.r7.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// li r25,3619
	r25.s64 = 3619;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r24,3626
	r24.s64 = 3626;
	// ori r26,r10,2
	r26.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,336
	ctx.r10.s64 = r31.s64 + 336;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// li r28,3629
	r28.s64 = 3629;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,348
	ctx.r10.s64 = r31.s64 + 348;
	// ori r6,r9,2
	ctx.r6.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// clrlwi r8,r10,3
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r10,r9,512
	ctx.r10.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// addi r10,r31,344
	ctx.r10.s64 = r31.s64 + 344;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,356
	ctx.r10.s64 = r31.s64 + 356;
	// ori r4,r9,2
	ctx.r4.u64 = ctx.r9.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// li r25,3628
	r25.s64 = 3628;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r26,r10,2
	r26.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,352
	ctx.r10.s64 = r31.s64 + 352;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// li r6,3625
	ctx.r6.s64 = 3625;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r8,r9,512
	ctx.r8.s64 = ctx.r9.s64 + 512;
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// addi r10,r31,364
	ctx.r10.s64 = r31.s64 + 364;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// ori r6,r9,2
	ctx.r6.u64 = ctx.r9.u64 | 2;
	// addi r9,r31,360
	ctx.r9.s64 = r31.s64 + 360;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r9,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r9,3
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// rlwinm r9,r7,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// li r4,3635
	ctx.r4.s64 = 3635;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// li r5,3634
	ctx.r5.s64 = 3634;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// li r22,3644
	r22.s64 = 3644;
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// li r26,3637
	r26.s64 = 3637;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// ori r6,r10,2
	ctx.r6.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,372
	ctx.r10.s64 = r31.s64 + 372;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,368
	ctx.r10.s64 = r31.s64 + 368;
	// ori r27,r9,2
	r27.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// li r4,3638
	ctx.r4.s64 = 3638;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// ori r24,r10,2
	r24.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,380
	ctx.r10.s64 = r31.s64 + 380;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r8,r9,512
	ctx.r8.s64 = ctx.r9.s64 + 512;
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// addi r10,r31,376
	ctx.r10.s64 = r31.s64 + 376;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// addi r9,r31,388
	ctx.r9.s64 = r31.s64 + 388;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// rlwinm r6,r9,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// ori r23,r8,2
	r23.u64 = ctx.r8.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r6,r6,512
	ctx.r6.s64 = ctx.r6.s64 + 512;
	// addi r8,r31,384
	ctx.r8.s64 = r31.s64 + 384;
	// rlwinm r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r6,r6,0,19,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwinm r5,r8,12,20,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r7,r5,512
	ctx.r7.s64 = ctx.r5.s64 + 512;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// li r6,3643
	ctx.r6.s64 = 3643;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// ori r4,r10,2
	ctx.r4.u64 = ctx.r10.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// li r28,3647
	r28.s64 = 3647;
	// ori r20,r9,2
	r20.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r7,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// clrlwi r10,r8,3
	ctx.r10.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// li r19,3646
	r19.s64 = 3646;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r26,3545
	r26.s64 = 3545;
	// ori r7,r10,2
	ctx.r7.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,396
	ctx.r10.s64 = r31.s64 + 396;
	// li r24,3848
	r24.s64 = 3848;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// li r22,3849
	r22.s64 = 3849;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,392
	ctx.r10.s64 = r31.s64 + 392;
	// ori r5,r9,2
	ctx.r5.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r25,r10,2
	r25.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,404
	ctx.r10.s64 = r31.s64 + 404;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// li r6,3544
	ctx.r6.s64 = 3544;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,400
	ctx.r10.s64 = r31.s64 + 400;
	// ori r27,r9,2
	r27.u64 = ctx.r9.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,412
	ctx.r10.s64 = r31.s64 + 412;
	// stwu r20,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r20.u32);
	ctx.r3.u32 = ea;
	// li r20,3850
	r20.s64 = 3850;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r19,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r19.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// li r7,3851
	ctx.r7.s64 = 3851;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,408
	ctx.r10.s64 = r31.s64 + 408;
	// stwu r20,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r20.u32);
	ctx.r3.u32 = ea;
	// ori r6,r9,2
	ctx.r6.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// li r4,3852
	ctx.r4.s64 = 3852;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r27,3853
	r27.s64 = 3853;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,420
	ctx.r10.s64 = r31.s64 + 420;
	// ori r5,r9,2
	ctx.r5.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r6,3854
	ctx.r6.s64 = 3854;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,416
	ctx.r10.s64 = r31.s64 + 416;
	// ori r7,r9,2
	ctx.r7.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,428
	ctx.r10.s64 = r31.s64 + 428;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// ori r26,r9,2
	r26.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r8,r9,512
	ctx.r8.s64 = ctx.r9.s64 + 512;
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// addi r10,r31,424
	ctx.r10.s64 = r31.s64 + 424;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r7,3855
	ctx.r7.s64 = 3855;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// li r4,2070
	ctx.r4.s64 = 2070;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// li r26,2135
	r26.s64 = 2135;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// li r6,2071
	ctx.r6.s64 = 2071;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,436
	ctx.r10.s64 = r31.s64 + 436;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,432
	ctx.r10.s64 = r31.s64 + 432;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// ori r7,r9,2
	ctx.r7.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,444
	ctx.r10.s64 = r31.s64 + 444;
	// ori r27,r9,2
	r27.u64 = ctx.r9.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r23,2134
	r23.s64 = 2134;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,440
	ctx.r10.s64 = r31.s64 + 440;
	// ori r24,r9,2
	r24.u64 = ctx.r9.u64 | 2;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// addi r9,r31,452
	ctx.r9.s64 = r31.s64 + 452;
	// addi r7,r8,512
	ctx.r7.s64 = ctx.r8.s64 + 512;
	// rlwinm r6,r9,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r8,r10,3
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// addi r6,r6,512
	ctx.r6.s64 = ctx.r6.s64 + 512;
	// addi r10,r31,448
	ctx.r10.s64 = r31.s64 + 448;
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r6,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r8,r7,512
	ctx.r8.s64 = ctx.r7.s64 + 512;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// ori r27,r9,2
	r27.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r8,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// ori r6,r5,2
	ctx.r6.u64 = ctx.r5.u64 | 2;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r5,2586
	ctx.r5.s64 = 2586;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// ori r28,r10,2
	r28.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,460
	ctx.r10.s64 = r31.s64 + 460;
	// li r22,2585
	r22.s64 = 2585;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,456
	ctx.r10.s64 = r31.s64 + 456;
	// li r26,2589
	r26.s64 = 2589;
	// li r24,2588
	r24.s64 = 2588;
	// li r4,2592
	ctx.r4.s64 = 2592;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// ori r5,r9,2
	ctx.r5.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r23,r10,2
	r23.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,468
	ctx.r10.s64 = r31.s64 + 468;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r8,r10,3
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// addi r10,r31,464
	ctx.r10.s64 = r31.s64 + 464;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r31,476
	ctx.r9.s64 = r31.s64 + 476;
	// ori r22,r8,2
	r22.u64 = ctx.r8.u64 | 2;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// rlwinm r7,r9,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// li r8,2591
	ctx.r8.s64 = 2591;
	// ori r6,r10,2
	ctx.r6.u64 = ctx.r10.u64 | 2;
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// rlwinm r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// li r21,74
	r21.s64 = 74;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,472
	ctx.r11.s64 = r31.s64 + 472;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// li r8,73
	ctx.r8.s64 = 73;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r21,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,10908(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10908);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// stw r11,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_8239D930) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8239d964
	if (ctx.cr6.eq) goto loc_8239D964;
loc_8239D944:
	// lbz r8,36(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8239d958
	if (ctx.cr6.eq) goto loc_8239D958;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8239D958:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8239d944
	if (!ctx.cr6.eq) goto loc_8239D944;
loc_8239D964:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8239d970
	if (ctx.cr6.eq) goto loc_8239D970;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_8239D970:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823A03D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823A03D8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a041c
	if (!ctx.cr6.gt) goto loc_823A041C;
	// addi r30,r29,124
	r30.s64 = r29.s64 + 124;
loc_823A03F8:
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A040C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,124(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 124);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823a03f8
	if (ctx.cr6.lt) goto loc_823A03F8;
loc_823A041C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823A08B0) {
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
	// bl 0x823d17e8
	ctx.lr = 0x823A08C8;
	sub_823D17E8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// addi r8,r9,21264
	ctx.r8.s64 = ctx.r9.s64 + 21264;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// addi r9,r31,112
	ctx.r9.s64 = r31.s64 + 112;
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// stw r9,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r9.u32);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// stw r7,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r7.u32);
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

DEFINE_REX_FUNC(sub_823A3240) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823a3250
	if (!ctx.cr6.eq) goto loc_823A3250;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A3250:
	// b 0x823a2b58
	sub_823A2B58(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823A3890) {
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
	ctx.lr = 0x823A3898;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r22,0
	r22.s64 = 0;
	// addi r20,r11,6024
	r20.s64 = ctx.r11.s64 + 6024;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r21,r22
	r21.u64 = r22.u64;
	// mr r24,r22
	r24.u64 = r22.u64;
	// mr r27,r20
	r27.u64 = r20.u64;
	// addi r30,r3,1080
	r30.s64 = ctx.r3.s64 + 1080;
	// addi r25,r3,1176
	r25.s64 = ctx.r3.s64 + 1176;
	// addi r26,r3,1288
	r26.s64 = ctx.r3.s64 + 1288;
	// li r23,1
	r23.s64 = 1;
	// lis r28,-32129
	r28.s64 = -2105606144;
	// addi r29,r11,21608
	r29.s64 = ctx.r11.s64 + 21608;
loc_823A38D4:
	// lwz r11,224(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 224);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823a3980
	if (ctx.cr6.eq) goto loc_823A3980;
	// add r11,r24,r31
	ctx.r11.u64 = r24.u64 + r31.u64;
	// lbz r10,1736(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1736);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a3980
	if (ctx.cr6.eq) goto loc_823A3980;
	// add r10,r24,r31
	ctx.r10.u64 = r24.u64 + r31.u64;
	// stb r22,1736(r11)
	REX_STORE_U8(ctx.r11.u32 + 1736, r22.u8);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,996
	ctx.r6.s64 = 996;
	// stb r23,1744(r10)
	REX_STORE_U8(ctx.r10.u32 + 1744, r23.u8);
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mullw r4,r9,r8
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x823A3920;
	sub_82330E40(ctx, base);
	// stw r3,160(r30)
	REX_STORE_U32(r30.u32 + 160, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r6,1002
	ctx.r6.s64 = 1002;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x823A3948;
	sub_82330E40(ctx, base);
	// stw r3,176(r30)
	REX_STORE_U32(r30.u32 + 176, ctx.r3.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r5,160(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 160);
	// addi r6,r25,-64
	ctx.r6.s64 = r25.s64 + -64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x8269ab60
	ctx.lr = 0x823A3964;
	sub_8269AB60(ctx, base);
	// addi r7,r26,112
	ctx.r7.s64 = r26.s64 + 112;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r5,176(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 176);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x8269ab60
	ctx.lr = 0x823A397C;
	sub_8269AB60(ctx, base);
	// stw r22,-32(r30)
	REX_STORE_U32(r30.u32 + -32, r22.u32);
loc_823A3980:
	// lwz r11,336(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 336);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823a3a18
	if (ctx.cr6.eq) goto loc_823A3A18;
	// add r11,r24,r31
	ctx.r11.u64 = r24.u64 + r31.u64;
	// lbz r10,1740(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1740);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a3a18
	if (ctx.cr6.eq) goto loc_823A3A18;
	// stb r22,1740(r11)
	REX_STORE_U8(ctx.r11.u32 + 1740, r22.u8);
	// lwz r4,192(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 192);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823a39c8
	if (ctx.cr6.eq) goto loc_823A39C8;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1033
	ctx.r6.s64 = 1033;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823A39C4;
	sub_82330D00(ctx, base);
	// stw r22,192(r30)
	REX_STORE_U32(r30.u32 + 192, r22.u32);
loc_823A39C8:
	// lwz r4,160(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 160);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823a39f0
	if (ctx.cr6.eq) goto loc_823A39F0;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1039
	ctx.r6.s64 = 1039;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823A39EC;
	sub_82330D00(ctx, base);
	// stw r22,160(r30)
	REX_STORE_U32(r30.u32 + 160, r22.u32);
loc_823A39F0:
	// lwz r4,176(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 176);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823a3a18
	if (ctx.cr6.eq) goto loc_823A3A18;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1045
	ctx.r6.s64 = 1045;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823A3A14;
	sub_82330D00(ctx, base);
	// stw r22,176(r30)
	REX_STORE_U32(r30.u32 + 176, r22.u32);
loc_823A3A18:
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r11,r20,16
	ctx.r11.s64 = r20.s64 + 16;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r26,r26,28
	r26.s64 = r26.s64 + 28;
	// addi r25,r25,16
	r25.s64 = r25.s64 + 16;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823a38d4
	if (ctx.cr6.lt) goto loc_823A38D4;
	// lwz r30,96(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r28,r31,96
	r28.s64 = r31.s64 + 96;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// beq cr6,0x823a3e60
	if (ctx.cr6.eq) goto loc_823A3E60;
	// li r27,36
	r27.s64 = 36;
loc_823A3A4C:
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + r31.u64;
	// lbz r10,1744(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1744);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a3e54
	if (ctx.cr6.eq) goto loc_823A3E54;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// addi r9,r11,274
	ctx.r9.s64 = ctx.r11.s64 + 274;
	// addi r7,r11,270
	ctx.r7.s64 = ctx.r11.s64 + 270;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// lwzx r4,r6,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// lwzx r3,r5,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// mullw r9,r4,r3
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// bgt cr6,0x823a3b88
	if (ctx.cr6.gt) goto loc_823A3B88;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,15016
	ctx.r12.s64 = ctx.r12.s64 + 15016;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_823A3B10;
	case 1:
		goto loc_823A3AD8;
	case 2:
		goto loc_823A3AE0;
	case 3:
		goto loc_823A3AE8;
	case 4:
		goto loc_823A3AF0;
	case 5:
		goto loc_823A3AF0;
	case 6:
		goto loc_823A3B10;
	case 7:
		goto loc_823A3B10;
	case 8:
		goto loc_823A3B10;
	case 9:
		goto loc_823A3B10;
	case 10:
		goto loc_823A3B10;
	case 11:
		goto loc_823A3B10;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823A3AD8:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x823a3af4
	goto loc_823A3AF4;
loc_823A3AE0:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x823a3af4
	goto loc_823A3AF4;
loc_823A3AE8:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x823a3af4
	goto loc_823A3AF4;
loc_823A3AF0:
	// li r11,32
	ctx.r11.s64 = 32;
loc_823A3AF4:
	// li r10,0
	ctx.r10.s64 = 0;
	// rldimi r10,r9,3,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 3) & 0x7FFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFF800000007);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// divdu r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 ? ctx.r10.u64 / ctx.r9.u64 : 0;
	// tdllei r9,0
	if (ctx.r9.s64 == 0ll || ctx.r9.u64 < 0ull) ppc_trap(ctx, base, 0);
	// rotlwi r21,r7,0
	r21.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// b 0x823a3b88
	goto loc_823A3B88;
loc_823A3B10:
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,15144
	ctx.r12.s64 = ctx.r12.s64 + 15144;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_823A3B84;
	case 1:
		goto loc_823A3B88;
	case 2:
		goto loc_823A3B88;
	case 3:
		goto loc_823A3B88;
	case 4:
		goto loc_823A3B88;
	case 5:
		goto loc_823A3B88;
	case 6:
		goto loc_823A3B58;
	case 7:
		goto loc_823A3B64;
	case 8:
		goto loc_823A3B70;
	case 9:
		goto loc_823A3B7C;
	case 10:
		goto loc_823A3B7C;
	case 11:
		goto loc_823A3B7C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823A3B58:
	// mulli r11,r9,14
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(14));
	// rlwinm r21,r11,29,3,31
	r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x823a3b88
	goto loc_823A3B88;
loc_823A3B64:
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// divwu r21,r11,r27
	r21.u64 = uint32_t(r27.u32 ? ctx.r11.u32 / r27.u32 : 0);
	// b 0x823a3b88
	goto loc_823A3B88;
loc_823A3B70:
	// mulli r11,r9,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(28));
	// rlwinm r21,r11,28,4,31
	r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// b 0x823a3b88
	goto loc_823A3B88;
loc_823A3B7C:
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// b 0x823a3b88
	goto loc_823A3B88;
loc_823A3B84:
	// mr r21,r22
	r21.u64 = r22.u64;
loc_823A3B88:
	// addi r11,r8,46
	ctx.r11.s64 = ctx.r8.s64 + 46;
	// mulli r10,r11,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplwi cr6,r9,997
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 997, ctx.xer);
	// beq cr6,0x823a3cec
	if (ctx.cr6.eq) goto loc_823A3CEC;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,60(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 60);
	// addi r9,r11,274
	ctx.r9.s64 = ctx.r11.s64 + 274;
	// addi r8,r11,270
	ctx.r8.s64 = ctx.r11.s64 + 270;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,262
	ctx.r5.s64 = ctx.r11.s64 + 262;
	// lwz r4,72(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + r31.u32);
	// lwzx r10,r6,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// mullw r9,r3,r10
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r8,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r8.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r6,r11,262
	ctx.r6.s64 = ctx.r11.s64 + 262;
	// addi r7,r11,266
	ctx.r7.s64 = ctx.r11.s64 + 266;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwzx r4,r5,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r10,r3,r4
	ctx.r10.u64 = uint32_t(ctx.r4.u32 ? ctx.r3.u32 / ctx.r4.u32 : 0);
	// mullw r9,r10,r4
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// subf r8,r9,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r9.u64;
	// stwx r8,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r8.u32);
	// lwz r6,60(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 60);
	// lwz r7,68(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r5,72(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 72);
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x823a3c64
	if (!ctx.cr6.gt) goto loc_823A3C64;
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// addi r9,r11,318
	ctx.r9.s64 = ctx.r11.s64 + 318;
	// addi r6,r11,262
	ctx.r6.s64 = ctx.r11.s64 + 262;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,310
	ctx.r11.s64 = ctx.r11.s64 + 310;
	// lwz r6,72(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r10,r4,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + r31.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r5,r9,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// bl 0x823a2e98
	ctx.lr = 0x823A3C60;
	sub_823A2E98(ctx, base);
	// b 0x823a3cac
	goto loc_823A3CAC;
loc_823A3C64:
	// addi r10,r11,274
	ctx.r10.s64 = ctx.r11.s64 + 274;
	// addi r9,r11,270
	ctx.r9.s64 = ctx.r11.s64 + 270;
	// addi r8,r11,318
	ctx.r8.s64 = ctx.r11.s64 + 318;
	// addi r7,r11,262
	ctx.r7.s64 = ctx.r11.s64 + 262;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,310
	ctx.r11.s64 = ctx.r11.s64 + 310;
	// lwzx r7,r5,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + r31.u32);
	// lwzx r10,r3,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + r31.u32);
	// lwzx r9,r6,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r5,r9,r7
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lwzx r4,r8,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// bl 0x823ef2f8
	ctx.lr = 0x823A3CAC;
	sub_823EF2F8(ctx, base);
loc_823A3CAC:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r10,r11,310
	ctx.r10.s64 = ctx.r11.s64 + 310;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,270
	ctx.r8.s64 = ctx.r11.s64 + 270;
	// addi r7,r11,46
	ctx.r7.s64 = ctx.r11.s64 + 46;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r6,r20
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + r20.u32);
	// mulli r10,r7,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(28));
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// lwzx r4,r4,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + r31.u32);
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + r31.u64;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// addi r6,r11,1112
	ctx.r6.s64 = ctx.r11.s64 + 1112;
	// bl 0x8269ab60
	ctx.lr = 0x823A3CEC;
	sub_8269AB60(ctx, base);
loc_823A3CEC:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,50
	ctx.r11.s64 = ctx.r11.s64 + 50;
	// mulli r10,r11,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplwi cr6,r9,997
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 997, ctx.xer);
	// beq cr6,0x823a3e54
	if (ctx.cr6.eq) goto loc_823A3E54;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,60(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 60);
	// addi r9,r11,274
	ctx.r9.s64 = ctx.r11.s64 + 274;
	// addi r8,r11,270
	ctx.r8.s64 = ctx.r11.s64 + 270;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,262
	ctx.r5.s64 = ctx.r11.s64 + 262;
	// lwz r4,72(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + r31.u32);
	// lwzx r10,r6,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// mullw r8,r3,r10
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// mullw r10,r8,r4
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r7,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r7.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r5,r11,262
	ctx.r5.s64 = ctx.r11.s64 + 262;
	// addi r6,r11,266
	ctx.r6.s64 = ctx.r11.s64 + 266;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwzx r3,r4,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + r31.u32);
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r10,r3
	ctx.r9.u64 = uint32_t(ctx.r3.u32 ? ctx.r10.u32 / ctx.r3.u32 : 0);
	// mullw r8,r9,r3
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// stwx r7,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r7.u32);
	// lwz r6,60(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 60);
	// lwz r7,68(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r5,72(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 72);
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x823a3dcc
	if (!ctx.cr6.gt) goto loc_823A3DCC;
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// addi r9,r11,318
	ctx.r9.s64 = ctx.r11.s64 + 318;
	// addi r6,r11,262
	ctx.r6.s64 = ctx.r11.s64 + 262;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,314
	ctx.r11.s64 = ctx.r11.s64 + 314;
	// lwz r6,72(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r10,r4,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + r31.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r5,r9,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// bl 0x823a2e98
	ctx.lr = 0x823A3DC8;
	sub_823A2E98(ctx, base);
	// b 0x823a3e14
	goto loc_823A3E14;
loc_823A3DCC:
	// addi r10,r11,274
	ctx.r10.s64 = ctx.r11.s64 + 274;
	// addi r9,r11,270
	ctx.r9.s64 = ctx.r11.s64 + 270;
	// addi r8,r11,318
	ctx.r8.s64 = ctx.r11.s64 + 318;
	// addi r7,r11,262
	ctx.r7.s64 = ctx.r11.s64 + 262;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,314
	ctx.r11.s64 = ctx.r11.s64 + 314;
	// lwzx r7,r5,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + r31.u32);
	// lwzx r10,r3,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + r31.u32);
	// lwzx r9,r6,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r5,r9,r7
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lwzx r4,r8,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// bl 0x823ef2f8
	ctx.lr = 0x823A3E14;
	sub_823EF2F8(ctx, base);
loc_823A3E14:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r10,r11,314
	ctx.r10.s64 = ctx.r11.s64 + 314;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,270
	ctx.r8.s64 = ctx.r11.s64 + 270;
	// addi r7,r11,50
	ctx.r7.s64 = ctx.r11.s64 + 50;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r6,r20
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + r20.u32);
	// mulli r10,r7,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(28));
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// lwzx r4,r4,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + r31.u32);
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + r31.u64;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// addi r6,r11,1176
	ctx.r6.s64 = ctx.r11.s64 + 1176;
	// bl 0x8269ab60
	ctx.lr = 0x823A3E54;
	sub_8269AB60(ctx, base);
loc_823A3E54:
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bne cr6,0x823a3a4c
	if (!ctx.cr6.eq) goto loc_823A3A4C;
loc_823A3E60:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_823D2C60) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// rlwinm r9,r5,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f2,-12(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stfs f1,-8(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stfs f2,-4(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823d2cf8
	if (ctx.cr6.eq) goto loc_823D2CF8;
	// addi r4,r1,-16
	ctx.r4.s64 = ctx.r1.s64 + -16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r9,48
	ctx.r9.s64 = 48;
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823D2CA0:
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw128 v13,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// lvx128 v61,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v12,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vmrglw128 v11,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// lvx128 v10,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v7,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// lvx128 v6,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v10,v13,v0,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// lvx128 v8,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v12,v0,v9
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v11,v11,v0,v8
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// vmaddfp v13,v7,v0,v6
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// stvx128 v10,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x823d2ca0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D2CA0;
loc_823D2CF8:
	// clrlwi r9,r5,29
	ctx.r9.u64 = ctx.r5.u32 & 0x7;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_823D2D10:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f1,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, ctx.f13.f64)));
	// lfs f11,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmadds f10,f0,f2,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f0.f64, ctx.f2.f64, ctx.f11.f64)));
	// stfsu f10,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823d2d10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D2D10;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823DCF60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823DCF68;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x823dcc18
	ctx.lr = 0x823DCF8C;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823dcfa0
	if (!ctx.cr6.eq) goto loc_823DCFA0;
loc_823DCF94:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823DCFA0:
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dcc18
	ctx.lr = 0x823DCFB4;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823dcf94
	if (ctx.cr6.eq) goto loc_823DCF94;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// or r29,r9,r10
	r29.u64 = ctx.r9.u64 | ctx.r10.u64;
	// bl 0x823dcc18
	ctx.lr = 0x823DCFE0;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823dcf94
	if (ctx.cr6.eq) goto loc_823DCF94;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// rlwinm r10,r11,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// or r31,r10,r29
	r31.u64 = ctx.r10.u64 | r29.u64;
	// bl 0x823dcc18
	ctx.lr = 0x823DD008;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823dcf94
	if (ctx.cr6.eq) goto loc_823DCF94;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// or r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 | r31.u64;
	// stw r9,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823E1918) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823E1920;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r5,7
	ctx.r10.s64 = ctx.r5.s64 + 7;
	// lwz r11,72(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// lwz r9,76(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 76);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r30,r10,0,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + r30.u64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x823e19b8
	if (!ctx.cr6.gt) goto loc_823E19B8;
	// lwz r11,68(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e1994
	if (ctx.cr6.eq) goto loc_823E1994;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82393a88
	ctx.lr = 0x823E195C;
	sub_82393A88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823e1970
	if (!ctx.cr6.eq) goto loc_823E1970;
loc_823E1964:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823E1970:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r8.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r7,68(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 68);
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
loc_823E1994:
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82393a88
	ctx.lr = 0x823E19A4;
	sub_82393A88(ctx, base);
	// stw r3,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e1964
	if (ctx.cr6.eq) goto loc_823E1964;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
loc_823E19B8:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + r30.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823E5E50) {
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
	ctx.lr = 0x823E5E58;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x823daf58
	ctx.lr = 0x823E5E80;
	sub_823DAF58(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// blt cr6,0x823e5ee8
	if (ctx.cr6.lt) goto loc_823E5EE8;
loc_823E5E88:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x823e5ec4
	if (ctx.cr6.eq) goto loc_823E5EC4;
	// mullw r11,r27,r31
	ctx.r11.s64 = int64_t(r27.s32) * int64_t(r31.s32);
	// srawi. r31,r11,14
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFF) != 0);
	r31.s64 = ctx.r11.s32 >> 14;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// mr r29,r30
	r29.u64 = r30.u64;
	// bne 0x823e5eb0
	if (!ctx.cr0.eq) goto loc_823E5EB0;
	// addi r11,r30,2
	ctx.r11.s64 = r30.s64 + 2;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bgt cr6,0x823e5eb0
	if (ctx.cr6.gt) goto loc_823E5EB0;
	// li r31,1
	r31.s64 = 1;
loc_823E5EB0:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// bge cr6,0x823e5e88
	if (!ctx.cr6.lt) goto loc_823E5E88;
loc_823E5EC4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x823e5ee8
	if (!ctx.cr6.gt) goto loc_823E5EE8;
	// add r11,r29,r31
	ctx.r11.u64 = r29.u64 + r31.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823e5ee4
	if (ctx.cr6.lt) goto loc_823E5EE4;
	// neg r28,r28
	r28.s64 = static_cast<int64_t>(-r28.u64);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// b 0x823e5ee8
	goto loc_823E5EE8;
loc_823E5EE4:
	// subf r30,r31,r30
	r30.u64 = r30.u64 - r31.u64;
loc_823E5EE8:
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// bne cr6,0x823e5ef4
	if (!ctx.cr6.eq) goto loc_823E5EF4;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
loc_823E5EF4:
	// lis r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// ori r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 32768;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823db000
	ctx.lr = 0x823E5F0C;
	sub_823DB000(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823E9488) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mullw r9,r10,r7
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// mullw r8,r10,r8
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// divw r7,r9,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r3,r7,r8
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// subf r11,r3,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r3.u64;
	// andc r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x823e94ec
	if (!ctx.cr6.gt) goto loc_823E94EC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823E94E0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823e94e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E94E0;
	// blr 
	return;
loc_823E94EC:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x823e9544
	if (ctx.cr6.lt) goto loc_823E9544;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// addi r4,r6,-4
	ctx.r4.s64 = ctx.r6.s64 + -4;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823E9520:
	// lfs f13,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfsu f0,16(r7)
	ea = 16 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f11,12(r4)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfsu f0,16(r4)
	ea = 16 + ctx.r4.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r4.u32 = ea;
	// bdnz 0x823e9520
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E9520;
loc_823E9544:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r11,r8,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r8.u64;
	// add r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x826a22f8
	sub_826A22F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823ED280) {
	REX_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// b 0x827936d4
	__imp__XamShowMarketplaceUI(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823ED4A0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,2252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2252);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x823ed534
	if (!ctx.cr6.eq) goto loc_823ED534;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x823ed534
	if (!ctx.cr0.eq) goto loc_823ED534;
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,5611
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5611, ctx.xer);
	// bge cr6,0x823ed534
	if (!ctx.cr6.lt) goto loc_823ED534;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82793714
	ctx.lr = 0x823ED4FC;
	__imp__XamInputGetCapabilities(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823ed534
	if (!ctx.cr0.eq) goto loc_823ED534;
	// lbz r11,97(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 97);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823ed534
	if (!ctx.cr6.eq) goto loc_823ED534;
	// lhz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823ed534
	if (ctx.cr0.eq) goto loc_823ED534;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823ed534
	if (ctx.cr0.eq) goto loc_823ED534;
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r10,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
loc_823ED534:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82793734
	ctx.lr = 0x823ED550;
	__imp__XamInputSetState(ctx, base);
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

DEFINE_REX_FUNC(sub_823EFAB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823EFAC0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r11,-30908
	r29.s64 = ctx.r11.s64 + -30908;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938a4
	ctx.lr = 0x823EFAD8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r31,r11,-30880
	r31.s64 = ctx.r11.s64 + -30880;
	// lwz r11,-30880(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -30880);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// beq cr6,0x823efb10
	if (ctx.cr6.eq) goto loc_823EFB10;
loc_823EFAF0:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EFB08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// bne cr6,0x823efaf0
	if (!ctx.cr6.eq) goto loc_823EFAF0;
loc_823EFB10:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938b4
	ctx.lr = 0x823EFB18;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823F1950) {
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
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r10,76
	ctx.r11.s64 = ctx.r10.s64 + 76;
	// lwz r9,76(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823f1b04
	if (!ctx.cr6.eq) goto loc_823F1B04;
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x823f19f8
	if (ctx.cr6.eq) goto loc_823F19F8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823f19f8
	if (ctx.cr6.eq) goto loc_823F19F8;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r7,1424(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 1424);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82793b54
	ctx.lr = 0x823F19D0;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823f1a28
	if (ctx.cr0.lt) goto loc_823F1A28;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x823f1abc
	goto loc_823F1ABC;
loc_823F19F8:
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,1424(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 1424);
	// bl 0x82793b54
	ctx.lr = 0x823F1A20;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823f1a30
	if (!ctx.cr0.lt) goto loc_823F1A30;
loc_823F1A28:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823f1b10
	goto loc_823F1B10;
loc_823F1A30:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,1424(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 1424);
	// bl 0x82793b54
	ctx.lr = 0x823F1A58;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823f1a80
	if (!ctx.cr0.lt) goto loc_823F1A80;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r6,1424(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 1424);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82793b64
	ctx.lr = 0x823F1A7C;
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x823f1a28
	goto loc_823F1A28;
loc_823F1A80:
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_823F1ABC:
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r8,76
	ctx.r9.s64 = ctx.r8.s64 + 76;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823f1af8
	if (!ctx.cr6.lt) goto loc_823F1AF8;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823F1AE8:
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x823f1ae8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F1AE8;
loc_823F1AF8:
	// stw r30,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r30.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
loc_823F1B04:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_823F1B10:
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

DEFINE_REX_FUNC(sub_823FF070) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,17212
	ctx.r11.s64 = ctx.r11.s64 + 17212;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x823ff09c
	if (ctx.cr0.eq) goto loc_823FF09C;
	// bl 0x8269ce98
	ctx.lr = 0x823FF09C;
	sub_8269CE98(ctx, base);
loc_823FF09C:
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

DEFINE_REX_FUNC(sub_824004F0) {
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
	// lis r31,-32255
	r31.s64 = -2113863680;
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r4,r31,17260
	ctx.r4.s64 = r31.s64 + 17260;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lwz r9,220(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,212(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ffc48
	ctx.lr = 0x82400544;
	sub_823FFC48(ctx, base);
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

DEFINE_REX_FUNC(sub_82400D28) {
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
	ctx.lr = 0x82400D30;
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// ble cr6,0x82401120
	if (!ctx.cr6.gt) goto loc_82401120;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r11,17700
	ctx.r11.s64 = ctx.r11.s64 + 17700;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
loc_82400D50:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82400d70
	if (!ctx.cr0.eq) goto loc_82400D70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82400d50
	if (!ctx.cr6.eq) goto loc_82400D50;
loc_82400D70:
	// li r28,1
	r28.s64 = 1;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82400d84
	if (!ctx.cr0.eq) goto loc_82400D84;
	// li r26,0
	r26.s64 = 0;
	// b 0x82400dc0
	goto loc_82400DC0;
loc_82400D84:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r11,17696
	ctx.r11.s64 = ctx.r11.s64 + 17696;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
loc_82400D94:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82400db4
	if (!ctx.cr0.eq) goto loc_82400DB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82400d94
	if (!ctx.cr6.eq) goto loc_82400D94;
loc_82400DB4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82401120
	if (!ctx.cr0.eq) goto loc_82401120;
	// mr r26,r28
	r26.u64 = r28.u64;
loc_82400DC0:
	// addi r30,r5,-3
	r30.s64 = ctx.r5.s64 + -3;
	// addi r29,r4,3
	r29.s64 = ctx.r4.s64 + 3;
	// cmplwi cr6,r30,256
	ctx.cr6.compare<uint32_t>(r30.u32, 256, ctx.xer);
	// li r11,256
	ctx.r11.s64 = 256;
	// bgt cr6,0x82400dd8
	if (ctx.cr6.gt) goto loc_82400DD8;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82400DD8:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82400dfc
	if (ctx.cr6.eq) goto loc_82400DFC;
loc_82400DE4:
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + r29.u32);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x82400e00
	if (ctx.cr6.eq) goto loc_82400E00;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82400de4
	if (ctx.cr6.lt) goto loc_82400DE4;
loc_82400DFC:
	// li r31,0
	r31.s64 = 0;
loc_82400E00:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x82401120
	if (ctx.cr6.eq) goto loc_82401120;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82400818
	ctx.lr = 0x82400E18;
	sub_82400818(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r7,r1,368
	ctx.r7.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,17688
	ctx.r4.s64 = ctx.r11.s64 + 17688;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8269d898
	ctx.lr = 0x82400E34;
	sub_8269D898(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82401120
	if (!ctx.cr6.eq) goto loc_82401120;
	// subf r10,r31,r30
	ctx.r10.u64 = r30.u64 - r31.u64;
	// add r11,r31,r29
	ctx.r11.u64 = r31.u64 + r29.u64;
	// addic. r30,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r30.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// beq 0x82401120
	if (ctx.cr0.eq) goto loc_82401120;
	// cmplwi cr6,r30,256
	ctx.cr6.compare<uint32_t>(r30.u32, 256, ctx.xer);
	// li r10,256
	ctx.r10.s64 = 256;
	// bgt cr6,0x82400e60
	if (ctx.cr6.gt) goto loc_82400E60;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82400E60:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82400e84
	if (ctx.cr6.eq) goto loc_82400E84;
loc_82400E6C:
	// lbzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// beq cr6,0x82400f5c
	if (ctx.cr6.eq) goto loc_82400F5C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82400e6c
	if (ctx.cr6.lt) goto loc_82400E6C;
loc_82400E84:
	// li r31,0
	r31.s64 = 0;
loc_82400E88:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x82401120
	if (ctx.cr6.eq) goto loc_82401120;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82400818
	ctx.lr = 0x82400EA0;
	sub_82400818(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,17680
	ctx.r4.s64 = ctx.r11.s64 + 17680;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8269d898
	ctx.lr = 0x82400EB8;
	sub_8269D898(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82401120
	if (!ctx.cr6.eq) goto loc_82401120;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// li r27,0
	r27.s64 = 0;
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82400edc
	if (ctx.cr6.lt) goto loc_82400EDC;
	// mr r27,r28
	r27.u64 = r28.u64;
loc_82400EDC:
	// cntlzw r8,r26
	ctx.r8.u64 = r26.u32 == 0 ? 32 : __builtin_clz(r26.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r31,r30
	ctx.r9.u64 = r30.u64 - r31.u64;
	// rlwinm r8,r8,28,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x2;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82401120
	if (ctx.cr6.lt) goto loc_82401120;
	// lis r9,6690
	ctx.r9.s64 = 438435840;
	// stw r11,12(r25)
	REX_STORE_U32(r25.u32 + 12, ctx.r11.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,16(r25)
	REX_STORE_U32(r25.u32 + 16, ctx.r10.u32);
	// ori r9,r9,43686
	ctx.r9.u64 = ctx.r9.u64 | 43686;
	// stw r28,20(r25)
	REX_STORE_U32(r25.u32 + 20, r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,48(r25)
	REX_STORE_U32(r25.u32 + 48, ctx.r11.u32);
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// mullw r3,r11,r10
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r8,52(r25)
	REX_STORE_U32(r25.u32 + 52, ctx.r8.u32);
	// stw r28,56(r25)
	REX_STORE_U32(r25.u32 + 56, r28.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823f02b8
	ctx.lr = 0x82400F44;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r3.u32);
	// bne 0x82400f64
	if (!ctx.cr0.eq) goto loc_82400F64;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82401128
	goto loc_82401128;
loc_82400F5C:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// b 0x82400e88
	goto loc_82400E88;
loc_82400F64:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r31,r29
	ctx.r11.u64 = r31.u64 + r29.u64;
	// addic. r4,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r4.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// blt 0x82401118
	if (ctx.cr0.lt) goto loc_82401118;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
loc_82400F84:
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mullw r9,r4,r8
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// beq cr6,0x82401034
	if (ctx.cr6.eq) goto loc_82401034;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82401028
	if (ctx.cr6.eq) goto loc_82401028;
	// b 0x82401000
	goto loc_82401000;
loc_82400FB4:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r7,r9,0,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// rlwinm r6,r9,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r5,r9,24,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r7,r9,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r6,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82401000:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82400fb4
	if (!ctx.cr6.eq) goto loc_82400FB4;
	// b 0x82401110
	goto loc_82401110;
loc_8240100C:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82401028:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8240100c
	if (!ctx.cr6.eq) goto loc_8240100C;
	// b 0x82401110
	goto loc_82401110;
loc_82401034:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82401108
	if (ctx.cr6.eq) goto loc_82401108;
	// b 0x824010dc
	goto loc_824010DC;
loc_82401040:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r5,r9,0,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// rlwinm r6,r9,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r7,r9,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lfs f13,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r5,r9,0,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// rlwinm r6,r9,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r7,r9,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lfs f13,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// rlwinm r5,r9,0,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// rlwinm r6,r9,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r7,r9,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_824010DC:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82401040
	if (!ctx.cr6.eq) goto loc_82401040;
	// b 0x82401110
	goto loc_82401110;
loc_824010E8:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f13,12(r10)
	ea = 12 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82401108:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824010e8
	if (!ctx.cr6.eq) goto loc_824010E8;
loc_82401110:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x82400f84
	if (!ctx.cr0.lt) goto loc_82400F84;
loc_82401118:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82401128
	goto loc_82401128;
loc_82401120:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82401128:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824199A8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82419a30
	if (ctx.cr6.eq) goto loc_82419A30;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82419a30
	if (ctx.cr6.eq) goto loc_82419A30;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x824199f4
	if (!ctx.cr6.eq) goto loc_824199F4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824199f0
	if (ctx.cr6.eq) goto loc_824199F0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_824199D0:
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x824199d0
	if (!ctx.cr6.eq) goto loc_824199D0;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x824199f4
	goto loc_824199F4;
loc_824199F0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_824199F4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82419a04
	if (!ctx.cr6.eq) goto loc_82419A04;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82419a30
	if (!ctx.cr6.eq) goto loc_82419A30;
loc_82419A04:
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r6,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// stw r8,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// stw r5,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r5.u32);
	// blr 
	return;
loc_82419A30:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8241C940) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r5,r5,1100
	ctx.r5.s64 = ctx.r5.s64 + 1100;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,-29108
	ctx.r6.s64 = ctx.r11.s64 + -29108;
	// beq cr6,0x8241c984
	if (ctx.cr6.eq) goto loc_8241C984;
	// bl 0x8241a4f0
	ctx.lr = 0x8241C978;
	sub_8241A4F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// b 0x8241c988
	goto loc_8241C988;
loc_8241C984:
	// bl 0x8241a718
	ctx.lr = 0x8241C988;
	sub_8241A718(ctx, base);
loc_8241C988:
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

DEFINE_REX_FUNC(sub_82421CB8) {
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
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82421e64
	if (ctx.cr6.eq) goto loc_82421E64;
	// lwz r10,56(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82421e64
	if (ctx.cr6.eq) goto loc_82421E64;
	// lwz r10,80(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82421e64
	if (!ctx.cr6.eq) goto loc_82421E64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,76(r4)
	REX_STORE_U32(ctx.r4.u32 + 76, ctx.r9.u32);
	// beq cr6,0x82421d54
	if (ctx.cr6.eq) goto loc_82421D54;
	// lwz r9,16(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
loc_82421D0C:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,24(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r7,8(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,76(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r7,20(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82421d44
	if (!ctx.cr6.lt) goto loc_82421D44;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
loc_82421D44:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82421d0c
	if (ctx.cr6.lt) goto loc_82421D0C;
loc_82421D54:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82444708
	ctx.lr = 0x82421D64;
	sub_82444708(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82421d7c
	if (!ctx.cr0.eq) goto loc_82421D7C;
loc_82421D70:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82421e68
	goto loc_82421E68;
loc_82421D7C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82444708
	ctx.lr = 0x82421D8C;
	sub_82444708(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// beq 0x82421d70
	if (ctx.cr0.eq) goto loc_82421D70;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x82421DAC;
	sub_826A2E60(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x82421DC0;
	sub_826A2E60(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// ble cr6,0x82421e64
	if (!ctx.cr6.gt) goto loc_82421E64;
loc_82421DD8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82421e64
	if (ctx.cr6.eq) goto loc_82421E64;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r8,24(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 24);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,8(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,20(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// lwz r7,16(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm. r8,r8,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82421e50
	if (!ctx.cr0.eq) goto loc_82421E50;
	// lwz r7,112(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r6,80(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 80);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// stwx r8,r7,r6
	REX_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r8,84(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stwx r11,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u32);
loc_82421E50:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82421dd8
	if (ctx.cr6.lt) goto loc_82421DD8;
loc_82421E64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82421E68:
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

DEFINE_REX_FUNC(sub_8243C400) {
	REX_FUNC_PROLOGUE();
	// stw r4,1352(r3)
	REX_STORE_U32(ctx.r3.u32 + 1352, ctx.r4.u32);
	// stw r5,1344(r3)
	REX_STORE_U32(ctx.r3.u32 + 1344, ctx.r5.u32);
	// stw r6,1348(r3)
	REX_STORE_U32(ctx.r3.u32 + 1348, ctx.r6.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243CB70) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,205
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 205, ctx.xer);
	// beq cr6,0x8243cb98
	if (ctx.cr6.eq) goto loc_8243CB98;
	// cmpwi cr6,r11,206
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 206, ctx.xer);
	// bne cr6,0x8243cbf4
	if (!ctx.cr6.eq) goto loc_8243CBF4;
loc_8243CB98:
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8243cbf4
	if (!ctx.cr6.eq) goto loc_8243CBF4;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8243cbd4
	if (!ctx.cr6.lt) goto loc_8243CBD4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,67
	ctx.r10.s64 = 67;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8243CBD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243CBD4:
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 424);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8243CBE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,210
	ctx.r9.s64 = 210;
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// b 0x8243cc3c
	goto loc_8243CC3C;
loc_8243CBF4:
	// cmpwi cr6,r11,207
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 207, ctx.xer);
	// bne cr6,0x8243cc08
	if (!ctx.cr6.eq) goto loc_8243CC08;
	// li r11,210
	ctx.r11.s64 = 210;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x8243cc3c
	goto loc_8243CC3C;
loc_8243CC08:
	// cmpwi cr6,r11,210
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 210, ctx.xer);
	// beq cr6,0x8243cc3c
	if (ctx.cr6.eq) goto loc_8243CC3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r8,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8243CC3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243CC3C:
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8243cc78
	if (!ctx.cr6.eq) goto loc_8243CC78;
loc_8243CC4C:
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8243CC60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8243ccac
	if (ctx.cr6.eq) goto loc_8243CCAC;
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8243cc4c
	if (ctx.cr6.eq) goto loc_8243CC4C;
loc_8243CC78:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8243CC8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824c10f0
	ctx.lr = 0x8243CC94;
	sub_824C10F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_8243CCAC:
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

DEFINE_REX_FUNC(sub_82444708) {
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
	// bl 0x82448598
	ctx.lr = 0x82444728;
	sub_82448598(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82444608
	ctx.lr = 0x82444738;
	sub_82444608(ctx, base);
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

DEFINE_REX_FUNC(sub_82444C38) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82444c50
	if (ctx.cr6.eq) goto loc_82444C50;
loc_82444C48:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82444C50:
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82444d44
	if (ctx.cr6.gt) goto loc_82444D44;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,-8080
	ctx.r12.s64 = ctx.r12.s64 + -8080;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32188
	ctx.r12.s64 = -2109472768;
	// nop 
	// addi r12,r12,19584
	ctx.r12.s64 = ctx.r12.s64 + 19584;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82444C80;
	case 1:
		goto loc_82444C94;
	case 2:
		goto loc_82444C80;
	case 3:
		goto loc_82444C80;
	case 4:
		goto loc_82444C80;
	case 5:
		goto loc_82444CCC;
	case 6:
		goto loc_82444CCC;
	case 7:
		goto loc_82444CCC;
	case 8:
		goto loc_82444CCC;
	case 9:
		goto loc_82444CDC;
	case 10:
		goto loc_82444D0C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82444C80:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82444C8C:
	// beq cr6,0x82444d44
	if (ctx.cr6.eq) goto loc_82444D44;
	// b 0x82444c48
	goto loc_82444C48;
loc_82444C94:
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_82444C9C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82444cc0
	if (ctx.cr0.eq) goto loc_82444CC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82444c9c
	if (ctx.cr6.eq) goto loc_82444C9C;
loc_82444CC0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82444d44
	if (ctx.cr0.eq) goto loc_82444D44;
	// b 0x82444c48
	goto loc_82444C48;
loc_82444CCC:
	// lfd f0,8(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// lfd f13,8(r4)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// b 0x82444c8c
	goto loc_82444C8C;
loc_82444CDC:
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
loc_82444CE4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82444cc0
	if (ctx.cr0.eq) goto loc_82444CC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82444ce4
	if (ctx.cr6.eq) goto loc_82444CE4;
	// b 0x82444cc0
	goto loc_82444CC0;
loc_82444D0C:
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
loc_82444D14:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82444d38
	if (ctx.cr0.eq) goto loc_82444D38;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82444d14
	if (ctx.cr6.eq) goto loc_82444D14;
loc_82444D38:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_82444D44:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82449380) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82449388;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82444750
	ctx.lr = 0x82449398;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824493ac
	if (ctx.cr0.eq) goto loc_824493AC;
	// bl 0x82449270
	ctx.lr = 0x824493A4;
	sub_82449270(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x824493b0
	goto loc_824493B0;
loc_824493AC:
	// li r30,0
	r30.s64 = 0;
loc_824493B0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824493c0
	if (!ctx.cr6.eq) goto loc_824493C0;
loc_824493B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824494b4
	goto loc_824494B4;
loc_824493C0:
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// addi r10,r30,16
	ctx.r10.s64 = r30.s64 + 16;
	// std r11,16(r30)
	REX_STORE_U64(r30.u32 + 16, ctx.r11.u64);
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// std r11,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.r11.u64);
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// std r11,32(r30)
	REX_STORE_U64(r30.u32 + 32, ctx.r11.u64);
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// std r11,40(r30)
	REX_STORE_U64(r30.u32 + 40, ctx.r11.u64);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stw r11,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stw r11,56(r30)
	REX_STORE_U32(r30.u32 + 56, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stw r11,84(r30)
	REX_STORE_U32(r30.u32 + 84, ctx.r11.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// stw r11,88(r30)
	REX_STORE_U32(r30.u32 + 88, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244943c
	if (ctx.cr6.eq) goto loc_8244943C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82449430;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,60(r30)
	REX_STORE_U32(r30.u32 + 60, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824493b8
	if (ctx.cr0.eq) goto loc_824493B8;
loc_8244943C:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82449468
	if (ctx.cr6.eq) goto loc_82449468;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244945C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824493b8
	if (ctx.cr0.eq) goto loc_824493B8;
loc_82449468:
	// addi r29,r31,68
	r29.s64 = r31.s64 + 68;
	// li r28,0
	r28.s64 = 0;
	// subf r31,r31,r30
	r31.u64 = r30.u64 - r31.u64;
loc_82449474:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824494a0
	if (ctx.cr6.eq) goto loc_824494A0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82449494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r3,r31,r29
	REX_STORE_U32(r31.u32 + r29.u32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824493b8
	if (ctx.cr0.eq) goto loc_824493B8;
loc_824494A0:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(r28.u32, 4, ctx.xer);
	// blt cr6,0x82449474
	if (ctx.cr6.lt) goto loc_82449474;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824494B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82454DF8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,592(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 592);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824550A8) {
	REX_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,640(r12)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r12.u32 + 640);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824556E0) {
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
	ctx.lr = 0x824556E8;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1816(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1816);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82455820
	if (!ctx.cr6.gt) goto loc_82455820;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r22,r9,14012
	r22.s64 = ctx.r9.s64 + 14012;
	// addi r29,r10,18216
	r29.s64 = ctx.r10.s64 + 18216;
	// addi r28,r11,14000
	r28.s64 = ctx.r11.s64 + 14000;
loc_8245572C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82455688
	ctx.lr = 0x82455734;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82455824
	if (ctx.cr0.lt) goto loc_82455824;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x82455754;
	sub_82404168(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x8245576C;
	sub_82404168(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824555b8
	ctx.lr = 0x82455784;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82455824
	if (ctx.cr0.lt) goto loc_82455824;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x824557c4
	if (ctx.cr6.eq) goto loc_824557C4;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82404168
	ctx.lr = 0x824557AC;
	sub_82404168(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824555b8
	ctx.lr = 0x824557BC;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82455824
	if (ctx.cr0.lt) goto loc_82455824;
loc_824557C4:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x824557fc
	if (ctx.cr6.eq) goto loc_824557FC;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82404168
	ctx.lr = 0x824557E4;
	sub_82404168(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824555b8
	ctx.lr = 0x824557F4;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82455824
	if (ctx.cr0.lt) goto loc_82455824;
loc_824557FC:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824555b8
	ctx.lr = 0x82455808;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82455824
	if (ctx.cr0.lt) goto loc_82455824;
	// lwz r11,1816(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1816);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8245572c
	if (ctx.cr6.lt) goto loc_8245572C;
loc_82455820:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82455824:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8245E4D8) {
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
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r5,r11,17904
	ctx.r5.s64 = ctx.r11.s64 + 17904;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,20664
	ctx.r4.s64 = ctx.r10.s64 + 20664;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8245dfc0
	ctx.lr = 0x8245E508;
	sub_8245DFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82474740
	ctx.lr = 0x8245E510;
	sub_82474740(ctx, base);
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

DEFINE_REX_FUNC(sub_8245EC38) {
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
	// addi r5,r11,18800
	ctx.r5.s64 = ctx.r11.s64 + 18800;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8245dfc0
	ctx.lr = 0x8245EC64;
	sub_8245DFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824738b0
	ctx.lr = 0x8245EC6C;
	sub_824738B0(ctx, base);
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

DEFINE_REX_FUNC(sub_824620E8) {
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
	ctx.lr = 0x824620F0;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,260(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r7,3
	ctx.r7.s64 = 3;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r31,0
	r31.s64 = 0;
	// stw r7,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// li r30,1
	r30.s64 = 1;
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r5,r11,21208
	ctx.r5.s64 = ctx.r11.s64 + 21208;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// clrlwi r29,r8,12
	r29.u64 = ctx.r8.u32 & 0xFFFFF;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8245f158
	ctx.lr = 0x82462150;
	sub_8245F158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8246227c
	if (!ctx.cr0.eq) goto loc_8246227C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r27,r31
	r27.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lfd f31,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82462254
	if (ctx.cr6.eq) goto loc_82462254;
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,20(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r9,16(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 16);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,3728(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
loc_8246219C:
	// lwzx r11,r10,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r3,r3,0,23,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82462288
	if (ctx.cr0.eq) goto loc_82462288;
	// lwz r3,4(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r3,r3,0,23,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82462288
	if (ctx.cr0.eq) goto loc_82462288;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82462288
	if (!ctx.cr6.eq) goto loc_82462288;
	// lwz r3,8(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82462288
	if (!ctx.cr6.eq) goto loc_82462288;
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82462208
	if (!ctx.cr6.eq) goto loc_82462208;
	// lfd f12,32(r8)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r8.u32 + 32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// bne cr6,0x82462208
	if (!ctx.cr6.eq) goto loc_82462208;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// b 0x82462220
	goto loc_82462220;
loc_82462208:
	// lfd f12,32(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r8.u32 + 32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x82462288
	if (!ctx.cr6.eq) goto loc_82462288;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x82462288
	if (!ctx.cr6.eq) goto loc_82462288;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82462220:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, ctx.xer);
	// blt cr6,0x8246219c
	if (ctx.cr6.lt) goto loc_8246219C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82462244
	if (ctx.cr6.eq) goto loc_82462244;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82462288
	if (!ctx.cr6.eq) goto loc_82462288;
	// clrlwi r11,r29,12
	ctx.r11.u64 = r29.u32 & 0xFFFFF;
	// oris r27,r11,29520
	r27.u64 = ctx.r11.u64 | 1934622720;
loc_82462244:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82462254
	if (ctx.cr6.eq) goto loc_82462254;
	// clrlwi r11,r29,12
	ctx.r11.u64 = r29.u32 & 0xFFFFF;
	// oris r27,r11,29536
	r27.u64 = ctx.r11.u64 | 1935671296;
loc_82462254:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x8246225C;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8246226c
	if (ctx.cr0.eq) goto loc_8246226C;
	// bl 0x824773d0
	ctx.lr = 0x82462268;
	sub_824773D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8246226C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82462290
	if (!ctx.cr6.eq) goto loc_82462290;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_8246227C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
loc_82462288:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8246227c
	goto loc_8246227C;
loc_82462290:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b60
	ctx.lr = 0x824622A8;
	sub_82477B60(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bge 0x824622c8
	if (!ctx.cr0.lt) goto loc_824622C8;
loc_824622B4:
	// bl 0x82130e88
	ctx.lr = 0x824622B8;
	sub_82130E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b20
	ctx.lr = 0x824622C0;
	sub_82477B20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8246227c
	goto loc_8246227C;
loc_824622C8:
	// lwz r4,260(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 260);
	// bl 0x82477420
	ctx.lr = 0x824622D0;
	sub_82477420(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824622e4
	if (!ctx.cr0.lt) goto loc_824622E4;
loc_824622D8:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_824622DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x824622b4
	goto loc_824622B4;
loc_824622E4:
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
	ctx.lr = 0x824622FC;
	sub_826A1E70(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x826a1e70
	ctx.lr = 0x8246230C;
	sub_826A1E70(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 120);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82478758
	ctx.lr = 0x82462324;
	sub_82478758(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82462338
	if (!ctx.cr6.eq) goto loc_82462338;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x824622dc
	goto loc_824622DC;
loc_82462338:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82462354
	if (ctx.cr6.eq) goto loc_82462354;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_82462344:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stwx r3,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r3.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bdnz 0x82462344
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82462344;
loc_82462354:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,260(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 260);
	// bl 0x82477e80
	ctx.lr = 0x82462360;
	sub_82477E80(ctx, base);
	// b 0x824622d8
	goto loc_824622D8;
}

DEFINE_REX_FUNC(sub_824733C8) {
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
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824715b8
	ctx.lr = 0x824733E4;
	sub_824715B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247341c
	if (ctx.cr0.lt) goto loc_8247341C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82473400;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247341c
	if (ctx.cr0.lt) goto loc_8247341C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82468dd8
	ctx.lr = 0x82473410;
	sub_82468DD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247341c
	if (ctx.cr0.lt) goto loc_8247341C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247341C:
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

DEFINE_REX_FUNC(sub_824748C0) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// b 0x82473e60
	sub_82473E60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824750A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824750B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,108(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 108);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824750D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// bne cr6,0x82475108
	if (!ctx.cr6.eq) goto loc_82475108;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r4,108(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82475100;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// b 0x82475144
	goto loc_82475144;
loc_82475108:
	// cmplwi cr6,r3,17
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 17, ctx.xer);
	// bne cr6,0x82475118
	if (!ctx.cr6.eq) goto loc_82475118;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82475124
	goto loc_82475124;
loc_82475118:
	// cmplwi cr6,r3,18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 18, ctx.xer);
	// bne cr6,0x82475134
	if (!ctx.cr6.eq) goto loc_82475134;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82475124:
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// b 0x82475144
	goto loc_82475144;
loc_82475134:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82475144:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82477B60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82477B68;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r29,0
	r29.s64 = 0;
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// clrlwi r11,r4,12
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFFF;
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82477dbc
	if (!ctx.cr6.eq) goto loc_82477DBC;
	// rlwinm. r10,r4,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xF0000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82477d60
	if (ctx.cr0.eq) goto loc_82477D60;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82477d20
	if (ctx.cr6.eq) goto loc_82477D20;
	// lis r9,8192
	ctx.r9.s64 = 536870912;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82477d58
	if (ctx.cr6.eq) goto loc_82477D58;
	// lis r9,12288
	ctx.r9.s64 = 805306368;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82477d50
	if (ctx.cr6.eq) goto loc_82477D50;
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82477d48
	if (ctx.cr6.eq) goto loc_82477D48;
	// lis r9,20480
	ctx.r9.s64 = 1342177280;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82477cf0
	if (ctx.cr6.eq) goto loc_82477CF0;
	// lis r9,24576
	ctx.r9.s64 = 1610612736;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82477d68
	if (!ctx.cr6.eq) goto loc_82477D68;
	// lis r10,24736
	ctx.r10.s64 = 1621098496;
	// rlwinm r11,r4,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82477c7c
	if (ctx.cr6.gt) goto loc_82477C7C;
	// beq cr6,0x82477c74
	if (ctx.cr6.eq) goto loc_82477C74;
	// lis r10,24656
	ctx.r10.s64 = 1615855616;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82477c48
	if (ctx.cr6.gt) goto loc_82477C48;
	// beq cr6,0x82477c40
	if (ctx.cr6.eq) goto loc_82477C40;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82477c40
	if (ctx.cr6.eq) goto loc_82477C40;
	// lis r10,24592
	ctx.r10.s64 = 1611661312;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477c38
	if (ctx.cr6.eq) goto loc_82477C38;
	// lis r10,24608
	ctx.r10.s64 = 1612709888;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477c38
	if (ctx.cr6.eq) goto loc_82477C38;
	// lis r10,24624
	ctx.r10.s64 = 1613758464;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477c38
	if (ctx.cr6.eq) goto loc_82477C38;
	// lis r10,24640
	ctx.r10.s64 = 1614807040;
loc_82477C30:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82477d68
	if (!ctx.cr6.eq) goto loc_82477D68;
loc_82477C38:
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x82477ce8
	goto loc_82477CE8;
loc_82477C40:
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82477ce8
	goto loc_82477CE8;
loc_82477C48:
	// lis r10,24672
	ctx.r10.s64 = 1616904192;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477c38
	if (ctx.cr6.eq) goto loc_82477C38;
	// lis r10,24688
	ctx.r10.s64 = 1617952768;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477c38
	if (ctx.cr6.eq) goto loc_82477C38;
	// lis r10,24704
	ctx.r10.s64 = 1619001344;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477c38
	if (ctx.cr6.eq) goto loc_82477C38;
	// lis r10,24720
	ctx.r10.s64 = 1620049920;
	// b 0x82477c30
	goto loc_82477C30;
loc_82477C74:
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x82477ce8
	goto loc_82477CE8;
loc_82477C7C:
	// lis r10,24816
	ctx.r10.s64 = 1626341376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82477cb8
	if (ctx.cr6.gt) goto loc_82477CB8;
	// beq cr6,0x82477c74
	if (ctx.cr6.eq) goto loc_82477C74;
	// lis r10,24752
	ctx.r10.s64 = 1622147072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477ce4
	if (ctx.cr6.eq) goto loc_82477CE4;
	// lis r10,24768
	ctx.r10.s64 = 1623195648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477c38
	if (ctx.cr6.eq) goto loc_82477C38;
	// lis r10,24784
	ctx.r10.s64 = 1624244224;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477c38
	if (ctx.cr6.eq) goto loc_82477C38;
	// lis r10,24800
	ctx.r10.s64 = 1625292800;
	// b 0x82477c30
	goto loc_82477C30;
loc_82477CB8:
	// lis r10,24832
	ctx.r10.s64 = 1627389952;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477ce4
	if (ctx.cr6.eq) goto loc_82477CE4;
	// lis r10,24848
	ctx.r10.s64 = 1628438528;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477c38
	if (ctx.cr6.eq) goto loc_82477C38;
	// lis r10,24864
	ctx.r10.s64 = 1629487104;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477c38
	if (ctx.cr6.eq) goto loc_82477C38;
	// lis r10,24880
	ctx.r10.s64 = 1630535680;
	// b 0x82477c30
	goto loc_82477C30;
loc_82477CE4:
	// li r5,12
	ctx.r5.s64 = 12;
loc_82477CE8:
	// li r6,4
	ctx.r6.s64 = 4;
	// b 0x82477d68
	goto loc_82477D68;
loc_82477CF0:
	// rlwinm r10,r4,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82477d34
	if (ctx.cr6.eq) goto loc_82477D34;
	// lis r9,20496
	ctx.r9.s64 = 1343225856;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82477d20
	if (ctx.cr6.eq) goto loc_82477D20;
	// lis r9,20512
	ctx.r9.s64 = 1344274432;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82477d2c
	if (ctx.cr6.eq) goto loc_82477D2C;
	// lis r9,20528
	ctx.r9.s64 = 1345323008;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82477d68
	if (!ctx.cr6.eq) goto loc_82477D68;
loc_82477D20:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_82477D24:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// b 0x82477d68
	goto loc_82477D68;
loc_82477D2C:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x82477d40
	goto loc_82477D40;
loc_82477D34:
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x82477d68
	if (!ctx.cr6.eq) goto loc_82477D68;
loc_82477D40:
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82477d68
	goto loc_82477D68;
loc_82477D48:
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82477d24
	goto loc_82477D24;
loc_82477D50:
	// mulli r5,r11,3
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3));
	// b 0x82477d24
	goto loc_82477D24;
loc_82477D58:
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82477d24
	goto loc_82477D24;
loc_82477D60:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_82477D68:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82477d78
	if (!ctx.cr6.eq) goto loc_82477D78;
	// stw r5,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r5.u32);
loc_82477D78:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82477d88
	if (!ctx.cr6.eq) goto loc_82477D88;
	// stw r6,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r6.u32);
loc_82477D88:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82477db0
	if (!ctx.cr6.eq) goto loc_82477DB0;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82477db0
	if (!ctx.cr6.eq) goto loc_82477DB0;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82477db0
	if (ctx.cr6.eq) goto loc_82477DB0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82477dbc
	if (!ctx.cr6.eq) goto loc_82477DBC;
loc_82477DB0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82477e74
	goto loc_82477E74;
loc_82477DBC:
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(r31.u32, 8, ctx.xer);
	// bgt cr6,0x82477de8
	if (ctx.cr6.gt) goto loc_82477DE8;
	// addi r11,r30,64
	ctx.r11.s64 = r30.s64 + 64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_82477DD0:
	// lwz r31,12(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// bgt cr6,0x82477e14
	if (ctx.cr6.gt) goto loc_82477E14;
	// addi r11,r30,96
	ctx.r11.s64 = r30.s64 + 96;
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// b 0x82477e34
	goto loc_82477E34;
loc_82477DE8:
	// bl 0x82448598
	ctx.lr = 0x82477DEC;
	sub_82448598(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82444608
	ctx.lr = 0x82477DFC;
	sub_82444608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// bne 0x82477dd0
	if (!ctx.cr0.eq) goto loc_82477DD0;
loc_82477E08:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82477e74
	goto loc_82477E74;
loc_82477E14:
	// bl 0x82448598
	ctx.lr = 0x82477E18;
	sub_82448598(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82444608
	ctx.lr = 0x82477E28;
	sub_82444608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// beq 0x82477e08
	if (ctx.cr0.eq) goto loc_82477E08;
loc_82477E34:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r4,255
	ctx.r4.s64 = 255;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x82477E48;
	sub_826A2E60(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r4,255
	ctx.r4.s64 = 255;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x82477E5C;
	sub_826A2E60(ctx, base);
	// stw r29,36(r30)
	REX_STORE_U32(r30.u32 + 36, r29.u32);
	// stw r29,40(r30)
	REX_STORE_U32(r30.u32 + 40, r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,44(r30)
	REX_STORE_U32(r30.u32 + 44, r29.u32);
	// stw r29,56(r30)
	REX_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r29,60(r30)
	REX_STORE_U32(r30.u32 + 60, r29.u32);
loc_82477E74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82495368) {
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
	ctx.lr = 0x82495370;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824953e4
	if (ctx.cr6.eq) goto loc_824953E4;
	// lwz r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// rlwinm. r10,r11,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824953d4
	if (ctx.cr0.eq) goto loc_824953D4;
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// bne cr6,0x824953b0
	if (!ctx.cr6.eq) goto loc_824953B0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-12248
	ctx.r6.s64 = ctx.r11.s64 + -12248;
	// b 0x824953c0
	goto loc_824953C0;
loc_824953B0:
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(r31.s32, 8, ctx.xer);
	// bne cr6,0x82495470
	if (!ctx.cr6.eq) goto loc_82495470;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-12292
	ctx.r6.s64 = ctx.r11.s64 + -12292;
loc_824953C0:
	// li r5,3048
	ctx.r5.s64 = 3048;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82494d48
	ctx.lr = 0x824953D0;
	sub_82494D48(ctx, base);
	// b 0x82495470
	goto loc_82495470;
loc_824953D4:
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// lwz r3,28(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// bl 0x82444890
	ctx.lr = 0x824953E0;
	sub_82444890(ctx, base);
	// stw r3,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r3.u32);
loc_824953E4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824953EC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82495410
	if (ctx.cr0.eq) goto loc_82495410;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-12300
	ctx.r6.s64 = ctx.r11.s64 + -12300;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x82495408;
	sub_82444918(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82495414
	goto loc_82495414;
loc_82495410:
	// li r29,0
	r29.s64 = 0;
loc_82495414:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82495470
	if (ctx.cr6.eq) goto loc_82495470;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82444750
	ctx.lr = 0x82495424;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249544c
	if (ctx.cr0.eq) goto loc_8249544C;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r5,20(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824453f8
	ctx.lr = 0x82495444;
	sub_824453F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82495450
	goto loc_82495450;
loc_8249544C:
	// li r31,0
	r31.s64 = 0;
loc_82495450:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82495470
	if (ctx.cr6.eq) goto loc_82495470;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82495180
	ctx.lr = 0x82495468;
	sub_82495180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82495478
	if (!ctx.cr0.lt) goto loc_82495478;
loc_82495470:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82495488
	goto loc_82495488;
loc_82495478:
	// stw r31,8(r29)
	REX_STORE_U32(r29.u32 + 8, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r26,28(r31)
	REX_STORE_U32(r31.u32 + 28, r26.u32);
loc_82495488:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8249C3D0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r4,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8249af20
	ctx.lr = 0x8249C3FC;
	sub_8249AF20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8249c424
	if (!ctx.cr0.lt) goto loc_8249C424;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,3058
	ctx.r5.s64 = 3058;
	// addi r6,r11,-10432
	ctx.r6.s64 = ctx.r11.s64 + -10432;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82494d48
	ctx.lr = 0x8249C41C;
	sub_82494D48(ctx, base);
loc_8249C41C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8249c48c
	goto loc_8249C48C;
loc_8249C424:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82444750
	ctx.lr = 0x8249C42C;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249c444
	if (ctx.cr0.eq) goto loc_8249C444;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82445ff8
	ctx.lr = 0x8249C440;
	sub_82445FF8(ctx, base);
	// b 0x8249c448
	goto loc_8249C448;
loc_8249C444:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249C448:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8249c41c
	if (ctx.cr6.eq) goto loc_8249C41C;
	// addi r11,r1,172
	ctx.r11.s64 = ctx.r1.s64 + 172;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8249c47c
	if (ctx.cr6.eq) goto loc_8249C47C;
loc_8249C45C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bne cr6,0x8249c47c
	if (!ctx.cr6.eq) goto loc_8249C47C;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8249c45c
	if (!ctx.cr6.eq) goto loc_8249C45C;
loc_8249C47C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,172(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
loc_8249C48C:
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

DEFINE_REX_FUNC(sub_824A8198) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,284(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,276(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 276);
	// lwz r11,272(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r9,r9,24,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824A9E70) {
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
	ctx.lr = 0x824A9E78;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,12(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// li r21,0
	r21.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x824a9ec8
	if (ctx.cr6.eq) goto loc_824A9EC8;
	// li r28,0
	r28.s64 = 0;
loc_824A9E9C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,256(r31)
	REX_STORE_U32(r31.u32 + 256, r29.u32);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// bl 0x824605a0
	ctx.lr = 0x824A9EB4;
	sub_824605A0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824a9e9c
	if (ctx.cr6.lt) goto loc_824A9E9C;
loc_824A9EC8:
	// li r26,0
	r26.s64 = 0;
	// lis r19,24656
	r19.s64 = 1615855616;
	// lis r17,24768
	r17.s64 = 1623195648;
	// lis r14,24704
	r14.s64 = 1619001344;
	// lis r15,24784
	r15.s64 = 1624244224;
	// lis r16,24864
	r16.s64 = 1629487104;
	// lis r18,24576
	r18.s64 = 1610612736;
	// lis r20,4352
	r20.s64 = 285212672;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x824aa354
	if (ctx.cr6.eq) goto loc_824AA354;
	// li r25,0
	r25.s64 = 0;
loc_824A9EF4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r26,256(r31)
	REX_STORE_U32(r31.u32 + 256, r26.u32);
	// lwzx r4,r11,r25
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// stw r4,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r4.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// beq cr6,0x824a9f8c
	if (ctx.cr6.eq) goto loc_824A9F8C;
	// lis r10,24816
	ctx.r10.s64 = 1626341376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824a9f8c
	if (ctx.cr6.eq) goto loc_824A9F8C;
	// lis r10,24736
	ctx.r10.s64 = 1621098496;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824a9f8c
	if (ctx.cr6.eq) goto loc_824A9F8C;
	// lis r10,24608
	ctx.r10.s64 = 1612709888;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824a9f8c
	if (ctx.cr6.eq) goto loc_824A9F8C;
	// lis r10,24688
	ctx.r10.s64 = 1617952768;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824a9f8c
	if (ctx.cr6.eq) goto loc_824A9F8C;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// beq cr6,0x824a9f8c
	if (ctx.cr6.eq) goto loc_824A9F8C;
	// lis r10,24848
	ctx.r10.s64 = 1628438528;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824a9f8c
	if (ctx.cr6.eq) goto loc_824A9F8C;
	// lis r10,24624
	ctx.r10.s64 = 1613758464;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824a9f8c
	if (ctx.cr6.eq) goto loc_824A9F8C;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r14.u32, ctx.xer);
	// beq cr6,0x824a9f8c
	if (ctx.cr6.eq) goto loc_824A9F8C;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r15.u32, ctx.xer);
	// beq cr6,0x824a9f8c
	if (ctx.cr6.eq) goto loc_824A9F8C;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r16.u32, ctx.xer);
	// beq cr6,0x824a9f8c
	if (ctx.cr6.eq) goto loc_824A9F8C;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// beq cr6,0x824a9f8c
	if (ctx.cr6.eq) goto loc_824A9F8C;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// bne cr6,0x824aa328
	if (!ctx.cr6.eq) goto loc_824AA328;
loc_824A9F8C:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// rlwinm r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// clrlwi r29,r11,12
	r29.u64 = ctx.r11.u32 & 0xFFFFF;
	// subf r11,r10,r20
	ctx.r11.u64 = r20.u64 - ctx.r10.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r27,r11,r29
	r27.u64 = ctx.r11.u64 & r29.u64;
	// beq cr6,0x824aa034
	if (ctx.cr6.eq) goto loc_824AA034;
	// rlwinm r28,r27,2,0,29
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_824A9FB8:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bne cr6,0x824aa034
	if (!ctx.cr6.eq) goto loc_824AA034;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm. r10,r10,0,11,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F0000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824aa034
	if (!ctx.cr0.eq) goto loc_824AA034;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,128(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824aa018
	if (!ctx.cr6.eq) goto loc_824AA018;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,112(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824AA010;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// b 0x824aa020
	goto loc_824AA020;
loc_824AA018:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
loc_824AA020:
	// bne cr6,0x824aa034
	if (!ctx.cr6.eq) goto loc_824AA034;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// blt cr6,0x824a9fb8
	if (ctx.cr6.lt) goto loc_824A9FB8;
loc_824AA034:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// bne cr6,0x824aa218
	if (!ctx.cr6.eq) goto loc_824AA218;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// bne cr6,0x824aa218
	if (!ctx.cr6.eq) goto loc_824AA218;
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,340(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824AA078;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824aa8a4
	if (ctx.cr0.lt) goto loc_824AA8A4;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824AA088;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824aa09c
	if (ctx.cr0.eq) goto loc_824AA09C;
	// bl 0x824773d0
	ctx.lr = 0x824AA094;
	sub_824773D0(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// b 0x824aa0a0
	goto loc_824AA0A0;
loc_824AA09C:
	// li r21,0
	r21.s64 = 0;
loc_824AA0A0:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824aa478
	if (ctx.cr6.eq) goto loc_824AA478;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82477b60
	ctx.lr = 0x824AA0C4;
	sub_82477B60(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824aa88c
	if (ctx.cr0.lt) goto loc_824AA88C;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x82477420
	ctx.lr = 0x824AA0D8;
	sub_82477420(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824aa88c
	if (ctx.cr0.lt) goto loc_824AA88C;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r10,8(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 8);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,16(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 16);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,16(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 16);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x824785e8
	ctx.lr = 0x824AA12C;
	sub_824785E8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824aa88c
	if (ctx.cr0.lt) goto loc_824AA88C;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824AA13C;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824aa150
	if (ctx.cr0.eq) goto loc_824AA150;
	// bl 0x824773d0
	ctx.lr = 0x824AA148;
	sub_824773D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x824aa154
	goto loc_824AA154;
loc_824AA150:
	// li r29,0
	r29.s64 = 0;
loc_824AA154:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824aa484
	if (ctx.cr6.eq) goto loc_824AA484;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lis r4,24656
	ctx.r4.s64 = 1615855616;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82477b60
	ctx.lr = 0x824AA17C;
	sub_82477B60(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// blt 0x824aa494
	if (ctx.cr0.lt) goto loc_824AA494;
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x82477420
	ctx.lr = 0x824AA190;
	sub_82477420(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824aa490
	if (ctx.cr0.lt) goto loc_824AA490;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r1,72
	ctx.r9.s64 = ctx.r1.s64 + 72;
	// li r11,8
	ctx.r11.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824AA1A8:
	// lwz r8,260(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r8,-8(r10)
	REX_STORE_U32(ctx.r10.u32 + -8, ctx.r8.u32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824aa1a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AA1A8;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x824AA1EC;
	sub_826A1E70(ctx, base);
	// lwz r30,260(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 260);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824aa208
	if (ctx.cr6.eq) goto loc_824AA208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82130e88
	ctx.lr = 0x824AA200;
	sub_82130E88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82477b20
	ctx.lr = 0x824AA208;
	sub_82477B20(ctx, base);
loc_824AA208:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stwx r29,r11,r25
	REX_STORE_U32(ctx.r11.u32 + r25.u32, r29.u32);
	// stw r29,260(r31)
	REX_STORE_U32(r31.u32 + 260, r29.u32);
	// b 0x824aa320
	goto loc_824AA320;
loc_824AA218:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// beq cr6,0x824aa324
	if (ctx.cr6.eq) goto loc_824AA324;
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
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,340(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824AA248;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824aa8a4
	if (ctx.cr0.lt) goto loc_824AA8A4;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824AA258;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824aa26c
	if (ctx.cr0.eq) goto loc_824AA26C;
	// bl 0x824773d0
	ctx.lr = 0x824AA264;
	sub_824773D0(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// b 0x824aa270
	goto loc_824AA270;
loc_824AA26C:
	// li r21,0
	r21.s64 = 0;
loc_824AA270:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824aa478
	if (ctx.cr6.eq) goto loc_824AA478;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82477b60
	ctx.lr = 0x824AA298;
	sub_82477B60(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824aa88c
	if (ctx.cr0.lt) goto loc_824AA88C;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x82477420
	ctx.lr = 0x824AA2AC;
	sub_82477420(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824aa88c
	if (ctx.cr0.lt) goto loc_824AA88C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824aa30c
	if (ctx.cr6.eq) goto loc_824AA30C;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_824AA2C8:
	// lwz r9,260(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(r21.u32 + 8);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stwx r9,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r9,16(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 16);
	// stwx r8,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r9,16(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 16);
	// lwz r8,260(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r9,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x824aa2c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AA2C8;
loc_824AA30C:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824785e8
	ctx.lr = 0x824AA318;
	sub_824785E8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824aa88c
	if (ctx.cr0.lt) goto loc_824AA88C;
loc_824AA320:
	// li r21,0
	r21.s64 = 0;
loc_824AA324:
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 260);
loc_824AA328:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82478998
	ctx.lr = 0x824AA330;
	sub_82478998(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824aa8a4
	if (ctx.cr0.lt) goto loc_824AA8A4;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(r26.u32, r24.u32, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blt cr6,0x824a9ef4
	if (ctx.cr6.lt) goto loc_824A9EF4;
loc_824AA354:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x824AA35C;
	sub_8245FCB8(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// lwz r22,12(r31)
	r22.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x824aa8a4
	if (ctx.cr6.eq) goto loc_824AA8A4;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r23,8208
	r23.s64 = 537919488;
	// lis r24,4192
	r24.s64 = 274726912;
	// ori r29,r11,16385
	r29.u64 = ctx.r11.u64 | 16385;
	// lis r25,20480
	r25.s64 = 1342177280;
	// lis r26,24880
	r26.s64 = 1630535680;
	// lis r27,28848
	r27.s64 = 1890582528;
loc_824AA388:
	// stw r28,256(r31)
	REX_STORE_U32(r31.u32 + 256, r28.u32);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824aa3bc
	if (ctx.cr6.eq) goto loc_824AA3BC;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bne cr6,0x824aa3bc
	if (!ctx.cr6.eq) goto loc_824AA3BC;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stw r11,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r11.u32);
loc_824AA3BC:
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824aa3f8
	if (ctx.cr0.eq) goto loc_824AA3F8;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824aa3f8
	if (ctx.cr6.eq) goto loc_824AA3F8;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x824aa8b0
	if (!ctx.cr6.eq) goto loc_824AA8B0;
loc_824AA3F8:
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// bgt cr6,0x824aa68c
	if (ctx.cr6.gt) goto loc_824AA68C;
	// beq cr6,0x824aa74c
	if (ctx.cr6.eq) goto loc_824AA74C;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bgt cr6,0x824aa57c
	if (ctx.cr6.gt) goto loc_824AA57C;
	// beq cr6,0x824aa848
	if (ctx.cr6.eq) goto loc_824AA848;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bgt cr6,0x824aa4dc
	if (ctx.cr6.gt) goto loc_824AA4DC;
	// beq cr6,0x824aa4d0
	if (ctx.cr6.eq) goto loc_824AA4D0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824aa854
	if (ctx.cr6.eq) goto loc_824AA854;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa4c4
	if (ctx.cr6.eq) goto loc_824AA4C4;
	// lis r10,4112
	ctx.r10.s64 = 269484032;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa4b8
	if (ctx.cr6.eq) goto loc_824AA4B8;
	// lis r10,4144
	ctx.r10.s64 = 271581184;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa4ac
	if (ctx.cr6.eq) goto loc_824AA4AC;
	// lis r10,4160
	ctx.r10.s64 = 272629760;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa4a0
	if (ctx.cr6.eq) goto loc_824AA4A0;
	// lis r10,4176
	ctx.r10.s64 = 273678336;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824aa86c
	if (!ctx.cr6.eq) goto loc_824AA86C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
loc_824AA468:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824AA474;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824aa850
	goto loc_824AA850;
loc_824AA478:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824aa8a8
	goto loc_824AA8A8;
loc_824AA484:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x824aa8a4
	goto loc_824AA8A4;
loc_824AA490:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_824AA494:
	// bl 0x82130e88
	ctx.lr = 0x824AA498;
	sub_82130E88(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x824aa8a0
	goto loc_824AA8A0;
loc_824AA4A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA4AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA4B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA4C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA4D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA4DC:
	// lis r10,4208
	ctx.r10.s64 = 275775488;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa570
	if (ctx.cr6.eq) goto loc_824AA570;
	// lis r10,4304
	ctx.r10.s64 = 282066944;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa550
	if (ctx.cr6.eq) goto loc_824AA550;
	// lis r10,4320
	ctx.r10.s64 = 283115520;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa538
	if (ctx.cr6.eq) goto loc_824AA538;
	// lis r10,4336
	ctx.r10.s64 = 284164096;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa830
	if (ctx.cr6.eq) goto loc_824AA830;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// beq cr6,0x824aa52c
	if (ctx.cr6.eq) goto loc_824AA52C;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824aa86c
	if (!ctx.cr6.eq) goto loc_824AA86C;
loc_824AA520:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a7fd8
	ctx.lr = 0x824AA528;
	sub_824A7FD8(ctx, base);
	// b 0x824aa850
	goto loc_824AA850;
loc_824AA52C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA538:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824aa568
	if (ctx.cr0.eq) goto loc_824AA568;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA550:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824aa568
	if (ctx.cr0.eq) goto loc_824AA568;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,224(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA568:
	// mr r30,r29
	r30.u64 = r29.u64;
	// b 0x824aa854
	goto loc_824AA854;
loc_824AA570:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA57C:
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bgt cr6,0x824aa624
	if (ctx.cr6.gt) goto loc_824AA624;
	// beq cr6,0x824aa618
	if (ctx.cr6.eq) goto loc_824AA618;
	// lis r10,8224
	ctx.r10.s64 = 538968064;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa60c
	if (ctx.cr6.eq) goto loc_824AA60C;
	// lis r10,8240
	ctx.r10.s64 = 540016640;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa600
	if (ctx.cr6.eq) goto loc_824AA600;
	// lis r10,8256
	ctx.r10.s64 = 541065216;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa5f4
	if (ctx.cr6.eq) goto loc_824AA5F4;
	// lis r10,8272
	ctx.r10.s64 = 542113792;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa5e8
	if (ctx.cr6.eq) goto loc_824AA5E8;
	// lis r10,8304
	ctx.r10.s64 = 544210944;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa5dc
	if (ctx.cr6.eq) goto loc_824AA5DC;
	// lis r10,12288
	ctx.r10.s64 = 805306368;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824aa86c
	if (!ctx.cr6.eq) goto loc_824AA86C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA5DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,260(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA5E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA5F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA600:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a7ba8
	ctx.lr = 0x824AA608;
	sub_824A7BA8(ctx, base);
	// b 0x824aa850
	goto loc_824AA850;
loc_824AA60C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a7ce0
	ctx.lr = 0x824AA614;
	sub_824A7CE0(ctx, base);
	// b 0x824aa850
	goto loc_824AA850;
loc_824AA618:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA624:
	// lis r9,20528
	ctx.r9.s64 = 1345323008;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824aa680
	if (ctx.cr6.eq) goto loc_824AA680;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// beq cr6,0x824aa74c
	if (ctx.cr6.eq) goto loc_824AA74C;
	// lis r9,24592
	ctx.r9.s64 = 1611661312;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824aa6e8
	if (ctx.cr6.eq) goto loc_824AA6E8;
	// lis r9,24608
	ctx.r9.s64 = 1612709888;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824aa740
	if (ctx.cr6.eq) goto loc_824AA740;
	// lis r9,24624
	ctx.r9.s64 = 1613758464;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824aa734
	if (ctx.cr6.eq) goto loc_824AA734;
	// lis r9,24640
	ctx.r9.s64 = 1614807040;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824aa86c
	if (!ctx.cr6.eq) goto loc_824AA86C;
loc_824AA668:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824aa8d4
	if (ctx.cr0.eq) goto loc_824AA8D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,276(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 276);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA680:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 232);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA68C:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bgt cr6,0x824aa758
	if (ctx.cr6.gt) goto loc_824AA758;
	// beq cr6,0x824aa668
	if (ctx.cr6.eq) goto loc_824AA668;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// bgt cr6,0x824aa6f4
	if (ctx.cr6.gt) goto loc_824AA6F4;
	// beq cr6,0x824aa740
	if (ctx.cr6.eq) goto loc_824AA740;
	// lis r9,24672
	ctx.r9.s64 = 1616904192;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824aa6e8
	if (ctx.cr6.eq) goto loc_824AA6E8;
	// lis r9,24688
	ctx.r9.s64 = 1617952768;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824aa740
	if (ctx.cr6.eq) goto loc_824AA740;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r14.u32, ctx.xer);
	// beq cr6,0x824aa734
	if (ctx.cr6.eq) goto loc_824AA734;
	// lis r9,24720
	ctx.r9.s64 = 1620049920;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824aa668
	if (ctx.cr6.eq) goto loc_824AA668;
	// lis r10,24736
	ctx.r10.s64 = 1621098496;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa74c
	if (ctx.cr6.eq) goto loc_824AA74C;
	// lis r10,24752
	ctx.r10.s64 = 1622147072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824aa86c
	if (!ctx.cr6.eq) goto loc_824AA86C;
loc_824AA6E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,280(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 280);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA6F4:
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r15.u32, ctx.xer);
	// beq cr6,0x824aa734
	if (ctx.cr6.eq) goto loc_824AA734;
	// lis r9,24800
	ctx.r9.s64 = 1625292800;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824aa668
	if (ctx.cr6.eq) goto loc_824AA668;
	// lis r10,24816
	ctx.r10.s64 = 1626341376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa74c
	if (ctx.cr6.eq) goto loc_824AA74C;
	// lis r10,24832
	ctx.r10.s64 = 1627389952;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa6e8
	if (ctx.cr6.eq) goto loc_824AA6E8;
	// lis r10,24848
	ctx.r10.s64 = 1628438528;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa740
	if (ctx.cr6.eq) goto loc_824AA740;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r16.u32, ctx.xer);
	// bne cr6,0x824aa86c
	if (!ctx.cr6.eq) goto loc_824AA86C;
loc_824AA734:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,272(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA740:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,268(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA74C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,264(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA758:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bgt cr6,0x824aa7e8
	if (ctx.cr6.gt) goto loc_824AA7E8;
	// beq cr6,0x824aa520
	if (ctx.cr6.eq) goto loc_824AA520;
	// lis r10,28672
	ctx.r10.s64 = 1879048192;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa7dc
	if (ctx.cr6.eq) goto loc_824AA7DC;
	// lis r10,28688
	ctx.r10.s64 = 1880096768;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa7d0
	if (ctx.cr6.eq) goto loc_824AA7D0;
	// lis r10,28704
	ctx.r10.s64 = 1881145344;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa7c4
	if (ctx.cr6.eq) goto loc_824AA7C4;
	// lis r10,28720
	ctx.r10.s64 = 1882193920;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa7b8
	if (ctx.cr6.eq) goto loc_824AA7B8;
	// lis r10,28736
	ctx.r10.s64 = 1883242496;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa7b8
	if (ctx.cr6.eq) goto loc_824AA7B8;
	// lis r10,28800
	ctx.r10.s64 = 1887436800;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824aa86c
	if (!ctx.cr6.eq) goto loc_824AA86C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,284(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA7B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA7C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA7D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA7DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,196(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA7E8:
	// lis r10,28864
	ctx.r10.s64 = 1891631104;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa848
	if (ctx.cr6.eq) goto loc_824AA848;
	// lis r10,28880
	ctx.r10.s64 = 1892679680;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa83c
	if (ctx.cr6.eq) goto loc_824AA83C;
	// lis r10,29520
	ctx.r10.s64 = 1934622720;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa830
	if (ctx.cr6.eq) goto loc_824AA830;
	// lis r10,29536
	ctx.r10.s64 = 1935671296;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa830
	if (ctx.cr6.eq) goto loc_824AA830;
	// lis r10,29552
	ctx.r10.s64 = 1936719872;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824aa830
	if (ctx.cr6.eq) goto loc_824AA830;
	// lis r10,29568
	ctx.r10.s64 = 1937768448;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824aa86c
	if (!ctx.cr6.eq) goto loc_824AA86C;
loc_824AA830:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA83C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,148(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x824aa468
	goto loc_824AA468;
loc_824AA848:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a7e18
	ctx.lr = 0x824AA850;
	sub_824A7E18(ctx, base);
loc_824AA850:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_824AA854:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// beq cr6,0x824aa870
	if (ctx.cr6.eq) goto loc_824AA870;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r22
	ctx.cr6.compare<uint32_t>(r28.u32, r22.u32, ctx.xer);
	// blt cr6,0x824aa388
	if (ctx.cr6.lt) goto loc_824AA388;
	// b 0x824aa8a4
	goto loc_824AA8A4;
loc_824AA86C:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_824AA870:
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
	ctx.lr = 0x824AA88C;
	sub_82489C30(ctx, base);
loc_824AA88C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824aa8a4
	if (ctx.cr6.eq) goto loc_824AA8A4;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82130e88
	ctx.lr = 0x824AA89C;
	sub_82130E88(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_824AA8A0:
	// bl 0x82477b20
	ctx.lr = 0x824AA8A4;
	sub_82477B20(ctx, base);
loc_824AA8A4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824AA8A8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd0
	return;
loc_824AA8B0:
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
	ctx.lr = 0x824AA8C8;
	sub_82489C30(ctx, base);
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
	// b 0x824aa8a4
	goto loc_824AA8A4;
loc_824AA8D4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,60(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// li r5,4532
	ctx.r5.s64 = 4532;
	// addi r6,r11,-4632
	ctx.r6.s64 = ctx.r11.s64 + -4632;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82489c30
	ctx.lr = 0x824AA8EC;
	sub_82489C30(ctx, base);
	// mr r30,r29
	r30.u64 = r29.u64;
	// b 0x824aa8a4
	goto loc_824AA8A4;
}

DEFINE_REX_FUNC(sub_824E4528) {
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
	// lwz r30,132(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824e4558
	goto loc_824E4558;
loc_824E4548:
	// li r5,4088
	ctx.r5.s64 = 4088;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826a2e60
	ctx.lr = 0x824E4554;
	sub_826A2E60(ctx, base);
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_824E4558:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x824e4548
	if (!ctx.cr6.eq) goto loc_824E4548;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r10.u32);
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
	// bl 0x826a2e60
	ctx.lr = 0x824E4580;
	sub_826A2E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4458
	ctx.lr = 0x824E4588;
	sub_824E4458(ctx, base);
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

DEFINE_REX_FUNC(sub_824E8260) {
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
	ctx.lr = 0x824E8268;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r15,r7
	r15.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824e828c
	if (ctx.cr6.eq) goto loc_824E828C;
	// bl 0x826b40a0
	ctx.lr = 0x824E828C;
	sub_826B40A0(ctx, base);
loc_824E828C:
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// lwz r30,0(r15)
	r30.u64 = REX_LOAD_U32(r15.u32 + 0);
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e82a8
	if (!ctx.cr0.eq) goto loc_824E82A8;
	// bl 0x826b40a0
	ctx.lr = 0x824E82A8;
	sub_826B40A0(ctx, base);
loc_824E82A8:
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwzu r28,4(r31)
	ea = 4 + r31.u32;
	r28.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// clrlwi r27,r29,21
	r27.u64 = r29.u32 & 0x7FF;
	// rlwimi r11,r29,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rlwinm r3,r11,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// addi r17,r31,8
	r17.s64 = r31.s64 + 8;
	// bl 0x824e5c68
	ctx.lr = 0x824E82D4;
	sub_824E5C68(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r19,33
	r19.s64 = 33;
	// or r22,r10,r9
	r22.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r19,0(r30)
	REX_STORE_U32(r30.u32 + 0, r19.u32);
	// rlwinm. r11,r29,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r22,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r22.u32);
	r30.u32 = ea;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r30,4
	ctx.r9.s64 = r30.s64 + 4;
	// beq 0x824e8308
	if (ctx.cr0.eq) goto loc_824E8308;
	// li r8,256
	ctx.r8.s64 = 256;
loc_824E8308:
	// rlwinm. r11,r29,8,28,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x824e8344
	if (ctx.cr0.eq) goto loc_824E8344;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824e8330
	if (ctx.cr0.eq) goto loc_824E8330;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-19976
	ctx.r10.s64 = ctx.r10.s64 + -19976;
	// b 0x824e8338
	goto loc_824E8338;
loc_824E8330:
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-19992
	ctx.r10.s64 = ctx.r10.s64 + -19992;
loc_824E8338:
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r11,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
loc_824E8344:
	// rlwinm. r11,r29,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r18,r10,r8
	r18.u64 = ctx.r10.u64 | ctx.r8.u64;
	// addi r31,r9,4
	r31.s64 = ctx.r9.s64 + 4;
	// beq 0x824e8360
	if (ctx.cr0.eq) goto loc_824E8360;
	// ori r11,r18,1
	ctx.r11.u64 = r18.u64 | 1;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// b 0x824e8364
	goto loc_824E8364;
loc_824E8360:
	// stw r18,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r18.u32);
loc_824E8364:
	// rlwinm r11,r28,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFF0000;
	// lis r9,228
	ctx.r9.s64 = 14942208;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// addi r30,r10,-19960
	r30.s64 = ctx.r10.s64 + -19960;
	// beq cr6,0x824e83c0
	if (ctx.cr6.eq) goto loc_824E83C0;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// rlwinm r11,r11,18,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xC;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r8,r9,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lwzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwzx r8,r8,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r30.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r9,r9,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r9,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// or r21,r10,r11
	r21.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x824e83c4
	goto loc_824E83C4;
loc_824E83C0:
	// li r21,12816
	r21.s64 = 12816;
loc_824E83C4:
	// rlwinm r26,r28,0,4,7
	r26.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xF000000;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824e5b18
	ctx.lr = 0x824E83D0;
	sub_824E5B18(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824e6198
	ctx.lr = 0x824E83E4;
	sub_824E6198(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x824e8410
	if (!ctx.cr6.eq) goto loc_824E8410;
	// cmplwi cr6,r21,12816
	ctx.cr6.compare<uint32_t>(r21.u32, 12816, ctx.xer);
	// bne cr6,0x824e8410
	if (!ctx.cr6.eq) goto loc_824E8410;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r25,r3,16
	r25.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r10,r11,16,10,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F0000;
	// clrlwi r24,r11,26
	r24.u64 = ctx.r11.u32 & 0x3F;
	// or r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 | r25.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x824e8434
	goto loc_824E8434;
loc_824E8410:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r25,r3,16
	r25.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// or r9,r23,r21
	ctx.r9.u64 = r23.u64 | r21.u64;
	// or r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 | r25.u64;
	// clrlwi r24,r11,26
	r24.u64 = ctx.r11.u32 & 0x3F;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stwu r9,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r31.u32 = ea;
loc_824E8434:
	// rlwinm r11,r28,14,26,31
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 14) & 0x3F;
	// addi r10,r27,8
	ctx.r10.s64 = r27.s64 + 8;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r27,r10,16
	r27.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r10,r9,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r8,r28,18,28,29
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 18) & 0xC;
	// oris r7,r27,1
	ctx.r7.u64 = r27.u64 | 65536;
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// stw r7,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r8,r8,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r30.u32);
	// lwzx r9,r9,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r30,r9,r11
	r30.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r14,r30,29
	r14.u64 = r30.u32 & 0x7;
	// bl 0x824e5b18
	ctx.lr = 0x824E8494;
	sub_824E5B18(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824e6198
	ctx.lr = 0x824E84A8;
	sub_824E6198(ctx, base);
	// rlwinm r11,r30,4,25,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0x70;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// or r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 | r14.u64;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// or r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 | r14.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stwu r10,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r31.u32 = ea;
	// rlwinm. r9,r29,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// or r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 | r26.u64;
	// or r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 | r14.u64;
	// stwu r11,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r31.u32 = ea;
	// stwu r19,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, r19.u32);
	r31.u32 = ea;
	// stwu r22,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, r22.u32);
	r31.u32 = ea;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// beq 0x824e8500
	if (ctx.cr0.eq) goto loc_824E8500;
	// ori r9,r18,4
	ctx.r9.u64 = r18.u64 | 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x824e8504
	goto loc_824E8504;
loc_824E8500:
	// stw r18,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r18.u32);
loc_824E8504:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x824e8528
	if (!ctx.cr6.eq) goto loc_824E8528;
	// cmplwi cr6,r21,12816
	ctx.cr6.compare<uint32_t>(r21.u32, 12816, ctx.xer);
	// bne cr6,0x824e8528
	if (!ctx.cr6.eq) goto loc_824E8528;
	// rlwinm r9,r24,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 | r25.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x824e8540
	goto loc_824E8540;
loc_824E8528:
	// rlwinm r9,r24,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 16) & 0xFFFF0000;
	// or r8,r23,r21
	ctx.r8.u64 = r23.u64 | r21.u64;
	// oris r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 4194304;
	// or r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 | r25.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
loc_824E8540:
	// rlwinm r9,r30,28,29,31
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0x7;
	// rlwinm r8,r30,0,25,27
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x70;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 | ctx.r9.u64;
	// oris r7,r27,65
	ctx.r7.u64 = r27.u64 | 4259840;
	// li r6,50
	ctx.r6.s64 = 50;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// or r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 | r26.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r15)
	REX_STORE_U32(r15.u32 + 0, ctx.r11.u32);
	// stw r17,0(r16)
	REX_STORE_U32(r16.u32 + 0, r17.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82503B18) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r8,4(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
loc_82503B2C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82503b88
	if (ctx.cr6.eq) goto loc_82503B88;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82503b58
	if (ctx.cr0.eq) goto loc_82503B58;
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// beq 0x82503b5c
	if (ctx.cr0.eq) goto loc_82503B5C;
loc_82503B58:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82503B5C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82503b88
	if (ctx.cr0.eq) goto loc_82503B88;
	// rlwinm r11,r11,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFF;
	// clrlwi. r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// beq 0x82503b80
	if (ctx.cr0.eq) goto loc_82503B80;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x82503b84
	goto loc_82503B84;
loc_82503B80:
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
loc_82503B84:
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
loc_82503B88:
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x82503b2c
	goto loc_82503B2C;
}

DEFINE_REX_FUNC(sub_825095F8) {
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
	ctx.lr = 0x82509600;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r17,r7
	r17.u64 = ctx.r7.u64;
	// addi r30,r1,208
	r30.s64 = ctx.r1.s64 + 208;
	// li r28,4
	r28.s64 = 4;
	// li r22,0
	r22.s64 = 0;
loc_82509624:
	// stw r18,0(r30)
	REX_STORE_U32(r30.u32 + 0, r18.u32);
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// lwz r11,792(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 792);
	// std r22,8(r30)
	REX_STORE_U64(r30.u32 + 8, r22.u64);
	// std r22,16(r30)
	REX_STORE_U64(r30.u32 + 16, r22.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r22,24(r30)
	REX_STORE_U64(r30.u32 + 24, r22.u64);
	// std r22,32(r30)
	REX_STORE_U64(r30.u32 + 32, r22.u64);
	// bne cr6,0x8250964c
	if (!ctx.cr6.eq) goto loc_8250964C;
	// li r11,32
	ctx.r11.s64 = 32;
loc_8250964C:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x82509664
	if (!ctx.cr6.lt) goto loc_82509664;
	// subfic r5,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r5.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251ed40
	ctx.lr = 0x82509664;
	sub_8251ED40(ctx, base);
loc_82509664:
	// ld r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 8);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ld r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U64(r29.u32 + 16);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// ld r9,24(r29)
	ctx.r9.u64 = REX_LOAD_U64(r29.u32 + 24);
	// ld r8,32(r29)
	ctx.r8.u64 = REX_LOAD_U64(r29.u32 + 32);
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// std r10,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r10.u64);
	// std r9,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r9.u64);
	// std r8,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r8.u64);
	// bne 0x82509624
	if (!ctx.cr0.eq) goto loc_82509624;
	// mr r25,r22
	r25.u64 = r22.u64;
	// mr r26,r22
	r26.u64 = r22.u64;
	// addi r27,r1,208
	r27.s64 = ctx.r1.s64 + 208;
	// li r20,1
	r20.s64 = 1;
	// li r19,2
	r19.s64 = 2;
	// li r21,-1
	r21.s64 = -1;
loc_825096A8:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// slw r29,r20,r25
	r29.u64 = r25.u8 & 0x20 ? 0 : (r20.u32 << (r25.u8 & 0x3F));
	// rlwinm r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// and. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825099f4
	if (!ctx.cr0.eq) goto loc_825099F4;
	// lwz r30,4(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 4);
	// mr r28,r22
	r28.u64 = r22.u64;
loc_825096CC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8250975c
	if (ctx.cr6.eq) goto loc_8250975C;
	// lwz r31,16(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82509754
	if (ctx.cr6.eq) goto loc_82509754;
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r8,r7,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82509754
	if (ctx.cr0.eq) goto loc_82509754;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82509724
	if (ctx.cr6.eq) goto loc_82509724;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_82509700:
	// rlwinm r6,r7,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r6,r6,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r6,r20,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r6.u8 & 0x3F));
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82509700
	if (ctx.cr6.lt) goto loc_82509700;
loc_82509724:
	// and. r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 & r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82509754
	if (ctx.cr0.eq) goto loc_82509754;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82509750
	if (ctx.cr6.eq) goto loc_82509750;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(r28.u32, r31.u32, ctx.xer);
	// beq cr6,0x82509754
	if (ctx.cr6.eq) goto loc_82509754;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82504578
	ctx.lr = 0x82509748;
	sub_82504578(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82509754
	if (ctx.cr0.eq) goto loc_82509754;
loc_82509750:
	// mr r28,r31
	r28.u64 = r31.u64;
loc_82509754:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x825096cc
	goto loc_825096CC;
loc_8250975C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825099f4
	if (ctx.cr6.eq) goto loc_825099F4;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_82509768:
	// lwz r8,8(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250989c
	if (!ctx.cr0.eq) goto loc_8250989C;
	// rlwinm r11,r8,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x8250989c
	if (ctx.cr6.eq) goto loc_8250989C;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82509788:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250989c
	if (ctx.cr6.eq) goto loc_8250989C;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825097a8
	if (ctx.cr6.eq) goto loc_825097A8;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r7,r9,0,4,6
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x825097b0
	if (!ctx.cr0.eq) goto loc_825097B0;
loc_825097A8:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82509788
	goto loc_82509788;
loc_825097B0:
	// rlwinm. r11,r9,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825097c4
	if (ctx.cr0.eq) goto loc_825097C4;
	// rlwimi r8,r9,20,19,26
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x1FE0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r4,r8,31,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0xFFF;
	// b 0x82509894
	goto loc_82509894;
loc_825097C4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_825097C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82509800
	if (ctx.cr6.eq) goto loc_82509800;
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x825097f8
	if (ctx.cr6.eq) goto loc_825097F8;
	// lwz r9,8(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x825097f8
	if (!ctx.cr6.eq) goto loc_825097F8;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82509804
	if (!ctx.cr0.eq) goto loc_82509804;
loc_825097F8:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825097c8
	goto loc_825097C8;
loc_82509800:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
loc_82509804:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8250989c
	if (ctx.cr6.eq) goto loc_8250989C;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82509824
	if (ctx.cr6.eq) goto loc_82509824;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r11,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8250982c
	if (!ctx.cr0.eq) goto loc_8250982C;
loc_82509824:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82509804
	goto loc_82509804;
loc_8250982C:
	// rlwinm. r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250989c
	if (ctx.cr0.eq) goto loc_8250989C;
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// addi r9,r1,216
	ctx.r9.s64 = ctx.r1.s64 + 216;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// rlwimi r10,r11,20,19,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// rlwinm r4,r10,31,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xFFF;
	// rlwinm r11,r4,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r10,r4,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// clrldi r5,r5,58
	ctx.r5.u64 = ctx.r5.u64 & 0x3F;
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// sld r10,r19,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x40 ? 0 : (r19.u64 << (ctx.r5.u8 & 0x7F));
	// ldx r9,r3,r9
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + ctx.r9.u32);
	// clrldi r11,r11,58
	ctx.r11.u64 = ctx.r11.u64 & 0x3F;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sld r5,r21,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x40 ? 0 : (r21.u64 << (ctx.r11.u8 & 0x7F));
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// srd r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825092a0
	ctx.lr = 0x82509890;
	sub_825092A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82509894:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825023b0
	ctx.lr = 0x8250989C;
	sub_825023B0(ctx, base);
loc_8250989C:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// beq cr6,0x82509928
	if (ctx.cr6.eq) goto loc_82509928;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x82509904
	if (ctx.cr6.eq) goto loc_82509904;
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_825098B8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82509904
	if (ctx.cr6.eq) goto loc_82509904;
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r30,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825098fc
	if (ctx.cr0.eq) goto loc_825098FC;
	// rlwinm. r11,r30,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825098fc
	if (ctx.cr0.eq) goto loc_825098FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f75b8
	ctx.lr = 0x825098DC;
	sub_824F75B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825098fc
	if (ctx.cr0.eq) goto loc_825098FC;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r11,r30,20,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 20) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r4,r11,31,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFF;
	// bl 0x82502350
	ctx.lr = 0x825098FC;
	sub_82502350(ctx, base);
loc_825098FC:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x825098b8
	goto loc_825098B8;
loc_82509904:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250991c
	if (ctx.cr0.eq) goto loc_8250991C;
	// mr r29,r22
	r29.u64 = r22.u64;
	// b 0x82509768
	goto loc_82509768;
loc_8250991C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r29,r11,-40
	r29.s64 = ctx.r11.s64 + -40;
	// b 0x82509768
	goto loc_82509768;
loc_82509928:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_8250992C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82509978
	if (ctx.cr6.eq) goto loc_82509978;
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r30,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82509970
	if (ctx.cr0.eq) goto loc_82509970;
	// rlwinm. r11,r30,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82509970
	if (ctx.cr0.eq) goto loc_82509970;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f75b8
	ctx.lr = 0x82509950;
	sub_824F75B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82509970
	if (ctx.cr0.eq) goto loc_82509970;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r11,r30,20,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 20) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r4,r11,31,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFF;
	// bl 0x82502350
	ctx.lr = 0x82509970;
	sub_82502350(ctx, base);
loc_82509970:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8250992c
	goto loc_8250992C;
loc_82509978:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82509990
	if (ctx.cr0.eq) goto loc_82509990;
	// mr r29,r22
	r29.u64 = r22.u64;
	// b 0x82509998
	goto loc_82509998;
loc_82509990:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r29,r11,-40
	r29.s64 = ctx.r11.s64 + -40;
loc_82509998:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(r29.u32, r24.u32, ctx.xer);
	// beq cr6,0x825099f4
	if (ctx.cr6.eq) goto loc_825099F4;
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82509928
	if (!ctx.cr0.eq) goto loc_82509928;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
loc_825099B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82509928
	if (ctx.cr6.eq) goto loc_82509928;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825099d0
	if (ctx.cr6.eq) goto loc_825099D0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r8,r10,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x825099d8
	if (!ctx.cr0.eq) goto loc_825099D8;
loc_825099D0:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825099b0
	goto loc_825099B0;
loc_825099D8:
	// rlwinm. r11,r10,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82509928
	if (ctx.cr0.eq) goto loc_82509928;
	// rlwimi r9,r10,20,19,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1FE0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE01F);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rlwinm r4,r9,31,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0xFFF;
	// bl 0x82502350
	ctx.lr = 0x825099F0;
	sub_82502350(ctx, base);
	// b 0x82509928
	goto loc_82509928;
loc_825099F4:
	// addi r26,r26,5
	r26.s64 = r26.s64 + 5;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,40
	r27.s64 = r27.s64 + 40;
	// cmplwi cr6,r26,20
	ctx.cr6.compare<uint32_t>(r26.u32, 20, ctx.xer);
	// blt cr6,0x825096a8
	if (ctx.cr6.lt) goto loc_825096A8;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// stw r18,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r18.u32);
	// lwz r11,792(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r22,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r22.u64);
	// std r22,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r22.u64);
	// std r22,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, r22.u64);
	// std r22,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, r22.u64);
	// bne cr6,0x82509a30
	if (!ctx.cr6.eq) goto loc_82509A30;
	// li r11,32
	ctx.r11.s64 = 32;
loc_82509A30:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x82509a48
	if (!ctx.cr6.lt) goto loc_82509A48;
	// subfic r5,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r5.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8251ed40
	ctx.lr = 0x82509A48;
	sub_8251ED40(ctx, base);
loc_82509A48:
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// lwz r6,8(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 8);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// rlwinm r26,r6,31,1,31
	r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// std r21,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r21.u64);
	// std r21,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r21.u64);
	// std r21,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r21.u64);
	// std r21,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, r21.u64);
loc_82509A6C:
	// slw r11,r20,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r7.u8 & 0x3F));
	// and r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & r26.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82509ab0
	if (ctx.cr0.eq) goto loc_82509AB0;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82509A8C:
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r5,8(r10)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ldx r9,r9,r4
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r4.u32);
	// and r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ctx.r5.u64;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82509a8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82509A8C;
loc_82509AB0:
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r8,20
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 20, ctx.xer);
	// blt cr6,0x82509a6c
	if (ctx.cr6.lt) goto loc_82509A6C;
	// rlwinm r25,r6,18,29,31
	r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x7;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82509490
	ctx.lr = 0x82509AD8;
	sub_82509490(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82509d54
	if (ctx.cr6.eq) goto loc_82509D54;
	// clrlwi r27,r26,28
	r27.u64 = r26.u32 & 0xF;
loc_82509AE4:
	// li r9,4
	ctx.r9.s64 = 4;
	// rlwinm r28,r3,28,4,31
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82509B00:
	// slw r9,r20,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r6.u8 & 0x3F));
	// and r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 & r26.u64;
	// clrlwi. r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82509b94
	if (ctx.cr0.eq) goto loc_82509B94;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r28,28,6,31
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 28) & 0x3FFFFFF;
	// addi r5,r9,3
	ctx.r5.s64 = ctx.r9.s64 + 3;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// clrldi r5,r5,58
	ctx.r5.u64 = ctx.r5.u64 & 0x3F;
	// rlwinm r4,r7,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// sld r7,r19,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x40 ? 0 : (r19.u64 << (ctx.r5.u8 & 0x7F));
	// ldx r5,r4,r3
	ctx.r5.u64 = REX_LOAD_U64(ctx.r4.u32 + ctx.r3.u32);
	// clrldi r9,r9,58
	ctx.r9.u64 = ctx.r9.u64 & 0x3F;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// sld r4,r21,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x40 ? 0 : (r21.u64 << (ctx.r9.u8 & 0x7F));
	// and r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 & ctx.r5.u64;
	// lis r5,-28311
	ctx.r5.s64 = -1855389696;
	// and r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 & ctx.r4.u64;
	// lis r4,0
	ctx.r4.s64 = 0;
	// srd r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r9.u8 & 0x7F));
	// ori r5,r5,5192
	ctx.r5.u64 = ctx.r5.u64 | 5192;
	// ori r4,r4,36262
	ctx.r4.u64 = ctx.r4.u64 | 36262;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// srd r5,r5,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r9.u8 & 0x7F));
	// stwx r10,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// srd r5,r5,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r5,r5,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r9.u8 & 0x7F));
	// stwx r9,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// clrlwi r9,r5,29
	ctx.r9.u64 = ctx.r5.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r9,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
loc_82509B94:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82509b00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82509B00;
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
loc_82509BBC:
	// slw r11,r20,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r6.u8 & 0x3F));
	// and r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & r26.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82509c04
	if (ctx.cr0.eq) goto loc_82509C04;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82509BE0:
	// slw r10,r20,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r9.u8 & 0x3F));
	// and. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82509bf8
	if (ctx.cr0.eq) goto loc_82509BF8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82509BF8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82509be0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82509BE0;
loc_82509C04:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// blt cr6,0x82509bbc
	if (ctx.cr6.lt) goto loc_82509BBC;
	// mr r30,r22
	r30.u64 = r22.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_82509C20:
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r31,r22
	r31.u64 = r22.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82509C38:
	// slw r10,r20,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r11.u8 & 0x3F));
	// and. r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82509c58
	if (ctx.cr0.eq) goto loc_82509C58;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82509c58
	if (!ctx.cr6.lt) goto loc_82509C58;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_82509C58:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82509c38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82509C38;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82509d5c
	if (ctx.cr6.eq) goto loc_82509D5C;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r7,5
	ctx.r7.s64 = 5;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// lwzx r4,r9,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82509C90:
	// slw r5,r20,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r8.u8 & 0x3F));
	// and. r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82509cb0
	if (ctx.cr0.eq) goto loc_82509CB0;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82509cb0
	if (!ctx.cr6.lt) goto loc_82509CB0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_82509CB0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x82509c90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82509C90;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82509d7c
	if (ctx.cr6.eq) goto loc_82509D7C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82509d7c
	if (ctx.cr6.eq) goto loc_82509D7C;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwzx r8,r9,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,4
	ctx.r9.s64 = 4;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// or r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 | ctx.r3.u64;
	// slw r7,r7,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// slw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r8.u8 & 0x3F));
	// stwx r22,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, r22.u32);
	// andc r7,r30,r7
	ctx.r7.u64 = r30.u64 & ~ctx.r7.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// or r30,r7,r8
	r30.u64 = ctx.r7.u64 | ctx.r8.u64;
loc_82509D10:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwzx r8,r11,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// and. r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82509d38
	if (ctx.cr0.eq) goto loc_82509D38;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// stwx r8,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwx r8,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
loc_82509D38:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82509d10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82509D10;
	// slw r11,r20,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (r20.u32 << (r31.u8 & 0x3F));
	// subf. r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82509c20
	if (!ctx.cr0.eq) goto loc_82509C20;
	// stw r30,0(r17)
	REX_STORE_U32(r17.u32 + 0, r30.u32);
	// rlwimi r3,r28,4,0,27
	ctx.r3.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r3.u64 & 0xFFFFFFFF0000000F);
loc_82509D54:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x826a1cdc
	return;
loc_82509D5C:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r28,1
	ctx.r4.s64 = r28.s64 + 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82509490
	ctx.lr = 0x82509D70;
	sub_82509490(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82509ae4
	if (!ctx.cr6.eq) goto loc_82509AE4;
	// b 0x82509d54
	goto loc_82509D54;
loc_82509D7C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4368
	ctx.lr = 0x82509D88;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_8256E668) {
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
	ctx.lr = 0x8256E670;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r23,0
	r23.s64 = 0;
	// bl 0x82557ea0
	ctx.lr = 0x8256E680;
	sub_82557EA0(ctx, base);
loc_8256E680:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
loc_8256E684:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8256e7bc
	if (ctx.cr6.eq) goto loc_8256E7BC;
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// rlwinm. r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256e798
	if (ctx.cr0.eq) goto loc_8256E798;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r26,0
	r26.s64 = 0;
	// li r25,0
	r25.s64 = 0;
loc_8256E6B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8256e6c8
	if (ctx.cr6.eq) goto loc_8256E6C8;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// b 0x8256e6b4
	goto loc_8256E6B4;
loc_8256E6C8:
	// li r29,1
	r29.s64 = 1;
loc_8256E6CC:
	// lwz r27,8(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 8);
loc_8256E6D0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8256e790
	if (ctx.cr6.eq) goto loc_8256E790;
	// lwz r30,4(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256e6f0
	if (ctx.cr0.eq) goto loc_8256E6F0;
	// li r31,0
	r31.s64 = 0;
	// b 0x8256e6fc
	goto loc_8256E6FC;
loc_8256E6F0:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r31,r11,-40
	r31.s64 = ctx.r11.s64 + -40;
loc_8256E6FC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,11136
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11136, ctx.xer);
	// beq cr6,0x8256e720
	if (ctx.cr6.eq) goto loc_8256E720;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7510
	ctx.lr = 0x8256E718;
	sub_824F7510(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x8256e72c
	if (!ctx.cr6.eq) goto loc_8256E72C;
loc_8256E720:
	// lwz r27,12(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 12);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// b 0x8256e6d0
	goto loc_8256E6D0;
loc_8256E72C:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(r29.u32, r26.u32, ctx.xer);
	// beq cr6,0x8256e754
	if (ctx.cr6.eq) goto loc_8256E754;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82563170
	ctx.lr = 0x8256E74C;
	sub_82563170(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x8256e6cc
	goto loc_8256E6CC;
loc_8256E754:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
loc_8256E758:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8256e774
	if (ctx.cr6.eq) goto loc_8256E774;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, ctx.xer);
	// bne cr6,0x8256e778
	if (!ctx.cr6.eq) goto loc_8256E778;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8256e758
	goto loc_8256E758;
loc_8256E774:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8256E778:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82560258
	ctx.lr = 0x8256E790;
	sub_82560258(ctx, base);
loc_8256E790:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x8256e7a4
	if (!ctx.cr6.eq) goto loc_8256E7A4;
loc_8256E798:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8256e684
	goto loc_8256E684;
loc_8256E7A4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8255cda0
	ctx.lr = 0x8256E7AC;
	sub_8255CDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8256c548
	ctx.lr = 0x8256E7B8;
	sub_8256C548(ctx, base);
	// b 0x8256e680
	goto loc_8256E680;
loc_8256E7BC:
	// lwz r11,40(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 40);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256ead4
	if (ctx.cr0.eq) goto loc_8256EAD4;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256ead4
	if (!ctx.cr0.eq) goto loc_8256EAD4;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8256ead4
	if (ctx.cr0.eq) goto loc_8256EAD4;
loc_8256E7E0:
	// lwz r11,28(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256eab8
	if (!ctx.cr0.eq) goto loc_8256EAB8;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8256eab8
	if (ctx.cr0.eq) goto loc_8256EAB8;
loc_8256E7F8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82550318
	ctx.lr = 0x8256E800;
	sub_82550318(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256ea9c
	if (ctx.cr0.eq) goto loc_8256EA9C;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,12288
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12288, ctx.xer);
	// bne cr6,0x8256e82c
	if (!ctx.cr6.eq) goto loc_8256E82C;
	// rlwinm r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8256e830
	if (ctx.cr6.gt) goto loc_8256E830;
loc_8256E82C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8256E830:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r26
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825c5df0
	ctx.lr = 0x8256E860;
	sub_825C5DF0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r28,r11,30
	r28.u64 = ctx.r11.u32 & 0x3;
	// lwz r27,88(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8256e8cc
	if (!ctx.cr6.eq) goto loc_8256E8CC;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 384, ctx.xer);
	// bne cr6,0x8256e8cc
	if (!ctx.cr6.eq) goto loc_8256E8CC;
	// lwz r31,44(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7010
	ctx.lr = 0x8256E898;
	sub_824F7010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256e8cc
	if (ctx.cr0.eq) goto loc_8256E8CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8256e8cc
	if (!ctx.cr6.eq) goto loc_8256E8CC;
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r28,r11,30
	r28.u64 = ctx.r11.u32 & 0x3;
loc_8256E8CC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8256eaf8
	if (!ctx.cr6.eq) goto loc_8256EAF8;
	// rlwinm. r11,r27,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256eaf8
	if (!ctx.cr0.eq) goto loc_8256EAF8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82550808
	ctx.lr = 0x8256E8F0;
	sub_82550808(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256eaf8
	if (ctx.cr0.eq) goto loc_8256EAF8;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8256ea9c
	if (ctx.cr6.eq) goto loc_8256EA9C;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15104
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15104, ctx.xer);
	// bne cr6,0x8256ea68
	if (!ctx.cr6.eq) goto loc_8256EA68;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// beq cr6,0x8256ea20
	if (ctx.cr6.eq) goto loc_8256EA20;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r30,12(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,7040
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7040, ctx.xer);
	// bne cr6,0x8256eaf0
	if (!ctx.cr6.eq) goto loc_8256EAF0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825bba68
	ctx.lr = 0x8256E948;
	sub_825BBA68(ctx, base);
	// lwz r4,44(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 44);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8256E954;
	sub_8250AD28(ctx, base);
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r3,44(r28)
	REX_STORE_U32(r28.u32 + 44, ctx.r3.u32);
	// stw r25,28(r28)
	REX_STORE_U32(r28.u32 + 28, r25.u32);
	// rlwinm r10,r28,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r31,r11,36
	r31.s64 = ctx.r11.s64 + 36;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// sth r11,14(r28)
	REX_STORE_U16(r28.u32 + 14, ctx.r11.u16);
	// addi r11,r10,36
	ctx.r11.s64 = ctx.r10.s64 + 36;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r8,r31,-36
	ctx.r8.s64 = r31.s64 + -36;
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r7,r10,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825bba68
	ctx.lr = 0x8256E9A8;
	sub_825BBA68(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,44(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8256E9B8;
	sub_8250AD28(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82503400
	ctx.lr = 0x8256E9CC;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8256E9D8;
	sub_8250AD28(ctx, base);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// stw r25,28(r30)
	REX_STORE_U32(r30.u32 + 28, r25.u32);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r31,-36
	ctx.r8.s64 = r31.s64 + -36;
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// sth r9,14(r30)
	REX_STORE_U16(r30.u32 + 14, ctx.r9.u16);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
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
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_8256EA20:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8256ea38
	goto loc_8256EA38;
loc_8256EA30:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8256EA38:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x8256ea30
	if (!ctx.cr6.eq) goto loc_8256EA30;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwimi r11,r9,3,27,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x8256ea98
	goto loc_8256EA98;
loc_8256EA68:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8256ea7c
	goto loc_8256EA7C;
loc_8256EA74:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8256EA7C:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x8256ea74
	if (!ctx.cr6.eq) goto loc_8256EA74;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
loc_8256EA98:
	// stw r30,12(r29)
	REX_STORE_U32(r29.u32 + 12, r30.u32);
loc_8256EA9C:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256eab8
	if (!ctx.cr0.eq) goto loc_8256EAB8;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8256e7f8
	if (!ctx.cr6.eq) goto loc_8256E7F8;
loc_8256EAB8:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256ead4
	if (!ctx.cr0.eq) goto loc_8256EAD4;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8256e7e0
	if (!ctx.cr6.eq) goto loc_8256E7E0;
loc_8256EAD4:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x8256eae8
	if (!ctx.cr6.eq) goto loc_8256EAE8;
	// lwz r11,40(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 40);
	// addi r11,r11,-1024
	ctx.r11.s64 = ctx.r11.s64 + -1024;
	// stw r11,40(r24)
	REX_STORE_U32(r24.u32 + 40, ctx.r11.u32);
loc_8256EAE8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_8256EAF0:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x8256EAF8;
	sub_824E4368(ctx, base);
loc_8256EAF8:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824e4368
	ctx.lr = 0x8256EB04;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_8258A3E0) {
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
	ctx.lr = 0x8258A3E8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,584(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8258a414
	if (ctx.cr0.eq) goto loc_8258A414;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8258a420
	goto loc_8258A420;
loc_8258A414:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8258A420:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// li r6,117
	ctx.r6.s64 = 117;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,76(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r19,-4(r10)
	r19.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// oris r10,r9,4096
	ctx.r10.u64 = ctx.r9.u64 | 268435456;
	// stw r10,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// bl 0x825bb860
	ctx.lr = 0x8258A46C;
	sub_825BB860(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// bl 0x825bb860
	ctx.lr = 0x8258A498;
	sub_825BB860(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x8250adf0
	ctx.lr = 0x8258A4B4;
	sub_8250ADF0(ctx, base);
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 560);
	// clrlwi. r30,r30,24
	r30.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,560(r31)
	REX_STORE_U32(r31.u32 + 560, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// beq 0x8258a4dc
	if (ctx.cr0.eq) goto loc_8258A4DC;
	// mr r29,r20
	r29.u64 = r20.u64;
	// b 0x8258a510
	goto loc_8258A510;
loc_8258A4DC:
	// lwz r11,36(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258ac90
	if (ctx.cr6.eq) goto loc_8258AC90;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8258ac90
	if (!ctx.cr6.eq) goto loc_8258AC90;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258ac84
	if (ctx.cr6.eq) goto loc_8258AC84;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8258ac84
	if (!ctx.cr6.eq) goto loc_8258AC84;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_8258A510:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r28,0
	r28.s64 = 0;
	// bl 0x825898c0
	ctx.lr = 0x8258A524;
	sub_825898C0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8258a59c
	if (!ctx.cr6.eq) goto loc_8258A59C;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82589980
	ctx.lr = 0x8258A534;
	sub_82589980(ctx, base);
	// b 0x8258a59c
	goto loc_8258A59C;
loc_8258A538:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8258a570
	if (!ctx.cr6.eq) goto loc_8258A570;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258a558
	if (ctx.cr6.eq) goto loc_8258A558;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8258a584
	goto loc_8258A584;
loc_8258A558:
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257ec10
	ctx.lr = 0x8258A56C;
	sub_8257EC10(ctx, base);
	// b 0x8258a584
	goto loc_8258A584;
loc_8258A570:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257eb90
	ctx.lr = 0x8258A584;
	sub_8257EB90(ctx, base);
loc_8258A584:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258a5ec
	if (ctx.cr0.eq) goto loc_8258A5EC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
loc_8258A59C:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82589980
	ctx.lr = 0x8258A5A4;
	sub_82589980(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8258a538
	if (!ctx.cr0.eq) goto loc_8258A538;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r21,1
	r21.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8258a5c8
	if (ctx.cr6.eq) goto loc_8258A5C8;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258a5e4
	if (!ctx.cr0.eq) goto loc_8258A5E4;
loc_8258A5C8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8258a5f8
	if (ctx.cr6.eq) goto loc_8258A5F8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8258a5e4
	if (ctx.cr6.eq) goto loc_8258A5E4;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258a5f8
	if (!ctx.cr0.eq) goto loc_8258A5F8;
loc_8258A5E4:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// b 0x8258a5fc
	goto loc_8258A5FC;
loc_8258A5EC:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258A5F8;
	sub_824E4368(ctx, base);
loc_8258A5F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258A5FC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258aa30
	if (ctx.cr0.eq) goto loc_8258AA30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82580bd0
	ctx.lr = 0x8258A60C;
	sub_82580BD0(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x825c69a0
	ctx.lr = 0x8258A620;
	sub_825C69A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r27,0
	r27.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// bl 0x825898c0
	ctx.lr = 0x8258A644;
	sub_825898C0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8258a654
	if (!ctx.cr6.eq) goto loc_8258A654;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82589980
	ctx.lr = 0x8258A654;
	sub_82589980(ctx, base);
loc_8258A654:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8255db50
	ctx.lr = 0x8258A660;
	sub_8255DB50(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82584600
	ctx.lr = 0x8258A66C;
	sub_82584600(ctx, base);
loc_8258A66C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82589980
	ctx.lr = 0x8258A674;
	sub_82589980(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8258a6dc
	if (ctx.cr0.eq) goto loc_8258A6DC;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8258a6b4
	if (!ctx.cr6.eq) goto loc_8258A6B4;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258a69c
	if (ctx.cr6.eq) goto loc_8258A69C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8258a6c4
	goto loc_8258A6C4;
loc_8258A69C:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257ec10
	ctx.lr = 0x8258A6B0;
	sub_8257EC10(ctx, base);
	// b 0x8258a6c4
	goto loc_8258A6C4;
loc_8258A6B4:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257eb90
	ctx.lr = 0x8258A6C4;
	sub_8257EB90(ctx, base);
loc_8258A6C4:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258a9a0
	if (ctx.cr0.eq) goto loc_8258A9A0;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mullw r23,r10,r11
	r23.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x8258a98c
	goto loc_8258A98C;
loc_8258A6DC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8258a75c
	if (ctx.cr6.eq) goto loc_8258A75C;
	// slw r11,r21,r25
	ctx.r11.u64 = r25.u8 & 0x20 ? 0 : (r21.u32 << (r25.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwimi r11,r29,4,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// bl 0x82585070
	ctx.lr = 0x8258A70C;
	sub_82585070(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x825bd768
	ctx.lr = 0x8258A724;
	sub_825BD768(ctx, base);
	// lwz r29,564(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwz r30,12(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r5,100(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 100);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8258a748
	if (ctx.cr6.eq) goto loc_8258A748;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x8258A748;
	sub_8250B4D8(ctx, base);
loc_8258A748:
	// stw r30,100(r29)
	REX_STORE_U32(r29.u32 + 100, r30.u32);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_8258A75C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x8258a9ac
	if (!ctx.cr6.eq) goto loc_8258A9AC;
	// li r23,0
	r23.s64 = 0;
loc_8258A768:
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// li r6,94
	ctx.r6.s64 = 94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x8258A784;
	sub_825BB860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8258A79C;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-12
	ctx.r11.s64 = r30.s64 + -12;
	// li r10,5
	ctx.r10.s64 = 5;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r20,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r20.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,1,28,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,560(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 560);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r29,564(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwz r5,100(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 100);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8258a7e0
	if (ctx.cr6.eq) goto loc_8258A7E0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x8258A7E0;
	sub_8250B4D8(ctx, base);
loc_8258A7E0:
	// stw r30,100(r29)
	REX_STORE_U32(r29.u32 + 100, r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r4,32
	ctx.r5.s64 = ctx.r4.s64 + 32;
	// li r27,20
	r27.s64 = 20;
	// li r29,33
	r29.s64 = 33;
	// bl 0x825bb860
	ctx.lr = 0x8258A814;
	sub_825BB860(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne cr6,0x8258a8e0
	if (!ctx.cr6.eq) goto loc_8258A8E0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,560(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 560);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825c19c8
	ctx.lr = 0x8258A840;
	sub_825C19C8(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x8258A84C;
	sub_82584ED0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,543
	ctx.r5.s64 = 543;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwimi r10,r21,27,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 27) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// rlwinm r9,r10,27,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// rlwinm r8,r10,29,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0xC;
	// or r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// or r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwimi r10,r9,5,19,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x825bd768
	ctx.lr = 0x8258A894;
	sub_825BD768(ctx, base);
	// lwz r28,564(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwz r29,12(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r5,100(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 100);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8258a8b8
	if (ctx.cr6.eq) goto loc_8258A8B8;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x8258A8B8;
	sub_8250B4D8(ctx, base);
loc_8258A8B8:
	// stw r29,100(r28)
	REX_STORE_U32(r28.u32 + 100, r29.u32);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// li r27,16
	r27.s64 = 16;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// li r29,34
	r29.s64 = 34;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
loc_8258A8E0:
	// mr r26,r30
	r26.u64 = r30.u64;
loc_8258A8E4:
	// cmplw cr6,r23,r27
	ctx.cr6.compare<uint32_t>(r23.u32, r27.u32, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// blt cr6,0x8258a8f4
	if (ctx.cr6.lt) goto loc_8258A8F4;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8258A8F4:
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + r25.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x8258a984
	if (ctx.cr6.lt) goto loc_8258A984;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r30,r11,15
	r30.u64 = ctx.r11.u64 | 15;
	// bl 0x82585070
	ctx.lr = 0x8258A920;
	sub_82585070(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x825bd768
	ctx.lr = 0x8258A938;
	sub_825BD768(ctx, base);
	// lwz r28,564(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwz r30,12(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r5,100(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 100);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8258a95c
	if (ctx.cr6.eq) goto loc_8258A95C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x8258A95C;
	sub_8250B4D8(ctx, base);
loc_8258A95C:
	// stw r30,100(r28)
	REX_STORE_U32(r28.u32 + 100, r30.u32);
	// subfic r11,r25,4
	ctx.xer.ca = r25.u32 <= 4;
	ctx.r11.u64 = static_cast<uint64_t>(4) - r25.u64;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// li r25,0
	r25.s64 = 0;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,-4
	r27.s64 = r27.s64 + -4;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// b 0x8258a988
	goto loc_8258A988;
loc_8258A984:
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
loc_8258A988:
	// subf r23,r11,r23
	r23.u64 = r23.u64 - ctx.r11.u64;
loc_8258A98C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8258a66c
	if (ctx.cr6.eq) goto loc_8258A66C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8258a8e4
	if (!ctx.cr6.eq) goto loc_8258A8E4;
	// b 0x8258a768
	goto loc_8258A768;
loc_8258A9A0:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258A9AC;
	sub_824E4368(ctx, base);
loc_8258A9AC:
	// stw r22,564(r31)
	REX_STORE_U32(r31.u32 + 564, r22.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825c19c8
	ctx.lr = 0x8258A9C4;
	sub_825C19C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,612(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 612);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825c21d8
	ctx.lr = 0x8258A9DC;
	sub_825C21D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U64(r30.u32 + 0);
	// ld r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82583420
	ctx.lr = 0x8258A9F0;
	sub_82583420(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,612(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 612);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 564);
	// bl 0x82583608
	ctx.lr = 0x8258AA04;
	sub_82583608(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r10,r11,972
	ctx.r10.s64 = ctx.r11.s64 + 972;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// rlwimi r10,r21,0,16,14
	ctx.r10.u64 = (__builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF) | (ctx.r10.u64 & 0x10000);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,976(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 976);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r9,976(r11)
	REX_STORE_U32(ctx.r11.u32 + 976, ctx.r9.u32);
	// b 0x8258ac38
	goto loc_8258AC38;
loc_8258AA30:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8258ac38
	if (ctx.cr6.eq) goto loc_8258AC38;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258ac38
	if (ctx.cr0.eq) goto loc_8258AC38;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82589ac0
	ctx.lr = 0x8258AA50;
	sub_82589AC0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8258aa60
	if (!ctx.cr6.eq) goto loc_8258AA60;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82589980
	ctx.lr = 0x8258AA60;
	sub_82589980(ctx, base);
loc_8258AA60:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8255db50
	ctx.lr = 0x8258AA6C;
	sub_8255DB50(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82584600
	ctx.lr = 0x8258AA78;
	sub_82584600(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r26,r25
	r26.u64 = r25.u64;
	// bl 0x82589980
	ctx.lr = 0x8258AA84;
	sub_82589980(ctx, base);
	// li r24,3
	r24.s64 = 3;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258abc4
	if (ctx.cr0.eq) goto loc_8258ABC4;
loc_8258AA90:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8258aac8
	if (!ctx.cr6.eq) goto loc_8258AAC8;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258aab0
	if (ctx.cr6.eq) goto loc_8258AAB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8258aadc
	goto loc_8258AADC;
loc_8258AAB0:
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257ec10
	ctx.lr = 0x8258AAC4;
	sub_8257EC10(ctx, base);
	// b 0x8258aadc
	goto loc_8258AADC;
loc_8258AAC8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257eb90
	ctx.lr = 0x8258AADC;
	sub_8257EB90(ctx, base);
loc_8258AADC:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258ac78
	if (ctx.cr0.eq) goto loc_8258AC78;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mullw. r29,r10,r11
	r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8258abac
	if (ctx.cr0.eq) goto loc_8258ABAC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8258AB08;
	sub_824F71B8(ctx, base);
	// addi r28,r3,-16
	r28.s64 = ctx.r3.s64 + -16;
loc_8258AB0C:
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(r29.u32, 4, ctx.xer);
	// li r27,4
	r27.s64 = 4;
	// bgt cr6,0x8258ab1c
	if (ctx.cr6.gt) goto loc_8258AB1C;
	// mr r27,r29
	r27.u64 = r29.u64;
loc_8258AB1C:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585070
	ctx.lr = 0x8258AB34;
	sub_82585070(ctx, base);
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x8258AB54;
	sub_825BB860(ctx, base);
	// add r11,r28,r3
	ctx.r11.u64 = r28.u64 + ctx.r3.u64;
	// lwzx r10,r28,r3
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + ctx.r3.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r10,r10,7
	ctx.r10.u64 = ctx.r10.u64 | 7;
	// stw r24,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r24.u32);
	// stwx r10,r28,r3
	REX_STORE_U32(r28.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r10,560(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 560);
	// stw r20,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r20.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x8250ad28
	ctx.lr = 0x8258AB80;
	sub_8250AD28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subf r29,r27,r29
	r29.u64 = r29.u64 - r27.u64;
	// bl 0x8250adf0
	ctx.lr = 0x8258AB94;
	sub_8250ADF0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r26,r30
	r26.u64 = r30.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bne cr6,0x8258ab0c
	if (!ctx.cr6.eq) goto loc_8258AB0C;
loc_8258ABAC:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82589980
	ctx.lr = 0x8258ABB4;
	sub_82589980(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8258aa90
	if (!ctx.cr0.eq) goto loc_8258AA90;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(r26.u32, r25.u32, ctx.xer);
	// bne cr6,0x8258ac38
	if (!ctx.cr6.eq) goto loc_8258AC38;
loc_8258ABC4:
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
	ctx.lr = 0x8258ABE0;
	sub_825BB860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8258ABF8;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-16
	ctx.r11.s64 = r30.s64 + -16;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r24,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r24.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,7
	ctx.r10.u64 = ctx.r10.u64 | 7;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,560(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 560);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r20,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r20.u32);
	// bl 0x8250adf0
	ctx.lr = 0x8258AC2C;
	sub_8250ADF0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_8258AC38:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x825c69a0
	ctx.lr = 0x8258AC48;
	sub_825C69A0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258ac58
	if (ctx.cr6.eq) goto loc_8258AC58;
	// stw r21,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r21.u32);
loc_8258AC58:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r10,r11,972
	ctx.r10.s64 = ctx.r11.s64 + 972;
	// lwz r10,976(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 976);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r9,976(r11)
	REX_STORE_U32(ctx.r11.u32 + 976, ctx.r9.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1ce4
	return;
loc_8258AC78:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258AC84;
	sub_824E4368(ctx, base);
loc_8258AC84:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258AC90;
	sub_824E4368(ctx, base);
loc_8258AC90:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258AC9C;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_825CAD28) {
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
	ctx.lr = 0x825CAD30;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2ca8
	ctx.lr = 0x825CAD38;
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
	// beq cr6,0x825cad64
	if (ctx.cr6.eq) goto loc_825CAD64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x825CAD60;
	sub_82408848(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_825CAD64:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cad80
	if (ctx.cr6.eq) goto loc_825CAD80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c7448
	ctx.lr = 0x825CAD7C;
	sub_825C7448(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_825CAD80:
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
	// bne 0x825cadf0
	if (!ctx.cr0.eq) goto loc_825CADF0;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x825cadf8
	goto loc_825CADF8;
loc_825CADF0:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_825CADF8:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cae10
	if (ctx.cr6.eq) goto loc_825CAE10;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x825CAE10;
	sub_82409A88(ctx, base);
loc_825CAE10:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825cb1ac
	if (!ctx.cr6.gt) goto loc_825CB1AC;
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
loc_825CAE7C:
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
	// beq cr6,0x825cb0b4
	if (ctx.cr6.eq) goto loc_825CB0B4;
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
loc_825CB0B4:
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt cr6,0x825cb0c4
	if (ctx.cr6.lt) goto loc_825CB0C4;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_825CB0C4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825cb0dc
	if (!ctx.cr6.gt) goto loc_825CB0DC;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// blt cr6,0x825cb0e0
	if (ctx.cr6.lt) goto loc_825CB0E0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x825cb0e0
	goto loc_825CB0E0;
loc_825CB0DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825CB0E0:
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r30.s32, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt cr6,0x825cb0f0
	if (ctx.cr6.lt) goto loc_825CB0F0;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_825CB0F0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825cb108
	if (!ctx.cr6.gt) goto loc_825CB108;
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r30.s32, ctx.xer);
	// blt cr6,0x825cb10c
	if (ctx.cr6.lt) goto loc_825CB10C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x825cb10c
	goto loc_825CB10C;
loc_825CB108:
	// li r4,0
	ctx.r4.s64 = 0;
loc_825CB10C:
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x825cb11c
	if (ctx.cr6.lt) goto loc_825CB11C;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_825CB11C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825cb134
	if (!ctx.cr6.gt) goto loc_825CB134;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// blt cr6,0x825cb138
	if (ctx.cr6.lt) goto loc_825CB138;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// b 0x825cb138
	goto loc_825CB138;
loc_825CB134:
	// li r5,0
	ctx.r5.s64 = 0;
loc_825CB138:
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r30.s32, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// blt cr6,0x825cb148
	if (ctx.cr6.lt) goto loc_825CB148;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_825CB148:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825cb160
	if (!ctx.cr6.gt) goto loc_825CB160;
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r30.s32, ctx.xer);
	// blt cr6,0x825cb164
	if (ctx.cr6.lt) goto loc_825CB164;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x825cb164
	goto loc_825CB164;
loc_825CB160:
	// li r6,0
	ctx.r6.s64 = 0;
loc_825CB164:
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// rldicr r10,r10,16,47
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000;
	// extsw r6,r4
	ctx.r6.s64 = ctx.r4.s32;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// rldicr r10,r10,16,47
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
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
	// blt cr6,0x825cae7c
	if (ctx.cr6.lt) goto loc_825CAE7C;
loc_825CB1AC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2cf4
	ctx.lr = 0x825CB1B8;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_825E5DA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825E5DB0;
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
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825e5e38
	if (!ctx.cr0.eq) goto loc_825E5E38;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x825e0940
	ctx.lr = 0x825E5DD4;
	sub_825E0940(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,90
	ctx.r3.s64 = 90;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825E5DE4;
	sub_825F9AD0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r10,56(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 56);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r9,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,11196(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 11196);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// lfs f4,10584(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 10584);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// stw r8,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x825faab8
	ctx.lr = 0x825E5E2C;
	sub_825FAAB8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825E5E38;
	sub_825FCB18(ctx, base);
loc_825E5E38:
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// lbz r5,124(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 124);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e35d8
	ctx.lr = 0x825E5E48;
	sub_825E35D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825EC700) {
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
	ctx.lr = 0x825EC708;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r19,0
	r19.s64 = 0;
	// addi r25,r11,22852
	r25.s64 = ctx.r11.s64 + 22852;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r18,1
	r18.s64 = 1;
	// mr r26,r19
	r26.u64 = r19.u64;
	// addi r24,r10,15448
	r24.s64 = ctx.r10.s64 + 15448;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x825ec744
	if (ctx.cr6.eq) goto loc_825EC744;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x825ec81c
	if (!ctx.cr6.eq) goto loc_825EC81C;
loc_825EC744:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r29,r18
	r29.u64 = r18.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825ec770
	if (!ctx.cr6.eq) goto loc_825EC770;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r5,r11,15432
	ctx.r5.s64 = ctx.r11.s64 + 15432;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r7,385
	ctx.r7.s64 = 385;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EC770;
	sub_824EA978(ctx, base);
loc_825EC770:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r30,r11,15296
	r30.s64 = ctx.r11.s64 + 15296;
loc_825EC77C:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x825ec798
	if (!ctx.cr6.eq) goto loc_825EC798;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x8260a7e8
	ctx.lr = 0x825EC790;
	sub_8260A7E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825ec7cc
	if (!ctx.cr0.eq) goto loc_825EC7CC;
loc_825EC798:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825ec7b4
	if (!ctx.cr6.eq) goto loc_825EC7B4;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x8260a820
	ctx.lr = 0x825EC7AC;
	sub_8260A820(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825ec7cc
	if (!ctx.cr0.eq) goto loc_825EC7CC;
loc_825EC7B4:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r7,391
	ctx.r7.s64 = 391;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EC7CC;
	sub_824EA978(ctx, base);
loc_825EC7CC:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mr r26,r31
	r26.u64 = r31.u64;
	// lwz r31,64(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// subfze r11,r11
	temp.u8 = ~ctx.r11.u32 + ctx.xer.ca < ~ctx.r11.u32;
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r29
	r29.u64 = ctx.r11.u64 & r29.u64;
	// bne cr6,0x825ec77c
	if (!ctx.cr6.eq) goto loc_825EC77C;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ec81c
	if (ctx.cr0.eq) goto loc_825EC81C;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r19,0(r28)
	REX_STORE_U32(r28.u32 + 0, r19.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825ec810
	if (!ctx.cr6.eq) goto loc_825EC810;
	// stw r18,4(r28)
	REX_STORE_U32(r28.u32 + 4, r18.u32);
	// b 0x825ec81c
	goto loc_825EC81C;
loc_825EC810:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x825ec81c
	if (!ctx.cr6.eq) goto loc_825EC81C;
	// stw r19,4(r28)
	REX_STORE_U32(r28.u32 + 4, r19.u32);
loc_825EC81C:
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r20,2
	r20.s64 = 2;
	// addi r22,r9,15272
	r22.s64 = ctx.r9.s64 + 15272;
	// addi r30,r8,15244
	r30.s64 = ctx.r8.s64 + 15244;
	// addi r29,r7,15212
	r29.s64 = ctx.r7.s64 + 15212;
	// addi r23,r10,15196
	r23.s64 = ctx.r10.s64 + 15196;
	// addi r21,r11,15172
	r21.s64 = ctx.r11.s64 + 15172;
loc_825EC848:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825eca44
	if (ctx.cr6.eq) goto loc_825ECA44;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EC86C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ec950
	if (ctx.cr0.eq) goto loc_825EC950;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x825ec898
	if (!ctx.cr6.eq) goto loc_825EC898;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r7,414
	ctx.r7.s64 = 414;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EC898;
	sub_824EA978(ctx, base);
loc_825EC898:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260a820
	ctx.lr = 0x825EC8A0;
	sub_8260A820(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ec944
	if (ctx.cr0.eq) goto loc_825EC944;
	// beq cr6,0x825ec8bc
	if (ctx.cr6.eq) goto loc_825EC8BC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825ec8c4
	if (!ctx.cr6.eq) goto loc_825EC8C4;
loc_825EC8BC:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
loc_825EC8C4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ec928
	if (ctx.cr6.eq) goto loc_825EC928;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x825ec8f0
	if (!ctx.cr6.eq) goto loc_825EC8F0;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r7,421
	ctx.r7.s64 = 421;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EC8F0;
	sub_824EA978(ctx, base);
loc_825EC8F0:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r11,64(r26)
	REX_STORE_U32(r26.u32 + 64, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ec920
	if (ctx.cr6.eq) goto loc_825EC920;
	// li r7,423
	ctx.r7.s64 = 423;
loc_825EC90C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EC920;
	sub_824EA978(ctx, base);
loc_825EC920:
	// lwz r26,64(r26)
	r26.u64 = REX_LOAD_U32(r26.u32 + 64);
	// b 0x825eca44
	goto loc_825ECA44;
loc_825EC928:
	// lwz r26,0(r27)
	r26.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r26,0(r28)
	REX_STORE_U32(r28.u32 + 0, r26.u32);
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825eca44
	if (ctx.cr6.eq) goto loc_825ECA44;
	// li r7,428
	ctx.r7.s64 = 428;
	// b 0x825eca20
	goto loc_825ECA20;
loc_825EC944:
	// bne cr6,0x825eca44
	if (!ctx.cr6.eq) goto loc_825ECA44;
	// stw r18,4(r28)
	REX_STORE_U32(r28.u32 + 4, r18.u32);
	// b 0x825eca44
	goto loc_825ECA44;
loc_825EC950:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EC964;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825eca44
	if (ctx.cr0.eq) goto loc_825ECA44;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825ec990
	if (!ctx.cr6.eq) goto loc_825EC990;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r7,436
	ctx.r7.s64 = 436;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EC990;
	sub_824EA978(ctx, base);
loc_825EC990:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260a7e8
	ctx.lr = 0x825EC998;
	sub_8260A7E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// beq 0x825eca38
	if (ctx.cr0.eq) goto loc_825ECA38;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825ec9b4
	if (ctx.cr6.eq) goto loc_825EC9B4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825ec9bc
	if (!ctx.cr6.eq) goto loc_825EC9BC;
loc_825EC9B4:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
loc_825EC9BC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825eca08
	if (ctx.cr6.eq) goto loc_825ECA08;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x825ec9e8
	if (!ctx.cr6.eq) goto loc_825EC9E8;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r7,443
	ctx.r7.s64 = 443;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EC9E8;
	sub_824EA978(ctx, base);
loc_825EC9E8:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r11,64(r26)
	REX_STORE_U32(r26.u32 + 64, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ec920
	if (ctx.cr6.eq) goto loc_825EC920;
	// li r7,445
	ctx.r7.s64 = 445;
	// b 0x825ec90c
	goto loc_825EC90C;
loc_825ECA08:
	// lwz r26,0(r27)
	r26.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r26,0(r28)
	REX_STORE_U32(r28.u32 + 0, r26.u32);
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825eca44
	if (ctx.cr6.eq) goto loc_825ECA44;
	// li r7,450
	ctx.r7.s64 = 450;
loc_825ECA20:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825ECA34;
	sub_824EA978(ctx, base);
	// b 0x825eca44
	goto loc_825ECA44;
loc_825ECA38:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825eca44
	if (!ctx.cr6.eq) goto loc_825ECA44;
	// stw r19,4(r28)
	REX_STORE_U32(r28.u32 + 4, r19.u32);
loc_825ECA44:
	// addic. r20,r20,-1
	ctx.xer.ca = r20.u32 > 0;
	r20.s64 = r20.s64 + -1;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bne 0x825ec848
	if (!ctx.cr0.eq) goto loc_825EC848;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_825FB528) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32280
	ctx.r3.s64 = ctx.r11.s64 + -32280;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FB768) {
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
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x825fa990
	ctx.lr = 0x825FB78C;
	sub_825FA990(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-31792
	ctx.r11.s64 = ctx.r11.s64 + -31792;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// ori r11,r11,24
	ctx.r11.u64 = ctx.r11.u64 | 24;
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 2736);
	// bl 0x825d7d20
	ctx.lr = 0x825FB7C0;
	sub_825D7D20(ctx, base);
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

DEFINE_REX_FUNC(sub_825FD938) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-30704
	ctx.r3.s64 = ctx.r11.s64 + -30704;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FDC58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825FDC60;
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x825fd848
	ctx.lr = 0x825FDC7C;
	sub_825FD848(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,116(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r11,r11,-30328
	ctx.r11.s64 = ctx.r11.s64 + -30328;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x825f7420
	ctx.lr = 0x825FDC98;
	sub_825F7420(ctx, base);
	// stw r31,948(r30)
	REX_STORE_U32(r30.u32 + 948, r31.u32);
	// stw r28,156(r31)
	REX_STORE_U32(r31.u32 + 156, r28.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// lwz r28,1452(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FDCB0;
	sub_825B33A0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x825fdce0
	if (ctx.cr0.eq) goto loc_825FDCE0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825fcd38
	ctx.lr = 0x825FDCC8;
	sub_825FCD38(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r31,136(r30)
	REX_STORE_U32(r30.u32 + 136, r31.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r10,r10,-30448
	ctx.r10.s64 = ctx.r10.s64 + -30448;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x825fdce4
	goto loc_825FDCE4;
loc_825FDCE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825FDCE4:
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8260A968) {
	REX_FUNC_PROLOGUE();
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8260a998
	if (ctx.cr6.eq) goto loc_8260A998;
loc_8260A980:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8260a980
	if (!ctx.cr6.eq) goto loc_8260A980;
loc_8260A998:
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8260a9bc
	if (ctx.cr6.eq) goto loc_8260A9BC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8260A9A4:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8260a9a4
	if (!ctx.cr6.eq) goto loc_8260A9A4;
loc_8260A9BC:
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8260BE50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8260BE58;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x827941e4
	ctx.lr = 0x8260BE6C;
	__imp__XAudioGetVoiceCategoryVolume(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,524(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 524);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8260beb0
	if (ctx.cr6.eq) goto loc_8260BEB0;
	// lwz r31,508(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 508);
	// stfs f0,524(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 524, temp.u32);
	// b 0x8260bea8
	goto loc_8260BEA8;
loc_8260BE88:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8260bea0
	if (ctx.cr6.eq) goto loc_8260BEA0;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8260bea4
	goto loc_8260BEA4;
loc_8260BEA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8260BEA4:
	// bl 0x8260f0e8
	ctx.lr = 0x8260BEA8;
	sub_8260F0E8(ctx, base);
loc_8260BEA8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8260be88
	if (!ctx.cr6.eq) goto loc_8260BE88;
loc_8260BEB0:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r29,r30,112
	r29.s64 = r30.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260BEC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,564(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8260bf10
	if (ctx.cr6.eq) goto loc_8260BF10;
	// lwz r31,556(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 556);
loc_8260BED8:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8260bef0
	if (ctx.cr6.eq) goto loc_8260BEF0;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8260bef4
	goto loc_8260BEF4;
loc_8260BEF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8260BEF4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8260bf10
	if (ctx.cr6.eq) goto loc_8260BF10;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260BF0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8260bed8
	goto loc_8260BED8;
loc_8260BF10:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260BF24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82610f70
	ctx.lr = 0x8260BF28;
	sub_82610F70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8260FCA0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8260eae8
	sub_8260EAE8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82610748) {
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
	ctx.lr = 0x82610750;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r23,0
	r23.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82610840
	if (!ctx.cr6.gt) goto loc_82610840;
	// li r28,0
	r28.s64 = 0;
	// li r26,16
	r26.s64 = 16;
	// li r27,32
	r27.s64 = 32;
	// lis r24,-32120
	r24.s64 = -2105016320;
loc_8261077C:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// add r31,r28,r11
	r31.u64 = r28.u64 + ctx.r11.u64;
	// addi r30,r31,64
	r30.s64 = r31.s64 + 64;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8261082c
	if (!ctx.cr6.eq) goto loc_8261082C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82794204
	ctx.lr = 0x8261079C;
	__imp__XMACreateContext(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// blt 0x8261084c
	if (ctx.cr0.lt) goto loc_8261084C;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826107ec
	if (ctx.cr0.eq) goto loc_826107EC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lvx128 v63,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r31,r26
	ea = (r31.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r31,r27
	ea = (r31.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r26
	ea = (ctx.r11.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82793cf4
	ctx.lr = 0x826107D4;
	__imp__MmGetPhysicalAddress(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1028
	ctx.r6.s64 = 1028;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x827941f4
	ctx.lr = 0x826107E8;
	__imp__MmMapIoSpace(ctx, base);
	// stw r3,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r3.u32);
loc_826107EC:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82793cf4
	ctx.lr = 0x826107F4;
	__imp__MmGetPhysicalAddress(ctx, base);
	// lwz r11,20696(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20696);
	// li r10,1
	ctx.r10.s64 = 1;
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r11,27,21,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FF;
	// sth r11,80(r31)
	REX_STORE_U16(r31.u32 + 80, ctx.r11.u16);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addis r9,r9,8187
	ctx.r9.s64 = ctx.r9.s64 + 536543232;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r9,r9,-31072
	ctx.r9.s64 = ctx.r9.s64 + -31072;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwbrx r11,0,r10
	REX_MM_STORE_U32(ctx.r10.u32, __builtin_bswap32(ctx.r11.u32));
	// eieio 
loc_8261082C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r28,r28,96
	r28.s64 = r28.s64 + 96;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8261077c
	if (ctx.cr6.lt) goto loc_8261077C;
loc_82610840:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
loc_8261084C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82617780) {
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
	ctx.lr = 0x82617788;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r26,r3,28
	r26.s64 = ctx.r3.s64 + 28;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826177B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,380(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 380);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82617808
	if (!ctx.cr6.eq) goto loc_82617808;
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
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x8260b5b8
	ctx.lr = 0x826177E0;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826177fc
	if (ctx.cr0.eq) goto loc_826177FC;
	// addi r5,r30,12
	ctx.r5.s64 = r30.s64 + 12;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82629588
	ctx.lr = 0x826177F4;
	sub_82629588(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82617800
	goto loc_82617800;
loc_826177FC:
	// li r31,0
	r31.s64 = 0;
loc_82617800:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82617814
	if (!ctx.cr6.eq) goto loc_82617814;
loc_82617808:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x826178b0
	goto loc_826178B0;
loc_82617814:
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,100(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r7,104(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rldicl r10,r7,63,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// mulli r11,r11,1000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1000));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// divdu r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 ? ctx.r11.u64 / ctx.r7.u64 : 0;
	// tdllei r7,0
	if (ctx.r7.s64 == 0ll || ctx.r7.u64 < 0ull) ppc_trap(ctx, base, 0);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bctrl 
	ctx.lr = 0x82617864;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82617894
	if (ctx.cr0.lt) goto loc_82617894;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,340
	ctx.r3.s64 = r30.s64 + 340;
	// bl 0x82625a70
	ctx.lr = 0x82617878;
	sub_82625A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261788c
	if (ctx.cr0.eq) goto loc_8261788C;
	// li r29,0
	r29.s64 = 0;
	// stw r31,0(r25)
	REX_STORE_U32(r25.u32 + 0, r31.u32);
	// b 0x826178b0
	goto loc_826178B0;
loc_8261788C:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
loc_82617894:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826178AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8264c3d0
	ctx.lr = 0x826178B0;
	sub_8264C3D0(ctx, base);
loc_826178B0:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826178C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82625A70) {
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
	// bl 0x826258e0
	ctx.lr = 0x82625A90;
	sub_826258E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82625ad4
	if (ctx.cr0.eq) goto loc_82625AD4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82625ac0
	if (ctx.cr6.eq) goto loc_82625AC0;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// b 0x82625ac4
	goto loc_82625AC4;
loc_82625AC0:
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
loc_82625AC4:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_82625AD4:
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

DEFINE_REX_FUNC(sub_826271A0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82627120
	sub_82627120(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82627218) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,2240
	ctx.r11.s64 = ctx.r11.s64 + 2240;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826283d0
	ctx.lr = 0x82627250;
	sub_826283D0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82627260
	if (ctx.cr0.eq) goto loc_82627260;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82627260;
	sub_8264C3D0(ctx, base);
loc_82627260:
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

DEFINE_REX_FUNC(sub_82628B88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82628B90;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x82628b08
	ctx.lr = 0x82628BA0;
	sub_82628B08(ctx, base);
	// lwz r30,212(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 212);
	// b 0x82628c14
	goto loc_82628C14;
loc_82628BA8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82628bc4
	if (ctx.cr6.eq) goto loc_82628BC4;
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82628bc8
	goto loc_82628BC8;
loc_82628BC4:
	// li r31,0
	r31.s64 = 0;
loc_82628BC8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// beq cr6,0x82628bf8
	if (ctx.cr6.eq) goto loc_82628BF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82628c14
	if (!ctx.cr6.eq) goto loc_82628C14;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// beq cr6,0x82628bf8
	if (ctx.cr6.eq) goto loc_82628BF8;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x82628c14
	if (!ctx.cr6.eq) goto loc_82628C14;
loc_82628BF8:
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826288a0
	ctx.lr = 0x82628C00;
	sub_826288A0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82628c14
	if (ctx.cr6.eq) goto loc_82628C14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82628C14;
	sub_8264C3D0(ctx, base);
loc_82628C14:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82628ba8
	if (!ctx.cr6.eq) goto loc_82628BA8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82631530) {
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
	ctx.lr = 0x82631538;
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r5,12(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r26,24(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r8.u32);
	// lfs f12,-208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.f11.u64);
	// lwz r4,-204(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// extsw r8,r4
	ctx.r8.s64 = ctx.r4.s32;
	// std r8,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r8.u64);
	// lfd f10,-208(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// stw r5,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r5.u32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lwz r27,0(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r28,4(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,-208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f0.f64 = double(temp.f32);
	// lwz r25,28(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lfs f13,15504(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15504);
	ctx.f13.f64 = double(temp.f32);
	// lwz r31,36(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// add r29,r9,r10
	r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// mullw r24,r4,r6
	r24.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// fsubs f9,f12,f8
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// beq cr6,0x826316a0
	if (ctx.cr6.eq) goto loc_826316A0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x82631654
	if (ctx.cr6.lt) goto loc_82631654;
	// addi r5,r6,-3
	ctx.r5.s64 = ctx.r6.s64 + -3;
	// addi r8,r29,-4
	ctx.r8.s64 = r29.s64 + -4;
	// addi r9,r27,-2
	ctx.r9.s64 = r27.s64 + -2;
loc_826315C8:
	// lhz r23,2(r9)
	r23.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lhz r4,4(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 4);
	// lhz r30,6(r9)
	r30.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// extsh r23,r23
	r23.s64 = r23.s16;
	// lhzu r7,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// std r23,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, r23.u64);
	// lfd f11,-200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// std r4,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r4.u64);
	// lfd f8,-184(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// extsh r30,r30
	r30.s64 = r30.s16;
	// std r7,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r7.u64);
	// lfd f10,-192(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// std r30,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, r30.u64);
	// lfd f12,-208(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// fcfid f4,f10
	ctx.f4.f64 = double(ctx.f10.s64);
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// fmuls f8,f1,f13
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f8,12(r8)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// fmuls f11,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// stfs f11,8(r8)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// fmuls f10,f2,f13
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// stfs f10,4(r8)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fmuls f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfsu f7,16(r8)
	ea = 16 + ctx.r8.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// blt cr6,0x826315c8
	if (ctx.cr6.lt) goto loc_826315C8;
loc_82631654:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x826316a0
	if (!ctx.cr6.lt) goto loc_826316A0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r10,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r10.u64;
	// add r10,r9,r29
	ctx.r10.u64 = ctx.r9.u64 + r29.u64;
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + r27.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8263167C:
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// std r7,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r7.u64);
	// lfd f12,-184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfsu f8,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8263167c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8263167C;
loc_826316A0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r6.s32, ctx.xer);
	// lfs f10,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f10.f64 = double(temp.f32);
	// bge cr6,0x826317dc
	if (!ctx.cr6.lt) goto loc_826317DC;
loc_826316B0:
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bge cr6,0x826319e4
	if (!ctx.cr6.lt) goto loc_826319E4;
	// add r5,r31,r6
	ctx.r5.u64 = r31.u64 + ctx.r6.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x826317b4
	if (!ctx.cr6.lt) goto loc_826317B4;
	// subf r10,r31,r5
	ctx.r10.u64 = ctx.r5.u64 - r31.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82631760
	if (ctx.cr6.lt) goto loc_82631760;
	// subf r10,r6,r31
	ctx.r10.u64 = r31.u64 - ctx.r6.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// add r10,r9,r28
	ctx.r10.u64 = ctx.r9.u64 + r28.u64;
	// add r9,r8,r29
	ctx.r9.u64 = ctx.r8.u64 + r29.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// addi r30,r5,-3
	r30.s64 = ctx.r5.s64 + -3;
	// add r9,r4,r29
	ctx.r9.u64 = ctx.r4.u64 + r29.u64;
loc_82631700:
	// lfs f8,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfs f7,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f5,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r30.s32, ctx.xer);
	// lfs f4,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f8
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// lfs f6,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f1,f4,f7
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f7.f64));
	// lfs f2,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfsu f12,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fsubs f5,f2,f6
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f6.f64));
	// lfsu f11,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fsubs f4,f11,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmadds f3,f3,f0,f8
	ctx.f3.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f8.f64)));
	// stfs f3,4(r8)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fmadds f2,f1,f0,f7
	ctx.f2.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f7.f64)));
	// stfs f2,8(r8)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// fmadds f1,f5,f0,f6
	ctx.f1.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f6.f64)));
	// stfs f1,12(r8)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// fmadds f12,f4,f0,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfsu f12,16(r8)
	ea = 16 + ctx.r8.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// blt cr6,0x82631700
	if (ctx.cr6.lt) goto loc_82631700;
loc_82631760:
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x826317b4
	if (!ctx.cr6.lt) goto loc_826317B4;
	// subf r9,r6,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// add r9,r8,r28
	ctx.r9.u64 = ctx.r8.u64 + r28.u64;
	// add r8,r7,r29
	ctx.r8.u64 = ctx.r7.u64 + r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r9,-4
	ctx.r5.s64 = ctx.r9.s64 + -4;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// add r9,r7,r29
	ctx.r9.u64 = ctx.r7.u64 + r29.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8263179C:
	// lfsu f12,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// lfsu f11,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmadds f8,f11,f0,f12
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfsu f8,4(r5)
	ea = 4 + ctx.r5.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r5.u32 = ea;
	// bdnz 0x8263179c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8263179C;
loc_826317B4:
	// fadds f0,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// add r31,r24,r31
	r31.u64 = r24.u64 + r31.u64;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x826317d4
	if (ctx.cr6.lt) goto loc_826317D4;
loc_826317C4:
	// fsubs f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// add r31,r31,r6
	r31.u64 = r31.u64 + ctx.r6.u64;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x826317c4
	if (!ctx.cr6.lt) goto loc_826317C4;
loc_826317D4:
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x826316b0
	if (ctx.cr6.lt) goto loc_826316B0;
loc_826317DC:
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bge cr6,0x826319e4
	if (!ctx.cr6.lt) goto loc_826319E4;
loc_826317E4:
	// add r30,r31,r6
	r30.u64 = r31.u64 + ctx.r6.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
	// bge cr6,0x826319bc
	if (!ctx.cr6.lt) goto loc_826319BC;
	// subf r10,r31,r30
	ctx.r10.u64 = r30.u64 - r31.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8263193c
	if (ctx.cr6.lt) goto loc_8263193C;
	// subf r10,r6,r31
	ctx.r10.u64 = r31.u64 - ctx.r6.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r31,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r28
	ctx.r10.u64 = ctx.r9.u64 + r28.u64;
	// add r9,r8,r27
	ctx.r9.u64 = ctx.r8.u64 + r27.u64;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r4,r30,-3
	ctx.r4.s64 = r30.s64 + -3;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// add r10,r5,r27
	ctx.r10.u64 = ctx.r5.u64 + r27.u64;
loc_8263182C:
	// lhz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lhz r23,2(r10)
	r23.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lhz r22,6(r10)
	r22.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r21,r5
	r21.s64 = ctx.r5.s16;
	// lhzu r19,8(r10)
	ea = 8 + ctx.r10.u32;
	r19.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// extsh r22,r22
	r22.s64 = r22.s16;
	// lhz r20,2(r9)
	r20.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// extsh r19,r19
	r19.s64 = r19.s16;
	// lhz r18,4(r9)
	r18.u64 = REX_LOAD_U16(ctx.r9.u32 + 4);
	// std r22,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, r22.u64);
	// lfd f12,-184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// std r19,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, r19.u64);
	// lfd f8,-200(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// lhz r17,6(r9)
	r17.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// extsh r20,r20
	r20.s64 = r20.s16;
	// lhzu r5,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// extsh r22,r18
	r22.s64 = r18.s16;
	// std r21,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, r21.u64);
	// extsh r21,r17
	r21.s64 = r17.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// std r20,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, r20.u64);
	// lfd f5,-168(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// std r22,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, r22.u64);
	// std r21,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, r21.u64);
	// lfd f7,-208(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// lfd f6,-176(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// std r5,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r5.u64);
	// lfd f4,-160(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// extsh r5,r23
	ctx.r5.s64 = r23.s16;
	// std r5,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.r5.u64);
	// lfd f3,-152(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// lfd f11,-192(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f1,f11
	ctx.f1.f64 = double(ctx.f11.s64);
	// fcfid f11,f8
	ctx.f11.f64 = double(ctx.f8.s64);
	// fcfid f8,f5
	ctx.f8.f64 = double(ctx.f5.s64);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// frsp f5,f2
	ctx.f5.f64 = double(float(ctx.f2.f64));
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// frsp f2,f12
	ctx.f2.f64 = double(float(ctx.f12.f64));
	// frsp f3,f1
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// frsp f12,f8
	ctx.f12.f64 = double(float(ctx.f8.f64));
	// frsp f11,f7
	ctx.f11.f64 = double(float(ctx.f7.f64));
	// frsp f8,f6
	ctx.f8.f64 = double(float(ctx.f6.f64));
	// fmuls f7,f5,f13
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// frsp f6,f4
	ctx.f6.f64 = double(float(ctx.f4.f64));
	// fmuls f4,f2,f13
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f5,f3,f13
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f3,f1,f13
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmsubs f2,f12,f13,f7
	ctx.f2.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, -ctx.f7.f64)));
	// fmsubs f12,f8,f13,f4
	ctx.f12.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, -ctx.f4.f64)));
	// fmsubs f1,f11,f13,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, -ctx.f5.f64)));
	// fmsubs f11,f6,f13,f3
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, -ctx.f3.f64)));
	// fmadds f8,f2,f0,f7
	ctx.f8.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, ctx.f7.f64)));
	// stfs f8,4(r8)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fmadds f6,f12,f0,f4
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f4.f64)));
	// stfs f6,12(r8)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// fmadds f7,f1,f0,f5
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f5.f64)));
	// stfs f7,8(r8)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// fmadds f5,f11,f0,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f3.f64)));
	// stfsu f5,16(r8)
	ea = 16 + ctx.r8.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// blt cr6,0x8263182c
	if (ctx.cr6.lt) goto loc_8263182C;
loc_8263193C:
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r30.s32, ctx.xer);
	// bge cr6,0x826319bc
	if (!ctx.cr6.lt) goto loc_826319BC;
	// subf r9,r6,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r10,r7,r30
	ctx.r10.u64 = r30.u64 - ctx.r7.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r28
	ctx.r9.u64 = ctx.r8.u64 + r28.u64;
	// add r8,r7,r27
	ctx.r8.u64 = ctx.r7.u64 + r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r9,-4
	ctx.r7.s64 = ctx.r9.s64 + -4;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// add r9,r5,r27
	ctx.r9.u64 = ctx.r5.u64 + r27.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82631978:
	// lhzu r5,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// lhzu r4,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// std r10,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r10.u64);
	// std r5,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, ctx.r5.u64);
	// lfd f11,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// lfd f12,-144(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// fmuls f4,f6,f13
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fmsubs f3,f5,f13,f4
	ctx.f3.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, -ctx.f4.f64)));
	// fmadds f2,f3,f0,f4
	ctx.f2.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f4.f64)));
	// stfsu f2,4(r7)
	ea = 4 + ctx.r7.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x82631978
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82631978;
loc_826319BC:
	// fadds f0,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// add r31,r24,r31
	r31.u64 = r24.u64 + r31.u64;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x826319dc
	if (ctx.cr6.lt) goto loc_826319DC;
loc_826319CC:
	// fsubs f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// add r31,r31,r6
	r31.u64 = r31.u64 + ctx.r6.u64;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x826319cc
	if (!ctx.cr6.lt) goto loc_826319CC;
loc_826319DC:
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// blt cr6,0x826317e4
	if (ctx.cr6.lt) goto loc_826317E4;
loc_826319E4:
	// subf r11,r6,r26
	ctx.r11.u64 = r26.u64 - ctx.r6.u64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x826319f4
	if (!ctx.cr6.lt) goto loc_826319F4;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_826319F4:
	// subf r10,r26,r31
	ctx.r10.u64 = r31.u64 - r26.u64;
	// stfs f0,-208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// neg r8,r26
	ctx.r8.s64 = static_cast<int64_t>(-r26.u64);
	// lwz r9,-208(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// subf r11,r6,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r6.u64;
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82631ac4
	if (!ctx.cr6.lt) goto loc_82631AC4;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82631a88
	if (ctx.cr6.lt) goto loc_82631A88;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + r26.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,-3
	ctx.r7.s64 = ctx.r10.s64 + -3;
	// add r10,r9,r29
	ctx.r10.u64 = ctx.r9.u64 + r29.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r26,2
	ctx.r7.s64 = r26.s64 + 2;
	// addi r6,r26,3
	ctx.r6.s64 = r26.s64 + 3;
	// addi r5,r8,-3
	ctx.r5.s64 = ctx.r8.s64 + -3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
loc_82631A4C:
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// add r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// lfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfsx f12,r4,r29
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r29.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfsx f11,r3,r29
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + r29.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsu f11,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x82631a4c
	if (ctx.cr6.lt) goto loc_82631A4C;
loc_82631A88:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82631ac4
	if (!ctx.cr6.lt) goto loc_82631AC4;
	// add r7,r11,r26
	ctx.r7.u64 = ctx.r11.u64 + r26.u64;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// addi r7,r9,-4
	ctx.r7.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82631AB8:
	// lfsu f0,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// stfsu f0,4(r7)
	ea = 4 + ctx.r7.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x82631ab8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82631AB8;
loc_82631AC4:
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82631ba0
	if (ctx.cr6.lt) goto loc_82631BA0;
	// subfic r9,r11,-4
	ctx.xer.ca = ctx.r11.u32 <= 4294967292;
	ctx.r9.u64 = static_cast<uint64_t>(-4) - ctx.r11.u64;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + r26.u64;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r10,-3
	ctx.r7.s64 = ctx.r10.s64 + -3;
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + r29.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r26,2
	ctx.r7.s64 = r26.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r6,r26,3
	ctx.r6.s64 = r26.s64 + 3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r9,r8,r27
	ctx.r9.u64 = ctx.r8.u64 + r27.u64;
loc_82631B04:
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lhz r4,6(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// lhzu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// add r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// std r8,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r8.u64);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// std r4,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, ctx.r4.u64);
	// lfd f11,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lhzx r5,r5,r27
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + r27.u32);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lhzx r5,r3,r27
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + r27.u32);
	// lfd f0,-136(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// std r4,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r4.u64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r8,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.r8.u64);
	// lfd f8,-152(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,-160(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fmuls f1,f5,f13
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f1,8(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmuls f2,f10,f13
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f2,4(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// frsp f0,f4
	ctx.f0.f64 = double(float(ctx.f4.f64));
	// fmuls f12,f3,f13
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f11,12(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfsu f12,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82631b04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82631B04;
loc_82631BA0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82631bf0
	if (!ctx.cr6.lt) goto loc_82631BF0;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + r26.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r8,r11
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + r29.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82631BCC:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// std r8,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, ctx.r8.u64);
	// lfd f0,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfsu f10,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82631bcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82631BCC;
loc_82631BF0:
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_8265D988) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265d998
	if (ctx.cr6.eq) goto loc_8265D998;
	// b 0x82689488
	sub_82689488(ctx, base);
	return;
loc_8265D998:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265DF18) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// ori r10,r10,996
	ctx.r10.u64 = ctx.r10.u64 | 996;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
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

DEFINE_REX_FUNC(sub_8265EC30) {
	REX_FUNC_PROLOGUE();
	// stw r4,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265ECF8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265ed0c
	if (ctx.cr6.eq) goto loc_8265ED0C;
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// stw r10,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
loc_8265ED0C:
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265ed20
	if (ctx.cr6.eq) goto loc_8265ED20;
	// lwz r10,84(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// stw r10,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
loc_8265ED20:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265F6F4) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265F9C0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// stw r4,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r5,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// stw r6,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82660508) {
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
	ctx.lr = 0x82660510;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,1024
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1024, ctx.xer);
	// ble cr6,0x82660534
	if (!ctx.cr6.gt) goto loc_82660534;
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x8266056c
	goto loc_8266056C;
loc_82660534:
	// addi r4,r4,44
	ctx.r4.s64 = ctx.r4.s64 + 44;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x826a1e70
	ctx.lr = 0x82660544;
	sub_826A1E70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r29,64
	ctx.r10.s64 = r29.s64 + 64;
loc_8266054C:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,997
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 997, ctx.xer);
	// bne cr6,0x82660574
	if (!ctx.cr6.eq) goto loc_82660574;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1052
	ctx.r10.s64 = ctx.r10.s64 + 1052;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8266054c
	if (ctx.cr6.lt) goto loc_8266054C;
loc_82660568:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266056C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d04
	return;
loc_82660574:
	// mulli r11,r11,1052
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1052));
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r30,r31,92
	r30.s64 = r31.s64 + 92;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82660590;
	sub_826A1E70(ctx, base);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a2e60
	ctx.lr = 0x826605A4;
	sub_826A2E60(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// ld r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// ld r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// ld r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826605DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82660568
	if (ctx.cr0.eq) goto loc_82660568;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82660568
	if (ctx.cr6.eq) goto loc_82660568;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8266056c
	if (!ctx.cr6.gt) goto loc_8266056C;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// b 0x8266056c
	goto loc_8266056C;
}

DEFINE_REX_FUNC(sub_82666B98) {
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
	ctx.lr = 0x82666BA0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r5,r5,65534
	ctx.r5.u64 = ctx.r5.u64 | 65534;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// bl 0x82661f98
	ctx.lr = 0x82666BB8;
	sub_82661F98(ctx, base);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// ori r5,r5,65533
	ctx.r5.u64 = ctx.r5.u64 | 65533;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82661f98
	ctx.lr = 0x82666BCC;
	sub_82661F98(ctx, base);
	// li r28,0
	r28.s64 = 0;
loc_82666BD0:
	// addi r11,r28,94
	ctx.r11.s64 = r28.s64 + 94;
	// addic r10,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	ctx.r10.s64 = r28.s64 + -1;
	// rlwinm r29,r11,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,2
	ctx.r11.s64 = 2;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r31,0
	r31.s64 = 0;
	// and r27,r10,r11
	r27.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lhzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + r30.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82666c30
	if (ctx.cr0.eq) goto loc_82666C30;
	// subfic r11,r28,127
	ctx.xer.ca = r28.u32 <= 127;
	ctx.r11.u64 = static_cast<uint64_t>(127) - r28.u64;
	// rlwinm r25,r11,24,0,7
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
loc_82666C00:
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// ori r11,r11,65534
	ctx.r11.u64 = ctx.r11.u64 | 65534;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// subf r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - r27.u64;
	// or r5,r11,r25
	ctx.r5.u64 = ctx.r11.u64 | r25.u64;
	// bl 0x82661f98
	ctx.lr = 0x82666C20;
	sub_82661F98(ctx, base);
	// lhzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + r30.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82666c00
	if (ctx.cr6.lt) goto loc_82666C00;
loc_82666C30:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// blt cr6,0x82666bd0
	if (ctx.cr6.lt) goto loc_82666BD0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8266B288) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r6,r3,8
	ctx.r6.s64 = ctx.r3.s64 + 8;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x826699a0
	sub_826699A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8266BFC8) {
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
	ctx.lr = 0x8266BFD0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,292(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 292);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8266c138
	if (!ctx.cr0.eq) goto loc_8266C138;
	// lwz r3,72(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// li r28,0
	r28.s64 = 0;
	// lwz r30,236(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 236);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8266c048
	if (ctx.cr0.eq) goto loc_8266C048;
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266c034
	if (!ctx.cr0.eq) goto loc_8266C034;
	// bne cr6,0x8266c038
	if (!ctx.cr6.eq) goto loc_8266C038;
	// bl 0x82675a88
	ctx.lr = 0x8266C018;
	sub_82675A88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8266c13c
	if (ctx.cr0.lt) goto loc_8266C13C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82661f28
	ctx.lr = 0x8266C030;
	sub_82661F28(ctx, base);
	// b 0x8266c0f0
	goto loc_8266C0F0;
loc_8266C034:
	// beq cr6,0x8266c0f0
	if (ctx.cr6.eq) goto loc_8266C0F0;
loc_8266C038:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82666b98
	ctx.lr = 0x8266C044;
	sub_82666B98(ctx, base);
	// b 0x8266c050
	goto loc_8266C050;
loc_8266C048:
	// bne cr6,0x8266c058
	if (!ctx.cr6.eq) goto loc_8266C058;
	// li r28,1
	r28.s64 = 1;
loc_8266C050:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8266c0f0
	if (ctx.cr6.eq) goto loc_8266C0F0;
loc_8266C058:
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266c078
	if (ctx.cr6.eq) goto loc_8266C078;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82670f60
	ctx.lr = 0x8266C070;
	sub_82670F60(ctx, base);
	// lwz r30,236(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 236);
	// b 0x8266c090
	goto loc_8266C090;
loc_8266C078:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82661d78
	ctx.lr = 0x8266C088;
	sub_82661D78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8266c13c
	if (ctx.cr0.lt) goto loc_8266C13C;
loc_8266C090:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,188
	ctx.r3.s64 = r30.s64 + 188;
	// bl 0x826707c0
	ctx.lr = 0x8266C09C;
	sub_826707C0(ctx, base);
	// lwz r11,176(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 176);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,176(r30)
	REX_STORE_U32(r30.u32 + 176, ctx.r11.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266c0f0
	if (!ctx.cr6.eq) goto loc_8266C0F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82670e18
	ctx.lr = 0x8266C0C0;
	sub_82670E18(ctx, base);
	// lwz r11,356(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 356);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,356(r29)
	REX_STORE_U32(r29.u32 + 356, ctx.r11.u32);
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8266c0ec
	if (ctx.cr0.eq) goto loc_8266C0EC;
	// lwz r10,428(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 428);
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8266c0f0
	if (ctx.cr0.eq) goto loc_8266C0F0;
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266c0f0
	if (ctx.cr0.eq) goto loc_8266C0F0;
loc_8266C0EC:
	// li r28,1
	r28.s64 = 1;
loc_8266C0F0:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8266bc88
	ctx.lr = 0x8266C110;
	sub_8266BC88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8266c13c
	if (!ctx.cr0.eq) goto loc_8266C13C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8266c13c
	if (ctx.cr6.eq) goto loc_8266C13C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82669f80
	ctx.lr = 0x8266C134;
	sub_82669F80(ctx, base);
	// b 0x8266c13c
	goto loc_8266C13C;
loc_8266C138:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C13C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82673DB0) {
	REX_FUNC_PROLOGUE();
	// stw r5,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r5.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r6,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r6.u32);
	// bne cr6,0x82673dc4
	if (!ctx.cr6.eq) goto loc_82673DC4;
	// b 0x82672e90
	sub_82672E90(ctx, base);
	return;
loc_82673DC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82674C80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82674C88;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,112(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 112);
	// lis r9,4626
	ctx.r9.s64 = 303169536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// ori r9,r9,4626
	ctx.r9.u64 = ctx.r9.u64 | 4626;
	// stw r10,112(r4)
	REX_STORE_U32(ctx.r4.u32 + 112, ctx.r10.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,120(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 120);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 + 116;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82674d0c
	if (!ctx.cr6.eq) goto loc_82674D0C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x82674d00
	if (!ctx.cr6.lt) goto loc_82674D00;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674CDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82674610
	ctx.lr = 0x82674CF4;
	sub_82674610(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82674d10
	if (!ctx.cr0.eq) goto loc_82674D10;
	// b 0x82674d0c
	goto loc_82674D0C;
loc_82674D00:
	// lis r10,13364
	ctx.r10.s64 = 875823104;
	// ori r10,r10,13364
	ctx.r10.u64 = ctx.r10.u64 | 13364;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82674D0C:
	// li r29,0
	r29.s64 = 0;
loc_82674D10:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82672c40
	ctx.lr = 0x82674D1C;
	sub_82672C40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82676E10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82676E18;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82661180
	ctx.lr = 0x82676E34;
	sub_82661180(ctx, base);
	// addi r28,r31,172
	r28.s64 = r31.s64 + 172;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938a4
	ctx.lr = 0x82676E40;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,168(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 168);
	// addi r11,r30,168
	ctx.r11.s64 = r30.s64 + 168;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82676e84
	if (ctx.cr6.eq) goto loc_82676E84;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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
	// bl 0x8267c840
	ctx.lr = 0x82676E7C;
	sub_8267C840(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82676e90
	goto loc_82676E90;
loc_82676E84:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r31,1
	r31.s64 = 1;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82676E90:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938b4
	ctx.lr = 0x82676E98;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82679360) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82679368;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8265d838
	ctx.lr = 0x82679384;
	sub_8265D838(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82679394
	if (!ctx.cr0.eq) goto loc_82679394;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826793c8
	goto loc_826793C8;
loc_82679394:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826793bc
	if (ctx.cr6.eq) goto loc_826793BC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x826793B0;
	sub_826A1E70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8265d850
	ctx.lr = 0x826793BC;
	sub_8265D850(ctx, base);
loc_826793BC:
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
loc_826793C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8267B598) {
	REX_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,7
	ctx.r9.s64 = 7;
	// lhz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 4);
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8267b5bc
	if (!ctx.cr6.eq) goto loc_8267B5BC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8267b5d0
	goto loc_8267B5D0;
loc_8267B5BC:
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// divw r11,r11,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_8267B5D0:
	// lhz r11,38(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 38);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267b5e4
	if (!ctx.cr0.eq) goto loc_8267B5E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8267b600
	goto loc_8267B600;
loc_8267B5E4:
	// lha r11,32(r5)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r5.u32 + 32));
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// divw r11,r11,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8267B600:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8267EEA8) {
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
	// bl 0x8267c760
	ctx.lr = 0x8267EEC8;
	sub_8267C760(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267eed8
	if (ctx.cr0.eq) goto loc_8267EED8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8267EED8;
	sub_8269CE98(ctx, base);
loc_8267EED8:
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

DEFINE_REX_FUNC(sub_82680ED0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82680ED8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// rlwinm r11,r5,24,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0x3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r9,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stb r11,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// clrlwi r10,r5,22
	ctx.r10.u64 = ctx.r5.u32 & 0x3FF;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82680f10
	if (ctx.cr6.eq) goto loc_82680F10;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r11,r9,7,0,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80) | (ctx.r11.u64 & 0xFFFFFFFF0000007F);
	// stb r11,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
loc_82680F10:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
	// addi r30,r31,11
	r30.s64 = r31.s64 + 11;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stw r7,7(r31)
	REX_STORE_U32(r31.u32 + 7, ctx.r7.u32);
	// stb r11,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r11.u8);
	// rlwimi r9,r10,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stb r9,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r9.u8);
	// lhz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 4);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82680f70
	if (ctx.cr6.eq) goto loc_82680F70;
	// lbz r11,3(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 3);
	// li r5,37
	ctx.r5.s64 = 37;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stb r11,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r11.u8);
	// bl 0x826867c0
	ctx.lr = 0x82680F6C;
	sub_826867C0(ctx, base);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
loc_82680F70:
	// lhz r11,38(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 38);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82680fa0
	if (ctx.cr0.eq) goto loc_82680FA0;
	// lbz r11,3(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 3);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r11,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r11.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82686c90
	ctx.lr = 0x82680F9C;
	sub_82686C90(ctx, base);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
loc_82680FA0:
	// subf r3,r31,r30
	ctx.r3.u64 = r30.u64 - r31.u64;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82684930) {
	REX_FUNC_PROLOGUE();
	// lwz r11,196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// lwz r10,200(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,196(r3)
	REX_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82684848
	sub_82684848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826859E0) {
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
	ctx.lr = 0x826859E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r4,-4
	r29.s64 = ctx.r4.s64 + -4;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82687d08
	ctx.lr = 0x82685A08;
	sub_82687D08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82685aa0
	if (ctx.cr0.eq) goto loc_82685AA0;
	// addi r27,r30,48
	r27.s64 = r30.s64 + 48;
loc_82685A14:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// beq cr6,0x82685a44
	if (ctx.cr6.eq) goto loc_82685A44;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82685a44
	if (ctx.cr0.eq) goto loc_82685A44;
	// addi r29,r31,-4
	r29.s64 = r31.s64 + -4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82687d08
	ctx.lr = 0x82685A38;
	sub_82687D08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82685a14
	if (!ctx.cr0.eq) goto loc_82685A14;
	// b 0x82685aa0
	goto loc_82685AA0;
loc_82685A44:
	// lwz r11,196(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82685a60
	if (!ctx.cr6.gt) goto loc_82685A60;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82684c80
	ctx.lr = 0x82685A5C;
	sub_82684C80(ctx, base);
	// b 0x82685aa0
	goto loc_82685AA0;
loc_82685A60:
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r11,r30,32
	ctx.r11.s64 = r30.s64 + 32;
	// ld r10,24(r29)
	ctx.r10.u64 = REX_LOAD_U64(r29.u32 + 24);
	// ld r8,40(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 40);
	// addi r3,r9,540
	ctx.r3.s64 = ctx.r9.s64 + 540;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpld cr6,r8,r10
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x82685a84
	if (ctx.cr6.lt) goto loc_82685A84;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82685A84:
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// beq cr6,0x82685a9c
	if (ctx.cr6.eq) goto loc_82685A9C;
	// bl 0x826793d0
	ctx.lr = 0x82685A98;
	sub_826793D0(ctx, base);
	// b 0x82685aa0
	goto loc_82685AA0;
loc_82685A9C:
	// bl 0x82682e88
	ctx.lr = 0x82685AA0;
	sub_82682E88(ctx, base);
loc_82685AA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82689C80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82689C88;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// li r28,0
	r28.s64 = 0;
	// addi r8,r9,-6012
	ctx.r8.s64 = ctx.r9.s64 + -6012;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stw r28,-6012(r9)
	REX_STORE_U32(ctx.r9.u32 + -6012, r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r28,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, r28.u32);
	// beq cr6,0x82689dcc
	if (ctx.cr6.eq) goto loc_82689DCC;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// li r30,-1
	r30.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82689cf8
	if (ctx.cr6.eq) goto loc_82689CF8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82689cf8
	if (ctx.cr6.eq) goto loc_82689CF8;
	// lwz r3,264(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// bl 0x823eead8
	ctx.lr = 0x82689CD4;
	sub_823EEAD8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// bl 0x823eeb10
	ctx.lr = 0x82689CE8;
	sub_823EEB10(ctx, base);
	// stw r28,260(r31)
	REX_STORE_U32(r31.u32 + 260, r28.u32);
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// bl 0x823ed360
	ctx.lr = 0x82689CF4;
	sub_823ED360(ctx, base);
	// stw r30,224(r31)
	REX_STORE_U32(r31.u32 + 224, r30.u32);
loc_82689CF8:
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82689d14
	if (ctx.cr6.eq) goto loc_82689D14;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82689d14
	if (ctx.cr6.eq) goto loc_82689D14;
	// bl 0x823ed360
	ctx.lr = 0x82689D10;
	sub_823ED360(ctx, base);
	// stw r30,264(r31)
	REX_STORE_U32(r31.u32 + 264, r30.u32);
loc_82689D14:
	// lwz r3,272(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82689d30
	if (ctx.cr6.eq) goto loc_82689D30;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82689d30
	if (ctx.cr6.eq) goto loc_82689D30;
	// bl 0x823ed360
	ctx.lr = 0x82689D2C;
	sub_823ED360(ctx, base);
	// stw r30,272(r31)
	REX_STORE_U32(r31.u32 + 272, r30.u32);
loc_82689D30:
	// addi r29,r31,68
	r29.s64 = r31.s64 + 68;
	// li r30,4
	r30.s64 = 4;
loc_82689D38:
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x8268c9f0
	ctx.lr = 0x82689D40;
	sub_8268C9F0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stwu r28,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, r28.u32);
	r29.u32 = ea;
	// bne 0x82689d38
	if (!ctx.cr0.eq) goto loc_82689D38;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82689d7c
	if (!ctx.cr6.gt) goto loc_82689D7C;
	// addi r30,r31,84
	r30.s64 = r31.s64 + 84;
loc_82689D60:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8268dfb8
	ctx.lr = 0x82689D68;
	sub_8268DFB8(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82689d60
	if (ctx.cr6.lt) goto loc_82689D60;
loc_82689D7C:
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82689d9c
	if (ctx.cr6.eq) goto loc_82689D9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82689D98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,64(r31)
	REX_STORE_U32(r31.u32 + 64, r28.u32);
loc_82689D9C:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82689dbc
	if (ctx.cr6.eq) goto loc_82689DBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82689DB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,60(r31)
	REX_STORE_U32(r31.u32 + 60, r28.u32);
loc_82689DBC:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// bl 0x823f0350
	ctx.lr = 0x82689DCC;
	sub_823F0350(ctx, base);
loc_82689DCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82694BA8) {
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
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfs f0,19092(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19092);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lfs f13,10520(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10520);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,3720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82694c1c
	if (!ctx.cr6.gt) goto loc_82694C1C;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82694c2c
	goto loc_82694C2C;
loc_82694C1C:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82694C2C:
	// li r8,63
	ctx.r8.s64 = 63;
	// stfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// addi r10,r9,16384
	ctx.r10.s64 = ctx.r9.s64 + 16384;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82694C40:
	// srawi r8,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 15;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82694c40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82694C40;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lwz r11,-5952(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -5952);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82694C7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82695458
	ctx.lr = 0x82694C8C;
	sub_82695458(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r8,r30,1
	ctx.r8.s64 = r30.s64 + 1;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// srawi. r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r1,368
	ctx.r9.s64 = ctx.r1.s64 + 368;
	// lfs f0,15200(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15200);
	ctx.f0.f64 = double(temp.f32);
	// ble 0x82694cd4
	if (!ctx.cr0.gt) goto loc_82694CD4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_82694CB0:
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfsu f13,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r31)
	ea = 4 + r31.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	r31.u32 = ea;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bdnz 0x82694cb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82694CB0;
loc_82694CD4:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82694cec
	if (ctx.cr6.eq) goto loc_82694CEC;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
loc_82694CEC:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
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

DEFINE_REX_FUNC(sub_8269CF00) {
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
	ctx.lr = 0x8269CF08;
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bl 0x826a3640
	ctx.lr = 0x8269CF18;
	sub_826A3640(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r24,-32106
	r24.s64 = -2104098816;
	// lis r25,-32106
	r25.s64 = -2104098816;
	// lwz r30,31528(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 31528);
	// lwz r28,31532(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 31532);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// blt cr6,0x8269cfc4
	if (ctx.cr6.lt) goto loc_8269CFC4;
	// subf r26,r28,r30
	r26.u64 = r30.u64 - r28.u64;
	// addi r27,r26,4
	r27.s64 = r26.s64 + 4;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(r27.u32, 4, ctx.xer);
	// blt cr6,0x8269cfc4
	if (ctx.cr6.lt) goto loc_8269CFC4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a5b90
	ctx.lr = 0x8269CF4C;
	sub_826A5B90(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, ctx.xer);
	// bge cr6,0x8269cfb0
	if (!ctx.cr6.lt) goto loc_8269CFB0;
	// cmplwi cr6,r3,2048
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2048, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// blt cr6,0x8269cf68
	if (ctx.cr6.lt) goto loc_8269CF68;
	// li r11,2048
	ctx.r11.s64 = 2048;
loc_8269CF68:
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, ctx.xer);
	// blt cr6,0x8269cf84
	if (ctx.cr6.lt) goto loc_8269CF84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a2d70
	ctx.lr = 0x8269CF7C;
	sub_826A2D70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8269cfa0
	if (!ctx.cr0.eq) goto loc_8269CFA0;
loc_8269CF84:
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, ctx.xer);
	// blt cr6,0x8269cfc4
	if (ctx.cr6.lt) goto loc_8269CFC4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a2d70
	ctx.lr = 0x8269CF98;
	sub_826A2D70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269cfc4
	if (ctx.cr0.eq) goto loc_8269CFC4;
loc_8269CFA0:
	// srawi r11,r26,2
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x3) != 0);
	ctx.r11.s64 = r26.s32 >> 2;
	// stw r3,31532(r25)
	REX_STORE_U32(r25.u32 + 31532, ctx.r3.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r3
	r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8269CFB0:
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// stw r23,0(r30)
	REX_STORE_U32(r30.u32 + 0, r23.u32);
	// stw r23,80(r31)
	REX_STORE_U32(r31.u32 + 80, r23.u32);
	// stw r11,31528(r24)
	REX_STORE_U32(r24.u32 + 31528, ctx.r11.u32);
	// b 0x8269cfcc
	goto loc_8269CFCC;
loc_8269CFC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_8269CFCC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = r31.s64 + 176;
	// bl 0x8269cfe4
	ctx.lr = 0x8269CFD8;
	ctx.r23 = r23;
	ctx.r24 = r24;
	ctx.r25 = r25;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_8269CFE4(ctx, base);
	r23 = ctx.r23;
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
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(__savegprlr_23) {
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

DEFINE_REX_FUNC(sub_826A26D8) {
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
	ctx.lr = 0x826A26E0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// lwz r31,12(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// bl 0x826ae080
	ctx.lr = 0x826A270C;
	sub_826AE080(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x826a271c
	if (!ctx.cr6.eq) goto loc_826A271C;
	// bl 0x826af230
	ctx.lr = 0x826A271C;
	sub_826AF230(ctx, base);
loc_826A271C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// beq cr6,0x826a2764
	if (ctx.cr6.eq) goto loc_826A2764;
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mulli r11,r31,20
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(20));
loc_826A273C:
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r7,-16(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + -16);
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x826a2758
	if (!ctx.cr6.gt) goto loc_826A2758;
	// lwz r10,-12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -12);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x826a2764
	if (!ctx.cr6.gt) goto loc_826A2764;
loc_826A2758:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// bne 0x826a273c
	if (!ctx.cr0.eq) goto loc_826A273C;
loc_826A2764:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826a277c
	if (ctx.cr6.eq) goto loc_826A277C;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mulli r11,r9,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r28,r11,-20
	r28.s64 = ctx.r11.s64 + -20;
loc_826A277C:
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826a2808
	if (ctx.cr6.eq) goto loc_826A2808;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_826A2790:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x826a27c0
	if (ctx.cr6.eq) goto loc_826A27C0;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x826a27f0
	if (!ctx.cr6.gt) goto loc_826A27F0;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x826a27f0
	if (ctx.cr6.gt) goto loc_826A27F0;
loc_826A27C0:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r25,r8
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826a27f0
	if (ctx.cr6.lt) goto loc_826A27F0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x826a27f0
	if (ctx.cr6.gt) goto loc_826A27F0;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x826a27e8
	if (!ctx.cr6.eq) goto loc_826A27E8;
	// stw r9,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r9.u32);
loc_826A27E8:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_826A27F0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// bdnz 0x826a2790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826A2790;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x826a2818
	if (!ctx.cr6.eq) goto loc_826A2818;
loc_826A2808:
	// stw r24,0(r27)
	REX_STORE_U32(r27.u32 + 0, r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,0(r26)
	REX_STORE_U32(r26.u32 + 0, r24.u32);
	// b 0x826a2824
	goto loc_826A2824;
loc_826A2818:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mulli r11,r11,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(20));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_826A2824:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(__restvmx_82) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826B2E58) {
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
	ctx.lr = 0x826B2E60;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,336(r1)
	REX_STORE_U64(ctx.r1.u32 + 336, ctx.r3.u64);
	// li r11,204
	ctx.r11.s64 = 204;
	// lhz r9,336(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 336);
	// mr r14,r7
	r14.u64 = ctx.r7.u64;
	// stw r5,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r5.u32);
	// rlwinm. r10,r9,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r6,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r6.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,63
	ctx.r7.s64 = 63;
	// stb r11,138(r1)
	REX_STORE_U8(ctx.r1.u32 + 138, ctx.r11.u8);
	// li r5,251
	ctx.r5.s64 = 251;
	// stb r11,139(r1)
	REX_STORE_U8(ctx.r1.u32 + 139, ctx.r11.u8);
	// clrlwi r8,r9,17
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFF;
	// stb r11,140(r1)
	REX_STORE_U8(ctx.r1.u32 + 140, ctx.r11.u8);
	// stb r11,141(r1)
	REX_STORE_U8(ctx.r1.u32 + 141, ctx.r11.u8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r11,142(r1)
	REX_STORE_U8(ctx.r1.u32 + 142, ctx.r11.u8);
	// stb r11,143(r1)
	REX_STORE_U8(ctx.r1.u32 + 143, ctx.r11.u8);
	// stb r11,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// stb r11,145(r1)
	REX_STORE_U8(ctx.r1.u32 + 145, ctx.r11.u8);
	// stb r11,146(r1)
	REX_STORE_U8(ctx.r1.u32 + 146, ctx.r11.u8);
	// stb r11,147(r1)
	REX_STORE_U8(ctx.r1.u32 + 147, ctx.r11.u8);
	// li r11,45
	ctx.r11.s64 = 45;
	// std r4,344(r1)
	REX_STORE_U64(ctx.r1.u32 + 344, ctx.r4.u64);
	// stb r7,136(r1)
	REX_STORE_U8(ctx.r1.u32 + 136, ctx.r7.u8);
	// stb r5,137(r1)
	REX_STORE_U8(ctx.r1.u32 + 137, ctx.r5.u8);
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bne 0x826b2edc
	if (!ctx.cr0.eq) goto loc_826B2EDC;
	// li r11,32
	ctx.r11.s64 = 32;
loc_826B2EDC:
	// stb r11,2(r14)
	REX_STORE_U8(r14.u32 + 2, ctx.r11.u8);
	// clrlwi. r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,342(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 342);
	// lwz r10,338(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 338);
	// bne 0x826b2f34
	if (!ctx.cr0.eq) goto loc_826B2F34;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b2f34
	if (!ctx.cr6.eq) goto loc_826B2F34;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x826b2f34
	if (!ctx.cr6.eq) goto loc_826B2F34;
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// sth r22,0(r14)
	REX_STORE_U16(r14.u32 + 0, r22.u16);
	// li r11,45
	ctx.r11.s64 = 45;
	// beq cr6,0x826b2f18
	if (ctx.cr6.eq) goto loc_826B2F18;
	// li r11,32
	ctx.r11.s64 = 32;
loc_826B2F18:
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r6,3(r14)
	REX_STORE_U8(r14.u32 + 3, ctx.r6.u8);
	// stb r22,5(r14)
	REX_STORE_U8(r14.u32 + 5, r22.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,2(r14)
	REX_STORE_U8(r14.u32 + 2, ctx.r11.u8);
	// stb r10,4(r14)
	REX_STORE_U8(r14.u32 + 4, ctx.r10.u8);
	// b 0x826b3a0c
	goto loc_826B3A0C;
loc_826B2F34:
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// bne cr6,0x826b3074
	if (!ctx.cr6.eq) goto loc_826B3074;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// sth r6,0(r14)
	REX_STORE_U16(r14.u32 + 0, ctx.r6.u16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826b2f54
	if (!ctx.cr6.eq) goto loc_826B2F54;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826b2f90
	if (ctx.cr6.eq) goto loc_826B2F90;
loc_826B2F54:
	// rlwinm. r8,r10,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x826b2f90
	if (!ctx.cr0.eq) goto loc_826B2F90;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r5,r11,26040
	ctx.r5.s64 = ctx.r11.s64 + 26040;
	// addi r3,r14,4
	ctx.r3.s64 = r14.s64 + 4;
	// bl 0x826a1bc8
	ctx.lr = 0x826B2F70;
	sub_826A1BC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826b3048
	if (ctx.cr0.eq) goto loc_826B3048;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269cbf8
	ctx.lr = 0x826B2F90;
	sub_8269CBF8(ctx, base);
loc_826B2F90:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b2fe0
	if (ctx.cr6.eq) goto loc_826B2FE0;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826b2fe0
	if (!ctx.cr6.eq) goto loc_826B2FE0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x826b302c
	if (!ctx.cr6.eq) goto loc_826B302C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r5,r11,26032
	ctx.r5.s64 = ctx.r11.s64 + 26032;
	// addi r3,r14,4
	ctx.r3.s64 = r14.s64 + 4;
	// bl 0x826a1bc8
	ctx.lr = 0x826B2FC0;
	sub_826A1BC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826b300c
	if (ctx.cr0.eq) goto loc_826B300C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269cbf8
	ctx.lr = 0x826B2FE0;
	sub_8269CBF8(ctx, base);
loc_826B2FE0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826b302c
	if (!ctx.cr6.eq) goto loc_826B302C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x826b302c
	if (!ctx.cr6.eq) goto loc_826B302C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r5,r11,26024
	ctx.r5.s64 = ctx.r11.s64 + 26024;
	// addi r3,r14,4
	ctx.r3.s64 = r14.s64 + 4;
	// bl 0x826a1bc8
	ctx.lr = 0x826B3004;
	sub_826A1BC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826b3014
	if (!ctx.cr0.eq) goto loc_826B3014;
loc_826B300C:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x826b304c
	goto loc_826B304C;
loc_826B3014:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269cbf8
	ctx.lr = 0x826B302C;
	sub_8269CBF8(ctx, base);
loc_826B302C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r5,r11,26016
	ctx.r5.s64 = ctx.r11.s64 + 26016;
	// addi r3,r14,4
	ctx.r3.s64 = r14.s64 + 4;
	// bl 0x826a1bc8
	ctx.lr = 0x826B3040;
	sub_826A1BC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826b305c
	if (!ctx.cr0.eq) goto loc_826B305C;
loc_826B3048:
	// li r11,6
	ctx.r11.s64 = 6;
loc_826B304C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,3(r14)
	REX_STORE_U8(r14.u32 + 3, ctx.r11.u8);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x826b3a08
	goto loc_826B3A08;
loc_826B305C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269cbf8
	ctx.lr = 0x826B3074;
	sub_8269CBF8(ctx, base);
loc_826B3074:
	// rlwinm r9,r10,9,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FE;
	// stw r10,90(r1)
	REX_STORE_U32(ctx.r1.u32 + 90, ctx.r10.u32);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stw r7,94(r1)
	REX_STORE_U32(ctx.r1.u32 + 94, ctx.r7.u32);
	// mulli r11,r11,19728
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(19728));
	// sth r8,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r8.u16);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// mulli r10,r10,77
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(77));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r22,0
	r22.s64 = 0;
	// addis r11,r11,-4931
	ctx.r11.s64 = ctx.r11.s64 + -323158016;
	// lis r10,0
	ctx.r10.s64 = 0;
	// sth r22,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, r22.u16);
	// addi r11,r11,-4852
	ctx.r11.s64 = ctx.r11.s64 + -4852;
	// lis r7,0
	ctx.r7.s64 = 0;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// extsh r19,r11
	r19.s64 = ctx.r11.s16;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// addi r11,r9,28824
	ctx.r11.s64 = ctx.r9.s64 + 28824;
	// mr r24,r19
	r24.u64 = r19.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// neg. r25,r19
	r25.s64 = static_cast<int64_t>(-r19.u64);
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ori r20,r10,49154
	r20.u64 = ctx.r10.u64 | 49154;
	// ori r21,r7,65535
	r21.u64 = ctx.r7.u64 | 65535;
	// ori r17,r6,32768
	r17.u64 = ctx.r6.u64 | 32768;
	// ori r18,r5,32768
	r18.u64 = ctx.r5.u64 | 32768;
	// li r15,-32768
	r15.s64 = -32768;
	// ori r16,r4,32768
	r16.u64 = ctx.r4.u64 | 32768;
	// addi r23,r11,-96
	r23.s64 = ctx.r11.s64 + -96;
	// beq 0x826b347c
	if (ctx.cr0.eq) goto loc_826B347C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bge cr6,0x826b3114
	if (!ctx.cr6.lt) goto loc_826B3114;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// neg r25,r25
	r25.s64 = static_cast<int64_t>(-r25.u64);
	// addi r11,r11,29176
	ctx.r11.s64 = ctx.r11.s64 + 29176;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r23,r11,-96
	r23.s64 = ctx.r11.s64 + -96;
loc_826B3114:
	// beq cr6,0x826b347c
	if (ctx.cr6.eq) goto loc_826B347C;
	// lwz r27,96(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,92(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_826B3120:
	// clrlwi. r11,r25,29
	ctx.r11.u64 = r25.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r23,r23,84
	r23.s64 = r23.s64 + 84;
	// srawi r25,r25,3
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x7) != 0);
	r25.s64 = r25.s32 >> 3;
	// beq 0x826b346c
	if (ctx.cr0.eq) goto loc_826B346C;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r4,r11,r23
	ctx.r4.u64 = ctx.r11.u64 + r23.u64;
	// lhz r11,10(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 10);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x826b3160
	if (ctx.cr6.lt) goto loc_826B3160;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x826a1e70
	ctx.lr = 0x826B3150;
	sub_826A1E70(ctx, base);
	// lwz r11,158(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 158);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,158(r1)
	REX_STORE_U32(ctx.r1.u32 + 158, ctx.r11.u32);
loc_826B3160:
	// stw r22,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r22.u32);
	// clrlwi r11,r31,17
	ctx.r11.u64 = r31.u32 & 0x7FFF;
	// stw r22,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r22.u32);
	// clrlwi r9,r31,16
	ctx.r9.u64 = r31.u32 & 0xFFFF;
	// stw r22,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r22.u32);
	// mr r29,r22
	r29.u64 = r22.u64;
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// lhz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r10,r8,17
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFF;
	// xor r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r26,r8,0,16,16
	r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	// clrlwi r30,r7,16
	r30.u64 = ctx.r7.u32 & 0xFFFF;
	// bge cr6,0x826b344c
	if (!ctx.cr6.lt) goto loc_826B344C;
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// bge cr6,0x826b344c
	if (!ctx.cr6.lt) goto loc_826B344C;
	// clrlwi r11,r30,16
	ctx.r11.u64 = r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,49149
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49149, ctx.xer);
	// bgt cr6,0x826b344c
	if (ctx.cr6.gt) goto loc_826B344C;
	// cmplwi cr6,r11,16319
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16319, ctx.xer);
	// bgt cr6,0x826b31c0
	if (ctx.cr6.gt) goto loc_826B31C0;
loc_826B31B8:
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// b 0x826b345c
	goto loc_826B345C;
loc_826B31C0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826b31f4
	if (!ctx.cr6.eq) goto loc_826B31F4;
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r30,r11,16
	r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x826b31f4
	if (!ctx.cr0.eq) goto loc_826B31F4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x826b31f4
	if (!ctx.cr6.eq) goto loc_826B31F4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x826b31f4
	if (!ctx.cr6.eq) goto loc_826B31F4;
	// sth r22,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, r22.u16);
	// b 0x826b346c
	goto loc_826B346C;
loc_826B31F4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b322c
	if (!ctx.cr6.eq) goto loc_826B322C;
	// clrlwi r11,r30,16
	ctx.r11.u64 = r30.u32 & 0xFFFF;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r30,r11,16
	r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x826b322c
	if (!ctx.cr0.eq) goto loc_826B322C;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b322c
	if (!ctx.cr6.eq) goto loc_826B322C;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b31b8
	if (ctx.cr6.eq) goto loc_826B31B8;
loc_826B322C:
	// mr r31,r22
	r31.u64 = r22.u64;
	// addi r8,r1,110
	ctx.r8.s64 = ctx.r1.s64 + 110;
	// li r3,5
	ctx.r3.s64 = 5;
loc_826B3238:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x826b32a4
	if (!ctx.cr6.gt) goto loc_826B32A4;
	// addi r10,r1,98
	ctx.r10.s64 = ctx.r1.s64 + 98;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r5,r4,2
	ctx.r5.s64 = ctx.r4.s64 + 2;
	// subf r6,r11,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_826B3254:
	// lhz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// lhz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r11,2(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 2);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826b327c
	if (ctx.cr6.lt) goto loc_826B327C;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x826b3280
	if (!ctx.cr6.lt) goto loc_826B3280;
loc_826B327C:
	// li r7,1
	ctx.r7.s64 = 1;
loc_826B3280:
	// stw r10,2(r8)
	REX_STORE_U32(ctx.r8.u32 + 2, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x826b3298
	if (ctx.cr6.eq) goto loc_826B3298;
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r11.u16);
loc_826B3298:
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bdnz 0x826b3254
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B3254;
loc_826B32A4:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bgt 0x826b3238
	if (ctx.cr0.gt) goto loc_826B3238;
	// clrlwi r11,r30,16
	ctx.r11.u64 = r30.u32 & 0xFFFF;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
loc_826B32C0:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x826b3310
	if (!ctx.cr0.gt) goto loc_826B3310;
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm. r7,r8,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x826b3310
	if (!ctx.cr0.eq) goto loc_826B3310;
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 | ctx.r7.u64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + r21.u64;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// b 0x826b32c0
	goto loc_826B32C0;
loc_826B3310:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x826b3398
	if (ctx.cr6.gt) goto loc_826B3398;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + r21.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x826b3398
	if (!ctx.cr0.lt) goto loc_826B3398;
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_826B3334:
	// lhz r7,114(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x826b3344
	if (ctx.cr0.eq) goto loc_826B3344;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_826B3344:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r7,r9,31,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r8,31,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x80000000;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// extsh. r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// blt 0x826b3334
	if (ctx.cr0.lt) goto loc_826B3334;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// beq cr6,0x826b3398
	if (ctx.cr6.eq) goto loc_826B3398;
	// lhz r10,114(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// sth r10,114(r1)
	REX_STORE_U16(ctx.r1.u32 + 114, ctx.r10.u16);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_826B3398:
	// lhz r9,114(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bgt cr6,0x826b33b0
	if (ctx.cr6.gt) goto loc_826B33B0;
	// clrlwi r10,r10,15
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFF;
	// cmplw cr6,r10,r17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r17.u32, ctx.xer);
	// bne cr6,0x826b3410
	if (!ctx.cr6.eq) goto loc_826B3410;
loc_826B33B0:
	// lwz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 110);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x826b3408
	if (!ctx.cr6.eq) goto loc_826B3408;
	// lwz r10,106(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 106);
	// stw r22,110(r1)
	REX_STORE_U32(ctx.r1.u32 + 110, r22.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x826b33fc
	if (!ctx.cr6.eq) goto loc_826B33FC;
	// lhz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// stw r22,106(r1)
	REX_STORE_U32(ctx.r1.u32 + 106, r22.u32);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x826b33f0
	if (!ctx.cr6.eq) goto loc_826B33F0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r18,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, r18.u16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x826b3410
	goto loc_826B3410;
loc_826B33F0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// b 0x826b3410
	goto loc_826B3410;
loc_826B33FC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,106(r1)
	REX_STORE_U32(ctx.r1.u32 + 106, ctx.r10.u32);
	// b 0x826b3410
	goto loc_826B3410;
loc_826B3408:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,110(r1)
	REX_STORE_U32(ctx.r1.u32 + 110, ctx.r10.u32);
loc_826B3410:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// bge cr6,0x826b344c
	if (!ctx.cr6.lt) goto loc_826B344C;
	// lhz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// clrlwi r10,r26,16
	ctx.r10.u64 = r26.u32 & 0xFFFF;
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// sth r9,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// stw r8,94(r1)
	REX_STORE_U32(ctx.r1.u32 + 94, ctx.r8.u32);
	// stw r7,90(r1)
	REX_STORE_U32(ctx.r1.u32 + 90, ctx.r7.u32);
	// lwz r28,92(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r27,96(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x826b346c
	goto loc_826B346C;
loc_826B344C:
	// stw r15,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r15.u32);
	// clrlwi. r11,r26,16
	ctx.r11.u64 = r26.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826b345c
	if (!ctx.cr0.eq) goto loc_826B345C;
	// stw r16,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r16.u32);
loc_826B345C:
	// mr r28,r22
	r28.u64 = r22.u64;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// mr r27,r22
	r27.u64 = r22.u64;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
loc_826B346C:
	// lhz r31,88(r1)
	r31.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x826b3120
	if (!ctx.cr6.eq) goto loc_826B3120;
	// b 0x826b3484
	goto loc_826B3484;
loc_826B347C:
	// lwz r27,96(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,92(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_826B3484:
	// clrlwi r9,r31,16
	ctx.r9.u64 = r31.u32 & 0xFFFF;
	// cmplwi cr6,r9,16383
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16383, ctx.xer);
	// blt cr6,0x826b3794
	if (ctx.cr6.lt) goto loc_826B3794;
	// lhz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 136);
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// addi r7,r24,1
	ctx.r7.s64 = r24.s64 + 1;
	// stw r22,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r22.u32);
	// clrlwi r10,r8,17
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFF;
	// stw r22,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r22.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// stw r22,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r22.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r19,r7
	r19.s64 = ctx.r7.s16;
	// mr r30,r22
	r30.u64 = r22.u64;
	// rlwinm r29,r9,0,16,16
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000;
	// clrlwi r31,r6,16
	r31.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// bge cr6,0x826b377c
	if (!ctx.cr6.lt) goto loc_826B377C;
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// bge cr6,0x826b377c
	if (!ctx.cr6.lt) goto loc_826B377C;
	// clrlwi r9,r31,16
	ctx.r9.u64 = r31.u32 & 0xFFFF;
	// cmplwi cr6,r9,49149
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 49149, ctx.xer);
	// bgt cr6,0x826b377c
	if (ctx.cr6.gt) goto loc_826B377C;
	// cmplwi cr6,r9,16319
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16319, ctx.xer);
	// bgt cr6,0x826b34f0
	if (ctx.cr6.gt) goto loc_826B34F0;
loc_826B34E8:
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// b 0x826b378c
	goto loc_826B378C;
loc_826B34F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b3524
	if (!ctx.cr6.eq) goto loc_826B3524;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi. r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r31,r9,16
	r31.u64 = ctx.r9.u32 & 0xFFFF;
	// bne 0x826b3524
	if (!ctx.cr0.eq) goto loc_826B3524;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x826b3524
	if (!ctx.cr6.eq) goto loc_826B3524;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x826b3524
	if (!ctx.cr6.eq) goto loc_826B3524;
	// sth r22,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, r22.u16);
	// b 0x826b3794
	goto loc_826B3794;
loc_826B3524:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b355c
	if (!ctx.cr6.eq) goto loc_826B355C;
	// clrlwi r11,r31,16
	ctx.r11.u64 = r31.u32 & 0xFFFF;
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r31,r11,16
	r31.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x826b355c
	if (!ctx.cr0.eq) goto loc_826B355C;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b355c
	if (!ctx.cr6.eq) goto loc_826B355C;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b34e8
	if (ctx.cr6.eq) goto loc_826B34E8;
loc_826B355C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r8,r1,126
	ctx.r8.s64 = ctx.r1.s64 + 126;
	// li r4,5
	ctx.r4.s64 = 5;
loc_826B3568:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x826b35d4
	if (!ctx.cr6.gt) goto loc_826B35D4;
	// addi r10,r1,98
	ctx.r10.s64 = ctx.r1.s64 + 98;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r5,r1,138
	ctx.r5.s64 = ctx.r1.s64 + 138;
	// subf r6,r11,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_826B3584:
	// lhz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// lhz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// lwz r11,2(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 2);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826b35ac
	if (ctx.cr6.lt) goto loc_826B35AC;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x826b35b0
	if (!ctx.cr6.lt) goto loc_826B35B0;
loc_826B35AC:
	// li r7,1
	ctx.r7.s64 = 1;
loc_826B35B0:
	// stw r10,2(r8)
	REX_STORE_U32(ctx.r8.u32 + 2, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x826b35c8
	if (ctx.cr6.eq) goto loc_826B35C8;
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r11.u16);
loc_826B35C8:
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bdnz 0x826b3584
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B3584;
loc_826B35D4:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bgt 0x826b3568
	if (ctx.cr0.gt) goto loc_826B3568;
	// clrlwi r11,r31,16
	ctx.r11.u64 = r31.u32 & 0xFFFF;
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
loc_826B35F0:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x826b3640
	if (!ctx.cr0.gt) goto loc_826B3640;
	// lwz r8,120(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm. r7,r8,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x826b3640
	if (!ctx.cr0.eq) goto loc_826B3640;
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 | ctx.r7.u64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + r21.u64;
	// stw r7,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// b 0x826b35f0
	goto loc_826B35F0;
loc_826B3640:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x826b36c8
	if (ctx.cr6.gt) goto loc_826B36C8;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + r21.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x826b36c8
	if (!ctx.cr0.lt) goto loc_826B36C8;
	// lwz r8,120(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
loc_826B3664:
	// lhz r7,130(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 130);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x826b3674
	if (ctx.cr0.eq) goto loc_826B3674;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_826B3674:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r7,r9,31,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r8,31,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x80000000;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// extsh. r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// blt 0x826b3664
	if (ctx.cr0.lt) goto loc_826B3664;
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// beq cr6,0x826b36c8
	if (ctx.cr6.eq) goto loc_826B36C8;
	// lhz r10,130(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 130);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// sth r10,130(r1)
	REX_STORE_U16(ctx.r1.u32 + 130, ctx.r10.u16);
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_826B36C8:
	// lhz r9,130(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 130);
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bgt cr6,0x826b36e0
	if (ctx.cr6.gt) goto loc_826B36E0;
	// clrlwi r10,r10,15
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFF;
	// cmplw cr6,r10,r17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r17.u32, ctx.xer);
	// bne cr6,0x826b3740
	if (!ctx.cr6.eq) goto loc_826B3740;
loc_826B36E0:
	// lwz r10,126(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 126);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x826b3738
	if (!ctx.cr6.eq) goto loc_826B3738;
	// lwz r10,122(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 122);
	// stw r22,126(r1)
	REX_STORE_U32(ctx.r1.u32 + 126, r22.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x826b372c
	if (!ctx.cr6.eq) goto loc_826B372C;
	// lhz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 120);
	// stw r22,122(r1)
	REX_STORE_U32(ctx.r1.u32 + 122, r22.u32);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x826b3720
	if (!ctx.cr6.eq) goto loc_826B3720;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r18,120(r1)
	REX_STORE_U16(ctx.r1.u32 + 120, r18.u16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x826b3740
	goto loc_826B3740;
loc_826B3720:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,120(r1)
	REX_STORE_U16(ctx.r1.u32 + 120, ctx.r10.u16);
	// b 0x826b3740
	goto loc_826B3740;
loc_826B372C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,122(r1)
	REX_STORE_U32(ctx.r1.u32 + 122, ctx.r10.u32);
	// b 0x826b3740
	goto loc_826B3740;
loc_826B3738:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,126(r1)
	REX_STORE_U32(ctx.r1.u32 + 126, ctx.r10.u32);
loc_826B3740:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// bge cr6,0x826b377c
	if (!ctx.cr6.lt) goto loc_826B377C;
	// lhz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 128);
	// clrlwi r9,r29,16
	ctx.r9.u64 = r29.u32 & 0xFFFF;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r8,124(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// sth r11,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// sth r10,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r10.u16);
	// stw r7,90(r1)
	REX_STORE_U32(ctx.r1.u32 + 90, ctx.r7.u32);
	// stw r8,94(r1)
	REX_STORE_U32(ctx.r1.u32 + 94, ctx.r8.u32);
	// lwz r27,96(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,92(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x826b3794
	goto loc_826B3794;
loc_826B377C:
	// stw r15,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r15.u32);
	// clrlwi. r11,r29,16
	ctx.r11.u64 = r29.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826b378c
	if (!ctx.cr0.eq) goto loc_826B378C;
	// stw r16,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r16.u32);
loc_826B378C:
	// mr r28,r22
	r28.u64 = r22.u64;
	// mr r27,r22
	r27.u64 = r22.u64;
loc_826B3794:
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// sth r19,0(r14)
	REX_STORE_U16(r14.u32 + 0, r19.u16);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b37ec
	if (ctx.cr0.eq) goto loc_826B37EC;
	// lwz r10,356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// extsh r11,r19
	ctx.r11.s64 = r19.s16;
	// add. r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x826b37f0
	if (ctx.cr0.gt) goto loc_826B37F0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// sth r22,0(r14)
	REX_STORE_U16(r14.u32 + 0, r22.u16);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// li r11,45
	ctx.r11.s64 = 45;
	// beq cr6,0x826b37cc
	if (ctx.cr6.eq) goto loc_826B37CC;
	// li r11,32
	ctx.r11.s64 = 32;
loc_826B37CC:
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r10,4(r14)
	REX_STORE_U8(r14.u32 + 4, ctx.r10.u8);
loc_826B37D4:
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,2(r14)
	REX_STORE_U8(r14.u32 + 2, ctx.r11.u8);
	// stb r22,5(r14)
	REX_STORE_U8(r14.u32 + 5, r22.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,3(r14)
	REX_STORE_U8(r14.u32 + 3, ctx.r9.u8);
	// b 0x826b3a0c
	goto loc_826B3A0C;
loc_826B37EC:
	// lwz r9,356(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
loc_826B37F0:
	// cmpwi cr6,r9,21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 21, ctx.xer);
	// ble cr6,0x826b37fc
	if (!ctx.cr6.gt) goto loc_826B37FC;
	// li r9,21
	ctx.r9.s64 = 21;
loc_826B37FC:
	// lhz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// li r11,8
	ctx.r11.s64 = 8;
	// sth r22,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, r22.u16);
	// addi r10,r10,-16382
	ctx.r10.s64 = ctx.r10.s64 + -16382;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r30,88(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_826B3814:
	// rlwinm r11,r27,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0x1;
	// rlwinm r8,r28,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0x1;
	// rlwinm r7,r28,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r27,1,0,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// or r28,r7,r11
	r28.u64 = ctx.r7.u64 | ctx.r11.u64;
	// or r30,r6,r8
	r30.u64 = ctx.r6.u64 | ctx.r8.u64;
	// bdnz 0x826b3814
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B3814;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// bge cr6,0x826b3884
	if (!ctx.cr6.lt) goto loc_826B3884;
	// neg r11,r10
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x826b3884
	if (!ctx.cr0.gt) goto loc_826B3884;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_826B3858:
	// rlwinm r11,r30,31,0,0
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x80000000;
	// rlwinm r10,r28,31,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x80000000;
	// rlwinm r8,r28,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r27,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r30,r30,31,1,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// or r28,r8,r11
	r28.u64 = ctx.r8.u64 | ctx.r11.u64;
	// or r27,r7,r10
	r27.u64 = ctx.r7.u64 | ctx.r10.u64;
	// bdnz 0x826b3858
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B3858;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
loc_826B3884:
	// addi r26,r14,4
	r26.s64 = r14.s64 + 4;
	// addic. r11,r9,1
	ctx.xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r11.s64 = ctx.r9.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r26
	r31.u64 = r26.u64;
	// ble 0x826b3994
	if (!ctx.cr0.gt) goto loc_826B3994;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// b 0x826b38a0
	goto loc_826B38A0;
loc_826B389C:
	// lwz r30,88(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_826B38A0:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x826a1e70
	ctx.lr = 0x826B38B0;
	sub_826A1E70(ctx, base);
	// rlwinm r5,r27,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0x1;
	// rlwinm r7,r28,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,160(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r28,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0x1;
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r7,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// or r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 | ctx.r6.u64;
	// or r7,r4,r5
	ctx.r7.u64 = ctx.r4.u64 | ctx.r5.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826b3900
	if (ctx.cr6.lt) goto loc_826B3900;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x826b392c
	if (!ctx.cr6.lt) goto loc_826B392C;
loc_826B3900:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826b3918
	if (ctx.cr6.lt) goto loc_826B3918;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x826b391c
	if (!ctx.cr6.lt) goto loc_826B391C;
loc_826B3918:
	// li r8,1
	ctx.r8.s64 = 1;
loc_826B391C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x826b392c
	if (ctx.cr6.eq) goto loc_826B392C;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_826B392C:
	// lwz r8,156(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826b3944
	if (ctx.cr6.lt) goto loc_826B3944;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x826b3948
	if (!ctx.cr6.lt) goto loc_826B3948;
loc_826B3944:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_826B3948:
	// lwz r9,152(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// or r28,r11,r7
	r28.u64 = ctx.r11.u64 | ctx.r7.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r27,r10,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lbz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// stb r22,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, r22.u8);
	// bne 0x826b389c
	if (!ctx.cr0.eq) goto loc_826B389C;
loc_826B3994:
	// lbzu r10,-1(r31)
	ea = -1 + r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// cmpwi cr6,r10,53
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 53, ctx.xer);
	// blt cr6,0x826b3a24
	if (ctx.cr6.lt) goto loc_826B3A24;
	// b 0x826b39c4
	goto loc_826B39C4;
loc_826B39AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,57
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 57, ctx.xer);
	// bne cr6,0x826b39cc
	if (!ctx.cr6.eq) goto loc_826B39CC;
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_826B39C4:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bge cr6,0x826b39ac
	if (!ctx.cr6.lt) goto loc_826B39AC;
loc_826B39CC:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bge cr6,0x826b39e4
	if (!ctx.cr6.lt) goto loc_826B39E4;
	// lhz r10,0(r14)
	ctx.r10.u64 = REX_LOAD_U16(r14.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,0(r14)
	REX_STORE_U16(r14.u32 + 0, ctx.r10.u16);
loc_826B39E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_826B39F0:
	// subf r11,r14,r11
	ctx.r11.u64 = ctx.r11.u64 - r14.u64;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// add r11,r10,r14
	ctx.r11.u64 = ctx.r10.u64 + r14.u64;
	// stb r10,3(r14)
	REX_STORE_U8(r14.u32 + 3, ctx.r10.u8);
	// stb r22,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r22.u8);
loc_826B3A08:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826B3A0C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1cd0
	return;
loc_826B3A14:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x826b3a2c
	if (!ctx.cr6.eq) goto loc_826B3A2C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_826B3A24:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bge cr6,0x826b3a14
	if (!ctx.cr6.lt) goto loc_826B3A14;
loc_826B3A2C:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bge cr6,0x826b39f0
	if (!ctx.cr6.lt) goto loc_826B39F0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// sth r22,0(r14)
	REX_STORE_U16(r14.u32 + 0, r22.u16);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// li r11,45
	ctx.r11.s64 = 45;
	// beq cr6,0x826b3a4c
	if (ctx.cr6.eq) goto loc_826B3A4C;
	// li r11,32
	ctx.r11.s64 = 32;
loc_826B3A4C:
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r10,0(r26)
	REX_STORE_U8(r26.u32 + 0, ctx.r10.u8);
	// b 0x826b37d4
	goto loc_826B37D4;
}

DEFINE_REX_FUNC(sub_82721C90) {
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
	ctx.lr = 0x82721C98;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r7,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mulli r10,r10,34
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(34));
	// lbzx r9,r11,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbz r29,0(r8)
	r29.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// rotlwi r31,r9,1
	r31.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r30,r7,r30
	r30.u64 = ctx.r7.u64 + r30.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// rlwinm r31,r30,1,0,30
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r24,r6,-4
	r24.s64 = ctx.r6.s64 + -4;
	// add r30,r9,r29
	r30.u64 = ctx.r9.u64 + r29.u64;
	// add r9,r31,r4
	ctx.r9.u64 = r31.u64 + ctx.r4.u64;
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// srawi r31,r31,5
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	r31.s64 = r31.s32 >> 5;
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(r24.s32, 4, ctx.xer);
	// stw r31,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r31.u32);
	// lbz r31,0(r4)
	r31.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lbzx r29,r11,r4
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// rotlwi r28,r29,3
	r28.u64 = __builtin_rotateleft32(r29.u32, 3);
	// mulli r30,r31,25
	r30.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(25));
	// subf r31,r29,r28
	r31.u64 = r28.u64 - r29.u64;
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// srawi r31,r31,5
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	r31.s64 = r31.s32 >> 5;
	// stw r31,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, r31.u32);
	// lbz r31,0(r8)
	r31.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbzx r28,r11,r4
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbz r29,0(r9)
	r29.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r30,0(r4)
	r30.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rotlwi r30,r30,1
	r30.u64 = __builtin_rotateleft32(r30.u32, 1);
	// subf r31,r31,r30
	r31.u64 = r30.u64 - r31.u64;
	// rotlwi r27,r28,3
	r27.u64 = __builtin_rotateleft32(r28.u32, 3);
	// rlwinm r30,r31,1,0,30
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r28,r28,r27
	r28.u64 = r27.u64 - r28.u64;
	// add r30,r31,r30
	r30.u64 = r31.u64 + r30.u64;
	// rlwinm r31,r28,2,0,29
	r31.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// srawi r31,r31,5
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	r31.s64 = r31.s32 >> 5;
	// stw r31,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, r31.u32);
	// lbz r31,0(r8)
	r31.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r28,0(r4)
	r28.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lbzx r30,r11,r4
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// rotlwi r27,r30,3
	r27.u64 = __builtin_rotateleft32(r30.u32, 3);
	// rotlwi r29,r31,1
	r29.u64 = __builtin_rotateleft32(r31.u32, 1);
	// subf r30,r30,r27
	r30.u64 = r27.u64 - r30.u64;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// rlwinm r30,r30,1,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// subf r31,r28,r31
	r31.u64 = r31.u64 - r28.u64;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r31,r31,5
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	r31.s64 = r31.s32 >> 5;
	// stw r31,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, r31.u32);
	// ble cr6,0x82721e40
	if (!ctx.cr6.gt) goto loc_82721E40;
	// addi r31,r24,-5
	r31.s64 = r24.s64 + -5;
	// rlwinm r30,r7,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r31,31,1,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r29,r11,r30
	r29.u64 = r30.u64 - ctx.r11.u64;
	// addi r30,r31,1
	r30.s64 = r31.s64 + 1;
	// addi r31,r5,12
	r31.s64 = ctx.r5.s64 + 12;
	// subf r28,r11,r4
	r28.u64 = ctx.r4.u64 - ctx.r11.u64;
	// add r29,r29,r4
	r29.u64 = r29.u64 + ctx.r4.u64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82721DB0:
	// lbz r30,0(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r26,0(r8)
	r26.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// rotlwi r30,r30,1
	r30.u64 = __builtin_rotateleft32(r30.u32, 1);
	// lbz r25,0(r9)
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r23,r26,3
	r23.u64 = __builtin_rotateleft32(r26.u32, 3);
	// lbzux r27,r29,r11
	ea = r29.u32 + ctx.r11.u32;
	r27.u64 = REX_LOAD_U8(ea);
	r29.u32 = ea;
	// subf r30,r25,r30
	r30.u64 = r30.u64 - r25.u64;
	// subf r26,r26,r23
	r26.u64 = r23.u64 - r26.u64;
	// rlwinm r25,r30,1,0,30
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r26,2,0,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r30,r25
	r30.u64 = r30.u64 + r25.u64;
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// srawi r30,r30,5
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1F) != 0);
	r30.s64 = r30.s32 >> 5;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// lbz r26,0(r8)
	r26.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r30,0(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzux r27,r28,r11
	ea = r28.u32 + ctx.r11.u32;
	r27.u64 = REX_LOAD_U8(ea);
	r28.u32 = ea;
	// lbz r25,0(r9)
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r25,r25,1
	r25.u64 = __builtin_rotateleft32(r25.u32, 1);
	// subf r30,r30,r25
	r30.u64 = r25.u64 - r30.u64;
	// rotlwi r23,r26,3
	r23.u64 = __builtin_rotateleft32(r26.u32, 3);
	// rlwinm r25,r30,1,0,30
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r26,r26,r23
	r26.u64 = r23.u64 - r26.u64;
	// add r30,r30,r25
	r30.u64 = r30.u64 + r25.u64;
	// rlwinm r26,r26,2,0,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// srawi r30,r30,5
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1F) != 0);
	r30.s64 = r30.s32 >> 5;
	// stwu r30,8(r31)
	ea = 8 + r31.u32;
	REX_STORE_U32(ea, r30.u32);
	r31.u32 = ea;
	// bdnz 0x82721db0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82721DB0;
loc_82721E40:
	// addi r11,r6,-6
	ctx.r11.s64 = ctx.r6.s64 + -6;
	// mullw r10,r24,r7
	ctx.r10.s64 = int64_t(r24.s32) * int64_t(ctx.r7.s32);
	// lbzx r29,r10,r4
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// mullw r9,r11,r7
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lbzx r31,r9,r4
	r31.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// rotlwi r28,r29,3
	r28.u64 = __builtin_rotateleft32(r29.u32, 3);
	// addi r8,r6,-2
	ctx.r8.s64 = ctx.r6.s64 + -2;
	// rotlwi r30,r31,1
	r30.u64 = __builtin_rotateleft32(r31.u32, 1);
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lbzx r27,r11,r4
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// subf r29,r29,r28
	r29.u64 = r28.u64 - r29.u64;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// rlwinm r30,r29,1,0,30
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r6,-8
	r29.s64 = ctx.r6.s64 + -8;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// rlwinm r30,r24,2,0,29
	r30.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r27,r31
	r31.u64 = r31.u64 - r27.u64;
	// mullw r29,r29,r7
	r29.s64 = int64_t(r29.s32) * int64_t(ctx.r7.s32);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// rlwinm r28,r8,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r31,r31,5
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	r31.s64 = r31.s32 >> 5;
	// add r27,r8,r5
	r27.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stwx r31,r30,r5
	REX_STORE_U32(r30.u32 + ctx.r5.u32, r31.u32);
	// addi r8,r6,-3
	ctx.r8.s64 = ctx.r6.s64 + -3;
	// lbzx r30,r29,r4
	r30.u64 = REX_LOAD_U8(r29.u32 + ctx.r4.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lbzx r29,r9,r4
	r29.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// rlwinm r26,r8,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r25,r10,r4
	r25.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r31,r11,r4
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// rotlwi r31,r31,1
	r31.u64 = __builtin_rotateleft32(r31.u32, 1);
	// subf r8,r29,r31
	ctx.r8.u64 = r31.u64 - r29.u64;
	// rotlwi r29,r25,3
	r29.u64 = __builtin_rotateleft32(r25.u32, 3);
	// rlwinm r31,r8,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r25,r29
	r29.u64 = r29.u64 - r25.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// rlwinm r31,r29,2,0,29
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// stwx r8,r26,r5
	REX_STORE_U32(r26.u32 + ctx.r5.u32, ctx.r8.u32);
	// lbzx r8,r11,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r31,r10,r4
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// rotlwi r30,r31,3
	r30.u64 = __builtin_rotateleft32(r31.u32, 3);
	// mulli r8,r8,25
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(25));
	// subf r31,r31,r30
	r31.u64 = r30.u64 - r31.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// stwx r8,r28,r5
	REX_STORE_U32(r28.u32 + ctx.r5.u32, ctx.r8.u32);
	// lbzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r9,r9,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// lbzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// mulli r8,r11,34
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(34));
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r4,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// stw r10,-4(r27)
	REX_STORE_U32(r27.u32 + -4, ctx.r10.u32);
	// ble cr6,0x82721f74
	if (!ctx.cr6.gt) goto loc_82721F74;
	// subf r10,r7,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r7.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// li r9,255
	ctx.r9.s64 = 255;
loc_82721F50:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x82721f68
	if (!ctx.cr6.gt) goto loc_82721F68;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
loc_82721F68:
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// stbux r11,r10,r7
	ea = ctx.r10.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82721f50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82721F50;
loc_82721F74:
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_827390C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x827390D0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,3380(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3380);
	// lwz r9,188(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,200(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// lwz r3,140(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// divwu r9,r9,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// divwu r8,r8,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r8.u32 / ctx.r10.u32 : 0);
	// lwz r31,136(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// divwu r4,r3,r10
	ctx.r4.u64 = uint32_t(ctx.r10.u32 ? ctx.r3.u32 / ctx.r10.u32 : 0);
	// lwz r7,220(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r6,224(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// divwu r30,r31,r10
	r30.u64 = uint32_t(ctx.r10.u32 ? r31.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r5,3844(r11)
	REX_STORE_U32(ctx.r11.u32 + 3844, ctx.r5.u32);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r9,3848(r11)
	REX_STORE_U32(ctx.r11.u32 + 3848, ctx.r9.u32);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r5,3852(r11)
	REX_STORE_U32(ctx.r11.u32 + 3852, ctx.r5.u32);
	// stw r8,3856(r11)
	REX_STORE_U32(ctx.r11.u32 + 3856, ctx.r8.u32);
	// stw r4,3836(r11)
	REX_STORE_U32(ctx.r11.u32 + 3836, ctx.r4.u32);
	// stw r30,3840(r11)
	REX_STORE_U32(ctx.r11.u32 + 3840, r30.u32);
	// stw r7,3860(r11)
	REX_STORE_U32(ctx.r11.u32 + 3860, ctx.r7.u32);
	// stw r6,3864(r11)
	REX_STORE_U32(ctx.r11.u32 + 3864, ctx.r6.u32);
	// blt cr6,0x827391bc
	if (ctx.cr6.lt) goto loc_827391BC;
	// lwz r5,204(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// rlwinm r29,r9,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,208(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// rlwinm r27,r8,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r5,r5,r9
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stw r9,3880(r11)
	REX_STORE_U32(ctx.r11.u32 + 3880, ctx.r9.u32);
	// stw r8,3888(r11)
	REX_STORE_U32(ctx.r11.u32 + 3888, ctx.r8.u32);
	// stw r29,3884(r11)
	REX_STORE_U32(ctx.r11.u32 + 3884, r29.u32);
	// stw r27,3892(r11)
	REX_STORE_U32(ctx.r11.u32 + 3892, r27.u32);
	// stw r4,3868(r11)
	REX_STORE_U32(ctx.r11.u32 + 3868, ctx.r4.u32);
	// mullw r9,r28,r8
	ctx.r9.s64 = int64_t(r28.s32) * int64_t(ctx.r8.s32);
	// add r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r8,3896(r11)
	REX_STORE_U32(ctx.r11.u32 + 3896, ctx.r8.u32);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// stw r7,3900(r11)
	REX_STORE_U32(ctx.r11.u32 + 3900, ctx.r7.u32);
	// bne cr6,0x82739194
	if (!ctx.cr6.eq) goto loc_82739194;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,3872(r11)
	REX_STORE_U32(ctx.r11.u32 + 3872, ctx.r10.u32);
	// stw r9,3876(r11)
	REX_STORE_U32(ctx.r11.u32 + 3876, ctx.r9.u32);
	// b 0x8273919c
	goto loc_8273919C;
loc_82739194:
	// stw r3,3872(r11)
	REX_STORE_U32(ctx.r11.u32 + 3872, ctx.r3.u32);
	// stw r31,3876(r11)
	REX_STORE_U32(ctx.r11.u32 + 3876, r31.u32);
loc_8273919C:
	// lwz r10,204(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// lwz r9,208(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// mullw r8,r10,r4
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// mullw r7,r9,r4
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,15200(r11)
	REX_STORE_U32(ctx.r11.u32 + 15200, ctx.r6.u32);
	// stw r5,15204(r11)
	REX_STORE_U32(ctx.r11.u32 + 15204, ctx.r5.u32);
loc_827391BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82743300) {
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
	ctx.lr = 0x82743308;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r31,r3,r6
	r31.u64 = ctx.r3.u64 + ctx.r6.u64;
	// addi r26,r30,30048
	r26.s64 = r30.s64 + 30048;
	// add r9,r31,r9
	ctx.r9.u64 = r31.u64 + ctx.r9.u64;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// lwz r6,30048(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 30048);
	// addi r27,r9,-1
	r27.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// subf r29,r6,r31
	r29.u64 = r31.u64 - ctx.r6.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// bge cr6,0x827433c8
	if (!ctx.cr6.lt) goto loc_827433C8;
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// add r6,r29,r10
	ctx.r6.u64 = r29.u64 + ctx.r10.u64;
	// subfic r30,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	r30.u64 = static_cast<uint64_t>(16) - ctx.r10.u64;
	// subf r28,r29,r31
	r28.u64 = r31.u64 - r29.u64;
	// subf r4,r11,r27
	ctx.r4.u64 = r27.u64 - ctx.r11.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82743358:
	// lbzux r5,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// addi r24,r1,-112
	r24.s64 = ctx.r1.s64 + -112;
	// addi r21,r1,-112
	r21.s64 = ctx.r1.s64 + -112;
	// lbzx r31,r28,r9
	r31.u64 = REX_LOAD_U8(r28.u32 + ctx.r9.u32);
	// addi r27,r1,-128
	r27.s64 = ctx.r1.s64 + -128;
	// addi r22,r1,-128
	r22.s64 = ctx.r1.s64 + -128;
	// stw r5,-112(r1)
	REX_STORE_U32(ctx.r1.u32 + -112, ctx.r5.u32);
	// lvx128 v13,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r31,-128(r1)
	REX_STORE_U32(ctx.r1.u32 + -128, r31.u32);
	// add r31,r30,r6
	r31.u64 = r30.u64 + ctx.r6.u64;
	// lvx128 v0,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltb v0,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi8(char(0xC))));
	// vspltb v13,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_set1_epi8(char(0xC))));
	// stvx128 v0,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r6,16
	ctx.r5.s64 = ctx.r6.s64 + 16;
	// stvx128 v13,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx v0,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r9,r10
	ea = ctx.r9.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stvlx v0,r30,r6
	ea = r30.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r31,r10
	ea = r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// stvlx v13,0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r6,r10
	ea = ctx.r6.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stvlx v13,0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// bdnz 0x82743358
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82743358;
	// lwz r6,0(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 0);
loc_827433C8:
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827433e8
	if (!ctx.cr6.eq) goto loc_827433E8;
	// srawi r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r23,r10,2
	r23.s64 = ctx.r10.s64 + 2;
	// srawi r25,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r25.s64 = ctx.r11.s32 >> 1;
	// subf r3,r6,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r6.u64;
loc_827433E8:
	// rlwinm r28,r25,0,0,27
	r28.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x827434d0
	if (ctx.cr6.eq) goto loc_827434D0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x827434d0
	if (!ctx.cr6.gt) goto loc_827434D0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r23,-1
	ctx.r7.s64 = r23.s64 + -1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// neg r4,r11
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r10,r7,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r26,r5,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r11,3,0,28
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r24,r4,3,0,28
	r24.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r29,r3,r29
	r29.u64 = r29.u64 - ctx.r3.u64;
	// addi r27,r10,1
	r27.s64 = ctx.r10.s64 + 1;
loc_82743428:
	// add r10,r26,r6
	ctx.r10.u64 = r26.u64 + ctx.r6.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x827434c0
	if (!ctx.cr6.gt) goto loc_827434C0;
	// addi r5,r28,-1
	ctx.r5.s64 = r28.s64 + -1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r5,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// add r31,r11,r7
	r31.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r4,1
	ctx.r7.s64 = ctx.r4.s64 + 1;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r21,r11,r3
	r21.u64 = ctx.r3.u64 - ctx.r11.u64;
	// rlwinm r22,r11,2,0,29
	r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r30,r10,r4
	r30.u64 = ctx.r4.u64 - ctx.r10.u64;
	// subf r4,r10,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r10.u64;
	// subf r31,r10,r31
	r31.u64 = r31.u64 - ctx.r10.u64;
	// subf r3,r10,r22
	ctx.r3.u64 = r22.u64 - ctx.r10.u64;
	// subf r5,r10,r21
	ctx.r5.u64 = r21.u64 - ctx.r10.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// add r30,r30,r6
	r30.u64 = r30.u64 + ctx.r6.u64;
	// add r31,r31,r6
	r31.u64 = r31.u64 + ctx.r6.u64;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
loc_82743490:
	// lvx128 v63,r7,r29
	ea = (ctx.r7.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// stvx128 v63,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82743490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82743490;
loc_827434C0:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r6,r25,r6
	ctx.r6.u64 = r25.u64 + ctx.r6.u64;
	// add r29,r24,r29
	r29.u64 = r24.u64 + r29.u64;
	// bne 0x82743428
	if (!ctx.cr0.eq) goto loc_82743428;
loc_827434D0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x827435b4
	if (ctx.cr6.eq) goto loc_827435B4;
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x827435b4
	if (!ctx.cr6.gt) goto loc_827435B4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r23,-1
	ctx.r7.s64 = r23.s64 + -1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// neg r5,r11
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r10,r7,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r29,r6,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r11,3,0,28
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r26,r5,3,0,28
	r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r31,r9,r8
	r31.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r30,r10,1
	r30.s64 = ctx.r10.s64 + 1;
loc_8274350C:
	// add r10,r29,r9
	ctx.r10.u64 = r29.u64 + ctx.r9.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x827435a4
	if (!ctx.cr6.gt) goto loc_827435A4;
	// addi r8,r28,-1
	ctx.r8.s64 = r28.s64 + -1;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subf r24,r11,r5
	r24.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r25,r11,2,0,29
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r10,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r10.u64;
	// subf r6,r10,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r10.u64;
	// subf r4,r10,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r10.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// subf r5,r10,r25
	ctx.r5.u64 = r25.u64 - ctx.r10.u64;
	// subf r7,r10,r24
	ctx.r7.u64 = r24.u64 - ctx.r10.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
loc_82743574:
	// lvx128 v62,r8,r31
	ea = (ctx.r8.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// stvx128 v62,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82743574
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82743574;
loc_827435A4:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r9,r27,r9
	ctx.r9.u64 = r27.u64 + ctx.r9.u64;
	// add r31,r26,r31
	r31.u64 = r26.u64 + r31.u64;
	// bne 0x8274350c
	if (!ctx.cr0.eq) goto loc_8274350C;
loc_827435B4:
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82757E80) {
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
	ctx.lr = 0x82757E88;
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r31,16
	r31.s64 = 16;
loc_82757EA0:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82757EB0;
	sub_826A1E70(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// add r29,r29,r27
	r29.u64 = r29.u64 + r27.u64;
	// bne 0x82757ea0
	if (!ctx.cr0.eq) goto loc_82757EA0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82759DF8) {
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
	ctx.lr = 0x82759E00;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// mr r20,r9
	r20.u64 = ctx.r9.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8275a08c
	if (ctx.cr6.lt) goto loc_8275A08C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x8275a08c
	if (ctx.cr6.lt) goto loc_8275A08C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x8275a08c
	if (ctx.cr6.lt) goto loc_8275A08C;
	// lwz r25,276(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// blt cr6,0x8275a08c
	if (ctx.cr6.lt) goto loc_8275A08C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x8275a08c
	if (ctx.cr6.lt) goto loc_8275A08C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x8275a08c
	if (ctx.cr6.lt) goto loc_8275A08C;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// add r9,r6,r28
	ctx.r9.u64 = ctx.r6.u64 + r28.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8275a08c
	if (ctx.cr6.gt) goto loc_8275A08C;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// add r9,r7,r25
	ctx.r9.u64 = ctx.r7.u64 + r25.u64;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x8275a08c
	if (ctx.cr6.gt) goto loc_8275A08C;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// add r9,r21,r28
	ctx.r9.u64 = r21.u64 + r28.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8275a08c
	if (ctx.cr6.gt) goto loc_8275A08C;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// add r9,r20,r25
	ctx.r9.u64 = r20.u64 + r25.u64;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x8275a08c
	if (ctx.cr6.gt) goto loc_8275A08C;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82759ed4
	if (!ctx.cr6.eq) goto loc_82759ED4;
	// lhz r9,14(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 14);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bne cr6,0x82759ed4
	if (!ctx.cr6.eq) goto loc_82759ED4;
	// li r10,1024
	ctx.r10.s64 = 1024;
	// b 0x82759ee0
	goto loc_82759EE0;
loc_82759ED4:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82759ee0
	if (!ctx.cr6.eq) goto loc_82759EE0;
	// li r10,12
	ctx.r10.s64 = 12;
loc_82759EE0:
	// addi r31,r10,40
	r31.s64 = ctx.r10.s64 + 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8271b190
	ctx.lr = 0x82759EF0;
	sub_8271B190(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82759f0c
	if (!ctx.cr6.eq) goto loc_82759F0C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_82759F0C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82759F1C;
	sub_826A1E70(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82759f3c
	if (!ctx.cr6.eq) goto loc_82759F3C;
	// lhz r10,14(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x82759f3c
	if (!ctx.cr6.eq) goto loc_82759F3C;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x82759f50
	goto loc_82759F50;
loc_82759F3C:
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// li r10,12
	ctx.r10.s64 = 12;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_82759F50:
	// addi r31,r11,40
	r31.s64 = ctx.r11.s64 + 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8271b190
	ctx.lr = 0x82759F60;
	sub_8271B190(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82759f88
	if (!ctx.cr6.eq) goto loc_82759F88;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// bl 0x8271b1a0
	ctx.lr = 0x82759F7C;
	sub_8271B1A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_82759F88:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82759F98;
	sub_826A1E70(ctx, base);
	// stw r28,4(r29)
	REX_STORE_U32(r29.u32 + 4, r28.u32);
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// bgt cr6,0x82759fb4
	if (ctx.cr6.gt) goto loc_82759FB4;
	// neg r11,r25
	ctx.r11.s64 = static_cast<int64_t>(-r25.u64);
loc_82759FB4:
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// bgt cr6,0x82759fcc
	if (ctx.cr6.gt) goto loc_82759FCC;
	// neg r11,r25
	ctx.r11.s64 = static_cast<int64_t>(-r25.u64);
loc_82759FCC:
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,284(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82759d70
	ctx.lr = 0x82759FE4;
	sub_82759D70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8271b1a0
	ctx.lr = 0x82759FF0;
	sub_8271B1A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8271b1a0
	ctx.lr = 0x82759FF8;
	sub_8271B1A0(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8275a070
	if (!ctx.cr6.eq) goto loc_8275A070;
	// lwz r4,292(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,300(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r10,308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r24,14604(r31)
	REX_STORE_U32(r31.u32 + 14604, r24.u32);
	// stw r9,14584(r31)
	REX_STORE_U32(r31.u32 + 14584, ctx.r9.u32);
	// stw r22,14608(r31)
	REX_STORE_U32(r31.u32 + 14608, r22.u32);
	// stw r21,14612(r31)
	REX_STORE_U32(r31.u32 + 14612, r21.u32);
	// stw r20,14616(r31)
	REX_STORE_U32(r31.u32 + 14616, r20.u32);
	// stw r4,14624(r31)
	REX_STORE_U32(r31.u32 + 14624, ctx.r4.u32);
	// stw r11,14628(r31)
	REX_STORE_U32(r31.u32 + 14628, ctx.r11.u32);
	// stw r10,14632(r31)
	REX_STORE_U32(r31.u32 + 14632, ctx.r10.u32);
	// beq cr6,0x8275a04c
	if (ctx.cr6.eq) goto loc_8275A04C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8275a04c
	if (ctx.cr6.eq) goto loc_8275A04C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8275a050
	if (!ctx.cr6.eq) goto loc_8275A050;
loc_8275A04C:
	// lwz r4,4(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 4);
loc_8275A050:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,8(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r6,4(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r5,8(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 8);
	// bl 0x82789d60
	ctx.lr = 0x8275A064;
	sub_82789D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_8275A070:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8275a094
	if (ctx.cr6.eq) goto loc_8275A094;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8271b1a0
	ctx.lr = 0x8275A080;
	sub_8271B1A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_8275A08C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
loc_8275A094:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_82768068) {
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
	ctx.lr = 0x82768070;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lbz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + 8);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
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
	// blt cr6,0x82768174
	if (ctx.cr6.lt) goto loc_82768174;
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
	// bge cr6,0x8276816c
	if (!ctx.cr6.lt) goto loc_8276816C;
loc_827680D4:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82768100
	if (ctx.cr6.lt) goto loc_82768100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x827680F0;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x827680d4
	if (ctx.cr6.eq) goto loc_827680D4;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x827681b4
	goto loc_827681B4;
loc_82768100:
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
loc_8276816C:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x827681b4
	goto loc_827681B4;
loc_82768174:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x8276817C;
	sub_82725F80(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r28,r11,32768
	r28.u64 = ctx.r11.u64 | 32768;
loc_82768184:
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
	ctx.lr = 0x8276819C;
	sub_82725F80(ctx, base);
	// add r10,r30,r28
	ctx.r10.u64 = r30.u64 + r28.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82768184
	if (ctx.cr6.lt) goto loc_82768184;
loc_827681B4:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r26,r30
	r26.u64 = r30.u64;
	// cmpwi cr6,r27,8
	ctx.cr6.compare<int32_t>(r27.s32, 8, ctx.xer);
	// bne cr6,0x827681d4
	if (!ctx.cr6.eq) goto loc_827681D4;
	// addi r26,r30,1
	r26.s64 = r30.s64 + 1;
	// cmpwi cr6,r26,37
	ctx.cr6.compare<int32_t>(r26.s32, 37, ctx.xer);
	// blt cr6,0x827682f4
	if (ctx.cr6.lt) goto loc_827682F4;
	// addi r26,r26,-37
	r26.s64 = r26.s64 + -37;
loc_827681D4:
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_827681D8:
	// rlwinm r24,r11,0,30,28
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x82768644
	if (ctx.cr6.eq) goto loc_82768644;
	// cmpwi cr6,r26,35
	ctx.cr6.compare<int32_t>(r26.s32, 35, ctx.xer);
	// beq cr6,0x82768480
	if (ctx.cr6.eq) goto loc_82768480;
	// cmpwi cr6,r26,36
	ctx.cr6.compare<int32_t>(r26.s32, 36, ctx.xer);
	// beq cr6,0x82768468
	if (ctx.cr6.eq) goto loc_82768468;
	// lwz r11,1996(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1996);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r27,76(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x8275de38
	ctx.lr = 0x82768208;
	sub_8275DE38(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x8276821c
	if (ctx.cr6.eq) goto loc_8276821C;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82768220
	if (ctx.cr6.eq) goto loc_82768220;
loc_8276821C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82768220:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// rlwinm r28,r3,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-28136
	r25.s64 = ctx.r11.s64 + -28136;
	// lwzx r11,r28,r25
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r25.u32);
	// subf. r30,r10,r11
	r30.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x827682fc
	if (!ctx.cr0.gt) goto loc_827682FC;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bgt cr6,0x827682fc
	if (ctx.cr6.gt) goto loc_827682FC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x827682fc
	if (ctx.cr6.eq) goto loc_827682FC;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827682b4
	if (!ctx.cr6.gt) goto loc_827682B4;
loc_8276825C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827682b4
	if (ctx.cr6.eq) goto loc_827682B4;
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
	// bge 0x827682a4
	if (!ctx.cr0.lt) goto loc_827682A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827682A4;
	sub_82725E38(ctx, base);
loc_827682A4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8276825c
	if (ctx.cr6.gt) goto loc_8276825C;
loc_827682B4:
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
	// bge 0x827682ec
	if (!ctx.cr0.lt) goto loc_827682EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827682EC;
	sub_82725E38(ctx, base);
loc_827682EC:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// b 0x82768300
	goto loc_82768300;
loc_827682F4:
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// b 0x827681d8
	goto loc_827681D8;
loc_827682FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82768300:
	// addi r10,r25,24
	ctx.r10.s64 = r25.s64 + 24;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// li r4,6
	ctx.r4.s64 = 6;
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r7,r28,r10
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	// rlwinm r6,r8,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r5,r8,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// xor r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// rlwimi r9,r24,0,16,31
	ctx.r9.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// subf r28,r5,r9
	r28.u64 = ctx.r9.u64 - ctx.r5.u64;
	// rlwimi r28,r9,0,16,31
	r28.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF) | (r28.u64 & 0xFFFFFFFFFFFF0000);
	// bl 0x8275de48
	ctx.lr = 0x82768340;
	sub_8275DE48(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82768354
	if (ctx.cr6.eq) goto loc_82768354;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82768358
	if (ctx.cr6.eq) goto loc_82768358;
loc_82768354:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82768358:
	// rlwinm r27,r3,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r27,r25
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + r25.u32);
	// subf. r30,r11,r10
	r30.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x82768424
	if (!ctx.cr0.gt) goto loc_82768424;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bgt cr6,0x82768424
	if (ctx.cr6.gt) goto loc_82768424;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82768424
	if (ctx.cr6.eq) goto loc_82768424;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827683e4
	if (!ctx.cr6.gt) goto loc_827683E4;
loc_8276838C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827683e4
	if (ctx.cr6.eq) goto loc_827683E4;
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
	// bge 0x827683d4
	if (!ctx.cr0.lt) goto loc_827683D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827683D4;
	sub_82725E38(ctx, base);
loc_827683D4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8276838c
	if (ctx.cr6.gt) goto loc_8276838C;
loc_827683E4:
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
	// bge 0x8276841c
	if (!ctx.cr0.lt) goto loc_8276841C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8276841C;
	sub_82725E38(ctx, base);
loc_8276841C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// b 0x82768428
	goto loc_82768428;
loc_82768424:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82768428:
	// addi r10,r25,24
	ctx.r10.s64 = r25.s64 + 24;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lwzx r7,r27,r10
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + ctx.r10.u32);
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// xor r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// rlwimi r11,r28,0,28,15
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFF000F) | (ctx.r11.u64 & 0xFFF0);
	// subf r10,r5,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwimi r10,r11,0,28,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF000F) | (ctx.r10.u64 & 0xFFF0);
	// stw r10,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_82768468:
	// clrlwi r11,r24,28
	ctx.r11.u64 = r24.u32 & 0xF;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_82768480:
	// lwz r9,1996(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 1996);
	// li r29,0
	r29.s64 = 0;
	// lwz r8,408(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 408);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// lwz r28,76(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// subf r30,r28,r8
	r30.u64 = ctx.r8.u64 - r28.u64;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// ble cr6,0x827684ac
	if (!ctx.cr6.gt) goto loc_827684AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82768558
	goto loc_82768558;
loc_827684AC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x827684bc
	if (!ctx.cr6.eq) goto loc_827684BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82768558
	goto loc_82768558;
loc_827684BC:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8276851c
	if (!ctx.cr6.gt) goto loc_8276851C;
loc_827684C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276851c
	if (ctx.cr6.eq) goto loc_8276851C;
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
	// bge 0x8276850c
	if (!ctx.cr0.lt) goto loc_8276850C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8276850C;
	sub_82725E38(ctx, base);
loc_8276850C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827684c4
	if (ctx.cr6.gt) goto loc_827684C4;
loc_8276851C:
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
	// bge 0x82768554
	if (!ctx.cr0.lt) goto loc_82768554;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82768554;
	sub_82725E38(ctx, base);
loc_82768554:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82768558:
	// lwz r9,412(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 412);
	// rlwimi r24,r11,16,0,15
	r24.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (r24.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// subf r30,r28,r9
	r30.u64 = ctx.r9.u64 - r28.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// ble cr6,0x82768590
	if (!ctx.cr6.gt) goto loc_82768590;
loc_8276857C:
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwimi r28,r11,4,16,27
	r28.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFF0) | (r28.u64 & 0xFFFFFFFFFFFF000F);
	// stw r28,0(r23)
	REX_STORE_U32(r23.u32 + 0, r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_82768590:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8276857c
	if (ctx.cr6.eq) goto loc_8276857C;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827685f8
	if (!ctx.cr6.gt) goto loc_827685F8;
loc_827685A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827685f8
	if (ctx.cr6.eq) goto loc_827685F8;
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
	// bge 0x827685e8
	if (!ctx.cr0.lt) goto loc_827685E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827685E8;
	sub_82725E38(ctx, base);
loc_827685E8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827685a0
	if (ctx.cr6.gt) goto loc_827685A0;
loc_827685F8:
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
	// bge 0x82768630
	if (!ctx.cr0.lt) goto loc_82768630;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82768630;
	sub_82725E38(ctx, base);
loc_82768630:
	// rlwimi r28,r30,4,16,27
	r28.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFF0) | (r28.u64 & 0xFFFFFFFFFFFF000F);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r28,0(r23)
	REX_STORE_U32(r23.u32 + 0, r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_82768644:
	// clrlwi r11,r24,28
	ctx.r11.u64 = r24.u32 & 0xF;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82791B60) {
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
	// beq cr6,0x82791bb4
	if (ctx.cr6.eq) goto loc_82791BB4;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82791bb4
	if (ctx.cr0.eq) goto loc_82791BB4;
	// bl 0x8269dfa8
	ctx.lr = 0x82791B8C;
	sub_8269DFA8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r4,r11,28576
	ctx.r4.s64 = ctx.r11.s64 + 28576;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8269f3c0
	ctx.lr = 0x82791BA0;
	sub_8269F3C0(ctx, base);
	// bl 0x8269dfa8
	ctx.lr = 0x82791BA4;
	sub_8269DFA8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r4,r11,-27372
	ctx.r4.s64 = ctx.r11.s64 + -27372;
	// bl 0x8269f3c0
	ctx.lr = 0x82791BB4;
	sub_8269F3C0(ctx, base);
loc_82791BB4:
	// bl 0x826a33d0
	ctx.lr = 0x82791BB8;
	sub_826A33D0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826a29e8
	ctx.lr = 0x82791BC0;
	sub_826A29E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8269dfa8
	ctx.lr = 0x82791BC8;
	sub_8269DFA8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r4,r11,-16844
	ctx.r4.s64 = ctx.r11.s64 + -16844;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8269f3c0
	ctx.lr = 0x82791BDC;
	sub_8269F3C0(ctx, base);
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

DEFINE_REX_FUNC(sub_82792368) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r3,r11,12864
	ctx.r3.s64 = ctx.r11.s64 + 12864;
	// b 0x8269d008
	sub_8269D008(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82792408) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r3,r11,13240
	ctx.r3.s64 = ctx.r11.s64 + 13240;
	// b 0x8269d008
	sub_8269D008(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82792498) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r3,r11,13424
	ctx.r3.s64 = ctx.r11.s64 + 13424;
	// b 0x8269d008
	sub_8269D008(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82792500) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r3,r11,13512
	ctx.r3.s64 = ctx.r11.s64 + 13512;
	// b 0x8269d008
	sub_8269D008(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82792628) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// li r4,114
	ctx.r4.s64 = 114;
	// addi r3,r11,19972
	ctx.r3.s64 = ctx.r11.s64 + 19972;
	// b 0x825b8280
	sub_825B8280(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_827929E8) {
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
	// li r5,498
	ctx.r5.s64 = 498;
	// addi r31,r11,-7040
	r31.s64 = ctx.r11.s64 + -7040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,30
	ctx.r3.s64 = r31.s64 + 30;
	// bl 0x826a2e60
	ctx.lr = 0x82792A10;
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
	ctx.lr = 0x82792A24;
	sub_826A1E70(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = r31.s64 + 600;
	// bl 0x826a2e60
	ctx.lr = 0x82792A34;
	sub_826A2E60(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r10,1044(r31)
	REX_STORE_U32(r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	REX_STORE_U32(r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	REX_STORE_U32(r31.u32 + 1040, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82793648) {
	REX_FUNC_PROLOGUE();
	// .long 0x20001a4
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793738) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000192
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793858) {
	REX_FUNC_PROLOGUE();
	// .long 0x20002ee
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793988) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010099
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793AE8) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100fe
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793C88) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101c7
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793E48) {
	REX_FUNC_PROLOGUE();
	// .long 0x201006b
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82794028) {
	REX_FUNC_PROLOGUE();
	// .long 0x20001ec
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82794238) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101f5
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82799400) {
	REX_FUNC_PROLOGUE();
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// lwz r10,1464(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1464);
	// lwz r8,1368(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1368);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// rlwinm r7,r11,0,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// rlwinm r3,r8,17,0,14
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFFFE0000;
	// mullw r5,r7,r10
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r11,r6,r10
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r4,r5,0,0,14
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFE0000;
	// srawi r8,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 8;
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// addis r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 65536;
	// or r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 | ctx.r6.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827AC658) {
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
	ctx.lr = 0x827AC660;
	// stwu r1,-2416(r1)
	ea = -2416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,911
	ctx.r11.s64 = ctx.r1.s64 + 911;
	// lwz r14,1312(r4)
	r14.u64 = REX_LOAD_U32(ctx.r4.u32 + 1312);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r8,2476(r1)
	REX_STORE_U32(ctx.r1.u32 + 2476, ctx.r8.u32);
	// addi r10,r1,271
	ctx.r10.s64 = ctx.r1.s64 + 271;
	// addi r9,r1,1484
	ctx.r9.s64 = ctx.r1.s64 + 1484;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r5,r11,0,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r4,r10,0,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r11,r9,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r5,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r5.u32);
	// stw r4,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r11.u32);
	// addi r15,r1,112
	r15.s64 = ctx.r1.s64 + 112;
	// lhz r5,74(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 74);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// lhz r10,50(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 50);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bne cr6,0x827ac6ec
	if (!ctx.cr6.eq) goto loc_827AC6EC;
	// lwz r11,22488(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22488);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// lwz r10,22500(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 22500);
	// stw r10,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// stw r9,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// sth r9,16(r30)
	REX_STORE_U16(r30.u32 + 16, ctx.r9.u16);
	// b 0x827ac754
	goto loc_827AC754;
loc_827AC6EC:
	// addi r11,r6,92
	ctx.r11.s64 = ctx.r6.s64 + 92;
	// mullw r6,r10,r7
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// mullw r5,r5,r7
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// mullw r4,r4,r7
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r3,r3,r7
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r5.u32);
	// rlwinm r29,r7,1,16,30
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFE;
	// add r14,r11,r14
	r14.u64 = ctx.r11.u64 + r14.u64;
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r4.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// stw r6,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r6.u32);
	// sth r29,16(r30)
	REX_STORE_U16(r30.u32 + 16, r29.u16);
loc_827AC754:
	// sth r9,18(r30)
	REX_STORE_U16(r30.u32 + 18, ctx.r9.u16);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// bge cr6,0x827ad710
	if (!ctx.cr6.lt) goto loc_827AD710;
loc_827AC764:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// sth r11,18(r30)
	REX_STORE_U16(r30.u32 + 18, ctx.r11.u16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r9,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// beq cr6,0x827ad6a8
	if (ctx.cr6.eq) goto loc_827AD6A8;
loc_827AC78C:
	// lhz r22,18(r30)
	r22.u64 = REX_LOAD_U16(r30.u32 + 18);
	// mr r18,r15
	r18.u64 = r15.u64;
	// lwz r7,464(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 464);
	// li r21,0
	r21.s64 = 0;
	// rlwinm r11,r22,31,29,31
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 31) & 0x7;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// rlwinm r8,r22,31,28,31
	ctx.r8.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 31) & 0xF;
	// ld r19,0(r14)
	r19.u64 = REX_LOAD_U64(r14.u32 + 0);
	// addi r6,r11,588
	ctx.r6.s64 = ctx.r11.s64 + 588;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r5,r8,596
	ctx.r5.s64 = ctx.r8.s64 + 596;
	// lhz r9,74(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 74);
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,480(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 480);
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,484(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 484);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r6,r10,r5
	ctx.r6.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lhzx r4,r4,r31
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + r31.u32);
	// rldicl r29,r19,9,55
	r29.u64 = __builtin_rotateleft64(r19.u64, 9) & 0x1FF;
	// lhzx r3,r3,r31
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + r31.u32);
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// addi r14,r14,8
	r14.s64 = r14.s64 + 8;
	// clrlwi r20,r29,31
	r20.u64 = r29.u32 & 0x1;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r3,r4,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// dcbt r10,r11
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// dcbt r9,r11
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// dcbt r8,r11
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// dcbt r5,r11
	// dcbt r3,r7
	// dcbt r3,r6
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x827acb4c
	if (!ctx.cr6.eq) goto loc_827ACB4C;
	// lhz r23,50(r31)
	r23.u64 = REX_LOAD_U16(r31.u32 + 50);
	// addi r11,r15,4
	ctx.r11.s64 = r15.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rotlwi r6,r23,2
	ctx.r6.u64 = __builtin_rotateleft32(r23.u32, 2);
	// srawi r7,r9,14
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 14;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r9,0(r15)
	REX_STORE_U32(r15.u32 + 0, ctx.r9.u32);
	// srawi r6,r8,14
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 14;
	// stw r8,4(r15)
	REX_STORE_U32(r15.u32 + 4, ctx.r8.u32);
	// xor r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r7.u64;
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// clrlwi r5,r4,31
	ctx.r5.u64 = ctx.r4.u32 & 0x1;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// xor r4,r3,r6
	ctx.r4.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// lwzu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r29,r5,5,0,26
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r10,r7,14
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 14;
	// clrlwi r4,r4,31
	ctx.r4.u64 = ctx.r4.u32 & 0x1;
	// srawi r28,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r28.s64 = ctx.r10.s32 >> 1;
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// xor r5,r28,r10
	ctx.r5.u64 = r28.u64 ^ ctx.r10.u64;
	// srawi r10,r6,14
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 14;
	// clrlwi r5,r5,31
	ctx.r5.u64 = ctx.r5.u32 & 0x1;
	// srawi r28,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r28.s64 = ctx.r10.s32 >> 1;
	// rlwinm r4,r4,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// xor r10,r28,r10
	ctx.r10.u64 = r28.u64 ^ ctx.r10.u64;
	// rlwinm r28,r5,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// or r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 | r29.u64;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// or r4,r28,r4
	ctx.r4.u64 = r28.u64 | ctx.r4.u64;
	// add. r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r18,r11,-12
	r18.s64 = ctx.r11.s64 + -12;
	// or r21,r3,r4
	r21.u64 = ctx.r3.u64 | ctx.r4.u64;
	// bne 0x827acb28
	if (!ctx.cr0.eq) goto loc_827ACB28;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// extsh r29,r7
	r29.s64 = ctx.r7.s16;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x827ac90c
	if (!ctx.cr6.gt) goto loc_827AC90C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x827ac914
	goto loc_827AC914;
loc_827AC90C:
	// bge cr6,0x827ac914
	if (!ctx.cr6.lt) goto loc_827AC914;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_827AC914:
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x827ac924
	if (!ctx.cr6.gt) goto loc_827AC924;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// b 0x827ac930
	goto loc_827AC930;
loc_827AC924:
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x827ac930
	if (!ctx.cr6.lt) goto loc_827AC930;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_827AC930:
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x827ac940
	if (!ctx.cr6.gt) goto loc_827AC940;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// b 0x827ac94c
	goto loc_827AC94C;
loc_827AC940:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x827ac94c
	if (!ctx.cr6.lt) goto loc_827AC94C;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_827AC94C:
	// subf r4,r10,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r10.u64;
	// subf r4,r5,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r5.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 + ctx.r11.u64;
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// addze r4,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r4.s64 = temp.s64;
	// srawi r11,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 16;
	// srawi r3,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 16;
	// srawi r29,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	r29.s64 = ctx.r7.s32 >> 16;
	// srawi r7,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 16;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x827ac990
	if (!ctx.cr6.gt) goto loc_827AC990;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x827ac998
	goto loc_827AC998;
loc_827AC990:
	// bge cr6,0x827ac998
	if (!ctx.cr6.lt) goto loc_827AC998;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_827AC998:
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x827ac9a8
	if (!ctx.cr6.gt) goto loc_827AC9A8;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// b 0x827ac9b4
	goto loc_827AC9B4;
loc_827AC9A8:
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x827ac9b4
	if (!ctx.cr6.lt) goto loc_827AC9B4;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_827AC9B4:
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x827ac9c4
	if (!ctx.cr6.gt) goto loc_827AC9C4;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// b 0x827ac9d0
	goto loc_827AC9D0;
loc_827AC9C4:
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x827ac9d0
	if (!ctx.cr6.lt) goto loc_827AC9D0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_827AC9D0:
	// subf r7,r9,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r9.u64;
	// lwz r28,16(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwimi r10,r9,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r27,1840(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 1840);
	// subf r7,r8,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r8.u64;
	// lwz r26,1844(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 1844);
	// addi r6,r28,-2048
	ctx.r6.s64 = r28.s64 + -2048;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + r29.u64;
	// rlwinm r9,r6,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r3,r28,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwimi r5,r8,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// add r11,r9,r27
	ctx.r11.u64 = ctx.r9.u64 + r27.u64;
	// subf r6,r3,r26
	ctx.r6.u64 = r26.u64 - ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r9,r5,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r5.u64;
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r7,r8,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// rlwimi r4,r10,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r7,r7,0,16,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827acc7c
	if (ctx.cr6.eq) goto loc_827ACC7C;
	// li r24,3
	r24.s64 = 3;
	// addi r25,r18,16
	r25.s64 = r18.s64 + 16;
loc_827ACA40:
	// lwz r4,-4(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + -4);
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r28,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r9,r4,1,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x10000;
	// subf r8,r10,r26
	ctx.r8.u64 = r26.u64 - ctx.r10.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r7,r4,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r5,r6,0,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r5,r5,0,16,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827acb18
	if (ctx.cr6.eq) goto loc_827ACB18;
	// lwz r11,1168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1168);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x827aca98
	if (!ctx.cr6.eq) goto loc_827ACA98;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ac200
	ctx.lr = 0x827ACA90;
	sub_827AC200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827acb18
	goto loc_827ACB18;
loc_827ACA98:
	// lhz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 16);
	// rlwinm r10,r22,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 5) & 0xFFFFFFE0;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lhz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 52);
	// rotlwi r8,r9,5
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r9,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 16;
	// rlwinm r10,r6,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rotlwi r6,r7,5
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 5);
	// rlwinm r8,r23,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r7,r5,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r10,-64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -64, ctx.xer);
	// bge cr6,0x827acadc
	if (!ctx.cr6.lt) goto loc_827ACADC;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// b 0x827acaec
	goto loc_827ACAEC;
loc_827ACADC:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x827acaec
	if (!ctx.cr6.gt) goto loc_827ACAEC;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_827ACAEC:
	// cmpwi cr6,r7,-64
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -64, ctx.xer);
	// bge cr6,0x827acb00
	if (!ctx.cr6.lt) goto loc_827ACB00;
	// subf r10,r7,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r7.u64;
	// addi r9,r10,-64
	ctx.r9.s64 = ctx.r10.s64 + -64;
	// b 0x827acb10
	goto loc_827ACB10;
loc_827ACB00:
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x827acb10
	if (!ctx.cr6.gt) goto loc_827ACB10;
	// subf r10,r7,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r7.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_827ACB10:
	// rlwimi r11,r9,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_827ACB18:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// stwu r4,-4(r25)
	ea = -4 + r25.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	r25.u32 = ea;
	// bge 0x827aca40
	if (!ctx.cr0.lt) goto loc_827ACA40;
	// b 0x827acc7c
	goto loc_827ACC7C;
loc_827ACB28:
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ac3b8
	ctx.lr = 0x827ACB3C;
	sub_827AC3B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,16384
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16384, ctx.xer);
	// beq cr6,0x827acb60
	if (ctx.cr6.eq) goto loc_827ACB60;
	// b 0x827acc7c
	goto loc_827ACC7C;
loc_827ACB4C:
	// lwz r29,0(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r29,16384
	ctx.cr6.compare<int32_t>(r29.s32, 16384, ctx.xer);
	// stw r29,0(r15)
	REX_STORE_U32(r15.u32 + 0, r29.u32);
	// bne cr6,0x827acb90
	if (!ctx.cr6.eq) goto loc_827ACB90;
	// li r21,60
	r21.s64 = 60;
loc_827ACB60:
	// lbz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 32);
	// li r10,16384
	ctx.r10.s64 = 16384;
	// ori r21,r21,3
	r21.u64 = r21.u64 | 3;
	// stw r10,16(r18)
	REX_STORE_U32(r18.u32 + 16, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827acf4c
	if (ctx.cr6.eq) goto loc_827ACF4C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,376(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 376);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x827acf4c
	goto loc_827ACF4C;
loc_827ACB90:
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r7,r29,1,15,15
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0x10000;
	// lwz r10,1840(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1840);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r6,1844(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1844);
	// rlwinm r5,r8,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r3,r5,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r5.u64;
	// subf r10,r7,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r7.u64;
	// subf r9,r29,r3
	ctx.r9.u64 = ctx.r3.u64 - r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r7,r8,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r7,r7,0,16,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827acc78
	if (ctx.cr6.eq) goto loc_827ACC78;
	// lwz r11,1168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1168);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x827acbf8
	if (!ctx.cr6.eq) goto loc_827ACBF8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ac200
	ctx.lr = 0x827ACBF0;
	sub_827AC200(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x827acc78
	goto loc_827ACC78;
loc_827ACBF8:
	// lhz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 16);
	// rlwinm r10,r22,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 5) & 0xFFFFFFE0;
	// extsh r11,r29
	ctx.r11.s64 = r29.s16;
	// lhz r7,50(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 50);
	// rotlwi r8,r9,5
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// lhz r6,52(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 52);
	// srawi r9,r29,16
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = r29.s32 >> 16;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r10,r5,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// rotlwi r8,r7,5
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 5);
	// rotlwi r6,r6,5
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 5);
	// rlwinm r7,r4,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r10,-64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -64, ctx.xer);
	// bge cr6,0x827acc40
	if (!ctx.cr6.lt) goto loc_827ACC40;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// b 0x827acc50
	goto loc_827ACC50;
loc_827ACC40:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x827acc50
	if (!ctx.cr6.gt) goto loc_827ACC50;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_827ACC50:
	// cmpwi cr6,r7,-64
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -64, ctx.xer);
	// bge cr6,0x827acc64
	if (!ctx.cr6.lt) goto loc_827ACC64;
	// subf r10,r7,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r7.u64;
	// addi r9,r10,-64
	ctx.r9.s64 = ctx.r10.s64 + -64;
	// b 0x827acc74
	goto loc_827ACC74;
loc_827ACC64:
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x827acc74
	if (!ctx.cr6.gt) goto loc_827ACC74;
	// subf r10,r7,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r7.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_827ACC74:
	// rlwimi r11,r9,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
loc_827ACC78:
	// stw r11,0(r15)
	REX_STORE_U32(r15.u32 + 0, ctx.r11.u32);
loc_827ACC7C:
	// extsh r9,r29
	ctx.r9.s64 = r29.s16;
	// lbz r8,31(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 31);
	// srawi r11,r29,16
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = r29.s32 >> 16;
	// addi r10,r31,308
	ctx.r10.s64 = r31.s64 + 308;
	// clrlwi r7,r9,30
	ctx.r7.u64 = ctx.r9.u32 & 0x3;
	// clrlwi r6,r11,30
	ctx.r6.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lbzx r8,r7,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// lbzx r10,r6,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r6,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 1;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// beq cr6,0x827acccc
	if (ctx.cr6.eq) goto loc_827ACCCC;
	// rlwinm r10,r6,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r6,r10,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
loc_827ACCCC:
	// lbz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 32);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r28,4(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827acdd8
	if (ctx.cr6.eq) goto loc_827ACDD8;
	// lwz r11,1168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1168);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x827accfc
	if (!ctx.cr6.eq) goto loc_827ACCFC;
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r29.u32);
	// b 0x827acdd8
	goto loc_827ACDD8;
loc_827ACCFC:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r8,r29,1,15,15
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0x10000;
	// lwz r7,312(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 312);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lwz r5,316(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 316);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// subf r4,r11,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r3,r29,r4
	ctx.r3.u64 = ctx.r4.u64 - r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// rlwinm r8,r11,0,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r8,r8,0,16,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827acdcc
	if (ctx.cr6.eq) goto loc_827ACDCC;
	// lhz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 16);
	// srawi r5,r29,15
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FFF) != 0);
	ctx.r5.s64 = r29.s32 >> 15;
	// rlwinm r11,r22,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 5) & 0xFFFFFFE0;
	// lhz r7,50(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 50);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 52);
	// rotlwi r8,r10,5
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// rlwinm r10,r5,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r29,r8,r10
	r29.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r11,r3,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFF8;
	// rotlwi r8,r7,5
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 5);
	// rotlwi r5,r4,5
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 5);
	// rlwinm r7,r29,0,0,28
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r11,-64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -64, ctx.xer);
	// bge cr6,0x827acd88
	if (!ctx.cr6.lt) goto loc_827ACD88;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r9,r11,-64
	ctx.r9.s64 = ctx.r11.s64 + -64;
	// b 0x827acd98
	goto loc_827ACD98;
loc_827ACD88:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x827acd98
	if (!ctx.cr6.gt) goto loc_827ACD98;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_827ACD98:
	// cmpwi cr6,r7,-64
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -64, ctx.xer);
	// bge cr6,0x827acdac
	if (!ctx.cr6.lt) goto loc_827ACDAC;
	// subf r11,r7,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r7.u64;
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// b 0x827acdbc
	goto loc_827ACDBC;
loc_827ACDAC:
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x827acdbc
	if (!ctx.cr6.gt) goto loc_827ACDBC;
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_827ACDBC:
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwimi r11,r10,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_827ACDCC:
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
loc_827ACDD8:
	// lwz r11,1168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1168);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x827acea4
	if (!ctx.cr6.eq) goto loc_827ACEA4;
	// lwz r10,352(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 352);
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,1,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x10000;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stwx r6,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r9,1848(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1848);
	// lwz r7,1852(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1852);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r4,r10,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// subf r8,r4,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r4.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// subf r7,r6,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r6.u64;
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwinm r4,r5,0,0,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r4,r4,0,16,0
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827acf44
	if (ctx.cr6.eq) goto loc_827ACF44;
	// lwz r9,1168(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1168);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// bne cr6,0x827ace54
	if (!ctx.cr6.eq) goto loc_827ACE54;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ac2e0
	ctx.lr = 0x827ACE50;
	sub_827AC2E0(ctx, base);
	// b 0x827acf44
	goto loc_827ACF44;
loc_827ACE54:
	// lwz r9,312(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 312);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,316(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 316);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r5,r6,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r6.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// or r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 | ctx.r11.u64;
	// rlwinm r11,r4,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r11,r11,0,16,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827acf44
	if (ctx.cr6.eq) goto loc_827ACF44;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827319f8
	ctx.lr = 0x827ACEA0;
	sub_827319F8(ctx, base);
	// b 0x827acf44
	goto loc_827ACF44;
loc_827ACEA4:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r10,r6,1,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x10000;
	// lwz r8,1848(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1848);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r5,1852(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1852);
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r7,r4,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r4.u64;
	// subf r8,r10,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r10.u64;
	// subf r5,r6,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r6.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// or r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 | ctx.r8.u64;
	// rlwinm r3,r4,0,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r3,r3,0,16,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827acf34
	if (ctx.cr6.eq) goto loc_827ACF34;
	// lwz r8,312(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 312);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r7,316(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 316);
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r5,r11,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r6,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r6.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// or r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 | ctx.r11.u64;
	// rlwinm r11,r3,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r11,r11,0,16,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827acf34
	if (ctx.cr6.eq) goto loc_827ACF34;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827319f8
	ctx.lr = 0x827ACF30;
	sub_827319F8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_827ACF34:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_827ACF44:
	// stw r3,16(r18)
	REX_STORE_U32(r18.u32 + 16, ctx.r3.u32);
	// stw r3,20(r18)
	REX_STORE_U32(r18.u32 + 20, ctx.r3.u32);
loc_827ACF4C:
	// rldicl r11,r19,16,48
	ctx.r11.u64 = __builtin_rotateleft64(r19.u64, 16) & 0xFFFF;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// clrlwi r8,r11,26
	ctx.r8.u64 = ctx.r11.u32 & 0x3F;
	// beq cr6,0x827ad1b8
	if (ctx.cr6.eq) goto loc_827AD1B8;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827ad1b8
	if (!ctx.cr6.eq) goto loc_827AD1B8;
	// clrlwi r11,r21,30
	ctx.r11.u64 = r21.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827ad1b8
	if (!ctx.cr6.eq) goto loc_827AD1B8;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827acfc8
	if (!ctx.cr6.eq) goto loc_827ACFC8;
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r7,560(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 560);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r6,576(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 576);
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r7,464(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 464);
	// lwz r5,580(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 580);
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r29,480(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 480);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r28,484(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 484);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + r29.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + r28.u64;
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8277eaa8
	ctx.lr = 0x827ACFC4;
	sub_8277EAA8(ctx, base);
	// b 0x827ad654
	goto loc_827AD654;
loc_827ACFC8:
	// lhz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U16(r15.u32 + 0);
	// addi r21,r31,48
	r21.s64 = r31.s64 + 48;
	// lhz r10,2(r15)
	ctx.r10.u64 = REX_LOAD_U16(r15.u32 + 2);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r4,90(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 90);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// lwz r8,464(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 464);
	// srawi r5,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 2;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// srawi r11,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 2;
	// lbz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 48);
	// mullw r9,r5,r4
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lwz r5,44(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 44);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r29,r6,30
	r29.u64 = ctx.r6.u32 & 0x3;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// clrlwi r28,r7,30
	r28.u64 = ctx.r7.u32 & 0x3;
	// add r27,r11,r10
	r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bne cr6,0x827ad06c
	if (!ctx.cr6.eq) goto loc_827AD06C;
	// addi r11,r29,44
	ctx.r11.s64 = r29.s64 + 44;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827AD040;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827ad088
	if (ctx.cr6.eq) goto loc_827AD088;
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r8,35(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 35);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r5,44(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 44);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lhz r4,90(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 90);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827c8aa0
	ctx.lr = 0x827AD068;
	sub_827C8AA0(ctx, base);
	// b 0x827ad088
	goto loc_827AD088;
loc_827AD06C:
	// addi r11,r29,48
	ctx.r11.s64 = r29.s64 + 48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827AD088;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827AD088:
	// addi r20,r31,1856
	r20.s64 = r31.s64 + 1856;
	// li r22,0
	r22.s64 = 0;
	// mr r28,r15
	r28.u64 = r15.u64;
	// addi r23,r31,556
	r23.s64 = r31.s64 + 556;
loc_827AD098:
	// srawi r29,r22,2
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x3) != 0);
	r29.s64 = r22.s32 >> 2;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x827ad170
	if (ctx.cr6.eq) goto loc_827AD170;
	// addi r11,r29,45
	ctx.r11.s64 = r29.s64 + 45;
	// lhz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U16(r28.u32 + 0);
	// addi r6,r29,2
	ctx.r6.s64 = r29.s64 + 2;
	// lhz r5,2(r28)
	ctx.r5.u64 = REX_LOAD_U16(r28.u32 + 2);
	// rlwinm r24,r11,1,0,30
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-92(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + -92);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lbzx r3,r21,r29
	ctx.r3.u64 = REX_LOAD_U8(r21.u32 + r29.u32);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r6,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 2;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// lhzx r4,r24,r31
	ctx.r4.u64 = REX_LOAD_U16(r24.u32 + r31.u32);
	// clrlwi r27,r5,30
	r27.u64 = ctx.r5.u32 & 0x3;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// lwz r5,44(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwzx r11,r8,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + r30.u32);
	// mullw r8,r6,r4
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// clrlwi r26,r7,30
	r26.u64 = ctx.r7.u32 & 0x3;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// add r25,r11,r10
	r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bne cr6,0x827ad154
	if (!ctx.cr6.eq) goto loc_827AD154;
	// addi r11,r27,44
	ctx.r11.s64 = r27.s64 + 44;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + r26.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827AD128;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827ad170
	if (ctx.cr6.eq) goto loc_827AD170;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,35(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 35);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r5,44(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 44);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lhzx r4,r24,r31
	ctx.r4.u64 = REX_LOAD_U16(r24.u32 + r31.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827c8aa0
	ctx.lr = 0x827AD150;
	sub_827C8AA0(ctx, base);
	// b 0x827ad170
	goto loc_827AD170;
loc_827AD154:
	// addi r11,r27,48
	ctx.r11.s64 = r27.s64 + 48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + r26.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827AD170;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827AD170:
	// addi r11,r29,2
	ctx.r11.s64 = r29.s64 + 2;
	// lbzx r10,r22,r20
	ctx.r10.u64 = REX_LOAD_U8(r22.u32 + r20.u32);
	// lwz r9,44(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 44);
	// addi r8,r29,45
	ctx.r8.s64 = r29.s64 + 45;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzu r11,4(r23)
	ea = 4 + r23.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r23.u32 = ea;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r10,r7,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + r30.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r5,r6,r31
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + r31.u32);
	// bl 0x827b4b00
	ctx.lr = 0x827AD1A4;
	sub_827B4B00(ctx, base);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpwi cr6,r22,6
	ctx.cr6.compare<int32_t>(r22.s32, 6, ctx.xer);
	// blt cr6,0x827ad098
	if (ctx.cr6.lt) goto loc_827AD098;
	// b 0x827ad654
	goto loc_827AD654;
loc_827AD1B8:
	// rldicl r11,r19,8,56
	ctx.r11.u64 = __builtin_rotateleft64(r19.u64, 8) & 0xFF;
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 388);
	// rlwinm r7,r21,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x20;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// mr r16,r21
	r16.u64 = r21.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r17,r8,24
	r17.u64 = ctx.r8.u32 & 0xFF;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r18,r31,1862
	r18.s64 = r31.s64 + 1862;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r22,r11,r10
	r22.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x827ad2b8
	if (!ctx.cr6.eq) goto loc_827AD2B8;
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(r20.s32, 1, ctx.xer);
	// bne cr6,0x827ad2b8
	if (!ctx.cr6.eq) goto loc_827AD2B8;
	// lhz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U16(r15.u32 + 0);
	// lhz r10,2(r15)
	ctx.r10.u64 = REX_LOAD_U16(r15.u32 + 2);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r4,90(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 90);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// lwz r9,464(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 464);
	// srawi r5,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 2;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// srawi r8,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 2;
	// lbz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 48);
	// mullw r11,r5,r4
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lwz r5,44(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 44);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// clrlwi r29,r6,30
	r29.u64 = ctx.r6.u32 & 0x3;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r28,r7,30
	r28.u64 = ctx.r7.u32 & 0x3;
	// add r27,r11,r10
	r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bne cr6,0x827ad294
	if (!ctx.cr6.eq) goto loc_827AD294;
	// addi r11,r29,44
	ctx.r11.s64 = r29.s64 + 44;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827AD268;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827ad2b0
	if (ctx.cr6.eq) goto loc_827AD2B0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r8,35(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 35);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r5,44(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 44);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lhz r4,90(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 90);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827c8aa0
	ctx.lr = 0x827AD290;
	sub_827C8AA0(ctx, base);
	// b 0x827ad2b0
	goto loc_827AD2B0;
loc_827AD294:
	// addi r11,r29,48
	ctx.r11.s64 = r29.s64 + 48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827AD2B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827AD2B0:
	// li r20,2
	r20.s64 = 2;
	// addi r18,r31,1856
	r18.s64 = r31.s64 + 1856;
loc_827AD2B8:
	// li r28,0
	r28.s64 = 0;
loc_827AD2BC:
	// srawi r24,r28,2
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3) != 0);
	r24.s64 = r28.s32 >> 2;
	// addi r11,r28,140
	ctx.r11.s64 = r28.s64 + 140;
	// addi r10,r24,2
	ctx.r10.s64 = r24.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rldicl r6,r19,20,44
	ctx.r6.u64 = __builtin_rotateleft64(r19.u64, 20) & 0xFFFFF;
	// rlwinm r5,r16,0,26,26
	ctx.r5.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0x20;
	// clrlwi r8,r17,31
	ctx.r8.u64 = r17.u32 & 0x1;
	// lwzx r11,r9,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// clrlwi r9,r6,29
	ctx.r9.u64 = ctx.r6.u32 & 0x7;
	// lwzx r10,r7,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + r30.u32);
	// subf r20,r24,r20
	r20.u64 = r20.u64 - r24.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r21,r11,r10
	r21.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x827ad63c
	if (!ctx.cr6.eq) goto loc_827AD63C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x827ad530
	if (ctx.cr6.eq) goto loc_827AD530;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x827ad3d4
	if (!ctx.cr6.eq) goto loc_827AD3D4;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r5,r31,168
	ctx.r5.s64 = r31.s64 + 168;
	// lwz r29,40(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwz r4,444(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 444);
	// lwz r7,0(r22)
	ctx.r7.u64 = REX_LOAD_U32(r22.u32 + 0);
	// mr r23,r29
	r23.u64 = r29.u64;
	// lwz r6,4(r22)
	ctx.r6.u64 = REX_LOAD_U32(r22.u32 + 4);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r3,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// dcbzl r0,r29
	ea = (r29.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x827ad35c
	if (ctx.cr6.lt) goto loc_827AD35C;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82731930
	ctx.lr = 0x827AD354;
	sub_82731930(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x827ad3b4
	goto loc_827AD3B4;
loc_827AD35C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827ad3b0
	if (!ctx.cr6.gt) goto loc_827AD3B0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_827AD368:
	// lhz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r3,26
	ctx.r8.u64 = ctx.r3.u32 & 0x3F;
	// rlwinm r27,r3,24,8,31
	r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r27,r7
	ctx.r8.s64 = int64_t(r27.s32) * int64_t(ctx.r7.s32);
	// lbzx r27,r10,r4
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r26,r27,r5
	r26.u64 = REX_LOAD_U8(r27.u32 + ctx.r5.u32);
	// rlwinm r3,r3,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r3,r3
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// rotlwi r27,r27,1
	r27.u64 = __builtin_rotateleft32(r27.u32, 1);
	// xor r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// or r9,r26,r9
	ctx.r9.u64 = r26.u64 | ctx.r9.u64;
	// subf r3,r3,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r3,r27,r29
	REX_STORE_U16(r27.u32 + r29.u32, ctx.r3.u16);
	// bdnz 0x827ad368
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827AD368;
loc_827AD3B0:
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
loc_827AD3B4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bne cr6,0x827ad3cc
	if (!ctx.cr6.eq) goto loc_827AD3CC;
	// bl 0x82740728
	ctx.lr = 0x827AD3C8;
	sub_82740728(ctx, base);
	// b 0x827ad418
	goto loc_827AD418;
loc_827AD3CC:
	// bl 0x827ae860
	ctx.lr = 0x827AD3D0;
	sub_827AE860(ctx, base);
	// b 0x827ad418
	goto loc_827AD418;
loc_827AD3D4:
	// rldicl r10,r19,24,40
	ctx.r10.u64 = __builtin_rotateleft64(r19.u64, 24) & 0xFFFFFF;
	// lwz r7,36(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 36);
	// rlwinm r11,r9,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x6;
	// clrlwi r5,r10,28
	ctx.r5.u64 = ctx.r10.u32 & 0xF;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// add r9,r5,r31
	ctx.r9.u64 = ctx.r5.u64 + r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// lbz r10,320(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 320);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r11,159
	ctx.r8.s64 = ctx.r11.s64 + 159;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827AD418;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827AD418:
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(r20.s32, 2, ctx.xer);
	// bge cr6,0x827ad504
	if (!ctx.cr6.lt) goto loc_827AD504;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r11,r28,2
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3) != 0);
	ctx.r11.s64 = r28.s32 >> 2;
	// add r10,r10,r15
	ctx.r10.u64 = ctx.r10.u64 + r15.u64;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// addi r9,r11,45
	ctx.r9.s64 = ctx.r11.s64 + 45;
	// addi r7,r28,116
	ctx.r7.s64 = r28.s64 + 116;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r9,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + r31.u64;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// lwzx r11,r5,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + r30.u32);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lwzx r10,r3,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + r31.u32);
	// srawi r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// lhzx r4,r25,r31
	ctx.r4.u64 = REX_LOAD_U16(r25.u32 + r31.u32);
	// clrlwi r29,r5,30
	r29.u64 = ctx.r5.u32 & 0x3;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r3,48(r7)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + 48);
	// mullw r9,r6,r4
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// lwz r5,44(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 44);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// add r27,r11,r10
	r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r26,r8,30
	r26.u64 = ctx.r8.u32 & 0x3;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bne cr6,0x827ad4e8
	if (!ctx.cr6.eq) goto loc_827AD4E8;
	// addi r11,r29,44
	ctx.r11.s64 = r29.s64 + 44;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + r26.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827AD4BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827ad504
	if (ctx.cr6.eq) goto loc_827AD504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,35(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 35);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r5,44(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 44);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lhzx r4,r25,r31
	ctx.r4.u64 = REX_LOAD_U16(r25.u32 + r31.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827c8aa0
	ctx.lr = 0x827AD4E4;
	sub_827C8AA0(ctx, base);
	// b 0x827ad504
	goto loc_827AD504;
loc_827AD4E8:
	// addi r11,r29,48
	ctx.r11.s64 = r29.s64 + 48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + r26.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827AD504;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827AD504:
	// addi r11,r24,45
	ctx.r11.s64 = r24.s64 + 45;
	// lbzx r9,r28,r18
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + r18.u32);
	// lwz r10,44(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 44);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r11,r9,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhzx r6,r8,r31
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + r31.u32);
	// bl 0x827b4bc0
	ctx.lr = 0x827AD52C;
	sub_827B4BC0(ctx, base);
	// b 0x827ad63c
	goto loc_827AD63C;
loc_827AD530:
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(r20.s32, 2, ctx.xer);
	// bge cr6,0x827ad618
	if (!ctx.cr6.lt) goto loc_827AD618;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r24,45
	ctx.r10.s64 = r24.s64 + 45;
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + r15.u64;
	// addi r9,r24,2
	ctx.r9.s64 = r24.s64 + 2;
	// addi r8,r28,116
	ctx.r8.s64 = r28.s64 + 116;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r25,r10,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r3,2(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// add r8,r24,r31
	ctx.r8.u64 = r24.u64 + r31.u64;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lwzx r11,r7,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + r30.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lwzx r10,r5,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// srawi r9,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// lhzx r4,r25,r31
	ctx.r4.u64 = REX_LOAD_U16(r25.u32 + r31.u32);
	// clrlwi r27,r3,30
	r27.u64 = ctx.r3.u32 & 0x3;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r8,48(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 48);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// lwz r5,44(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 44);
	// srawi r10,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 2;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r26,r6,30
	r26.u64 = ctx.r6.u32 & 0x3;
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bne cr6,0x827ad5fc
	if (!ctx.cr6.eq) goto loc_827AD5FC;
	// addi r11,r27,44
	ctx.r11.s64 = r27.s64 + 44;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + r26.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827AD5D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827ad618
	if (ctx.cr6.eq) goto loc_827AD618;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,35(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 35);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r5,44(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 44);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lhzx r4,r25,r31
	ctx.r4.u64 = REX_LOAD_U16(r25.u32 + r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827c8aa0
	ctx.lr = 0x827AD5F8;
	sub_827C8AA0(ctx, base);
	// b 0x827ad618
	goto loc_827AD618;
loc_827AD5FC:
	// addi r11,r27,48
	ctx.r11.s64 = r27.s64 + 48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + r26.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827AD618;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827AD618:
	// addi r11,r24,45
	ctx.r11.s64 = r24.s64 + 45;
	// lbzx r9,r28,r18
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + r18.u32);
	// lwz r10,44(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 44);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r11,r9,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhzx r5,r8,r31
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + r31.u32);
	// bl 0x827b4b00
	ctx.lr = 0x827AD63C;
	sub_827B4B00(ctx, base);
loc_827AD63C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// rlwinm r17,r17,31,1,31
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 31) & 0x7FFFFFFF;
	// rldicr r19,r19,8,55
	r19.u64 = __builtin_rotateleft64(r19.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r16,r16,1,0,30
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(r28.s32, 6, ctx.xer);
	// blt cr6,0x827ad2bc
	if (ctx.cr6.lt) goto loc_827AD2BC;
loc_827AD654:
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// lhz r8,18(r30)
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + 18);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r6,r8,2
	ctx.r6.s64 = ctx.r8.s64 + 2;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// stw r7,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r7.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r5,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// stw r4,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r4.u32);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// sth r6,18(r30)
	REX_STORE_U16(r30.u32 + 18, ctx.r6.u16);
	// blt cr6,0x827ac78c
	if (ctx.cr6.lt) goto loc_827AC78C;
loc_827AD6A8:
	// lhz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + 16);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r8,2
	ctx.r7.s64 = ctx.r8.s64 + 2;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// sth r7,16(r30)
	REX_STORE_U16(r30.u32 + 16, ctx.r7.u16);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r3,r9,r5
	ctx.r3.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r9,2476(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 2476);
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// lhz r11,50(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 50);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// blt cr6,0x827ac764
	if (ctx.cr6.lt) goto loc_827AC764;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2416
	ctx.r1.s64 = ctx.r1.s64 + 2416;
	// b 0x826a1cd0
	return;
loc_827AD710:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r1,r1,2416
	ctx.r1.s64 = ctx.r1.s64 + 2416;
	// b 0x826a1cd0
	return;
}

