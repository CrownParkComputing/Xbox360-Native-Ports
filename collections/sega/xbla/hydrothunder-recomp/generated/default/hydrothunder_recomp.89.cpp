#include "hydrothunder_funcs.89.h"

DEFINE_REX_FUNC(sub_821256D8) {
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
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821256F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfd f0,296(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 296);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82127BD8) {
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
	ctx.lr = 0x82127BE0;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// bl 0x82129138
	ctx.lr = 0x82127BFC;
	sub_82129138(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq 0x82127e0c
	if (ctx.cr0.eq) goto loc_82127E0C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82129ee0
	ctx.lr = 0x82127C14;
	sub_82129EE0(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x82127e0c
	if (ctx.cr0.eq) goto loc_82127E0C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,-24596
	ctx.r4.s64 = ctx.r11.s64 + -24596;
	// bl 0x8215f338
	ctx.lr = 0x82127C2C;
	sub_8215F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f498
	ctx.lr = 0x82127C38;
	sub_8215F498(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bl 0x82120600
	ctx.lr = 0x82127C48;
	sub_82120600(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82122730
	ctx.lr = 0x82127C54;
	sub_82122730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82127C64;
	sub_82120AC0(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,28
	ctx.r9.s64 = 28;
	// li r24,0
	r24.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw. r23,r10,r9
	r23.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble 0x82127dec
	if (!ctx.cr0.gt) goto loc_82127DEC;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_82127C84:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// li r26,0
	r26.s64 = 0;
	// bl 0x82129088
	ctx.lr = 0x82127C94;
	sub_82129088(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82127CA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82127cb8
	if (ctx.cr6.lt) goto loc_82127CB8;
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x82127cbc
	goto loc_82127CBC;
loc_82127CB8:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82127CBC:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82127cd0
	if (ctx.cr6.lt) goto loc_82127CD0;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// b 0x82127cd4
	goto loc_82127CD4;
loc_82127CD0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82127CD4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82162af8
	ctx.lr = 0x82127CDC;
	sub_82162AF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82162af8
	ctx.lr = 0x82127CE8;
	sub_82162AF8(ctx, base);
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120b20
	ctx.lr = 0x82127D04;
	sub_82120B20(ctx, base);
	// stw r18,80(r31)
	REX_STORE_U32(r31.u32 + 80, r18.u32);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82127d1c
	if (ctx.cr6.lt) goto loc_82127D1C;
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x82127d20
	goto loc_82127D20;
loc_82127D1C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_82127D20:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215eed0
	ctx.lr = 0x82127D2C;
	sub_8215EED0(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82125bc8
	ctx.lr = 0x82127D38;
	sub_82125BC8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82129670
	ctx.lr = 0x82127D48;
	sub_82129670(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82127db4
	if (ctx.cr0.eq) goto loc_82127DB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r18,88(r31)
	r18.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82127D68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r17,0(r10)
	r17.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82127D84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r31,36
	ctx.r6.s64 = r31.s64 + 36;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// bl 0x821637b0
	ctx.lr = 0x82127DA8;
	sub_821637B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82127db4
	if (ctx.cr0.eq) goto loc_82127DB4;
	// li r26,1
	r26.s64 = 1;
loc_82127DB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82127DCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82127df4
	if (ctx.cr0.eq) goto loc_82127DF4;
	// bl 0x8269d1b8
	ctx.lr = 0x82127DDC;
	sub_8269D1B8(ctx, base);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r28,r28,28
	r28.s64 = r28.s64 + 28;
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(r24.s32, r23.s32, ctx.xer);
	// blt cr6,0x82127c84
	if (ctx.cr6.lt) goto loc_82127C84;
loc_82127DEC:
	// li r31,1
	r31.s64 = 1;
	// b 0x82127dfc
	goto loc_82127DFC;
loc_82127DF4:
	// bl 0x8269d1b8
	ctx.lr = 0x82127DF8;
	sub_8269D1B8(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_82127DFC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82122800
	ctx.lr = 0x82127E04;
	sub_82122800(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82127e10
	goto loc_82127E10;
loc_82127E0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82127E10:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_82139B18) {
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
	ctx.lr = 0x82139B20;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,1888(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 1888);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r8,104(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 104);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// rldimi r9,r4,11,21
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r4.u64, 11) & 0x7FFFFFFF800) | (ctx.r9.u64 & 0xFFFFF800000007FF);
	// li r12,1
	ctx.r12.s64 = 1;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,1044(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1044);
	ctx.f0.f64 = double(temp.f32);
	// rldicr r10,r10,34,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 34) & 0xFFFFFFFC00000000;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// or r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// or r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 | ctx.r12.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r11,8
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFFFF;
	// beq cr6,0x82139b94
	if (ctx.cr6.eq) goto loc_82139B94;
	// lwz r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// rldicr r11,r11,24,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 24) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 | ctx.r9.u64;
loc_82139B94:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// or r28,r8,r9
	r28.u64 = ctx.r8.u64 | ctx.r9.u64;
	// bl 0x8212ff50
	ctx.lr = 0x82139BC0;
	sub_8212FF50(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r29,r11,r31
	r29.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 72);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82139be0
	if (ctx.cr0.lt) goto loc_82139BE0;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82139bf8
	if (ctx.cr6.lt) goto loc_82139BF8;
loc_82139BE0:
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
	ctx.lr = 0x82139BF8;
	sub_821231D0(ctx, base);
loc_82139BF8:
	// lwz r10,68(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 68);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r28,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r28.u64);
	// stw r24,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r24.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r25,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r25.u32);
	// stw r27,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r27.u32);
	// sth r26,24(r11)
	REX_STORE_U16(ctx.r11.u32 + 24, r26.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82143A98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82143AA0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82143ad8
	if (!ctx.cr6.eq) goto loc_82143AD8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-17048
	ctx.r4.s64 = ctx.r11.s64 + -17048;
	// addi r3,r10,-15900
	ctx.r3.s64 = ctx.r10.s64 + -15900;
	// li r5,1625
	ctx.r5.s64 = 1625;
	// bl 0x821231d0
	ctx.lr = 0x82143AD8;
	sub_821231D0(ctx, base);
loc_82143AD8:
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r3,44(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 44);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82143B00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82143b10
	if (ctx.cr0.eq) goto loc_82143B10;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82143b68
	goto loc_82143B68;
loc_82143B10:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82143b6c
	if (ctx.cr6.eq) goto loc_82143B6C;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82143B20:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,32778
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32778, ctx.xer);
	// beq cr6,0x82143b40
	if (ctx.cr6.eq) goto loc_82143B40;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// blt cr6,0x82143b20
	if (ctx.cr6.lt) goto loc_82143B20;
	// b 0x82143b6c
	goto loc_82143B6C;
loc_82143B40:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82143b5c
	if (!ctx.cr6.eq) goto loc_82143B5C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82143b68
	goto loc_82143B68;
loc_82143B5C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82143b6c
	if (!ctx.cr6.eq) goto loc_82143B6C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82143B68:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82143B6C:
	// lwz r3,44(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 44);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82143B8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8214B470) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8214B478;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,-13004
	ctx.r10.s64 = ctx.r10.s64 + -13004;
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lfs f0,556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 556);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// lfs f13,228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// lfs f12,580(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 580);
	ctx.f12.f64 = double(temp.f32);
	// stw r31,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// lfs f11,584(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 584);
	ctx.f11.f64 = double(temp.f32);
	// lwz r3,6116(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 6116);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r10,-13296
	ctx.r4.s64 = ctx.r10.s64 + -13296;
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
	ctx.lr = 0x8214B4EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r29,6048(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x8214B4FC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214b528
	if (ctx.cr0.eq) goto loc_8214B528;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-17808
	ctx.r10.s64 = ctx.r10.s64 + -17808;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8214b52c
	goto loc_8214B52C;
loc_8214B528:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_8214B52C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r10,-25728
	ctx.r5.s64 = ctx.r10.s64 + -25728;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214B548;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x822f6280
	ctx.lr = 0x8214B550;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214b58c
	if (ctx.cr0.eq) goto loc_8214B58C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r31.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r31,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r31.u32);
	// stb r11,36(r3)
	REX_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r31.u32);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r31,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// b 0x8214b590
	goto loc_8214B590;
loc_8214B58C:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_8214B590:
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82152DD0) {
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
	ctx.lr = 0x82152DD8;
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
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82152e5c
	if (!ctx.cr6.gt) goto loc_82152E5C;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r10,-25252
	r28.s64 = ctx.r10.s64 + -25252;
	// addi r27,r11,-25320
	r27.s64 = ctx.r11.s64 + -25320;
loc_82152E08:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x82152e1c
	if (ctx.cr6.lt) goto loc_82152E1C;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82152e2c
	if (ctx.cr6.lt) goto loc_82152E2C;
loc_82152E1C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x82152E2C;
	sub_821231D0(ctx, base);
loc_82152E2C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82152E48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82152e08
	if (ctx.cr6.lt) goto loc_82152E08;
loc_82152E5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82157428) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82157430;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82157454
	if (ctx.cr6.eq) goto loc_82157454;
loc_8215744C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821574f0
	goto loc_821574F0;
loc_82157454:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82157c30
	ctx.lr = 0x8215745C;
	sub_82157C30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215744c
	if (ctx.cr0.eq) goto loc_8215744C;
	// addi r30,r31,4720
	r30.s64 = r31.s64 + 4720;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U64(r29.u32 + 0);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// addi r7,r31,16
	ctx.r7.s64 = r31.s64 + 16;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ee910
	ctx.lr = 0x82157488;
	sub_823EE910(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215744c
	if (!ctx.cr0.eq) goto loc_8215744C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82157ab8
	ctx.lr = 0x8215749C;
	sub_82157AB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215744c
	if (ctx.cr0.eq) goto loc_8215744C;
	// addi r29,r31,4692
	r29.s64 = r31.s64 + 4692;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x821574B8;
	sub_826A2E60(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,704(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 704);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x823ede50
	ctx.lr = 0x821574D0;
	sub_823EDE50(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x821574e4
	if (ctx.cr6.eq) goto loc_821574E4;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x823ede68
	ctx.lr = 0x821574E0;
	sub_823EDE68(ctx, base);
	// b 0x8215744c
	goto loc_8215744C;
loc_821574E4:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_821574F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8215C790) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8215C798;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8215c7cc
	if (ctx.cr6.eq) goto loc_8215C7CC;
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
loc_8215C7B0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lbz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 0);
	// bl 0x822f6ee8
	ctx.lr = 0x8215C7BC;
	sub_822F6EE8(ctx, base);
	// stb r3,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r3.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x8215c7b0
	if (!ctx.cr6.eq) goto loc_8215C7B0;
loc_8215C7CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8215EBD8) {
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
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x822f6280
	ctx.lr = 0x8215EBF4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215ec34
	if (ctx.cr0.eq) goto loc_8215EC34;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stb r11,64(r3)
	REX_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// stb r11,65(r3)
	REX_STORE_U8(ctx.r3.u32 + 65, ctx.r11.u8);
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
loc_8215EC34:
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
	ctx.lr = 0x8215EC50;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82160EF8) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,19332
	ctx.r4.s64 = ctx.r11.s64 + 19332;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8269f180
	ctx.lr = 0x82160F28;
	sub_8269F180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82160f5c
	if (!ctx.cr0.eq) goto loc_82160F5C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82160F38;
	sub_8215F0F0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stb r10,8(r30)
	REX_STORE_U8(r30.u32 + 8, ctx.r10.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82160F50:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82160fb0
	goto loc_82160FB0;
loc_82160F5C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,19324
	ctx.r4.s64 = ctx.r11.s64 + 19324;
	// bl 0x8269f180
	ctx.lr = 0x82160F70;
	sub_8269F180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82160f9c
	if (!ctx.cr0.eq) goto loc_82160F9C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82160F80;
	sub_8215F0F0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stb r10,8(r30)
	REX_STORE_U8(r30.u32 + 8, ctx.r10.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x82160f50
	goto loc_82160F50;
loc_82160F9C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18904
	ctx.r4.s64 = ctx.r11.s64 + 18904;
	// bl 0x82160698
	ctx.lr = 0x82160FB0;
	sub_82160698(ctx, base);
loc_82160FB0:
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

DEFINE_REX_FUNC(sub_82169848) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82169850;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r31,4(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 4);
	// b 0x8216988c
	goto loc_8216988C;
loc_82169868:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x82169874;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82169884
	if (!ctx.cr0.lt) goto loc_82169884;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x8216988c
	goto loc_8216988C;
loc_82169884:
	// mr r29,r31
	r29.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8216988C:
	// lbz r11,165(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 165);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82169868
	if (ctx.cr0.eq) goto loc_82169868;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821698bc
	if (ctx.cr6.eq) goto loc_821698BC;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x821698B4;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82169968
	if (!ctx.cr0.lt) goto loc_82169968;
loc_821698BC:
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x826a2e60
	ctx.lr = 0x821698CC;
	sub_826A2E60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120d70
	ctx.lr = 0x821698D8;
	sub_82120D70(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// li r5,124
	ctx.r5.s64 = 124;
	// bl 0x826a1e70
	ctx.lr = 0x821698E8;
	sub_826A1E70(ctx, base);
	// li r3,168
	ctx.r3.s64 = 168;
	// bl 0x822f6280
	ctx.lr = 0x821698F0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82169974
	if (ctx.cr0.eq) goto loc_82169974;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// addic. r28,r31,12
	ctx.xer.ca = r31.u32 > 4294967283;
	r28.s64 = r31.s64 + 12;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stb r11,164(r31)
	REX_STORE_U8(r31.u32 + 164, ctx.r11.u8);
	// stb r11,165(r31)
	REX_STORE_U8(r31.u32 + 165, ctx.r11.u8);
	// beq 0x82169940
	if (ctx.cr0.eq) goto loc_82169940;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120d70
	ctx.lr = 0x82169930;
	sub_82120D70(ctx, base);
	// addi r3,r28,28
	ctx.r3.s64 = r28.s64 + 28;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// li r5,124
	ctx.r5.s64 = 124;
	// bl 0x826a1e70
	ctx.lr = 0x82169940;
	sub_826A1E70(ctx, base);
loc_82169940:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82169f18
	ctx.lr = 0x82169954;
	sub_82169F18(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82120ac0
	ctx.lr = 0x82169968;
	sub_82120AC0(ctx, base);
loc_82169968:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1d08
	return;
loc_82169974:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x82169990;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_821720E0) {
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
	// lwz r3,6076(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6076);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82172130
	if (ctx.cr6.eq) goto loc_82172130;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,27064
	ctx.r4.s64 = ctx.r10.s64 + 27064;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217211C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82172130
	if (!ctx.cr6.eq) goto loc_82172130;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// stb r11,264(r31)
	REX_STORE_U8(r31.u32 + 264, ctx.r11.u8);
loc_82172130:
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

DEFINE_REX_FUNC(sub_82176380) {
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
	ctx.lr = 0x82176388;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x821763f8
	ctx.lr = 0x821763A0;
	sub_821763F8(ctx, base);
	// addi r27,r29,16
	r27.s64 = r29.s64 + 16;
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// li r31,8
	r31.s64 = 8;
loc_821763AC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823fbd18
	ctx.lr = 0x821763BC;
	sub_823FBD18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x82176218
	ctx.lr = 0x821763E4;
	sub_82176218(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bne 0x821763ac
	if (!ctx.cr0.eq) goto loc_821763AC;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82179780) {
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
	ctx.lr = 0x82179788;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r27,r3,r4
	r27.u64 = ctx.r4.u64 - ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// srawi r29,r27,2
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3) != 0);
	r29.s64 = r27.s32 >> 2;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(r29.s32, 32, ctx.xer);
	// ble cr6,0x821798e0
	if (!ctx.cr6.gt) goto loc_821798E0;
loc_821797B0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82179840
	if (!ctx.cr6.gt) goto loc_82179840;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82179900
	ctx.lr = 0x821797CC;
	sub_82179900(ctx, base);
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
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
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r29,r30
	ctx.r11.u64 = r30.u64 - r29.u64;
	// subf r10,r31,r27
	ctx.r10.u64 = r27.u64 - r31.u64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8217981c
	if (!ctx.cr6.lt) goto loc_8217981C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82179780
	ctx.lr = 0x82179814;
	sub_82179780(ctx, base);
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x8217982c
	goto loc_8217982C;
loc_8217981C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82179780
	ctx.lr = 0x82179828;
	sub_82179780(ctx, base);
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8217982C:
	// subf r27,r31,r30
	r27.u64 = r30.u64 - r31.u64;
	// srawi r29,r27,2
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3) != 0);
	r29.s64 = r27.s32 >> 2;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(r29.s32, 32, ctx.xer);
	// bgt cr6,0x821797b0
	if (ctx.cr6.gt) goto loc_821797B0;
loc_82179840:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x821798e0
	if (!ctx.cr6.gt) goto loc_821798E0;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// ble cr6,0x821798f8
	if (!ctx.cr6.gt) goto loc_821798F8;
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// addze. r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r30.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x82179890
	if (!ctx.cr0.gt) goto loc_82179890;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r31
	r28.u64 = ctx.r11.u64 + r31.u64;
loc_82179864:
	// lwzu r11,-4(r28)
	ea = -4 + r28.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82179d10
	ctx.lr = 0x82179888;
	sub_82179D10(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bgt cr6,0x82179864
	if (ctx.cr6.gt) goto loc_82179864;
loc_82179890:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// ble cr6,0x821798f8
	if (!ctx.cr6.gt) goto loc_821798F8;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// addi r29,r31,-4
	r29.s64 = r31.s64 + -4;
loc_821798A0:
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// srawi r5,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r5.s64 = r30.s32 >> 2;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r9,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82179d10
	ctx.lr = 0x821798CC;
	sub_82179D10(ctx, base);
	// rlwinm r10,r30,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bgt cr6,0x821798a0
	if (ctx.cr6.gt) goto loc_821798A0;
	// b 0x821798f8
	goto loc_821798F8;
loc_821798E0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x821798f8
	if (!ctx.cr6.gt) goto loc_821798F8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82179bb0
	ctx.lr = 0x821798F8;
	sub_82179BB0(ctx, base);
loc_821798F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821868E0) {
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
	// lwz r3,112(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,32092
	ctx.r11.s64 = ctx.r11.s64 + 32092;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x82191520
	ctx.lr = 0x82186910;
	sub_82191520(ctx, base);
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
	ctx.lr = 0x8218692C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x82186934;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82186944
	if (ctx.cr0.eq) goto loc_82186944;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82186944;
	sub_8269CE98(ctx, base);
loc_82186944:
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

DEFINE_REX_FUNC(sub_8218AE98) {
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
	// bl 0x82189dd0
	ctx.lr = 0x8218AEB8;
	sub_82189DD0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-32368
	ctx.r11.s64 = ctx.r11.s64 + -32368;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,208
	ctx.r11.s64 = r31.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// lfs f0,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
	// lfs f13,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r11.u32);
	// lfs f12,216(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
	// lfs f11,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,224(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 224, temp.u32);
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// lfs f12,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,228(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 228, temp.u32);
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// stfs f11,56(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fadds f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// std r11,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r11.u64);
	// ld r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// std r8,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r8.u64);
	// std r9,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r9.u64);
	// std r10,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r10.u64);
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

DEFINE_REX_FUNC(sub_821911F8) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,-32024
	ctx.r11.s64 = ctx.r11.s64 + -32024;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x82120d70
	ctx.lr = 0x82191220;
	sub_82120D70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,33(r31)
	REX_STORE_U8(r31.u32 + 33, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,32(r31)
	REX_STORE_U8(r31.u32 + 32, ctx.r10.u8);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821930D0) {
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
	ctx.lr = 0x821930D8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821931c0
	if (!ctx.cr6.gt) goto loc_821931C0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r29,r3,16
	r29.s64 = ctx.r3.s64 + 16;
	// addi r25,r11,-25252
	r25.s64 = ctx.r11.s64 + -25252;
	// addi r24,r10,-25320
	r24.s64 = ctx.r10.s64 + -25320;
loc_82193104:
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x82177510
	ctx.lr = 0x82193118;
	sub_82177510(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r31,r10,1
	r31.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82193180
	if (!ctx.cr6.gt) goto loc_82193180;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// bgt cr6,0x82193148
	if (ctx.cr6.gt) goto loc_82193148;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82193148:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82193180
	if (!ctx.cr6.gt) goto loc_82193180;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x8219315C;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x82193170;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x82193178;
	sub_8269D1B8(ctx, base);
	// stw r23,0(r29)
	REX_STORE_U32(r29.u32 + 0, r23.u32);
	// stw r30,8(r29)
	REX_STORE_U32(r29.u32 + 8, r30.u32);
loc_82193180:
	// addic. r30,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r30.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r31,4(r29)
	REX_STORE_U32(r29.u32 + 4, r31.u32);
	// blt 0x82193194
	if (ctx.cr0.lt) goto loc_82193194;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// blt cr6,0x821931a4
	if (ctx.cr6.lt) goto loc_821931A4;
loc_82193194:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x821931A4;
	sub_821231D0(ctx, base);
loc_821931A4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stwx r27,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r27.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82193104
	if (ctx.cr6.lt) goto loc_82193104;
loc_821931C0:
	// lis r31,-32106
	r31.s64 = -2104098816;
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821931E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6092(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82193214;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,28(r28)
	REX_STORE_U32(r28.u32 + 28, ctx.r3.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,6092(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,76(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82193244;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r28)
	REX_STORE_U32(r28.u32 + 32, ctx.r3.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8219D240) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82120d70
	ctx.lr = 0x8219D25C;
	sub_82120D70(ctx, base);
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

DEFINE_REX_FUNC(sub_8219DDF8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82166f38
	ctx.lr = 0x8219DE20;
	sub_82166F38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219dedc
	if (ctx.cr0.eq) goto loc_8219DEDC;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8219de60
	if (!ctx.cr6.eq) goto loc_8219DE60;
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8219de60
	if (!ctx.cr6.eq) goto loc_8219DE60;
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8219de64
	if (ctx.cr6.eq) goto loc_8219DE64;
loc_8219DE60:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8219DE64:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219dedc
	if (ctx.cr0.eq) goto loc_8219DEDC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219DE88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219DEB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219dedc
	if (ctx.cr0.eq) goto loc_8219DEDC;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219dedc
	if (ctx.cr6.eq) goto loc_8219DEDC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219DEDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8219DEDC:
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

DEFINE_REX_FUNC(sub_821A4810) {
	REX_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// b 0x821a3780
	sub_821A3780(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A5D78) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821a5d90
	if (ctx.cr6.lt) goto loc_821A5D90;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A5D90:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A6A80) {
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
	// li r30,0
	r30.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x821A6AA8;
	sub_822F6280(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a6adc
	if (ctx.cr0.eq) goto loc_821A6ADC;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
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
loc_821A6ADC:
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
	ctx.lr = 0x821A6AF4;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_821A89E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821A89F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,93(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 93);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// b 0x821a8a44
	goto loc_821A8A44;
loc_821A8A08:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x821a89e8
	ctx.lr = 0x821A8A14;
	sub_821A89E8(ctx, base);
	// addi r29,r30,12
	r29.s64 = r30.s64 + 12;
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x821a8d60
	ctx.lr = 0x821A8A24;
	sub_821A8D60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821A8A34;
	sub_82120AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821A8A3C;
	sub_8269CE98(ctx, base);
	// lbz r11,93(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 93);
	// mr r30,r31
	r30.u64 = r31.u64;
loc_821A8A44:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a8a08
	if (ctx.cr0.eq) goto loc_821A8A08;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821AB058) {
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
	// lwz r3,96(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// bl 0x8269ce98
	ctx.lr = 0x821AB078;
	sub_8269CE98(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
	// beq cr6,0x821ab0a4
	if (ctx.cr6.eq) goto loc_821AB0A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AB0A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,104(r31)
	REX_STORE_U32(r31.u32 + 104, r30.u32);
loc_821AB0A4:
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

DEFINE_REX_FUNC(sub_821ADEE8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14556
	ctx.r3.s64 = ctx.r11.s64 + -14556;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AE8E8) {
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
	// bl 0x821ae978
	ctx.lr = 0x821AE900;
	sub_821AE978(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821ae914
	if (!ctx.cr6.eq) goto loc_821AE914;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821aeb58
	ctx.lr = 0x821AE914;
	sub_821AEB58(ctx, base);
loc_821AE914:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ddf08
	ctx.lr = 0x821AE91C;
	sub_821DDF08(ctx, base);
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

DEFINE_REX_FUNC(sub_821B0F38) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15184
	ctx.r3.s64 = ctx.r11.s64 + -15184;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B1118) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B1148;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,1152
	ctx.r3.s64 = ctx.r11.s64 + 1152;
	// bl 0x821b08f0
	ctx.lr = 0x821B1158;
	sub_821B08F0(ctx, base);
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

DEFINE_REX_FUNC(sub_821B3690) {
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
	ctx.lr = 0x821B3698;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B36C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b3778
	if (ctx.cr0.eq) goto loc_821B3778;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x822f6280
	ctx.lr = 0x821B36D0;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821b3738
	if (ctx.cr0.eq) goto loc_821B3738;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r29,r31,112
	r29.s64 = r31.s64 + 112;
	// bne cr6,0x821b36e8
	if (!ctx.cr6.eq) goto loc_821B36E8;
	// li r29,0
	r29.s64 = 0;
loc_821B36E8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82178a50
	ctx.lr = 0x821B36F8;
	sub_82178A50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213bc98
	ctx.lr = 0x821B3704;
	sub_8213BC98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f2,228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,284(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8217f8a0
	ctx.lr = 0x821B3730;
	sub_8217F8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b373c
	goto loc_821B373C;
loc_821B3738:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821B373C:
	// stw r4,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821B3748;
	sub_821D3988(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b3760
	if (ctx.cr0.eq) goto loc_821B3760;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821B3760;
	sub_82120AC0(ctx, base);
loc_821B3760:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// bl 0x82120b20
	ctx.lr = 0x821B3778;
	sub_82120B20(ctx, base);
loc_821B3778:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,15216
	ctx.r10.s64 = ctx.r10.s64 + 15216;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r30,6048(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B379C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b37c4
	if (ctx.cr0.eq) goto loc_821B37C4;
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
	// b 0x821b37c8
	goto loc_821B37C8;
loc_821B37C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821B37C8:
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
	ctx.lr = 0x821B37E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821BC550) {
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
	ctx.lr = 0x821BC558;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x821BC568;
	sub_82178268(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,100
	ctx.r3.s64 = 100;
	// addi r11,r11,-19008
	ctx.r11.s64 = ctx.r11.s64 + -19008;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821BC57C;
	sub_822F6280(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bc5a0
	if (ctx.cr0.eq) goto loc_821BC5A0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821dc550
	ctx.lr = 0x821BC598;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821bc5a4
	goto loc_821BC5A4;
loc_821BC5A0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_821BC5A4:
	// stw r4,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r4.u32);
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821BC5B0;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821BC5B8;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r28,r11,-15424
	r28.s64 = ctx.r11.s64 + -15424;
	// addi r29,r10,-23836
	r29.s64 = ctx.r10.s64 + -23836;
	// beq 0x821bc62c
	if (ctx.cr0.eq) goto loc_821BC62C;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19196
	ctx.r4.s64 = ctx.r11.s64 + -19196;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BC5EC;
	sub_821DBB48(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821BC5F8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bc61c
	if (ctx.cr0.eq) goto loc_821BC61C;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15384
	ctx.r10.s64 = ctx.r10.s64 + -15384;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821bc620
	goto loc_821BC620;
loc_821BC61C:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821BC620:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x821bc630
	goto loc_821BC630;
loc_821BC62C:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_821BC630:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821BC648;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821BC650;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821bc6b4
	if (ctx.cr0.eq) goto loc_821BC6B4;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19188
	ctx.r4.s64 = ctx.r11.s64 + -19188;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BC674;
	sub_821DBB48(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821BC680;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bc6a4
	if (ctx.cr0.eq) goto loc_821BC6A4;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15280
	ctx.r10.s64 = ctx.r10.s64 + -15280;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821bc6a8
	goto loc_821BC6A8;
loc_821BC6A4:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821BC6A8:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x821bc6b8
	goto loc_821BC6B8;
loc_821BC6B4:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_821BC6B8:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821BC6D0;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821BC6D8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821bc73c
	if (ctx.cr0.eq) goto loc_821BC73C;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19204
	ctx.r4.s64 = ctx.r11.s64 + -19204;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BC6FC;
	sub_821DBB48(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821BC708;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bc72c
	if (ctx.cr0.eq) goto loc_821BC72C;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15176
	ctx.r10.s64 = ctx.r10.s64 + -15176;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821bc730
	goto loc_821BC730;
loc_821BC72C:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821BC730:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x821bc740
	goto loc_821BC740;
loc_821BC73C:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_821BC740:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821BC758;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821BC760;
	sub_822F6280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r29,r11,-23824
	r29.s64 = ctx.r11.s64 + -23824;
	// beq 0x821bc798
	if (ctx.cr0.eq) goto loc_821BC798;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,23080
	ctx.r4.s64 = ctx.r11.s64 + 23080;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BC78C;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x821bc79c
	goto loc_821BC79C;
loc_821BC798:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_821BC79C:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821BC7B4;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821BC7BC;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821bc7ec
	if (ctx.cr0.eq) goto loc_821BC7EC;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,23076
	ctx.r4.s64 = ctx.r11.s64 + 23076;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BC7E0;
	sub_821DBB48(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x821bc7f0
	goto loc_821BC7F0;
loc_821BC7EC:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821BC7F0:
	// lwz r10,112(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// bl 0x82264568
	ctx.lr = 0x821BC808;
	sub_82264568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821CF220) {
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
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x821CF24C;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x821CF254;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cf264
	if (ctx.cr0.eq) goto loc_821CF264;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821CF264;
	sub_8269CE98(ctx, base);
loc_821CF264:
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

DEFINE_REX_FUNC(sub_821D31B0) {
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
	ctx.lr = 0x821D31B8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r3,28
	ctx.r8.s64 = ctx.r3.s64 + 28;
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
loc_821D31EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821d320c
	if (!ctx.cr0.eq) goto loc_821D320C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821d31ec
	if (!ctx.cr6.eq) goto loc_821D31EC;
loc_821D320C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821d3228
	if (ctx.cr0.eq) goto loc_821D3228;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821D3220;
	sub_826A1E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d34c0
	ctx.lr = 0x821D3228;
	sub_821D34C0(ctx, base);
loc_821D3228:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d36f0
	ctx.lr = 0x821D3230;
	sub_821D36F0(ctx, base);
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 76);
	// bl 0x821d3ef8
	ctx.lr = 0x821D3244;
	sub_821D3EF8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r11,16592
	ctx.r7.s64 = ctx.r11.s64 + 16592;
	// li r26,128
	r26.s64 = 128;
	// lfs f0,12(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
loc_821D3264:
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_821D327C:
	// lfsu f13,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfs f11,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// bdnz 0x821d327c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D327C;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// cmpwi cr6,r9,512
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 512, ctx.xer);
	// blt cr6,0x821d3264
	if (ctx.cr6.lt) goto loc_821D3264;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lfs f0,616(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 616);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
loc_821D32BC:
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r7,r6,7,18,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0x3F80;
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
loc_821D32D4:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 84);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,25
	ctx.r9.u64 = ctx.r11.u32 & 0x7F;
	// lfsx f13,r3,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r4,r5
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r9,r5
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiw f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiw f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r5,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r5.u8);
	// stbu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x821d32d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D32D4;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,128
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 128, ctx.xer);
	// blt cr6,0x821d32bc
	if (ctx.cr6.lt) goto loc_821D32BC;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,0(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r30,r11,r31
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D337C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_821D3384:
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821D3394;
	sub_826A1E70(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r28,r28,256
	r28.s64 = r28.s64 + 256;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// bne 0x821d3384
	if (!ctx.cr0.eq) goto loc_821D3384;
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
	ctx.lr = 0x821D33C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,1
	r29.s64 = 1;
	// li r30,0
	r30.s64 = 0;
loc_821D33C8:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
	// sraw r10,r26,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r26.s32 < 0) & (((r26.s32 >> temp.u32) << temp.u32) != r26.s32);
	ctx.r10.s64 = r26.s32 >> temp.u32;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sraw. r4,r26,r29
	temp.u32 = r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r26.s32 < 0) & (((r26.s32 >> temp.u32) << temp.u32) != r26.s32);
	ctx.r4.s64 = r26.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// ble 0x821d3488
	if (!ctx.cr0.gt) goto loc_821D3488;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_821D33F8:
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_821D33FC:
	// lbz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// lbz r28,0(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r8,r6
	ctx.r8.s64 = ctx.r6.s8;
	// lbz r27,0(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r6,r28
	ctx.r6.s64 = r28.s8;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// extsb r7,r27
	ctx.r7.s64 = r27.s8;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// stb r8,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r8.u8);
	// lbz r8,3(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r28,1(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r7,1(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// extsb r7,r28
	ctx.r7.s64 = r28.s8;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// stbu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x821d33fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D33FC;
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// bne 0x821d33f8
	if (!ctx.cr0.eq) goto loc_821D33F8;
loc_821D3488:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// bl 0x821d3850
	ctx.lr = 0x821D34A4;
	sub_821D3850(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r30,28
	ctx.cr6.compare<int32_t>(r30.s32, 28, ctx.xer);
	// blt cr6,0x821d33c8
	if (ctx.cr6.lt) goto loc_821D33C8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821E9F18) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,20272
	ctx.r4.s64 = ctx.r10.s64 + 20272;
	// lwz r11,6100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6100);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x8215f338
	ctx.lr = 0x821E9F3C;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821e9f60
	if (!ctx.cr6.eq) goto loc_821E9F60;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 4;
	// b 0x821e9f64
	goto loc_821E9F64;
loc_821E9F60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E9F64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EC968) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821EC970;
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
	// lbz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 40);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbz r29,33(r31)
	r29.u64 = REX_LOAD_U8(r31.u32 + 33);
	// stb r11,41(r31)
	REX_STORE_U8(r31.u32 + 41, ctx.r11.u8);
	// bl 0x8215f2d0
	ctx.lr = 0x821EC994;
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
	ctx.lr = 0x821EC9AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821EF2D8) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6036(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6036);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EF308;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,16328
	ctx.r4.s64 = ctx.r11.s64 + 16328;
	// bl 0x82120600
	ctx.lr = 0x821EF31C;
	sub_82120600(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x821EF32C;
	sub_82180E18(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821EF340;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,16340
	ctx.r4.s64 = ctx.r11.s64 + 16340;
	// bl 0x82120600
	ctx.lr = 0x821EF350;
	sub_82120600(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x821EF35C;
	sub_82180E18(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x821EF370;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16348
	ctx.r4.s64 = ctx.r11.s64 + 16348;
	// bl 0x82120600
	ctx.lr = 0x821EF380;
	sub_82120600(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x821EF38C;
	sub_82180E18(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821EF3A0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,16360
	ctx.r4.s64 = ctx.r11.s64 + 16360;
	// bl 0x82120600
	ctx.lr = 0x821EF3B0;
	sub_82120600(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x821EF3BC;
	sub_82180E18(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x821EF3D0;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,16376
	ctx.r4.s64 = ctx.r11.s64 + 16376;
	// bl 0x82120600
	ctx.lr = 0x821EF3E0;
	sub_82120600(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x821EF3EC;
	sub_82180E18(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x821EF400;
	sub_82120AC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
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

DEFINE_REX_FUNC(sub_821F9818) {
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
	ctx.lr = 0x821F9820;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16568
	ctx.r4.s64 = ctx.r11.s64 + 16568;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x82120600
	ctx.lr = 0x821F9850;
	sub_82120600(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F9880;
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
	ctx.lr = 0x821F9894;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_821FBD30) {
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
	ctx.lr = 0x821FBD38;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821fbd6c
	if (ctx.cr6.eq) goto loc_821FBD6C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,25200
	ctx.r4.s64 = ctx.r11.s64 + 25200;
	// addi r3,r10,25300
	ctx.r3.s64 = ctx.r10.s64 + 25300;
	// li r5,557
	ctx.r5.s64 = 557;
	// bl 0x821231d0
	ctx.lr = 0x821FBD6C;
	sub_821231D0(ctx, base);
loc_821FBD6C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x821FBD80;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,25456
	ctx.r4.s64 = ctx.r11.s64 + 25456;
	// bl 0x8215f338
	ctx.lr = 0x821FBD8C;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r27,r11,-17296
	r27.s64 = ctx.r11.s64 + -17296;
	// addi r28,r10,-17344
	r28.s64 = ctx.r10.s64 + -17344;
loc_821FBDA4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821fbdc8
	if (!ctx.cr6.eq) goto loc_821FBDC8;
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
	// b 0x821fbdcc
	goto loc_821FBDCC;
loc_821FBDC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821FBDCC:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821fbe30
	if (!ctx.cr6.lt) goto loc_821FBE30;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821FBDE0;
	sub_8215F1B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x821FBDEC;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821FBDF0;
	sub_8215FA30(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82120780
	ctx.lr = 0x821FBDF8;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821fbe20
	if (!ctx.cr0.eq) goto loc_821FBE20;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x821FBE0C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821FBE10;
	sub_8215FA30(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82120780
	ctx.lr = 0x821FBE18;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821fbe28
	if (ctx.cr0.eq) goto loc_821FBE28;
loc_821FBE20:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x821fbda4
	goto loc_821FBDA4;
loc_821FBE28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x821fbe38
	goto loc_821FBE38;
loc_821FBE30:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,1008
	ctx.r3.s64 = ctx.r11.s64 + 1008;
loc_821FBE38:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82203CD8) {
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
	ctx.lr = 0x82203CE0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,77(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 77);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82203d58
	if (!ctx.cr0.eq) goto loc_82203D58;
	// li r28,0
	r28.s64 = 0;
loc_82203D00:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x82203cd8
	ctx.lr = 0x82203D0C;
	sub_82203CD8(ctx, base);
	// lwz r3,52(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 52);
	// addi r31,r29,16
	r31.s64 = r29.s64 + 16;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// beq cr6,0x82203d24
	if (ctx.cr6.eq) goto loc_82203D24;
	// bl 0x8269ce98
	ctx.lr = 0x82203D24;
	sub_8269CE98(ctx, base);
loc_82203D24:
	// stw r28,36(r31)
	REX_STORE_U32(r31.u32 + 36, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,40(r31)
	REX_STORE_U32(r31.u32 + 40, r28.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,44(r31)
	REX_STORE_U32(r31.u32 + 44, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82203D40;
	sub_82120AC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82203D48;
	sub_8269CE98(ctx, base);
	// lbz r11,77(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 77);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82203d00
	if (ctx.cr0.eq) goto loc_82203D00;
loc_82203D58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82205674) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82205938) {
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
	ctx.lr = 0x82205940;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lfs f1,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82205968;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r28,r30,32
	r28.s64 = r30.s64 + 32;
	// lwz r31,32(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822059a8
	if (ctx.cr6.eq) goto loc_822059A8;
	// lis r29,-32106
	r29.s64 = -2104098816;
loc_82205980:
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82205998;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82205980
	if (!ctx.cr6.eq) goto loc_82205980;
loc_822059A8:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822059d8
	if (ctx.cr6.eq) goto loc_822059D8;
	// subf r11,r4,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8269cc20
	ctx.lr = 0x822059D0;
	sub_8269CC20(ctx, base);
	// add r11,r29,r31
	ctx.r11.u64 = r29.u64 + r31.u64;
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
loc_822059D8:
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82205a04
	if (ctx.cr6.eq) goto loc_82205A04;
	// bl 0x82179fd8
	ctx.lr = 0x822059E8;
	sub_82179FD8(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r3,6260(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6260);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82205A04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82205A04:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8220C238) {
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
	// addi r3,r3,372
	ctx.r3.s64 = ctx.r3.s64 + 372;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x8220C25C;
	sub_82120AC0(ctx, base);
	// addi r3,r31,344
	ctx.r3.s64 = r31.s64 + 344;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x8220C26C;
	sub_82120AC0(ctx, base);
	// addi r3,r31,236
	ctx.r3.s64 = r31.s64 + 236;
	// bl 0x822e6f28
	ctx.lr = 0x8220C274;
	sub_822E6F28(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x8220C284;
	sub_82120AC0(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822e6f28
	ctx.lr = 0x8220C28C;
	sub_822E6F28(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x8220C29C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8220C2AC;
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

DEFINE_REX_FUNC(sub_8220F340) {
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
	ctx.lr = 0x8220F358;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8220f3d4
	if (ctx.cr0.eq) goto loc_8220F3D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e8048
	ctx.lr = 0x8220F368;
	sub_822E8048(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-30164
	ctx.r11.s64 = ctx.r11.s64 + -30164;
	// addi r4,r10,-26856
	ctx.r4.s64 = ctx.r10.s64 + -26856;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,260
	ctx.r3.s64 = r31.s64 + 260;
	// bl 0x82120600
	ctx.lr = 0x8220F384;
	sub_82120600(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x8220F38C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220f3b8
	if (ctx.cr0.eq) goto loc_8220F3B8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-2864
	ctx.r10.s64 = ctx.r10.s64 + -2864;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8220f3bc
	goto loc_8220F3BC;
loc_8220F3B8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8220F3BC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r5,r11,-30184
	ctx.r5.s64 = ctx.r11.s64 + -30184;
	// bl 0x8216be80
	ctx.lr = 0x8220F3CC;
	sub_8216BE80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8220f3d8
	goto loc_8220F3D8;
loc_8220F3D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220F3D8:
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

DEFINE_REX_FUNC(sub_82213D98) {
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
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,16584
	ctx.r4.s64 = ctx.r11.s64 + 16584;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f670
	ctx.lr = 0x82213DC0;
	sub_8215F670(ctx, base);
	// bl 0x8215f0f0
	ctx.lr = 0x82213DC4;
	sub_8215F0F0(ctx, base);
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

DEFINE_REX_FUNC(sub_822192E8) {
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
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,20320
	ctx.r4.s64 = ctx.r11.s64 + 20320;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x82219310;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16420
	ctx.r4.s64 = ctx.r11.s64 + 16420;
	// bl 0x8215f338
	ctx.lr = 0x8221931C;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82219324;
	sub_8215F1B0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-26736
	ctx.r4.s64 = ctx.r11.s64 + -26736;
	// bl 0x8215f338
	ctx.lr = 0x82219330;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82219344
	if (!ctx.cr6.eq) goto loc_82219344;
	// lbz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x82219348
	goto loc_82219348;
loc_82219344:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82219348:
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

DEFINE_REX_FUNC(sub_8221D938) {
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
	ctx.lr = 0x8221D940;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-25644
	ctx.r11.s64 = ctx.r11.s64 + -25644;
	// addi r10,r10,-25604
	ctx.r10.s64 = ctx.r10.s64 + -25604;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// stw r10,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r4,1004(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1004);
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
	ctx.lr = 0x8221D980;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r31,1004
	r28.s64 = r31.s64 + 1004;
	// li r30,3
	r30.s64 = 3;
loc_8221D988:
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwzu r4,4(r28)
	ea = 4 + r28.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D9A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8221d988
	if (!ctx.cr0.eq) goto loc_8221D988;
	// lwz r3,1020(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1020);
	// addi r30,r31,1020
	r30.s64 = r31.s64 + 1020;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221d9dc
	if (ctx.cr6.eq) goto loc_8221D9DC;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221d9d8
	if (ctx.cr6.eq) goto loc_8221D9D8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8221D9CC:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8221d9cc
	if (!ctx.cr6.eq) goto loc_8221D9CC;
loc_8221D9D8:
	// bl 0x8269ce98
	ctx.lr = 0x8221D9DC;
	sub_8269CE98(ctx, base);
loc_8221D9DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,788
	ctx.r3.s64 = r31.s64 + 788;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bl 0x8226b588
	ctx.lr = 0x8221D9F4;
	sub_8226B588(ctx, base);
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// bl 0x822e6f28
	ctx.lr = 0x8221D9FC;
	sub_822E6F28(ctx, base);
	// addi r3,r31,580
	ctx.r3.s64 = r31.s64 + 580;
	// bl 0x822e6f28
	ctx.lr = 0x8221DA04;
	sub_822E6F28(ctx, base);
	// addi r3,r31,472
	ctx.r3.s64 = r31.s64 + 472;
	// bl 0x822e6f28
	ctx.lr = 0x8221DA0C;
	sub_822E6F28(ctx, base);
	// addi r3,r31,364
	ctx.r3.s64 = r31.s64 + 364;
	// bl 0x822e6f28
	ctx.lr = 0x8221DA14;
	sub_822E6F28(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x822e6f28
	ctx.lr = 0x8221DA1C;
	sub_822E6F28(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x822e6f28
	ctx.lr = 0x8221DA24;
	sub_822E6F28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x8221DA2C;
	sub_82178388(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221da3c
	if (ctx.cr0.eq) goto loc_8221DA3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8221DA3C;
	sub_8269CE98(ctx, base);
loc_8221DA3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82227CA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82227CA8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821b2d80
	ctx.lr = 0x82227CC4;
	sub_821B2D80(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,1624
	ctx.r11.s64 = ctx.r11.s64 + 1624;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r10,16408
	ctx.r4.s64 = ctx.r10.s64 + 16408;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8215f670
	ctx.lr = 0x82227CE0;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-32660
	ctx.r4.s64 = ctx.r11.s64 + -32660;
	// bl 0x8215f670
	ctx.lr = 0x82227CEC;
	sub_8215F670(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82227CF4;
	sub_8215F0F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,8(r29)
	REX_STORE_U32(r29.u32 + 8, r30.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822297A8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13852
	ctx.r3.s64 = ctx.r11.s64 + -13852;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82229978) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13836
	ctx.r3.s64 = ctx.r11.s64 + -13836;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82229B60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82229B68;
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
	ctx.lr = 0x82229B7C;
	sub_82229520(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r31,112
	r30.s64 = r31.s64 + 112;
	// addi r11,r11,-22560
	ctx.r11.s64 = ctx.r11.s64 + -22560;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82229B9C;
	sub_82120AC0(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x82229BA4;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82229be8
	if (ctx.cr0.eq) goto loc_82229BE8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,30308
	ctx.r4.s64 = ctx.r11.s64 + 30308;
	// bl 0x82120600
	ctx.lr = 0x82229BBC;
	sub_82120600(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,-15368(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15368);
	// bl 0x82120600
	ctx.lr = 0x82229BCC;
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
	ctx.lr = 0x82229BE4;
	sub_821D58C8(ctx, base);
	// b 0x82229bec
	goto loc_82229BEC;
loc_82229BE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82229BEC:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x82229BFC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82229c18
	if (ctx.cr0.eq) goto loc_82229C18;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r28,r28,0,31,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x82229C18;
	sub_82120AC0(ctx, base);
loc_82229C18:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82229c30
	if (ctx.cr0.eq) goto loc_82229C30;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x82229C30;
	sub_82120AC0(ctx, base);
loc_82229C30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8222D9D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8222D9D8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x8222D9E8;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r29,r31,128
	r29.s64 = r31.s64 + 128;
	// addi r11,r11,-21224
	ctx.r11.s64 = ctx.r11.s64 + -21224;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8222d488
	ctx.lr = 0x8222DA00;
	sub_8222D488(ctx, base);
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x8222DA08;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222da20
	if (ctx.cr0.eq) goto loc_8222DA20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a1e80
	ctx.lr = 0x8222DA18;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8222da24
	goto loc_8222DA24;
loc_8222DA20:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8222DA24:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x8222DA34;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x8222DA3C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222da54
	if (ctx.cr0.eq) goto loc_8222DA54;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8222dc18
	ctx.lr = 0x8222DA4C;
	sub_8222DC18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8222da58
	goto loc_8222DA58;
loc_8222DA54:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8222DA58:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x8222DA64;
	sub_821D3988(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x8222DA6C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222da8c
	if (ctx.cr0.eq) goto loc_8222DA8C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x8222DA84;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8222da90
	goto loc_8222DA90;
loc_8222DA8C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8222DA90:
	// stw r4,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x8222DA9C;
	sub_821D3988(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82273bc8
	ctx.lr = 0x8222DAA8;
	sub_82273BC8(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x8222DAB0;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8222db28
	if (ctx.cr0.eq) goto loc_8222DB28;
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x8222DAD8;
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
	ctx.lr = 0x8222DAEC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222db18
	if (ctx.cr0.eq) goto loc_8222DB18;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,-9296
	ctx.r10.s64 = ctx.r10.s64 + -9296;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8222db1c
	goto loc_8222DB1C;
loc_8222DB18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222DB1C:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x8222db2c
	goto loc_8222DB2C;
loc_8222DB28:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8222DB2C:
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
	ctx.lr = 0x8222DB44;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82237EA8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,6284(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82238400) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-112
	ctx.r3.s64 = ctx.r3.s64 + -112;
	// b 0x82238418
	sub_82238418(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82238680) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82238688;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82277bc8
	ctx.lr = 0x82238694;
	sub_82277BC8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r11,-14776
	ctx.r11.s64 = ctx.r11.s64 + -14776;
	// addi r10,r10,-17328
	ctx.r10.s64 = ctx.r10.s64 + -17328;
	// addi r9,r9,-17204
	ctx.r9.s64 = ctx.r9.s64 + -17204;
	// stw r11,3776(r31)
	REX_STORE_U32(r31.u32 + 3776, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,3776(r31)
	REX_STORE_U32(r31.u32 + 3776, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3788
	ctx.r3.s64 = r31.s64 + 3788;
	// bl 0x82120ac0
	ctx.lr = 0x822386C8;
	sub_82120AC0(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// stb r29,3816(r31)
	REX_STORE_U8(r31.u32 + 3816, r29.u8);
	// stb r29,3832(r31)
	REX_STORE_U8(r31.u32 + 3832, r29.u8);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,3820(r31)
	REX_STORE_U32(r31.u32 + 3820, r30.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r30,3824(r31)
	REX_STORE_U32(r31.u32 + 3824, r30.u32);
	// addi r3,r31,3880
	ctx.r3.s64 = r31.s64 + 3880;
	// stw r30,3828(r31)
	REX_STORE_U32(r31.u32 + 3828, r30.u32);
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,3836(r31)
	REX_STORE_U32(r31.u32 + 3836, r30.u32);
	// addi r4,r9,-18100
	ctx.r4.s64 = ctx.r9.s64 + -18100;
	// stw r30,3840(r31)
	REX_STORE_U32(r31.u32 + 3840, r30.u32);
	// stw r30,3844(r31)
	REX_STORE_U32(r31.u32 + 3844, r30.u32);
	// stw r30,3852(r31)
	REX_STORE_U32(r31.u32 + 3852, r30.u32);
	// stw r30,3856(r31)
	REX_STORE_U32(r31.u32 + 3856, r30.u32);
	// stw r30,3860(r31)
	REX_STORE_U32(r31.u32 + 3860, r30.u32);
	// stfs f0,3876(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 3876, temp.u32);
	// stw r11,3868(r31)
	REX_STORE_U32(r31.u32 + 3868, ctx.r11.u32);
	// stw r11,3872(r31)
	REX_STORE_U32(r31.u32 + 3872, ctx.r11.u32);
	// bl 0x82120600
	ctx.lr = 0x82238724;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,17480
	ctx.r4.s64 = ctx.r11.s64 + 17480;
	// bl 0x82120600
	ctx.lr = 0x82238734;
	sub_82120600(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x82120b20
	ctx.lr = 0x82238748;
	sub_82120B20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82238758;
	sub_82120AC0(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x82238760;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82238780
	if (ctx.cr0.eq) goto loc_82238780;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,250
	ctx.r5.s64 = 250;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x82238778;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82238784
	goto loc_82238784;
loc_82238780:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82238784:
	// stw r4,3780(r31)
	REX_STORE_U32(r31.u32 + 3780, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x82238790;
	sub_821D3988(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x822f6280
	ctx.lr = 0x82238798;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822387e8
	if (ctx.cr0.eq) goto loc_822387E8;
	// lwz r11,3780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// addi r10,r10,12244
	ctx.r10.s64 = ctx.r10.s64 + 12244;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// addi r9,r9,-18072
	ctx.r9.s64 = ctx.r9.s64 + -18072;
	// stw r30,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// addi r8,r8,-13532
	ctx.r8.s64 = ctx.r8.s64 + -13532;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r8,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stb r30,28(r3)
	REX_STORE_U8(ctx.r3.u32 + 28, r30.u8);
	// stw r30,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r30.u32);
	// b 0x822387ec
	goto loc_822387EC;
loc_822387E8:
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_822387EC:
	// lwz r11,3780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82145710
	ctx.lr = 0x822387FC;
	sub_82145710(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r11,r11,-28760
	ctx.r11.s64 = ctx.r11.s64 + -28760;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,3784(r31)
	REX_STORE_U32(r31.u32 + 3784, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x8223881C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82238844
	if (ctx.cr0.eq) goto loc_82238844;
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
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
	// b 0x82238848
	goto loc_82238848;
loc_82238844:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82238848:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r5,r11,-18052
	ctx.r5.s64 = ctx.r11.s64 + -18052;
	// bl 0x8216be80
	ctx.lr = 0x82238858;
	sub_8216BE80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82246398) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13356
	ctx.r3.s64 = ctx.r11.s64 + -13356;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822466E0) {
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
	ctx.lr = 0x822466E8;
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 128);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821b2d80
	ctx.lr = 0x82246708;
	sub_821B2D80(ctx, base);
	// lis r28,-32106
	r28.s64 = -2104098816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,6152(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82246724;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822468fc
	if (ctx.cr0.eq) goto loc_822468FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224673C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822468fc
	if (ctx.cr0.eq) goto loc_822468FC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-15416
	ctx.r4.s64 = ctx.r11.s64 + -15416;
	// bl 0x82120600
	ctx.lr = 0x82246754;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x82246760;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r26,400(r1)
	REX_STORE_U32(ctx.r1.u32 + 400, r26.u32);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82246788;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82246798;
	sub_82120AC0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822468f4
	if (!ctx.cr6.eq) goto loc_822468F4;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822467AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822467ac
	if (!ctx.cr6.eq) goto loc_822467AC;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r29,r27,120
	r29.s64 = r27.s64 + 120;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82120c08
	ctx.lr = 0x822467D4;
	sub_82120C08(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bl 0x82125d00
	ctx.lr = 0x822467E4;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822468f4
	if (ctx.cr0.eq) goto loc_822468F4;
	// lwz r3,6152(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6152);
	// mr r31,r26
	r31.u64 = r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82246804;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x822468f4
	if (!ctx.cr0.gt) goto loc_822468F4;
loc_8224680C:
	// lwz r3,6152(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6152);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82246824;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82246838;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82125d00
	ctx.lr = 0x82246844;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82246868
	if (!ctx.cr0.eq) goto loc_82246868;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82246860;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224688c
	if (ctx.cr0.eq) goto loc_8224688C;
loc_82246868:
	// lwz r3,6152(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6152);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82246880;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8224680c
	if (ctx.cr6.lt) goto loc_8224680C;
	// b 0x822468f4
	goto loc_822468F4;
loc_8224688C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r26.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,116(r27)
	REX_STORE_U8(r27.u32 + 116, ctx.r11.u8);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216b6a8
	ctx.lr = 0x822468B4;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r11,-26948
	ctx.r5.s64 = ctx.r11.s64 + -26948;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216b6a8
	ctx.lr = 0x822468CC;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,15
	ctx.r6.s64 = 15;
	// addi r5,r11,-15404
	ctx.r5.s64 = ctx.r11.s64 + -15404;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216b6a8
	ctx.lr = 0x822468E4;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r11,-27304
	ctx.r3.s64 = ctx.r11.s64 + -27304;
	// bl 0x8216bc98
	ctx.lr = 0x822468F4;
	sub_8216BC98(ctx, base);
loc_822468F4:
	// stw r26,0(r25)
	REX_STORE_U32(r25.u32 + 0, r26.u32);
	// b 0x82246904
	goto loc_82246904;
loc_822468FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
loc_82246904:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82254BE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82254BE8;
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
	ctx.lr = 0x82254C04;
	sub_821B2D80(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6192(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82254C20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6192(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6192);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82254C38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82254C4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82254c80
	if (ctx.cr0.eq) goto loc_82254C80;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82254C68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82254c80
	if (!ctx.cr0.eq) goto loc_82254C80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822561d8
	ctx.lr = 0x82254C7C;
	sub_822561D8(ctx, base);
	// b 0x82254c9c
	goto loc_82254C9C;
loc_82254C80:
	// lwz r3,6192(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6192);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82254C9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82254C9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82258808) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82258d40
	sub_82258D40(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82259220) {
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
	ctx.lr = 0x82259228;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6212(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6212);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82259248;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lwz r3,6152(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82259260;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225927c
	if (ctx.cr0.eq) goto loc_8225927C;
	// lwz r3,6152(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225927C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225927C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r30,r11,1624
	r30.s64 = ctx.r11.s64 + 1624;
	// addi r4,r10,30288
	ctx.r4.s64 = ctx.r10.s64 + 30288;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x82259294;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,30308
	ctx.r4.s64 = ctx.r11.s64 + 30308;
	// bl 0x8215f670
	ctx.lr = 0x822592A0;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-26880
	ctx.r4.s64 = ctx.r11.s64 + -26880;
	// bl 0x8215fbf8
	ctx.lr = 0x822592AC;
	sub_8215FBF8(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r10,30636
	ctx.r4.s64 = ctx.r10.s64 + 30636;
	// lwz r3,6116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6116);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822592CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822592e4
	if (ctx.cr0.eq) goto loc_822592E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822592E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822592E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82262968
	ctx.lr = 0x822592EC;
	sub_82262968(ctx, base);
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822592fc
	if (ctx.cr6.eq) goto loc_822592FC;
	// bl 0x82262c10
	ctx.lr = 0x822592FC;
	sub_82262C10(ctx, base);
loc_822592FC:
	// li r28,0
	r28.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,164(r31)
	REX_STORE_U32(r31.u32 + 164, r28.u32);
	// bl 0x822626a8
	ctx.lr = 0x8225930C;
	sub_822626A8(ctx, base);
	// lis r27,-32106
	r27.s64 = -2104098816;
	// lwz r4,176(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lwz r3,6040(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82259328;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6040(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6040);
	// lwz r4,180(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 180);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82259340;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6040(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6040);
	// lwz r4,184(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82259358;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6040(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6040);
	// lwz r4,188(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82259370;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// lwz r3,6268(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6268);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225938C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822593A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// lwz r3,6068(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6068);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822593C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6156(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6156);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822593DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822593F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6152(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6152);
	// bl 0x82146418
	ctx.lr = 0x82259400;
	sub_82146418(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-27048
	ctx.r4.s64 = ctx.r11.s64 + -27048;
	// bl 0x8215f670
	ctx.lr = 0x82259410;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-9416
	ctx.r4.s64 = ctx.r11.s64 + -9416;
	// bl 0x8215f670
	ctx.lr = 0x8225941C;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82259424;
	sub_8215F0F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,8(r27)
	REX_STORE_U32(r27.u32 + 8, r28.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r10,-31468
	ctx.r4.s64 = ctx.r10.s64 + -31468;
	// bl 0x8215f670
	ctx.lr = 0x82259440;
	sub_8215F670(ctx, base);
	// bl 0x8215f0f0
	ctx.lr = 0x82259444;
	sub_8215F0F0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,16584
	ctx.r4.s64 = ctx.r11.s64 + 16584;
	// bl 0x8215f670
	ctx.lr = 0x82259454;
	sub_8215F670(ctx, base);
	// bl 0x8215f0f0
	ctx.lr = 0x82259458;
	sub_8215F0F0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,16492
	ctx.r4.s64 = ctx.r11.s64 + 16492;
	// bl 0x8215f670
	ctx.lr = 0x82259468;
	sub_8215F670(ctx, base);
	// bl 0x8215f0f0
	ctx.lr = 0x8225946C;
	sub_8215F0F0(ctx, base);
	// lwz r3,6152(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6152);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82259484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,172(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822594ac
	if (ctx.cr6.eq) goto loc_822594AC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,2972
	ctx.r11.s64 = ctx.r11.s64 + 2972;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x82208770
	ctx.lr = 0x822594A4;
	sub_82208770(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822594AC;
	sub_8269CE98(ctx, base);
loc_822594AC:
	// stw r28,172(r31)
	REX_STORE_U32(r31.u32 + 172, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8226E028) {
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
	ctx.lr = 0x8226E030;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r4,r11,-7928
	ctx.r4.s64 = ctx.r11.s64 + -7928;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x8215f338
	ctx.lr = 0x8226E048;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,-17164
	r29.s64 = ctx.r11.s64 + -17164;
	// addi r28,r10,-16680
	r28.s64 = ctx.r10.s64 + -16680;
loc_8226E060:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8226e084
	if (!ctx.cr6.eq) goto loc_8226E084;
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
	// b 0x8226e088
	goto loc_8226E088;
loc_8226E084:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8226E088:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8226e148
	if (!ctx.cr6.lt) goto loc_8226E148;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8226E09C;
	sub_8215F1B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x8226E0A4;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8226E0A8;
	sub_8215F990(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, ctx.xer);
	// bne cr6,0x8226e118
	if (!ctx.cr6.eq) goto loc_8226E118;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8226E0BC;
	sub_8215F1B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x8226E0C4;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8226e0e0
	if (!ctx.cr6.eq) goto loc_8226E0E0;
	// lwa r10,8(r3)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r3.u32 + 8));
loc_8226E0D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// b 0x8226e110
	goto loc_8226E110;
loc_8226E0E0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8226e0fc
	if (!ctx.cr6.eq) goto loc_8226E0FC;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x8226e0d4
	goto loc_8226E0D4;
loc_8226E0FC:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8226e10c
	if (!ctx.cr6.eq) goto loc_8226E10C;
	// ld r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// b 0x8226e0d4
	goto loc_8226E0D4;
loc_8226E10C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8226E110:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226e120
	if (!ctx.cr0.eq) goto loc_8226E120;
loc_8226E118:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x8226e060
	goto loc_8226E060;
loc_8226E120:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,284(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
	// b 0x8226e14c
	goto loc_8226E14C;
loc_8226E148:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226E14C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82275320) {
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
	ctx.lr = 0x82275328;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2ca4
	ctx.lr = 0x82275330;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// lwz r11,656(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 656);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lwz r10,128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82275368:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82275368
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82275368;
	// lbz r10,705(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 705);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8227542c
	if (ctx.cr0.eq) goto loc_8227542C;
	// lwz r30,488(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 488);
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8227542c
	if (!ctx.cr6.gt) goto loc_8227542C;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r26,r11,-25252
	r26.s64 = ctx.r11.s64 + -25252;
	// addi r25,r10,-25320
	r25.s64 = ctx.r10.s64 + -25320;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x822753bc
	if (ctx.cr6.gt) goto loc_822753BC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x822753BC;
	sub_821231D0(ctx, base);
loc_822753BC:
	// lwz r11,656(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 656);
	// lwz r10,156(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 156);
	// lwz r30,488(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 488);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r27,r11,464
	r27.s64 = ctx.r11.s64 + 464;
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822753ec
	if (ctx.cr6.gt) goto loc_822753EC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x822753EC;
	sub_821231D0(ctx, base);
loc_822753EC:
	// lwz r11,156(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 156);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x823fbd18
	ctx.lr = 0x82275404;
	sub_823FBD18(ctx, base);
	// ld r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// ld r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r10,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r10.u64);
	// b 0x82275460
	goto loc_82275460;
loc_8227542C:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r31,672
	ctx.r4.s64 = r31.s64 + 672;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823fbd18
	ctx.lr = 0x8227543C;
	sub_823FBD18(ctx, base);
	// ld r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// ld r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r11,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r11.u64);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
loc_82275460:
	// std r11,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r11.u64);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,688(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 688);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// lfs f13,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// lbz r11,816(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 816);
	// lfs f31,912(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 912);
	f31.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822754a4
	if (ctx.cr0.eq) goto loc_822754A4;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821264e8
	ctx.lr = 0x82275498;
	sub_821264E8(ctx, base);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// b 0x822754c4
	goto loc_822754C4;
loc_822754A4:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,788(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 788);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,784(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 784);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f1,f13,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f2,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// bl 0x8269d528
	ctx.lr = 0x822754C0;
	sub_8269D528(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_822754C4:
	// stfs f0,820(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 820, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,696(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 696);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lfs f29,236(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 236);
	f29.f64 = double(temp.f32);
	// lfs f1,820(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 820);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f31,f0,f29,f31
	f31.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, f31.f64)));
	// lfs f27,692(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 692);
	f27.f64 = double(temp.f32);
	// bl 0x821265f8
	ctx.lr = 0x822754E8;
	sub_821265F8(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x821265f8
	ctx.lr = 0x822754F8;
	sub_821265F8(ctx, base);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f12,124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f9,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f9,f27
	ctx.f9.f64 = double(float(ctx.f9.f64 * f27.f64));
	// lfs f10,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f12,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r3,656(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 656);
	// lfs f30,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f30.f64 = double(temp.f32);
	// lbz r9,816(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 816);
	// lfs f31,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	f31.f64 = double(temp.f32);
	// addi r6,r31,784
	ctx.r6.s64 = r31.s64 + 784;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r7,r31,832
	ctx.r7.s64 = r31.s64 + 832;
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * f27.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f9,f11
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,792(r31)
	REX_STORE_U64(r31.u32 + 792, ctx.r11.u64);
	// std r10,784(r31)
	REX_STORE_U64(r31.u32 + 784, ctx.r10.u64);
	// lwz r11,468(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 468);
	// beq 0x82275590
	if (ctx.cr0.eq) goto loc_82275590;
	// addi r10,r11,320
	ctx.r10.s64 = ctx.r11.s64 + 320;
	// ld r10,320(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 320);
	// std r10,832(r31)
	REX_STORE_U64(r31.u32 + 832, ctx.r10.u64);
	// ld r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 328);
	// b 0x82275630
	goto loc_82275630;
loc_82275590:
	// lfs f0,668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 668);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r11,320
	ctx.r5.s64 = ctx.r11.s64 + 320;
	// fmuls f0,f28,f0
	ctx.f0.f64 = double(float(f28.f64 * ctx.f0.f64));
	// ld r5,320(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 320);
	// ld r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 328);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r30,256
	ctx.r10.s64 = r30.s64 + 256;
	// lfs f13,840(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 840);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,832(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 832);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f11,836(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 836);
	ctx.f11.f64 = double(temp.f32);
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// std r5,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// fsubs f10,f31,f0
	ctx.f10.f64 = double(float(f31.f64 - ctx.f0.f64));
	// fcmpu cr6,f10,f30
	ctx.cr6.compare(ctx.f10.f64, f30.f64);
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
	// lfs f10,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// lfs f9,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// lfsx f7,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsel f0,f7,f0,f31
	ctx.f0.f64 = ctx.f7.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// fsubs f7,f31,f0
	ctx.f7.f64 = double(float(f31.f64 - ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r11,832(r31)
	REX_STORE_U64(r31.u32 + 832, ctx.r11.u64);
	// ld r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
loc_82275630:
	// std r11,840(r31)
	REX_STORE_U64(r31.u32 + 840, ctx.r11.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8224c840
	ctx.lr = 0x8227563C;
	sub_8224C840(ctx, base);
	// lfs f0,704(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 704);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// lfs f10,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f8,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r30,256
	ctx.r10.s64 = r30.s64 + 256;
	// lfs f7,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,288(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,292(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,180(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fadds f8,f7,f10
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f9,f6,f9
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,8(r28)
	REX_STORE_U64(r28.u32 + 8, ctx.r9.u64);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f11,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// std r11,0(r28)
	REX_STORE_U64(r28.u32 + 0, ctx.r11.u64);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f11,8(r28)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// lfs f11,828(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 828);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,712(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 712);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f10,f28,f10
	ctx.f10.f64 = double(float(f28.f64 / ctx.f10.f64));
	// fmadds f11,f10,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f11.f64)));
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, f30.f64);
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
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// rlwinm r9,r11,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// lfsx f11,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fnmsubs f13,f13,f12,f10
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f10.f64)));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f1,f11,f0,f13
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f1,828(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 828, temp.u32);
	// bl 0x82139c28
	ctx.lr = 0x8227570C;
	sub_82139C28(ctx, base);
	// lfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,708(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 708);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f30,f0,f29
	f30.f64 = double(float(ctx.f0.f64 * f29.f64));
	// bl 0x821d7c18
	ctx.lr = 0x82275764;
	sub_821D7C18(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x821a4ca0
	ctx.lr = 0x82275770;
	sub_821A4CA0(ctx, base);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// stfs f31,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r23.u32 + 0, temp.u32);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r24)
	REX_STORE_U64(r24.u32 + 0, ctx.r10.u64);
	// std r11,8(r24)
	REX_STORE_U64(r24.u32 + 8, ctx.r11.u64);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2cf0
	ctx.lr = 0x82275794;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_822A3350) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cbc
	ctx.lr = 0x822A3358;
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A3388;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U64(r29.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ld r8,8(r29)
	ctx.r8.u64 = REX_LOAD_U64(r29.u32 + 8);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// std r10,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f11.f64)));
	// ld r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// lfs f11,1096(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1096);
	ctx.f11.f64 = double(temp.f32);
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// std r9,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r9.u64);
	// fmadds f10,f13,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f10.f64)));
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x822a33e4
	if (!ctx.cr6.lt) goto loc_822A33E4;
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_822A33E4:
	// fmuls f10,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f10.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmadds f10,f13,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f10.f64)));
	// fsqrts f10,f10
	ctx.f10.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fmuls f31,f11,f0
	f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f30,f11,f13
	f30.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f29,f12,f11
	f29.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// bctrl 
	ctx.lr = 0x822A341C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmuls f11,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(f31.f64 * ctx.f1.f64));
	// lfs f0,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f30,f1
	ctx.f10.f64 = double(float(f30.f64 * ctx.f1.f64));
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f29,f1
	ctx.f9.f64 = double(float(f29.f64 * ctx.f1.f64));
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fadds f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-56(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822AAA28) {
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
	ctx.lr = 0x822AAA30;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r3,484(r1)
	REX_STORE_U32(ctx.r1.u32 + 484, ctx.r3.u32);
	// stw r6,508(r1)
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r7,516(r1)
	REX_STORE_U32(ctx.r1.u32 + 516, ctx.r7.u32);
	// beq cr6,0x822aac54
	if (ctx.cr6.eq) goto loc_822AAC54;
	// lbz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822aaa64
	if (!ctx.cr0.eq) goto loc_822AAA64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_822AAA64:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// bne cr6,0x822aaa78
	if (!ctx.cr6.eq) goto loc_822AAA78;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822AAA78:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r29,204(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// rotlwi r22,r4,0
	r22.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r30,204(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 204);
	// lwz r31,88(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r8,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// rotlwi r23,r5,0
	r23.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r4,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// addi r28,r11,16
	r28.s64 = ctx.r11.s64 + 16;
	// lwz r4,12(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// li r21,0
	r21.s64 = 0;
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r5,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// addi r6,r6,16592
	ctx.r6.s64 = ctx.r6.s64 + 16592;
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// ld r3,32(r11)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// addi r18,r5,6768
	r18.s64 = ctx.r5.s64 + 6768;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stw r21,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, r21.u32);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// stw r5,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// lfs f0,308(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// stfs f0,288(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// ld r6,24(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// ld r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// addi r27,r1,208
	r27.s64 = ctx.r1.s64 + 208;
	// ld r5,40(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// addi r26,r1,224
	r26.s64 = ctx.r1.s64 + 224;
	// ld r28,48(r11)
	r28.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// addi r24,r1,240
	r24.s64 = ctx.r1.s64 + 240;
	// ld r21,56(r11)
	r21.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// ld r20,32(r10)
	r20.u64 = REX_LOAD_U64(ctx.r10.u32 + 32);
	// ld r19,40(r10)
	r19.u64 = REX_LOAD_U64(ctx.r10.u32 + 40);
	// ld r17,48(r10)
	r17.u64 = REX_LOAD_U64(ctx.r10.u32 + 48);
	// ld r16,56(r10)
	r16.u64 = REX_LOAD_U64(ctx.r10.u32 + 56);
	// ld r15,64(r10)
	r15.u64 = REX_LOAD_U64(ctx.r10.u32 + 64);
	// ld r14,72(r10)
	r14.u64 = REX_LOAD_U64(ctx.r10.u32 + 72);
	// ld r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 16);
	// ld r31,24(r31)
	r31.u64 = REX_LOAD_U64(r31.u32 + 24);
	// lwz r25,88(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// rotlwi r30,r4,0
	r30.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// std r3,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r29,508(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f0,796(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 796);
	ctx.f0.f64 = double(temp.f32);
	// ld r30,64(r11)
	r30.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// ld r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// std r6,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lbz r7,16(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 16);
	// lwz r6,20(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 20);
	// stw r18,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r18.u32);
	// stw r4,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// stw r3,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// std r31,8(r25)
	REX_STORE_U64(r25.u32 + 8, r31.u64);
	// std r10,0(r25)
	REX_STORE_U64(r25.u32 + 0, ctx.r10.u64);
	// std r20,0(r23)
	REX_STORE_U64(r23.u32 + 0, r20.u64);
	// std r19,8(r23)
	REX_STORE_U64(r23.u32 + 8, r19.u64);
	// std r17,0(r22)
	REX_STORE_U64(r22.u32 + 0, r17.u64);
	// std r16,8(r22)
	REX_STORE_U64(r22.u32 + 8, r16.u64);
	// std r8,0(r26)
	REX_STORE_U64(r26.u32 + 0, ctx.r8.u64);
	// ld r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r5,8(r24)
	REX_STORE_U64(r24.u32 + 8, ctx.r5.u64);
	// std r15,0(r27)
	REX_STORE_U64(r27.u32 + 0, r15.u64);
	// std r14,8(r27)
	REX_STORE_U64(r27.u32 + 8, r14.u64);
	// std r8,8(r26)
	REX_STORE_U64(r26.u32 + 8, ctx.r8.u64);
	// ld r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// std r8,0(r24)
	REX_STORE_U64(r24.u32 + 0, ctx.r8.u64);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// std r28,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, r28.u64);
	// std r21,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, r21.u64);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// std r30,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, r30.u64);
	// std r11,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// bl 0x822b6428
	ctx.lr = 0x822AAC08;
	sub_822B6428(ctx, base);
	// lwz r11,484(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// lbz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822aac54
	if (ctx.cr0.eq) goto loc_822AAC54;
	// lwz r11,516(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,792(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 792);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822aac54
	if (ctx.cr6.eq) goto loc_822AAC54;
	// lwz r10,784(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 784);
	// lwz r9,144(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822aac48
	if (ctx.cr6.eq) goto loc_822AAC48;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// addi r4,r11,80
	ctx.r4.s64 = ctx.r11.s64 + 80;
	// b 0x822aac50
	goto loc_822AAC50;
loc_822AAC48:
	// addi r5,r11,80
	ctx.r5.s64 = ctx.r11.s64 + 80;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
loc_822AAC50:
	// bl 0x822ad788
	ctx.lr = 0x822AAC54;
	sub_822AD788(ctx, base);
loc_822AAC54:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_822BDF78) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,96(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822bdf98
	if (!ctx.cr6.eq) goto loc_822BDF98;
loc_822BDF88:
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
loc_822BDF98:
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bdf88
	if (ctx.cr0.eq) goto loc_822BDF88;
	// lfs f13,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f10,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,100(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fneg f8,f8
	ctx.f8.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f0,f9,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x822bdf88
	if (!ctx.cr6.lt) goto loc_822BDF88;
	// b 0x822bba40
	sub_822BBA40(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822C1C00) {
	REX_FUNC_PROLOGUE();
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm. r11,r10,16,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c1c14
	if (!ctx.cr0.eq) goto loc_822C1C14;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822c1c2c
	goto loc_822C1C2C;
loc_822C1C14:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lis r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x822c1c28
	if (!ctx.cr6.eq) goto loc_822C1C28;
	// ori r11,r11,32769
	ctx.r11.u64 = ctx.r11.u64 | 32769;
	// b 0x822c1c2c
	goto loc_822C1C2C;
loc_822C1C28:
	// ori r11,r11,49155
	ctx.r11.u64 = ctx.r11.u64 | 49155;
loc_822C1C2C:
	// li r12,1
	ctx.r12.s64 = 1;
	// stw r11,10684(r3)
	REX_STORE_U32(ctx.r3.u32 + 10684, ctx.r11.u32);
	// stw r10,10368(r3)
	REX_STORE_U32(ctx.r3.u32 + 10368, ctx.r10.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// rldicr r12,r12,57,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// or r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 | ctx.r12.u64;
	// std r9,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r8,32(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// addi r9,r11,7968
	ctx.r9.s64 = ctx.r11.s64 + 7968;
	// rldicr r12,r12,36,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// addi r4,r10,7944
	ctx.r4.s64 = ctx.r10.s64 + 7944;
	// or r8,r8,r12
	ctx.r8.u64 = ctx.r8.u64 | ctx.r12.u64;
	// std r8,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r8.u64);
	// lwz r11,7968(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7968);
	// stw r11,12852(r3)
	REX_STORE_U32(ctx.r3.u32 + 12852, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,12856(r3)
	REX_STORE_U32(ctx.r3.u32 + 12856, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,12860(r3)
	REX_STORE_U32(ctx.r3.u32 + 12860, ctx.r11.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,12864(r3)
	REX_STORE_U32(ctx.r3.u32 + 12864, ctx.r11.u32);
	// b 0x822c45e0
	sub_822C45E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822C2BF8) {
	REX_FUNC_PROLOGUE();
	// stb r4,10498(r3)
	REX_STORE_U8(ctx.r3.u32 + 10498, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2F40) {
	REX_FUNC_PROLOGUE();
	// lwz r3,12040(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12040);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C30E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
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

DEFINE_REX_FUNC(sub_822C3408) {
	REX_FUNC_PROLOGUE();
	// lhz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 10544);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C37F8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwinm r3,r11,11,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3A88) {
	REX_FUNC_PROLOGUE();
	// stw r4,13808(r3)
	REX_STORE_U32(ctx.r3.u32 + 13808, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3EF0) {
	REX_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,12178(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 12178);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C4470) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1172);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C55D8) {
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
	// lwz r11,10888(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10888);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c55fc
	if (ctx.cr6.eq) goto loc_822C55FC;
	// bl 0x823eea88
	ctx.lr = 0x822C55FC;
	sub_823EEA88(ctx, base);
loc_822C55FC:
	// bl 0x823eea88
	ctx.lr = 0x822C5600;
	sub_823EEA88(ctx, base);
	// stw r3,10888(r31)
	REX_STORE_U32(r31.u32 + 10888, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_822C8A18) {
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
	ctx.lr = 0x822C8A20;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,768
	ctx.r9.s64 = 768;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// lis r8,-16359
	ctx.r8.s64 = -1072103424;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// li r7,24
	ctx.r7.s64 = 24;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// addi r30,r6,14276
	r30.s64 = ctx.r6.s64 + 14276;
	// li r5,96
	ctx.r5.s64 = 96;
	// addi r4,r30,36
	ctx.r4.s64 = r30.s64 + 36;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// stwu r7,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	r29.u32 = ea;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// bl 0x826a1e70
	ctx.lr = 0x822C8A78;
	sub_826A1E70(ctx, base);
	// addi r11,r29,96
	ctx.r11.s64 = r29.s64 + 96;
	// lis r10,-16374
	ctx.r10.s64 = -1073086464;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r10,11008
	ctx.r10.u64 = ctx.r10.u64 | 11008;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r8,9
	ctx.r8.s64 = 9;
	// li r5,36
	ctx.r5.s64 = 36;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826a1e70
	ctx.lr = 0x822C8AAC;
	sub_826A1E70(ctx, base);
	// addi r11,r30,36
	ctx.r11.s64 = r30.s64 + 36;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,14
	ctx.r9.u64 = ctx.r9.u64 | 14;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,8448
	ctx.r8.u64 = ctx.r8.u64 | 8448;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,8851
	ctx.r5.s64 = 8851;
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lis r30,0
	r30.s64 = 0;
	// ori r3,r3,8708
	ctx.r3.u64 = ctx.r3.u64 | 8708;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r22,8
	r22.s64 = 524288;
	// lis r29,1
	r29.s64 = 65536;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// li r28,768
	r28.s64 = 768;
	// li r27,8978
	r27.s64 = 8978;
	// ori r30,r30,65535
	r30.u64 = r30.u64 | 65535;
	// li r26,8205
	r26.s64 = 8205;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// li r25,8704
	r25.s64 = 8704;
	// li r24,0
	r24.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r23,8832
	r23.s64 = 8832;
	// li r21,8962
	r21.s64 = 8962;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// li r6,8712
	ctx.r6.s64 = 8712;
	// ori r22,r22,8
	r22.u64 = r22.u64 | 8;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// li r9,8707
	ctx.r9.s64 = 8707;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// li r5,4
	ctx.r5.s64 = 4;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// li r4,8452
	ctx.r4.s64 = 8452;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r20,2
	r20.s64 = 131072;
	// li r19,0
	r19.s64 = 0;
	// ori r20,r20,8320
	r20.u64 = r20.u64 | 8320;
	// li r18,0
	r18.s64 = 0;
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r11.u32 = ea;
	// lis r17,16
	r17.s64 = 1048576;
	// ori r29,r17,16
	r29.u64 = r17.u64 | 16;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r11.u32 = ea;
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r11.u32 = ea;
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r11.u32 = ea;
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r22,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r11.u32 = ea;
	// stwu r21,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r20,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r20.u32);
	ctx.r11.u32 = ea;
	// stwu r19,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r19.u32);
	ctx.r11.u32 = ea;
	// stwu r18,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r18.u32);
	ctx.r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_822D53D0) {
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
	ctx.lr = 0x822D53D8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,10941(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 10941);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r26,15112(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 15112);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r25,15108(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 15108);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d5450
	if (ctx.cr0.eq) goto loc_822D5450;
	// lwz r3,21744(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 21744);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d55d8
	if (ctx.cr6.eq) goto loc_822D55D8;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r9,8192
	ctx.r9.s64 = 536870912;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r5,r10,8
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// addis r4,r11,-16384
	ctx.r4.s64 = ctx.r11.s64 + -1073741824;
	// blt cr6,0x822d5424
	if (ctx.cr6.lt) goto loc_822D5424;
	// addis r4,r11,-16640
	ctx.r4.s64 = ctx.r11.s64 + -1090519040;
loc_822D5424:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D5438;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,21744(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 21744);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D544C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822d55d8
	goto loc_822D55D8;
loc_822D5450:
	// lwz r4,10956(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 10956);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x822d51f0
	ctx.lr = 0x822D5464;
	sub_822D51F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,21744(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 21744);
	// lis r27,8192
	r27.s64 = 536870912;
	// clrlwi r5,r11,8
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFFFF;
	// lis r28,16384
	r28.s64 = 1073741824;
	// lis r30,16640
	r30.s64 = 1090519040;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// beq cr6,0x822d54c0
	if (ctx.cr6.eq) goto loc_822D54C0;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d54c0
	if (!ctx.cr6.eq) goto loc_822D54C0;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// subf r4,r28,r31
	ctx.r4.u64 = r31.u64 - r28.u64;
	// blt cr6,0x822d54ac
	if (ctx.cr6.lt) goto loc_822D54AC;
	// subf r4,r30,r31
	ctx.r4.u64 = r31.u64 - r30.u64;
loc_822D54AC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D54C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D54C0:
	// lwz r11,23568(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 23568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d551c
	if (ctx.cr6.eq) goto loc_822D551C;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// bge cr6,0x822d54dc
	if (!ctx.cr6.lt) goto loc_822D54DC;
	// subf r30,r28,r31
	r30.u64 = r31.u64 - r28.u64;
	// b 0x822d54e0
	goto loc_822D54E0;
loc_822D54DC:
	// subf r30,r30,r31
	r30.u64 = r31.u64 - r30.u64;
loc_822D54E0:
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,1
	ctx.r3.s64 = 1;
	// bctrl 
	ctx.lr = 0x822D54FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822d551c
	if (ctx.cr6.eq) goto loc_822D551C;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r10,512
	ctx.r11.s64 = ctx.r10.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r31,r11,r9
	r31.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_822D551C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x822d5580
	if (ctx.cr6.eq) goto loc_822D5580;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// ori r10,r10,16128
	ctx.r10.u64 = ctx.r10.u64 | 16128;
	// stwx r10,r11,r25
	REX_STORE_U32(ctx.r11.u32 + r25.u32, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & r26.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stwx r31,r10,r25
	REX_STORE_U32(ctx.r10.u32 + r25.u32, r31.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & r26.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stwx r10,r9,r25
	REX_STORE_U32(ctx.r9.u32 + r25.u32, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & r26.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_822D5580:
	// stw r11,10956(r29)
	REX_STORE_U32(r29.u32 + 10956, ctx.r11.u32);
	// sync 
	// lis r10,32712
	ctx.r10.s64 = 2143813632;
	// stw r11,1812(r10)
	REX_MM_STORE_U32(ctx.r10.u32 + 1812, ctx.r11.u32);
	// eieio 
	// sync 
	// lwz r3,21744(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 21744);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d55b4
	if (ctx.cr6.eq) goto loc_822D55B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D55B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D55B4:
	// lwz r11,23568(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 23568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d55d8
	if (ctx.cr6.eq) goto loc_822D55D8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bctrl 
	ctx.lr = 0x822D55D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D55D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_822E3E18) {
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
	// addi r31,r3,23572
	r31.s64 = ctx.r3.s64 + 23572;
	// lwz r3,24164(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e3e60
	if (ctx.cr6.eq) goto loc_822E3E60;
	// lwz r11,612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 612);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e3e58
	if (!ctx.cr0.eq) goto loc_822E3E58;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82793a34
	ctx.lr = 0x822E3E54;
	__imp__MmFreePhysicalMemory(ctx, base);
	// b 0x822e3e60
	goto loc_822E3E60;
loc_822E3E58:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x823f0350
	ctx.lr = 0x822E3E60;
	sub_823F0350(ctx, base);
loc_822E3E60:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e3e98
	if (ctx.cr6.eq) goto loc_822E3E98;
	// lwz r11,612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 612);
	// srawi r11,r11,30
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 30;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822e3e8c
	if (ctx.cr6.lt) goto loc_822E3E8C;
	// bne cr6,0x822e3e98
	if (!ctx.cr6.eq) goto loc_822E3E98;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x823f0350
	ctx.lr = 0x822E3E88;
	sub_823F0350(ctx, base);
	// b 0x822e3e98
	goto loc_822E3E98;
loc_822E3E8C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82793a34
	ctx.lr = 0x822E3E98;
	__imp__MmFreePhysicalMemory(ctx, base);
loc_822E3E98:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e3ed4
	if (ctx.cr6.eq) goto loc_822E3ED4;
	// lwz r11,612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 612);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r11,r11,30
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 30;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822e3ec8
	if (ctx.cr6.lt) goto loc_822E3EC8;
	// bne cr6,0x822e3ed4
	if (!ctx.cr6.eq) goto loc_822E3ED4;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x823f0350
	ctx.lr = 0x822E3EC4;
	sub_823F0350(ctx, base);
	// b 0x822e3ed4
	goto loc_822E3ED4;
loc_822E3EC8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82793a34
	ctx.lr = 0x822E3ED4;
	__imp__MmFreePhysicalMemory(ctx, base);
loc_822E3ED4:
	// li r5,620
	ctx.r5.s64 = 620;
	// lwz r30,616(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 616);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a2e60
	ctx.lr = 0x822E3EE8;
	sub_826A2E60(ctx, base);
	// li r11,41
	ctx.r11.s64 = 41;
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// stw r30,616(r31)
	REX_STORE_U32(r31.u32 + 616, r30.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822E3F00:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822e3f00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E3F00;
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

DEFINE_REX_FUNC(sub_822EA020) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822EA028;
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
	// bl 0x822e8790
	ctx.lr = 0x822EA03C;
	sub_822E8790(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,14156
	ctx.r11.s64 = ctx.r11.s64 + 14156;
	// addi r10,r10,-28804
	ctx.r10.s64 = ctx.r10.s64 + -28804;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r30,r31,204
	r30.s64 = r31.s64 + 204;
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x822EA068;
	sub_82120AC0(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822EA070;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822ea0a0
	if (ctx.cr0.eq) goto loc_822EA0A0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-29788
	ctx.r4.s64 = ctx.r11.s64 + -29788;
	// bl 0x82120600
	ctx.lr = 0x822EA088;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x8219e000
	ctx.lr = 0x822EA09C;
	sub_8219E000(ctx, base);
	// b 0x822ea0a4
	goto loc_822EA0A4;
loc_822EA0A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822EA0A4:
	// stw r3,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x822EA0B8;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ea0d0
	if (ctx.cr0.eq) goto loc_822EA0D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x822EA0D0;
	sub_82120AC0(ctx, base);
loc_822EA0D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822EE210) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EE9A0) {
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
	// lwz r3,112(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r11,r11,15192
	ctx.r11.s64 = ctx.r11.s64 + 15192;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8269d6a0
	ctx.lr = 0x822EE9C8;
	sub_8269D6A0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-14036
	ctx.r11.s64 = ctx.r11.s64 + -14036;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x821d5aa8
	ctx.lr = 0x822EE9DC;
	sub_821D5AA8(ctx, base);
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

DEFINE_REX_FUNC(sub_822EFC40) {
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
	// lfs f0,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// lfs f12,104(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,92(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f11,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// addi r11,r3,88
	ctx.r11.s64 = ctx.r3.s64 + 88;
	// stfs f11,28(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f0,100(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// stfs f12,56(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f0,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f0,100(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f11,72(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f12,76(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f13,80(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f13,84(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// bne cr6,0x822efd20
	if (!ctx.cr6.eq) goto loc_822EFD20;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,15300
	ctx.r4.s64 = ctx.r11.s64 + 15300;
	// addi r3,r10,15340
	ctx.r3.s64 = ctx.r10.s64 + 15340;
	// li r5,211
	ctx.r5.s64 = 211;
	// bl 0x821231d0
	ctx.lr = 0x822EFD20;
	sub_821231D0(ctx, base);
loc_822EFD20:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x826b4a00
	ctx.lr = 0x822EFD2C;
	sub_826B4A00(ctx, base);
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

DEFINE_REX_FUNC(sub_822F7020) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lwz r11,560(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 560);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f7034
	if (!ctx.cr6.eq) goto loc_822F7034;
	// b 0x8269f008
	sub_8269F008(ctx, base);
	return;
loc_822F7034:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,560(r10)
	REX_STORE_U32(ctx.r10.u32 + 560, ctx.r11.u32);
	// addi r11,r9,-10864
	ctx.r11.s64 = ctx.r9.s64 + -10864;
	// stwx r3,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F7FC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822F7FC8;
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
	// beq cr6,0x822f8030
	if (ctx.cr6.eq) goto loc_822F8030;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822f8030
	if (!ctx.cr6.gt) goto loc_822F8030;
	// li r31,0
	r31.s64 = 0;
loc_822F7FF4:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f8018
	if (ctx.cr6.eq) goto loc_822F8018;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822f7fc0
	ctx.lr = 0x822F8010;
	sub_822F7FC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822f8048
	if (!ctx.cr0.eq) goto loc_822F8048;
loc_822F8018:
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
	// blt cr6,0x822f7ff4
	if (ctx.cr6.lt) goto loc_822F7FF4;
loc_822F8030:
	// lwz r3,312(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 312);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F8048;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F8048:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822FBF10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822FBF18;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x822fbbf8
	ctx.lr = 0x822FBF30;
	sub_822FBBF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fbf58
	if (!ctx.cr0.eq) goto loc_822FBF58;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FBF58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822FBF58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822FD3A8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822fd3d4
	if (!ctx.cr6.eq) goto loc_822FD3D4;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x822fd470
	goto loc_822FD470;
loc_822FD3D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 312);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FD3F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fd470
	if (!ctx.cr0.eq) goto loc_822FD470;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822fd434
	if (!ctx.cr0.eq) goto loc_822FD434;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f9fa8
	ctx.lr = 0x822FD418;
	sub_822F9FA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fd470
	if (!ctx.cr0.eq) goto loc_822FD470;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x822fd438
	goto loc_822FD438;
loc_822FD434:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
loc_822FD438:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822fd458
	if (ctx.cr6.eq) goto loc_822FD458;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fd458
	if (ctx.cr6.eq) goto loc_822FD458;
	// lfs f13,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_822FD458:
	// lfs f13,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f12,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
loc_822FD470:
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

DEFINE_REX_FUNC(sub_82302EC8) {
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
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82302ef4
	if (!ctx.cr6.eq) goto loc_82302EF4;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82302f2c
	goto loc_82302F2C;
loc_82302EF4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82301520
	ctx.lr = 0x82302EFC;
	sub_82301520(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82302f2c
	if (!ctx.cr0.eq) goto loc_82302F2C;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r4,r30,24
	ctx.r4.s64 = r30.s64 + 24;
	// bl 0x826a1e70
	ctx.lr = 0x82302F18;
	sub_826A1E70(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82302f28
	if (ctx.cr6.eq) goto loc_82302F28;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82302F28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82302F2C:
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

DEFINE_REX_FUNC(sub_82308570) {
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
	// bl 0x822f7130
	ctx.lr = 0x82308594;
	sub_822F7130(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823085d4
	if (ctx.cr0.eq) goto loc_823085D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f7130
	ctx.lr = 0x823085A4;
	sub_822F7130(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82308298
	ctx.lr = 0x823085B8;
	sub_82308298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823085d4
	if (!ctx.cr0.eq) goto loc_823085D4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x823085d4
	if (!ctx.cr6.eq) goto loc_823085D4;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x823085f8
	goto loc_823085F8;
loc_823085D4:
	// lwz r9,56(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 56);
	// addi r10,r30,52
	ctx.r10.s64 = r30.s64 + 52;
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r11,56(r30)
	REX_STORE_U32(r30.u32 + 56, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_823085F8:
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

DEFINE_REX_FUNC(sub_8230D2D0) {
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
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// bl 0x8230c590
	ctx.lr = 0x8230D2E8;
	sub_8230C590(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230d2f8
	if (!ctx.cr0.eq) goto loc_8230D2F8;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8230d0e0
	ctx.lr = 0x8230D2F8;
	sub_8230D0E0(ctx, base);
loc_8230D2F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8230F408) {
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
	ctx.lr = 0x8230F410;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230f550
	if (ctx.cr6.eq) goto loc_8230F550;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8230f550
	if (ctx.cr6.eq) goto loc_8230F550;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230f550
	if (ctx.cr6.eq) goto loc_8230F550;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x8230f45c
	goto loc_8230F45C;
loc_8230F450:
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x8230f464
	if (ctx.cr6.eq) goto loc_8230F464;
	// lbzu r11,1(r29)
	ea = 1 + r29.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r29.u32 = ea;
loc_8230F45C:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230f450
	if (!ctx.cr0.eq) goto loc_8230F450;
loc_8230F464:
	// lwz r11,68(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 68);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8230F46C:
	// lwz r11,68(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x8230f480
	if (!ctx.cr6.eq) goto loc_8230F480;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230F480:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8230f548
	if (ctx.cr6.eq) goto loc_8230F548;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// bne cr6,0x8230f498
	if (!ctx.cr6.eq) goto loc_8230F498;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230F498:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230f4f0
	if (ctx.cr6.eq) goto loc_8230F4F0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// bne cr6,0x8230f4b4
	if (!ctx.cr6.eq) goto loc_8230F4B4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230F4B4:
	// subf r5,r30,r29
	ctx.r5.u64 = r29.u64 - r30.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823316d8
	ctx.lr = 0x8230F4C4;
	sub_823316D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230f4f0
	if (!ctx.cr0.eq) goto loc_8230F4F0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// bne cr6,0x8230f4dc
	if (!ctx.cr6.eq) goto loc_8230F4DC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230F4DC:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8230f4f8
	if (ctx.cr0.eq) goto loc_8230F4F8;
loc_8230F4F0:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x8230f46c
	goto loc_8230F46C;
loc_8230F4F8:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8230f530
	if (ctx.cr0.eq) goto loc_8230F530;
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x8230f514
	if (!ctx.cr6.eq) goto loc_8230F514;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230F514:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r29,1
	ctx.r4.s64 = r29.s64 + 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230F52C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8230f554
	goto loc_8230F554;
loc_8230F530:
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// bne cr6,0x8230f53c
	if (!ctx.cr6.eq) goto loc_8230F53C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230F53C:
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8230f554
	goto loc_8230F554;
loc_8230F548:
	// li r3,91
	ctx.r3.s64 = 91;
	// b 0x8230f554
	goto loc_8230F554;
loc_8230F550:
	// li r3,37
	ctx.r3.s64 = 37;
loc_8230F554:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82315F40) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82315f7c
	if (!ctx.cr6.eq) goto loc_82315F7C;
	// ld r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x82315f78
	if (ctx.cr6.lt) goto loc_82315F78;
	// ld r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x82315f74
	if (!ctx.cr6.lt) goto loc_82315F74;
	// subf r11,r10,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r10.u64;
	// b 0x82315f78
	goto loc_82315F78;
loc_82315F74:
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_82315F78:
	// std r11,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
loc_82315F7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823172D0) {
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
	// addi r11,r11,5936
	ctx.r11.s64 = ctx.r11.s64 + 5936;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x823172fc
	if (ctx.cr0.eq) goto loc_823172FC;
	// bl 0x8269ce98
	ctx.lr = 0x823172FC;
	sub_8269CE98(ctx, base);
loc_823172FC:
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

DEFINE_REX_FUNC(sub_82318C80) {
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
	// lis r31,-32126
	r31.s64 = -2105409536;
	// lwz r3,-10784(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -10784);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82318cd8
	if (ctx.cr6.eq) goto loc_82318CD8;
	// bl 0x82318c10
	ctx.lr = 0x82318CA4;
	sub_82318C10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82318cdc
	if (!ctx.cr0.eq) goto loc_82318CDC;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r4,-10784(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + -10784);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,6576
	ctx.r5.s64 = ctx.r10.s64 + 6576;
	// li r6,1064
	ctx.r6.s64 = 1064;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82318CD0;
	sub_82330D00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-10784(r31)
	REX_STORE_U32(r31.u32 + -10784, ctx.r11.u32);
loc_82318CD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82318CDC:
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

DEFINE_REX_FUNC(sub_8231D260) {
	REX_FUNC_PROLOGUE();
	// stw r4,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8231D390) {
	REX_FUNC_PROLOGUE();
	// stw r4,160(r3)
	REX_STORE_U32(ctx.r3.u32 + 160, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8231D3C0) {
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
	ctx.lr = 0x8231D3C8;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8231d3f0
	if (ctx.cr6.eq) goto loc_8231D3F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_8231D3F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332540
	ctx.lr = 0x8231D3F8;
	sub_82332540(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231D410;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231d470
	if (!ctx.cr0.eq) goto loc_8231D470;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231D430;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231d470
	if (!ctx.cr0.eq) goto loc_8231D470;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8231d450
	if (ctx.cr6.eq) goto loc_8231D450;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,192
	ctx.r5.s64 = 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8231D450;
	sub_826A1E70(ctx, base);
loc_8231D450:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8231d46c
	if (ctx.cr6.eq) goto loc_8231D46C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332188
	ctx.lr = 0x8231D468;
	sub_82332188(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_8231D46C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231D470:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82324620) {
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
	ctx.lr = 0x82324628;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,12(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r28,r3,12
	r28.s64 = ctx.r3.s64 + 12;
	// b 0x8232469c
	goto loc_8232469C;
loc_8232463C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// bne cr6,0x8232464c
	if (!ctx.cr6.eq) goto loc_8232464C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232464C:
	// lwz r31,52(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// addi r30,r11,52
	r30.s64 = ctx.r11.s64 + 52;
	// b 0x82324690
	goto loc_82324690;
loc_82324658:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x82324668
	if (!ctx.cr6.eq) goto loc_82324668;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82324668:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lfs f1,260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 260);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823126b0
	ctx.lr = 0x82324674;
	sub_823126B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8232468c
	if (ctx.cr0.eq) goto loc_8232468C;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x8232468c
	if (ctx.cr6.eq) goto loc_8232468C;
	// cmpwi cr6,r3,82
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 82, ctx.xer);
	// bne cr6,0x823246a8
	if (!ctx.cr6.eq) goto loc_823246A8;
loc_8232468C:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82324690:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82324658
	if (!ctx.cr6.eq) goto loc_82324658;
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_8232469C:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bne cr6,0x8232463c
	if (!ctx.cr6.eq) goto loc_8232463C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823246A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82329110) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82329010
	ctx.lr = 0x82329124;
	sub_82329010(ctx, base);
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

DEFINE_REX_FUNC(sub_82329820) {
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
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82329854
	if (ctx.cr6.eq) goto loc_82329854;
	// lwz r6,156(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232984C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82329858
	if (!ctx.cr0.eq) goto loc_82329858;
loc_82329854:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82329858:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232B7E0) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8232b800
	if (!ctx.cr6.eq) goto loc_8232B800;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8232b824
	goto loc_8232B824;
loc_8232B800:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8232b820
	if (!ctx.cr6.eq) goto loc_8232B820;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82313038
	ctx.lr = 0x8232B810;
	sub_82313038(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8232b824
	goto loc_8232B824;
loc_8232B820:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8232B824:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232D440) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232D748) {
	REX_FUNC_PROLOGUE();
	// ld r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 56);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232DE80) {
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
	ctx.lr = 0x8232DE88;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r28,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, r28.u8);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8232df2c
	if (!ctx.cr6.gt) goto loc_8232DF2C;
loc_8232DEAC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// bge 0x8232ded0
	if (!ctx.cr0.lt) goto loc_8232DED0;
	// subfic r10,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8232ded8
	goto loc_8232DED8;
loc_8232DED0:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_8232DED8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r28,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232defc
	if (ctx.cr6.eq) goto loc_8232DEFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82316128
	ctx.lr = 0x8232DEF4;
	sub_82316128(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232df00
	if (!ctx.cr0.eq) goto loc_8232DF00;
loc_8232DEFC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8232DF00:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232df30
	if (!ctx.cr6.eq) goto loc_8232DF30;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8232df1c
	if (ctx.cr0.eq) goto loc_8232DF1C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r29)
	REX_STORE_U8(r29.u32 + 0, ctx.r11.u8);
loc_8232DF1C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8232deac
	if (ctx.cr6.lt) goto loc_8232DEAC;
loc_8232DF2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232DF30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823345D0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823345e0
	if (!ctx.cr6.eq) goto loc_823345E0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_823345E0:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823345fc
	if (ctx.cr6.lt) goto loc_823345FC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x823345fc
	if (!ctx.cr6.lt) goto loc_823345FC;
	// addi r3,r3,22444
	ctx.r3.s64 = ctx.r3.s64 + 22444;
	// b 0x8235b8c8
	sub_8235B8C8(ctx, base);
	return;
loc_823345FC:
	// li r3,73
	ctx.r3.s64 = 73;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823382C0) {
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
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8233830c
	if (ctx.cr6.eq) goto loc_8233830C;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823382f4
	if (ctx.cr6.eq) goto loc_823382F4;
	// bl 0x8233e7e0
	ctx.lr = 0x823382F4;
	sub_8233E7E0(ctx, base);
loc_823382F4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82358020
	ctx.lr = 0x823382FC;
	sub_82358020(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233830c
	if (ctx.cr6.eq) goto loc_8233830C;
	// bl 0x8233e820
	ctx.lr = 0x8233830C;
	sub_8233E820(ctx, base);
loc_8233830C:
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

DEFINE_REX_FUNC(sub_8233ECB0) {
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
	ctx.lr = 0x8233ECC0;
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
	// bl 0x8234aac0
	ctx.lr = 0x8233ECEC;
	sub_8234AAC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233ed24
	if (!ctx.cr6.eq) goto loc_8233ED24;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// fmr f8,f24
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = f24.f64;
	// fmr f7,f25
	ctx.f7.f64 = f25.f64;
	// stb r11,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
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
	// bl 0x8234c1b8
	ctx.lr = 0x8233ED24;
	sub_8234C1B8(ctx, base);
loc_8233ED24:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2ce4
	ctx.lr = 0x8233ED30;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82340D98) {
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
	ctx.lr = 0x82340DC0;
	sub_82340718(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82340dd4
	if (ctx.cr6.eq) goto loc_82340DD4;
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82340DD4:
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

DEFINE_REX_FUNC(sub_82342558) {
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
	ctx.lr = 0x82342560;
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r25,r24
	r25.u64 = r24.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// blt cr6,0x82342b24
	if (ctx.cr6.lt) goto loc_82342B24;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82342b24
	if (!ctx.cr6.lt) goto loc_82342B24;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823425b4
	if (ctx.cr6.eq) goto loc_823425B4;
	// lwz r11,152(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823425b4
	if (ctx.cr6.eq) goto loc_823425B4;
	// li r3,74
	ctx.r3.s64 = 74;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x826a1cf0
	return;
loc_823425B4:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823425cc
	if (ctx.cr6.eq) goto loc_823425CC;
	// li r3,75
	ctx.r3.s64 = 75;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x826a1cf0
	return;
loc_823425CC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x823426a0
	if (ctx.cr6.eq) goto loc_823426A0;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823426a0
	if (ctx.cr6.eq) goto loc_823426A0;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823425F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r30,r3,24
	r30.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8234260C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82342624
	if (ctx.cr6.eq) goto loc_82342624;
loc_82342618:
	// li r3,76
	ctx.r3.s64 = 76;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x826a1cf0
	return;
loc_82342624:
	// lwz r11,32(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82342618
	if (!ctx.cr6.eq) goto loc_82342618;
	// lwz r10,28(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 28);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82342658
	if (ctx.cr6.eq) goto loc_82342658;
loc_8234264C:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x826a1cf0
	return;
loc_82342658:
	// lwz r10,72(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 72);
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8234264c
	if (!ctx.cr6.eq) goto loc_8234264C;
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823426a0
	if (!ctx.cr6.eq) goto loc_823426A0;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82342688;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823426a0
	if (!ctx.cr6.eq) goto loc_823426A0;
	// li r3,51
	ctx.r3.s64 = 51;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x826a1cf0
	return;
loc_823426A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823426B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234271c
	if (ctx.cr6.eq) goto loc_8234271C;
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823426dc
	if (ctx.cr6.eq) goto loc_823426DC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x823426f4
	goto loc_823426F4;
loc_823426DC:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823426f4
	if (ctx.cr6.eq) goto loc_823426F4;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_823426F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234271c
	if (ctx.cr6.eq) goto loc_8234271C;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234271c
	if (ctx.cr6.eq) goto loc_8234271C;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234271c
	if (!ctx.cr6.eq) goto loc_8234271C;
	// li r30,1
	r30.s64 = 1;
loc_8234271C:
	// clrlwi r22,r30,24
	r22.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82342734
	if (ctx.cr6.eq) goto loc_82342734;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lwz r3,23376(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 23376);
	// bl 0x8233e7e0
	ctx.lr = 0x82342734;
	sub_8233E7E0(ctx, base);
loc_82342734:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82342758
	if (ctx.cr6.eq) goto loc_82342758;
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82342758
	if (!ctx.cr6.eq) goto loc_82342758;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82342758:
	// clrlwi r23,r11,24
	r23.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82342770
	if (ctx.cr6.eq) goto loc_82342770;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lwz r3,4348(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4348);
	// bl 0x8233e7e0
	ctx.lr = 0x82342770;
	sub_8233E7E0(ctx, base);
loc_82342770:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r29,r11
	r30.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823427c4
	if (ctx.cr6.eq) goto loc_823427C4;
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823427c0
	if (ctx.cr6.eq) goto loc_823427C0;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bne cr6,0x823427a4
	if (!ctx.cr6.eq) goto loc_823427A4;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_823427A4:
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823427B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r25,368(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// b 0x823427c4
	goto loc_823427C4;
loc_823427C0:
	// lwz r25,44(r30)
	r25.u64 = REX_LOAD_U32(r30.u32 + 44);
loc_823427C4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82342880
	if (ctx.cr6.eq) goto loc_82342880;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823427E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82342834
	if (!ctx.cr6.eq) goto loc_82342834;
	// lwz r11,172(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 172);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82342834
	if (!ctx.cr6.gt) goto loc_82342834;
	// addi r11,r27,176
	ctx.r11.s64 = r27.s64 + 176;
loc_82342800:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 68);
	// stw r8,68(r9)
	REX_STORE_U32(ctx.r9.u32 + 68, ctx.r8.u32);
	// beq cr6,0x82342820
	if (ctx.cr6.eq) goto loc_82342820;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,168(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 168);
	// stw r8,168(r9)
	REX_STORE_U32(ctx.r9.u32 + 168, ctx.r8.u32);
loc_82342820:
	// lwz r9,172(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 172);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82342800
	if (ctx.cr6.lt) goto loc_82342800;
loc_82342834:
	// lwz r11,140(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 140);
	// stw r26,156(r27)
	REX_STORE_U32(r27.u32 + 156, r26.u32);
	// stw r31,152(r27)
	REX_STORE_U32(r27.u32 + 152, r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234287c
	if (ctx.cr6.eq) goto loc_8234287C;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bne cr6,0x8234285c
	if (!ctx.cr6.eq) goto loc_8234285C;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_8234285C:
	// lwz r11,68(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 68);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82342874;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r28,368(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// b 0x82342880
	goto loc_82342880;
loc_8234287C:
	// lwz r28,44(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 44);
loc_82342880:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823428d8
	if (ctx.cr6.eq) goto loc_823428D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234289C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823428c0
	if (!ctx.cr6.eq) goto loc_823428C0;
	// lwz r11,152(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 152);
	// lwz r10,68(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r9,68(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823428c0
	if (!ctx.cr6.eq) goto loc_823428C0;
	// stw r24,68(r30)
	REX_STORE_U32(r30.u32 + 68, r24.u32);
loc_823428C0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// stw r24,152(r30)
	REX_STORE_U32(r30.u32 + 152, r24.u32);
	// bne cr6,0x823428ec
	if (!ctx.cr6.eq) goto loc_823428EC;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823428e8
	goto loc_823428E8;
loc_823428D8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x823428ec
	if (ctx.cr6.eq) goto loc_823428EC;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_823428E8:
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
loc_823428EC:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// stwx r27,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, r27.u32);
	// lwz r8,164(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82342968
	if (ctx.cr6.eq) goto loc_82342968;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234291c
	if (ctx.cr6.eq) goto loc_8234291C;
	// lwz r11,204(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234292c
	if (!ctx.cr6.eq) goto loc_8234292C;
loc_8234291C:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// subf r10,r25,r28
	ctx.r10.u64 = r28.u64 - r25.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
loc_8234292C:
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82342968
	if (!ctx.cr6.gt) goto loc_82342968;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_8234293C:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r26
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r26.s32, ctx.xer);
	// bne cr6,0x82342954
	if (!ctx.cr6.eq) goto loc_82342954;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
loc_82342954:
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234293c
	if (ctx.cr6.lt) goto loc_8234293C;
loc_82342968:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r24,52(r31)
	REX_STORE_U32(r31.u32 + 52, r24.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82342988;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823429b8
	if (ctx.cr6.eq) goto loc_823429B8;
	// lwz r3,288(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 288);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823429B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82342abc
	goto loc_82342ABC;
loc_823429B8:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82342abc
	if (ctx.cr6.eq) goto loc_82342ABC;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82342abc
	if (ctx.cr6.lt) goto loc_82342ABC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x82342abc
	if (ctx.cr6.gt) goto loc_82342ABC;
	// cmplw cr6,r25,r28
	ctx.cr6.compare<uint32_t>(r25.u32, r28.u32, ctx.xer);
	// beq cr6,0x82342abc
	if (ctx.cr6.eq) goto loc_82342ABC;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82342abc
	if (!ctx.cr6.gt) goto loc_82342ABC;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_823429FC:
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x8234d568
	ctx.lr = 0x82342A14;
	sub_8234D568(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x82342aa4
	if (!ctx.cr6.eq) goto loc_82342AA4;
	// lwz r10,192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 192);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r11,308(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 308);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x8234ea28
	ctx.lr = 0x82342A44;
	sub_8234EA28(ctx, base);
	// lwz r9,192(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 192);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,308(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 308);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x8234d618
	ctx.lr = 0x82342A5C;
	sub_8234D618(ctx, base);
	// lwz r8,192(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,308(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x8234d618
	ctx.lr = 0x82342A74;
	sub_8234D618(ctx, base);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r7,r26
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r26.u32, ctx.xer);
	// ble cr6,0x82342aa4
	if (!ctx.cr6.gt) goto loc_82342AA4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r10,192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 192);
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - r25.u64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + r28.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r11,308(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 308);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x8234f680
	ctx.lr = 0x82342AA4;
	sub_8234F680(ctx, base);
loc_82342AA4:
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,424
	r30.s64 = r30.s64 + 424;
	// lwz r10,304(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823429fc
	if (ctx.cr6.lt) goto loc_823429FC;
loc_82342ABC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82342ad0
	if (ctx.cr6.eq) goto loc_82342AD0;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lwz r3,4348(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4348);
	// bl 0x8233e820
	ctx.lr = 0x82342AD0;
	sub_8233E820(ctx, base);
loc_82342AD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82342AE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82342b18
	if (ctx.cr6.eq) goto loc_82342B18;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82342b04
	if (ctx.cr6.eq) goto loc_82342B04;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
loc_82342B04:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82342b18
	if (ctx.cr6.eq) goto loc_82342B18;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lwz r3,23376(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 23376);
	// bl 0x8233e820
	ctx.lr = 0x82342B18;
	sub_8233E820(ctx, base);
loc_82342B18:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x826a1cf0
	return;
loc_82342B24:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8236E588) {
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
	// addi r31,r11,9016
	r31.s64 = ctx.r11.s64 + 9016;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8236E5B0;
	sub_823EF5F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,16456
	ctx.r4.s64 = ctx.r10.s64 + 16456;
	// bl 0x82331480
	ctx.lr = 0x8236E5C0;
	sub_82331480(ctx, base);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r3,-32201
	ctx.r3.s64 = -2110324736;
	// addi r9,r11,8200
	ctx.r9.s64 = ctx.r11.s64 + 8200;
	// lis r10,-32201
	ctx.r10.s64 = -2110324736;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// addi r10,r10,-6824
	ctx.r10.s64 = ctx.r10.s64 + -6824;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// addi r9,r3,-7712
	ctx.r9.s64 = ctx.r3.s64 + -7712;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lis r4,-32201
	ctx.r4.s64 = -2110324736;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lis r5,-32201
	ctx.r5.s64 = -2110324736;
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// addi r11,r4,-7592
	ctx.r11.s64 = ctx.r4.s64 + -7592;
	// addi r10,r5,-7568
	ctx.r10.s64 = ctx.r5.s64 + -7568;
	// li r9,17
	ctx.r9.s64 = 17;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lis r6,-32201
	ctx.r6.s64 = -2110324736;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// lis r7,-32201
	ctx.r7.s64 = -2110324736;
	// stw r9,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// lis r8,-32201
	ctx.r8.s64 = -2110324736;
	// addi r11,r6,-7544
	ctx.r11.s64 = ctx.r6.s64 + -7544;
	// addi r10,r7,-7472
	ctx.r10.s64 = ctx.r7.s64 + -7472;
	// addi r9,r8,-6800
	ctx.r9.s64 = ctx.r8.s64 + -6800;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r9,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,608
	ctx.r9.s64 = 608;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_82375288) {
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
	// li r5,116
	ctx.r5.s64 = 116;
	// addi r30,r31,10968
	r30.s64 = r31.s64 + 10968;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823752B4;
	sub_823EF5F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r4,-32201
	ctx.r4.s64 = -2110324736;
	// addi r11,r11,17684
	ctx.r11.s64 = ctx.r11.s64 + 17684;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r11,10968(r31)
	REX_STORE_U32(r31.u32 + 10968, ctx.r11.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// addi r11,r4,21104
	ctx.r11.s64 = ctx.r4.s64 + 21104;
	// stw r9,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// lis r5,-32195
	ctx.r5.s64 = -2109931520;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lis r6,-32201
	ctx.r6.s64 = -2110324736;
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lis r7,-32201
	ctx.r7.s64 = -2110324736;
	// addi r10,r5,6488
	ctx.r10.s64 = ctx.r5.s64 + 6488;
	// addi r9,r6,20080
	ctx.r9.s64 = ctx.r6.s64 + 20080;
	// addi r11,r7,20216
	ctx.r11.s64 = ctx.r7.s64 + 20216;
	// stw r10,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// lis r8,-32195
	ctx.r8.s64 = -2109931520;
	// stw r9,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r9.u32);
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r8,6488
	ctx.r10.s64 = ctx.r8.s64 + 6488;
	// li r11,564
	ctx.r11.s64 = 564;
	// stw r9,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r9.u32);
	// stw r10,88(r30)
	REX_STORE_U32(r30.u32 + 88, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8237D420) {
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
	ctx.lr = 0x8237D428;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,16(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r28,r3,16
	r28.s64 = ctx.r3.s64 + 16;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// beq cr6,0x8237d4f8
	if (ctx.cr6.eq) goto loc_8237D4F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f30.f64 = double(temp.f32);
	// lfs f31,19092(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 19092);
	f31.f64 = double(temp.f32);
loc_8237D458:
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237d4ec
	if (ctx.cr6.eq) goto loc_8237D4EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237c9b8
	ctx.lr = 0x8237D470;
	sub_8237C9B8(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lfs f0,496(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 496);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f13,11712(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 11712);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,496(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 496, temp.u32);
	// bl 0x8237cdc0
	ctx.lr = 0x8237D490;
	sub_8237CDC0(ctx, base);
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r8,624(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 624);
	// lfs f11,552(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 552);
	ctx.f11.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f10,11712(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 11712);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,552(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 552, temp.u32);
	// lwz r6,696(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 696);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmsubs f1,f6,f31,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, f31.f64, -f30.f64)));
	// bl 0x8234be00
	ctx.lr = 0x8237D4D4;
	sub_8234BE00(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lfs f5,448(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 448);
	ctx.f5.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f4,11712(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 11712);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f3,448(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 448, temp.u32);
loc_8237D4EC:
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bne cr6,0x8237d458
	if (!ctx.cr6.eq) goto loc_8237D458;
loc_8237D4F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8238A550) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8238A558;
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
	// bne cr6,0x8238a588
	if (!ctx.cr6.eq) goto loc_8238A588;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c8da8
	ctx.lr = 0x8238A574;
	sub_823C8DA8(ctx, base);
	// stw r30,2184(r31)
	REX_STORE_U32(r31.u32 + 2184, r30.u32);
	// stw r30,2200(r31)
	REX_STORE_U32(r31.u32 + 2200, r30.u32);
loc_8238A57C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_8238A588:
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// bne cr6,0x8238a608
	if (!ctx.cr6.eq) goto loc_8238A608;
	// lwz r11,1260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1260);
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8238a57c
	if (ctx.cr6.eq) goto loc_8238A57C;
	// bge cr6,0x8238a5b4
	if (!ctx.cr6.lt) goto loc_8238A5B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c8da8
	ctx.lr = 0x8238A5B0;
	sub_823C8DA8(ctx, base);
	// li r29,1
	r29.s64 = 1;
loc_8238A5B4:
	// lwz r11,1260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1260);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bge cr6,0x8238a5d8
	if (!ctx.cr6.lt) goto loc_8238A5D8;
loc_8238A5C0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238a140
	ctx.lr = 0x8238A5CC;
	sub_8238A140(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1260);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// blt cr6,0x8238a5c0
	if (ctx.cr6.lt) goto loc_8238A5C0;
loc_8238A5D8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a5fc
	if (ctx.cr6.eq) goto loc_8238A5FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r30,2164(r31)
	r30.u64 = REX_LOAD_U8(r31.u32 + 2164);
	// lbz r29,2165(r31)
	r29.u64 = REX_LOAD_U8(r31.u32 + 2165);
	// bl 0x823c86b8
	ctx.lr = 0x8238A5F4;
	sub_823C86B8(ctx, base);
	// stb r30,2164(r31)
	REX_STORE_U8(r31.u32 + 2164, r30.u8);
	// stb r29,2165(r31)
	REX_STORE_U8(r31.u32 + 2165, r29.u8);
loc_8238A5FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_8238A608:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823928F8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82392908
	if (!ctx.cr6.eq) goto loc_82392908;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82392908:
	// b 0x82392738
	sub_82392738(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82392928) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82392938
	if (!ctx.cr6.eq) goto loc_82392938;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82392938:
	// b 0x82392860
	sub_82392860(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82393168) {
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
	ctx.lr = 0x82393170;
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lis r30,-32129
	r30.s64 = -2105606144;
	// li r16,0
	r16.s64 = 0;
	// li r17,2
	r17.s64 = 2;
	// stb r16,264(r3)
	REX_STORE_U8(ctx.r3.u32 + 264, r16.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r16,265(r3)
	REX_STORE_U8(ctx.r3.u32 + 265, r16.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,1012(r30)
	REX_STORE_U32(r30.u32 + 1012, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r16,252(r3)
	REX_STORE_U32(ctx.r3.u32 + 252, r16.u32);
	// mr r15,r16
	r15.u64 = r16.u64;
	// stw r16,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r16.u32);
	// mr r29,r16
	r29.u64 = r16.u64;
	// stw r16,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r16.u32);
	// stw r17,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, r17.u32);
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x823931BC;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823937d0
	if (!ctx.cr6.eq) goto loc_823937D0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82340718
	ctx.lr = 0x823931DC;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823937d0
	if (!ctx.cr6.eq) goto loc_823937D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,20088
	ctx.r4.s64 = ctx.r11.s64 + 20088;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x823931F8;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239320c
	if (ctx.cr6.eq) goto loc_8239320C;
loc_82393200:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x826a1cd0
	return;
loc_8239320C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82340718
	ctx.lr = 0x82393224;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823937d0
	if (!ctx.cr6.eq) goto loc_823937D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r14,84(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,20080
	ctx.r4.s64 = ctx.r11.s64 + 20080;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82331620
	ctx.lr = 0x82393244;
	sub_82331620(ctx, base);
	// li r18,1
	r18.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82393258
	if (!ctx.cr6.eq) goto loc_82393258;
	// stb r18,264(r31)
	REX_STORE_U8(r31.u32 + 264, r18.u8);
	// b 0x82393274
	goto loc_82393274;
loc_82393258:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,20072
	ctx.r4.s64 = ctx.r11.s64 + 20072;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82331620
	ctx.lr = 0x8239326C;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82393200
	if (!ctx.cr6.eq) goto loc_82393200;
loc_82393274:
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,20004
	ctx.r5.s64 = ctx.r10.s64 + 20004;
	// li r6,204
	ctx.r6.s64 = 204;
	// li r4,296
	ctx.r4.s64 = 296;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82393294;
	sub_82330E40(ctx, base);
	// stw r3,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823932ac
	if (!ctx.cr6.eq) goto loc_823932AC;
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x826a1cd0
	return;
loc_823932AC:
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// addi r4,r3,268
	ctx.r4.s64 = ctx.r3.s64 + 268;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823932C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823937d0
	if (!ctx.cr6.eq) goto loc_823937D0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r19,r31,188
	r19.s64 = r31.s64 + 188;
	// li r30,12
	r30.s64 = 12;
	// li r28,264
	r28.s64 = 264;
	// li r20,3
	r20.s64 = 3;
	// li r21,4
	r21.s64 = 4;
	// addi r27,r11,20056
	r27.s64 = ctx.r11.s64 + 20056;
	// addi r26,r10,20064
	r26.s64 = ctx.r10.s64 + 20064;
	// addi r25,r9,20048
	r25.s64 = ctx.r9.s64 + 20048;
	// addi r24,r8,20040
	r24.s64 = ctx.r8.s64 + 20040;
	// addi r23,r7,23024
	r23.s64 = ctx.r7.s64 + 23024;
	// addi r22,r6,20032
	r22.s64 = ctx.r6.s64 + 20032;
loc_8239331C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82340e38
	ctx.lr = 0x8239332C;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823937d0
	if (!ctx.cr6.eq) goto loc_823937D0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82340718
	ctx.lr = 0x8239334C;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823937d0
	if (!ctx.cr6.eq) goto loc_823937D0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x82393364;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82393540
	if (!ctx.cr6.eq) goto loc_82393540;
	// lbz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 264);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823933d8
	if (ctx.cr6.eq) goto loc_823933D8;
	// li r6,279
	ctx.r6.s64 = 279;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82340718
	ctx.lr = 0x82393390;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823937d0
	if (!ctx.cr6.eq) goto loc_823937D0;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,146
	ctx.r3.s64 = ctx.r1.s64 + 146;
	// bl 0x82331620
	ctx.lr = 0x823933A8;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823933b8
	if (!ctx.cr6.eq) goto loc_823933B8;
	// stb r16,265(r31)
	REX_STORE_U8(r31.u32 + 265, r16.u8);
	// b 0x823933ec
	goto loc_823933EC;
loc_823933B8:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,146
	ctx.r3.s64 = ctx.r1.s64 + 146;
	// bl 0x82331620
	ctx.lr = 0x823933C8;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82393200
	if (!ctx.cr6.eq) goto loc_82393200;
	// stb r18,265(r31)
	REX_STORE_U8(r31.u32 + 265, r18.u8);
	// b 0x823933ec
	goto loc_823933EC;
loc_823933D8:
	// li r6,18
	ctx.r6.s64 = 18;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82340718
	ctx.lr = 0x823933E4;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823937d0
	if (!ctx.cr6.eq) goto loc_823937D0;
loc_823933EC:
	// lbz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239349c
	if (ctx.cr6.eq) goto loc_8239349C;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82392da8
	ctx.lr = 0x82393400;
	sub_82392DA8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r11,r28
	REX_STORE_U32(ctx.r11.u32 + r28.u32, ctx.f0.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 134);
	// extsh r29,r10
	r29.s64 = ctx.r10.s16;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r29,24
	ctx.cr6.compare<int32_t>(r29.s32, 24, ctx.xer);
	// bgt cr6,0x8239347c
	if (ctx.cr6.gt) goto loc_8239347C;
	// beq cr6,0x82393464
	if (ctx.cr6.eq) goto loc_82393464;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(r29.s32, 8, ctx.xer);
	// beq cr6,0x8239344c
	if (ctx.cr6.eq) goto loc_8239344C;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(r29.s32, 16, ctx.xer);
	// bne cr6,0x82393200
	if (!ctx.cr6.eq) goto loc_82393200;
	// stw r17,256(r11)
	REX_STORE_U32(ctx.r11.u32 + 256, r17.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lhz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 128);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r9,260(r10)
	REX_STORE_U32(ctx.r10.u32 + 260, ctx.r9.u32);
	// b 0x82393610
	goto loc_82393610;
loc_8239344C:
	// stw r18,256(r11)
	REX_STORE_U32(ctx.r11.u32 + 256, r18.u32);
	// lhz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 128);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r9,260(r10)
	REX_STORE_U32(ctx.r10.u32 + 260, ctx.r9.u32);
	// b 0x82393610
	goto loc_82393610;
loc_82393464:
	// stw r20,256(r11)
	REX_STORE_U32(ctx.r11.u32 + 256, r20.u32);
	// lhz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 128);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r9,260(r10)
	REX_STORE_U32(ctx.r10.u32 + 260, ctx.r9.u32);
	// b 0x82393610
	goto loc_82393610;
loc_8239347C:
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(r29.s32, 32, ctx.xer);
	// bne cr6,0x82393200
	if (!ctx.cr6.eq) goto loc_82393200;
	// stw r21,256(r11)
	REX_STORE_U32(ctx.r11.u32 + 256, r21.u32);
	// lhz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 128);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r9,260(r10)
	REX_STORE_U32(ctx.r10.u32 + 260, ctx.r9.u32);
	// b 0x82393610
	goto loc_82393610;
loc_8239349C:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82392da8
	ctx.lr = 0x823934A4;
	sub_82392DA8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r11,r28
	REX_STORE_U32(ctx.r11.u32 + r28.u32, ctx.f0.u32);
	// lhz r10,102(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// extsh r29,r10
	r29.s64 = ctx.r10.s16;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r29,24
	ctx.cr6.compare<int32_t>(r29.s32, 24, ctx.xer);
	// bgt cr6,0x82393520
	if (ctx.cr6.gt) goto loc_82393520;
	// beq cr6,0x82393508
	if (ctx.cr6.eq) goto loc_82393508;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(r29.s32, 8, ctx.xer);
	// beq cr6,0x823934f0
	if (ctx.cr6.eq) goto loc_823934F0;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(r29.s32, 16, ctx.xer);
	// bne cr6,0x82393200
	if (!ctx.cr6.eq) goto loc_82393200;
	// stw r17,256(r11)
	REX_STORE_U32(ctx.r11.u32 + 256, r17.u32);
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r9,260(r10)
	REX_STORE_U32(ctx.r10.u32 + 260, ctx.r9.u32);
	// b 0x82393610
	goto loc_82393610;
loc_823934F0:
	// stw r18,256(r11)
	REX_STORE_U32(ctx.r11.u32 + 256, r18.u32);
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r9,260(r10)
	REX_STORE_U32(ctx.r10.u32 + 260, ctx.r9.u32);
	// b 0x82393610
	goto loc_82393610;
loc_82393508:
	// stw r20,256(r11)
	REX_STORE_U32(ctx.r11.u32 + 256, r20.u32);
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r9,260(r10)
	REX_STORE_U32(ctx.r10.u32 + 260, ctx.r9.u32);
	// b 0x82393610
	goto loc_82393610;
loc_82393520:
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(r29.s32, 32, ctx.xer);
	// bne cr6,0x82393200
	if (!ctx.cr6.eq) goto loc_82393200;
	// stw r21,256(r11)
	REX_STORE_U32(ctx.r11.u32 + 256, r21.u32);
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r9,260(r10)
	REX_STORE_U32(ctx.r10.u32 + 260, ctx.r9.u32);
	// b 0x82393610
	goto loc_82393610;
loc_82393540:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x82393550;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823935c4
	if (!ctx.cr6.eq) goto loc_823935C4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x82340718
	ctx.lr = 0x82393570;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823937d0
	if (!ctx.cr6.eq) goto loc_823937D0;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823935a8
	if (!ctx.cr6.eq) goto loc_823935A8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,268(r10)
	REX_STORE_U32(ctx.r10.u32 + 268, ctx.r9.u32);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340ff0
	ctx.lr = 0x823935A0;
	sub_82340FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823937d0
	if (!ctx.cr6.eq) goto loc_823937D0;
loc_823935A8:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r10,392(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 392);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82393610
	if (!ctx.cr6.eq) goto loc_82393610;
	// mr r15,r18
	r15.u64 = r18.u64;
	// b 0x82393610
	goto loc_82393610;
loc_823935C4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x823935D4;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82393600
	if (!ctx.cr6.eq) goto loc_82393600;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82340718
	ctx.lr = 0x823935F4;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823937d0
	if (!ctx.cr6.eq) goto loc_823937D0;
	// b 0x82393610
	goto loc_82393610;
loc_82393600:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x82393610;
	sub_82331620(ctx, base);
loc_82393610:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + ctx.r11.u64;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// addi r30,r10,8
	r30.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8239362c
	if (ctx.cr6.eq) goto loc_8239362C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8239362C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82393650
	if (ctx.cr6.lt) goto loc_82393650;
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(r30.u32, r14.u32, ctx.xer);
	// bge cr6,0x82393650
	if (!ctx.cr6.lt) goto loc_82393650;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82393650
	if (ctx.cr6.eq) goto loc_82393650;
	// clrlwi r11,r15,24
	ctx.r11.u64 = r15.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239331c
	if (ctx.cr6.eq) goto loc_8239331C;
loc_82393650:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8239366c
	if (!ctx.cr6.eq) goto loc_8239366C;
	// li r3,19
	ctx.r3.s64 = 19;
	// stw r16,0(r19)
	REX_STORE_U32(r19.u32 + 0, r16.u32);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x826a1cd0
	return;
loc_8239366C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r8,260(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// lwz r9,256(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// lwz r10,268(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82393690
	if (!ctx.cr6.eq) goto loc_82393690;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x826a1cd0
	return;
loc_82393690:
	// cmplwi cr6,r9,11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 11, ctx.xer);
	// bgt cr6,0x82393200
	if (ctx.cr6.gt) goto loc_82393200;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,14000
	ctx.r12.s64 = ctx.r12.s64 + 14000;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_82393718;
	case 1:
		goto loc_823936E0;
	case 2:
		goto loc_823936E8;
	case 3:
		goto loc_823936F0;
	case 4:
		goto loc_823936F8;
	case 5:
		goto loc_823936F8;
	case 6:
		goto loc_82393718;
	case 7:
		goto loc_82393718;
	case 8:
		goto loc_82393718;
	case 9:
		goto loc_82393718;
	case 10:
		goto loc_82393718;
	case 11:
		goto loc_82393718;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823936E0:
	// li r9,8
	ctx.r9.s64 = 8;
	// b 0x823936fc
	goto loc_823936FC;
loc_823936E8:
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x823936fc
	goto loc_823936FC;
loc_823936F0:
	// li r9,24
	ctx.r9.s64 = 24;
	// b 0x823936fc
	goto loc_823936FC;
loc_823936F8:
	// li r9,32
	ctx.r9.s64 = 32;
loc_823936FC:
	// rldicl r10,r10,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 3) & 0x7FFFFFFFF;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// rldicr r10,r10,0,60
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFFFFFFFF8;
	// tdllei r9,0
	if (ctx.r9.s64 == 0ll || ctx.r9.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 ? ctx.r10.u64 / ctx.r9.u64 : 0;
	// stw r7,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r7.u32);
	// b 0x823937a0
	goto loc_823937A0;
loc_82393718:
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,14128
	ctx.r12.s64 = ctx.r12.s64 + 14128;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_8239379C;
	case 1:
		goto loc_82393200;
	case 2:
		goto loc_82393200;
	case 3:
		goto loc_82393200;
	case 4:
		goto loc_82393200;
	case 5:
		goto loc_82393200;
	case 6:
		goto loc_82393760;
	case 7:
		goto loc_82393770;
	case 8:
		goto loc_82393784;
	case 9:
		goto loc_82393794;
	case 10:
		goto loc_82393794;
	case 11:
		goto loc_82393794;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82393760:
	// mulli r10,r10,14
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(14));
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r9,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r9.u32);
	// b 0x823937a0
	goto loc_823937A0;
loc_82393770:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// li r9,36
	ctx.r9.s64 = 36;
	// divwu r7,r10,r9
	ctx.r7.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// stw r7,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r7.u32);
	// b 0x823937a0
	goto loc_823937A0;
loc_82393784:
	// mulli r10,r10,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// rlwinm r9,r10,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r9,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r9.u32);
	// b 0x823937a0
	goto loc_823937A0;
loc_82393794:
	// stw r10,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// b 0x823937b0
	goto loc_823937B0;
loc_8239379C:
	// stw r16,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, r16.u32);
loc_823937A0:
	// lwz r10,272(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r10,r8
	ctx.r9.u64 = uint32_t(ctx.r8.u32 ? ctx.r10.u32 / ctx.r8.u32 : 0);
	// stw r9,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r9.u32);
loc_823937B0:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// mullw r9,r10,r29
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// stw r7,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r7.u32);
	// stw r16,28(r31)
	REX_STORE_U32(r31.u32 + 28, r16.u32);
loc_823937D0:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_823C8AB8) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1068
	ctx.r3.s64 = ctx.r11.s64 + 1068;
	// bl 0x823513f0
	ctx.lr = 0x823C8ADC;
	sub_823513F0(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823c8b08
	if (!ctx.cr6.eq) goto loc_823C8B08;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bne cr6,0x823c8afc
	if (!ctx.cr6.eq) goto loc_823C8AFC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823C8AFC:
	// lwz r11,180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823C8B08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823C8B08:
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

DEFINE_REX_FUNC(sub_823C8FB8) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,21112
	ctx.r9.s64 = ctx.r11.s64 + 21112;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x823c8fec
	if (ctx.cr6.eq) goto loc_823C8FEC;
	// bl 0x8269ce98
	ctx.lr = 0x823C8FE8;
	sub_8269CE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823C8FEC:
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

DEFINE_REX_FUNC(sub_823CA560) {
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
	ctx.lr = 0x823CA568;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x823ca5a8
	if (ctx.cr6.eq) goto loc_823CA5A8;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf4
	return;
loc_823CA5A8:
	// lwz r11,300(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ca5c0
	if (ctx.cr6.eq) goto loc_823CA5C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf4
	return;
loc_823CA5C0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823ca778
	if (ctx.cr6.eq) goto loc_823CA778;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x823ca778
	if (ctx.cr6.eq) goto loc_823CA778;
	// lwz r23,284(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x823ca778
	if (ctx.cr6.eq) goto loc_823CA778;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823ca5fc
	if (ctx.cr6.eq) goto loc_823CA5FC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823ca778
	if (ctx.cr6.eq) goto loc_823CA778;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x823ca778
	if (ctx.cr6.eq) goto loc_823CA778;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x823ca778
	if (ctx.cr6.eq) goto loc_823CA778;
loc_823CA5FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r3,r11,3524
	ctx.r3.s64 = ctx.r11.s64 + 3524;
	// bl 0x823e0510
	ctx.lr = 0x823CA608;
	sub_823E0510(ctx, base);
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r4,-32194
	ctx.r4.s64 = -2109865984;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r7,r10,-2288
	ctx.r7.s64 = ctx.r10.s64 + -2288;
	// addi r10,r4,-11096
	ctx.r10.s64 = ctx.r4.s64 + -11096;
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// lis r8,-32194
	ctx.r8.s64 = -2109865984;
	// addi r9,r11,-4856
	ctx.r9.s64 = ctx.r11.s64 + -4856;
	// addi r5,r8,-4856
	ctx.r5.s64 = ctx.r8.s64 + -4856;
	// lis r6,-32194
	ctx.r6.s64 = -2109865984;
	// lis r8,-32195
	ctx.r8.s64 = -2109931520;
	// addi r11,r6,-4856
	ctx.r11.s64 = ctx.r6.s64 + -4856;
	// addi r6,r8,-24384
	ctx.r6.s64 = ctx.r8.s64 + -24384;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r9,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r7,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r7.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r5,40(r8)
	REX_STORE_U32(ctx.r8.u32 + 40, ctx.r5.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,44(r7)
	REX_STORE_U32(ctx.r7.u32 + 44, ctx.r11.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,48(r6)
	REX_STORE_U32(ctx.r6.u32 + 48, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// ld r5,3524(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 3524);
	// ld r6,3532(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 3532);
	// ld r7,3540(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 3540);
	// ld r8,3548(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 3548);
	// ld r9,3556(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 3556);
	// ld r10,3564(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 3564);
	// ld r11,3572(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 3572);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x823dca00
	ctx.lr = 0x823CA698;
	sub_823DCA00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ca6b8
	if (!ctx.cr6.eq) goto loc_823CA6B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf4
	return;
loc_823CA6B8:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,276(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,292(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r29,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, r29.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r28,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, r28.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r27,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, r27.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r26,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, r26.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r25,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, r25.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r9,24(r5)
	REX_STORE_U32(ctx.r5.u32 + 24, ctx.r9.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r23,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, r23.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r7,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r7.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,236(r9)
	REX_STORE_U32(ctx.r9.u32 + 236, ctx.r11.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,232(r7)
	REX_STORE_U32(ctx.r7.u32 + 232, ctx.r11.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// std r11,240(r6)
	REX_STORE_U64(ctx.r6.u32 + 240, ctx.r11.u64);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,248(r5)
	REX_STORE_U32(ctx.r5.u32 + 248, ctx.r11.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,3520(r4)
	REX_STORE_U32(ctx.r4.u32 + 3520, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r7,24(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// stw r7,3616(r9)
	REX_STORE_U32(ctx.r9.u32 + 3616, ctx.r7.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,3624(r6)
	REX_STORE_U32(ctx.r6.u32 + 3624, ctx.r11.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r8,3620(r5)
	REX_STORE_U32(ctx.r5.u32 + 3620, ctx.r8.u32);
	// bl 0x823c9110
	ctx.lr = 0x823CA760;
	sub_823C9110(ctx, base);
	// addic r4,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// li r11,3
	ctx.r11.s64 = 3;
	// subfe r10,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf4
	return;
loc_823CA778:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_823D59F8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c88
	ctx.lr = 0x823D5A00;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// mr r17,r7
	r17.u64 = ctx.r7.u64;
	// mr r16,r8
	r16.u64 = ctx.r8.u64;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r9,256
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 256, ctx.xer);
	// beq cr6,0x823d5a2c
	if (ctx.cr6.eq) goto loc_823D5A2C;
	// li r3,-104
	ctx.r3.s64 = -104;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd8
	return;
loc_823D5A2C:
	// li r11,32
	ctx.r11.s64 = 32;
	// subfic r28,r31,4
	ctx.xer.ca = r31.u32 <= 4;
	r28.u64 = static_cast<uint64_t>(4) - r31.u64;
	// subfic r27,r31,8
	ctx.xer.ca = r31.u32 <= 8;
	r27.u64 = static_cast<uint64_t>(8) - r31.u64;
	// subfic r26,r31,12
	ctx.xer.ca = r31.u32 <= 12;
	r26.u64 = static_cast<uint64_t>(12) - r31.u64;
	// subfic r25,r31,16
	ctx.xer.ca = r31.u32 <= 16;
	r25.u64 = static_cast<uint64_t>(16) - r31.u64;
	// subfic r24,r31,20
	ctx.xer.ca = r31.u32 <= 20;
	r24.u64 = static_cast<uint64_t>(20) - r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subfic r23,r31,24
	ctx.xer.ca = r31.u32 <= 24;
	r23.u64 = static_cast<uint64_t>(24) - r31.u64;
	// addi r30,r3,-4
	r30.s64 = ctx.r3.s64 + -4;
	// addi r4,r3,1024
	ctx.r4.s64 = ctx.r3.s64 + 1024;
	// subf r22,r31,r3
	r22.u64 = ctx.r3.u64 - r31.u64;
	// addi r8,r6,8
	ctx.r8.s64 = ctx.r6.s64 + 8;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// addi r10,r31,2060
	ctx.r10.s64 = r31.s64 + 2060;
	// addi r5,r31,6164
	ctx.r5.s64 = r31.s64 + 6164;
	// addi r7,r31,6160
	ctx.r7.s64 = r31.s64 + 6160;
	// addi r9,r6,1020
	ctx.r9.s64 = ctx.r6.s64 + 1020;
	// subf r21,r31,r6
	r21.u64 = ctx.r6.u64 - r31.u64;
	// subfic r20,r31,-4
	ctx.xer.ca = r31.u32 <= 4294967292;
	r20.u64 = static_cast<uint64_t>(-4) - r31.u64;
	// subf r3,r6,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r6.u64;
loc_823D5A7C:
	// lwz r29,2048(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 2048);
	// add r6,r11,r20
	ctx.r6.u64 = ctx.r11.u64 + r20.u64;
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r29,r6
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f11,1020(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1020);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,8(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfsx f9,r3,r9
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,-8(r7)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r7.u32 + -8, temp.u32);
	// lfs f7,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// stfs f6,-8(r5)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r5.u32 + -8, temp.u32);
	// lfs f5,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,-4(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f4,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,1020(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 1020, temp.u32);
	// lwz r29,2048(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 2048);
	// add r6,r29,r6
	ctx.r6.u64 = r29.u64 + ctx.r6.u64;
	// lfs f2,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// stfs f1,12(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f0,1024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1024);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// stfs f13,16(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f12,-8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f2
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// stfs f11,-16(r7)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r7.u32 + -16, temp.u32);
	// lfs f10,-4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f2
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// stfs f9,-16(r5)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r5.u32 + -16, temp.u32);
	// lfsx f8,r22,r11
	temp.u32 = REX_LOAD_U32(r22.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f6,r21,r11
	temp.u32 = REX_LOAD_U32(r21.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,1024(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 1024, temp.u32);
	// lwz r6,2048(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 2048);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lfsx f5,r6,r28
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + r28.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// stfs f4,20(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f3,1028(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1028);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// stfs f2,24(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f1,-12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -12);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f5
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f5.f64));
	// stfs f0,-24(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + -24, temp.u32);
	// lfs f13,-8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f5
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// stfs f12,-24(r5)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + -24, temp.u32);
	// lfsx f11,r8,r3
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,1028(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 1028, temp.u32);
	// lwz r6,2048(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 2048);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lfsx f8,r6,r27
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + r27.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// stfs f7,28(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lfs f6,1032(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1032);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// stfs f5,32(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lfs f4,-16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// stfs f3,-32(r7)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r7.u32 + -32, temp.u32);
	// lfs f2,-12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f8
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// stfs f1,-32(r5)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r5.u32 + -32, temp.u32);
	// lfs f0,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1032(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 1032, temp.u32);
	// lwz r6,2048(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 2048);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lfsx f11,r6,r26
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + r26.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f10,36(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lfs f9,1036(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1036);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f8,40(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lfs f7,-20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -20);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f6,-40(r7)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r7.u32 + -40, temp.u32);
	// lfs f5,-16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -16);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// stfs f4,-40(r5)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r5.u32 + -40, temp.u32);
	// lfs f3,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,12(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f2,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,1036(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 1036, temp.u32);
	// lwz r6,2048(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 2048);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lfsx f0,r6,r25
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f13,44(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// lfs f12,1040(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1040);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,48(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// lfs f10,-24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,-48(r7)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r7.u32 + -48, temp.u32);
	// lfs f8,-20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -20);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,-48(r5)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r5.u32 + -48, temp.u32);
	// lfs f5,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,16(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f6,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,1040(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 1040, temp.u32);
	// lwz r6,2048(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 2048);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lfsx f3,r6,r24
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + r24.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// stfs f2,52(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// lfs f1,1044(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1044);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f3
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// stfs f0,56(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// lfs f13,-28(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f3
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// stfs f12,-56(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + -56, temp.u32);
	// lfs f11,-24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f3
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// stfs f10,-56(r5)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r5.u32 + -56, temp.u32);
	// lfs f8,28(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f9,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,16(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,1044(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 1044, temp.u32);
	// lwz r6,2048(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 2048);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lfsx f6,r6,r23
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + r23.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// stfs f5,60(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// lfs f4,1048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1048);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// stfsu f3,64(r10)
	ea = 64 + ctx.r10.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lfsu f0,-32(r4)
	ea = -32 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// fmuls f2,f0,f6
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// stfsu f2,-64(r7)
	ea = -64 + ctx.r7.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// lfs f1,-28(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -28);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f6
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// stfsu f0,-64(r5)
	ea = -64 + ctx.r5.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r5.u32 = ea;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// lfsu f0,32(r30)
	ea = 32 + r30.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	r30.u32 = ea;
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f13,20(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// stfs f13,1048(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 1048, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x823d5a7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D5A7C;
	// addi r5,r31,6160
	ctx.r5.s64 = r31.s64 + 6160;
	// lwz r3,2060(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2060);
	// addi r4,r31,2064
	ctx.r4.s64 = r31.s64 + 2064;
	// bl 0x823e5e08
	ctx.lr = 0x823D5CFC;
	sub_823E5E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 6160);
	ctx.f13.f64 = double(temp.f32);
	// li r10,51
	ctx.r10.s64 = 51;
	// stfs f13,0(r19)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r19.u32 + 0, temp.u32);
	// addi r9,r31,10256
	ctx.r9.s64 = r31.s64 + 10256;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r6,r16,16
	ctx.r6.s64 = r16.s64 + 16;
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,6160
	ctx.r11.s64 = r31.s64 + 6160;
	// stfs f0,0(r18)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r18.u32 + 0, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r31,10260
	ctx.r10.s64 = r31.s64 + 10260;
	// addi r7,r17,12
	ctx.r7.s64 = r17.s64 + 12;
	// addi r8,r18,8
	ctx.r8.s64 = r18.s64 + 8;
	// subf r4,r18,r19
	ctx.r4.u64 = r19.u64 - r18.u64;
	// subf r3,r18,r17
	ctx.r3.u64 = r17.u64 - r18.u64;
	// subf r30,r18,r16
	r30.u64 = r16.u64 - r18.u64;
	// subf r29,r17,r19
	r29.u64 = r19.u64 - r17.u64;
	// subf r28,r17,r16
	r28.u64 = r16.u64 - r17.u64;
	// subf r27,r16,r19
	r27.u64 = r19.u64 - r16.u64;
	// lfs f12,6164(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 6164);
	ctx.f12.f64 = double(temp.f32);
	// lis r31,-32256
	r31.s64 = -2113929216;
	// stfs f12,0(r17)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r17.u32 + 0, temp.u32);
	// stfs f0,0(r16)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r16.u32 + 0, temp.u32);
	// lfs f0,3720(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
loc_823D5D60:
	// lfs f13,-8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r5)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f9,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,-4(r8)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// lfs f4,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,-8(r7)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r7.u32 + -8, temp.u32);
	// lfs f1,-8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,-12(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + -12, temp.u32);
	// lfs f10,-16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsx f7,r8,r4
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, temp.u32);
	// lfs f6,-16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,0(r8)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f2,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// fadds f13,f1,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f12,r8,r3
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// lfs f11,-16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfsx f8,r8,r30
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r8.u32 + r30.u32, temp.u32);
	// lfs f7,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfsx f4,r7,r29
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r7.u32 + r29.u32, temp.u32);
	// lfs f3,-24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f12,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,0(r7)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfsx f5,r7,r28
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r7.u32 + r28.u32, temp.u32);
	// lfs f4,-32(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfsx f1,r6,r27
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r6.u32 + r27.u32, temp.u32);
	// lfs f13,-32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,8(r8)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f9,-32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,4(r7)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f4,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,-32(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -32);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,0(r6)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f1,-40(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -40);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfsu f11,20(r5)
	ea = 20 + ctx.r5.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r5.u32 = ea;
	// lfs f10,-40(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,12(r8)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lfs f6,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// lfsu f13,-40(r10)
	ea = -40 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,8(r7)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// addi r7,r7,20
	ctx.r7.s64 = ctx.r7.s64 + 20;
	// lfsu f13,-40(r9)
	ea = -40 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// lfsu f12,40(r11)
	ea = 40 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fsubs f3,f13,f12
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,4(r6)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// addi r6,r6,20
	ctx.r6.s64 = ctx.r6.s64 + 20;
	// bdnz 0x823d5d60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D5D60;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_823F8390) {
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
	// lwz r11,11952(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11952);
	// subfic r10,r4,32
	ctx.xer.ca = ctx.r4.u32 <= 32;
	ctx.r10.u64 = static_cast<uint64_t>(32) - ctx.r4.u64;
	// srw r31,r11,r10
	r31.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// bl 0x823f82c0
	ctx.lr = 0x823F83B0;
	sub_823F82C0(ctx, base);
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

DEFINE_REX_FUNC(sub_823FA408) {
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
	ctx.lr = 0x823FA410;
	// add r28,r4,r5
	r28.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r16,11016(r3)
	r16.u64 = REX_LOAD_U32(ctx.r3.u32 + 11016);
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r31,11956(r3)
	r31.u64 = REX_LOAD_U8(ctx.r3.u32 + 11956);
	// addi r26,r3,11956
	r26.s64 = ctx.r3.s64 + 11956;
	// lwz r8,11952(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 11952);
	// addi r25,r3,11952
	r25.s64 = ctx.r3.s64 + 11952;
	// lwz r30,11012(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 11012);
	// addi r24,r3,11012
	r24.s64 = ctx.r3.s64 + 11012;
	// addi r20,r3,3644
	r20.s64 = ctx.r3.s64 + 3644;
	// addi r19,r3,9020
	r19.s64 = ctx.r3.s64 + 9020;
	// addi r18,r3,24
	r18.s64 = ctx.r3.s64 + 24;
	// addi r17,r3,2072
	r17.s64 = ctx.r3.s64 + 2072;
	// addi r22,r3,2584
	r22.s64 = ctx.r3.s64 + 2584;
	// addi r21,r3,3256
	r21.s64 = ctx.r3.s64 + 3256;
	// addi r27,r3,12
	r27.s64 = ctx.r3.s64 + 12;
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r28.s32, ctx.xer);
	// bge cr6,0x823fa758
	if (!ctx.cr6.lt) goto loc_823FA758;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r23,16
	r23.s64 = 16;
	// addi r10,r10,12928
	ctx.r10.s64 = ctx.r10.s64 + 12928;
	// lvx128 v11,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823FA46C:
	// rlwinm r10,r8,11,21,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0x7FE;
	// lhax r9,r10,r18
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + r18.u32));
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823fa4ac
	if (!ctx.cr0.lt) goto loc_823FA4AC;
	// lis r10,32
	ctx.r10.s64 = 2097152;
loc_823FA480:
	// and r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 & ctx.r8.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r7,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// xori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 ^ 1;
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r9,r20
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + r20.u32));
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x823fa480
	if (ctx.cr0.lt) goto loc_823FA480;
loc_823FA4AC:
	// cmplw cr6,r30,r16
	ctx.cr6.compare<uint32_t>(r30.u32, r16.u32, ctx.xer);
	// bge cr6,0x823fa778
	if (!ctx.cr6.lt) goto loc_823FA778;
	// lbzx r10,r9,r22
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + r22.u32);
	// subf r7,r10,r31
	ctx.r7.u64 = r31.u64 - ctx.r10.u64;
	// slw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// extsb r31,r7
	r31.s64 = ctx.r7.s8;
	// mr. r10,r31
	ctx.r10.u64 = r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x823fa4f4
	if (ctx.cr0.gt) goto loc_823FA4F4;
	// lbz r7,1(r30)
	ctx.r7.u64 = REX_LOAD_U8(r30.u32 + 1);
	// neg r6,r10
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lbz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// extsb r31,r10
	r31.s64 = ctx.r10.s8;
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// slw r10,r7,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
loc_823FA4F4:
	// addic. r7,r9,-256
	ctx.xer.ca = ctx.r9.u32 > 255;
	ctx.r7.s64 = ctx.r9.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge 0x823fa508
	if (!ctx.cr0.lt) goto loc_823FA508;
	// stbx r7,r29,r4
	REX_STORE_U8(r29.u32 + ctx.r4.u32, ctx.r7.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x823fa750
	goto loc_823FA750;
loc_823FA508:
	// clrlwi r6,r7,29
	ctx.r6.u64 = ctx.r7.u32 & 0x7;
	// cmpwi cr6,r6,7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 7, ctx.xer);
	// bne cr6,0x823fa598
	if (!ctx.cr6.eq) goto loc_823FA598;
	// rlwinm r10,r8,9,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0x1FE;
	// lhax r10,r10,r17
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + r17.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x823fa554
	if (!ctx.cr0.lt) goto loc_823FA554;
	// lis r9,128
	ctx.r9.s64 = 8388608;
loc_823FA528:
	// and r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 & ctx.r8.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r6,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// subf r10,r10,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r10,r10,r19
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + r19.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x823fa528
	if (ctx.cr0.lt) goto loc_823FA528;
loc_823FA554:
	// lbzx r9,r10,r21
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + r21.u32);
	// subf r6,r9,r31
	ctx.r6.u64 = r31.u64 - ctx.r9.u64;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r31,r6
	r31.s64 = ctx.r6.s8;
	// mr. r9,r31
	ctx.r9.u64 = r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x823fa594
	if (ctx.cr0.gt) goto loc_823FA594;
	// lbz r6,1(r30)
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + 1);
	// neg r5,r9
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// extsb r31,r9
	r31.s64 = ctx.r9.s8;
	// or r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 | ctx.r3.u64;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// slw r9,r6,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r5.u8 & 0x3F));
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
loc_823FA594:
	// addi r6,r10,7
	ctx.r6.s64 = ctx.r10.s64 + 7;
loc_823FA598:
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x823fa65c
	if (!ctx.cr6.gt) goto loc_823FA65C;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// ble cr6,0x823fa644
	if (!ctx.cr6.gt) goto loc_823FA644;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r10,12004(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 12004);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// subf r10,r10,r31
	ctx.r10.u64 = r31.u64 - ctx.r10.u64;
	// subfic r7,r3,32
	ctx.xer.ca = ctx.r3.u32 <= 32;
	ctx.r7.u64 = static_cast<uint64_t>(32) - ctx.r3.u64;
	// extsb r31,r10
	r31.s64 = ctx.r10.s8;
	// srw r7,r8,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// mr. r10,r31
	ctx.r10.u64 = r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r8,r8,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r3.u8 & 0x3F));
	// bgt 0x823fa630
	if (ctx.cr0.gt) goto loc_823FA630;
	// lbz r5,1(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 1);
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// neg r14,r10
	r14.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lbz r15,0(r30)
	r15.u64 = REX_LOAD_U8(r30.u32 + 0);
	// rotlwi r10,r5,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// extsb r31,r3
	r31.s64 = ctx.r3.s8;
	// or r5,r10,r15
	ctx.r5.u64 = ctx.r10.u64 | r15.u64;
	// mr. r10,r31
	ctx.r10.u64 = r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r5,r5,r14
	ctx.r5.u64 = r14.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r14.u8 & 0x3F));
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bgt 0x823fa630
	if (ctx.cr0.gt) goto loc_823FA630;
	// lbz r5,1(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 1);
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lbz r31,0(r30)
	r31.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// or r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 | r31.u64;
	// extsb r31,r10
	r31.s64 = ctx.r10.s8;
	// slw r10,r5,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r3.u8 & 0x3F));
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
loc_823FA630:
	// addi r10,r9,3014
	ctx.r10.s64 = ctx.r9.s64 + 3014;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// b 0x823fa648
	goto loc_823FA648;
loc_823FA644:
	// lwz r9,12068(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12068);
loc_823FA648:
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r7,0(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r10,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r10.u32);
	// stw r7,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r7.u32);
	// b 0x823fa674
	goto loc_823FA674;
loc_823FA65C:
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r9,r10,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// beq cr6,0x823fa678
	if (ctx.cr6.eq) goto loc_823FA678;
	// lwz r7,0(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stwx r7,r10,r27
	REX_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r7.u32);
loc_823FA674:
	// stw r9,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r9.u32);
loc_823FA678:
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// subf r9,r9,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r9.u64;
	// addi r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 2;
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// blt cr6,0x823fa698
	if (ctx.cr6.lt) goto loc_823FA698;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
loc_823FA698:
	// subf r6,r9,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r9.u64;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x823fa6c4
	if (!ctx.cr6.lt) goto loc_823FA6C4;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_823FA6AC:
	// lbzu r7,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stbx r7,r29,r4
	REX_STORE_U8(r29.u32 + ctx.r4.u32, ctx.r7.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bgt 0x823fa6ac
	if (ctx.cr0.gt) goto loc_823FA6AC;
	// b 0x823fa750
	goto loc_823FA750;
loc_823FA6C4:
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// ble cr6,0x823fa714
	if (!ctx.cr6.gt) goto loc_823FA714;
	// addi r7,r10,-17
	ctx.r7.s64 = ctx.r10.s64 + -17;
	// add r3,r29,r4
	ctx.r3.u64 = r29.u64 + ctx.r4.u64;
	// rlwinm r7,r7,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// add r5,r9,r29
	ctx.r5.u64 = ctx.r9.u64 + r29.u64;
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// rlwinm r7,r6,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
loc_823FA6F4:
	// lvlx128 v63,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r23,r5
	temp.u32 = r23.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// stvlx128 v63,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r3,r23
	ea = ctx.r3.u32 + r23.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bdnz 0x823fa6f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FA6F4;
loc_823FA714:
	// lvlx128 v63,r9,r29
	temp.u32 = ctx.r9.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r7,r29,r4
	ctx.r7.u64 = r29.u64 + ctx.r4.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// lvlx128 v62,r29,r4
	temp.u32 = r29.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r6,-1
	ctx.r6.s64 = -1;
	// lvrx128 v61,r23,r7
	temp.u32 = r23.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v60,r23,r9
	temp.u32 = r23.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v0,v62,v61
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvsr v12,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// vor128 v13,v63,v60
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vcmpgtub v12,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vsel v12,v0,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// stvlx v12,r29,r4
	ea = r29.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stvrx v12,r7,r23
	ea = ctx.r7.u32 + r23.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
loc_823FA750:
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r28.s32, ctx.xer);
	// blt cr6,0x823fa46c
	if (ctx.cr6.lt) goto loc_823FA46C;
loc_823FA758:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// subf r3,r28,r4
	ctx.r3.u64 = ctx.r4.u64 - r28.u64;
	// stb r31,0(r26)
	REX_STORE_U8(r26.u32 + 0, r31.u8);
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// stw r8,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r8.u32);
	// stw r30,0(r24)
	REX_STORE_U32(r24.u32 + 0, r30.u32);
	// stw r10,11960(r11)
	REX_STORE_U32(ctx.r11.u32 + 11960, ctx.r10.u32);
loc_823FA774:
	// b 0x826a1cd0
	return;
loc_823FA778:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823fa774
	goto loc_823FA774;
}

DEFINE_REX_FUNC(sub_82411DA0) {
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
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x823fbcc0
	ctx.lr = 0x82411DE8;
	sub_823FBCC0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82411e00
	if (ctx.cr6.eq) goto loc_82411E00;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c73b8
	ctx.lr = 0x82411E00;
	sub_825C73B8(ctx, base);
loc_82411E00:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82411e18
	if (ctx.cr6.eq) goto loc_82411E18;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409820
	ctx.lr = 0x82411E18;
	sub_82409820(ctx, base);
loc_82411E18:
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

DEFINE_REX_FUNC(sub_824143E8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824143f8
	if (ctx.cr6.eq) goto loc_824143F8;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_824143F8:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82414404
	if (ctx.cr6.eq) goto loc_82414404;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82414404:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82414418
	if (!ctx.cr6.eq) goto loc_82414418;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// blr 
	return;
loc_82414418:
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,4138
	ctx.r11.s64 = 271187968;
	// ori r11,r11,4352
	ctx.r11.u64 = ctx.r11.u64 | 4352;
	// rlwinm r10,r8,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82414438
	if (!ctx.cr6.eq) goto loc_82414438;
loc_82414430:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82414438:
	// rlwinm r11,r8,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// lis r10,18008
	ctx.r10.s64 = 1180172288;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82414490
	if (ctx.cr6.eq) goto loc_82414490;
	// lis r10,21592
	ctx.r10.s64 = 1415053312;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82414490
	if (ctx.cr6.eq) goto loc_82414490;
	// lis r10,32766
	ctx.r10.s64 = 2147352576;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82414490
	if (ctx.cr6.eq) goto loc_82414490;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82414490
	if (ctx.cr6.eq) goto loc_82414490;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82414490
	if (ctx.cr6.eq) goto loc_82414490;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82414490
	if (ctx.cr6.eq) goto loc_82414490;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// blr 
	return;
loc_82414490:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82414494:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824144f8
	if (!ctx.cr0.eq) goto loc_824144F8;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x82414430
	if (ctx.cr6.eq) goto loc_82414430;
	// cmplwi cr6,r9,65534
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65534, ctx.xer);
	// bne cr6,0x824144d8
	if (!ctx.cr6.eq) goto loc_824144D8;
	// rlwinm r10,r10,16,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7FFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x824144cc
	if (!ctx.cr6.gt) goto loc_824144CC;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82414500
	if (ctx.cr6.eq) goto loc_82414500;
loc_824144CC:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_824144D0:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x824144f8
	goto loc_824144F8;
loc_824144D8:
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r7,512
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 512, ctx.xer);
	// blt cr6,0x824144ec
	if (ctx.cr6.lt) goto loc_824144EC;
	// rlwinm r10,r10,10,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3C;
	// b 0x824144d0
	goto loc_824144D0;
loc_824144EC:
	// cmplwi cr6,r9,81
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 81, ctx.xer);
	// bne cr6,0x824144f8
	if (!ctx.cr6.eq) goto loc_824144F8;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_824144F8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82414494
	goto loc_82414494;
loc_82414500:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82414510
	if (ctx.cr6.eq) goto loc_82414510;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82414510:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82414524
	if (ctx.cr6.eq) goto loc_82414524;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82414524:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8241BFE8) {
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
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241c048
	if (ctx.cr6.eq) goto loc_8241C048;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241c048
	if (ctx.cr0.eq) goto loc_8241C048;
loc_8241C018:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826a2bb8
	ctx.lr = 0x8241C020;
	sub_826A2BB8(ctx, base);
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// mulli r10,r30,19
	ctx.r10.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(19));
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r30,r3,r10
	r30.u64 = ctx.r3.u64 + ctx.r10.u64;
	// bne 0x8241c018
	if (!ctx.cr0.eq) goto loc_8241C018;
	// li r11,7
	ctx.r11.s64 = 7;
	// divwu r11,r30,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? r30.u32 / ctx.r11.u32 : 0);
	// mulli r11,r11,7
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(7));
	// subf r3,r11,r30
	ctx.r3.u64 = r30.u64 - ctx.r11.u64;
	// b 0x8241c04c
	goto loc_8241C04C;
loc_8241C048:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241C04C:
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

DEFINE_REX_FUNC(sub_82421A60) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r4,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r4.u32);
	// li r9,2047
	ctx.r9.s64 = 2047;
	// li r8,4095
	ctx.r8.s64 = 4095;
	// li r11,0
	ctx.r11.s64 = 0;
	// rldicr r9,r9,52,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 52) & 0xFFF0000000000000;
	// rldicr r8,r8,52,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 52) & 0xFFF0000000000000;
	// lfd f0,-23680(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -23680);
	// stfd f0,184(r3)
	REX_STORE_U64(ctx.r3.u32 + 184, ctx.f0.u64);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r11,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// stw r11,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// stw r11,160(r3)
	REX_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// stw r11,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// std r9,168(r3)
	REX_STORE_U64(ctx.r3.u32 + 168, ctx.r9.u64);
	// std r8,176(r3)
	REX_STORE_U64(ctx.r3.u32 + 176, ctx.r8.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82424CF0) {
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
	ctx.lr = 0x82424CF8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r23,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r23.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r23,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r23.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82424d34
	if (!ctx.cr6.eq) goto loc_82424D34;
	// addi r28,r1,168
	r28.s64 = ctx.r1.s64 + 168;
loc_82424D34:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82424fd8
	if (ctx.cr6.eq) goto loc_82424FD8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82424f58
	if (ctx.cr6.eq) goto loc_82424F58;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82424f28
	if (ctx.cr6.eq) goto loc_82424F28;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82424e54
	if (ctx.cr6.eq) goto loc_82424E54;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82424dc4
	if (ctx.cr6.eq) goto loc_82424DC4;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82424d84
	if (ctx.cr6.eq) goto loc_82424D84;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-23188
	ctx.r6.s64 = ctx.r11.s64 + -23188;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423e58
	ctx.lr = 0x82424D80;
	sub_82423E58(ctx, base);
	// b 0x82424fd8
	goto loc_82424FD8;
loc_82424D84:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824279e8
	ctx.lr = 0x82424DC0;
	sub_824279E8(ctx, base);
	// b 0x82424e48
	goto loc_82424E48;
loc_82424DC4:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82424e18
	if (!ctx.cr6.eq) goto loc_82424E18;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x82424dfc
	if (!ctx.cr6.eq) goto loc_82424DFC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r4,r11,25300
	ctx.r4.s64 = ctx.r11.s64 + 25300;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,721
	ctx.r5.s64 = 721;
	// bl 0x824786b8
	ctx.lr = 0x82424DF4;
	sub_824786B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82424e18
	goto loc_82424E18;
loc_82424DFC:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82424E18:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82421b20
	ctx.lr = 0x82424E48;
	sub_82421B20(ctx, base);
loc_82424E48:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82424fd8
	if (!ctx.cr0.lt) goto loc_82424FD8;
	// b 0x82424ff0
	goto loc_82424FF0;
loc_82424E54:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x82424ebc
	if (!ctx.cr6.eq) goto loc_82424EBC;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82424E60:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x82424e78
	if (!ctx.cr6.eq) goto loc_82424E78;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82424e60
	if (!ctx.cr6.eq) goto loc_82424E60;
loc_82424E78:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82424ebc
	if (ctx.cr6.eq) goto loc_82424EBC;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x82424ebc
	if (!ctx.cr6.eq) goto loc_82424EBC;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82424ebc
	if (!ctx.cr6.eq) goto loc_82424EBC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r4,r11,25300
	ctx.r4.s64 = ctx.r11.s64 + 25300;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,721
	ctx.r5.s64 = 721;
	// bl 0x824786b8
	ctx.lr = 0x82424EB4;
	sub_824786B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r27,1
	r27.s64 = 1;
loc_82424EBC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82424fd8
	if (!ctx.cr6.gt) goto loc_82424FD8;
loc_82424EC8:
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82424cf0
	ctx.lr = 0x82424EFC;
	sub_82424CF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82424ff0
	if (ctx.cr0.lt) goto loc_82424FF0;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r23,r9
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r9.u32, ctx.xer);
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// blt cr6,0x82424ec8
	if (ctx.cr6.lt) goto loc_82424EC8;
	// b 0x82424fd8
	goto loc_82424FD8;
loc_82424F28:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82424cf0
	ctx.lr = 0x82424F54;
	sub_82424CF0(ctx, base);
	// b 0x82424e48
	goto loc_82424E48;
loc_82424F58:
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82424cf0
	ctx.lr = 0x82424F84;
	sub_82424CF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82424ff0
	if (ctx.cr0.lt) goto loc_82424FF0;
	// addi r11,r1,172
	ctx.r11.s64 = ctx.r1.s64 + 172;
	// lwz r9,164(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82424cf0
	ctx.lr = 0x82424FC0;
	sub_82424CF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82424ff0
	if (ctx.cr0.lt) goto loc_82424FF0;
	// lwz r10,164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
loc_82424FD8:
	// lwz r11,340(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82424fec
	if (ctx.cr6.eq) goto loc_82424FEC;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82424FEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82424FF0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_824446D0) {
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
	// bl 0x82448598
	ctx.lr = 0x824446E8;
	sub_82448598(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
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

DEFINE_REX_FUNC(sub_824448F0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,-8104
	ctx.r10.s64 = ctx.r10.s64 + -8104;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82444EB0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r10,-8056
	ctx.r10.s64 = ctx.r10.s64 + -8056;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
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
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82445D90) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82445e80
	if (ctx.cr6.eq) goto loc_82445E80;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82445e80
	if (!ctx.cr6.eq) goto loc_82445E80;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82445e80
	if (!ctx.cr6.eq) goto loc_82445E80;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r4,20(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82445df8
	if (ctx.cr6.eq) goto loc_82445DF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82445DF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82445e04
	goto loc_82445E04;
loc_82445DF8:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82445E04:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82445e80
	if (ctx.cr6.eq) goto loc_82445E80;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82445e30
	if (ctx.cr6.eq) goto loc_82445E30;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82445E2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82445e3c
	goto loc_82445E3C;
loc_82445E30:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82445E3C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82445e80
	if (ctx.cr6.eq) goto loc_82445E80;
	// lwz r3,28(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82445e68
	if (ctx.cr6.eq) goto loc_82445E68;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82445E64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82445e74
	goto loc_82445E74;
loc_82445E68:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82445E74:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82445e84
	if (!ctx.cr6.eq) goto loc_82445E84;
loc_82445E80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82445E84:
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

DEFINE_REX_FUNC(sub_8244A670) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82444750
	ctx.lr = 0x8244A694;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8244a6a8
	if (ctx.cr0.eq) goto loc_8244A6A8;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x824c5420
	ctx.lr = 0x8244A6A4;
	sub_824C5420(ctx, base);
	// b 0x8244a6ac
	goto loc_8244A6AC;
loc_8244A6A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8244A6AC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8244a6c0
	if (!ctx.cr6.eq) goto loc_8244A6C0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8244a6c8
	goto loc_8244A6C8;
loc_8244A6C0:
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8244A6C8:
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

DEFINE_REX_FUNC(sub_8244F828) {
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
	ctx.lr = 0x8244F830;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r25,0
	r25.s64 = 0;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// std r25,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r25.u64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r25
	r28.u64 = r25.u64;
	// addi r29,r5,68
	r29.s64 = ctx.r5.s64 + 68;
	// li r23,1
	r23.s64 = 1;
	// addi r27,r11,7020
	r27.s64 = ctx.r11.s64 + 7020;
loc_8244F860:
	// lwz r30,16(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8244f980
	if (ctx.cr6.eq) goto loc_8244F980;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244f8c4
	if (ctx.cr6.eq) goto loc_8244F8C4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8244fa40
	if (ctx.cr6.eq) goto loc_8244FA40;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8244f8a8
	if (ctx.cr6.eq) goto loc_8244F8A8;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x8244f8a8
	if (ctx.cr6.eq) goto loc_8244F8A8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x8244f8a8
	if (ctx.cr6.eq) goto loc_8244F8A8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8244beb0
	ctx.lr = 0x8244F8A4;
	sub_8244BEB0(ctx, base);
	// b 0x8244f8d4
	goto loc_8244F8D4;
loc_8244F8A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lwz r9,24(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 24);
	// clrlwi r11,r11,7
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFF;
	// rlwimi r10,r9,25,1,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x7E000000) | (ctx.r10.u64 & 0xFFFFFFFF81FFFFFF);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x8244f8d0
	goto loc_8244F8D0;
loc_8244F8C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// rlwimi r11,r10,25,1,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7E000000) | (ctx.r11.u64 & 0xFFFFFFFF81FFFFFF);
loc_8244F8D0:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8244F8D4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 32);
	// bl 0x8244a3f0
	ctx.lr = 0x8244F8E0;
	sub_8244A3F0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8244fa54
	if (ctx.cr6.eq) goto loc_8244FA54;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
loc_8244F8F4:
	// srw r11,r3,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8244f91c
	if (ctx.cr6.lt) goto loc_8244F91C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x8244fa2c
	if (ctx.cr6.lt) goto loc_8244FA2C;
	// beq cr6,0x8244fa04
	if (ctx.cr6.eq) goto loc_8244FA04;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// blt cr6,0x8244f9f0
	if (ctx.cr6.lt) goto loc_8244F9F0;
	// bne cr6,0x8244f934
	if (!ctx.cr6.eq) goto loc_8244F934;
loc_8244F91C:
	// slw r11,r25,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
loc_8244F920:
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwimi r11,r7,0,15,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFE01FFFF) | (ctx.r11.u64 & 0x1FE0000);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8244F934:
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// blt cr6,0x8244f8f4
	if (ctx.cr6.lt) goto loc_8244F8F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// rlwimi r11,r9,28,15,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x10000) | (ctx.r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8244f980
	if (ctx.cr6.eq) goto loc_8244F980;
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8244faa4
	if (!ctx.cr0.eq) goto loc_8244FAA4;
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bne cr6,0x8244fab0
	if (!ctx.cr6.eq) goto loc_8244FAB0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8244F980:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// blt cr6,0x8244f860
	if (ctx.cr6.lt) goto loc_8244F860;
loc_8244F994:
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8244F9A8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8244f9c0
	if (!ctx.cr0.eq) goto loc_8244F9C0;
	// rlwinm. r10,r10,0,7,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FE0000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// bne 0x8244f9c4
	if (!ctx.cr0.eq) goto loc_8244F9C4;
loc_8244F9C0:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_8244F9C4:
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8244f9a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244F9A8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8244fabc
	if (ctx.cr6.eq) goto loc_8244FABC;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8244fabc
	if (ctx.cr6.eq) goto loc_8244FABC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,6960
	ctx.r4.s64 = ctx.r11.s64 + 6960;
	// b 0x8244fa48
	goto loc_8244FA48;
loc_8244F9F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r7,r11,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8244fa68
	if (ctx.cr0.eq) goto loc_8244FA68;
	// li r7,3
	ctx.r7.s64 = 3;
	// b 0x8244fa14
	goto loc_8244FA14;
loc_8244FA04:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r7,r11,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8244fa74
	if (ctx.cr0.eq) goto loc_8244FA74;
	// li r7,2
	ctx.r7.s64 = 2;
loc_8244FA14:
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r7,r7,17,0,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0xFFFE0000;
	// or r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwimi r7,r11,0,15,6
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFE01FFFF) | (ctx.r7.u64 & 0x1FE0000);
	// stw r7,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// b 0x8244f934
	goto loc_8244F934;
loc_8244FA2C:
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8244fa80
	if (!ctx.cr6.eq) goto loc_8244FA80;
	// slw r11,r23,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x8244f920
	goto loc_8244F920;
loc_8244FA40:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,6928
	ctx.r4.s64 = ctx.r11.s64 + 6928;
loc_8244FA48:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8244beb0
	ctx.lr = 0x8244FA50;
	sub_8244BEB0(ctx, base);
	// b 0x8244fd3c
	goto loc_8244FD3C;
loc_8244FA54:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,6888
	ctx.r4.s64 = ctx.r11.s64 + 6888;
	// bl 0x8244beb0
	ctx.lr = 0x8244FA64;
	sub_8244BEB0(ctx, base);
	// b 0x8244f994
	goto loc_8244F994;
loc_8244FA68:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,6816
	ctx.r4.s64 = ctx.r11.s64 + 6816;
	// b 0x8244fa48
	goto loc_8244FA48;
loc_8244FA74:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,6744
	ctx.r4.s64 = ctx.r11.s64 + 6744;
	// b 0x8244fa48
	goto loc_8244FA48;
loc_8244FA80:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,18028
	ctx.r11.s64 = ctx.r11.s64 + 18028;
	// addi r4,r10,6712
	ctx.r4.s64 = ctx.r10.s64 + 6712;
	// lbzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
loc_8244FA94:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8244beb0
	ctx.lr = 0x8244FAA0;
	sub_8244BEB0(ctx, base);
	// b 0x8244fd3c
	goto loc_8244FD3C;
loc_8244FAA4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,6640
	ctx.r4.s64 = ctx.r11.s64 + 6640;
	// b 0x8244fa48
	goto loc_8244FA48;
loc_8244FAB0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,6560
	ctx.r4.s64 = ctx.r11.s64 + 6560;
	// b 0x8244fa48
	goto loc_8244FA48;
loc_8244FABC:
	// lwz r28,112(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r29,116(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm. r11,r28,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8244fad8
	if (!ctx.cr0.eq) goto loc_8244FAD8;
	// rlwinm. r11,r29,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// beq 0x8244fadc
	if (ctx.cr0.eq) goto loc_8244FADC;
loc_8244FAD8:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_8244FADC:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwimi r10,r11,15,16,16
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x8000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// beq 0x8244fc80
	if (ctx.cr0.eq) goto loc_8244FC80;
	// rlwinm. r31,r28,15,24,31
	r31.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 15) & 0xFF;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// rlwinm r11,r28,7,26,31
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 7) & 0x3F;
	// bne 0x8244fb00
	if (!ctx.cr0.eq) goto loc_8244FB00;
	// rlwinm r11,r29,7,26,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 7) & 0x3F;
loc_8244FB00:
	// rlwinm r10,r29,7,26,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 7) & 0x3F;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8244fb20
	if (ctx.cr6.eq) goto loc_8244FB20;
	// rlwinm. r10,r29,0,7,14
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1FE0000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8244fb20
	if (ctx.cr0.eq) goto loc_8244FB20;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,6496
	ctx.r4.s64 = ctx.r11.s64 + 6496;
	// b 0x8244fa48
	goto loc_8244FA48;
loc_8244FB20:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// rlwimi r10,r11,0,26,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC0);
	// rlwinm r3,r29,15,24,31
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 15) & 0xFF;
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
loc_8244FB48:
	// srw r11,r31,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// srw r10,r3,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8244fb68
	if (!ctx.cr6.eq) goto loc_8244FB68;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8244fc5c
	if (ctx.cr6.eq) goto loc_8244FC5C;
loc_8244FB68:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8244fb80
	if (ctx.cr6.eq) goto loc_8244FB80;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8244fb80
	if (ctx.cr6.lt) goto loc_8244FB80;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x8244fc74
	if (!ctx.cr6.lt) goto loc_8244FC74;
loc_8244FB80:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244fb9c
	if (!ctx.cr6.eq) goto loc_8244FB9C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8244fb9c
	if (!ctx.cr6.eq) goto loc_8244FB9C;
	// li r9,4
	ctx.r9.s64 = 4;
loc_8244FB9C:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x8244fbe8
	if (ctx.cr6.lt) goto loc_8244FBE8;
	// beq cr6,0x8244fbdc
	if (ctx.cr6.eq) goto loc_8244FBDC;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x8244fbd4
	if (ctx.cr6.lt) goto loc_8244FBD4;
	// beq cr6,0x8244fbcc
	if (ctx.cr6.eq) goto loc_8244FBCC;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// bge cr6,0x8244fbf4
	if (!ctx.cr6.lt) goto loc_8244FBF4;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// b 0x8244fbf0
	goto loc_8244FBF0;
loc_8244FBCC:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// b 0x8244fbe0
	goto loc_8244FBE0;
loc_8244FBD4:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// b 0x8244fbec
	goto loc_8244FBEC;
loc_8244FBDC:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_8244FBE0:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x8244fbf4
	goto loc_8244FBF4;
loc_8244FBE8:
	// mr r30,r23
	r30.u64 = r23.u64;
loc_8244FBEC:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_8244FBF0:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_8244FBF4:
	// slw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// slw r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r7.u8 & 0x3F));
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// or r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 | ctx.r6.u64;
	// or r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 | ctx.r5.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x8244fb48
	if (ctx.cr6.lt) goto loc_8244FB48;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwimi r6,r5,4,24,27
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xF0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF0F);
	// clrlwi. r31,r4,24
	r31.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// rlwimi r11,r6,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// beq 0x8244fc44
	if (ctx.cr0.eq) goto loc_8244FC44;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8244fc44
	if (ctx.cr0.eq) goto loc_8244FC44;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,6448
	ctx.r4.s64 = ctx.r11.s64 + 6448;
	// bl 0x8244beb0
	ctx.lr = 0x8244FC44;
	sub_8244BEB0(ctx, base);
loc_8244FC44:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8244fd2c
	if (ctx.cr6.eq) goto loc_8244FD2C;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// b 0x8244fd2c
	goto loc_8244FD2C;
loc_8244FC5C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,6376
	ctx.r4.s64 = ctx.r10.s64 + 6376;
loc_8244FC64:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r11,r11,18028
	ctx.r11.s64 = ctx.r11.s64 + 18028;
	// lbzx r11,r7,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// b 0x8244fa94
	goto loc_8244FA94;
loc_8244FC74:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,6316
	ctx.r4.s64 = ctx.r10.s64 + 6316;
	// b 0x8244fc64
	goto loc_8244FC64;
loc_8244FC80:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_8244FC84:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r6,r11,15,17,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// rlwinm r10,r11,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
loc_8244FCAC:
	// srw r4,r10,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x8244fcc4
	if (!ctx.cr6.eq) goto loc_8244FCC4;
	// slw r4,r23,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r8.u8 & 0x3F));
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
loc_8244FCC4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// bdnz 0x8244fcac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244FCAC;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8244fcf8
	if (!ctx.cr6.eq) goto loc_8244FCF8;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// rlwimi r11,r28,16,17,22
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 16) & 0x7E00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF81FF);
	// rlwinm r9,r9,16,12,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xF0000;
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rlwinm r11,r11,23,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// b 0x8244fd14
	goto loc_8244FD14;
loc_8244FCF8:
	// rlwimi r10,r6,0,18,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x3F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC0FF);
	// rlwinm r11,r11,31,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x4000;
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r9,r9,20,8,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF00000;
	// rlwinm r10,r10,0,18,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// rlwinm r10,r10,0,12,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
loc_8244FD14:
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// blt cr6,0x8244fc84
	if (ctx.cr6.lt) goto loc_8244FC84;
loc_8244FD2C:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwimi r28,r29,1,14,14
	r28.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0x20000) | (r28.u64 & 0xFFFFFFFFFFFDFFFF);
	// rlwimi r11,r28,8,6,7
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0x3000000) | (ctx.r11.u64 & 0xFFFFFFFFFCFFFFFF);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_8244FD3C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_824774A0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// rlwinm r9,r11,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824774e0
	if (ctx.cr6.eq) goto loc_824774E0;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// lis r10,20496
	ctx.r10.s64 = 1343225856;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824774e0
	if (ctx.cr6.eq) goto loc_824774E0;
	// lis r10,20512
	ctx.r10.s64 = 1344274432;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824774e0
	if (ctx.cr6.eq) goto loc_824774E0;
	// lis r10,20528
	ctx.r10.s64 = 1345323008;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_824774E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82478328) {
	REX_FUNC_PROLOGUE();
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,30464
	ctx.r3.s64 = ctx.r11.s64 + 30464;
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,30456
	ctx.r3.s64 = ctx.r11.s64 + 30456;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82478D90) {
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
	// bl 0x82478a18
	ctx.lr = 0x82478DB0;
	sub_82478A18(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82478dc4
	if (ctx.cr0.eq) goto loc_82478DC4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x82478DC4;
	sub_823F0350(ctx, base);
loc_82478DC4:
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

DEFINE_REX_FUNC(sub_82479DA0) {
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
	ctx.lr = 0x82479DA8;
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,20(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// mr r20,r9
	r20.u64 = ctx.r9.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8247a518
	if (!ctx.cr6.eq) goto loc_8247A518;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247a518
	if (ctx.cr0.eq) goto loc_8247A518;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r28,16(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247a518
	if (ctx.cr0.eq) goto loc_8247A518;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r27,24(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82479e4c
	if (ctx.cr6.eq) goto loc_82479E4C;
	// lwz r7,16(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
loc_82479E30:
	// lwzx r6,r7,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82479e4c
	if (ctx.cr6.eq) goto loc_82479E4C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82479e30
	if (ctx.cr6.lt) goto loc_82479E30;
loc_82479E4C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8247a518
	if (ctx.cr6.eq) goto loc_8247A518;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lis r7,4096
	ctx.r7.s64 = 268435456;
	// rlwinm r8,r8,0,0,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82479e9c
	if (!ctx.cr6.eq) goto loc_82479E9C;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82479da0
	ctx.lr = 0x82479E90;
	sub_82479DA0(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// b 0x8247a520
	goto loc_8247A520;
loc_82479E9C:
	// lis r7,8272
	ctx.r7.s64 = 542113792;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82479f20
	if (!ctx.cr6.eq) goto loc_82479F20;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// lwzx r31,r7,r10
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r30,r11,r10
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82479da0
	ctx.lr = 0x82479EE0;
	sub_82479DA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247a520
	if (ctx.cr0.lt) goto loc_8247A520;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x82479f18
	if (ctx.cr6.eq) goto loc_82479F18;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82479da0
	ctx.lr = 0x82479F10;
	sub_82479DA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247a520
	if (ctx.cr0.lt) goto loc_8247A520;
loc_82479F18:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8247a520
	goto loc_8247A520;
loc_82479F20:
	// lis r7,8224
	ctx.r7.s64 = 538968064;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8247a02c
	if (!ctx.cr6.eq) goto loc_8247A02C;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// lwzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// beq cr6,0x82479f58
	if (ctx.cr6.eq) goto loc_82479F58;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82479fbc
	if (!ctx.cr6.eq) goto loc_82479FBC;
loc_82479F58:
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r26,r9
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + ctx.r9.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r28.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82479fbc
	if (ctx.cr0.eq) goto loc_82479FBC;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82479fbc
	if (!ctx.cr6.eq) goto loc_82479FBC;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82479fb0
	if (ctx.cr6.eq) goto loc_82479FB0;
	// lwz r10,20(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfd f0,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// lfd f13,32(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82479f18
	if (!ctx.cr6.lt) goto loc_82479F18;
loc_82479FB0:
	// stw r7,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r7.u32);
	// stw r8,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r8.u32);
	// b 0x82479f18
	goto loc_82479F18;
loc_82479FBC:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82479fcc
	if (ctx.cr6.eq) goto loc_82479FCC;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8247a518
	if (!ctx.cr6.eq) goto loc_8247A518;
loc_82479FCC:
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r26,r10
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r28.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8247a518
	if (ctx.cr0.eq) goto loc_8247A518;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8247a518
	if (!ctx.cr6.eq) goto loc_8247A518;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247a024
	if (ctx.cr6.eq) goto loc_8247A024;
	// lwz r9,20(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lfd f0,32(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 32);
	// lfd f13,32(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82479f18
	if (!ctx.cr6.gt) goto loc_82479F18;
loc_8247A024:
	// stw r8,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r8.u32);
	// b 0x8247a450
	goto loc_8247A450;
loc_8247A02C:
	// lis r7,8240
	ctx.r7.s64 = 540016640;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8247a138
	if (!ctx.cr6.eq) goto loc_8247A138;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// lwzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// beq cr6,0x8247a064
	if (ctx.cr6.eq) goto loc_8247A064;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8247a0c8
	if (!ctx.cr6.eq) goto loc_8247A0C8;
loc_8247A064:
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r26,r9
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + ctx.r9.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r28.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8247a0c8
	if (ctx.cr0.eq) goto loc_8247A0C8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8247a0c8
	if (!ctx.cr6.eq) goto loc_8247A0C8;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247a0bc
	if (ctx.cr6.eq) goto loc_8247A0BC;
	// lwz r10,20(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfd f0,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// lfd f13,32(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82479f18
	if (!ctx.cr6.gt) goto loc_82479F18;
loc_8247A0BC:
	// stw r7,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r7.u32);
	// stw r8,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r8.u32);
	// b 0x82479f18
	goto loc_82479F18;
loc_8247A0C8:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247a0d8
	if (ctx.cr6.eq) goto loc_8247A0D8;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8247a518
	if (!ctx.cr6.eq) goto loc_8247A518;
loc_8247A0D8:
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r26,r10
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r28.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8247a518
	if (ctx.cr0.eq) goto loc_8247A518;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8247a518
	if (!ctx.cr6.eq) goto loc_8247A518;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247a130
	if (ctx.cr6.eq) goto loc_8247A130;
	// lwz r9,20(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lfd f0,32(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 32);
	// lfd f13,32(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82479f18
	if (!ctx.cr6.lt) goto loc_82479F18;
loc_8247A130:
	// stw r8,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r8.u32);
	// b 0x8247a418
	goto loc_8247A418;
loc_8247A138:
	// lis r9,12288
	ctx.r9.s64 = 805306368;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8247a518
	if (!ctx.cr6.eq) goto loc_8247A518;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r6,20(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 20);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r24,r7,r6
	r24.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lwz r8,4(r24)
	ctx.r8.u64 = REX_LOAD_U32(r24.u32 + 4);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r28.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm. r8,r8,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8247a518
	if (ctx.cr0.eq) goto loc_8247A518;
	// lwz r8,8(r24)
	ctx.r8.u64 = REX_LOAD_U32(r24.u32 + 8);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x8247a518
	if (!ctx.cr6.eq) goto loc_8247A518;
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r28.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm. r8,r8,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8247a518
	if (ctx.cr0.eq) goto loc_8247A518;
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x8247a518
	if (!ctx.cr6.eq) goto loc_8247A518;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfd f0,32(r24)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r24.u32 + 32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfd f1,-3744(r8)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r8.u32 + -3744);
	// lfd f31,3728(r7)
	f31.u64 = REX_LOAD_U64(ctx.r7.u32 + 3728);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x8247a1ec
	if (!ctx.cr6.eq) goto loc_8247A1EC;
	// lfd f13,32(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// beq cr6,0x8247a200
	if (ctx.cr6.eq) goto loc_8247A200;
loc_8247A1EC:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x8247a518
	if (!ctx.cr6.eq) goto loc_8247A518;
	// lfd f0,32(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x8247a518
	if (!ctx.cr6.eq) goto loc_8247A518;
loc_8247A200:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247a518
	if (ctx.cr0.eq) goto loc_8247A518;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lis r10,8256
	ctx.r10.s64 = 541065216;
	// lis r6,4112
	ctx.r6.s64 = 269484032;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r27
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8247a258
	if (ctx.cr6.eq) goto loc_8247A258;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8247a518
	if (!ctx.cr6.eq) goto loc_8247A518;
loc_8247A258:
	// lwz r29,12(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8247a28c
	if (ctx.cr6.eq) goto loc_8247A28C;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247A270:
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8247a28c
	if (ctx.cr6.eq) goto loc_8247A28C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// blt cr6,0x8247a270
	if (ctx.cr6.lt) goto loc_8247A270;
loc_8247A28C:
	// li r3,0
	ctx.r3.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8247a2d0
	if (!ctx.cr6.eq) goto loc_8247A2D0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82478758
	ctx.lr = 0x8247A2B0;
	sub_82478758(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bne cr6,0x8247a394
	if (!ctx.cr6.eq) goto loc_8247A394;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8247a520
	goto loc_8247A520;
loc_8247A2D0:
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8247A2DC:
	// mullw r11,r10,r29
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r28.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8247a328
	if (ctx.cr0.eq) goto loc_8247A328;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8247a33c
	if (ctx.cr6.eq) goto loc_8247A33C;
loc_8247A328:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// blt cr6,0x8247a2dc
	if (ctx.cr6.lt) goto loc_8247A2DC;
	// b 0x8247a38c
	goto loc_8247A38C;
loc_8247A33C:
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8247a370
	if (ctx.cr6.eq) goto loc_8247A370;
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8247A354:
	// lwzx r3,r10,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8247a370
	if (ctx.cr6.eq) goto loc_8247A370;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8247a354
	if (ctx.cr6.lt) goto loc_8247A354;
loc_8247A370:
	// mullw r10,r29,r4
	ctx.r10.s64 = int64_t(r29.s32) * int64_t(ctx.r4.s32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r3,r10,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
loc_8247A38C:
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// beq cr6,0x8247a518
	if (ctx.cr6.eq) goto loc_8247A518;
loc_8247A394:
	// lwz r9,0(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8247a3a8
	if (ctx.cr6.eq) goto loc_8247A3A8;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8247a458
	if (!ctx.cr6.eq) goto loc_8247A458;
loc_8247A3A8:
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,16(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 16);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r6,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm. r8,r8,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8247a458
	if (ctx.cr0.eq) goto loc_8247A458;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8247a458
	if (!ctx.cr6.eq) goto loc_8247A458;
	// lfd f0,32(r24)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r24.u32 + 32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x8247a420
	if (!ctx.cr6.eq) goto loc_8247A420;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247a414
	if (ctx.cr6.eq) goto loc_8247A414;
	// lwz r9,20(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lfd f0,32(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 32);
	// lfd f13,32(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82479f18
	if (!ctx.cr6.lt) goto loc_82479F18;
loc_8247A414:
	// stw r3,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r3.u32);
loc_8247A418:
	// stw r7,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r7.u32);
	// b 0x82479f18
	goto loc_82479F18;
loc_8247A420:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247a44c
	if (ctx.cr6.eq) goto loc_8247A44C;
	// lwz r9,20(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lfd f0,32(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 32);
	// lfd f13,32(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82479f18
	if (!ctx.cr6.gt) goto loc_82479F18;
loc_8247A44C:
	// stw r3,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r3.u32);
loc_8247A450:
	// stw r7,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r7.u32);
	// b 0x82479f18
	goto loc_82479F18;
loc_8247A458:
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8247a468
	if (ctx.cr6.eq) goto loc_8247A468;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8247a518
	if (!ctx.cr6.eq) goto loc_8247A518;
loc_8247A468:
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 16);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8247a518
	if (ctx.cr0.eq) goto loc_8247A518;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8247a518
	if (!ctx.cr6.eq) goto loc_8247A518;
	// lfd f0,32(r24)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r24.u32 + 32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x8247a4e0
	if (!ctx.cr6.eq) goto loc_8247A4E0;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247a4d4
	if (ctx.cr6.eq) goto loc_8247A4D4;
	// lwz r9,20(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lfd f0,32(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 32);
	// lfd f13,32(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82479f18
	if (!ctx.cr6.gt) goto loc_82479F18;
loc_8247A4D4:
	// stw r7,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r7.u32);
	// stw r3,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r3.u32);
	// b 0x82479f18
	goto loc_82479F18;
loc_8247A4E0:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247a50c
	if (ctx.cr6.eq) goto loc_8247A50C;
	// lwz r9,20(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lfd f0,32(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 32);
	// lfd f13,32(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82479f18
	if (!ctx.cr6.lt) goto loc_82479F18;
loc_8247A50C:
	// stw r7,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r7.u32);
	// stw r3,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r3.u32);
	// b 0x82479f18
	goto loc_82479F18;
loc_8247A518:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8247A520:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_824C2E68) {
	REX_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x824c2d10
	sub_824C2D10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824C34C8) {
	REX_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// blt cr6,0x824c3558
	if (ctx.cr6.lt) goto loc_824C3558;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgt cr6,0x824c3558
	if (ctx.cr6.gt) goto loc_824C3558;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// ble cr6,0x824c34ec
	if (!ctx.cr6.gt) goto loc_824C34EC;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x824c3558
	if (ctx.cr6.lt) goto loc_824C3558;
loc_824C34EC:
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// blt cr6,0x824c3558
	if (ctx.cr6.lt) goto loc_824C3558;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgt cr6,0x824c3558
	if (ctx.cr6.gt) goto loc_824C3558;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// ble cr6,0x824c3510
	if (!ctx.cr6.gt) goto loc_824C3510;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x824c3558
	if (ctx.cr6.lt) goto loc_824C3558;
loc_824C3510:
	// lbz r11,2(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// blt cr6,0x824c3558
	if (ctx.cr6.lt) goto loc_824C3558;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgt cr6,0x824c3558
	if (ctx.cr6.gt) goto loc_824C3558;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// ble cr6,0x824c3534
	if (!ctx.cr6.gt) goto loc_824C3534;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x824c3558
	if (ctx.cr6.lt) goto loc_824C3558;
loc_824C3534:
	// lbz r11,3(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// blt cr6,0x824c3558
	if (ctx.cr6.lt) goto loc_824C3558;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgt cr6,0x824c3558
	if (ctx.cr6.gt) goto loc_824C3558;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_824C3558:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,6244
	ctx.r4.s64 = ctx.r11.s64 + 6244;
	// b 0x8243c460
	sub_8243C460(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824C5540) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824c5558
	if (!ctx.cr6.eq) goto loc_824C5558;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_824C5558:
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r10,32(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r10,36(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r10,40(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r10,44(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r10,48(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C7868) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// b 0x824c77f8
	sub_824C77F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824C7B18) {
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
	ctx.lr = 0x824C7B20;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,332(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 332);
	// li r25,0
	r25.s64 = 0;
	// lwz r27,432(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 432);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824c7b9c
	if (!ctx.cr6.gt) goto loc_824C7B9C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r30,r3,332
	r30.s64 = ctx.r3.s64 + 332;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
loc_824C7B4C:
	// lwzu r11,4(r30)
	ea = 4 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r8,152(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 152);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,32(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// addi r10,r10,18
	ctx.r10.s64 = ctx.r10.s64 + 18;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mullw r5,r8,r9
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lwzx r4,r11,r27
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// bctrl 
	ctx.lr = 0x824C7B88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,332(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 332);
	// stwu r3,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824c7b4c
	if (ctx.cr6.lt) goto loc_824C7B4C;
loc_824C7B9C:
	// lwz r23,24(r27)
	r23.u64 = REX_LOAD_U32(r27.u32 + 24);
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x824c7cb8
	if (!ctx.cr6.lt) goto loc_824C7CB8;
	// rlwinm r24,r23,2,0,29
	r24.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
loc_824C7BB0:
	// lwz r26,20(r27)
	r26.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r11,352(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 352);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824c7ca0
	if (!ctx.cr6.lt) goto loc_824C7CA0;
	// addi r22,r27,32
	r22.s64 = r27.s64 + 32;
loc_824C7BC4:
	// lwz r11,332(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 332);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824c7c70
	if (!ctx.cr6.gt) goto loc_824C7C70;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// addi r31,r28,336
	r31.s64 = r28.s64 + 336;
loc_824C7BE0:
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r9,52(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 52);
	// lwz r10,56(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 56);
	// mullw r11,r9,r26
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r26.s32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824c7c58
	if (!ctx.cr6.gt) goto loc_824C7C58;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r4,r11,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r5,r10,r24
	ctx.r5.u64 = ctx.r10.u64 + r24.u64;
loc_824C7C08:
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// ble cr6,0x824c7c44
	if (!ctx.cr6.gt) goto loc_824C7C44;
	// addi r9,r6,7
	ctx.r9.s64 = ctx.r6.s64 + 7;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r27
	ctx.r8.u64 = ctx.r9.u64 + r27.u64;
loc_824C7C28:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// lwz r9,52(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 52);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x824c7c28
	if (ctx.cr6.lt) goto loc_824C7C28;
loc_824C7C44:
	// lwz r11,56(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 56);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824c7c08
	if (ctx.cr6.lt) goto loc_824C7C08;
loc_824C7C58:
	// lwz r11,332(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 332);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824c7be0
	if (ctx.cr6.lt) goto loc_824C7BE0;
loc_824C7C70:
	// lwz r11,448(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 448);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824C7C88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824c7cfc
	if (ctx.cr6.eq) goto loc_824C7CFC;
	// lwz r11,352(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 352);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c7bc4
	if (ctx.cr6.lt) goto loc_824C7BC4;
loc_824C7CA0:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// stw r25,20(r27)
	REX_STORE_U32(r27.u32 + 20, r25.u32);
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824c7bb0
	if (ctx.cr6.lt) goto loc_824C7BB0;
loc_824C7CB8:
	// lwz r11,152(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 152);
	// lwz r9,324(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 324);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,152(r28)
	REX_STORE_U32(r28.u32 + 152, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x824c7d58
	if (!ctx.cr6.lt) goto loc_824C7D58;
	// lwz r8,332(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 332);
	// lwz r10,432(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 432);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x824c7d10
	if (!ctx.cr6.gt) goto loc_824C7D10;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r25,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, r25.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r25.u32);
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
loc_824C7CFC:
	// stw r23,24(r27)
	REX_STORE_U32(r27.u32 + 24, r23.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r26,20(r27)
	REX_STORE_U32(r27.u32 + 20, r26.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
loc_824C7D10:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lwz r11,336(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 336);
	// bge cr6,0x824c7d3c
	if (!ctx.cr6.lt) goto loc_824C7D3C;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, r25.u32);
	// stw r25,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r25.u32);
	// stw r9,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
loc_824C7D3C:
	// lwz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, r25.u32);
	// stw r25,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r25.u32);
	// stw r9,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
loc_824C7D58:
	// lwz r11,440(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 440);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824C7D6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_824D6B20) {
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
	ctx.lr = 0x824D6B28;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// bl 0x824d2d48
	ctx.lr = 0x824D6B5C;
	sub_824D2D48(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r10,r7
	ctx.r10.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// addi r8,r11,-26296
	ctx.r8.s64 = ctx.r11.s64 + -26296;
	// cntlzw r9,r4
	ctx.r9.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// subfic r11,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// subfic r6,r9,31
	ctx.xer.ca = ctx.r9.u32 <= 31;
	ctx.r6.u64 = static_cast<uint64_t>(31) - ctx.r9.u64;
	// rlwinm r9,r26,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	// add r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r10,r26,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lbzx r8,r25,r8
	ctx.r8.u64 = REX_LOAD_U8(r25.u32 + ctx.r8.u32);
	// slw r8,r8,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r5.u8 & 0x3F));
	// rlwinm r19,r8,29,3,31
	r19.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// beq cr6,0x824d6c08
	if (ctx.cr6.eq) goto loc_824D6C08;
	// subf r8,r9,r27
	ctx.r8.u64 = r27.u64 - ctx.r9.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subf r8,r8,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// slw r8,r3,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r8.u8 & 0x3F));
	// sraw r8,r8,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r8.s64 = ctx.r8.s32 >> temp.u32;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// bgt cr6,0x824d6bcc
	if (ctx.cr6.gt) goto loc_824D6BCC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_824D6BCC:
	// subf r8,r9,r30
	ctx.r8.u64 = r30.u64 - ctx.r9.u64;
	// addi r29,r8,-1
	r29.s64 = ctx.r8.s64 + -1;
	// add r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 + ctx.r7.u64;
	// cntlzw r5,r29
	ctx.r5.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r10,r5,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r5.u64;
	// srw r22,r8,r11
	r22.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// slw r10,r3,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// sraw r10,r10,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x824d6c00
	if (ctx.cr6.gt) goto loc_824D6C00;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_824D6C00:
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// b 0x824d6c18
	goto loc_824D6C18;
loc_824D6C08:
	// add r8,r7,r27
	ctx.r8.u64 = ctx.r7.u64 + r27.u64;
	// add r10,r4,r30
	ctx.r10.u64 = ctx.r4.u64 + r30.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// srw r22,r8,r11
	r22.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
loc_824D6C18:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// srw r23,r10,r6
	r23.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// lwz r10,332(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824d6c80
	if (ctx.cr6.eq) goto loc_824D6C80;
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// sraw r7,r7,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r7.s64 = ctx.r7.s32 >> temp.u32;
	// sraw r10,r10,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// srw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// srw r10,r9,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// b 0x824d6cd4
	goto loc_824D6CD4;
loc_824D6C80:
	// subf r10,r9,r27
	ctx.r10.u64 = r27.u64 - ctx.r9.u64;
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// srw r10,r10,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r31.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x824d6c9c
	if (ctx.cr6.gt) goto loc_824D6C9C;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_824D6C9C:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r5,r9,r30
	ctx.r5.u64 = r30.u64 - ctx.r9.u64;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// srw r10,r5,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (r31.u8 & 0x3F));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// srw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// bgt cr6,0x824d6cc4
	if (ctx.cr6.gt) goto loc_824D6CC4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_824D6CC4:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// srw r10,r10,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
loc_824D6CD4:
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x824d6cfc
	if (ctx.cr6.eq) goto loc_824D6CFC;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r9,4(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 4);
	// addi r24,r1,88
	r24.s64 = ctx.r1.s64 + 88;
	// sraw r29,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	r29.s64 = ctx.r10.s32 >> temp.u32;
	// sraw r28,r9,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	r28.s64 = ctx.r9.s32 >> temp.u32;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
loc_824D6CFC:
	// clrlwi. r11,r26,31
	ctx.r11.u64 = r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824d6d48
	if (!ctx.cr0.eq) goto loc_824D6D48;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r26,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 31) & 0x1;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824d28c8
	ctx.lr = 0x824D6D28;
	sub_824D28C8(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf r21,r3,r21
	r21.u64 = r21.u64 - ctx.r3.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r24,r1,88
	r24.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_824D6D48:
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// lwz r8,324(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824d6268
	ctx.lr = 0x824D6D6C;
	sub_824D6268(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_824E3F30) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-21432
	ctx.r9.s64 = ctx.r10.s64 + -21432;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_824E3F40:
	// lhz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x824e3f64
	if (ctx.cr6.eq) goto loc_824E3F64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,168
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 168, ctx.xer);
	// blt cr6,0x824e3f40
	if (ctx.cr6.lt) goto loc_824E3F40;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_824E3F64:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E4A80) {
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
	// stw r3,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e4b20
	if (ctx.cr0.eq) goto loc_824E4B20;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824e4ad8
	if (!ctx.cr6.eq) goto loc_824E4AD8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r10,2480(r11)
	REX_STORE_U32(ctx.r11.u32 + 2480, ctx.r10.u32);
	// b 0x824e4b20
	goto loc_824E4B20;
loc_824E4AD8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r4,r11,16389
	ctx.r4.u64 = ctx.r11.u64 | 16389;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824e4600
	ctx.lr = 0x824E4AF8;
	sub_824E4600(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823fcda8
	ctx.lr = 0x824E4B00;
	sub_823FCDA8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824e4b48
	goto loc_824E4B48;
loc_824E4B20:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,2480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2480);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824e4b44
	if (ctx.cr6.lt) goto loc_824E4B44;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_824E4B44:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_824E4B48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824EABC0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,19936(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 19936);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lwz r10,19944(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 19944);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lwz r10,19940(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 19940);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,19936(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 19936);
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,19948(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 19948);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824ED9F0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824eda34
	if (!ctx.cr6.eq) goto loc_824EDA34;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-26952
	ctx.r6.s64 = ctx.r11.s64 + -26952;
	// addi r5,r10,-26968
	ctx.r5.s64 = ctx.r10.s64 + -26968;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,391
	ctx.r7.s64 = 391;
	// bl 0x824ea978
	ctx.lr = 0x824EDA2C;
	sub_824EA978(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824eda44
	goto loc_824EDA44;
loc_824EDA34:
	// bl 0x824f19a8
	ctx.lr = 0x824EDA38;
	sub_824F19A8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824f2a20
	ctx.lr = 0x824EDA44;
	sub_824F2A20(ctx, base);
loc_824EDA44:
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

DEFINE_REX_FUNC(sub_824EF188) {
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
	// bne cr6,0x824ef1c4
	if (!ctx.cr6.eq) goto loc_824EF1C4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-26736
	ctx.r6.s64 = ctx.r11.s64 + -26736;
	// addi r5,r10,-26220
	ctx.r5.s64 = ctx.r10.s64 + -26220;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,2334
	ctx.r7.s64 = 2334;
	// bl 0x824ea978
	ctx.lr = 0x824EF1C4;
	sub_824EA978(ctx, base);
loc_824EF1C4:
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

DEFINE_REX_FUNC(sub_824EFB70) {
	REX_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824efb9c
	if (!ctx.cr6.eq) goto loc_824EFB9C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-26736
	ctx.r6.s64 = ctx.r11.s64 + -26736;
	// addi r5,r10,-26492
	ctx.r5.s64 = ctx.r10.s64 + -26492;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,3575
	ctx.r7.s64 = 3575;
	// b 0x824ea978
	sub_824EA978(ctx, base);
	return;
loc_824EFB9C:
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x825a28c0
	sub_825A28C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824F0A08) {
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
	ctx.lr = 0x824F0A10;
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// addi r29,r10,-25912
	r29.s64 = ctx.r10.s64 + -25912;
	// bne cr6,0x824f0a58
	if (!ctx.cr6.eq) goto loc_824F0A58;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-26852
	ctx.r5.s64 = ctx.r11.s64 + -26852;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1284
	ctx.r7.s64 = 1284;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F0A58;
	sub_824EA978(ctx, base);
loc_824F0A58:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824F0A6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x824f0a98
	if (!ctx.cr0.eq) goto loc_824F0A98;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-25088
	ctx.r5.s64 = ctx.r11.s64 + -25088;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1293
	ctx.r7.s64 = 1293;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F0A90;
	sub_824EA978(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x824f0ab8
	goto loc_824F0AB8;
loc_824F0A98:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, r28.u32);
	// stw r27,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, r27.u32);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r26,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, r26.u32);
	// lwz r3,2436(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2436);
	// bl 0x824ef768
	ctx.lr = 0x824F0AB4;
	sub_824EF768(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824F0AB8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824F70D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824f7114
	if (ctx.cr0.eq) goto loc_824F7114;
	// b 0x824f70f8
	goto loc_824F70F8;
loc_824F70EC:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824f7104
	if (ctx.cr0.eq) goto loc_824F7104;
loc_824F70F8:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f70ec
	if (!ctx.cr6.eq) goto loc_824F70EC;
loc_824F7104:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824f70f8
	if (!ctx.cr0.eq) goto loc_824F70F8;
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
loc_824F7114:
	// lwz r3,112(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824F8770) {
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
	ctx.lr = 0x824F8778;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824f8864
	if (ctx.cr6.eq) goto loc_824F8864;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x821aae70
	ctx.lr = 0x824F87A4;
	sub_821AAE70(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x824f8864
	if (ctx.cr0.eq) goto loc_824F8864;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f7280
	ctx.lr = 0x824F87BC;
	sub_824F7280(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f8864
	if (ctx.cr0.eq) goto loc_824F8864;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// clrlwi. r4,r11,13
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x824f87dc
	if (!ctx.cr0.eq) goto loc_824F87DC;
	// li r29,-1
	r29.s64 = -1;
	// b 0x824f87e8
	goto loc_824F87E8;
loc_824F87DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f72e8
	ctx.lr = 0x824F87E4;
	sub_824F72E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_824F87E8:
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,36(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824f8844
	if (!ctx.cr0.eq) goto loc_824F8844;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r10,-40
	ctx.xer.ca = ctx.r10.u32 > 39;
	r31.s64 = ctx.r10.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x824f8844
	if (ctx.cr0.eq) goto loc_824F8844;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14976
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14976, ctx.xer);
	// bne cr6,0x824f8844
	if (!ctx.cr6.eq) goto loc_824F8844;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f71b8
	ctx.lr = 0x824F882C;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = r31.s64 + -16;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_824F8844:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824dd560
	ctx.lr = 0x824F8864;
	sub_824DD560(ctx, base);
loc_824F8864:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825033A8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x825033DC;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = r31.s64 + -16;
	// stwx r30,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, r30.u32);
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

DEFINE_REX_FUNC(sub_82504650) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82504658;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
loc_8250466C:
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ble cr6,0x82504688
	if (!ctx.cr6.gt) goto loc_82504688;
	// bl 0x82504298
	ctx.lr = 0x82504684;
	sub_82504298(ctx, base);
	// b 0x82504690
	goto loc_82504690;
loc_82504688:
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// bl 0x82504390
	ctx.lr = 0x82504690;
	sub_82504390(ctx, base);
loc_82504690:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82504708
	if (ctx.cr6.eq) goto loc_82504708;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// beq cr6,0x82504714
	if (ctx.cr6.eq) goto loc_82504714;
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
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bge cr6,0x82504724
	if (!ctx.cr6.lt) goto loc_82504724;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r3,r28
	ctx.r10.u64 = ctx.r3.u64 + r28.u64;
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// rlwinm r4,r10,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825046f0
	if (!ctx.cr0.eq) goto loc_825046F0;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x825046fc
	goto loc_825046FC;
loc_825046F0:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_825046FC:
	// add r10,r4,r29
	ctx.r10.u64 = ctx.r4.u64 + r29.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8250466c
	if (!ctx.cr6.gt) goto loc_8250466C;
loc_82504708:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8250470C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82504714:
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x82504728
	goto loc_82504728;
loc_82504724:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
loc_82504728:
	// rlwimi r11,r3,2,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8250470c
	goto loc_8250470C;
}

DEFINE_REX_FUNC(sub_8250E400) {
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
	ctx.lr = 0x8250E408;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// bl 0x824ff9c0
	ctx.lr = 0x8250E424;
	sub_824FF9C0(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15360
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15360, ctx.xer);
	// beq cr6,0x8250e634
	if (ctx.cr6.eq) goto loc_8250E634;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824ffcc0
	ctx.lr = 0x8250E444;
	sub_824FFCC0(ctx, base);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
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
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r9,48(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// rlwimi r9,r10,0,8,8
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000) | (ctx.r9.u64 & 0xFFFFFFFFFF7FFFFF);
	// stw r9,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// lwz r10,76(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 76);
	// rlwimi r11,r10,0,9,9
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000) | (ctx.r11.u64 & 0xFFFFFFFFFFBFFFFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// rlwimi r10,r11,0,8,8
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000) | (ctx.r10.u64 & 0xFFFFFFFFFF7FFFFF);
	// stw r10,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,112(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 112);
	// stw r10,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// lwz r10,76(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 76);
	// rlwimi r11,r10,0,7,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000) | (ctx.r11.u64 & 0xFFFFFFFFFEFFFFFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// rlwimi r10,r11,0,6,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000) | (ctx.r10.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r10,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 108);
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250e4f0
	if (ctx.cr6.eq) goto loc_8250E4F0;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8250E4F0:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c69a0
	ctx.lr = 0x8250E4FC;
	sub_825C69A0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwimi r11,r10,0,4,4
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000) | (ctx.r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x825c67e8
	ctx.lr = 0x8250E51C;
	sub_825C67E8(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// addi r5,r31,24
	ctx.r5.s64 = r31.s64 + 24;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825bb860
	ctx.lr = 0x8250E544;
	sub_825BB860(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r29,r11,36
	r29.s64 = ctx.r11.s64 + 36;
	// stw r10,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r10.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x825c6a50
	ctx.lr = 0x8250E590;
	sub_825C6A50(ctx, base);
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r11,r31,32
	ctx.r11.s64 = r31.s64 + 32;
	// addi r10,r29,-36
	ctx.r10.s64 = r29.s64 + -36;
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// addi r11,r29,4
	ctx.r11.s64 = r29.s64 + 4;
	// stw r8,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r9,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r9.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lwz r5,96(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8250e5dc
	if (ctx.cr6.eq) goto loc_8250E5DC;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x8250E5DC;
	sub_8250B4D8(ctx, base);
loc_8250E5DC:
	// stw r27,96(r31)
	REX_STORE_U32(r31.u32 + 96, r27.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r11.u32);
	// stw r31,28(r27)
	REX_STORE_U32(r27.u32 + 28, r31.u32);
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8250e608
	goto loc_8250E608;
loc_8250E600:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8250E608:
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, ctx.xer);
	// bne cr6,0x8250e600
	if (!ctx.cr6.eq) goto loc_8250E600;
	// lwz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r11,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r11.u32);
	// stw r25,4(r26)
	REX_STORE_U32(r26.u32 + 4, r25.u32);
	// stw r26,12(r25)
	REX_STORE_U32(r25.u32 + 12, r26.u32);
	// bl 0x8257dfd8
	ctx.lr = 0x8250E630;
	sub_8257DFD8(ctx, base);
	// mr r30,r31
	r30.u64 = r31.u64;
loc_8250E634:
	// addi r31,r30,24
	r31.s64 = r30.s64 + 24;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,108
	ctx.r6.s64 = 108;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825bb860
	ctx.lr = 0x8250E654;
	sub_825BB860(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f4,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,20268(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20268);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// bl 0x825c1a18
	ctx.lr = 0x8250E67C;
	sub_825C1A18(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ac70
	ctx.lr = 0x8250E690;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8250E69C;
	sub_8250AD28(ctx, base);
	// stw r3,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ac70
	ctx.lr = 0x8250E6B0;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8250E6BC;
	sub_8250AD28(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r3,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwimi r10,r11,0,14,12
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF) | (ctx.r10.u64 & 0x40000);
	// stw r10,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// bl 0x8250ad28
	ctx.lr = 0x8250E6E4;
	sub_8250AD28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250adf0
	ctx.lr = 0x8250E6F4;
	sub_8250ADF0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825bb860
	ctx.lr = 0x8250E710;
	sub_825BB860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x8250ab60
	ctx.lr = 0x8250E72C;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8250E738;
	sub_8250AD28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82531968) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x825319cc
	if (!ctx.cr6.eq) goto loc_825319CC;
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x824f7d10
	ctx.lr = 0x82531998;
	sub_824F7D10(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r8,r31,1
	ctx.r8.u64 = r31.u64 | 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r7,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// b 0x825319ec
	goto loc_825319EC;
loc_825319CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825319e0
	if (ctx.cr0.eq) goto loc_825319E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825319ec
	goto loc_825319EC;
loc_825319E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
loc_825319EC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r30.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82542898) {
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
	ctx.lr = 0x825428A0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82130e88
	ctx.lr = 0x825428B8;
	sub_82130E88(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,115
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 115, ctx.xer);
	// beq cr6,0x825428f4
	if (ctx.cr6.eq) goto loc_825428F4;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x825428f4
	if (ctx.cr6.eq) goto loc_825428F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7708
	ctx.lr = 0x825428D8;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// beq 0x82542910
	if (ctx.cr0.eq) goto loc_82542910;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,652(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 652);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c2288
	ctx.lr = 0x825428F4;
	sub_825C2288(ctx, base);
loc_825428F4:
	// li r31,0
	r31.s64 = 0;
loc_825428F8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82130e88
	ctx.lr = 0x82542904;
	sub_82130E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
loc_82542910:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,660(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 660);
	// bl 0x8254f8d8
	ctx.lr = 0x8254291C;
	sub_8254F8D8(ctx, base);
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r29,r30,25,25,31
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r29,115
	ctx.cr6.compare<uint32_t>(r29.u32, 115, ctx.xer);
	// beq cr6,0x825428f4
	if (ctx.cr6.eq) goto loc_825428F4;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x825428f4
	if (!ctx.cr6.eq) goto loc_825428F4;
	// rlwinm. r11,r30,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825428f8
	if (!ctx.cr0.eq) goto loc_825428F8;
	// rlwinm. r11,r30,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825428f8
	if (!ctx.cr0.eq) goto loc_825428F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82503a60
	ctx.lr = 0x82542950;
	sub_82503A60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825429cc
	if (ctx.cr0.eq) goto loc_825429CC;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ r30.u64;
	// rlwinm. r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82542990
	if (ctx.cr0.eq) goto loc_82542990;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,652(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 652);
	// rlwinm r5,r30,31,28,31
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0xF;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8255e778
	ctx.lr = 0x82542988;
	sub_8255E778(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250aed8
	ctx.lr = 0x82542990;
	sub_8250AED8(ctx, base);
loc_82542990:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82531ba8
	ctx.lr = 0x825429A4;
	sub_82531BA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82542ab8
	if (ctx.cr0.eq) goto loc_82542AB8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82538a80
	ctx.lr = 0x825429C4;
	sub_82538A80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82542ab8
	goto loc_82542AB8;
loc_825429CC:
	// cmplwi cr6,r29,100
	ctx.cr6.compare<uint32_t>(r29.u32, 100, ctx.xer);
	// bne cr6,0x82542ab8
	if (!ctx.cr6.eq) goto loc_82542AB8;
	// lwz r29,48(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm. r10,r30,31,30,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r30,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0xF;
	// bne 0x82542a80
	if (!ctx.cr0.eq) goto loc_82542A80;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,7296
	ctx.r10.s64 = 7296;
	// rlwinm r9,r11,0,27,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// rlwimi r10,r11,30,25,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x60) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF9F);
	// rlwinm r9,r9,0,24,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// li r9,68
	ctx.r9.s64 = 68;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_82542A08:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82542a70
	if (ctx.cr6.eq) goto loc_82542A70;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82542a68
	if (ctx.cr6.eq) goto loc_82542A68;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r8,r11,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82542a68
	if (ctx.cr0.eq) goto loc_82542A68;
	// rlwinm r8,r11,22,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r7,r11,24,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r7,r9,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r8,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r8,r11,26,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwinm r6,r11,28,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// rlwimi r8,r7,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// srw r7,r9,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r7,r8,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r8,r7,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82542A68:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82542a08
	goto loc_82542A08;
loc_82542A70:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250aed8
	ctx.lr = 0x82542A78;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
loc_82542A80:
	// rlwinm. r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82542ab8
	if (!ctx.cr0.eq) goto loc_82542AB8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// rlwinm r9,r11,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82542ab8
	if (!ctx.cr6.gt) goto loc_82542AB8;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwimi r11,r10,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r5,660(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 660);
	// bl 0x8254f428
	ctx.lr = 0x82542AB8;
	sub_8254F428(ctx, base);
loc_82542AB8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_82542ABC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82542af4
	if (ctx.cr6.eq) goto loc_82542AF4;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82542aec
	if (ctx.cr6.eq) goto loc_82542AEC;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x82542aec
	if (!ctx.cr6.eq) goto loc_82542AEC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82542af8
	if (!ctx.cr0.eq) goto loc_82542AF8;
loc_82542AEC:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82542abc
	goto loc_82542ABC;
loc_82542AF4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82542AF8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82542b08
	if (ctx.cr6.eq) goto loc_82542B08;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825335b8
	ctx.lr = 0x82542B08;
	sub_825335B8(ctx, base);
loc_82542B08:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8253c510
	ctx.lr = 0x82542B18;
	sub_8253C510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825428f8
	if (ctx.cr0.eq) goto loc_825428F8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825bad90
	ctx.lr = 0x82542B2C;
	sub_825BAD90(ctx, base);
	// b 0x825428f4
	goto loc_825428F4;
}

DEFINE_REX_FUNC(sub_82559788) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82559790;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r30,4(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
loc_825597B0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82559810
	if (ctx.cr6.eq) goto loc_82559810;
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82559808
	if (ctx.cr6.eq) goto loc_82559808;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825597dc
	if (ctx.cr0.eq) goto loc_825597DC;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x825597e0
	if (ctx.cr0.eq) goto loc_825597E0;
loc_825597DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825597E0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82559808
	if (ctx.cr0.eq) goto loc_82559808;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15104, ctx.xer);
	// bne cr6,0x82559808
	if (!ctx.cr6.eq) goto loc_82559808;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82552fb8
	ctx.lr = 0x82559808;
	sub_82552FB8(ctx, base);
loc_82559808:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x825597b0
	goto loc_825597B0;
loc_82559810:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825609B8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c8c
	ctx.lr = 0x825609C0;
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r18,0
	r18.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r17,r18
	r17.u64 = r18.u64;
loc_825609DC:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// stw r18,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r18.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r21,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r21.u32);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// b 0x82560a04
	goto loc_82560A04;
loc_82560A00:
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
loc_82560A04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82560a20
	if (ctx.cr6.eq) goto loc_82560A20;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x82560a24
	if (!ctx.cr6.eq) goto loc_82560A24;
loc_82560A20:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82560A24:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82561150
	if (!ctx.cr0.eq) goto loc_82561150;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x825537d0
	ctx.lr = 0x82560A34;
	sub_825537D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r20,0(r11)
	r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x8255e488
	ctx.lr = 0x82560A48;
	sub_8255E488(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82559bb8
	ctx.lr = 0x82560A50;
	sub_82559BB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82560bd8
	if (ctx.cr0.eq) goto loc_82560BD8;
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
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
	// addi r27,r11,16
	r27.s64 = ctx.r11.s64 + 16;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82560bd8
	if (!ctx.cr6.eq) goto loc_82560BD8;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,1152
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1152, ctx.xer);
	// bne cr6,0x82560bd8
	if (!ctx.cr6.eq) goto loc_82560BD8;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// lwz r4,44(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,4(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 4);
	// bl 0x8255de90
	ctx.lr = 0x82560AA4;
	sub_8255DE90(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8255e488
	ctx.lr = 0x82560AB4;
	sub_8255E488(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// stw r18,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r18.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r21,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r21.u32);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x82560adc
	goto loc_82560ADC;
loc_82560AD8:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82560ADC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82560af8
	if (ctx.cr6.eq) goto loc_82560AF8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x82560afc
	if (!ctx.cr6.eq) goto loc_82560AFC;
loc_82560AF8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82560AFC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82560bc0
	if (!ctx.cr0.eq) goto loc_82560BC0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825537d0
	ctx.lr = 0x82560B0C;
	sub_825537D0(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r20
	ctx.cr6.compare<uint32_t>(r31.u32, r20.u32, ctx.xer);
	// beq cr6,0x82560ad8
	if (ctx.cr6.eq) goto loc_82560AD8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8255e488
	ctx.lr = 0x82560B24;
	sub_8255E488(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8255d480
	ctx.lr = 0x82560B38;
	sub_8255D480(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82560ad8
	if (ctx.cr0.eq) goto loc_82560AD8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r8,652(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 652);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82560790
	ctx.lr = 0x82560B5C;
	sub_82560790(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82553e38
	ctx.lr = 0x82560B70;
	sub_82553E38(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82504ce0
	ctx.lr = 0x82560B80;
	sub_82504CE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82559b18
	ctx.lr = 0x82560B88;
	sub_82559B18(ctx, base);
	// lwz r11,976(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 976);
	// addi r29,r30,972
	r29.s64 = r30.s64 + 972;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r31,976(r30)
	REX_STORE_U32(r30.u32 + 976, r31.u32);
	// stw r26,0(r27)
	REX_STORE_U32(r27.u32 + 0, r26.u32);
	// stw r18,8(r27)
	REX_STORE_U32(r27.u32 + 8, r18.u32);
	// stw r18,4(r27)
	REX_STORE_U32(r27.u32 + 4, r18.u32);
loc_82560BA4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82559b18
	ctx.lr = 0x82560BAC;
	sub_82559B18(ctx, base);
	// lwz r11,976(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 976);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_82560BB4:
	// li r17,1
	r17.s64 = 1;
	// stw r28,976(r30)
	REX_STORE_U32(r30.u32 + 976, r28.u32);
	// b 0x825609dc
	goto loc_825609DC;
loc_82560BC0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82559b18
	ctx.lr = 0x82560BC8;
	sub_82559B18(ctx, base);
	// lwz r10,976(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 976);
	// addi r11,r30,972
	ctx.r11.s64 = r30.s64 + 972;
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// stw r28,976(r30)
	REX_STORE_U32(r30.u32 + 976, r28.u32);
loc_82560BD8:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82559bb8
	ctx.lr = 0x82560BE0;
	sub_82559BB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82560f10
	if (ctx.cr0.eq) goto loc_82560F10;
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
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
	// addi r22,r11,16
	r22.s64 = ctx.r11.s64 + 16;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82560f10
	if (!ctx.cr6.eq) goto loc_82560F10;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,1408
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1408, ctx.xer);
	// bne cr6,0x82560f10
	if (!ctx.cr6.eq) goto loc_82560F10;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// lwz r4,44(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,4(r22)
	ctx.r5.u64 = REX_LOAD_U32(r22.u32 + 4);
	// bl 0x8255de90
	ctx.lr = 0x82560C34;
	sub_8255DE90(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8255e488
	ctx.lr = 0x82560C44;
	sub_8255E488(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// stw r18,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r18.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r21,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r21.u32);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// b 0x82560c6c
	goto loc_82560C6C;
loc_82560C68:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_82560C6C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82560c88
	if (ctx.cr6.eq) goto loc_82560C88;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x82560c8c
	if (!ctx.cr6.eq) goto loc_82560C8C;
loc_82560C88:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82560C8C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82560ef8
	if (!ctx.cr0.eq) goto loc_82560EF8;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825537d0
	ctx.lr = 0x82560C9C;
	sub_825537D0(ctx, base);
	// lwz r26,0(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r26,r20
	ctx.cr6.compare<uint32_t>(r26.u32, r20.u32, ctx.xer);
	// beq cr6,0x82560c68
	if (ctx.cr6.eq) goto loc_82560C68;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82559c08
	ctx.lr = 0x82560CB0;
	sub_82559C08(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82560c68
	if (ctx.cr0.eq) goto loc_82560C68;
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 & ctx.r10.u64;
	// subfe r9,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r24,r11,16
	r24.s64 = ctx.r11.s64 + 16;
	// and r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 & ctx.r10.u64;
	// addi r23,r11,28
	r23.s64 = ctx.r11.s64 + 28;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82560c68
	if (!ctx.cr6.eq) goto loc_82560C68;
	// lwz r25,0(r24)
	r25.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// bne cr6,0x82560c68
	if (!ctx.cr6.eq) goto loc_82560C68;
	// lwz r11,48(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 48);
	// lwz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 4);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r8,r9,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// clrlwi r4,r9,27
	ctx.r4.u64 = ctx.r9.u32 & 0x1F;
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// lhz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// bl 0x8252dca8
	ctx.lr = 0x82560D34;
	sub_8252DCA8(ctx, base);
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82560c68
	if (!ctx.cr6.eq) goto loc_82560C68;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82560c68
	if (!ctx.cr6.eq) goto loc_82560C68;
	// lwz r31,0(r23)
	r31.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// bne cr6,0x82560c68
	if (!ctx.cr6.eq) goto loc_82560C68;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
	// rlwinm r28,r10,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// clrlwi r4,r10,27
	ctx.r4.u64 = ctx.r10.u32 & 0x1F;
	// srw r10,r9,r28
	ctx.r10.u64 = r28.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r28.u8 & 0x3F));
	// lhz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// bl 0x8252dca8
	ctx.lr = 0x82560D94;
	sub_8252DCA8(ctx, base);
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82560c68
	if (!ctx.cr6.eq) goto loc_82560C68;
	// lwz r29,44(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r25,44(r25)
	r25.u64 = REX_LOAD_U32(r25.u32 + 44);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi. r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82560e2c
	if (!ctx.cr0.eq) goto loc_82560E2C;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,1152
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1152, ctx.xer);
	// bne cr6,0x82560e2c
	if (!ctx.cr6.eq) goto loc_82560E2C;
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// lwz r4,44(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// srw r11,r11,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r28.u8 & 0x3F));
	// clrlwi r5,r11,30
	ctx.r5.u64 = ctx.r11.u32 & 0x3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8255de90
	ctx.lr = 0x82560DE4;
	sub_8255DE90(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8255d480
	ctx.lr = 0x82560DFC;
	sub_8255D480(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82560e14
	if (ctx.cr0.eq) goto loc_82560E14;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// mr r24,r23
	r24.u64 = r23.u64;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// mr r25,r29
	r25.u64 = r29.u64;
loc_82560E14:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82559b18
	ctx.lr = 0x82560E1C;
	sub_82559B18(ctx, base);
	// lwz r10,976(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 976);
	// addi r11,r30,972
	ctx.r11.s64 = r30.s64 + 972;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r31,976(r30)
	REX_STORE_U32(r30.u32 + 976, r31.u32);
loc_82560E2C:
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// clrlwi. r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82560c68
	if (!ctx.cr0.eq) goto loc_82560C68;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,1152
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1152, ctx.xer);
	// bne cr6,0x82560c68
	if (!ctx.cr6.eq) goto loc_82560C68;
	// lwz r9,4(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 4);
	// rlwinm r10,r10,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// lwz r4,44(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r5,r11,30
	ctx.r5.u64 = ctx.r11.u32 & 0x3;
	// bl 0x8255de90
	ctx.lr = 0x82560E70;
	sub_8255DE90(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8255d480
	ctx.lr = 0x82560E88;
	sub_8255D480(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82560edc
	if (ctx.cr0.eq) goto loc_82560EDC;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,4(r23)
	ctx.r5.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwz r4,44(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x8255de90
	ctx.lr = 0x82560EA8;
	sub_8255DE90(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8255d290
	ctx.lr = 0x82560EBC;
	sub_8255D290(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256107c
	if (!ctx.cr0.eq) goto loc_8256107C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82559b18
	ctx.lr = 0x82560ECC;
	sub_82559B18(ctx, base);
	// lwz r10,976(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 976);
	// addi r11,r30,972
	ctx.r11.s64 = r30.s64 + 972;
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// stw r28,976(r30)
	REX_STORE_U32(r30.u32 + 976, r28.u32);
loc_82560EDC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82559b18
	ctx.lr = 0x82560EE4;
	sub_82559B18(ctx, base);
	// lwz r9,976(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 976);
	// addi r10,r30,972
	ctx.r10.s64 = r30.s64 + 972;
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// stw r29,976(r30)
	REX_STORE_U32(r30.u32 + 976, r29.u32);
	// b 0x82560c68
	goto loc_82560C68;
loc_82560EF8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82559b18
	ctx.lr = 0x82560F00;
	sub_82559B18(ctx, base);
	// lwz r10,976(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 976);
	// addi r11,r30,972
	ctx.r11.s64 = r30.s64 + 972;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stw r27,976(r30)
	REX_STORE_U32(r30.u32 + 976, r27.u32);
loc_82560F10:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8255c430
	ctx.lr = 0x82560F1C;
	sub_8255C430(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// stw r18,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r18.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r21,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r21.u32);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// b 0x82560f48
	goto loc_82560F48;
loc_82560F44:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
loc_82560F48:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82560f64
	if (ctx.cr6.eq) goto loc_82560F64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bne cr6,0x82560f68
	if (!ctx.cr6.eq) goto loc_82560F68;
loc_82560F64:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82560F68:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82560a00
	if (!ctx.cr0.eq) goto loc_82560A00;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825537d0
	ctx.lr = 0x82560F78;
	sub_825537D0(ctx, base);
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r28,r20
	ctx.cr6.compare<uint32_t>(r28.u32, r20.u32, ctx.xer);
	// beq cr6,0x82560a00
	if (ctx.cr6.eq) goto loc_82560A00;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8255d290
	ctx.lr = 0x82560F94;
	sub_8255D290(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256110c
	if (!ctx.cr0.eq) goto loc_8256110C;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82560f44
	if (ctx.cr0.eq) goto loc_82560F44;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8255c430
	ctx.lr = 0x82560FB0;
	sub_8255C430(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82560f44
	if (ctx.cr0.eq) goto loc_82560F44;
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
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
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// subfe r9,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r31,r11,16
	r31.s64 = ctx.r11.s64 + 16;
	// and r29,r9,r10
	r29.u64 = ctx.r9.u64 & ctx.r10.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r27,r29,16
	r27.s64 = r29.s64 + 16;
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x825b8570
	ctx.lr = 0x82560FF8;
	sub_825B8570(ctx, base);
	// lwz r5,24(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 24);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r4,20(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 16);
	// bl 0x825b8570
	ctx.lr = 0x8256100C;
	sub_825B8570(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82550110
	ctx.lr = 0x82561018;
	sub_82550110(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r4,20(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 16);
	// bl 0x82550110
	ctx.lr = 0x82561028;
	sub_82550110(ctx, base);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82560f44
	if (!ctx.cr6.eq) goto loc_82560F44;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82561044
	if (ctx.cr6.eq) goto loc_82561044;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// bne cr6,0x82561048
	if (!ctx.cr6.eq) goto loc_82561048;
loc_82561044:
	// mr r29,r18
	r29.u64 = r18.u64;
loc_82561048:
	// fadd f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 + f31.f64;
	// bl 0x8254f960
	ctx.lr = 0x82561050;
	sub_8254F960(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x825c1a60
	ctx.lr = 0x8256105C;
	sub_825C1A60(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r18,4(r31)
	REX_STORE_U32(r31.u32 + 4, r18.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r18,8(r31)
	REX_STORE_U32(r31.u32 + 8, r18.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82504ce0
	ctx.lr = 0x82561074;
	sub_82504CE0(ctx, base);
	// li r17,1
	r17.s64 = 1;
	// b 0x825609dc
	goto loc_825609DC;
loc_8256107C:
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r8,652(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 652);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82560790
	ctx.lr = 0x82561098;
	sub_82560790(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82553d98
	ctx.lr = 0x825610AC;
	sub_82553D98(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82504ce0
	ctx.lr = 0x825610BC;
	sub_82504CE0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82559b18
	ctx.lr = 0x825610C4;
	sub_82559B18(ctx, base);
	// lwz r11,976(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 976);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r31,r30,972
	r31.s64 = r30.s64 + 972;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// stw r26,976(r30)
	REX_STORE_U32(r30.u32 + 976, r26.u32);
	// stw r25,0(r22)
	REX_STORE_U32(r22.u32 + 0, r25.u32);
	// stw r18,8(r22)
	REX_STORE_U32(r22.u32 + 8, r18.u32);
	// stw r18,4(r22)
	REX_STORE_U32(r22.u32 + 4, r18.u32);
	// bl 0x82559b18
	ctx.lr = 0x825610E8;
	sub_82559B18(ctx, base);
	// lwz r11,976(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 976);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// stw r27,976(r30)
	REX_STORE_U32(r30.u32 + 976, r27.u32);
	// bl 0x82559b18
	ctx.lr = 0x825610FC;
	sub_82559B18(ctx, base);
	// lwz r11,976(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 976);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// stw r29,976(r30)
	REX_STORE_U32(r30.u32 + 976, r29.u32);
	// b 0x82560ba4
	goto loc_82560BA4;
loc_8256110C:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82504ce0
	ctx.lr = 0x82561118;
	sub_82504CE0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82504ce0
	ctx.lr = 0x82561124;
	sub_82504CE0(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82559b18
	ctx.lr = 0x8256112C;
	sub_82559B18(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82559b18
	ctx.lr = 0x82561134;
	sub_82559B18(ctx, base);
	// lwz r10,976(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 976);
	// addi r11,r30,972
	ctx.r11.s64 = r30.s64 + 972;
	// stw r10,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r20,0
	ctx.r10.u64 = __builtin_rotateleft32(r20.u32, 0);
	// stw r20,976(r30)
	REX_STORE_U32(r30.u32 + 976, r20.u32);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x82560bb4
	goto loc_82560BB4;
loc_82561150:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_825ABA08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825ABA10;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,28(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x825a60d8
	ctx.lr = 0x825ABA24;
	sub_825A60D8(ctx, base);
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x825abb00
	if (ctx.cr6.lt) goto loc_825ABB00;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bge cr6,0x825abba0
	if (!ctx.cr6.lt) goto loc_825ABBA0;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x825aba60
	if (!ctx.cr6.eq) goto loc_825ABA60;
	// li r9,86
	ctx.r9.s64 = 86;
	// sth r9,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r9,r11,17,3,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFE000FFFF);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// b 0x825aba78
	goto loc_825ABA78;
loc_825ABA60:
	// li r10,86
	ctx.r10.s64 = 86;
	// li r9,3
	ctx.r9.s64 = 3;
	// sth r10,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r10.u16);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r8,r9,16,3,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x1FFF0000) | (ctx.r8.u64 & 0xFFFFFFFFE000FFFF);
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_825ABA78:
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// sth r3,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r3.u16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r9,r11,18,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm. r9,r9,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// beq 0x825abab0
	if (ctx.cr0.eq) goto loc_825ABAB0;
	// lwz r9,32(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_825ABAB0:
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825abac8
	if (ctx.cr0.eq) goto loc_825ABAC8;
	// lwz r9,44(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 44);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_825ABAC8:
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r31,r10,4
	r31.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825abaec
	if (ctx.cr0.eq) goto loc_825ABAEC;
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825ABAEC:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825abba0
	if (ctx.cr0.eq) goto loc_825ABBA0;
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// b 0x825abb98
	goto loc_825ABB98;
loc_825ABB00:
	// li r9,86
	ctx.r9.s64 = 86;
	// sth r9,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r9,r10,16,3,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x1FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFE000FFFF);
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// sth r3,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r3.u16);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r9,r11,18,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm. r9,r9,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// beq 0x825abb4c
	if (ctx.cr0.eq) goto loc_825ABB4C;
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_825ABB4C:
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825abb64
	if (ctx.cr0.eq) goto loc_825ABB64;
	// lwz r9,40(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 40);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_825ABB64:
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r31,r10,4
	r31.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825abb88
	if (ctx.cr0.eq) goto loc_825ABB88;
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825ABB88:
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825abba0
	if (ctx.cr0.eq) goto loc_825ABBA0;
	// lwz r10,44(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 44);
loc_825ABB98:
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825ABBA0:
	// li r9,108
	ctx.r9.s64 = 108;
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// sth r9,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r9.u16);
	// li r8,112
	ctx.r8.s64 = 112;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r6,r6,0,16,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r6,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// li r7,111
	ctx.r7.s64 = 111;
	// lwz r6,23360(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 23360);
	// sth r6,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r6.u16);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r6,r11,18,8,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r6,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// lwz r6,23360(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 23360);
	// sth r6,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r6.u16);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r6,r11,18,8,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r3,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r3.u16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r9,r11,18,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r8,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,0,16,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,23360(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 23360);
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r9,r11,18,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,23360(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 23360);
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r9,r11,18,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r7,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,0,16,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,23360(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 23360);
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r9,r11,18,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,23360(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 23360);
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r9,r11,18,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825B9880) {
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
	ctx.lr = 0x825B9888;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// bne cr6,0x825b98f0
	if (!ctx.cr6.eq) goto loc_825B98F0;
	// bl 0x8254fa20
	ctx.lr = 0x825B98B4;
	sub_8254FA20(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x826a18c8
	ctx.lr = 0x825B98BC;
	sub_826A18C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825b98d0
	if (ctx.cr0.eq) goto loc_825B98D0;
	// stfd f31,0(r29)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r29.u32 + 0, f31.u64);
	// stfd f31,0(r28)
	REX_STORE_U64(r28.u32 + 0, f31.u64);
	// b 0x825b99e0
	goto loc_825B99E0;
loc_825B98D0:
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfd f13,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.f13.u64);
	// b 0x825b99dc
	goto loc_825B99DC;
loc_825B98F0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b9940
	if (ctx.cr6.eq) goto loc_825B9940;
loc_825B98FC:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x825b9914
	if (ctx.cr6.eq) goto loc_825B9914;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b98fc
	if (!ctx.cr6.eq) goto loc_825B98FC;
loc_825B9914:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b9940
	if (ctx.cr6.eq) goto loc_825B9940;
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// addi r9,r30,5
	ctx.r9.s64 = r30.s64 + 5;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// stfd f0,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.f0.u64);
	// lfdx f0,r9,r11
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// stfd f0,0(r28)
	REX_STORE_U64(r28.u32 + 0, ctx.f0.u64);
	// b 0x825b99e0
	goto loc_825B99E0;
loc_825B9940:
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// bne cr6,0x825b999c
	if (!ctx.cr6.eq) goto loc_825B999C;
	// rlwinm r11,r31,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFF000;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r6,r10,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// rlwinm r5,r10,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// rlwinm r4,r10,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824f71b8
	ctx.lr = 0x825B9968;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-8
	ctx.r11.s64 = r31.s64 + -8;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r11,r11,0,1,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825b999c
	if (!ctx.cr6.eq) goto loc_825B999C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// lfd f13,3728(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 3728);
	// stfd f0,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.f0.u64);
	// stfd f13,0(r28)
	REX_STORE_U64(r28.u32 + 0, ctx.f13.u64);
	// b 0x825b99e0
	goto loc_825B99E0;
loc_825B999C:
	// lhz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 14);
	// rlwinm r10,r30,2,16,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825b85e8
	ctx.lr = 0x825B99B8;
	sub_825B85E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825b99e0
	if (!ctx.cr0.eq) goto loc_825B99E0;
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfd f0,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.f0.u64);
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
loc_825B99DC:
	// stfd f0,0(r28)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r28.u32 + 0, ctx.f0.u64);
loc_825B99E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825C5DF0) {
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
	ctx.lr = 0x825C5DF8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r28,12(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// rlwinm r29,r11,27,24,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// clrlwi r30,r11,27
	r30.u64 = ctx.r11.u32 & 0x1F;
loc_825C5E20:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x825c5fbc
	if (ctx.cr6.eq) goto loc_825C5FBC;
	// cmpwi cr6,r11,104
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 104, ctx.xer);
	// beq cr6,0x825c5f30
	if (ctx.cr6.eq) goto loc_825C5F30;
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// bne cr6,0x825c5fa8
	if (!ctx.cr6.eq) goto loc_825C5FA8;
	// rlwinm r11,r27,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFF000;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x825c46b0
	ctx.lr = 0x825C5E68;
	sub_825C46B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c5fa8
	if (ctx.cr0.eq) goto loc_825C5FA8;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825c5fa8
	if (ctx.cr6.eq) goto loc_825C5FA8;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm. r11,r10,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c5e98
	if (ctx.cr0.eq) goto loc_825C5E98;
	// rlwinm. r11,r30,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c5e98
	if (ctx.cr0.eq) goto loc_825C5E98;
loc_825C5E90:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825c5ec0
	goto loc_825C5EC0;
loc_825C5E98:
	// rlwinm. r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c5ea8
	if (ctx.cr0.eq) goto loc_825C5EA8;
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c5e90
	if (!ctx.cr0.eq) goto loc_825C5E90;
loc_825C5EA8:
	// rlwinm. r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c5ebc
	if (ctx.cr0.eq) goto loc_825C5EBC;
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x825c5ec0
	if (!ctx.cr0.eq) goto loc_825C5EC0;
loc_825C5EBC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825C5EC0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c5fa8
	if (ctx.cr0.eq) goto loc_825C5FA8;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm. r8,r10,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// or r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 | ctx.r11.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// or r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// or r29,r8,r11
	r29.u64 = ctx.r8.u64 | ctx.r11.u64;
	// beq 0x825c5f00
	if (ctx.cr0.eq) goto loc_825C5F00;
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c5f00
	if (ctx.cr0.eq) goto loc_825C5F00;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_825C5F00:
	// and r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 & r30.u64;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c5f14
	if (ctx.cr0.eq) goto loc_825C5F14;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r9,r30,-4
	ctx.r9.s64 = r30.s64 + -4;
loc_825C5F14:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c5f28
	if (ctx.cr0.eq) goto loc_825C5F28;
	// rlwinm. r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c5f28
	if (ctx.cr0.eq) goto loc_825C5F28;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_825C5F28:
	// or r30,r10,r9
	r30.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x825c5e20
	goto loc_825C5E20;
loc_825C5F30:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x825c5fa8
	if (!ctx.cr6.eq) goto loc_825C5FA8;
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r11,r9,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c5fa8
	if (!ctx.cr0.eq) goto loc_825C5FA8;
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15104, ctx.xer);
	// beq cr6,0x825c5fa8
	if (ctx.cr6.eq) goto loc_825C5FA8;
	// rlwinm. r10,r9,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
	// beq 0x825c5f78
	if (ctx.cr0.eq) goto loc_825C5F78;
	// rlwinm. r10,r30,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825c5f78
	if (ctx.cr0.eq) goto loc_825C5F78;
loc_825C5F70:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x825c5fa0
	goto loc_825C5FA0;
loc_825C5F78:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825c5f88
	if (ctx.cr0.eq) goto loc_825C5F88;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c5f70
	if (!ctx.cr0.eq) goto loc_825C5F70;
loc_825C5F88:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825c5f9c
	if (ctx.cr0.eq) goto loc_825C5F9C;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne 0x825c5fa0
	if (!ctx.cr0.eq) goto loc_825C5FA0;
loc_825C5F9C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825C5FA0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c6064
	if (!ctx.cr0.eq) goto loc_825C6064;
loc_825C5FA8:
	// stw r28,0(r25)
	REX_STORE_U32(r25.u32 + 0, r28.u32);
	// stw r29,0(r24)
	REX_STORE_U32(r24.u32 + 0, r29.u32);
	// stw r30,0(r23)
	REX_STORE_U32(r23.u32 + 0, r30.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_825C5FBC:
	// lwz r31,44(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 44);
	// lwz r4,48(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7010
	ctx.lr = 0x825C5FCC;
	sub_824F7010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c5fa8
	if (ctx.cr0.eq) goto loc_825C5FA8;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm. r11,r9,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c5fa8
	if (!ctx.cr0.eq) goto loc_825C5FA8;
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15104, ctx.xer);
	// beq cr6,0x825c5fa8
	if (ctx.cr6.eq) goto loc_825C5FA8;
	// rlwinm. r10,r9,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
	// beq 0x825c6010
	if (ctx.cr0.eq) goto loc_825C6010;
	// rlwinm. r10,r30,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825c6010
	if (ctx.cr0.eq) goto loc_825C6010;
loc_825C6008:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x825c6038
	goto loc_825C6038;
loc_825C6010:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825c6020
	if (ctx.cr0.eq) goto loc_825C6020;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c6008
	if (!ctx.cr0.eq) goto loc_825C6008;
loc_825C6020:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825c6034
	if (ctx.cr0.eq) goto loc_825C6034;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne 0x825c6038
	if (!ctx.cr0.eq) goto loc_825C6038;
loc_825C6034:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825C6038:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825c5fa8
	if (ctx.cr0.eq) goto loc_825C5FA8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x825c6064
	if (ctx.cr6.eq) goto loc_825C6064;
	// lwz r10,28(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// lwz r7,28(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 28);
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r7,76(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 76);
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// clrlwi. r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c5fa8
	if (!ctx.cr0.eq) goto loc_825C5FA8;
loc_825C6064:
	// rlwinm r10,r9,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// rlwinm r9,r29,27,29,30
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x6;
	// rlwinm r7,r29,29,29,30
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0x6;
	// srw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r6,r29,31,29,30
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x6;
	// rlwinm r9,r29,1,29,30
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0x6;
	// srw r6,r10,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r29,r10,r9
	r29.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r6,r7,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// rlwimi r29,r6,2,0,29
	r29.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC) | (r29.u64 & 0xFFFFFFFF00000003);
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825c60b4
	if (ctx.cr0.eq) goto loc_825C60B4;
	// rlwinm. r9,r30,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825c60b4
	if (ctx.cr0.eq) goto loc_825C60B4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_825C60B4:
	// and r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 & r30.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825c60c8
	if (ctx.cr0.eq) goto loc_825C60C8;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
loc_825C60C8:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825c60dc
	if (ctx.cr0.eq) goto loc_825C60DC;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825c60dc
	if (ctx.cr0.eq) goto loc_825C60DC;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_825C60DC:
	// or r30,r11,r10
	r30.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x825c5e20
	goto loc_825C5E20;
}

DEFINE_REX_FUNC(sub_825D5008) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,5976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5976);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D5728) {
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
	ctx.lr = 0x825D5730;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d576c
	if (!ctx.cr6.eq) goto loc_825D576C;
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
	// li r7,3857
	ctx.r7.s64 = 3857;
	// bl 0x824ea978
	ctx.lr = 0x825D576C;
	sub_824EA978(ctx, base);
loc_825D576C:
	// li r4,998
	ctx.r4.s64 = 998;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a57a8
	ctx.lr = 0x825D5778;
	sub_825A57A8(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d57bc
	if (ctx.cr6.eq) goto loc_825D57BC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d57bc
	if (ctx.cr6.eq) goto loc_825D57BC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825d1a98
	ctx.lr = 0x825D5794;
	sub_825D1A98(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5952
	ctx.r4.s64 = ctx.r10.s64 + 5952;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,93
	ctx.r6.s64 = 93;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,372(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 372);
	// bctrl 
	ctx.lr = 0x825D57BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D57BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825D8730) {
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
	ctx.lr = 0x825D8738;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,172(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// bl 0x825e7538
	ctx.lr = 0x825D8750;
	sub_825E7538(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,108(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 108);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r31,1452(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// lwz r27,28(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,32(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// bl 0x825b33a0
	ctx.lr = 0x825D8774;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// beq 0x825d8794
	if (ctx.cr0.eq) goto loc_825D8794;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x825fb4d8
	ctx.lr = 0x825D878C;
	sub_825FB4D8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x825d8798
	goto loc_825D8798;
loc_825D8794:
	// li r31,0
	r31.s64 = 0;
loc_825D8798:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825D87A8;
	sub_825F9F38(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825D87B8;
	sub_825F9F38(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825D87C8;
	sub_825F9F38(ctx, base);
	// li r29,0
	r29.s64 = 0;
loc_825D87CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D87EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// blt cr6,0x825d87cc
	if (ctx.cr6.lt) goto loc_825D87CC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,108(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 108);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825f8468
	ctx.lr = 0x825D8808;
	sub_825F8468(ctx, base);
	// lwz r3,108(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 108);
	// bl 0x825fa3f0
	ctx.lr = 0x825D8810;
	sub_825FA3F0(ctx, base);
	// lwz r3,108(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 108);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D8824;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 168);
	// bl 0x825fcb18
	ctx.lr = 0x825D8830;
	sub_825FCB18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825D8838;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825d8864
	if (!ctx.cr0.eq) goto loc_825D8864;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,9792
	ctx.r6.s64 = ctx.r11.s64 + 9792;
	// addi r5,r10,10208
	ctx.r5.s64 = ctx.r10.s64 + 10208;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,1198
	ctx.r7.s64 = 1198;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D8864;
	sub_824EA978(ctx, base);
loc_825D8864:
	// stw r31,108(r30)
	REX_STORE_U32(r30.u32 + 108, r31.u32);
	// lwz r3,96(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 96);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825D8874;
	sub_825F7718(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825E4F18) {
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
	// lwz r3,120(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e4f44
	if (ctx.cr6.eq) goto loc_825E4F44;
	// bl 0x825f7460
	ctx.lr = 0x825E4F44;
	sub_825F7460(ctx, base);
loc_825E4F44:
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// lbz r5,124(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 124);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e35d8
	ctx.lr = 0x825E4F54;
	sub_825E35D8(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e4f74
	if (ctx.cr6.eq) goto loc_825E4F74;
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r4,168(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e3e38
	ctx.lr = 0x825E4F74;
	sub_825E3E38(ctx, base);
loc_825E4F74:
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

DEFINE_REX_FUNC(sub_825E78B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825E78C0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r4,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e7948
	if (ctx.cr6.eq) goto loc_825E7948;
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e78f4
	if (!ctx.cr6.lt) goto loc_825E78F4;
loc_825E78E8:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// b 0x825e7900
	goto loc_825E7900;
loc_825E78F4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E7900;
	sub_825F7718(ctx, base);
loc_825E7900:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825e7928
	if (!ctx.cr6.eq) goto loc_825E7928;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,140(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x825e792c
	if (ctx.cr6.eq) goto loc_825E792C;
loc_825E7928:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825E792C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e7978
	if (!ctx.cr0.eq) goto loc_825E7978;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825e78e8
	if (ctx.cr6.lt) goto loc_825E78E8;
loc_825E7948:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,13848
	ctx.r6.s64 = ctx.r11.s64 + 13848;
	// addi r5,r10,19324
	ctx.r5.s64 = ctx.r10.s64 + 19324;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,572
	ctx.r7.s64 = 572;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E796C;
	sub_824EA978(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_825E7970:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_825E7978:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x825e7970
	goto loc_825E7970;
}

DEFINE_REX_FUNC(sub_825F02F8) {
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
	ctx.lr = 0x825F0300;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,44(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r18,r11,22852
	r18.s64 = ctx.r11.s64 + 22852;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r19,0
	r19.s64 = 0;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// addi r17,r10,15448
	r17.s64 = ctx.r10.s64 + 15448;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825f0650
	if (ctx.cr6.eq) goto loc_825F0650;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r21,r11,-21368
	r21.s64 = ctx.r11.s64 + -21368;
	// addi r20,r10,16932
	r20.s64 = ctx.r10.s64 + 16932;
loc_825F033C:
	// lwz r31,40(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F0354;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f03b8
	if (ctx.cr0.eq) goto loc_825F03B8;
	// lwz r11,120(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f03b8
	if (ctx.cr6.eq) goto loc_825F03B8;
	// lwz r10,12(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 12);
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825f03b8
	if (ctx.cr6.lt) goto loc_825F03B8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,40(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x825ed970
	ctx.lr = 0x825F0388;
	sub_825ED970(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f03b8
	if (ctx.cr0.eq) goto loc_825F03B8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825f7460
	ctx.lr = 0x825F0398;
	sub_825F7460(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825ef9b8
	ctx.lr = 0x825F03A4;
	sub_825EF9B8(ctx, base);
	// lwz r4,120(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 120);
	// lwz r3,12(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 12);
	// bl 0x825eca58
	ctx.lr = 0x825F03B0;
	sub_825ECA58(ctx, base);
	// lwz r26,44(r24)
	r26.u64 = REX_LOAD_U32(r24.u32 + 44);
	// b 0x825f0644
	goto loc_825F0644;
loc_825F03B8:
	// lwz r11,60(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825f04e4
	if (!ctx.cr6.gt) goto loc_825F04E4;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f04e4
	if (ctx.cr0.eq) goto loc_825F04E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7ae0
	ctx.lr = 0x825F03D8;
	sub_825D7AE0(ctx, base);
	// lwz r11,52(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 52);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r25,r19
	r25.u64 = r19.u64;
	// mr r22,r19
	r22.u64 = r19.u64;
	// mr r30,r19
	r30.u64 = r19.u64;
	// lwz r27,4(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x825f0488
	if (!ctx.cr6.gt) goto loc_825F0488;
	// mr r28,r19
	r28.u64 = r19.u64;
loc_825F03FC:
	// lwz r3,52(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 52);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825f0418
	if (!ctx.cr6.lt) goto loc_825F0418;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// b 0x825f0420
	goto loc_825F0420;
loc_825F0418:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f7718
	ctx.lr = 0x825F0420;
	sub_825F7718(ctx, base);
loc_825F0420:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 40);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bne cr6,0x825f0470
	if (!ctx.cr6.eq) goto loc_825F0470;
	// lwz r3,52(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 52);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825f0450
	if (!ctx.cr6.lt) goto loc_825F0450;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// b 0x825f0458
	goto loc_825F0458;
loc_825F0450:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f7718
	ctx.lr = 0x825F0458;
	sub_825F7718(ctx, base);
loc_825F0458:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825f0470
	if (!ctx.cr6.eq) goto loc_825F0470;
	// mr r25,r29
	r25.u64 = r29.u64;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
loc_825F0470:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(r30.s32, r27.s32, ctx.xer);
	// blt cr6,0x825f03fc
	if (ctx.cr6.lt) goto loc_825F03FC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x825f04a0
	if (!ctx.cr6.eq) goto loc_825F04A0;
loc_825F0488:
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,1496
	ctx.r7.s64 = 1496;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F04A0;
	sub_824EA978(ctx, base);
loc_825F04A0:
	// lwz r11,228(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 228);
	// rlwinm. r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825f04c0
	if (ctx.cr0.eq) goto loc_825F04C0;
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f04c0
	if (ctx.cr0.eq) goto loc_825F04C0;
	// lbz r11,56(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 56);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825f04cc
	if (!ctx.cr0.eq) goto loc_825F04CC;
loc_825F04C0:
	// lwz r11,60(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 60);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// ble cr6,0x825f04e4
	if (!ctx.cr6.gt) goto loc_825F04E4;
loc_825F04CC:
	// lwz r11,28(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 28);
	// lwz r10,28(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825f0628
	if (!ctx.cr6.lt) goto loc_825F0628;
	// lwz r26,8(r26)
	r26.u64 = REX_LOAD_U32(r26.u32 + 8);
	// b 0x825f0644
	goto loc_825F0644;
loc_825F04E4:
	// lwz r3,8(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F04FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f0528
	if (ctx.cr0.eq) goto loc_825F0528;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,12(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 12);
	// bl 0x825ec668
	ctx.lr = 0x825F0510;
	sub_825EC668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f0628
	if (ctx.cr0.eq) goto loc_825F0628;
loc_825F0518:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825f7460
	ctx.lr = 0x825F0520;
	sub_825F7460(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x825f0b90
	goto loc_825F0B90;
loc_825F0528:
	// lwz r3,8(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F053C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f0628
	if (ctx.cr0.eq) goto loc_825F0628;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// lwzx r10,r11,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825f056c
	if (ctx.cr0.eq) goto loc_825F056C;
	// addi r10,r21,4
	ctx.r10.s64 = r21.s64 + 4;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x825f0570
	if (!ctx.cr6.eq) goto loc_825F0570;
loc_825F056C:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_825F0570:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f0628
	if (ctx.cr0.eq) goto loc_825F0628;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 8);
	// bl 0x8260a6d0
	ctx.lr = 0x825F0584;
	sub_8260A6D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F05A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F05C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fa8d0
	ctx.lr = 0x825F05CC;
	sub_825FA8D0(ctx, base);
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F05EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f0608
	if (ctx.cr0.eq) goto loc_825F0608;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,12(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 12);
	// bl 0x825ec668
	ctx.lr = 0x825F0600;
	sub_825EC668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825f072c
	if (!ctx.cr0.eq) goto loc_825F072C;
loc_825F0608:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fa7a8
	ctx.lr = 0x825F061C;
	sub_825FA7A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 8);
	// bl 0x8260a650
	ctx.lr = 0x825F0628;
	sub_8260A650(ctx, base);
loc_825F0628:
	// mr r31,r26
	r31.u64 = r26.u64;
	// lwz r26,8(r26)
	r26.u64 = REX_LOAD_U32(r26.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7460
	ctx.lr = 0x825F0638;
	sub_825F7460(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r24,84
	ctx.r3.s64 = r24.s64 + 84;
	// bl 0x825f74e0
	ctx.lr = 0x825F0644;
	sub_825F74E0(ctx, base);
loc_825F0644:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825f033c
	if (!ctx.cr6.eq) goto loc_825F033C;
loc_825F0650:
	// addi r3,r24,36
	ctx.r3.s64 = r24.s64 + 36;
	// bl 0x825f73d8
	ctx.lr = 0x825F0658;
	sub_825F73D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825f0b8c
	if (!ctx.cr0.eq) goto loc_825F0B8C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825ed400
	ctx.lr = 0x825F066C;
	sub_825ED400(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq 0x825f0b8c
	if (ctx.cr0.eq) goto loc_825F0B8C;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f7460
	ctx.lr = 0x825F067C;
	sub_825F7460(ctx, base);
	// lwz r11,60(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r22,40(r23)
	r22.u64 = REX_LOAD_U32(r23.u32 + 40);
	// ble cr6,0x825f0698
	if (!ctx.cr6.gt) goto loc_825F0698;
	// lwz r11,228(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825f06b4
	if (!ctx.cr0.eq) goto loc_825F06B4;
loc_825F0698:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// addi r5,r11,16872
	ctx.r5.s64 = ctx.r11.s64 + 16872;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,1566
	ctx.r7.s64 = 1566;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F06B4;
	sub_824EA978(ctx, base);
loc_825F06B4:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825d7ae0
	ctx.lr = 0x825F06BC;
	sub_825D7AE0(ctx, base);
	// lbz r31,80(r1)
	r31.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r4,0(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// li r3,102
	ctx.r3.s64 = 102;
	// bne 0x825f06d8
	if (!ctx.cr0.eq) goto loc_825F06D8;
	// li r3,49
	ctx.r3.s64 = 49;
loc_825F06D8:
	// bl 0x825f9ad0
	ctx.lr = 0x825F06DC;
	sub_825F9AD0(ctx, base);
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// stw r19,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r19.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// bl 0x825f9a18
	ctx.lr = 0x825F06F4;
	sub_825F9A18(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825f07dc
	if (ctx.cr6.eq) goto loc_825F07DC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F0718;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825f073c
	if (!ctx.cr0.eq) goto loc_825F073C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r11,15156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 15156);
	// b 0x825f07d4
	goto loc_825F07D4;
loc_825F072C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 8);
	// bl 0x8260a650
	ctx.lr = 0x825F0738;
	sub_8260A650(ctx, base);
	// b 0x825f0518
	goto loc_825F0518;
loc_825F073C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F0758;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825f0770
	if (!ctx.cr0.eq) goto loc_825F0770;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,15156
	ctx.r11.s64 = ctx.r11.s64 + 15156;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825f07d4
	goto loc_825F07D4;
loc_825F0770:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F078C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825f07a4
	if (!ctx.cr0.eq) goto loc_825F07A4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,15156
	ctx.r11.s64 = ctx.r11.s64 + 15156;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825f07d4
	goto loc_825F07D4;
loc_825F07A4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F07C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825f0840
	if (!ctx.cr0.eq) goto loc_825F0840;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,15156
	ctx.r11.s64 = ctx.r11.s64 + 15156;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_825F07D4:
	// stw r11,132(r29)
	REX_STORE_U32(r29.u32 + 132, ctx.r11.u32);
	// b 0x825f0840
	goto loc_825F0840;
loc_825F07DC:
	// mr r31,r19
	r31.u64 = r19.u64;
loc_825F07E0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F07FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x825f0834
	if (!ctx.cr6.eq) goto loc_825F0834;
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// lwz r10,88(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r9,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825F0834;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825F0834:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x825f07e0
	if (ctx.cr6.lt) goto loc_825F07E0;
loc_825F0840:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825d7c78
	ctx.lr = 0x825F0850;
	sub_825D7C78(ctx, base);
	// lwz r11,228(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 20);
	// beq 0x825f0870
	if (ctx.cr0.eq) goto loc_825F0870;
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r22
	REX_STORE_U32(ctx.r11.u32 + r22.u32, r29.u32);
	// b 0x825f0890
	goto loc_825F0890;
loc_825F0870:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,58
	ctx.r10.s64 = ctx.r11.s64 + 58;
	// stw r11,20(r22)
	REX_STORE_U32(r22.u32 + 20, ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r22
	REX_STORE_U32(ctx.r11.u32 + r22.u32, r29.u32);
	// lwz r11,228(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 228);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,228(r22)
	REX_STORE_U32(r22.u32 + 228, ctx.r11.u32);
loc_825F0890:
	// lwz r11,24(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 24);
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,892(r29)
	REX_STORE_U32(r29.u32 + 892, r31.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r30,1456(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825F08B0;
	sub_825B33A0(ctx, base);
	// li r28,-1
	r28.s64 = -1;
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x825f091c
	if (ctx.cr0.eq) goto loc_825F091C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r31.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r29,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r29.u32);
	// stw r19,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r19.u32);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// addi r9,r9,9944
	ctx.r9.s64 = ctx.r9.s64 + 9944;
	// stw r19,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r19.u32);
	// stw r28,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r28.u32);
	// lfs f0,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r19,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r19.u32);
	// stw r19,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, r19.u32);
	// stw r19,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r19.u32);
	// stw r19,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, r19.u32);
	// stb r19,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, r19.u8);
	// stw r19,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, r19.u32);
	// stw r19,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r19.u32);
	// stw r19,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r19.u32);
	// stw r19,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r19.u32);
	// stw r19,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r19.u32);
	// b 0x825f0920
	goto loc_825F0920;
loc_825F091C:
	// mr r31,r19
	r31.u64 = r19.u64;
loc_825F0920:
	// lwz r11,228(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 228);
	// li r4,20
	ctx.r4.s64 = 20;
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,228(r29)
	REX_STORE_U32(r29.u32 + 228, ctx.r11.u32);
	// lbz r11,56(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 56);
	// stb r11,56(r31)
	REX_STORE_U8(r31.u32 + 56, ctx.r11.u8);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r27,1456(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825F0948;
	sub_825B33A0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x825f0968
	if (ctx.cr0.eq) goto loc_825F0968;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x825F0964;
	sub_825D7A48(ctx, base);
	// b 0x825f096c
	goto loc_825F096C;
loc_825F0968:
	// mr r30,r19
	r30.u64 = r19.u64;
loc_825F096C:
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r27,1456(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825F0984;
	sub_825B33A0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x825f09a4
	if (ctx.cr0.eq) goto loc_825F09A4;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x825F09A0;
	sub_825D7A48(ctx, base);
	// b 0x825f09a8
	goto loc_825F09A8;
loc_825F09A4:
	// mr r30,r19
	r30.u64 = r19.u64;
loc_825F09A8:
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r28,28(r31)
	REX_STORE_U32(r31.u32 + 28, r28.u32);
	// stw r19,36(r31)
	REX_STORE_U32(r31.u32 + 36, r19.u32);
	// lwz r11,28(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 28);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lwz r3,24(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 24);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825F09C8;
	sub_825F7718(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r27,r19
	r27.u64 = r19.u64;
	// lwz r11,52(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 52);
	// lwz r26,4(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x825f0b6c
	if (!ctx.cr6.gt) goto loc_825F0B6C;
	// mr r25,r19
	r25.u64 = r19.u64;
loc_825F09E4:
	// lwz r3,52(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 52);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825f0a00
	if (!ctx.cr6.lt) goto loc_825F0A00;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + r25.u64;
	// b 0x825f0a08
	goto loc_825F0A08;
loc_825F0A00:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x825f7718
	ctx.lr = 0x825F0A08;
	sub_825F7718(ctx, base);
loc_825F0A08:
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// bne cr6,0x825f0a28
	if (!ctx.cr6.eq) goto loc_825F0A28;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825f0a3c
	if (ctx.cr6.eq) goto loc_825F0A3C;
loc_825F0A28:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(r27.s32, r26.s32, ctx.xer);
	// blt cr6,0x825f09e4
	if (ctx.cr6.lt) goto loc_825F09E4;
	// b 0x825f0b6c
	goto loc_825F0B6C;
loc_825F0A3C:
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8260a860
	ctx.lr = 0x825F0A58;
	sub_8260A860(ctx, base);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825F0A68;
	sub_825F7718(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r9,28(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 28);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,28(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 28);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x825f0aa0
	if (!ctx.cr6.gt) goto loc_825F0AA0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// addi r5,r11,16824
	ctx.r5.s64 = ctx.r11.s64 + 16824;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,1639
	ctx.r7.s64 = 1639;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F0AA0;
	sub_824EA978(ctx, base);
loc_825F0AA0:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r28,1456(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825F0AB4;
	sub_825B33A0(ctx, base);
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// stw r23,4(r30)
	REX_STORE_U32(r30.u32 + 4, r23.u32);
	// stw r19,8(r30)
	REX_STORE_U32(r30.u32 + 8, r19.u32);
	// lwz r6,20(r22)
	ctx.r6.u64 = REX_LOAD_U32(r22.u32 + 20);
	// bl 0x8260a860
	ctx.lr = 0x825F0AE0;
	sub_8260A860(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// beq 0x825f0b08
	if (ctx.cr0.eq) goto loc_825F0B08;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// addi r5,r11,16804
	ctx.r5.s64 = ctx.r11.s64 + 16804;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,1647
	ctx.r7.s64 = 1647;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F0B08;
	sub_824EA978(ctx, base);
loc_825F0B08:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825F0B14;
	sub_825F7718(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r3,52(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 52);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825f0b38
	if (!ctx.cr6.lt) goto loc_825F0B38;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825f0b40
	goto loc_825F0B40;
loc_825F0B38:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x825f7718
	ctx.lr = 0x825F0B40;
	sub_825F7718(ctx, base);
loc_825F0B40:
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,28(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 28);
	// lwz r11,36(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 36);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,32(r23)
	REX_STORE_U32(r23.u32 + 32, ctx.r10.u32);
	// stw r11,36(r23)
	REX_STORE_U32(r23.u32 + 36, ctx.r11.u32);
loc_825F0B6C:
	// lwz r11,136(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 136);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,8(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r24)
	REX_STORE_U32(r24.u32 + 136, ctx.r11.u32);
	// bl 0x8260a650
	ctx.lr = 0x825F0B84;
	sub_8260A650(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x825f0b90
	goto loc_825F0B90;
loc_825F0B8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825F0B90:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_82627FB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82627FB8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82627FD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x8260b5b8
	ctx.lr = 0x82627FF4;
	sub_8260B5B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82628008
	if (!ctx.cr0.eq) goto loc_82628008;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x82628044
	goto loc_82628044;
loc_82628008:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r9,r30,4
	ctx.r9.s64 = r30.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x82628898
	ctx.lr = 0x82628034;
	sub_82628898(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x82628044
	if (!ctx.cr0.lt) goto loc_82628044;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82628044;
	sub_8264C3D0(ctx, base);
loc_82628044:
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82628058;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8262BF08) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2c70
	ctx.lr = 0x8262BF18;
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,32(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,36(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,40(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,44(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// bne cr6,0x8262c028
	if (!ctx.cr6.eq) goto loc_8262C028;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8262c134
	if (ctx.cr6.eq) goto loc_8262C134;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// li r8,6
	ctx.r8.s64 = 6;
	// divwu r9,r9,r8
	ctx.r9.u64 = uint32_t(ctx.r8.u32 ? ctx.r9.u32 / ctx.r8.u32 : 0);
	// li r8,96
	ctx.r8.s64 = 96;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,72
	ctx.r9.s64 = 72;
loc_8262BF8C:
	// lfs f2,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfsu f31,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	f31.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfsu f30,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	f30.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfsu f29,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	f29.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfsu f28,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	f28.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// dcbt r11,r8
	// dcbt r10,r9
	// fmuls f27,f29,f10
	f27.f64 = double(float(f29.f64 * ctx.f10.f64));
	// fmuls f29,f29,f4
	f29.f64 = double(float(f29.f64 * ctx.f4.f64));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmadds f27,f28,f9,f27
	f27.f64 = double(float(std::fma(f28.f64, ctx.f9.f64, f27.f64)));
	// fmadds f29,f28,f3,f29
	f29.f64 = double(float(std::fma(f28.f64, ctx.f3.f64, f29.f64)));
	// fmadds f28,f30,f11,f27
	f28.f64 = double(float(std::fma(f30.f64, ctx.f11.f64, f27.f64)));
	// fmadds f30,f30,f5,f29
	f30.f64 = double(float(std::fma(f30.f64, ctx.f5.f64, f29.f64)));
	// fmadds f29,f31,f12,f28
	f29.f64 = double(float(std::fma(f31.f64, ctx.f12.f64, f28.f64)));
	// fmadds f31,f31,f6,f30
	f31.f64 = double(float(std::fma(f31.f64, ctx.f6.f64, f30.f64)));
	// fmadds f30,f1,f13,f29
	f30.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, f29.f64)));
	// fmadds f1,f1,f7,f31
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f7.f64, f31.f64)));
	// fmadds f31,f2,f0,f30
	f31.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, f30.f64)));
	// fmadds f2,f2,f8,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f8.f64, ctx.f1.f64)));
	// beq cr6,0x8262c004
	if (ctx.cr6.eq) goto loc_8262C004;
	// lfs f26,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f26.f64 = double(temp.f32);
	// fadds f1,f31,f26
	ctx.f1.f64 = double(float(f31.f64 + f26.f64));
	// stfs f1,0(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f1,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f2,f2,f1
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// stfs f2,0(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x8262c00c
	goto loc_8262C00C;
loc_8262C004:
	// stfs f31,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfsu f2,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
loc_8262C00C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8262bf8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262BF8C;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2cbc
	ctx.lr = 0x8262C01C;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8262C028:
	// lfs f27,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	f27.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f26,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	f26.f64 = double(temp.f32);
	// lfs f25,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	f25.f64 = double(temp.f32);
	// lfs f24,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	f24.f64 = double(temp.f32);
	// lfs f23,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	f23.f64 = double(temp.f32);
	// lfs f22,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	f22.f64 = double(temp.f32);
	// lfs f21,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	f21.f64 = double(temp.f32);
	// lfs f20,28(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28);
	f20.f64 = double(temp.f32);
	// lfs f19,32(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32);
	f19.f64 = double(temp.f32);
	// lfs f18,36(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 36);
	f18.f64 = double(temp.f32);
	// lfs f17,40(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 40);
	f17.f64 = double(temp.f32);
	// lfs f16,44(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	f16.f64 = double(temp.f32);
	// beq cr6,0x8262c134
	if (ctx.cr6.eq) goto loc_8262C134;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// li r8,6
	ctx.r8.s64 = 6;
	// divwu r9,r9,r8
	ctx.r9.u64 = uint32_t(ctx.r8.u32 ? ctx.r9.u32 / ctx.r8.u32 : 0);
	// li r8,96
	ctx.r8.s64 = 96;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,72
	ctx.r9.s64 = 72;
loc_8262C07C:
	// lfs f2,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfsu f31,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	f31.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfsu f30,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	f30.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfsu f29,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	f29.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfsu f28,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	f28.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// dcbt r11,r8
	// dcbt r10,r9
	// fmuls f15,f29,f10
	f15.f64 = double(float(f29.f64 * ctx.f10.f64));
	// fmuls f29,f29,f4
	f29.f64 = double(float(f29.f64 * ctx.f4.f64));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmadds f15,f28,f9,f15
	f15.f64 = double(float(std::fma(f28.f64, ctx.f9.f64, f15.f64)));
	// fmadds f29,f28,f3,f29
	f29.f64 = double(float(std::fma(f28.f64, ctx.f3.f64, f29.f64)));
	// fmadds f28,f30,f11,f15
	f28.f64 = double(float(std::fma(f30.f64, ctx.f11.f64, f15.f64)));
	// fmadds f30,f30,f5,f29
	f30.f64 = double(float(std::fma(f30.f64, ctx.f5.f64, f29.f64)));
	// fmadds f29,f31,f12,f28
	f29.f64 = double(float(std::fma(f31.f64, ctx.f12.f64, f28.f64)));
	// fmadds f31,f31,f6,f30
	f31.f64 = double(float(std::fma(f31.f64, ctx.f6.f64, f30.f64)));
	// fmadds f30,f1,f13,f29
	f30.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, f29.f64)));
	// fmadds f1,f1,f7,f31
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f7.f64, f31.f64)));
	// fmadds f31,f2,f0,f30
	f31.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, f30.f64)));
	// fmadds f2,f2,f8,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f8.f64, ctx.f1.f64)));
	// beq cr6,0x8262c0f4
	if (ctx.cr6.eq) goto loc_8262C0F4;
	// lfs f14,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f14.f64 = double(temp.f32);
	// fadds f1,f31,f14
	ctx.f1.f64 = double(float(f31.f64 + f14.f64));
	// stfs f1,0(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f1,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f2,f2,f1
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// stfs f2,0(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x8262c0fc
	goto loc_8262C0FC;
loc_8262C0F4:
	// stfs f31,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfsu f2,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
loc_8262C0FC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fadds f0,f27,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f27.f64 + ctx.f0.f64));
	// fadds f13,f26,f13
	ctx.f13.f64 = double(float(f26.f64 + ctx.f13.f64));
	// fadds f12,f25,f12
	ctx.f12.f64 = double(float(f25.f64 + ctx.f12.f64));
	// fadds f11,f24,f11
	ctx.f11.f64 = double(float(f24.f64 + ctx.f11.f64));
	// fadds f10,f23,f10
	ctx.f10.f64 = double(float(f23.f64 + ctx.f10.f64));
	// fadds f9,f22,f9
	ctx.f9.f64 = double(float(f22.f64 + ctx.f9.f64));
	// fadds f8,f21,f8
	ctx.f8.f64 = double(float(f21.f64 + ctx.f8.f64));
	// fadds f7,f20,f7
	ctx.f7.f64 = double(float(f20.f64 + ctx.f7.f64));
	// fadds f6,f19,f6
	ctx.f6.f64 = double(float(f19.f64 + ctx.f6.f64));
	// fadds f5,f18,f5
	ctx.f5.f64 = double(float(f18.f64 + ctx.f5.f64));
	// fadds f4,f17,f4
	ctx.f4.f64 = double(float(f17.f64 + ctx.f4.f64));
	// fadds f3,f16,f3
	ctx.f3.f64 = double(float(f16.f64 + ctx.f3.f64));
	// bdnz 0x8262c07c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262C07C;
loc_8262C134:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2cbc
	ctx.lr = 0x8262C13C;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82641B90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82641B98;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641BB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641BD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82641c28
	if (ctx.cr0.lt) goto loc_82641C28;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82641c28
	if (ctx.cr6.eq) goto loc_82641C28;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// ble cr6,0x82641c10
	if (!ctx.cr6.gt) goto loc_82641C10;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82641c24
	goto loc_82641C24;
loc_82641C10:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bgt cr6,0x82641c28
	if (ctx.cr6.gt) goto loc_82641C28;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82641C24:
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82641C28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82642BC8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,184(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82642c1c
	if (ctx.cr6.eq) goto loc_82642C1C;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82642c6c
	if (ctx.cr6.eq) goto loc_82642C6C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,192(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r7,188(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// lwz r8,28(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82642c70
	if (ctx.cr6.eq) goto loc_82642C70;
loc_82642C1C:
	// lwz r9,168(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// b 0x82642c60
	goto loc_82642C60;
loc_82642C24:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82642c3c
	if (ctx.cr6.eq) goto loc_82642C3C;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82642c40
	goto loc_82642C40;
loc_82642C3C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82642C40:
	// lwz r7,32(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// beq cr6,0x82642c6c
	if (ctx.cr6.eq) goto loc_82642C6C;
	// lwz r6,28(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mullw r10,r6,r7
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82642C60:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82642c24
	if (!ctx.cr6.eq) goto loc_82642C24;
	// b 0x82642c70
	goto loc_82642C70;
loc_82642C6C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82642C70:
	// lwz r10,120(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lhz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bgt cr6,0x82642c8c
	if (ctx.cr6.gt) goto loc_82642C8C;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82642C8C:
	// lwz r3,264(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
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

DEFINE_REX_FUNC(sub_8264BE60) {
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
	ctx.lr = 0x8264BE68;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// and r30,r9,r11
	r30.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8264bf68
	if (!ctx.cr6.gt) goto loc_8264BF68;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,0
	r28.s64 = 0;
	// lfs f12,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f12.f64 = double(temp.f32);
loc_8264BEB4:
	// lwz r29,16(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 16);
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r29.s32, ctx.xer);
	// bge cr6,0x8264bf04
	if (!ctx.cr6.lt) goto loc_8264BF04;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// rotlwi r4,r29,0
	ctx.r4.u64 = __builtin_rotateleft32(r29.u32, 0);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
loc_8264BEE0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f13,r8,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f11,r9,r5
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fmadds f0,f13,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f0.f64)));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8264bee0
	if (ctx.cr6.lt) goto loc_8264BEE0;
loc_8264BF04:
	// subf r9,r29,r3
	ctx.r9.u64 = ctx.r3.u64 - r29.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r9,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// and r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 & ctx.r9.u64;
	// bge cr6,0x8264bf54
	if (!ctx.cr6.lt) goto loc_8264BF54;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8264BF38:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfsx f11,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsu f13,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f0,f11,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f0.f64)));
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8264bf38
	if (ctx.cr6.lt) goto loc_8264BF38;
loc_8264BF54:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stfsx f0,r28,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + ctx.r6.u32, temp.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// blt cr6,0x8264beb4
	if (ctx.cr6.lt) goto loc_8264BEB4;
loc_8264BF68:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8264bfa8
	if (ctx.cr6.lt) goto loc_8264BFA8;
	// subf r10,r30,r11
	ctx.r10.u64 = ctx.r11.u64 - r30.u64;
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8264BF94;
	sub_826A1E70(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r11,r30,r26
	ctx.r11.u64 = r26.u64 - r30.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// b 0x8264bfec
	goto loc_8264BFEC;
loc_8264BFA8:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269cc20
	ctx.lr = 0x8264BFBC;
	sub_8269CC20(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r30,r9
	ctx.r8.u64 = ctx.r9.u64 - r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8264BFDC;
	sub_826A1E70(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r11,r30,r26
	ctx.r11.u64 = r26.u64 - r30.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r7.u32);
loc_8264BFEC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8264bffc
	if (ctx.cr6.eq) goto loc_8264BFFC;
	// stw r30,0(r25)
	REX_STORE_U32(r25.u32 + 0, r30.u32);
loc_8264BFFC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82651168) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,100(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 100);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r30,44
	ctx.r7.s64 = r30.s64 + 44;
	// ori r6,r6,5
	ctx.r6.u64 = ctx.r6.u64 | 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,400(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 400);
	// bl 0x8265d7d8
	ctx.lr = 0x826511AC;
	sub_8265D7D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82651220
	if (ctx.cr0.lt) goto loc_82651220;
	// li r11,29
	ctx.r11.s64 = 29;
	// lwz r3,400(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 400);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8265d750
	ctx.lr = 0x826511D0;
	sub_8265D750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82651220
	if (ctx.cr0.lt) goto loc_82651220;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8265121c
	if (ctx.cr6.eq) goto loc_8265121C;
	// lwz r9,100(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 100);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_826511F0:
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82651210
	if (ctx.cr6.eq) goto loc_82651210;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x826511f0
	if (ctx.cr6.lt) goto loc_826511F0;
	// b 0x8265121c
	goto loc_8265121C;
loc_82651210:
	// lwz r11,396(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 396);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,396(r30)
	REX_STORE_U32(r30.u32 + 396, ctx.r11.u32);
loc_8265121C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82651220:
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

DEFINE_REX_FUNC(sub_82657D60) {
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
	ctx.lr = 0x82657D68;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r28,0
	r28.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82657d94
	if (!ctx.cr6.lt) goto loc_82657D94;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// b 0x82658088
	goto loc_82658088;
loc_82657D94:
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x82657dac
	if (!ctx.cr6.eq) goto loc_82657DAC;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,1235
	r31.u64 = r31.u64 | 1235;
	// b 0x82658088
	goto loc_82658088;
loc_82657DAC:
	// lwz r10,740(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 740);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82657e0c
	if (!ctx.cr0.eq) goto loc_82657E0C;
	// li r3,260
	ctx.r3.s64 = 260;
	// lwz r4,184(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 184);
	// bl 0x8265d850
	ctx.lr = 0x82657DC4;
	sub_8265D850(ctx, base);
	// stw r28,184(r30)
	REX_STORE_U32(r30.u32 + 184, r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82654278
	ctx.lr = 0x82657DDC;
	sub_82654278(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82658078
	if (ctx.cr0.lt) goto loc_82658078;
	// lwz r11,740(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 740);
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826580c0
	if (ctx.cr0.eq) goto loc_826580C0;
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,740(r30)
	REX_STORE_U32(r30.u32 + 740, ctx.r11.u32);
	// bl 0x826558c0
	ctx.lr = 0x82657E00;
	sub_826558C0(ctx, base);
loc_82657E00:
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82658078
	if (ctx.cr0.lt) goto loc_82658078;
	// b 0x826580c0
	goto loc_826580C0;
loc_82657E0C:
	// lwz r10,248(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 248);
	// addi r29,r30,248
	r29.s64 = r30.s64 + 248;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// beq cr6,0x82657f14
	if (ctx.cr6.eq) goto loc_82657F14;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82657f14
	if (ctx.cr0.eq) goto loc_82657F14;
loc_82657E28:
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r8,r4,-92
	ctx.r8.s64 = ctx.r4.s64 + -92;
	// lwz r10,184(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 184);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// subf r11,r9,r29
	ctx.r11.u64 = r29.u64 - ctx.r9.u64;
	// ld r31,-76(r4)
	r31.u64 = REX_LOAD_U64(ctx.r4.u32 + -76);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 & ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82657ebc
	if (ctx.cr6.eq) goto loc_82657EBC;
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
loc_82657E60:
	// lwz r6,-4(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + -4);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82657ea8
	if (ctx.cr6.eq) goto loc_82657EA8;
	// lwz r7,0(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_82657E78:
	// ldx r27,r7,r10
	r27.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r10.u32);
	// cmpld cr6,r27,r31
	ctx.cr6.compare<uint64_t>(r27.u64, r31.u64, ctx.xer);
	// beq cr6,0x82657e98
	if (ctx.cr6.eq) goto loc_82657E98;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82657e78
	if (ctx.cr6.lt) goto loc_82657E78;
	// b 0x82657ea8
	goto loc_82657EA8;
loc_82657E98:
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// stdx r28,r10,r7
	REX_STORE_U64(ctx.r10.u32 + ctx.r7.u32, r28.u64);
loc_82657EA8:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r5,r5,24
	ctx.r5.s64 = ctx.r5.s64 + 24;
	// bne 0x82657e60
	if (!ctx.cr0.eq) goto loc_82657E60;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82657f08
	if (!ctx.cr6.eq) goto loc_82657F08;
loc_82657EBC:
	// lwz r11,396(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 396);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82657f7c
	if (!ctx.cr0.eq) goto loc_82657F7C;
	// lwz r10,92(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 92);
	// addi r11,r8,92
	ctx.r11.s64 = ctx.r8.s64 + 92;
	// lwz r9,96(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 96);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,96(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 96);
	// lwz r9,92(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 92);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,92(r8)
	REX_STORE_U32(ctx.r8.u32 + 92, ctx.r11.u32);
	// stw r11,96(r8)
	REX_STORE_U32(ctx.r8.u32 + 96, ctx.r11.u32);
	// stw r7,92(r8)
	REX_STORE_U32(ctx.r8.u32 + 92, ctx.r7.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,96(r8)
	REX_STORE_U32(ctx.r8.u32 + 96, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82657F08:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82657e28
	if (!ctx.cr6.eq) goto loc_82657E28;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82657F14:
	// lwz r4,184(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 184);
	// lwz r5,0(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82657f6c
	if (ctx.cr6.eq) goto loc_82657F6C;
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
loc_82657F2C:
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82657f60
	if (ctx.cr6.eq) goto loc_82657F60;
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_82657F44:
	// ldx r3,r6,r10
	ctx.r3.u64 = REX_LOAD_U64(ctx.r6.u32 + ctx.r10.u32);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// bne cr6,0x82657f88
	if (!ctx.cr6.eq) goto loc_82657F88;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82657f44
	if (ctx.cr6.lt) goto loc_82657F44;
loc_82657F60:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// bne 0x82657f2c
	if (!ctx.cr0.eq) goto loc_82657F2C;
loc_82657F6C:
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x8265d850
	ctx.lr = 0x82657F74;
	sub_8265D850(ctx, base);
	// stw r28,184(r30)
	REX_STORE_U32(r30.u32 + 184, r28.u32);
	// b 0x82657ffc
	goto loc_82657FFC;
loc_82657F7C:
	// lis r31,-32747
	r31.s64 = -2146107392;
	// ori r31,r31,10
	r31.u64 = r31.u64 | 10;
	// b 0x82658078
	goto loc_82658078;
loc_82657F88:
	// lis r31,-32747
	r31.s64 = -2146107392;
	// ori r31,r31,10
	r31.u64 = r31.u64 | 10;
	// b 0x8265807c
	goto loc_8265807C;
loc_82657F94:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82657fa8
	if (!ctx.cr6.eq) goto loc_82657FA8;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// b 0x82657fcc
	goto loc_82657FCC;
loc_82657FA8:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82657FCC:
	// addi r31,r11,-92
	r31.s64 = ctx.r11.s64 + -92;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82652238
	ctx.lr = 0x82657FDC;
	sub_82652238(ctx, base);
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82657ffc
	if (!ctx.cr0.eq) goto loc_82657FFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8265bac0
	ctx.lr = 0x82657FF4;
	sub_8265BAC0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82658078
	if (ctx.cr0.lt) goto loc_82658078;
loc_82657FFC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82657f94
	if (!ctx.cr6.eq) goto loc_82657F94;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82654278
	ctx.lr = 0x82658020;
	sub_82654278(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82658078
	if (ctx.cr0.lt) goto loc_82658078;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82657c38
	ctx.lr = 0x82658030;
	sub_82657C38(ctx, base);
	// b 0x82657e00
	goto loc_82657E00;
loc_82658034:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82658048
	if (!ctx.cr6.eq) goto loc_82658048;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// b 0x8265806c
	goto loc_8265806C;
loc_82658048:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8265806C:
	// addi r4,r11,-92
	ctx.r4.s64 = ctx.r11.s64 + -92;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82652238
	ctx.lr = 0x82658078;
	sub_82652238(ctx, base);
loc_82658078:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8265807C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82658034
	if (!ctx.cr6.eq) goto loc_82658034;
loc_82658088:
	// lwz r4,184(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 184);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826580a0
	if (ctx.cr6.eq) goto loc_826580A0;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x8265d850
	ctx.lr = 0x8265809C;
	sub_8265D850(ctx, base);
	// stw r28,184(r30)
	REX_STORE_U32(r30.u32 + 184, r28.u32);
loc_826580A0:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x826580c0
	if (ctx.cr6.eq) goto loc_826580C0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8265a150
	ctx.lr = 0x826580C0;
	sub_8265A150(ctx, base);
loc_826580C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8266C950) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8266C958;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,56(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8266ca6c
	if (ctx.cr6.eq) goto loc_8266CA6C;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266c9c4
	if (ctx.cr6.eq) goto loc_8266C9C4;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8266c9cc
	if (ctx.cr6.eq) goto loc_8266C9CC;
	// lwz r10,292(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r10,r10,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8266c9c4
	if (!ctx.cr0.eq) goto loc_8266C9C4;
	// stw r29,168(r31)
	REX_STORE_U32(r31.u32 + 168, r29.u32);
loc_8266C998:
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
	// bne 0x8266c998
	if (!ctx.cr0.eq) goto loc_8266C998;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826708d8
	ctx.lr = 0x8266C9C0;
	sub_826708D8(ctx, base);
	// b 0x8266c9cc
	goto loc_8266C9CC;
loc_8266C9C4:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8266ca34
	if (!ctx.cr6.eq) goto loc_8266CA34;
loc_8266C9CC:
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// rlwinm. r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// beq 0x8266ca90
	if (ctx.cr0.eq) goto loc_8266CA90;
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8266ca90
	if (!ctx.cr6.eq) goto loc_8266CA90;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266ca84
	if (ctx.cr0.eq) goto loc_8266CA84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8266c148
	ctx.lr = 0x8266CA00;
	sub_8266C148(ctx, base);
	// stw r29,56(r30)
	REX_STORE_U32(r30.u32 + 56, r29.u32);
loc_8266CA04:
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
	// bne 0x8266ca04
	if (!ctx.cr0.eq) goto loc_8266CA04;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266ca78
	if (!ctx.cr6.eq) goto loc_8266CA78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82670cd8
	ctx.lr = 0x8266CA30;
	sub_82670CD8(ctx, base);
	// b 0x8266ca78
	goto loc_8266CA78;
loc_8266CA34:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r30)
	REX_STORE_U32(r30.u32 + 56, ctx.r11.u32);
loc_8266CA3C:
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
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
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
	// bne 0x8266ca3c
	if (!ctx.cr0.eq) goto loc_8266CA3C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8266ca6c
	if (!ctx.cr6.eq) goto loc_8266CA6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82670cd8
	ctx.lr = 0x8266CA6C;
	sub_82670CD8(ctx, base);
loc_8266CA6C:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266ca90
	if (ctx.cr6.eq) goto loc_8266CA90;
loc_8266CA78:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r11.u32);
loc_8266CA84:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82663088
	ctx.lr = 0x8266CA90;
	sub_82663088(ctx, base);
loc_8266CA90:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82675D70) {
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
	// bl 0x82671a98
	ctx.lr = 0x82675D88;
	sub_82671A98(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-10684
	ctx.r10.s64 = ctx.r10.s64 + -10684;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r9,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_82676C58) {
	REX_FUNC_PROLOGUE();
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82676C70:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82676c88
	if (ctx.cr6.eq) goto loc_82676C88;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// b 0x82676ccc
	goto loc_82676CCC;
loc_82676C88:
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r6,r10,12
	ctx.r6.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82676ca0
	if (ctx.cr6.eq) goto loc_82676CA0;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// b 0x82676ccc
	goto loc_82676CCC;
loc_82676CA0:
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82676cb8
	if (ctx.cr6.eq) goto loc_82676CB8;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// b 0x82676ccc
	goto loc_82676CCC;
loc_82676CB8:
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// addi r8,r10,20
	ctx.r8.s64 = ctx.r10.s64 + 20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82676cd4
	if (ctx.cr6.eq) goto loc_82676CD4;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82676CCC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82676c70
	goto loc_82676C70;
loc_82676CD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82679A28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82679A30;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,4096
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4096, ctx.xer);
	// bgt cr6,0x82679d54
	if (ctx.cr6.gt) goto loc_82679D54;
	// beq cr6,0x82679d40
	if (ctx.cr6.eq) goto loc_82679D40;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x82679e3c
	if (ctx.cr6.gt) goto loc_82679E3C;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,-10496
	ctx.r12.s64 = ctx.r12.s64 + -10496;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32152
	ctx.r12.s64 = -2107113472;
	// nop 
	// addi r12,r12,-25984
	ctx.r12.s64 = ctx.r12.s64 + -25984;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82679A80;
	case 1:
		goto loc_82679AB0;
	case 2:
		goto loc_82679E3C;
	case 3:
		goto loc_82679AC4;
	case 4:
		goto loc_82679B34;
	case 5:
		goto loc_82679B48;
	case 6:
		goto loc_82679E3C;
	case 7:
		goto loc_82679E3C;
	case 8:
		goto loc_82679B5C;
	case 9:
		goto loc_82679B70;
	case 10:
		goto loc_82679B84;
	case 11:
		goto loc_82679B98;
	case 12:
		goto loc_82679BAC;
	case 13:
		goto loc_82679BC0;
	case 14:
		goto loc_82679E3C;
	case 15:
		goto loc_82679BD4;
	case 16:
		goto loc_82679BE8;
	case 17:
		goto loc_82679BFC;
	case 18:
		goto loc_82679C4C;
	case 19:
		goto loc_82679C9C;
	case 20:
		goto loc_82679E3C;
	case 21:
		goto loc_82679CB0;
	case 22:
		goto loc_82679CC4;
	case 23:
		goto loc_82679CD8;
	case 24:
		goto loc_82679CEC;
	case 25:
		goto loc_82679D00;
	case 26:
		goto loc_82679D18;
	case 27:
		goto loc_82679D2C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82679A80:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lwz r11,688(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 688);
loc_82679A90:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x82679aa4
	goto loc_82679AA4;
loc_82679A9C:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4097
	ctx.r3.u64 = ctx.r3.u64 | 4097;
loc_82679AA4:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// b 0x82679e44
	goto loc_82679E44;
loc_82679AB0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lwz r11,692(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 692);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679AC4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82679ad4
	if (!ctx.cr6.eq) goto loc_82679AD4;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// b 0x82679b1c
	goto loc_82679B1C;
loc_82679AD4:
	// addi r29,r3,476
	r29.s64 = ctx.r3.s64 + 476;
	// addi r5,r3,536
	ctx.r5.s64 = ctx.r3.s64 + 536;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826825c0
	ctx.lr = 0x82679AF0;
	sub_826825C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82679b18
	if (!ctx.cr0.eq) goto loc_82679B18;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82682570
	ctx.lr = 0x82679B04;
	sub_82682570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82679b18
	if (!ctx.cr0.eq) goto loc_82679B18;
loc_82679B0C:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4111
	ctx.r3.u64 = ctx.r3.u64 | 4111;
	// b 0x82679e44
	goto loc_82679E44;
loc_82679B18:
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
loc_82679B1C:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
loc_82679B28:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82679aa4
	goto loc_82679AA4;
loc_82679B34:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lwz r11,700(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 700);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679B48:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lwz r11,704(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 704);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679B5C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679B70:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lhz r11,1068(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 1068);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679B84:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lhz r11,1070(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 1070);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679B98:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lhz r11,1072(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 1072);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679BAC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lhz r11,1074(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 1074);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679BC0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679BD4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679BE8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679BFC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82679c0c
	if (!ctx.cr6.eq) goto loc_82679C0C;
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// b 0x82679b1c
	goto loc_82679B1C;
loc_82679C0C:
	// addi r29,r3,476
	r29.s64 = ctx.r3.s64 + 476;
	// addi r5,r3,536
	ctx.r5.s64 = ctx.r3.s64 + 536;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826825c0
	ctx.lr = 0x82679C28;
	sub_826825C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82679c44
	if (!ctx.cr0.eq) goto loc_82679C44;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82682570
	ctx.lr = 0x82679C3C;
	sub_82682570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82679b0c
	if (ctx.cr0.eq) goto loc_82679B0C;
loc_82679C44:
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// b 0x82679b1c
	goto loc_82679B1C;
loc_82679C4C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82679c5c
	if (!ctx.cr6.eq) goto loc_82679C5C;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// b 0x82679b1c
	goto loc_82679B1C;
loc_82679C5C:
	// addi r29,r3,476
	r29.s64 = ctx.r3.s64 + 476;
	// addi r5,r3,536
	ctx.r5.s64 = ctx.r3.s64 + 536;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826825c0
	ctx.lr = 0x82679C78;
	sub_826825C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82679c94
	if (!ctx.cr0.eq) goto loc_82679C94;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82682570
	ctx.lr = 0x82679C8C;
	sub_82682570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82679b0c
	if (ctx.cr0.eq) goto loc_82679B0C;
loc_82679C94:
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// b 0x82679b1c
	goto loc_82679B1C;
loc_82679C9C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679CB0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679CC4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679CD8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679CEC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679D00:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lwz r11,1188(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1188);
	// rlwinm r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// b 0x82679a90
	goto loc_82679A90;
loc_82679D18:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679D2C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lwz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679D40:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lwz r11,708(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 708);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679D54:
	// addi r11,r5,-4098
	ctx.r11.s64 = ctx.r5.s64 + -4098;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82679e3c
	if (ctx.cr6.gt) goto loc_82679E3C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82679db0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82679DB0;
	// bdzf 4*cr6+eq,0x82679dc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82679DC4;
	// bdzf 4*cr6+eq,0x82679dd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82679DD8;
	// bdzf 4*cr6+eq,0x82679dec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82679DEC;
	// bdzf 4*cr6+eq,0x82679e00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82679E00;
	// bdzf 4*cr6+eq,0x82679e3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82679E3C;
	// bdzf 4*cr6+eq,0x82679e14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82679E14;
	// bne cr6,0x82679e28
	if (!ctx.cr6.eq) goto loc_82679E28;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lwz r11,1188(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1188);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82679da8
	if (ctx.cr0.eq) goto loc_82679DA8;
	// lwz r11,432(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 432);
	// b 0x82679b28
	goto loc_82679B28;
loc_82679DA8:
	// lwz r11,436(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 436);
	// b 0x82679b28
	goto loc_82679B28;
loc_82679DB0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679DC4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lhz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 124);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679DD8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lhz r11,126(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 126);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679DEC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lhz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 128);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679E00:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lwz r11,712(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 712);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679E14:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679E28:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82679a9c
	if (ctx.cr6.lt) goto loc_82679A9C;
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// b 0x82679a90
	goto loc_82679A90;
loc_82679E3C:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4105
	ctx.r3.u64 = ctx.r3.u64 | 4105;
loc_82679E44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82695648) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// subf r11,r4,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// subf r10,r4,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r4.u64;
loc_8269565C:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfsx f13,r11,r4
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfsx f0,r10,r4
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, temp.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x8269565c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8269565C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82697708) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82697710;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r30,12(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// slw r9,r10,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r5.u8 & 0x3F));
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r31,r9,-1
	r31.s64 = ctx.r9.s64 + -1;
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 0);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lhz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 4);
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm. r5,r7,0,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// beq 0x826977ac
	if (ctx.cr0.eq) goto loc_826977AC;
	// lbz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// clrlwi r29,r6,16
	r29.u64 = ctx.r6.u32 & 0xFFFF;
	// subfic r6,r9,8
	ctx.xer.ca = ctx.r9.u32 <= 8;
	ctx.r6.u64 = static_cast<uint64_t>(8) - ctx.r9.u64;
	// srw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r10.u8 & 0x3F));
	// stb r10,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// blt cr6,0x82697788
	if (ctx.cr6.lt) goto loc_82697788;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_82697788:
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// sraw r10,r31,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r31.s32 < 0) & (((r31.s32 >> temp.u32) << temp.u32) != r31.s32);
	ctx.r10.s64 = r31.s32 >> temp.u32;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r7,r7,-8
	ctx.r7.s64 = ctx.r7.s64 + -8;
	// slw r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r6.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// b 0x826977ec
	goto loc_826977EC;
loc_826977AC:
	// lbz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// clrlwi r8,r31,24
	ctx.r8.u64 = r31.u32 & 0xFF;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// stb r10,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// bne cr6,0x826977ec
	if (!ctx.cr6.eq) goto loc_826977EC;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826977ec
	if (ctx.cr6.lt) goto loc_826977EC;
	// sth r7,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
loc_826977EC:
	// stb r7,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r7.u8);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8269C588) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8269C590;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8269c3a0
	ctx.lr = 0x8269C5A8;
	sub_8269C3A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8269c5e0
	if (!ctx.cr0.eq) goto loc_8269C5E0;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r10,8872(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8872);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8269c5e0
	if (ctx.cr6.eq) goto loc_8269C5E0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269C5DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8269c458
	ctx.lr = 0x8269C5E0;
	sub_8269C458(ctx, base);
loc_8269C5E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8269D8F8) {
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
	// addi r3,r10,32224
	ctx.r3.s64 = ctx.r10.s64 + 32224;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8269d7d0
	ctx.lr = 0x8269D944;
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

DEFINE_REX_FUNC(sub_8269F058) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// and r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 & ctx.r4.u64;
	// lwz r3,25688(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 25688);
	// andc r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 & ~ctx.r4.u64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,25688(r10)
	REX_STORE_U32(ctx.r10.u32 + 25688, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269FDF8) {
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
	// bl 0x821aae70
	ctx.lr = 0x8269FE10;
	sub_821AAE70(ctx, base);
	// bl 0x826a3910
	ctx.lr = 0x8269FE14;
	sub_826A3910(ctx, base);
	// bl 0x826a3908
	ctx.lr = 0x8269FE18;
	sub_826A3908(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8269fe3c
	if (!ctx.cr0.eq) goto loc_8269FE3C;
	// bl 0x826a3910
	ctx.lr = 0x8269FE24;
	sub_826A3910(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826a3920
	ctx.lr = 0x8269FE2C;
	sub_826A3920(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8269fe5c
	if (!ctx.cr0.eq) goto loc_8269FE5C;
	// bl 0x823ee280
	ctx.lr = 0x8269FE38;
	sub_823EE280(ctx, base);
	// bl 0x826b4158
	ctx.lr = 0x8269FE3C;
	sub_826B4158(ctx, base);
loc_8269FE3C:
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// stw r10,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x826a3aa8
	ctx.lr = 0x8269FE5C;
	sub_826A3AA8(ctx, base);
loc_8269FE5C:
	// bl 0x8269fd58
	ctx.lr = 0x8269FE60;
	sub_8269FD58(ctx, base);
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

DEFINE_REX_FUNC(sub_826A1E20) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r11,8936(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8936);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826a1e50
	if (ctx.cr0.eq) goto loc_826A1E50;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A1E44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x826a1e54
	if (!ctx.cr0.eq) goto loc_826A1E54;
loc_826A1E50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A1E54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A2D40) {
	REX_FUNC_PROLOGUE();
	// cntlzd r5,r3
	ctx.r5.u64 = ctx.r3.u64 == 0 ? 64 : __builtin_clzll(ctx.r3.u64);
	// sld r3,r3,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r3.u64 << (ctx.r5.u8 & 0x7F));
	// cmpdi r3,0
	ctx.cr0.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// beq 0x826a2d5c
	if (ctx.cr0.eq) goto loc_826A2D5C;
	// subfic r5,r5,1086
	ctx.xer.ca = ctx.r5.u32 <= 1086;
	ctx.r5.u64 = static_cast<uint64_t>(1086) - ctx.r5.u64;
	// rldicl r3,r3,53,12
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 53) & 0xFFFFFFFFFFFFF;
	// rldimi r3,r5,52,1
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r5.u64, 52) & 0x7FF0000000000000) | (ctx.r3.u64 & 0x800FFFFFFFFFFFFF);
loc_826A2D5C:
	// std r3,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r3.u64);
	// lfd f1,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_74) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826B0110) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b0168
	if (ctx.cr6.lt) goto loc_826B0168;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r11,31232(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31232);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826b0168
	if (!ctx.cr6.lt) goto loc_826B0168;
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,31264
	ctx.r10.s64 = ctx.r10.s64 + 31264;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x826b0168
	if (!ctx.cr6.eq) goto loc_826B0168;
	// stwx r4,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826b0188
	goto loc_826B0188;
loc_826B0168:
	// bl 0x826a33d0
	ctx.lr = 0x826B016C;
	sub_826A33D0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x826a3408
	ctx.lr = 0x826B0178;
	sub_826A3408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_826B0188:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B4340) {
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
	// bl 0x827943c4
	ctx.lr = 0x826B4354;
	__imp__NtFlushBuffersFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826b4364
	if (ctx.cr0.lt) goto loc_826B4364;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826b436c
	goto loc_826B436C;
loc_826B4364:
	// bl 0x823f0020
	ctx.lr = 0x826B4368;
	sub_823F0020(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B436C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B6250) {
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
	// bl 0x826bc390
	ctx.lr = 0x826B6268;
	sub_826BC390(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,26064
	ctx.r10.s64 = ctx.r11.s64 + 26064;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826bc368
	ctx.lr = 0x826B627C;
	sub_826BC368(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// lfs f0,32352(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32352);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_826B90C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826B90C8;
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// addi r3,r3,672
	ctx.r3.s64 = ctx.r3.s64 + 672;
	// lwz r11,672(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b9114
	if (ctx.cr6.eq) goto loc_826B9114;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x826bfc68
	ctx.lr = 0x826B90F4;
	sub_826BFC68(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826b9108
	goto loc_826B9108;
loc_826B9108:
	// li r29,0
	r29.s64 = 0;
	// stw r29,672(r30)
	REX_STORE_U32(r30.u32 + 672, r29.u32);
	// b 0x826b9118
	goto loc_826B9118;
loc_826B9114:
	// li r29,0
	r29.s64 = 0;
loc_826B9118:
	// lwz r3,52(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b9138
	if (ctx.cr6.eq) goto loc_826B9138;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9134;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,52(r30)
	REX_STORE_U32(r30.u32 + 52, r29.u32);
loc_826B9138:
	// stw r29,676(r30)
	REX_STORE_U32(r30.u32 + 676, r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,668(r30)
	REX_STORE_U32(r30.u32 + 668, r29.u32);
	// stw r29,664(r30)
	REX_STORE_U32(r30.u32 + 664, r29.u32);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826BC380) {
	REX_FUNC_PROLOGUE();
	// stw r4,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826BC448) {
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
	// bl 0x826bf650
	ctx.lr = 0x826BC460;
	sub_826BF650(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BC474;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r11.u32);
	// stw r10,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r10.u32);
	// stw r11,508(r31)
	REX_STORE_U32(r31.u32 + 508, ctx.r11.u32);
	// stw r10,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r10.u32);
	// std r11,128(r31)
	REX_STORE_U64(r31.u32 + 128, ctx.r11.u64);
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

DEFINE_REX_FUNC(sub_826C0A40) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c88
	ctx.lr = 0x826C0A48;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	r21.s64 = 0;
	// lwz r27,0(r4)
	r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r29,0(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r16,r7
	r16.u64 = ctx.r7.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r20,r21
	r20.u64 = r21.u64;
	// mr r24,r21
	r24.u64 = r21.u64;
	// mr r28,r21
	r28.u64 = r21.u64;
	// mr r22,r21
	r22.u64 = r21.u64;
	// mr r26,r21
	r26.u64 = r21.u64;
	// mr r23,r21
	r23.u64 = r21.u64;
	// beq cr6,0x826c0d54
	if (ctx.cr6.eq) goto loc_826C0D54;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x826c0d54
	if (ctx.cr6.eq) goto loc_826C0D54;
	// lwz r11,584(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c0d54
	if (ctx.cr6.eq) goto loc_826C0D54;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// stw r21,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r21.u32);
	// beq cr6,0x826c0af8
	if (ctx.cr6.eq) goto loc_826C0AF8;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c0af8
	if (ctx.cr6.eq) goto loc_826C0AF8;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826c0d54
	if (ctx.cr6.gt) goto loc_826C0D54;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// divwu. r24,r11,r10
	r24.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq 0x826c0b9c
	if (ctx.cr0.eq) goto loc_826C0B9C;
	// divwu r29,r27,r24
	r29.u64 = uint32_t(r24.u32 ? r27.u32 / r24.u32 : 0);
	// twllei r24,0
	if (r24.s32 == 0 || r24.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x826c0af8
	if (ctx.cr6.eq) goto loc_826C0AF8;
loc_826C0AE8:
	// clrlwi r11,r29,28
	ctx.r11.u64 = r29.u32 & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826c0af8
	if (!ctx.cr6.eq) goto loc_826C0AF8;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_826C0AF8:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826c0b08
	if (ctx.cr6.lt) goto loc_826C0B08;
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
loc_826C0B08:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mullw r10,r29,r10
	ctx.r10.s64 = int64_t(r29.s32) * int64_t(ctx.r10.s32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// bl 0x826cbba0
	ctx.lr = 0x826C0B28;
	sub_826CBBA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826c0cd0
	if (!ctx.cr6.eq) goto loc_826C0CD0;
	// lwz r11,432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c0b48
	if (ctx.cr6.eq) goto loc_826C0B48;
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c0cd0
	if (!ctx.cr6.eq) goto loc_826C0CD0;
loc_826C0B48:
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// mr r30,r21
	r30.u64 = r21.u64;
	// stw r21,540(r31)
	REX_STORE_U32(r31.u32 + 540, r21.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826c0bb8
	if (!ctx.cr6.gt) goto loc_826C0BB8;
loc_826C0B5C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc1c8
	ctx.lr = 0x826C0B64;
	sub_826CC1C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826c0cd0
	if (!ctx.cr6.eq) goto loc_826C0CD0;
	// lbz r11,500(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 500);
	// lhz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 228);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826c0ba4
	if (ctx.cr6.eq) goto loc_826C0BA4;
	// lwz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 540);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,540(r31)
	REX_STORE_U32(r31.u32 + 540, ctx.r11.u32);
	// lwz r10,492(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 492);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826c0b5c
	if (ctx.cr6.lt) goto loc_826C0B5C;
	// b 0x826c0bb8
	goto loc_826C0BB8;
loc_826C0B9C:
	// li r29,1
	r29.s64 = 1;
	// b 0x826c0ae8
	goto loc_826C0AE8;
loc_826C0BA4:
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// li r23,1
	r23.s64 = 1;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
loc_826C0BB8:
	// clrlwi r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c0c88
	if (ctx.cr6.eq) goto loc_826C0C88;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(r19.s32, 1, ctx.xer);
	// beq cr6,0x826c0cdc
	if (ctx.cr6.eq) goto loc_826C0CDC;
	// clrlwi r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	// mr r23,r21
	r23.u64 = r21.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x826c0bec
	if (!ctx.cr6.eq) goto loc_826C0BEC;
	// clrlwi r11,r22,24
	ctx.r11.u64 = r22.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x826c0bec
	if (!ctx.cr6.eq) goto loc_826C0BEC;
	// li r20,1
	r20.s64 = 1;
loc_826C0BEC:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// ble cr6,0x826c0c08
	if (!ctx.cr6.gt) goto loc_826C0C08;
	// subf r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - r27.u64;
	// mr r28,r21
	r28.u64 = r21.u64;
	// li r22,1
	r22.s64 = 1;
	// b 0x826c0c14
	goto loc_826C0C14;
loc_826C0C08:
	// subf r11,r11,r27
	ctx.r11.u64 = r27.u64 - ctx.r11.u64;
	// li r28,1
	r28.s64 = 1;
	// li r26,1
	r26.s64 = 1;
loc_826C0C14:
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(r16.s32, 1, ctx.xer);
	// bne cr6,0x826c0c3c
	if (!ctx.cr6.eq) goto loc_826C0C3C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c0cf8
	if (ctx.cr6.eq) goto loc_826C0CF8;
	// clrlwi r11,r20,24
	ctx.r11.u64 = r20.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x826c0cf8
	if (ctx.cr6.eq) goto loc_826C0CF8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x826c0cf8
	if (ctx.cr6.eq) goto loc_826C0CF8;
	// b 0x826c0c74
	goto loc_826C0C74;
loc_826C0C3C:
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r24,r10
	ctx.r10.u64 = r24.u64 + ctx.r10.u64;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x826c0c54
	if (!ctx.cr6.lt) goto loc_826C0C54;
	// li r20,1
	r20.s64 = 1;
loc_826C0C54:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x826c0cf8
	if (ctx.cr6.eq) goto loc_826C0CF8;
	// clrlwi r11,r20,24
	ctx.r11.u64 = r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c0c74
	if (ctx.cr6.eq) goto loc_826C0C74;
	// clrlwi r11,r29,28
	ctx.r11.u64 = r29.u32 & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826c0cf8
	if (!ctx.cr6.eq) goto loc_826C0CF8;
loc_826C0C74:
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826c0cbc
	if (!ctx.cr6.eq) goto loc_826C0CBC;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// b 0x826c0cc0
	goto loc_826C0CC0;
loc_826C0C88:
	// addi r11,r19,-1
	ctx.r11.s64 = r19.s64 + -1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r9,r28
	r28.u64 = ctx.r9.u64 & r28.u64;
	// clrlwi r8,r28,24
	ctx.r8.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x826c0cbc
	if (!ctx.cr6.eq) goto loc_826C0CBC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x826c0cb4
	if (ctx.cr6.eq) goto loc_826C0CB4;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// b 0x826c0cc0
	goto loc_826C0CC0;
loc_826C0CB4:
	// li r28,1
	r28.s64 = 1;
	// li r26,1
	r26.s64 = 1;
loc_826C0CBC:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_826C0CC0:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826c0b08
	if (ctx.cr6.lt) goto loc_826C0B08;
	// b 0x826c0ce0
	goto loc_826C0CE0;
loc_826C0CD0:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd8
	return;
loc_826C0CDC:
	// li r20,1
	r20.s64 = 1;
loc_826C0CE0:
	// clrlwi r11,r20,24
	ctx.r11.u64 = r20.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x826c0cf8
	if (ctx.cr6.eq) goto loc_826C0CF8;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r29,28(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
loc_826C0CF8:
	// lwz r3,584(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 584);
	// bl 0x8261df08
	ctx.lr = 0x826C0D00;
	sub_8261DF08(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r11.u32);
	// beq cr6,0x826c0d1c
	if (ctx.cr6.eq) goto loc_826C0D1C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd8
	return;
loc_826C0D1C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// mullw r11,r29,r11
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(ctx.r11.s32);
	// stw r9,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r9.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r7,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r7.u64);
	// lwz r6,0(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 0);
	// stw r6,0(r18)
	REX_STORE_U32(r18.u32 + 0, ctx.r6.u32);
	// stw r29,0(r17)
	REX_STORE_U32(r17.u32 + 0, r29.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd8
	return;
loc_826C0D54:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_826DCF50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826DCF58;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826dcf80
	if (!ctx.cr6.eq) goto loc_826DCF80;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_826DCF80:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826dd03c
	if (ctx.cr6.eq) goto loc_826DD03C;
loc_826DCF8C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x826dcfa4
	if (ctx.cr6.eq) goto loc_826DCFA4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x826dd02c
	if (ctx.cr6.eq) goto loc_826DD02C;
loc_826DCFA4:
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826DCFBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dd03c
	if (ctx.cr6.lt) goto loc_826DD03C;
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826dcfe0
	if (!ctx.cr6.eq) goto loc_826DCFE0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826DCFE0:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826dcffc
	if (ctx.cr6.eq) goto loc_826DCFFC;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826DCFFC:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826dd014
	if (ctx.cr6.eq) goto loc_826DD014;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
loc_826DD014:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x826c68d8
	ctx.lr = 0x826DD024;
	sub_826C68D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dd03c
	if (ctx.cr6.lt) goto loc_826DD03C;
loc_826DD02C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x826dcf8c
	if (!ctx.cr6.eq) goto loc_826DCF8C;
loc_826DD03C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826DFDE0) {
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
	ctx.lr = 0x826DFDE8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r28,0
	r28.s64 = 0;
	// ld r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 32);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x826dfe34
	if (ctx.cr6.eq) goto loc_826DFE34;
	// lis r29,-32688
	r29.s64 = -2142240768;
	// ori r29,r29,7
	r29.u64 = r29.u64 | 7;
loc_826DFE18:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x826c68d8
	ctx.lr = 0x826DFE28;
	sub_826C68D8(ctx, base);
loc_826DFE28:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_826DFE34:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x826c6880
	ctx.lr = 0x826DFE48;
	sub_826C6880(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dfe18
	if (ctx.cr6.lt) goto loc_826DFE18;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r28.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r30.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826df9b0
	ctx.lr = 0x826DFE7C;
	sub_826DF9B0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dfe18
	if (ctx.cr6.lt) goto loc_826DFE18;
	// ld r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r9,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r9.u64);
	// beq cr6,0x826dfe28
	if (ctx.cr6.eq) goto loc_826DFE28;
	// ld r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 72);
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x826dfe28
	if (!ctx.cr6.gt) goto loc_826DFE28;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x826dfed4
	if (ctx.cr6.gt) goto loc_826DFED4;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// stw r28,68(r31)
	REX_STORE_U32(r31.u32 + 68, r28.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_826DFED4:
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r10,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r10.u64);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stw r8,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826E6C08) {
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
	ctx.lr = 0x826E6C10;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2ca0
	ctx.lr = 0x826E6C18;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,580(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826e6d84
	if (!ctx.cr6.gt) goto loc_826E6D84;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lfd f29,8312(r9)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r9.u32 + 8312);
	// lfd f30,32424(r8)
	f30.u64 = REX_LOAD_U64(ctx.r8.u32 + 32424);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lfd f31,6136(r7)
	f31.u64 = REX_LOAD_U64(ctx.r7.u32 + 6136);
	// addi r28,r11,24056
	r28.s64 = ctx.r11.s64 + 24056;
	// lfs f28,3804(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3804);
	f28.f64 = double(temp.f32);
loc_826E6C60:
	// lwz r9,584(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 584);
	// lwz r11,320(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 320);
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 124);
	// lhz r10,122(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 122);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x826e6c94
	if (!ctx.cr6.lt) goto loc_826E6C94;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_826E6C94:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// blt cr6,0x826e6cf8
	if (ctx.cr6.lt) goto loc_826E6CF8;
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// bgt cr6,0x826e6cf8
	if (ctx.cr6.gt) goto loc_826E6CF8;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826e6cf8
	if (!ctx.cr6.eq) goto loc_826E6CF8;
	// srawi r11,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 7;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// lfs f12,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,80(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// lfs f10,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,84(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// lfs f9,32(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f28
	ctx.f8.f64 = double(float(ctx.f9.f64 * f28.f64));
	// stfs f8,88(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// b 0x826e6d68
	goto loc_826E6D68;
loc_826E6CF8:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fdiv f27,f31,f13
	f27.f64 = f31.f64 / ctx.f13.f64;
	// fmul f26,f27,f30
	f26.f64 = f27.f64 * f30.f64;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// bl 0x826a14e0
	ctx.lr = 0x826E6D18;
	sub_826A14E0(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// bl 0x826a15c0
	ctx.lr = 0x826E6D28;
	sub_826A15C0(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,76(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// bl 0x826a14e0
	ctx.lr = 0x826E6D38;
	sub_826A14E0(ctx, base);
	// fneg f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,80(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// bl 0x826a15c0
	ctx.lr = 0x826E6D4C;
	sub_826A15C0(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,84(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x826a14e0
	ctx.lr = 0x826E6D5C;
	sub_826A14E0(ctx, base);
	// fmul f7,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f1.f64 * f29.f64;
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,88(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
loc_826E6D68:
	// lhz r10,580(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 580);
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r29,r11
	r29.s64 = ctx.r11.s16;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x826e6c60
	if (ctx.cr6.lt) goto loc_826E6C60;
loc_826E6D84:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2cec
	ctx.lr = 0x826E6D94;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826F6B70) {
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
	ctx.lr = 0x826F6B78;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826f6c70
	if (ctx.cr6.eq) goto loc_826F6C70;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_826F6B9C:
	// lwz r8,320(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mulli r7,r30,1776
	ctx.r7.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1776));
	// lhz r11,210(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 210);
	// lhz r9,34(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 34);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r5,56(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 56);
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lwzx r4,r7,r28
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + r28.u32);
	// sth r27,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, r27.u16);
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// lwz r3,356(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 356);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lwzx r10,r7,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826f6c5c
	if (!ctx.cr6.lt) goto loc_826F6C5C;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// blt cr6,0x826f6c04
	if (ctx.cr6.lt) goto loc_826F6C04;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
loc_826F6C04:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x826f6cb4
	if (ctx.cr6.gt) goto loc_826F6CB4;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// cmpwi cr6,r11,61
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x826f6c58
	if (ctx.cr6.eq) goto loc_826F6C58;
	// cmpwi cr6,r11,78
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 78, ctx.xer);
	// beq cr6,0x826f6c50
	if (ctx.cr6.eq) goto loc_826F6C50;
	// cmpwi cr6,r11,94
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 94, ctx.xer);
	// beq cr6,0x826f6c48
	if (ctx.cr6.eq) goto loc_826F6C48;
	// bl 0x826f68b8
	ctx.lr = 0x826F6C44;
	sub_826F68B8(ctx, base);
	// b 0x826f6c5c
	goto loc_826F6C5C;
loc_826F6C48:
	// bl 0x826f6988
	ctx.lr = 0x826F6C4C;
	sub_826F6988(ctx, base);
	// b 0x826f6c5c
	goto loc_826F6C5C;
loc_826F6C50:
	// bl 0x826f6a38
	ctx.lr = 0x826F6C54;
	sub_826F6A38(ctx, base);
	// b 0x826f6c5c
	goto loc_826F6C5C;
loc_826F6C58:
	// bl 0x826f6ae0
	ctx.lr = 0x826F6C5C;
	sub_826F6AE0(ctx, base);
loc_826F6C5C:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r30,r11
	r30.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826f6b9c
	if (ctx.cr6.lt) goto loc_826F6B9C;
loc_826F6C70:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// lhz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U16(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826f6c98
	if (ctx.cr6.eq) goto loc_826F6C98;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_826F6C88:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826f6c88
	if (ctx.cr6.lt) goto loc_826F6C88;
loc_826F6C98:
	// lhz r10,210(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 210);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,210(r31)
	REX_STORE_U16(r31.u32 + 210, ctx.r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_826F6CB4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_827037E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,3732(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3732);
	// lwz r10,3728(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3728);
	// stw r11,3728(r3)
	REX_STORE_U32(ctx.r3.u32 + 3728, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,3732(r3)
	REX_STORE_U32(ctx.r3.u32 + 3732, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270381c
	if (ctx.cr6.eq) goto loc_8270381C;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,3800(r3)
	REX_STORE_U32(ctx.r3.u32 + 3800, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,3804(r3)
	REX_STORE_U32(ctx.r3.u32 + 3804, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,3808(r3)
	REX_STORE_U32(ctx.r3.u32 + 3808, ctx.r7.u32);
loc_8270381C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,3812(r3)
	REX_STORE_U32(ctx.r3.u32 + 3812, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,3816(r3)
	REX_STORE_U32(ctx.r3.u32 + 3816, ctx.r9.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,3820(r3)
	REX_STORE_U32(ctx.r3.u32 + 3820, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82706810) {
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
	ctx.lr = 0x82706818;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,144(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,20912(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20912);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r9,268(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// li r24,0
	r24.s64 = 0;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r3,140(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r9
	r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x8275de38
	ctx.lr = 0x82706850;
	sub_8275DE38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82706984
	if (!ctx.cr6.eq) goto loc_82706984;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,136(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 136);
	// bl 0x8275de38
	ctx.lr = 0x82706864;
	sub_8275DE38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82706984
	if (ctx.cr6.eq) goto loc_82706984;
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// li r26,0
	r26.s64 = 0;
	// lwz r10,140(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 140);
	// clrlwi r25,r11,31
	r25.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82706ab4
	if (!ctx.cr6.gt) goto loc_82706AB4;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r27,r10,26444
	r27.s64 = ctx.r10.s64 + 26444;
loc_8270688C:
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82706970
	if (!ctx.cr6.lt) goto loc_82706970;
loc_82706898:
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// lwz r3,84(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 84);
	// addi r5,r27,60
	ctx.r5.s64 = r27.s64 + 60;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r28,r11,r29
	r28.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x827064e0
	ctx.lr = 0x827068B4;
	sub_827064E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82706c9c
	if (!ctx.cr6.eq) goto loc_82706C9C;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r9,r10,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rlwimi r8,r10,31,0,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r8.u64 & 0xFFFFFFFF7FFFFFFF);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// add r10,r28,r11
	ctx.r10.u64 = r28.u64 + ctx.r11.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r6,24(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r5,r9,31,0,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000) | (ctx.r5.u64 & 0xFFFFFFFF7FFFFFFF);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// rlwimi r6,r9,31,0,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000) | (ctx.r6.u64 & 0xFFFFFFFF7FFFFFFF);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// stw r6,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r3,r9,31,0,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000) | (ctx.r3.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwimi r8,r10,31,0,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r8.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82706898
	if (ctx.cr6.lt) goto loc_82706898;
loc_82706970:
	// lwz r10,140(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 140);
	// addi r26,r26,3
	r26.s64 = r26.s64 + 3;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8270688c
	if (ctx.cr6.lt) goto loc_8270688C;
	// b 0x82706ab4
	goto loc_82706AB4;
loc_82706984:
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,136(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 136);
	// clrlwi r24,r11,31
	r24.u64 = ctx.r11.u32 & 0x1;
	// bl 0x8275de38
	ctx.lr = 0x82706998;
	sub_8275DE38(ctx, base);
	// lwz r10,140(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 140);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r26,r24
	r26.u64 = r24.u64;
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82706ab4
	if (!ctx.cr6.lt) goto loc_82706AB4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r27,r11,26444
	r27.s64 = ctx.r11.s64 + 26444;
loc_827069B4:
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82706aa4
	if (!ctx.cr6.lt) goto loc_82706AA4;
loc_827069C4:
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// lwz r3,84(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 84);
	// addi r5,r27,60
	ctx.r5.s64 = r27.s64 + 60;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r29,r11,r28
	r29.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x827064e0
	ctx.lr = 0x827069E0;
	sub_827064E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82706c9c
	if (!ctx.cr6.eq) goto loc_82706C9C;
	// rlwinm r9,r29,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r29,2
	ctx.r11.s64 = r29.s64 + 2;
	// add r9,r29,r9
	ctx.r9.u64 = r29.u64 + ctx.r9.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + r31.u64;
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r28,r28,3
	r28.s64 = r28.s64 + 3;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,24(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r7,r10,31,0,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r7.u64 & 0xFFFFFFFF7FFFFFFF);
	// lwzx r5,r9,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// rlwimi r6,r10,31,0,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r6.u64 & 0xFFFFFFFF7FFFFFFF);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stw r6,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// rlwimi r5,r10,31,0,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r5.u64 & 0xFFFFFFFF7FFFFFFF);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stwx r5,r9,r31
	REX_STORE_U32(ctx.r9.u32 + r31.u32, ctx.r5.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r6,r10,31,0,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r6.u64 & 0xFFFFFFFF7FFFFFFF);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// rlwimi r8,r10,31,0,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r8.u64 & 0xFFFFFFFF7FFFFFFF);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// rlwimi r7,r10,31,0,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r7.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stwx r7,r9,r31
	REX_STORE_U32(ctx.r9.u32 + r31.u32, ctx.r7.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827069c4
	if (ctx.cr6.lt) goto loc_827069C4;
loc_82706AA4:
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// addi r26,r26,2
	r26.s64 = r26.s64 + 2;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827069b4
	if (ctx.cr6.lt) goto loc_827069B4;
loc_82706AB4:
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x82706bb0
	if (!ctx.cr6.gt) goto loc_82706BB0;
loc_82706AC0:
	// lwz r3,84(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 84);
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
	// rldicl r29,r10,1,63
	r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82706ae8
	if (!ctx.cr0.lt) goto loc_82706AE8;
	// bl 0x82725e38
	ctx.lr = 0x82706AE8;
	sub_82725E38(ctx, base);
loc_82706AE8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82706b60
	if (ctx.cr6.eq) goto loc_82706B60;
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82706ba4
	if (!ctx.cr6.gt) goto loc_82706BA4;
loc_82706B00:
	// lwz r3,84(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 84);
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
	// bge 0x82706b28
	if (!ctx.cr0.lt) goto loc_82706B28;
	// bl 0x82725e38
	ctx.lr = 0x82706B28;
	sub_82725E38(ctx, base);
loc_82706B28:
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// mullw r11,r29,r11
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// rlwimi r9,r28,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r9.u32);
	// lwz r8,140(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 140);
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82706b00
	if (ctx.cr6.lt) goto loc_82706B00;
	// b 0x82706ba4
	goto loc_82706BA4;
loc_82706B60:
	// lwz r10,140(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 140);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82706ba4
	if (!ctx.cr6.gt) goto loc_82706BA4;
loc_82706B70:
	// lwz r10,136(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 136);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// clrlwi r7,r8,1
	ctx.r7.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stwx r7,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r7.u32);
	// lwz r6,140(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 140);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82706b70
	if (ctx.cr6.lt) goto loc_82706B70;
loc_82706BA4:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(r27.s32, r25.s32, ctx.xer);
	// blt cr6,0x82706ac0
	if (ctx.cr6.lt) goto loc_82706AC0;
loc_82706BB0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x82706c98
	if (ctx.cr6.eq) goto loc_82706C98;
	// lwz r3,84(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 84);
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
	// rldicl r29,r10,1,63
	r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82706be0
	if (!ctx.cr0.lt) goto loc_82706BE0;
	// bl 0x82725e38
	ctx.lr = 0x82706BE0;
	sub_82725E38(ctx, base);
loc_82706BE0:
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82706c5c
	if (ctx.cr6.eq) goto loc_82706C5C;
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82706c98
	if (!ctx.cr6.lt) goto loc_82706C98;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r25,r11
	ctx.r11.u64 = r25.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r31,r11,-24
	r31.s64 = ctx.r11.s64 + -24;
loc_82706C0C:
	// lwz r3,84(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 84);
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
	// rldicl r29,r10,1,63
	r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82706c34
	if (!ctx.cr0.lt) goto loc_82706C34;
	// bl 0x82725e38
	ctx.lr = 0x82706C34;
	sub_82725E38(ctx, base);
loc_82706C34:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// rlwimi r11,r29,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwu r11,24(r31)
	ea = 24 + r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r31.u32 = ea;
	// lwz r10,136(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 136);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82706c0c
	if (ctx.cr6.lt) goto loc_82706C0C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_82706C5C:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82706c98
	if (!ctx.cr6.lt) goto loc_82706C98;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r25,r11
	ctx.r11.u64 = r25.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
loc_82706C7C:
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stwu r8,24(r11)
	ea = 24 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lwz r7,136(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 136);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82706c7c
	if (ctx.cr6.lt) goto loc_82706C7C;
loc_82706C98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82706C9C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82738E78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// clrlwi r11,r6,29
	ctx.r11.u64 = ctx.r6.u32 & 0x7;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82738ee8
	if (!ctx.cr6.eq) goto loc_82738EE8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,31264
	ctx.r9.s64 = ctx.r11.s64 + 31264;
	// vspltish v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x3)));
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v11,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v10,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsrah v9,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v63,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// stvlx128 v63,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvlx128 v63,r3,r4
	ea = ctx.r3.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvlx128 v63,r3,r10
	ea = ctx.r3.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvlx128 v63,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stvlx128 v63,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stvlx128 v63,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stvlx128 v63,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvlx128 v63,r3,r8
	ea = ctx.r3.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// blr 
	return;
loc_82738EE8:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82738ef4
	if (!ctx.cr6.lt) goto loc_82738EF4;
	// b 0x827389f8
	sub_827389F8(ctx, base);
	return;
loc_82738EF4:
	// b 0x82736268
	sub_82736268(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8273F748) {
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
	ctx.lr = 0x8273F750;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r18,348(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// stw r10,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r10.u32);
	// li r30,0
	r30.s64 = 0;
	// cntlzw r11,r18
	ctx.r11.u64 = r18.u32 == 0 ? 32 : __builtin_clz(r18.u32);
	// lwz r23,380(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// stw r7,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r9,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r16,r8
	r16.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// beq cr6,0x8273f7c4
	if (ctx.cr6.eq) goto loc_8273F7C4;
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// srawi r10,r25,1
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x1) != 0);
	ctx.r10.s64 = r25.s32 >> 1;
	// stw r11,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// lwz r26,324(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// rotlwi r25,r10,0
	r25.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r10.u32);
loc_8273F7C4:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r22,388(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lwzx r3,r11,r21
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	// bl 0x82770490
	ctx.lr = 0x8273F7DC;
	sub_82770490(ctx, base);
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8273f938
	if (!ctx.cr6.eq) goto loc_8273F938;
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// srawi r19,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r19.s64 = ctx.r3.s32 >> 1;
	// clrlwi r14,r11,31
	r14.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x8273f944
	if (ctx.cr6.eq) goto loc_8273F944;
	// lwz r26,1984(r17)
	r26.u64 = REX_LOAD_U32(r17.u32 + 1984);
	// li r31,1
	r31.s64 = 1;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r15,1
	r15.s64 = 1;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x8273f820
	if (ctx.cr6.eq) goto loc_8273F820;
	// li r23,1
	r23.s64 = 1;
	// li r25,1
	r25.s64 = 1;
	// b 0x8273f858
	goto loc_8273F858;
loc_8273F820:
	// lwz r10,356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// ble cr6,0x8273f838
	if (!ctx.cr6.gt) goto loc_8273F838;
	// mr r23,r30
	r23.u64 = r30.u64;
	// mr r18,r30
	r18.u64 = r30.u64;
	// b 0x8273f83c
	goto loc_8273F83C;
loc_8273F838:
	// li r23,3
	r23.s64 = 3;
loc_8273F83C:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r25,2
	r25.s64 = 2;
	// xoris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addc r7,r8,r9
	ctx.xer.ca = ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32;
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r26,r5,r26
	r26.u64 = ctx.r5.u64 & r26.u64;
loc_8273F858:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,364(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// lwz r30,316(r17)
	r30.u64 = REX_LOAD_U32(r17.u32 + 316);
	// addi r8,r11,-24620
	ctx.r8.s64 = ctx.r11.s64 + -24620;
	// lwz r29,312(r17)
	r29.u64 = REX_LOAD_U32(r17.u32 + 312);
	// addi r7,r9,14260
	ctx.r7.s64 = ctx.r9.s64 + 14260;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r27,r11,-32200
	r27.s64 = ctx.r11.s64 + -32200;
	// lbzx r6,r10,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// rotlwi r5,r6,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lwzx r28,r5,r7
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
loc_8273F888:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r18.s32, ctx.xer);
	// blt cr6,0x8273f8a0
	if (ctx.cr6.lt) goto loc_8273F8A0;
	// mr r25,r23
	r25.u64 = r23.u64;
loc_8273F8A0:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwzx r3,r11,r21
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	// bl 0x8276fd48
	ctx.lr = 0x8273F8C0;
	sub_8276FD48(ctx, base);
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8273f938
	if (!ctx.cr6.eq) goto loc_8273F938;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mullw r8,r10,r29
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// and r7,r11,r26
	ctx.r7.u64 = ctx.r11.u64 & r26.u64;
	// srawi r6,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 6;
	// srawi r10,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 15;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// xor r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 ^ r30.u64;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// lhzx r8,r5,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + r27.u32);
	// subf r7,r10,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r10.u64;
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// lbzx r5,r4,r28
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + r28.u32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r4,r7,r6
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// rotlwi r3,r5,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// sthx r11,r3,r24
	REX_STORE_U16(ctx.r3.u32 + r24.u32, ctx.r11.u16);
	// beq cr6,0x8273f888
	if (ctx.cr6.eq) goto loc_8273F888;
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(r31.s32, 64, ctx.xer);
	// ble cr6,0x8273faac
	if (!ctx.cr6.gt) goto loc_8273FAAC;
loc_8273F938:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
loc_8273F944:
	// lwz r11,1988(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1988);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8273fa24
	if (ctx.cr6.eq) goto loc_8273FA24;
	// addi r10,r19,1
	ctx.r10.s64 = r19.s64 + 1;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x8273fa24
	if (!ctx.cr6.lt) goto loc_8273FA24;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,372(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addis r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 65536;
	// addi r7,r7,-32768
	ctx.r7.s64 = ctx.r7.s64 + -32768;
	// srawi r11,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 16;
	// add r6,r11,r19
	ctx.r6.u64 = ctx.r11.u64 + r19.u64;
	// mullw r11,r6,r16
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(r16.s32);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// srawi. r10,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8273f998
	if (!ctx.cr0.lt) goto loc_8273F998;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// b 0x8273f9a4
	goto loc_8273F9A4;
loc_8273F998:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x8273f9a4
	if (!ctx.cr6.gt) goto loc_8273F9A4;
	// li r10,255
	ctx.r10.s64 = 255;
loc_8273F9A4:
	// lis r11,257
	ctx.r11.s64 = 16842752;
	// lwz r31,340(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// srawi r9,r27,2
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3) != 0);
	ctx.r9.s64 = r27.s32 >> 2;
	// lwz r28,364(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// ori r8,r11,257
	ctx.r8.u64 = ctx.r11.u64 | 257;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// stw r7,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r7,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// li r15,1
	r15.s64 = 1;
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r7,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r7.u32);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x8273fa54
	goto loc_8273FA54;
loc_8273FA24:
	// mr r15,r19
	r15.u64 = r19.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x8273fabc
	if (!ctx.cr6.eq) goto loc_8273FABC;
	// lwz r28,364(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
loc_8273FA34:
	// lwz r31,340(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// lwz r3,1988(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 1988);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8273e460
	ctx.lr = 0x8273FA54;
	sub_8273E460(ctx, base);
loc_8273FA54:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x8273fa74
	if (!ctx.cr6.eq) goto loc_8273FA74;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r3,1992(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 1992);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8276f420
	ctx.lr = 0x8273FA74;
	sub_8276F420(ctx, base);
loc_8273FA74:
	// lwz r11,3916(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 3916);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273faa0
	if (ctx.cr6.eq) goto loc_8273FAA0;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r5,248(r17)
	ctx.r5.u64 = REX_LOAD_U32(r17.u32 + 248);
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276f0d8
	ctx.lr = 0x8273FAA0;
	sub_8276F0D8(ctx, base);
loc_8273FAA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
loc_8273FAAC:
	// lwz r25,332(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r23,380(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r26,324(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r27,308(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_8273FABC:
	// lwz r28,364(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mullw r10,r19,r16
	ctx.r10.s64 = int64_t(r19.s32) * int64_t(r16.s32);
	// sth r10,0(r24)
	REX_STORE_U16(r24.u32 + 0, ctx.r10.u16);
	// or r9,r26,r25
	ctx.r9.u64 = r26.u64 | r25.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8273fae4
	if (ctx.cr6.eq) goto loc_8273FAE4;
	// addi r10,r19,1
	ctx.r10.s64 = r19.s64 + 1;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x8273fae8
	if (!ctx.cr6.lt) goto loc_8273FAE8;
loc_8273FAE4:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8273FAE8:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r3,1768(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 1768);
	// lwz r29,1988(r17)
	r29.u64 = REX_LOAD_U32(r17.u32 + 1988);
	// addi r10,r10,-32072
	ctx.r10.s64 = ctx.r10.s64 + -32072;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lhz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r31,r8
	r31.s64 = ctx.r8.s16;
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// extsb r30,r7
	r30.s64 = ctx.r7.s8;
	// beq cr6,0x8273fb28
	if (ctx.cr6.eq) goto loc_8273FB28;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8273fb28
	if (ctx.cr6.lt) goto loc_8273FB28;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8273d718
	ctx.lr = 0x8273FB28;
	sub_8273D718(ctx, base);
loc_8273FB28:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne cr6,0x8273fb6c
	if (!ctx.cr6.eq) goto loc_8273FB6C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8273fb40
	if (ctx.cr6.eq) goto loc_8273FB40;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x8273fb6c
	if (!ctx.cr6.lt) goto loc_8273FB6C;
loc_8273FB40:
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// li r9,32
	ctx.r9.s64 = 32;
	// srawi r8,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r8,r11,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_8273FB60:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8273fb60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8273FB60;
	// b 0x8273fa34
	goto loc_8273FA34;
loc_8273FB6C:
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 52);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,8
	ctx.r5.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273FB84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8273fa34
	goto loc_8273FA34;
}

DEFINE_REX_FUNC(sub_82752CF8) {
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
	ctx.lr = 0x82752D00;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,280(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 280);
	// mr r16,r8
	r16.u64 = ctx.r8.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r6,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r6.u32);
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// stw r7,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r7.u32);
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// stw r9,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r9.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r15,r4,14
	r15.s64 = ctx.r4.s64 + 14;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82752d44
	if (!ctx.cr6.eq) goto loc_82752D44;
	// lwz r11,22164(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22164);
	// li r14,1
	r14.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82752d48
	if (ctx.cr6.eq) goto loc_82752D48;
loc_82752D44:
	// li r14,0
	r14.s64 = 0;
loc_82752D48:
	// lbz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U8(r18.u32 + 4);
	// lwz r10,6576(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 6576);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r7,392(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 392);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r17,r11,r10
	r17.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82752d94
	if (ctx.cr6.eq) goto loc_82752D94;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// rlwinm r11,r11,10,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// addi r10,r11,732
	ctx.r10.s64 = ctx.r11.s64 + 732;
	// addi r9,r11,735
	ctx.r9.s64 = ctx.r11.s64 + 735;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// add r22,r11,r31
	r22.u64 = ctx.r11.u64 + r31.u64;
	// stw r7,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// b 0x82752da0
	goto loc_82752DA0;
loc_82752D94:
	// addi r11,r31,2904
	ctx.r11.s64 = r31.s64 + 2904;
	// addi r22,r31,2916
	r22.s64 = r31.s64 + 2916;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_82752DA0:
	// li r25,0
	r25.s64 = 0;
	// rlwinm r21,r8,1,0,30
	r21.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r16,1,0,30
	r20.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// li r24,8
	r24.s64 = 8;
loc_82752DB0:
	// srawi r11,r25,1
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x1) != 0);
	ctx.r11.s64 = r25.s32 >> 1;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// clrlwi r23,r25,31
	r23.u64 = r25.u32 & 0x1;
	// lwz r10,460(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 460);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lbzx r27,r25,r15
	r27.u64 = REX_LOAD_U8(r25.u32 + r15.u32);
	// add r29,r20,r23
	r29.u64 = r20.u64 + r23.u64;
	// lwz r30,1768(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// add r8,r11,r21
	ctx.r8.u64 = ctx.r11.u64 + r21.u64;
	// li r26,0
	r26.s64 = 0;
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + r29.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// add r28,r11,r10
	r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82752e54
	if (ctx.cr6.eq) goto loc_82752E54;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8274ed20
	ctx.lr = 0x82752E1C;
	sub_8274ED20(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// bl 0x82764940
	ctx.lr = 0x82752E50;
	sub_82764940(ctx, base);
	// b 0x82752ea0
	goto loc_82752EA0;
loc_82752E54:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82750070
	ctx.lr = 0x82752E60;
	sub_82750070(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82752e6c
	if (ctx.cr6.eq) goto loc_82752E6C;
	// addi r26,r1,128
	r26.s64 = ctx.r1.s64 + 128;
loc_82752E6C:
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// bl 0x82764940
	ctx.lr = 0x82752EA0;
	sub_82764940(ctx, base);
loc_82752EA0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82753608
	if (!ctx.cr6.eq) goto loc_82753608;
	// lwz r11,2992(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2992);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82753058
	if (ctx.cr6.eq) goto loc_82753058;
	// rlwinm r11,r25,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x2;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// addi r6,r11,751
	ctx.r6.s64 = ctx.r11.s64 + 751;
	// rlwinm r7,r29,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r29,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r30,-2
	ctx.r6.s64 = r30.s64 + -2;
	// lwzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_82752EEC:
	// lhzu r7,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x82752eec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82752EEC;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r30,14
	ctx.r5.s64 = r30.s64 + 14;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
loc_82752F18:
	// lhzu r8,2(r5)
	ea = 2 + ctx.r5.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r8,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x82752f18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82752F18;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r5,r30,30
	ctx.r5.s64 = r30.s64 + 30;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r8,r7,-2
	ctx.r8.s64 = ctx.r7.s64 + -2;
loc_82752F48:
	// lhzu r7,2(r5)
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x82752f48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82752F48;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r5,r30,46
	ctx.r5.s64 = r30.s64 + 46;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_82752F7C:
	// lhzu r7,2(r5)
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x82752f7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82752F7C;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r5,r30,62
	ctx.r5.s64 = r30.s64 + 62;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r8,r7,-2
	ctx.r8.s64 = ctx.r7.s64 + -2;
loc_82752FAC:
	// lhzu r7,2(r5)
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x82752fac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82752FAC;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r5,r30,78
	ctx.r5.s64 = r30.s64 + 78;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_82752FE0:
	// lhzu r7,2(r5)
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x82752fe0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82752FE0;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r7,r10,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r5,r30,94
	ctx.r5.s64 = r30.s64 + 94;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_82753018:
	// lhzu r7,2(r5)
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x82753018
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82753018;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// addi r7,r30,110
	ctx.r7.s64 = r30.s64 + 110;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_8275304C:
	// lhzu r10,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8275304c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275304C;
loc_82753058:
	// lwz r11,3176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3176);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r7,260(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82753078;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r10,r25,r18
	ctx.r10.u64 = r25.u64 + r18.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// li r23,0
	r23.s64 = 0;
	// stb r23,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, r23.u8);
	// beq cr6,0x82753094
	if (ctx.cr6.eq) goto loc_82753094;
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// b 0x82753098
	goto loc_82753098;
loc_82753094:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_82753098:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// add r19,r11,r19
	r19.u64 = ctx.r11.u64 + r19.u64;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(r25.s32, 4, ctx.xer);
	// blt cr6,0x82752db0
	if (ctx.cr6.lt) goto loc_82752DB0;
	// lwz r26,388(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mr r28,r23
	r28.u64 = r23.u64;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// lwz r10,464(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 464);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// add r9,r11,r16
	ctx.r9.u64 = ctx.r11.u64 + r16.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82753134
	if (ctx.cr6.eq) goto loc_82753134;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// bl 0x8274ee28
	ctx.lr = 0x827530F4;
	sub_8274EE28(ctx, base);
	// lwz r22,124(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lbz r6,4(r15)
	ctx.r6.u64 = REX_LOAD_U8(r15.u32 + 4);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// lwz r30,1768(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// bl 0x82764940
	ctx.lr = 0x82753130;
	sub_82764940(ctx, base);
	// b 0x82753184
	goto loc_82753184;
loc_82753134:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// bl 0x82750340
	ctx.lr = 0x8275313C;
	sub_82750340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82753148
	if (ctx.cr6.eq) goto loc_82753148;
	// addi r28,r1,128
	r28.s64 = ctx.r1.s64 + 128;
loc_82753148:
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lwz r30,1768(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r22,124(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r6,4(r15)
	ctx.r6.u64 = REX_LOAD_U8(r15.u32 + 4);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// bl 0x82764940
	ctx.lr = 0x82753184;
	sub_82764940(ctx, base);
loc_82753184:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82753608
	if (!ctx.cr6.eq) goto loc_82753608;
	// lwz r11,2992(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2992);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82753330
	if (ctx.cr6.eq) goto loc_82753330;
	// lwz r10,3016(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3016);
	// rlwinm r11,r16,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,136(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// addi r7,r30,-2
	ctx.r7.s64 = r30.s64 + -2;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r16,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_827531C4:
	// lhzu r8,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x827531c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827531C4;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,3016(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3016);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r30,14
	ctx.r6.s64 = r30.s64 + 14;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_827531F0:
	// lhzu r9,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x827531f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827531F0;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,3016(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3016);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r30,30
	ctx.r6.s64 = r30.s64 + 30;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_82753220:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82753220
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82753220;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,3016(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3016);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r6,r30,46
	ctx.r6.s64 = r30.s64 + 46;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_82753254:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82753254
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82753254;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,3016(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3016);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r30,62
	ctx.r6.s64 = r30.s64 + 62;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_82753284:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82753284
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82753284;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,3016(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3016);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r6,r30,78
	ctx.r6.s64 = r30.s64 + 78;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_827532B8:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x827532b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827532B8;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,3016(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3016);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r6,r30,94
	ctx.r6.s64 = r30.s64 + 94;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_827532F0:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x827532f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827532F0;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,3016(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3016);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// addi r7,r30,110
	ctx.r7.s64 = r30.s64 + 110;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_82753324:
	// lhzu r10,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x82753324
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82753324;
loc_82753330:
	// lwz r11,3176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3176);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,364(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r7,260(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82753350;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r23,12(r18)
	REX_STORE_U8(r18.u32 + 12, r23.u8);
	// addi r28,r25,1
	r28.s64 = r25.s64 + 1;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mullw r11,r9,r26
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r26.s32);
	// add r8,r11,r16
	ctx.r8.u64 = ctx.r11.u64 + r16.u64;
	// lwz r10,468(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 468);
	// mr r27,r23
	r27.u64 = r23.u64;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x827533dc
	if (ctx.cr6.eq) goto loc_827533DC;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// bl 0x8274ee28
	ctx.lr = 0x827533A0;
	sub_8274EE28(ctx, base);
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lbz r6,5(r15)
	ctx.r6.u64 = REX_LOAD_U8(r15.u32 + 5);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// lwz r30,1768(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// bl 0x82764940
	ctx.lr = 0x827533D8;
	sub_82764940(ctx, base);
	// b 0x82753428
	goto loc_82753428;
loc_827533DC:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// bl 0x82750340
	ctx.lr = 0x827533E4;
	sub_82750340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827533f0
	if (ctx.cr6.eq) goto loc_827533F0;
	// addi r27,r1,128
	r27.s64 = ctx.r1.s64 + 128;
loc_827533F0:
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r30,1768(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r6,5(r15)
	ctx.r6.u64 = REX_LOAD_U8(r15.u32 + 5);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// bl 0x82764940
	ctx.lr = 0x82753428;
	sub_82764940(ctx, base);
loc_82753428:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82753608
	if (!ctx.cr6.eq) goto loc_82753608;
	// lwz r11,2992(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2992);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827535d4
	if (ctx.cr6.eq) goto loc_827535D4;
	// lwz r10,3024(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3024);
	// rlwinm r11,r16,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,136(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// addi r7,r30,-2
	ctx.r7.s64 = r30.s64 + -2;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r16,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_82753468:
	// lhzu r8,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82753468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82753468;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,3024(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3024);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r30,14
	ctx.r6.s64 = r30.s64 + 14;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_82753494:
	// lhzu r9,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x82753494
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82753494;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,3024(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3024);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r30,30
	ctx.r6.s64 = r30.s64 + 30;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_827534C4:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x827534c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827534C4;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,3024(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3024);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r6,r30,46
	ctx.r6.s64 = r30.s64 + 46;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_827534F8:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x827534f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827534F8;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,3024(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3024);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r30,62
	ctx.r6.s64 = r30.s64 + 62;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_82753528:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82753528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82753528;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,3024(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3024);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r6,r30,78
	ctx.r6.s64 = r30.s64 + 78;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_8275355C:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8275355c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275355C;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,3024(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3024);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r6,r30,94
	ctx.r6.s64 = r30.s64 + 94;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_82753594:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82753594
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82753594;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,3024(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3024);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// addi r7,r30,110
	ctx.r7.s64 = r30.s64 + 110;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_827535C8:
	// lhzu r10,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x827535c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827535C8;
loc_827535D4:
	// lwz r11,3176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3176);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,372(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r7,260(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827535F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r23,13(r18)
	REX_STORE_U8(r18.u32 + 13, r23.u8);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r9,0(r18)
	REX_STORE_U32(r18.u32 + 0, ctx.r9.u32);
loc_82753608:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82790580) {
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
	ctx.lr = 0x82790588;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r21,r5,r7
	r21.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stw r8,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r8.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r9,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r9.u32);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lwz r15,100(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// mr r19,r21
	r19.u64 = r21.u64;
	// li r28,0
	r28.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x827907b4
	if (!ctx.cr6.lt) goto loc_827907B4;
	// subf r25,r11,r10
	r25.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r20,132(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r14,124(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stw r25,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, r25.u32);
loc_827905CC:
	// srawi r11,r15,8
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0xFF) != 0);
	ctx.r11.s64 = r15.s32 >> 8;
	// clrlwi r18,r15,24
	r18.u64 = r15.u32 & 0xFF;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r22,r11,r3
	r22.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r3,r8
	ctx.r10.u64 = ctx.r3.u64 + ctx.r8.u64;
	// subfic r17,r18,256
	ctx.xer.ca = r18.u32 <= 256;
	r17.u64 = static_cast<uint64_t>(256) - r18.u64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r22,r29
	ctx.cr6.compare<uint32_t>(r22.u32, r29.u32, ctx.xer);
	// bne cr6,0x82790684
	if (!ctx.cr6.eq) goto loc_82790684;
	// mr r26,r16
	r26.u64 = r16.u64;
	// mr r16,r19
	r16.u64 = r19.u64;
	// mr r19,r26
	r19.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82790650
	if (!ctx.cr6.gt) goto loc_82790650;
	// addi r28,r30,1
	r28.s64 = r30.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// addi r31,r20,-4
	r31.s64 = r20.s64 + -4;
	// subf r27,r26,r14
	r27.u64 = r14.u64 - r26.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
loc_82790620:
	// lwzu r10,4(r31)
	ea = 4 + r31.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// lbzx r24,r27,r11
	r24.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// subfic r29,r24,128
	ctx.xer.ca = r24.u32 <= 128;
	r29.u64 = static_cast<uint64_t>(128) - r24.u64;
	// lbzx r23,r10,r30
	r23.u64 = REX_LOAD_U8(ctx.r10.u32 + r30.u32);
	// lbzx r10,r28,r10
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + ctx.r10.u32);
	// mullw r29,r23,r29
	r29.s64 = int64_t(r23.s32) * int64_t(r29.s32);
	// mullw r10,r10,r24
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r24.s32);
	// add r10,r29,r10
	ctx.r10.u64 = r29.u64 + ctx.r10.u64;
	// srawi r10,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 7;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82790620
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82790620;
loc_82790650:
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82790754
	if (!ctx.cr6.lt) goto loc_82790754;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r4,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r4.u64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8279066C:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lbzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r30.u32);
	// stbx r10,r4,r26
	REX_STORE_U8(ctx.r4.u32 + r26.u32, ctx.r10.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bdnz 0x8279066c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8279066C;
	// b 0x82790754
	goto loc_82790754;
loc_82790684:
	// cmplw cr6,r22,r28
	ctx.cr6.compare<uint32_t>(r22.u32, r28.u32, ctx.xer);
	// beq cr6,0x82790754
	if (ctx.cr6.eq) goto loc_82790754;
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// mr r19,r21
	r19.u64 = r21.u64;
	// li r23,0
	r23.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82790714
	if (!ctx.cr6.gt) goto loc_82790714;
	// addi r27,r22,1
	r27.s64 = r22.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r26,r30,1
	r26.s64 = r30.s64 + 1;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r31,r20,-4
	r31.s64 = r20.s64 + -4;
	// subf r25,r5,r14
	r25.u64 = r14.u64 - ctx.r5.u64;
	// subf r24,r5,r21
	r24.u64 = r21.u64 - ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
loc_827906C0:
	// lwzu r10,4(r31)
	ea = 4 + r31.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// lbzx r8,r25,r11
	ctx.r8.u64 = REX_LOAD_U8(r25.u32 + ctx.r11.u32);
	// subfic r4,r8,128
	ctx.xer.ca = ctx.r8.u32 <= 128;
	ctx.r4.u64 = static_cast<uint64_t>(128) - ctx.r8.u64;
	// lbzx r29,r27,r10
	r29.u64 = REX_LOAD_U8(r27.u32 + ctx.r10.u32);
	// lbzx r28,r10,r22
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + r22.u32);
	// mullw r29,r29,r8
	r29.s64 = int64_t(r29.s32) * int64_t(ctx.r8.s32);
	// mullw r28,r28,r4
	r28.s64 = int64_t(r28.s32) * int64_t(ctx.r4.s32);
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// srawi r29,r29,7
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7F) != 0);
	r29.s64 = r29.s32 >> 7;
	// stb r29,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r29.u8);
	// lbzx r29,r26,r10
	r29.u64 = REX_LOAD_U8(r26.u32 + ctx.r10.u32);
	// lbzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r30.u32);
	// mullw r4,r10,r4
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// mullw r10,r29,r8
	ctx.r10.s64 = int64_t(r29.s32) * int64_t(ctx.r8.s32);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// srawi r4,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 7;
	// stbx r4,r24,r11
	REX_STORE_U8(r24.u32 + ctx.r11.u32, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x827906c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827906C0;
	// lwz r8,68(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// lwz r25,-160(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
loc_82790714:
	// cmpw cr6,r23,r7
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82790754
	if (!ctx.cr6.lt) goto loc_82790754;
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r23,r7
	r29.u64 = ctx.r7.u64 - r23.u64;
	// add r10,r11,r20
	ctx.r10.u64 = ctx.r11.u64 + r20.u64;
	// add r11,r23,r21
	ctx.r11.u64 = r23.u64 + r21.u64;
	// addi r4,r10,-4
	ctx.r4.s64 = ctx.r10.s64 + -4;
	// subf r31,r21,r5
	r31.u64 = ctx.r5.u64 - r21.u64;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_82790738:
	// lwzu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// lbzx r29,r10,r22
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + r22.u32);
	// stbx r29,r31,r11
	REX_STORE_U8(r31.u32 + ctx.r11.u32, r29.u8);
	// lbzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r30.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82790738
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82790738;
loc_82790754:
	// mr r28,r22
	r28.u64 = r22.u64;
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82790798
	if (!ctx.cr6.gt) goto loc_82790798;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r31,r19,r16
	r31.u64 = r16.u64 - r19.u64;
	// subf r30,r19,r9
	r30.u64 = ctx.r9.u64 - r19.u64;
loc_82790774:
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r10,r10,r17
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r17.s32);
	// mullw r4,r4,r18
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(r18.s32);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// srawi r4,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 8;
	// stbx r4,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82790774
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82790774;
loc_82790798:
	// lwz r11,60(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r25,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, r25.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r15,r15,r10
	r15.u64 = r15.u64 + ctx.r10.u64;
	// bne 0x827905cc
	if (!ctx.cr0.eq) goto loc_827905CC;
loc_827907B4:
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_827AEEC8) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v69{};
	PPCVRegister v72{};
	uint32_t ea{};
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx v1,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// vspltish v30,2
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_set1_epi16(short(0x2)));
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// li r9,16
	ctx.r9.s64 = 16;
	// vsldoi v5,v1,v1,8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), 8));
	// vor128 v14,v69,v69
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_load_si128((simde__m128i*)v69.u8));
	// vspltish v31,4
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_set1_epi16(short(0x4)));
	// vor128 v15,v72,v72
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_load_si128((simde__m128i*)v72.u8));
	// lvx v3,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v29,1
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_set1_epi16(short(0x1)));
	// lvx v2,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v1,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v6,v3,v3,8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), 8));
	// vslh v24,v2,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v7,v2,v2,8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), 8));
	// vslh v2,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx v4,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v11,v5,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v12,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsldoi v8,v4,v4,8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), 8));
	// vaddshs v2,v2,v24
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vslh v1,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v11,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v24,v12,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v10,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v1,v25
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vslh v25,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v24,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v27,v5,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v6,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v11,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v9,v12,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v5,v27,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v12,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v27,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v6,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vslh v26,v7,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v5,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v9,v12,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v6,v6,v24
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vslh v24,v8,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v26,v27
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsubuhm v10,v10,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vslh v25,v8,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v24,v9,v24
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vaddshs v26,v9,v26
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vaddshs v1,v1,v31
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vslh v27,v8,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v24,v24,v25
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vsubuhm v10,v10,v26
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vslh v26,v12,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v7,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v11,v11,v24
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vslh v24,v7,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v26,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v26,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v24,v25
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vslh v25,v4,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v26,v9,v26
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vsubuhm v24,v9,v24
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vaddshs v9,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubuhm v26,v26,v27
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vsubuhm v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vor v2,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vaddshs v5,v5,v24
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v6,v6,v26
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vslh v24,v4,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v2,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v2,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v4,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v24,v25
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vslh v3,v3,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v26,v27
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsubuhm v3,v24,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vaddshs v4,v26,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v8,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vspltish v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x3)));
	// vsubuhm v9,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vaddshs v4,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubuhm v1,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vaddshs v24,v8,v5
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubuhm v31,v8,v5
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vaddshs v25,v4,v10
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubuhm v30,v4,v10
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vspltish v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x1)));
	// vaddshs v26,v1,v11
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubuhm v29,v1,v11
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vspltish v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x2)));
	// vaddshs v27,v9,v6
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubuhm v28,v9,v6
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vspltish v9,6
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x6)));
	// vsrah v30,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v18,v28,v29
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vmrghh v19,v30,v31
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vspltish v30,8
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_set1_epi16(short(0x8)));
	// vmrghh v16,v24,v25
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vmrghh v17,v26,v27
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vmrghw v28,v18,v19
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v19.u32), simde_mm_load_si128((simde__m128i*)v18.u32)));
	// vmrglw v29,v18,v19
	simde_mm_store_si128((simde__m128i*)v29.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v19.u32), simde_mm_load_si128((simde__m128i*)v18.u32)));
	// vslh v1,v30,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// vmrghw v24,v16,v17
	simde_mm_store_si128((simde__m128i*)v24.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v17.u32), simde_mm_load_si128((simde__m128i*)v16.u32)));
	// vmrglw v25,v16,v17
	simde_mm_store_si128((simde__m128i*)v25.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v17.u32), simde_mm_load_si128((simde__m128i*)v16.u32)));
	// vperm v5,v24,v28,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// vperm v4,v24,v28,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v14.u8)));
	// vperm v6,v25,v29,v14
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v14.u8)));
	// vperm v7,v25,v29,v15
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// vslh v26,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v3,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v6,v6,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vslh v28,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v26,v5
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v31,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v28,v28,v7
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vslh v8,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v27,v30,v26
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vsrah v30,v6,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v4,v4,v1
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsubuhm v29,v31,v28
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vsrah v31,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v8,v8,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v2,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v4,v4,v30
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vsubuhm v5,v26,v29
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vaddshs v8,v8,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v10,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubuhm v13,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vaddshs v11,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubuhm v12,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vsrah v10,v10,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v13,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v11,v11,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v12,v12,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx v10,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v11,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v12,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827C9CB8) {
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
	ctx.lr = 0x827C9CC0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lwz r11,24(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r26,668(r8)
	r26.u64 = REX_LOAD_U8(ctx.r8.u32 + 668);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r27,r3,232
	r27.s64 = ctx.r3.s64 + 232;
	// lwz r4,632(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r30,40(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 40);
	// clrlwi r28,r26,30
	r28.u64 = r26.u32 & 0x3;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r5,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x827c9d34
	if (ctx.cr6.lt) goto loc_827C9D34;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82731930
	ctx.lr = 0x827C9D2C;
	sub_82731930(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x827c9d8c
	goto loc_827C9D8C;
loc_827C9D34:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827c9d88
	if (!ctx.cr6.gt) goto loc_827C9D88;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_827C9D40:
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
	// lbzx r23,r27,r3
	r23.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
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
	// or r9,r23,r9
	ctx.r9.u64 = r23.u64 | ctx.r9.u64;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r5,r3,r30
	REX_STORE_U16(ctx.r3.u32 + r30.u32, ctx.r5.u16);
	// bdnz 0x827c9d40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827C9D40;
loc_827C9D88:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_827C9D8C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827c9df8
	if (!ctx.cr6.eq) goto loc_827C9DF8;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// clrlwi r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	// rlwinm r9,r28,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 + r24.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r4,r5,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rldicr r10,r3,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// std r9,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r9,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// std r9,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// b 0x827c9e14
	goto loc_827C9E14;
loc_827C9DF8:
	// rlwinm r10,r28,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x8;
	// clrlwi r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x827af130
	ctx.lr = 0x827C9E14;
	sub_827AF130(ctx, base);
loc_827C9E14:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r26,r26,30,26,31
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3F;
	// lwz r4,632(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi r28,r26,30
	r28.u64 = r26.u32 & 0x3;
	// lwz r30,40(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
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
	// blt cr6,0x827c9e70
	if (ctx.cr6.lt) goto loc_827C9E70;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82731930
	ctx.lr = 0x827C9E68;
	sub_82731930(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x827c9ec8
	goto loc_827C9EC8;
loc_827C9E70:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827c9ec4
	if (!ctx.cr6.gt) goto loc_827C9EC4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_827C9E7C:
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
	// lbzx r23,r27,r3
	r23.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
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
	// or r9,r23,r9
	ctx.r9.u64 = r23.u64 | ctx.r9.u64;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r5,r3,r30
	REX_STORE_U16(ctx.r3.u32 + r30.u32, ctx.r5.u16);
	// bdnz 0x827c9e7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827C9E7C;
loc_827C9EC4:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_827C9EC8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827c9f34
	if (!ctx.cr6.eq) goto loc_827C9F34;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// clrlwi r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	// rlwinm r9,r28,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 + r24.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r4,r5,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rldicr r10,r3,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// std r9,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r9,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// std r9,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// b 0x827c9f50
	goto loc_827C9F50;
loc_827C9F34:
	// rlwinm r10,r28,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x8;
	// clrlwi r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x827af130
	ctx.lr = 0x827C9F50;
	sub_827AF130(ctx, base);
loc_827C9F50:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r26,r26,30,26,31
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3F;
	// lwz r4,632(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi r28,r26,30
	r28.u64 = r26.u32 & 0x3;
	// lwz r30,40(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
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
	// blt cr6,0x827c9fac
	if (ctx.cr6.lt) goto loc_827C9FAC;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82731930
	ctx.lr = 0x827C9FA4;
	sub_82731930(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x827ca004
	goto loc_827CA004;
loc_827C9FAC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827ca000
	if (!ctx.cr6.gt) goto loc_827CA000;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_827C9FB8:
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
	// lbzx r23,r27,r3
	r23.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
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
	// or r9,r23,r9
	ctx.r9.u64 = r23.u64 | ctx.r9.u64;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r5,r3,r30
	REX_STORE_U16(ctx.r3.u32 + r30.u32, ctx.r5.u16);
	// bdnz 0x827c9fb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827C9FB8;
loc_827CA000:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_827CA004:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827ca070
	if (!ctx.cr6.eq) goto loc_827CA070;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// clrlwi r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	// rlwinm r9,r28,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 + r24.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r4,r5,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rldicr r10,r3,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// std r9,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r9,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// std r9,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// b 0x827ca08c
	goto loc_827CA08C;
loc_827CA070:
	// rlwinm r10,r28,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x8;
	// clrlwi r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x827af130
	ctx.lr = 0x827CA08C;
	sub_827AF130(ctx, base);
loc_827CA08C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r9,r26,30,26,31
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3F;
	// lwz r4,632(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi r28,r9,30
	r28.u64 = ctx.r9.u32 & 0x3;
	// lwz r30,40(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
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
	// blt cr6,0x827ca0e8
	if (ctx.cr6.lt) goto loc_827CA0E8;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82731930
	ctx.lr = 0x827CA0E0;
	sub_82731930(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x827ca140
	goto loc_827CA140;
loc_827CA0E8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827ca13c
	if (!ctx.cr6.gt) goto loc_827CA13C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_827CA0F4:
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
	// lbzx r29,r27,r3
	r29.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
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
	// bdnz 0x827ca0f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CA0F4;
loc_827CA13C:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_827CA140:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827ca1b0
	if (!ctx.cr6.eq) goto loc_827CA1B0;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// clrlwi r9,r28,31
	ctx.r9.u64 = r28.u32 & 0x1;
	// rlwinm r10,r28,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + r24.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// srawi r10,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r5,r6,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rldicr r3,r4,32,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000;
	// or r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 | ctx.r4.u64;
	// std r10,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// std r10,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r10.u64);
	// std r10,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_827CA1B0:
	// clrlwi r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	// rlwinm r11,r28,2,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x827af130
	ctx.lr = 0x827CA1CC;
	sub_827AF130(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

