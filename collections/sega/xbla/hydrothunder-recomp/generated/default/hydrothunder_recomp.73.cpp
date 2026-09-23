#include "hydrothunder_funcs.73.h"

DEFINE_REX_FUNC(sub_82124E10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82124E18;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r29,4(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822f6280
	ctx.lr = 0x82124E34;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82124e94
	if (ctx.cr0.eq) goto loc_82124E94;
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// beq 0x82124e54
	if (ctx.cr0.eq) goto loc_82124E54;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82124E54:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x82124e78
	if (!ctx.cr6.lt) goto loc_82124E78;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x82124E78;
	sub_822F6020(ctx, base);
loc_82124E78:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82124E94:
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
	ctx.lr = 0x82124EB0;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8212B298) {
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
	ctx.lr = 0x8212B2A0;
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
	// bne cr6,0x8212b2e8
	if (!ctx.cr6.eq) goto loc_8212B2E8;
	// lwz r6,4(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
loc_8212B2D0:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8212B2D4:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8212B2E0:
	// bl 0x8212b878
	ctx.lr = 0x8212B2E4;
	sub_8212B878(ctx, base);
	// b 0x8212b444
	goto loc_8212B444;
loc_8212B2E8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8212b314
	if (!ctx.cr6.eq) goto loc_8212B314;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x8212B304;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8212b428
	if (!ctx.cr0.lt) goto loc_8212B428;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x8212b2d0
	goto loc_8212B2D0;
loc_8212B314:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8212b344
	if (!ctx.cr6.eq) goto loc_8212B344;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x8212B32C;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8212b428
	if (!ctx.cr0.lt) goto loc_8212B428;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8212b2d4
	goto loc_8212B2D4;
loc_8212B344:
	// addi r26,r29,12
	r26.s64 = r29.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82120780
	ctx.lr = 0x8212B354;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8212b3b4
	if (!ctx.cr0.lt) goto loc_8212B3B4;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212ba58
	ctx.lr = 0x8212B368;
	sub_8212BA58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x8212B378;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8212b3b4
	if (!ctx.cr0.lt) goto loc_8212B3B4;
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
	// lbz r11,61(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 61);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8212b3a8
	if (ctx.cr0.eq) goto loc_8212B3A8;
loc_8212B3A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8212b2e0
	goto loc_8212B2E0;
loc_8212B3A8:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_8212B3AC:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8212b2e0
	goto loc_8212B2E0;
loc_8212B3B4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82120780
	ctx.lr = 0x8212B3C0;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8212b428
	if (!ctx.cr0.lt) goto loc_8212B428;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212aa28
	ctx.lr = 0x8212B3D4;
	sub_8212AA28(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8212b3fc
	if (ctx.cr6.eq) goto loc_8212B3FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x8212B3F4;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8212b428
	if (!ctx.cr0.lt) goto loc_8212B428;
loc_8212B3FC:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,61(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 61);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8212b420
	if (ctx.cr0.eq) goto loc_8212B420;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x8212b3a0
	goto loc_8212B3A0;
loc_8212B420:
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8212b3ac
	goto loc_8212B3AC;
loc_8212B428:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8212b768
	ctx.lr = 0x8212B438;
	sub_8212B768(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8212B444:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821378E8) {
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
	ctx.lr = 0x821378F0;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// addi r5,r3,64
	ctx.r5.s64 = ctx.r3.s64 + 64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,6096(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82173338
	ctx.lr = 0x82137910;
	sub_82173338(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r30,r11,6092
	r30.s64 = ctx.r11.s64 + 6092;
	// lwz r3,6092(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6092);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,164(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 164);
	// lwz r11,6096(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,72(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// bctrl 
	ctx.lr = 0x8213793C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82137958;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r7,r11,16592
	ctx.r7.s64 = ctx.r11.s64 + 16592;
	// addi r3,r9,-27152
	ctx.r3.s64 = ctx.r9.s64 + -27152;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r8,r8,-27136
	ctx.r8.s64 = ctx.r8.s64 + -27136;
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// lfs f8,288(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 288);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r31,76
	ctx.r6.s64 = r31.s64 + 76;
	// lfs f7,180(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 180);
	ctx.f7.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f12,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f6,15048(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 15048);
	ctx.f6.f64 = double(temp.f32);
	// addi r4,r11,-2544
	ctx.r4.s64 = ctx.r11.s64 + -2544;
	// lvx128 v62,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x82137be4
	if (!ctx.cr6.gt) goto loc_82137BE4;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r5,r31,72
	ctx.r5.s64 = r31.s64 + 72;
loc_821379B8:
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// fmr f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f6.f64;
	// extsw r10,r7
	ctx.r10.s64 = ctx.r7.s32;
	// std r11,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r11.u64);
	// lfd f13,208(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// std r10,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.r10.u64);
	// lfd f11,200(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// std r11,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfd f10,192(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r1,84
	r29.s64 = ctx.r1.s64 + 84;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v60,v61,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vspltw128 v61,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// fcfid f13,f10
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(ctx.f10.s64);
	// vmsum4fp128 v59,v60,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v59.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// vmulfp128 v61,v60,v61
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v61.f32)));
	// frsp f13,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stvewx128 v59,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// vmsum4fp128 v61,v61,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// fdivs f9,f7,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f9.f64 = double(float(ctx.f7.f64 / ctx.f13.f64));
	// stvewx128 v61,r0,r29
	ea = (r29.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// ble cr6,0x82137bd4
	if (!ctx.cr6.gt) goto loc_82137BD4;
	// mulli r8,r9,12
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// lfs f10,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// addis r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 262144;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_82137A64:
	// fmuls f5,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r23,r1,112
	r23.s64 = ctx.r1.s64 + 112;
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r29,r1,224
	r29.s64 = ctx.r1.s64 + 224;
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r28,r1,96
	r28.s64 = ctx.r1.s64 + 96;
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r27,r1,128
	r27.s64 = ctx.r1.s64 + 128;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r24,r1,256
	r24.s64 = ctx.r1.s64 + 256;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r26,r1,240
	r26.s64 = ctx.r1.s64 + 240;
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r25,r1,176
	r25.s64 = ctx.r1.s64 + 176;
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f3,156(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lvx128 v61,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v58,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// vmulfp128 v59,v61,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v61.f32)));
	// lvx128 v61,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v60,v61,v61
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v61.f32)));
	// fmuls f0,f13,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// vmsum4fp128 v57,v60,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v57.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// fmuls f5,f13,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f5,108(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// vmulfp128 v59,v59,v58
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v58.f32)));
	// stfs f0,104(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lvx128 v61,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v58,v61,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v61.f32)));
	// stvx128 v57,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v61,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// lfs f3,224(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f3.f64 = double(temp.f32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stfs f5,140(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// vmsum4fp128 v57,v59,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v57.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// stfs f13,132(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// vmulfp128 v58,v58,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v61.f32)));
	// lvx128 v61,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v61,v61,v61
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vmsum4fp128 v55,v61,v62
	simde_mm_store_ps(ctx.v55.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// fmuls f0,f3,f11
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// lfs f4,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f4.f64 = double(temp.f32);
	// vmsum4fp128 v56,v58,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v56.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// stvx128 v57,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
	// lfs f5,176(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stvx128 v55,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,256(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stvx128 v56,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lfs f3,240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f4
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f5,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f5,f10,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// stfs f5,8(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmuls f5,f3,f11
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// lfs f4,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// stvx128 v60,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfsu f13,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f13,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82137a64
	if (ctx.cr6.lt) goto loc_82137A64;
loc_82137BD4:
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821379b8
	if (ctx.cr6.lt) goto loc_821379B8;
loc_82137BE4:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r5,r31,72
	ctx.r5.s64 = r31.s64 + 72;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82137ea8
	if (!ctx.cr6.gt) goto loc_82137EA8;
	// stfs f12,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
loc_82137BFC:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fmr f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f6.f64;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// std r11,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.r11.u64);
	// lfd f11,200(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// std r8,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r8.u64);
	// lfd f13,192(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// std r8,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r8.u64);
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fdivs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// lfd f11,208(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// stfs f10,232(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f13,236(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// fdivs f9,f8,f11
	ctx.f9.f64 = double(float(ctx.f8.f64 / ctx.f11.f64));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v60,v61,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vspltw128 v61,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// vmsum4fp128 v59,v60,v62
	simde_mm_store_ps(ctx.v59.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// vmulfp128 v61,v60,v61
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v61.f32)));
	// stvewx128 v59,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// vmsum4fp128 v61,v61,v63
	simde_mm_store_ps(ctx.v61.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// stvewx128 v61,r0,r29
	ea = (r29.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// ble cr6,0x82137e98
	if (!ctx.cr6.gt) goto loc_82137E98;
	// mulli r10,r9,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// lfs f11,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// addis r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 262144;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82137CA8:
	// fmuls f5,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r29,r1,112
	r29.s64 = ctx.r1.s64 + 112;
	// stfs f5,136(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r28,r1,96
	r28.s64 = ctx.r1.s64 + 96;
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r27,r1,176
	r27.s64 = ctx.r1.s64 + 176;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r24,r1,128
	r24.s64 = ctx.r1.s64 + 128;
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r23,r1,112
	r23.s64 = ctx.r1.s64 + 112;
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r22,r1,144
	r22.s64 = ctx.r1.s64 + 144;
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f3,108(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f3,140(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f4,f13,f13
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r21,r1,176
	r21.s64 = ctx.r1.s64 + 176;
	// stfs f4,184(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r26,r1,160
	r26.s64 = ctx.r1.s64 + 160;
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r20,r1,160
	r20.s64 = ctx.r1.s64 + 160;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r19,r1,240
	r19.s64 = ctx.r1.s64 + 240;
	// stfs f4,152(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r18,r1,272
	r18.s64 = ctx.r1.s64 + 272;
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r17,r1,288
	r17.s64 = ctx.r1.s64 + 288;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stfs f4,168(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lvx128 v61,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v57,v61,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vspltw128 v56,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// lvx128 v61,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v60,v61,v61
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vspltw128 v59,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// fmuls f5,f13,f4
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// stfs f5,156(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lvx128 v61,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmuls f5,f13,f4
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// vmulfp128 v59,v60,v59
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v59.f32)));
	// stfs f5,188(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// vmulfp128 v60,v61,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v61.f32)));
	// lvx128 v61,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmuls f0,f13,f4
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// vmulfp128 v55,v61,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vspltw128 v54,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// lvx128 v61,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v53,v61,v61
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vspltw128 v52,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// vmulfp128 v61,v57,v56
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v56.f32)));
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// vmulfp128 v58,v58,v58
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v58.f32)));
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// vmulfp128 v57,v55,v54
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v54.f32)));
	// lfs f5,68(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f5.f64 = double(temp.f32);
	// vmulfp128 v56,v53,v52
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v52.f32)));
	// addi r29,r1,304
	r29.s64 = ctx.r1.s64 + 304;
	// fmr f0,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = ctx.f13.f64;
	// stvx128 v60,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v59,v59,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v59.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v56,v56,v63
	simde_mm_store_ps(ctx.v56.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v60,v60,v62
	simde_mm_store_ps(ctx.v60.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// vmsum4fp128 v61,v61,v63
	simde_mm_store_ps(ctx.v61.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v57,v57,v63
	simde_mm_store_ps(ctx.v57.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v58,v58,v62
	simde_mm_store_ps(ctx.v58.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// stvx128 v59,r0,r17
	ea = (r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,288(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f1.f64 = double(temp.f32);
	// stvx128 v56,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f3,304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f3.f64 = double(temp.f32);
	// stvx128 v60,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f4,240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f4.f64 = double(temp.f32);
	// stvx128 v61,r0,r18
	ea = (r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f2,272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f2,f2,f11
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// stvx128 v57,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmuls f5,f2,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f1,f1,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// stvx128 v58,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmuls f3,f3,f10
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// lfs f2,320(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f2.f64 = double(temp.f32);
	// lfs f5,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f5,f1,f5
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f5.f64));
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,256(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f5,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// stfs f5,8(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f5,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// stfsu f13,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f13,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f3,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82137ca8
	if (ctx.cr6.lt) goto loc_82137CA8;
loc_82137E98:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82137bfc
	if (ctx.cr6.lt) goto loc_82137BFC;
loc_82137EA8:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// addis r6,r4,4
	ctx.r6.s64 = ctx.r4.s64 + 262144;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82137ED0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_82180E18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82180E20;
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
	// addi r30,r11,-15320
	r30.s64 = ctx.r11.s64 + -15320;
	// lwz r4,-15320(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15320);
	// bl 0x82120600
	ctx.lr = 0x82180E40;
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
	ctx.lr = 0x82180E5C;
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
	ctx.lr = 0x82180E70;
	sub_82120AC0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82180ea4
	if (ctx.cr6.eq) goto loc_82180EA4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82121ec8
	ctx.lr = 0x82180E84;
	sub_82121EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82180ea4
	if (!ctx.cr0.eq) goto loc_82180EA4;
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
	ctx.lr = 0x82180EA4;
	sub_821231D0(ctx, base);
loc_82180EA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821877E8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cac
	ctx.lr = 0x821877F0;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32106
	r27.s64 = -2104098816;
	// lwz r4,140(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187824;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,160(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82187854
	if (ctx.cr6.eq) goto loc_82187854;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
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
	ctx.lr = 0x82187854;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82187854:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// lwz r4,164(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82187a24
	if (ctx.cr0.eq) goto loc_82187A24;
	// beq cr6,0x82187890
	if (ctx.cr6.eq) goto loc_82187890;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r5,r31,13
	ctx.r5.s64 = r31.s64 + 13;
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
	ctx.lr = 0x82187890;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82187890:
	// lwz r4,168(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821878c0
	if (ctx.cr6.eq) goto loc_821878C0;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r5,r31,17
	ctx.r5.s64 = r31.s64 + 17;
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
	ctx.lr = 0x821878C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821878C0:
	// lwz r4,172(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821878f0
	if (ctx.cr6.eq) goto loc_821878F0;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r5,r31,21
	ctx.r5.s64 = r31.s64 + 21;
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
	ctx.lr = 0x821878F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821878F0:
	// lwz r4,176(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82187920
	if (ctx.cr6.eq) goto loc_82187920;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r5,r31,25
	ctx.r5.s64 = r31.s64 + 25;
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
	ctx.lr = 0x82187920;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82187920:
	// lwz r4,180(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82187950
	if (ctx.cr6.eq) goto loc_82187950;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r5,r31,29
	ctx.r5.s64 = r31.s64 + 29;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187950;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82187950:
	// lwz r4,184(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82187980
	if (ctx.cr6.eq) goto loc_82187980;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
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
	ctx.lr = 0x82187980;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82187980:
	// lwz r4,188(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 188);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821879b0
	if (ctx.cr6.eq) goto loc_821879B0;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
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
	ctx.lr = 0x821879B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821879B0:
	// lwz r4,192(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821879e0
	if (ctx.cr6.eq) goto loc_821879E0;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
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
	ctx.lr = 0x821879E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821879E0:
	// lwz r4,212(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82187a10
	if (ctx.cr6.eq) goto loc_82187A10;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lfs f1,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
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
	ctx.lr = 0x82187A10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82187A10:
	// lwz r4,216(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82187c04
	if (ctx.cr6.eq) goto loc_82187C04;
	// lfs f1,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82187be4
	goto loc_82187BE4;
loc_82187A24:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r30,r11,880
	r30.s64 = ctx.r11.s64 + 880;
	// beq cr6,0x82187a54
	if (ctx.cr6.eq) goto loc_82187A54;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r5,r30,44
	ctx.r5.s64 = r30.s64 + 44;
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
	ctx.lr = 0x82187A54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82187A54:
	// lwz r4,168(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82187a84
	if (ctx.cr6.eq) goto loc_82187A84;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r5,r30,48
	ctx.r5.s64 = r30.s64 + 48;
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
	ctx.lr = 0x82187A84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82187A84:
	// lwz r4,172(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82187ab4
	if (ctx.cr6.eq) goto loc_82187AB4;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r5,r30,52
	ctx.r5.s64 = r30.s64 + 52;
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
	ctx.lr = 0x82187AB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82187AB4:
	// lwz r4,176(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82187ae4
	if (ctx.cr6.eq) goto loc_82187AE4;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r5,r30,56
	ctx.r5.s64 = r30.s64 + 56;
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
	ctx.lr = 0x82187AE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82187AE4:
	// lwz r4,180(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82187b14
	if (ctx.cr6.eq) goto loc_82187B14;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r5,r30,60
	ctx.r5.s64 = r30.s64 + 60;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187B14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82187B14:
	// lwz r4,184(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82187b44
	if (ctx.cr6.eq) goto loc_82187B44;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lfs f1,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 64);
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
	ctx.lr = 0x82187B44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82187B44:
	// lwz r4,188(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 188);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82187b74
	if (ctx.cr6.eq) goto loc_82187B74;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lfs f1,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 68);
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
	ctx.lr = 0x82187B74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82187B74:
	// lwz r4,192(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82187ba4
	if (ctx.cr6.eq) goto loc_82187BA4;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lfs f1,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 72);
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
	ctx.lr = 0x82187BA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82187BA4:
	// lwz r4,212(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82187bd4
	if (ctx.cr6.eq) goto loc_82187BD4;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lfs f1,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 76);
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
	ctx.lr = 0x82187BD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82187BD4:
	// lwz r4,216(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82187c04
	if (ctx.cr6.eq) goto loc_82187C04;
	// lfs f1,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
loc_82187BE4:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
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
	ctx.lr = 0x82187C04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82187C04:
	// lwz r3,252(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 252);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82187c1c
	if (ctx.cr6.lt) goto loc_82187C1C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,156(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 156);
	// bl 0x821882f8
	ctx.lr = 0x82187C1C;
	sub_821882F8(ctx, base);
loc_82187C1C:
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82187c30
	if (ctx.cr6.eq) goto loc_82187C30;
	// lwz r4,96(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// b 0x82187c34
	goto loc_82187C34;
loc_82187C30:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82187C34:
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82187c48
	if (ctx.cr6.lt) goto loc_82187C48;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821882f8
	ctx.lr = 0x82187C48;
	sub_821882F8(ctx, base);
loc_82187C48:
	// lwz r3,248(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 248);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82187c7c
	if (ctx.cr6.lt) goto loc_82187C7C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,6168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6168);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,64(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x821882f8
	ctx.lr = 0x82187C7C;
	sub_821882F8(ctx, base);
loc_82187C7C:
	// lbz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 80);
	// lis r28,-32106
	r28.s64 = -2104098816;
	// li r29,0
	r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82187cac
	if (ctx.cr0.eq) goto loc_82187CAC;
	// lwz r3,6176(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187CA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82187cbc
	goto loc_82187CBC;
loc_82187CAC:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82187cbc
	if (ctx.cr6.eq) goto loc_82187CBC;
	// lwz r29,96(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
loc_82187CBC:
	// lwz r4,196(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82187cf0
	if (ctx.cr6.eq) goto loc_82187CF0;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addic r10,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r10.s64 = r29.s64 + -1;
	// subfe r5,r10,r29
	temp.u8 = (~ctx.r10.u32 + r29.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187CF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82187CF0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// beq cr6,0x82187eac
	if (ctx.cr6.eq) goto loc_82187EAC;
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 260);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82187eac
	if (ctx.cr6.lt) goto loc_82187EAC;
	// lbz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82187e04
	if (ctx.cr0.eq) goto loc_82187E04;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82187d70
	if (ctx.cr6.eq) goto loc_82187D70;
	// lwz r3,6176(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6176);
	// lwz r30,136(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187D3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwa r10,12(r3)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r3.u32 + 12));
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// lwz r4,200(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187D70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82187D70:
	// lwz r4,204(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82187da0
	if (ctx.cr6.eq) goto loc_82187DA0;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187DA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82187DA0:
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187DBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187DDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 260);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187E00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82187e7c
	goto loc_82187E7C;
loc_82187E04:
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187E1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187E3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 260);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187E60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187E7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82187E7C:
	// lwz r4,204(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82187eac
	if (ctx.cr6.eq) goto loc_82187EAC;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187EAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82187EAC:
	// lwz r4,208(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82187fbc
	if (ctx.cr6.eq) goto loc_82187FBC;
	// lbz r5,116(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 116);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x82187fbc
	if (ctx.cr0.eq) goto loc_82187FBC;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187EE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,220(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82187f1c
	if (ctx.cr6.eq) goto loc_82187F1C;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// addi r5,r10,240
	ctx.r5.s64 = ctx.r10.s64 + 240;
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
	ctx.lr = 0x82187F1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82187F1C:
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82187fbc
	if (ctx.cr6.lt) goto loc_82187FBC;
	// lwz r3,6176(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6176);
	// lwz r30,6092(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187F44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,212(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 212);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,264(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187F5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,264(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187F7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,264(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 264);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187FA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r4,264(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187FBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82187FBC:
	// lwz r4,224(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 224);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82188120
	if (ctx.cr6.eq) goto loc_82188120;
	// lbz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 128);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821880fc
	if (ctx.cr0.eq) goto loc_821880FC;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,6216(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6216);
	// bl 0x82159460
	ctx.lr = 0x82187FEC;
	sub_82159460(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r5,736(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 736);
	// lwz r4,224(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82188014;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,736(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 736);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82188120
	if (ctx.cr6.eq) goto loc_82188120;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,228(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 228);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82188048;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lwz r6,736(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 736);
	// lwz r4,232(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 232);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82188074;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// lwz r6,736(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 736);
	// lwz r4,236(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 236);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821880A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// lwz r6,736(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 736);
	// lwz r4,240(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 240);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821880CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// lwz r6,736(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 736);
	// lwz r4,244(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 244);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821880F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82188120
	goto loc_82188120;
loc_821880FC:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82188120;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82188120:
	// lbz r11,13(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 13);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// blt cr6,0x8218813c
	if (ctx.cr6.lt) goto loc_8218813C;
	// lbz r11,17(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 17);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bge cr6,0x82188140
	if (!ctx.cr6.lt) goto loc_82188140;
loc_8218813C:
	// li r4,1
	ctx.r4.s64 = 1;
loc_82188140:
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82188154;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_821CA7D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14748
	ctx.r3.s64 = ctx.r11.s64 + -14748;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CAE88) {
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
	// lbz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 116);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821caeb8
	if (ctx.cr0.eq) goto loc_821CAEB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x821caf00
	ctx.lr = 0x821CAEB8;
	sub_821CAF00(ctx, base);
loc_821CAEB8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CDCD0) {
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
	// lbz r11,164(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 164);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r3,164
	ctx.r3.s64 = ctx.r3.s64 + 164;
	// and r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x821ea168
	ctx.lr = 0x821CDD08;
	sub_821EA168(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x821CDD18;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x821CDD20;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cdd30
	if (ctx.cr0.eq) goto loc_821CDD30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821CDD30;
	sub_8269CE98(ctx, base);
loc_821CDD30:
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

DEFINE_REX_FUNC(sub_821D1F18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
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
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2c84
	ctx.lr = 0x821D1F30;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lfs f13,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f8,80(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f7,76(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f7.f64 = double(temp.f32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmuls f7,f7,f8
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f12,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f31,72(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 72);
	f31.f64 = double(temp.f32);
	// lfs f6,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f31,f8
	ctx.f8.f64 = double(float(f31.f64 * ctx.f8.f64));
	// lfs f3,48(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// fmr f27,f12
	f27.f64 = ctx.f12.f64;
	// lfs f5,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f2,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// lfs f1,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,64(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 64);
	f30.f64 = double(temp.f32);
	// fmuls f3,f3,f7
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// lfs f29,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	f29.f64 = double(temp.f32);
	// fmuls f2,f2,f7
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// lfs f31,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	f31.f64 = double(temp.f32);
	// fadds f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// lfs f28,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	f28.f64 = double(temp.f32);
	// fmuls f7,f1,f7
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// stfs f27,84(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * f30.f64));
	// fmuls f26,f13,f30
	f26.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fmuls f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 * f30.f64));
	// fmuls f30,f29,f8
	f30.f64 = double(float(f29.f64 * ctx.f8.f64));
	// fmuls f31,f31,f8
	f31.f64 = double(float(f31.f64 * ctx.f8.f64));
	// fsubs f29,f11,f3
	f29.f64 = double(float(ctx.f11.f64 - ctx.f3.f64));
	// fmuls f8,f28,f8
	ctx.f8.f64 = double(float(f28.f64 * ctx.f8.f64));
	// fsubs f28,f9,f2
	f28.f64 = double(float(ctx.f9.f64 - ctx.f2.f64));
	// fsubs f25,f0,f7
	f25.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fadds f24,f11,f3
	f24.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// fadds f23,f9,f2
	f23.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// fadds f22,f0,f7
	f22.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// fadds f19,f0,f7
	f19.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// fsubs f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fadds f21,f11,f3
	f21.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// fsubs f7,f29,f30
	ctx.f7.f64 = double(float(f29.f64 - f30.f64));
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f11,f11,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f3.f64));
	// fsubs f7,f28,f31
	ctx.f7.f64 = double(float(f28.f64 - f31.f64));
	// stfs f7,148(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f20,f9,f2
	f20.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// fsubs f7,f25,f8
	ctx.f7.f64 = double(float(f25.f64 - ctx.f8.f64));
	// stfs f7,152(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fsubs f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f2.f64));
	// fsubs f7,f24,f30
	ctx.f7.f64 = double(float(f24.f64 - f30.f64));
	// stfs f7,160(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fsubs f7,f23,f31
	ctx.f7.f64 = double(float(f23.f64 - f31.f64));
	// stfs f7,164(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fsubs f7,f22,f8
	ctx.f7.f64 = double(float(f22.f64 - ctx.f8.f64));
	// stfs f7,168(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f7,f21,f30
	ctx.f7.f64 = double(float(f21.f64 + f30.f64));
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 + f30.f64));
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// fadds f7,f20,f31
	ctx.f7.f64 = double(float(f20.f64 + f31.f64));
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f7,f19,f8
	ctx.f7.f64 = double(float(f19.f64 + ctx.f8.f64));
	// stfs f7,120(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f11,f9,f31
	ctx.f11.f64 = double(float(ctx.f9.f64 + f31.f64));
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f0,f6,f26
	ctx.f0.f64 = double(float(ctx.f6.f64 + f26.f64));
	// fadds f11,f4,f10
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fmuls f12,f27,f12
	ctx.f12.f64 = double(float(f27.f64 * ctx.f12.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r9,r30,16
	ctx.r9.s64 = r30.s64 + 16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmadds f12,f1,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f1.f64, ctx.f11.f64, ctx.f12.f64)));
	// fnmadds f0,f13,f0,f12
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r11.u64);
	// std r9,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r9.u64);
	// lfs f0,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,68(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fneg f8,f8
	ctx.f8.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fadds f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fmadds f0,f0,f11,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f13.f64)));
	// fnmadds f0,f12,f10,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f10.f64, ctx.f0.f64)));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,16(r30)
	REX_STORE_U64(r30.u32 + 16, ctx.r11.u64);
	// std r10,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.r10.u64);
	// bl 0x821d1ca8
	ctx.lr = 0x821D2124;
	sub_821D1CA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,32(r30)
	REX_STORE_U64(r30.u32 + 32, ctx.r10.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,40(r30)
	REX_STORE_U64(r30.u32 + 40, ctx.r11.u64);
	// bl 0x821d1ca8
	ctx.lr = 0x821D214C;
	sub_821D1CA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,48(r30)
	REX_STORE_U64(r30.u32 + 48, ctx.r10.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,56(r30)
	REX_STORE_U64(r30.u32 + 56, ctx.r11.u64);
	// bl 0x821d1ca8
	ctx.lr = 0x821D2174;
	sub_821D1CA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,64(r30)
	REX_STORE_U64(r30.u32 + 64, ctx.r10.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,72(r30)
	REX_STORE_U64(r30.u32 + 72, ctx.r11.u64);
	// bl 0x821d1ca8
	ctx.lr = 0x821D219C;
	sub_821D1CA8(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,80(r30)
	REX_STORE_U64(r30.u32 + 80, ctx.r11.u64);
	// ld r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// std r11,88(r30)
	REX_STORE_U64(r30.u32 + 88, ctx.r11.u64);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2cd0
	ctx.lr = 0x821D21B8;
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

DEFINE_REX_FUNC(sub_821E8E98) {
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
	ctx.lr = 0x821E8EA0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821e8f84
	if (!ctx.cr6.gt) goto loc_821E8F84;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r29,0
	r29.s64 = 0;
	// addi r26,r11,12320
	r26.s64 = ctx.r11.s64 + 12320;
	// addi r25,r9,12268
	r25.s64 = ctx.r9.s64 + 12268;
loc_821E8ED0:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x821e8f70
	if (!ctx.cr6.eq) goto loc_821E8F70;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,80
	ctx.r5.s64 = 80;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// bl 0x826a1e70
	ctx.lr = 0x821E8EFC;
	sub_826A1E70(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mulli r30,r30,80
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(80));
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x826a1e70
	ctx.lr = 0x821E8F14;
	sub_826A1E70(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x826a1e70
	ctx.lr = 0x821E8F28;
	sub_826A1E70(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821e8f54
	if (ctx.cr6.eq) goto loc_821E8F54;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x821231d0
	ctx.lr = 0x821E8F54;
	sub_821231D0(ctx, base);
loc_821E8F54:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// stw r11,20(r28)
	REX_STORE_U32(r28.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E8F70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E8F70:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,80
	r29.s64 = r29.s64 + 80;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821e8ed0
	if (ctx.cr6.lt) goto loc_821E8ED0;
loc_821E8F84:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_821EFC40) {
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
	ctx.lr = 0x821EFC48;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x8215f338
	ctx.lr = 0x821EFC70;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821EFC78;
	sub_8215F2D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821efdd8
	if (!ctx.cr6.eq) goto loc_821EFDD8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r31,0
	r31.s64 = 0;
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmr f30,f31
	f30.f64 = f31.f64;
	// addi r29,r11,23124
	r29.s64 = ctx.r11.s64 + 23124;
loc_821EFCA0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821efcc4
	if (!ctx.cr6.eq) goto loc_821EFCC4;
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
	// b 0x821efcc8
	goto loc_821EFCC8;
loc_821EFCC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EFCC8:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821efcf4
	if (!ctx.cr6.lt) goto loc_821EFCF4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821EFCDC;
	sub_8215F1B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x821EFCE4;
	sub_8215F338(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x821EFCE8;
	sub_8215F9E0(ctx, base);
	// fadds f30,f1,f30
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64 + f30.f64));
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x821efca0
	goto loc_821EFCA0;
loc_821EFCF4:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r11,6248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6248);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x821a33a0
	ctx.lr = 0x821EFD04;
	sub_821A33A0(ctx, base);
	// fmuls f30,f1,f30
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64 * f30.f64));
	// li r31,0
	r31.s64 = 0;
loc_821EFD0C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821efd30
	if (!ctx.cr6.eq) goto loc_821EFD30;
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
	// b 0x821efd34
	goto loc_821EFD34;
loc_821EFD30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EFD34:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821efd68
	if (!ctx.cr6.lt) goto loc_821EFD68;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821EFD48;
	sub_8215F1B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x821EFD50;
	sub_8215F338(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x821EFD54;
	sub_8215F9E0(ctx, base);
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 + f31.f64));
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(f30.f64, f31.f64);
	// blt cr6,0x821efd68
	if (ctx.cr6.lt) goto loc_821EFD68;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x821efd0c
	goto loc_821EFD0C;
loc_821EFD68:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821efd8c
	if (!ctx.cr6.eq) goto loc_821EFD8C;
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
	// b 0x821efd90
	goto loc_821EFD90;
loc_821EFD8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EFD90:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r31.s32, ctx.xer);
	// blt cr6,0x821efda0
	if (ctx.cr6.lt) goto loc_821EFDA0;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_821EFDA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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
	// and r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821EFDC0;
	sub_8215F1B0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16560
	ctx.r4.s64 = ctx.r11.s64 + 16560;
	// bl 0x8215f338
	ctx.lr = 0x821EFDCC;
	sub_8215F338(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215fba8
	ctx.lr = 0x821EFDD4;
	sub_8215FBA8(ctx, base);
	// b 0x821efddc
	goto loc_821EFDDC;
loc_821EFDD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EFDDC:
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

DEFINE_REX_FUNC(sub_821FD3B0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,26800
	ctx.r11.s64 = ctx.r11.s64 + 26800;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x821fd3dc
	if (ctx.cr0.eq) goto loc_821FD3DC;
	// bl 0x8269ce98
	ctx.lr = 0x821FD3DC;
	sub_8269CE98(ctx, base);
loc_821FD3DC:
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

DEFINE_REX_FUNC(sub_821FFF58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821FFF60;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r29,r11,26968
	r29.s64 = ctx.r11.s64 + 26968;
	// bge cr6,0x821fff90
	if (!ctx.cr6.lt) goto loc_821FFF90;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,27732
	ctx.r3.s64 = ctx.r11.s64 + 27732;
	// li r5,490
	ctx.r5.s64 = 490;
	// bl 0x821231d0
	ctx.lr = 0x821FFF90;
	sub_821231D0(ctx, base);
loc_821FFF90:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821fffb0
	if (ctx.cr6.lt) goto loc_821FFFB0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,27768
	ctx.r3.s64 = ctx.r11.s64 + 27768;
	// li r5,491
	ctx.r5.s64 = 491;
	// bl 0x821231d0
	ctx.lr = 0x821FFFB0;
	sub_821231D0(ctx, base);
loc_821FFFB0:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82203298) {
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
	// lbz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82203380
	if (ctx.cr0.eq) goto loc_82203380;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r11,6056(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6056);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82203380
	if (ctx.cr6.gt) goto loc_82203380;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822032ec
	if (ctx.cr6.eq) goto loc_822032EC;
	// lbz r11,705(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 705);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82203380
	if (!ctx.cr0.eq) goto loc_82203380;
	// lwz r11,744(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 744);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82203380
	if (ctx.cr6.eq) goto loc_82203380;
loc_822032EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82162af8
	ctx.lr = 0x822032F8;
	sub_82162AF8(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r9,r31,24
	ctx.r9.s64 = r31.s64 + 24;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82203324
	goto loc_82203324;
loc_82203308:
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8220331c
	if (!ctx.cr6.lt) goto loc_8220331C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82203324
	goto loc_82203324;
loc_8220331C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82203324:
	// lbz r8,77(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 77);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82203308
	if (ctx.cr0.eq) goto loc_82203308;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82203354
	if (ctx.cr6.eq) goto loc_82203354;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82203354
	if (ctx.cr6.lt) goto loc_82203354;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x8220335c
	goto loc_8220335C;
loc_82203354:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_8220335C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82203380
	if (ctx.cr6.eq) goto loc_82203380;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x82203c00
	ctx.lr = 0x82203380;
	sub_82203C00(ctx, base);
loc_82203380:
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

DEFINE_REX_FUNC(sub_82208090) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82208098;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822082a0
	ctx.lr = 0x822080A4;
	sub_822082A0(ctx, base);
	// lbz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 44);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82208138
	if (ctx.cr0.eq) goto loc_82208138;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822080C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f13,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82208138
	if (!ctx.cr6.gt) goto loc_82208138;
	// lfs f13,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// lfs f11,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
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
	// lfsx f10,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f0,f10,f0,f12
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 36, temp.u32);
	// bl 0x82208480
	ctx.lr = 0x82208138;
	sub_82208480(ctx, base);
loc_82208138:
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
	ctx.lr = 0x82208150;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82208294
	if (ctx.cr0.eq) goto loc_82208294;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220816C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,31140
	ctx.r4.s64 = ctx.r11.s64 + 31140;
	// bl 0x82125d00
	ctx.lr = 0x82208178;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82208294
	if (!ctx.cr0.eq) goto loc_82208294;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82208194;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r10,31152
	ctx.r4.s64 = ctx.r10.s64 + 31152;
	// addi r11,r11,-19028
	ctx.r11.s64 = ctx.r11.s64 + -19028;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r9,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822081C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822ee668
	ctx.lr = 0x822081D8;
	sub_822EE668(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,31168
	ctx.r4.s64 = ctx.r10.s64 + 31168;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822081F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,24(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,31184
	ctx.r4.s64 = ctx.r11.s64 + 31184;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82208214;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f1,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822ee668
	ctx.lr = 0x82208228;
	sub_822EE668(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,31200
	ctx.r4.s64 = ctx.r10.s64 + 31200;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82208244;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f1,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822ee668
	ctx.lr = 0x82208258;
	sub_822EE668(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,31216
	ctx.r4.s64 = ctx.r10.s64 + 31216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82208274;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,40(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,31232
	ctx.r4.s64 = ctx.r11.s64 + 31232;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82208294;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82208294:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8221F810) {
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
	ctx.lr = 0x8221F818;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8221f958
	if (ctx.cr6.eq) goto loc_8221F958;
	// addi r29,r8,-16
	r29.s64 = ctx.r8.s64 + -16;
loc_8221F838:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r27,12(r8)
	r27.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r27,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r27.u32);
	// bl 0x8221ed08
	ctx.lr = 0x8221F870;
	sub_8221ED08(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221f8d8
	if (ctx.cr0.eq) goto loc_8221F8D8;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8221f8b0
	if (ctx.cr6.eq) goto loc_8221F8B0;
loc_8221F884:
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// bne cr6,0x8221f884
	if (!ctx.cr6.eq) goto loc_8221F884;
loc_8221F8B0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// b 0x8221f948
	goto loc_8221F948;
loc_8221F8D8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// b 0x8221f910
	goto loc_8221F910;
loc_8221F8E4:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// stw r11,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r7,r7,-16
	ctx.r7.s64 = ctx.r7.s64 + -16;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
loc_8221F910:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8221ed08
	ctx.lr = 0x8221F91C;
	sub_8221ED08(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221f8e4
	if (!ctx.cr0.eq) goto loc_8221F8E4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r9,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// stw r7,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
	// stw r11,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
loc_8221F948:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r28.u32, ctx.xer);
	// bne cr6,0x8221f838
	if (!ctx.cr6.eq) goto loc_8221F838;
loc_8221F958:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82229700) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-23368
	ctx.r3.s64 = ctx.r11.s64 + -23368;
	// bl 0x8216bc98
	ctx.lr = 0x82229730;
	sub_8216BC98(ctx, base);
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

DEFINE_REX_FUNC(sub_8222A218) {
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
	ctx.lr = 0x8222A230;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8222a254
	if (ctx.cr0.eq) goto loc_8222A254;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82229520
	ctx.lr = 0x8222A240;
	sub_82229520(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-22340
	ctx.r11.s64 = ctx.r11.s64 + -22340;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8222a258
	goto loc_8222A258;
loc_8222A254:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222A258:
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

DEFINE_REX_FUNC(sub_8222B3B0) {
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
	ctx.lr = 0x8222B3B8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r25,0
	r25.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,6192(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B3E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r24,1
	r24.s64 = 1;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8222b4e8
	if (!ctx.cr0.gt) goto loc_8222B4E8;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r10,1624
	r29.s64 = ctx.r10.s64 + 1624;
	// addi r28,r9,16592
	r28.s64 = ctx.r9.s64 + 16592;
	// addi r27,r11,16584
	r27.s64 = ctx.r11.s64 + 16584;
loc_8222B408:
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
	ctx.lr = 0x8222B420;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B430;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222b4c8
	if (ctx.cr0.eq) goto loc_8222B4C8;
	// lwz r10,112(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 112);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8222b46c
	if (!ctx.cr6.eq) goto loc_8222B46C;
	// lwz r3,6192(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B45C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r11,r31,r3
	ctx.r11.u64 = ctx.r3.u64 - r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8222b4b8
	goto loc_8222B4B8;
loc_8222B46C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8222b47c
	if (!ctx.cr6.eq) goto loc_8222B47C;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// b 0x8222b4b8
	goto loc_8222B4B8;
loc_8222B47C:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8222b4b8
	if (!ctx.cr6.eq) goto loc_8222B4B8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x8222B490;
	sub_8215F338(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x8222B498;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8222B4A0;
	sub_8215F1B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8222b4b4
	if (!ctx.cr6.eq) goto loc_8222B4B4;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x8222b4b8
	goto loc_8222B4B8;
loc_8222B4B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222B4B8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222b4c8
	if (ctx.cr0.eq) goto loc_8222B4C8;
	// slw r11,r24,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (r24.u32 << (r31.u8 & 0x3F));
	// or r25,r11,r25
	r25.u64 = ctx.r11.u64 | r25.u64;
loc_8222B4C8:
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
	ctx.lr = 0x8222B4E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8222b408
	if (ctx.cr6.lt) goto loc_8222B408;
loc_8222B4E8:
	// lis r31,-32106
	r31.s64 = -2104098816;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r26,116
	ctx.r4.s64 = r26.s64 + 116;
	// lwz r3,6256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6256);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B508;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222b5c0
	if (ctx.cr0.eq) goto loc_8222B5C0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4028
	ctx.r4.s64 = ctx.r11.s64 + -4028;
	// bl 0x82120600
	ctx.lr = 0x8222B520;
	sub_82120600(ctx, base);
	// lwz r3,6256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6256);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B53C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82120ac0
	ctx.lr = 0x8222B558;
	sub_82120AC0(ctx, base);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne 0x8222b5c0
	if (!ctx.cr0.eq) goto loc_8222B5C0;
	// lwz r3,6192(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B574;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222b5c0
	if (ctx.cr0.eq) goto loc_8222B5C0;
loc_8222B57C:
	// slw r11,r24,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (r24.u32 << (r31.u8 & 0x3F));
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,0
	ctx.r4.s64 = 0;
	// and. r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 & r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// bne 0x8222b59c
	if (!ctx.cr0.eq) goto loc_8222B59C;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8222B59C:
	// bl 0x823ee5d8
	ctx.lr = 0x8222B5A0;
	sub_823EE5D8(ctx, base);
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
	ctx.lr = 0x8222B5B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8222b57c
	if (ctx.cr6.lt) goto loc_8222B57C;
loc_8222B5C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8223C270) {
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
	ctx.lr = 0x8223C278;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r3,6284(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223C2A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,3884(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 3884);
	// mulli r11,r3,336
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(336));
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stb r11,52(r27)
	REX_STORE_U8(r27.u32 + 52, ctx.r11.u8);
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223C2D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,-7936
	r30.s64 = ctx.r11.s64 + -7936;
	// std r3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x8223C2E8;
	sub_8215F338(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r26,r11,1008
	r26.s64 = ctx.r11.s64 + 1008;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8223c31c
	if (!ctx.cr6.eq) goto loc_8223C31C;
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
	// ble 0x8223c31c
	if (!ctx.cr0.gt) goto loc_8223C31C;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x8223c320
	goto loc_8223C320;
loc_8223C31C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8223C320:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-7880
	r28.s64 = ctx.r11.s64 + -7880;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x8223C330;
	sub_8215F338(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8226e3f8
	ctx.lr = 0x8223C33C;
	sub_8226E3F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x8223C348;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8223c374
	if (!ctx.cr6.eq) goto loc_8223C374;
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
	// ble 0x8223c374
	if (!ctx.cr0.gt) goto loc_8223C374;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x8223c378
	goto loc_8223C378;
loc_8223C374:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8223C378:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x8223C380;
	sub_8215F338(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8215f1b0
	ctx.lr = 0x8223C388;
	sub_8215F1B0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,16568
	ctx.r4.s64 = ctx.r11.s64 + 16568;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x8223C39C;
	sub_82120600(ctx, base);
	// addi r7,r27,48
	ctx.r7.s64 = r27.s64 + 48;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r29,3804
	ctx.r5.s64 = r29.s64 + 3804;
	// addi r4,r29,3776
	ctx.r4.s64 = r29.s64 + 3776;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8226e2a8
	ctx.lr = 0x8223C3B4;
	sub_8226E2A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8223C3C4;
	sub_82120AC0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82245878) {
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
	ctx.lr = 0x82245894;
	sub_822455E8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,112
	ctx.r3.s64 = 112;
	// addi r11,r11,-15552
	ctx.r11.s64 = ctx.r11.s64 + -15552;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x822458A8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822458c0
	if (ctx.cr0.eq) goto loc_822458C0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a1e80
	ctx.lr = 0x822458B8;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822458c4
	goto loc_822458C4;
loc_822458C0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822458C4:
	// stw r4,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r4.u32);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x822458D4;
	sub_821D3988(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x822458DC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822458f4
	if (ctx.cr0.eq) goto loc_822458F4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dffe8
	ctx.lr = 0x822458EC;
	sub_821DFFE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822458f8
	goto loc_822458F8;
loc_822458F4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822458F8:
	// stw r4,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x82245904;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x8224590C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82245924
	if (ctx.cr0.eq) goto loc_82245924;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82245e68
	ctx.lr = 0x8224591C;
	sub_82245E68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82245928
	goto loc_82245928;
loc_82245924:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82245928:
	// stw r4,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x82245934;
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

DEFINE_REX_FUNC(sub_8224C898) {
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
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lbz r11,-21635(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -21635);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224c914
	if (ctx.cr0.eq) goto loc_8224C914;
	// lbz r11,1016(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1016);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224c914
	if (ctx.cr0.eq) goto loc_8224C914;
	// lwz r10,744(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 744);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r11,6056(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6056);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,720
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(720));
	// lwz r3,760(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 760);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,36(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r7,40(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// bl 0x8227f268
	ctx.lr = 0x8224C914;
	sub_8227F268(ctx, base);
loc_8224C914:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,680(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 680);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// lwz r10,744(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 744);
	// addi r8,r11,16592
	ctx.r8.s64 = ctx.r11.s64 + 16592;
	// lwz r11,6056(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6056);
	// mulli r10,r10,720
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(720));
	// lfs f13,-16132(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -16132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lfs f13,60(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lfs f0,15048(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,732(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 732, temp.u32);
	// std r9,724(r11)
	REX_STORE_U64(ctx.r11.u32 + 724, ctx.r9.u64);
	// fmadds f0,f12,f0,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfs f0,720(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 720, temp.u32);
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

DEFINE_REX_FUNC(sub_82253598) {
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
	// lwz r3,104(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// bl 0x82163998
	ctx.lr = 0x822535B4;
	sub_82163998(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82266ce8
	ctx.lr = 0x822535BC;
	sub_82266CE8(ctx, base);
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

DEFINE_REX_FUNC(sub_82254718) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r9,52(r11)
	REX_STORE_U8(ctx.r11.u32 + 52, ctx.r9.u8);
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// bge 0x82254748
	if (!ctx.cr0.lt) goto loc_82254748;
	// stw r10,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
loc_82254748:
	// stw r10,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,17148
	ctx.r3.s64 = ctx.r11.s64 + 17148;
	// bl 0x8216bc98
	ctx.lr = 0x8225475C;
	sub_8216BC98(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82255D40) {
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
	ctx.lr = 0x82255D48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-11460
	ctx.r4.s64 = ctx.r11.s64 + -11460;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8215f670
	ctx.lr = 0x82255D68;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-11444
	ctx.r4.s64 = ctx.r11.s64 + -11444;
	// bl 0x8215f670
	ctx.lr = 0x82255D78;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82255D80;
	sub_8215F0F0(ctx, base);
	// li r31,1
	r31.s64 = 1;
	// stw r30,8(r27)
	REX_STORE_U32(r27.u32 + 8, r30.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-11432
	ctx.r4.s64 = ctx.r11.s64 + -11432;
	// bl 0x8215f670
	ctx.lr = 0x82255D9C;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82255DA4;
	sub_8215F0F0(ctx, base);
	// stw r29,8(r27)
	REX_STORE_U32(r27.u32 + 8, r29.u32);
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821ef950
	ctx.lr = 0x82255DB4;
	sub_821EF950(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-16776
	ctx.r4.s64 = ctx.r11.s64 + -16776;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x82255DC8;
	sub_8215F670(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82255DD0;
	sub_8215F0F0(ctx, base);
	// stw r30,8(r29)
	REX_STORE_U32(r29.u32 + 8, r30.u32);
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82258CE0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// bl 0x82120ac0
	ctx.lr = 0x82258D04;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82120ac0
	ctx.lr = 0x82258D14;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120ac0
	ctx.lr = 0x82258D24;
	sub_82120AC0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x82258D2C;
	sub_8269D1B8(ctx, base);
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

DEFINE_REX_FUNC(sub_8225DA20) {
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
	// lwz r7,272(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8225da80
	if (!ctx.cr6.gt) goto loc_8225DA80;
	// addi r5,r3,192
	ctx.r5.s64 = ctx.r3.s64 + 192;
loc_8225DA50:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8228c340
	ctx.lr = 0x8225DA58;
	sub_8228C340(ctx, base);
	// lbz r11,98(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 98);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225da74
	if (ctx.cr0.eq) goto loc_8225DA74;
	// lbz r11,99(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 99);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 & ctx.r6.u64;
loc_8225DA74:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8225da50
	if (ctx.cr6.lt) goto loc_8225DA50;
loc_8225DA80:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225db30
	if (ctx.cr0.eq) goto loc_8225DB30;
	// lwz r11,1604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8225dafc
	if (!ctx.cr6.lt) goto loc_8225DAFC;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// lwz r3,6152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225DAAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225db30
	if (ctx.cr0.eq) goto loc_8225DB30;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r31,6152(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 6152);
	// lwz r3,6156(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6156);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225DAD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r3,5000
	r30.s64 = ctx.r3.s64 + 5000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225DAE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x8227d560
	ctx.lr = 0x8225DAF8;
	sub_8227D560(ctx, base);
	// b 0x8225db30
	goto loc_8225DB30;
loc_8225DAFC:
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
	ctx.lr = 0x8225DB14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1604);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8225db30
	if (ctx.cr6.lt) goto loc_8225DB30;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225b1c8
	ctx.lr = 0x8225DB30;
	sub_8225B1C8(ctx, base);
loc_8225DB30:
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

DEFINE_REX_FUNC(sub_82265E98) {
	REX_FUNC_PROLOGUE();
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stb r11,36(r3)
	REX_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82266A50) {
	REX_FUNC_PROLOGUE();
	// b 0x82266ce8
	sub_82266CE8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82266B70) {
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
	// bl 0x82265f10
	ctx.lr = 0x82266B80;
	sub_82265F10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82267E28) {
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
	ctx.lr = 0x82267E30;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82267f64
	if (ctx.cr6.eq) goto loc_82267F64;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// lwz r27,0(r4)
	r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// ori r25,r11,65534
	r25.u64 = ctx.r11.u64 | 65534;
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r31,0(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 0);
	// b 0x82267ee4
	goto loc_82267EE4;
loc_82267E60:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// beq cr6,0x82267f64
	if (ctx.cr6.eq) goto loc_82267F64;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82267920
	ctx.lr = 0x82267E74;
	sub_82267920(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82267ee0
	if (ctx.cr0.eq) goto loc_82267EE0;
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r9,r10,r25
	ctx.r9.u64 = r25.u64 - ctx.r10.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x82267f14
	if (ctx.cr6.lt) goto loc_82267F14;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// stw r9,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r30.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r31,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r31.u32);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r8,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x82267ee4
	goto loc_82267EE4;
loc_82267EE0:
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_82267EE4:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x82267e60
	if (!ctx.cr6.eq) goto loc_82267E60;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// beq cr6,0x82267f64
	if (ctx.cr6.eq) goto loc_82267F64;
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// subf r9,r10,r25
	ctx.r9.u64 = r25.u64 - ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82267f20
	if (!ctx.cr6.lt) goto loc_82267F20;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x82267F14;
	sub_822F6020(ctx, base);
loc_82267F14:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x82267F20;
	sub_822F6020(ctx, base);
loc_82267F20:
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r10,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_82267F64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_822718A8) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,668(r3)
	REX_STORE_U8(ctx.r3.u32 + 668, ctx.r11.u8);
	// bl 0x82272200
	ctx.lr = 0x822718C8;
	sub_82272200(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,668(r31)
	REX_STORE_U8(r31.u32 + 668, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_82272558) {
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
	ctx.lr = 0x82272560;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r31,648(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// lwz r4,652(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 652);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r3,648
	r29.s64 = ctx.r3.s64 + 648;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822725a0
	if (ctx.cr6.eq) goto loc_822725A0;
	// subf r11,r4,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x8269cc20
	ctx.lr = 0x82272598;
	sub_8269CC20(ctx, base);
	// add r11,r28,r31
	ctx.r11.u64 = r28.u64 + r31.u64;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
loc_822725A0:
	// addi r4,r30,616
	ctx.r4.s64 = r30.s64 + 616;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82272b80
	ctx.lr = 0x822725AC;
	sub_82272B80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82272ed0
	ctx.lr = 0x822725B4;
	sub_82272ED0(ctx, base);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822725d8
	if (ctx.cr0.eq) goto loc_822725D8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822725D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82273090
	ctx.lr = 0x822725D8;
	sub_82273090(ctx, base);
loc_822725D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822769F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82276A00;
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
	// cmplwi cr6,r11,32780
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32780, ctx.xer);
	// bne cr6,0x82276aa4
	if (!ctx.cr6.eq) goto loc_82276AA4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// addi r31,r11,-608
	r31.s64 = ctx.r11.s64 + -608;
	// bge cr6,0x82276a3c
	if (!ctx.cr6.lt) goto loc_82276A3C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,30080
	ctx.r3.s64 = ctx.r11.s64 + 30080;
	// li r5,173
	ctx.r5.s64 = 173;
	// bl 0x821231d0
	ctx.lr = 0x82276A3C;
	sub_821231D0(ctx, base);
loc_82276A3C:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,32780
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32780, ctx.xer);
	// beq cr6,0x82276a5c
	if (ctx.cr6.eq) goto loc_82276A5C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// li r5,177
	ctx.r5.s64 = 177;
	// bl 0x821231d0
	ctx.lr = 0x82276A5C;
	sub_821231D0(ctx, base);
loc_82276A5C:
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,244(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 244);
	// beq 0x82276a80
	if (ctx.cr0.eq) goto loc_82276A80;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82276a9c
	if (!ctx.cr0.eq) goto loc_82276A9C;
	// lwz r11,-116(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -116);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// b 0x82276a90
	goto loc_82276A90;
loc_82276A80:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82276a9c
	if (ctx.cr0.eq) goto loc_82276A9C;
	// lwz r11,-116(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -116);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
loc_82276A90:
	// addi r3,r29,-116
	ctx.r3.s64 = r29.s64 + -116;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82276A9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82276A9C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82276aa8
	goto loc_82276AA8;
loc_82276AA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82276AA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8227C9D8) {
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
	ctx.lr = 0x8227C9E0;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lbz r10,365(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 365);
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r9,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r9.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfd f0,136(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 136);
	// stfd f0,160(r3)
	REX_STORE_U64(ctx.r3.u32 + 160, ctx.f0.u64);
	// bne 0x8227ce78
	if (!ctx.cr0.eq) goto loc_8227CE78;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6200(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6200);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CA24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8227ce78
	if (!ctx.cr6.eq) goto loc_8227CE78;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,30276
	ctx.r4.s64 = ctx.r11.s64 + 30276;
	// lwz r3,6076(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6076);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CA4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6076(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6076);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r9,-816
	ctx.r4.s64 = ctx.r9.s64 + -816;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r10,24(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8227CA7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8227ca8c
	if (!ctx.cr6.eq) goto loc_8227CA8C;
	// lbz r31,8(r3)
	r31.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
loc_8227CA8C:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227ce78
	if (ctx.cr0.eq) goto loc_8227CE78;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822f6280
	ctx.lr = 0x8227CA9C;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// li r29,0
	r29.s64 = 0;
	// beq 0x8227caf8
	if (ctx.cr0.eq) goto loc_8227CAF8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r11,r11,3968
	ctx.r11.s64 = ctx.r11.s64 + 3968;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x8227CAD4;
	sub_8269D1D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x8227CAE0;
	sub_8269D1B8(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// b 0x8227cafc
	goto loc_8227CAFC;
loc_8227CAF8:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8227CAFC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,300(r28)
	REX_STORE_U32(r28.u32 + 300, ctx.r11.u32);
	// bne cr6,0x8227cb20
	if (!ctx.cr6.eq) goto loc_8227CB20;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-1716
	ctx.r4.s64 = ctx.r11.s64 + -1716;
	// addi r3,r10,-808
	ctx.r3.s64 = ctx.r10.s64 + -808;
	// li r5,1715
	ctx.r5.s64 = 1715;
	// bl 0x821231d0
	ctx.lr = 0x8227CB20;
	sub_821231D0(ctx, base);
loc_8227CB20:
	// lwz r11,300(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227ce78
	if (ctx.cr6.eq) goto loc_8227CE78;
	// lis r22,-32106
	r22.s64 = -2104098816;
	// mr r19,r29
	r19.u64 = r29.u64;
	// lwz r3,6284(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CB48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8227ce0c
	if (!ctx.cr0.gt) goto loc_8227CE0C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r20,-32106
	r20.s64 = -2104098816;
	// lis r21,-32106
	r21.s64 = -2104098816;
	// lis r23,-32106
	r23.s64 = -2104098816;
	// addi r27,r11,1624
	r27.s64 = ctx.r11.s64 + 1624;
	// addi r26,r10,-25260
	r26.s64 = ctx.r10.s64 + -25260;
	// addi r25,r9,16492
	r25.s64 = ctx.r9.s64 + 16492;
	// addi r24,r8,-25268
	r24.s64 = ctx.r8.s64 + -25268;
loc_8227CB7C:
	// lwz r3,6284(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6284);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CB94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,740(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 740);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8227cdec
	if (!ctx.cr0.eq) goto loc_8227CDEC;
	// lwz r3,460(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CBB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227cd4c
	if (ctx.cr0.eq) goto loc_8227CD4C;
	// lwz r3,6284(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6284);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CBD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CBF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,113(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 113);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227cd4c
	if (ctx.cr6.lt) goto loc_8227CD4C;
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CC24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6192(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 6192);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CC44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CC58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227cd4c
	if (ctx.cr0.eq) goto loc_8227CD4C;
	// lwz r3,6192(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CC74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CC8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpld cr6,r3,r18
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, r18.u64, ctx.xer);
	// bne cr6,0x8227ccf0
	if (!ctx.cr6.eq) goto loc_8227CCF0;
	// lwz r3,6276(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 6276);
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// std r29,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r29.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CCB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8226cb10
	ctx.lr = 0x8227CCB8;
	sub_8226CB10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227cce8
	if (ctx.cr0.eq) goto loc_8227CCE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CCD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,300(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 300);
	// bl 0x8228d930
	ctx.lr = 0x8227CCE8;
	sub_8228D930(ctx, base);
loc_8227CCE8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x8227CCF0;
	sub_8215F0F0(ctx, base);
loc_8227CCF0:
	// stw r29,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// std r29,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, r29.u64);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CD14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227cd44
	if (ctx.cr0.eq) goto loc_8227CD44;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CD30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,300(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 300);
	// bl 0x8228d930
	ctx.lr = 0x8227CD44;
	sub_8228D930(ctx, base);
loc_8227CD44:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8215f0f0
	ctx.lr = 0x8227CD4C;
	sub_8215F0F0(ctx, base);
loc_8227CD4C:
	// lwz r3,6152(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CD60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227cdec
	if (ctx.cr0.eq) goto loc_8227CDEC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x8227CD74;
	sub_8215F338(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x8227CD7C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8227CD80;
	sub_8215FA30(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82125d00
	ctx.lr = 0x8227CD88;
	sub_82125D00(ctx, base);
	// stw r29,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// std r29,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, r29.u64);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,96(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CDB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227cde4
	if (ctx.cr0.eq) goto loc_8227CDE4;
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CDD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,300(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 300);
	// bl 0x8228d930
	ctx.lr = 0x8227CDE4;
	sub_8228D930(ctx, base);
loc_8227CDE4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8215f0f0
	ctx.lr = 0x8227CDEC;
	sub_8215F0F0(ctx, base);
loc_8227CDEC:
	// lwz r3,6284(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6284);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CE04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r19,r3
	ctx.cr6.compare<int32_t>(r19.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8227cb7c
	if (ctx.cr6.lt) goto loc_8227CB7C;
loc_8227CE0C:
	// lwz r31,300(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 300);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227ce28
	if (ctx.cr6.lt) goto loc_8227CE28;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// b 0x8227ce78
	goto loc_8227CE78;
loc_8227CE28:
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// lis r29,-32106
	r29.s64 = -2104098816;
loc_8227CE30:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x8228ca78
	ctx.lr = 0x8227CE3C;
	sub_8228CA78(ctx, base);
	// lwz r11,6212(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6212);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r5,r4,8
	ctx.r5.s64 = ctx.r4.s64 + 8;
	// lwz r11,64(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CE60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8227ce78
	if (ctx.cr6.eq) goto loc_8227CE78;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8227ce30
	if (ctx.cr6.eq) goto loc_8227CE30;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8227CE78:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_8229EF20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,72(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8229efcc
	if (ctx.cr0.eq) goto loc_8229EFCC;
	// lwz r11,128(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f11,56(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f13,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lfs f9,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f7,-16(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f6,-16(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// fdivs f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 / ctx.f11.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fdivs f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 / ctx.f12.f64));
	// fadds f13,f11,f8
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
loc_8229EFCC:
	// lwz r11,88(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// rlwinm r10,r5,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ldx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A4D38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x822a4d98
	if (ctx.cr6.eq) goto loc_822A4D98;
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// lfs f11,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// bge cr6,0x822a4d84
	if (!ctx.cr6.lt) goto loc_822A4D84;
	// fneg f0,f10
	ctx.f0.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// b 0x822a4d88
	goto loc_822A4D88;
loc_822A4D84:
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
loc_822A4D88:
	// lfs f12,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// b 0x822a4db8
	goto loc_822A4DB8;
loc_822A4D98:
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x822a4db0
	if (!ctx.cr6.lt) goto loc_822A4DB0;
	// fneg f0,f10
	ctx.f0.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// b 0x822a4db4
	goto loc_822A4DB4;
loc_822A4DB0:
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
loc_822A4DB4:
	// stfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_822A4DB8:
	// stfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A8448) {
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
	// bl 0x822a8498
	ctx.lr = 0x822A8468;
	sub_822A8498(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a8478
	if (ctx.cr0.eq) goto loc_822A8478;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822A8478;
	sub_8269CE98(ctx, base);
loc_822A8478:
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

DEFINE_REX_FUNC(sub_822AC6B8) {
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
	// bl 0x826a1c90
	ctx.lr = 0x822AC6C0;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x826a2c7c
	ctx.lr = 0x822AC6C8;
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 28);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// bne 0x822ac6f4
	if (!ctx.cr0.eq) goto loc_822AC6F4;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
loc_822AC6F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r27,r29
	r27.u64 = r29.u64;
	// bne cr6,0x822ac704
	if (!ctx.cr6.eq) goto loc_822AC704;
	// mr r27,r26
	r27.u64 = r26.u64;
loc_822AC704:
	// lwz r19,204(r18)
	r19.u64 = REX_LOAD_U32(r18.u32 + 204);
	// li r24,0
	r24.s64 = 0;
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// lwz r10,68(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 68);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x822ac790
	if (ctx.cr6.eq) goto loc_822AC790;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822ac780
	if (!ctx.cr6.gt) goto loc_822AC780;
	// mr r31,r24
	r31.u64 = r24.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_822AC730:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ac774
	if (ctx.cr6.eq) goto loc_822AC774;
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
	ctx.lr = 0x822AC758;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822AC774;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822AC774:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x822ac730
	if (!ctx.cr0.eq) goto loc_822AC730;
loc_822AC780:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822abb70
	ctx.lr = 0x822AC790;
	sub_822ABB70(ctx, base);
loc_822AC790:
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// li r20,1
	r20.s64 = 1;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r26,r24
	r26.u64 = r24.u64;
	// lwz r9,20(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwz r8,12(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lwz r22,64(r19)
	r22.u64 = REX_LOAD_U32(r19.u32 + 64);
	// stw r18,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r18.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r27,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r27.u32);
	// stw r25,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r25.u32);
	// stw r11,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r23,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r23.u32);
	// stw r10,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// stw r9,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stb r20,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r20.u8);
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// ble cr6,0x822ac8e4
	if (!ctx.cr6.gt) goto loc_822AC8E4;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lis r21,-32126
	r21.s64 = -2105409536;
	// lis r25,-32106
	r25.s64 = -2104098816;
loc_822AC7EC:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ac8d0
	if (ctx.cr6.eq) goto loc_822AC8D0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822AC814;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822ac890
	if (!ctx.cr6.gt) goto loc_822AC890;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_822AC82C:
	// lwzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// lwz r11,792(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ac87c
	if (ctx.cr6.eq) goto loc_822AC87C;
	// stw r3,4(r23)
	REX_STORE_U32(r23.u32 + 4, ctx.r3.u32);
	// lwz r11,792(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ac878
	if (ctx.cr6.eq) goto loc_822AC878;
	// lwz r11,784(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 784);
	// lwz r10,144(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 144);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822ac868
	if (ctx.cr6.eq) goto loc_822AC868;
	// addi r5,r23,16
	ctx.r5.s64 = r23.s64 + 16;
	// addi r4,r23,80
	ctx.r4.s64 = r23.s64 + 80;
	// b 0x822ac870
	goto loc_822AC870;
loc_822AC868:
	// addi r5,r23,80
	ctx.r5.s64 = r23.s64 + 80;
	// addi r4,r23,16
	ctx.r4.s64 = r23.s64 + 16;
loc_822AC870:
	// bl 0x822ad788
	ctx.lr = 0x822AC874;
	sub_822AD788(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_822AC878:
	// stw r24,4(r23)
	REX_STORE_U32(r23.u32 + 4, r24.u32);
loc_822AC87C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822ac82c
	if (ctx.cr6.lt) goto loc_822AC82C;
loc_822AC890:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ac8c0
	if (ctx.cr6.eq) goto loc_822AC8C0;
	// lbz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822ac8c0
	if (ctx.cr0.eq) goto loc_822AC8C0;
	// lwz r11,112(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 112);
	// lwz r9,-19400(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r25)
	REX_STORE_U32(r25.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822AC8C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822AC8C0:
	// stb r20,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r20.u8);
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r24.u32);
loc_822AC8D0:
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822ac7ec
	if (ctx.cr6.lt) goto loc_822AC7EC;
loc_822AC8E4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eced8
	ctx.lr = 0x822AC8EC;
	sub_821ECED8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// beq cr6,0x822acb10
	if (ctx.cr6.eq) goto loc_822ACB10;
	// addi r4,r18,16
	ctx.r4.s64 = r18.s64 + 16;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x822940c8
	ctx.lr = 0x822AC908;
	sub_822940C8(ctx, base);
	// lfs f10,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f0,68(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f7,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f12,36(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// lfs f13,40(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,32(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f3,f12,f9
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f29,f13,f10
	f29.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f5,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f28,f12,f10
	f28.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f2,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f30,64(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 64);
	f30.f64 = double(temp.f32);
	// fmuls f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f1,f11,f9
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f4,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f23,20(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 20);
	f23.f64 = double(temp.f32);
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// lfs f22,16(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 16);
	f22.f64 = double(temp.f32);
	// fmadds f8,f30,f5,f8
	ctx.f8.f64 = double(float(std::fma(f30.f64, ctx.f5.f64, ctx.f8.f64)));
	// lfs f27,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	f27.f64 = double(temp.f32);
	// fmadds f6,f30,f4,f6
	ctx.f6.f64 = double(float(std::fma(f30.f64, ctx.f4.f64, ctx.f6.f64)));
	// lfs f25,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	f25.f64 = double(temp.f32);
	// fmadds f0,f30,f2,f0
	ctx.f0.f64 = double(float(std::fma(f30.f64, ctx.f2.f64, ctx.f0.f64)));
	// lfs f24,24(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 24);
	f24.f64 = double(temp.f32);
	// fmuls f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// lfs f30,72(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 72);
	f30.f64 = double(temp.f32);
	// fmuls f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// lfs f26,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	f26.f64 = double(temp.f32);
	// fmadds f3,f23,f4,f3
	ctx.f3.f64 = double(float(std::fma(f23.f64, ctx.f4.f64, ctx.f3.f64)));
	// lfs f7,52(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f22,f5,f10
	ctx.f10.f64 = double(float(std::fma(f22.f64, ctx.f5.f64, ctx.f10.f64)));
	// lfs f20,48(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 48);
	f20.f64 = double(temp.f32);
	// fmadds f1,f22,f4,f1
	ctx.f1.f64 = double(float(std::fma(f22.f64, ctx.f4.f64, ctx.f1.f64)));
	// lfs f21,56(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 56);
	f21.f64 = double(temp.f32);
	// fmadds f29,f24,f5,f29
	f29.f64 = double(float(std::fma(f24.f64, ctx.f5.f64, f29.f64)));
	// lfs f19,48(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	f19.f64 = double(temp.f32);
	// fmadds f28,f23,f5,f28
	f28.f64 = double(float(std::fma(f23.f64, ctx.f5.f64, f28.f64)));
	// lfs f17,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	f17.f64 = double(temp.f32);
	// fmadds f8,f30,f27,f8
	ctx.f8.f64 = double(float(std::fma(f30.f64, f27.f64, ctx.f8.f64)));
	// lfs f18,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	f18.f64 = double(temp.f32);
	// fmadds f6,f30,f26,f6
	ctx.f6.f64 = double(float(std::fma(f30.f64, f26.f64, ctx.f6.f64)));
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmadds f0,f30,f25,f0
	ctx.f0.f64 = double(float(std::fma(f30.f64, f25.f64, ctx.f0.f64)));
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmadds f9,f24,f4,f9
	ctx.f9.f64 = double(float(std::fma(f24.f64, ctx.f4.f64, ctx.f9.f64)));
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmadds f13,f24,f2,f13
	ctx.f13.f64 = double(float(std::fma(f24.f64, ctx.f2.f64, ctx.f13.f64)));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// fmadds f12,f23,f2,f12
	ctx.f12.f64 = double(float(std::fma(f23.f64, ctx.f2.f64, ctx.f12.f64)));
	// fmadds f11,f22,f2,f11
	ctx.f11.f64 = double(float(std::fma(f22.f64, ctx.f2.f64, ctx.f11.f64)));
	// fmadds f5,f7,f26,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f7.f64, f26.f64, ctx.f3.f64)));
	// stfs f5,132(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f10,f20,f27,f10
	ctx.f10.f64 = double(float(std::fma(f20.f64, f27.f64, ctx.f10.f64)));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f5,f20,f26,f1
	ctx.f5.f64 = double(float(std::fma(f20.f64, f26.f64, ctx.f1.f64)));
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f5,f21,f27,f29
	ctx.f5.f64 = double(float(std::fma(f21.f64, f27.f64, f29.f64)));
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f10,f8,f19
	ctx.f10.f64 = double(float(ctx.f8.f64 + f19.f64));
	// stfs f10,192(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fadds f0,f0,f17
	ctx.f0.f64 = double(float(ctx.f0.f64 + f17.f64));
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmadds f5,f7,f27,f28
	ctx.f5.f64 = double(float(std::fma(ctx.f7.f64, f27.f64, f28.f64)));
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f10,f6,f18
	ctx.f10.f64 = double(float(ctx.f6.f64 + f18.f64));
	// stfs f10,196(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fmadds f0,f21,f26,f9
	ctx.f0.f64 = double(float(std::fma(f21.f64, f26.f64, ctx.f9.f64)));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmadds f13,f21,f25,f13
	ctx.f13.f64 = double(float(std::fma(f21.f64, f25.f64, ctx.f13.f64)));
	// fmadds f12,f7,f25,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, f25.f64, ctx.f12.f64)));
	// fmadds f11,f20,f25,f11
	ctx.f11.f64 = double(float(std::fma(f20.f64, f25.f64, ctx.f11.f64)));
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r7,r1,384
	ctx.r7.s64 = ctx.r1.s64 + 384;
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// ld r30,0(r10)
	r30.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r25,0(r9)
	r25.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// addi r29,r1,400
	r29.s64 = ctx.r1.s64 + 400;
	// ld r31,8(r11)
	r31.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r26,r1,416
	r26.s64 = ctx.r1.s64 + 416;
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// ld r23,0(r8)
	r23.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r23,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, r23.u64);
	// std r8,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r8.u64);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// std r31,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, r31.u64);
	// std r30,0(r29)
	REX_STORE_U64(r29.u32 + 0, r30.u64);
	// std r10,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r10.u64);
	// std r25,0(r26)
	REX_STORE_U64(r26.u32 + 0, r25.u64);
	// std r9,8(r26)
	REX_STORE_U64(r26.u32 + 8, ctx.r9.u64);
	// lwz r3,204(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 204);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822ACAC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// ld r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lwz r3,0(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ld r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// std r6,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// beq cr6,0x822acb4c
	if (ctx.cr6.eq) goto loc_822ACB4C;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x822ad1c0
	ctx.lr = 0x822ACB0C;
	sub_822AD1C0(ctx, base);
	// b 0x822acb4c
	goto loc_822ACB4C;
loc_822ACB10:
	// lwz r29,12(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 12);
	// mr r31,r24
	r31.u64 = r24.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822acb4c
	if (!ctx.cr6.gt) goto loc_822ACB4C;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_822ACB24:
	// lwz r11,24(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 24);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r4,64(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x822abe18
	ctx.lr = 0x822ACB3C;
	sub_822ABE18(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,80
	r30.s64 = r30.s64 + 80;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(r31.s32, r29.s32, ctx.xer);
	// blt cr6,0x822acb24
	if (ctx.cr6.lt) goto loc_822ACB24;
loc_822ACB4C:
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// stb r20,176(r1)
	REX_STORE_U8(ctx.r1.u32 + 176, r20.u8);
	// stw r24,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r24,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r24.u32);
	// stw r24,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r24.u32);
	// ble cr6,0x822ace88
	if (!ctx.cr6.gt) goto loc_822ACE88;
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r31,r24
	r31.u64 = r24.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_822ACB74:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ace78
	if (ctx.cr6.eq) goto loc_822ACE78;
	// ld r11,48(r18)
	ctx.r11.u64 = REX_LOAD_U64(r18.u32 + 48);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// ld r8,56(r18)
	ctx.r8.u64 = REX_LOAD_U64(r18.u32 + 56);
	// addi r10,r18,16
	ctx.r10.s64 = r18.s64 + 16;
	// ld r6,64(r18)
	ctx.r6.u64 = REX_LOAD_U64(r18.u32 + 64);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// ld r4,72(r18)
	ctx.r4.u64 = REX_LOAD_U64(r18.u32 + 72);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// ld r26,40(r18)
	r26.u64 = REX_LOAD_U64(r18.u32 + 40);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// std r8,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// stfs f31,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// ld r25,16(r18)
	r25.u64 = REX_LOAD_U64(r18.u32 + 16);
	// ld r10,24(r18)
	ctx.r10.u64 = REX_LOAD_U64(r18.u32 + 24);
	// ld r8,32(r18)
	ctx.r8.u64 = REX_LOAD_U64(r18.u32 + 32);
	// std r6,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r6.u64);
	// std r4,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r4.u64);
	// std r25,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, r25.u64);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// std r26,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, r26.u64);
	// std r8,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// lfs f11,224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,24(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 24);
	// lfs f0,228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lfs f10,240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// lwz r3,64(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// fmuls f9,f5,f0
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f2,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f30,f2,f11,f9
	f30.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, ctx.f9.f64)));
	// lfs f9,256(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,232(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f7.f64 = double(temp.f32);
	// lfs f1,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f29,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	f29.f64 = double(temp.f32);
	// fmuls f24,f1,f0
	f24.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f12,260(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f27,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	f27.f64 = double(temp.f32);
	// fmuls f28,f1,f12
	f28.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f26,f29,f12
	f26.f64 = double(float(f29.f64 * ctx.f12.f64));
	// lfs f23,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f23.f64 = double(temp.f32);
	// fmuls f12,f27,f12
	ctx.f12.f64 = double(float(f27.f64 * ctx.f12.f64));
	// lfs f22,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f22.f64 = double(temp.f32);
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f21,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f21.f64 = double(temp.f32);
	// fmuls f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfs f25,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	f25.f64 = double(temp.f32);
	// fmuls f18,f29,f13
	f18.f64 = double(float(f29.f64 * ctx.f13.f64));
	// lfs f20,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	f20.f64 = double(temp.f32);
	// fmuls f13,f27,f13
	ctx.f13.f64 = double(float(f27.f64 * ctx.f13.f64));
	// lfs f19,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	f19.f64 = double(temp.f32);
	// fmadds f4,f2,f9,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f2.f64, ctx.f9.f64, ctx.f4.f64)));
	// lfs f17,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	f17.f64 = double(temp.f32);
	// fmadds f30,f25,f8,f30
	f30.f64 = double(float(std::fma(f25.f64, ctx.f8.f64, f30.f64)));
	// fmadds f28,f23,f9,f28
	f28.f64 = double(float(std::fma(f23.f64, ctx.f9.f64, f28.f64)));
	// fmadds f26,f22,f9,f26
	f26.f64 = double(float(std::fma(f22.f64, ctx.f9.f64, f26.f64)));
	// fmadds f12,f21,f9,f12
	ctx.f12.f64 = double(float(std::fma(f21.f64, ctx.f9.f64, ctx.f12.f64)));
	// fmadds f5,f2,f10,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f2.f64, ctx.f10.f64, ctx.f5.f64)));
	// fmadds f2,f23,f10,f1
	ctx.f2.f64 = double(float(std::fma(f23.f64, ctx.f10.f64, ctx.f1.f64)));
	// fmadds f1,f22,f10,f18
	ctx.f1.f64 = double(float(std::fma(f22.f64, ctx.f10.f64, f18.f64)));
	// fmadds f13,f21,f10,f13
	ctx.f13.f64 = double(float(std::fma(f21.f64, ctx.f10.f64, ctx.f13.f64)));
	// fmadds f9,f23,f11,f24
	ctx.f9.f64 = double(float(std::fma(f23.f64, ctx.f11.f64, f24.f64)));
	// fmadds f4,f25,f6,f4
	ctx.f4.f64 = double(float(std::fma(f25.f64, ctx.f6.f64, ctx.f4.f64)));
	// fmadds f10,f20,f6,f28
	ctx.f10.f64 = double(float(std::fma(f20.f64, ctx.f6.f64, f28.f64)));
	// fmadds f28,f19,f6,f26
	f28.f64 = double(float(std::fma(f19.f64, ctx.f6.f64, f26.f64)));
	// fmadds f12,f17,f6,f12
	ctx.f12.f64 = double(float(std::fma(f17.f64, ctx.f6.f64, ctx.f12.f64)));
	// fadds f6,f30,f3
	ctx.f6.f64 = double(float(f30.f64 + ctx.f3.f64));
	// fmadds f3,f20,f7,f2
	ctx.f3.f64 = double(float(std::fma(f20.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f5,f25,f7,f5
	ctx.f5.f64 = double(float(std::fma(f25.f64, ctx.f7.f64, ctx.f5.f64)));
	// fmadds f2,f19,f7,f1
	ctx.f2.f64 = double(float(std::fma(f19.f64, ctx.f7.f64, ctx.f1.f64)));
	// fmadds f9,f20,f8,f9
	ctx.f9.f64 = double(float(std::fma(f20.f64, ctx.f8.f64, ctx.f9.f64)));
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f13,f17,f7,f13
	ctx.f13.f64 = double(float(std::fma(f17.f64, ctx.f7.f64, ctx.f13.f64)));
	// fmuls f7,f29,f0
	ctx.f7.f64 = double(float(f29.f64 * ctx.f0.f64));
	// fmuls f0,f27,f0
	ctx.f0.f64 = double(float(f27.f64 * ctx.f0.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f7,f22,f11,f7
	ctx.f7.f64 = double(float(std::fma(f22.f64, ctx.f11.f64, ctx.f7.f64)));
	// lfs f9,280(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,276(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// fadds f12,f4,f9
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f6,192(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f2,132(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r26,r1,496
	r26.s64 = ctx.r1.s64 + 496;
	// stfs f3,136(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r7,r1,480
	ctx.r7.s64 = ctx.r1.s64 + 480;
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// fmadds f0,f21,f11,f0
	ctx.f0.f64 = double(float(std::fma(f21.f64, ctx.f11.f64, ctx.f0.f64)));
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmadds f13,f19,f8,f7
	ctx.f13.f64 = double(float(std::fma(f19.f64, ctx.f8.f64, ctx.f7.f64)));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r25,r1,448
	r25.s64 = ctx.r1.s64 + 448;
	// stfs f28,148(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r23,r1,464
	r23.s64 = ctx.r1.s64 + 464;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// fmadds f0,f17,f8,f0
	ctx.f0.f64 = double(float(std::fma(f17.f64, ctx.f8.f64, ctx.f0.f64)));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r22,0(r8)
	r22.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r8,8(r26)
	REX_STORE_U64(r26.u32 + 8, ctx.r8.u64);
	// std r22,0(r26)
	REX_STORE_U64(r26.u32 + 0, r22.u64);
	// ld r26,8(r10)
	r26.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r26,8(r25)
	REX_STORE_U64(r25.u32 + 8, r26.u64);
	// ld r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r22,0(r9)
	r22.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r22,0(r23)
	REX_STORE_U64(r23.u32 + 0, r22.u64);
	// std r11,0(r25)
	REX_STORE_U64(r25.u32 + 0, ctx.r11.u64);
	// std r8,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// std r9,8(r23)
	REX_STORE_U64(r23.u32 + 8, ctx.r9.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822ACDA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,204(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 204);
	// addi r4,r27,16
	ctx.r4.s64 = r27.s64 + 16;
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822ACDC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,304(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// lfs f13,336(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 336);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822acde4
	if (ctx.cr6.gt) goto loc_822ACDE4;
	// lfs f0,320(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822acde8
	if (!ctx.cr6.lt) goto loc_822ACDE8;
loc_822ACDE4:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_822ACDE8:
	// lfs f0,312(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,344(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822ace08
	if (ctx.cr6.gt) goto loc_822ACE08;
	// lfs f0,328(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,296(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822ace0c
	if (!ctx.cr6.lt) goto loc_822ACE0C;
loc_822ACE08:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_822ACE0C:
	// lfs f0,308(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,340(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822ace2c
	if (ctx.cr6.gt) goto loc_822ACE2C;
	// lfs f0,324(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,292(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822ace30
	if (!ctx.cr6.lt) goto loc_822ACE30;
loc_822ACE2C:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_822ACE30:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ace78
	if (!ctx.cr0.eq) goto loc_822ACE78;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822ACE54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822ACE70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// stwx r24,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r24.u32);
loc_822ACE78:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,80
	r31.s64 = r31.s64 + 80;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x822acb74
	if (!ctx.cr0.eq) goto loc_822ACB74;
loc_822ACE88:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821eced8
	ctx.lr = 0x822ACE90;
	sub_821ECED8(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x826a2cc8
	ctx.lr = 0x822ACE9C;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_822EB4D0) {
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
	ctx.lr = 0x822EB4D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r31,r3,188
	r31.s64 = ctx.r3.s64 + 188;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822eb538
	if (!ctx.cr6.gt) goto loc_822EB538;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
loc_822EB4FC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8228ca78
	ctx.lr = 0x822EB508;
	sub_8228CA78(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822eb528
	if (ctx.cr6.eq) goto loc_822EB528;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EB528;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822EB528:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822eb4fc
	if (ctx.cr6.lt) goto loc_822EB4FC;
loc_822EB538:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// bl 0x8269d1b8
	ctx.lr = 0x822EB548;
	sub_8269D1B8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,148
	ctx.r3.s64 = r30.s64 + 148;
	// bl 0x82120ac0
	ctx.lr = 0x822EB558;
	sub_82120AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82178388
	ctx.lr = 0x822EB560;
	sub_82178388(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822eb570
	if (ctx.cr0.eq) goto loc_822EB570;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822EB570;
	sub_8269CE98(ctx, base);
loc_822EB570:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822EEDE0) {
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
	ctx.lr = 0x822EEDE8;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2c9c
	ctx.lr = 0x822EEDF0;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// lfs f0,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822ef004
	if (!ctx.cr6.gt) goto loc_822EF004;
	// fmuls f12,f1,f1
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fmuls f26,f0,f1
	f26.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// addi r25,r11,16592
	r25.s64 = ctx.r11.s64 + 16592;
	// li r29,0
	r29.s64 = 0;
	// lfs f30,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f30.f64 = double(temp.f32);
	// lfs f13,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f28,f1,f30
	f28.f64 = double(float(ctx.f1.f64 * f30.f64));
	// lfs f29,12(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 12);
	f29.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f27,f13,f30
	f27.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fmuls f25,f0,f13
	f25.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_822EEE4C:
	// lwz r11,112(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 112);
	// addi r10,r25,256
	ctx.r10.s64 = r25.s64 + 256;
	// add r31,r29,r11
	r31.u64 = r29.u64 + ctx.r11.u64;
	// addi r11,r31,128
	ctx.r11.s64 = r31.s64 + 128;
	// addi r11,r31,96
	ctx.r11.s64 = r31.s64 + 96;
	// addi r30,r31,160
	r30.s64 = r31.s64 + 160;
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r31,112
	r28.s64 = r31.s64 + 112;
	// lfs f13,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f12,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f11,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,224(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 224);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f10,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * f31.f64));
	// lfs f9,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + f27.f64));
	// fadds f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 + f27.f64));
	// fadds f12,f12,f25
	ctx.f12.f64 = double(float(ctx.f12.f64 + f25.f64));
	// fsubs f7,f29,f8
	ctx.f7.f64 = double(float(f29.f64 - ctx.f8.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// fadds f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// fadds f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// fcmpu cr6,f7,f30
	ctx.cr6.compare(ctx.f7.f64, f30.f64);
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
	// lfs f12,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 + f28.f64));
	// lfs f0,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// fadds f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 + f26.f64));
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stfs f12,128(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// lfs f13,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f11,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f11,f11,f8,f29
	ctx.f11.f64 = ctx.f11.f64 >= 0.0 ? ctx.f8.f64 : f29.f64;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// lfs f12,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f29,f11
	ctx.f11.f64 = double(float(f29.f64 - ctx.f11.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,136(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// lfs f13,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,152(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// fadds f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f10,120(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,116(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// bl 0x82126320
	ctx.lr = 0x822EEF68;
	sub_82126320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821262a8
	ctx.lr = 0x822EEF74;
	sub_821262A8(ctx, base);
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,208(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 212, temp.u32);
	// lfs f0,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 216, temp.u32);
	// lfs f13,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8216d040
	ctx.lr = 0x822EEFBC;
	sub_8216D040(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823fbf60
	ctx.lr = 0x822EEFCC;
	sub_823FBF60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x826a1e70
	ctx.lr = 0x822EEFDC;
	sub_826A1E70(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82176380
	ctx.lr = 0x822EEFF0;
	sub_82176380(ctx, base);
	// lwz r11,108(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 108);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,240
	r29.s64 = r29.s64 + 240;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822eee4c
	if (ctx.cr6.lt) goto loc_822EEE4C;
loc_822EF004:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ce8
	ctx.lr = 0x822EF010;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_822FFC00) {
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
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,-10820(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -10820);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f31,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	f31.f64 = double(temp.f32);
	// beq 0x822ffc5c
	if (ctx.cr0.eq) goto loc_822FFC5C;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f31,24(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f31,32(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// b 0x822ffcc0
	goto loc_822FFCC0;
loc_822FFC5C:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ffc74
	if (ctx.cr6.eq) goto loc_822FFC74;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822ffc78
	goto loc_822FFC78;
loc_822FFC74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822FFC78:
	// lwz r3,312(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FFC94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ffcd4
	if (!ctx.cr0.eq) goto loc_822FFCD4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f0,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f0,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
loc_822FFCC0:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stfs f31,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
loc_822FFCD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

DEFINE_REX_FUNC(sub_82308D88) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82308d98
	if (!ctx.cr6.eq) goto loc_82308D98;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82308D98:
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82308db0
	goto loc_82308DB0;
loc_82308DA8:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82308DB0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82308da8
	if (!ctx.cr6.eq) goto loc_82308DA8;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8230BE20) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230bed4
	if (ctx.cr6.eq) goto loc_8230BED4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8230bed4
	if (ctx.cr6.eq) goto loc_8230BED4;
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8230be44
	if (!ctx.cr6.eq) goto loc_8230BE44;
	// li r3,81
	ctx.r3.s64 = 81;
	// blr 
	return;
loc_8230BE44:
	// lwz r11,172(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230be58
	if (ctx.cr6.eq) goto loc_8230BE58;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8230be5c
	goto loc_8230BE5C;
loc_8230BE58:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8230BE5C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230be78
	if (ctx.cr6.eq) goto loc_8230BE78;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230be74
	if (ctx.cr6.eq) goto loc_8230BE74;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8230be78
	goto loc_8230BE78;
loc_8230BE74:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8230BE78:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230bec8
	if (!ctx.cr6.gt) goto loc_8230BEC8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8230BE8C:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,172(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230bea4
	if (ctx.cr6.eq) goto loc_8230BEA4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8230bea8
	goto loc_8230BEA8;
loc_8230BEA4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230BEA8:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8230bec0
	if (!ctx.cr6.eq) goto loc_8230BEC0;
	// lhz r11,100(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 100);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230bec0
	if (ctx.cr0.eq) goto loc_8230BEC0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_8230BEC0:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8230be8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230BE8C;
loc_8230BEC8:
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8230BED4:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823106E0) {
	REX_FUNC_PROLOGUE();
	// li r11,100
	ctx.r11.s64 = 100;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823108F8) {
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
	ctx.lr = 0x82310900;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82310924
	if (ctx.cr6.eq) goto loc_82310924;
	// lwz r26,64(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x82310928
	goto loc_82310928;
loc_82310924:
	// li r26,0
	r26.s64 = 0;
loc_82310928:
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r29,r11,5396
	r29.s64 = ctx.r11.s64 + 5396;
	// beq cr6,0x8231094c
	if (ctx.cr6.eq) goto loc_8231094C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,418
	ctx.r6.s64 = 418;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8230eea0
	ctx.lr = 0x8231094C;
	sub_8230EEA0(ctx, base);
loc_8231094C:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lis r27,-32129
	r27.s64 = -2105606144;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823109d0
	if (ctx.cr6.eq) goto loc_823109D0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823109bc
	if (!ctx.cr6.gt) goto loc_823109BC;
	// li r30,0
	r30.s64 = 0;
loc_82310970:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823109a8
	if (!ctx.cr6.eq) goto loc_823109A8;
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823109a8
	if (ctx.cr6.eq) goto loc_823109A8;
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,75
	ctx.r6.s64 = 75;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823109A8;
	sub_82330D00(ctx, base);
loc_823109A8:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82310970
	if (ctx.cr6.lt) goto loc_82310970;
loc_823109BC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r6,433
	ctx.r6.s64 = 433;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8230eea0
	ctx.lr = 0x823109D0;
	sub_8230EEA0(ctx, base);
loc_823109D0:
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823109f4
	if (ctx.cr6.eq) goto loc_823109F4;
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,438
	ctx.r6.s64 = 438;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823109F4;
	sub_82330D00(ctx, base);
loc_823109F4:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82310a18
	if (ctx.cr0.eq) goto loc_82310A18;
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,450
	ctx.r6.s64 = 450;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82310A18;
	sub_82330D00(ctx, base);
loc_82310A18:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82316590) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,-10788(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -10788);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82316C28) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82316c50
	if (ctx.cr6.eq) goto loc_82316C50;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82316c60
	if (!ctx.cr6.eq) goto loc_82316C60;
loc_82316C50:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82316998
	ctx.lr = 0x82316C58;
	sub_82316998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82316cd8
	if (!ctx.cr0.eq) goto loc_82316CD8;
loc_82316C60:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82316ca0
	if (!ctx.cr6.eq) goto loc_82316CA0;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82316c80
	if (ctx.cr6.eq) goto loc_82316C80;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82316c84
	goto loc_82316C84;
loc_82316C80:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82316C84:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82316C98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82316cd8
	if (!ctx.cr0.eq) goto loc_82316CD8;
loc_82316CA0:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x82315660
	ctx.lr = 0x82316CA8;
	sub_82315660(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82316cd8
	if (!ctx.cr0.eq) goto loc_82316CD8;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,5872
	ctx.r5.s64 = ctx.r10.s64 + 5872;
	// li r6,661
	ctx.r6.s64 = 661;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82316CD4;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82316CD8:
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

DEFINE_REX_FUNC(sub_8231D330) {
	REX_FUNC_PROLOGUE();
	// lwz r3,156(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231d340
	if (ctx.cr6.eq) goto loc_8231D340;
	// b 0x82350e48
	sub_82350E48(ctx, base);
	return;
loc_8231D340:
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8231D6F0) {
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
	// addi r11,r11,6696
	ctx.r11.s64 = ctx.r11.s64 + 6696;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8231d71c
	if (ctx.cr0.eq) goto loc_8231D71C;
	// bl 0x8269ce98
	ctx.lr = 0x8231D71C;
	sub_8269CE98(ctx, base);
loc_8231D71C:
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

DEFINE_REX_FUNC(sub_823205D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
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
	// b 0x823125f0
	sub_823125F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82320EE0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c94
	ctx.lr = 0x82320EE8;
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// li r22,1
	r22.s64 = 1;
	// std r24,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r24.u64);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r19,r24
	r19.u64 = r24.u64;
	// mr r25,r24
	r25.u64 = r24.u64;
	// mr r30,r22
	r30.u64 = r22.u64;
	// bl 0x822f7a58
	ctx.lr = 0x82320F20;
	sub_822F7A58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82320f40
	if (ctx.cr0.eq) goto loc_82320F40;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,16(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 16);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82311d20
	ctx.lr = 0x82320F38;
	sub_82311D20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823217e4
	if (!ctx.cr0.eq) goto loc_823217E4;
loc_82320F40:
	// lwz r31,16(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x82320fa4
	if (!ctx.cr6.eq) goto loc_82320FA4;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stb r24,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r24.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320f84
	if (ctx.cr6.eq) goto loc_82320F84;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// bl 0x8233f250
	ctx.lr = 0x82320F6C;
	sub_8233F250(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82320f84
	if (ctx.cr0.eq) goto loc_82320F84;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82320f84
	if (ctx.cr6.eq) goto loc_82320F84;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bne cr6,0x823217e4
	if (!ctx.cr6.eq) goto loc_823217E4;
loc_82320F84:
	// lbz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82320f98
	if (ctx.cr0.eq) goto loc_82320F98;
	// mr r25,r22
	r25.u64 = r22.u64;
	// b 0x82320fa4
	goto loc_82320FA4;
loc_82320F98:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
loc_82320FA4:
	// lbz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 44);
	// stb r24,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r24.u8);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r20,r11,r30
	r20.u64 = ctx.r11.u64 & r30.u64;
	// beq cr6,0x82321028
	if (ctx.cr6.eq) goto loc_82321028;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8233f250
	ctx.lr = 0x82320FCC;
	sub_8233F250(ctx, base);
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x82320fe8
	if (ctx.cr6.eq) goto loc_82320FE8;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82320fe8
	if (ctx.cr6.eq) goto loc_82320FE8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82321028
	if (ctx.cr6.eq) goto loc_82321028;
	// b 0x823217e4
	goto loc_823217E4;
loc_82320FE8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82311720
	ctx.lr = 0x82320FF4;
	sub_82311720(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823217e4
	if (!ctx.cr0.eq) goto loc_823217E4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82321028
	if (ctx.cr6.eq) goto loc_82321028;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82321020
	if (!ctx.cr0.eq) goto loc_82321020;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82321028
	if (ctx.cr0.eq) goto loc_82321028;
loc_82321020:
	// rlwimi r11,r22,8,23,24
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 8) & 0x180) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE7F);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
loc_82321028:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82321038
	if (ctx.cr0.eq) goto loc_82321038;
	// stb r22,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r22.u8);
loc_82321038:
	// stb r24,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r24.u8);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,148(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82321058;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823217e4
	if (!ctx.cr0.eq) goto loc_823217E4;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lis r27,-32126
	r27.s64 = -2105409536;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82321408
	if (!ctx.cr0.eq) goto loc_82321408;
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8232109c
	if (!ctx.cr0.eq) goto loc_8232109C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82311998
	ctx.lr = 0x82321084;
	sub_82311998(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232109c
	if (ctx.cr0.eq) goto loc_8232109C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82313038
	ctx.lr = 0x82321094;
	sub_82313038(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82321420
	if (!ctx.cr0.eq) goto loc_82321420;
loc_8232109C:
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm. r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82321390
	if (!ctx.cr0.eq) goto loc_82321390;
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82321390
	if (!ctx.cr0.eq) goto loc_82321390;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f31,3716(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	f31.f64 = double(temp.f32);
	// lwz r9,12(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r29,12(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r30,8(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x8232110c
	if (!ctx.cr6.gt) goto loc_8232110C;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// bgt cr6,0x8232110c
	if (ctx.cr6.gt) goto loc_8232110C;
	// lfs f0,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8232110c
	if (!ctx.cr6.gt) goto loc_8232110C;
	// clrldi r9,r23,32
	ctx.r9.u64 = r23.u64 & 0xFFFFFFFF;
	// lwz r8,4(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 4);
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f12,160(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f13.f64, -ctx.f0.f64)));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
loc_8232110C:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82321594
	if (!ctx.cr6.lt) goto loc_82321594;
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82321214
	if (!ctx.cr6.gt) goto loc_82321214;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// bgt cr6,0x82321214
	if (ctx.cr6.gt) goto loc_82321214;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x82321230
	if (ctx.cr6.gt) goto loc_82321230;
	// mr r28,r22
	r28.u64 = r22.u64;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// beq cr6,0x82321190
	if (ctx.cr6.eq) goto loc_82321190;
	// bl 0x826a1b88
	ctx.lr = 0x82321154;
	sub_826A1B88(ctx, base);
	// subf r10,r30,r29
	ctx.r10.u64 = r29.u64 - r30.u64;
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// divw r9,r3,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r3.s32 / ctx.r10.s32 : 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// b 0x8232119c
	goto loc_8232119C;
loc_82321190:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
loc_8232119C:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x82321230
	if (ctx.cr6.gt) goto loc_82321230;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// beq cr6,0x823211f8
	if (ctx.cr6.eq) goto loc_823211F8;
	// bl 0x826a1b88
	ctx.lr = 0x823211C0;
	sub_826A1B88(ctx, base);
	// subf r10,r30,r29
	ctx.r10.u64 = r29.u64 - r30.u64;
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r9,r3,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r3.s32 / ctx.r10.s32 : 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// b 0x82321204
	goto loc_82321204;
loc_823211F8:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
loc_82321204:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// b 0x82321230
	goto loc_82321230;
loc_82321214:
	// rlwinm. r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8232122c
	if (!ctx.cr0.eq) goto loc_8232122C;
	// ori r11,r10,256
	ctx.r11.u64 = ctx.r10.u64 | 256;
	// mr r28,r22
	r28.u64 = r22.u64;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// b 0x82321230
	goto loc_82321230;
loc_8232122C:
	// mr r28,r24
	r28.u64 = r24.u64;
loc_82321230:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823212cc
	if (ctx.cr0.eq) goto loc_823212CC;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x82321290
	if (!ctx.cr6.gt) goto loc_82321290;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82321280
	if (!ctx.cr6.eq) goto loc_82321280;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82321290
	if (ctx.cr6.lt) goto loc_82321290;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// b 0x82321290
	goto loc_82321290;
loc_82321280:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ctx.r9.u64;
loc_82321290:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823212cc
	if (ctx.cr0.eq) goto loc_823212CC;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r9,r31,128
	ctx.r9.s64 = r31.s64 + 128;
	// b 0x823212c4
	goto loc_823212C4;
loc_823212A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823212b4
	if (!ctx.cr6.eq) goto loc_823212B4;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_823212B4:
	// lwz r10,36(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823212d4
	if (ctx.cr0.eq) goto loc_823212D4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_823212C4:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823212a4
	if (!ctx.cr6.eq) goto loc_823212A4;
loc_823212CC:
	// mr r31,r24
	r31.u64 = r24.u64;
	// b 0x82321420
	goto loc_82321420;
loc_823212D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823212e4
	if (!ctx.cr6.eq) goto loc_823212E4;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_823212E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823212cc
	if (ctx.cr6.eq) goto loc_823212CC;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r24,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r24.u8);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r25,r22
	r25.u64 = r22.u64;
	// stw r11,140(r30)
	REX_STORE_U32(r30.u32 + 140, ctx.r11.u32);
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// bl 0x822fe938
	ctx.lr = 0x82321310;
	sub_822FE938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82321348
	if (!ctx.cr0.eq) goto loc_82321348;
	// lbz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82321420
	if (!ctx.cr0.eq) goto loc_82321420;
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// mr r31,r30
	r31.u64 = r30.u64;
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r10.u32);
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// b 0x82321420
	goto loc_82321420;
loc_82321348:
	// cmpwi cr6,r3,56
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 56, ctx.xer);
	// beq cr6,0x8232137c
	if (ctx.cr6.eq) goto loc_8232137C;
	// cmpwi cr6,r3,21
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 21, ctx.xer);
	// beq cr6,0x8232137c
	if (ctx.cr6.eq) goto loc_8232137C;
	// cmpwi cr6,r3,79
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 79, ctx.xer);
	// bne cr6,0x823217e4
	if (!ctx.cr6.eq) goto loc_823217E4;
	// lwz r10,60(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 60);
	// stfs f31,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm r9,r9,0,24,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r10,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// b 0x823213cc
	goto loc_823213CC;
loc_8232137C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stfs f31,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// b 0x82321420
	goto loc_82321420;
loc_82321390:
	// rlwinm. r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82321420
	if (!ctx.cr0.eq) goto loc_82321420;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r25,r22
	r25.u64 = r22.u64;
	// bl 0x822fe938
	ctx.lr = 0x823213B0;
	sub_822FE938(ctx, base);
	// cmpwi cr6,r3,56
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 56, ctx.xer);
	// beq cr6,0x823213c0
	if (ctx.cr6.eq) goto loc_823213C0;
	// cmpwi cr6,r3,21
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 21, ctx.xer);
	// bne cr6,0x823213c4
	if (!ctx.cr6.eq) goto loc_823213C4;
loc_823213C0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_823213C4:
	// cmpwi cr6,r3,79
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 79, ctx.xer);
	// bne cr6,0x823213fc
	if (!ctx.cr6.eq) goto loc_823213FC;
loc_823213CC:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// add r11,r23,r11
	ctx.r11.u64 = r23.u64 + ctx.r11.u64;
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
	// lwz r11,-10820(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -10820);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82321420
	if (ctx.cr0.eq) goto loc_82321420;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// b 0x82321420
	goto loc_82321420;
loc_823213FC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82321420
	if (ctx.cr6.eq) goto loc_82321420;
	// b 0x823217e4
	goto loc_823217E4;
loc_82321408:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r25,r22
	r25.u64 = r22.u64;
	// stw r10,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r10.u32);
	// lfs f0,7272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 7272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
loc_82321420:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82321594
	if (ctx.cr6.eq) goto loc_82321594;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82321594
	if (ctx.cr6.eq) goto loc_82321594;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8231f810
	ctx.lr = 0x82321444;
	sub_8231F810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823217e4
	if (!ctx.cr0.eq) goto loc_823217E4;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x8233eac0
	ctx.lr = 0x82321458;
	sub_8233EAC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82321468
	if (ctx.cr0.eq) goto loc_82321468;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x823217e4
	if (!ctx.cr6.eq) goto loc_823217E4;
loc_82321468:
	// lbz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82321594
	if (ctx.cr0.eq) goto loc_82321594;
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82321578
	if (ctx.cr0.eq) goto loc_82321578;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82311998
	ctx.lr = 0x82321488;
	sub_82311998(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823214e0
	if (ctx.cr0.eq) goto loc_823214E0;
	// ld r30,104(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(r30.u64, 0, ctx.xer);
	// beq cr6,0x823214e0
	if (ctx.cr6.eq) goto loc_823214E0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823107a0
	ctx.lr = 0x823214AC;
	sub_823107A0(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// li r4,1
	ctx.r4.s64 = 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8233ec00
	ctx.lr = 0x823214CC;
	sub_8233EC00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823217e4
	if (!ctx.cr0.eq) goto loc_823217E4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// b 0x82321578
	goto loc_82321578;
loc_823214E0:
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// bl 0x822f7a58
	ctx.lr = 0x823214E8;
	sub_822F7A58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82321578
	if (ctx.cr0.eq) goto loc_82321578;
	// lwz r11,-10820(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -10820);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8232fbb0
	ctx.lr = 0x82321504;
	sub_8232FBB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823217e4
	if (!ctx.cr0.eq) goto loc_823217E4;
	// lwz r11,-10820(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -10820);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8232f290
	ctx.lr = 0x82321520;
	sub_8232F290(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823217e4
	if (!ctx.cr0.eq) goto loc_823217E4;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// ld r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823107a0
	ctx.lr = 0x8232154C;
	sub_823107A0(ctx, base);
	// ld r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8233ec00
	ctx.lr = 0x82321570;
	sub_8233EC00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823217e4
	if (!ctx.cr0.eq) goto loc_823217E4;
loc_82321578:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x8233ea78
	ctx.lr = 0x82321584;
	sub_8233EA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82321594
	if (ctx.cr0.eq) goto loc_82321594;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x823217e4
	if (!ctx.cr6.eq) goto loc_823217E4;
loc_82321594:
	// lwz r29,16(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82321754
	if (ctx.cr0.eq) goto loc_82321754;
	// lwz r28,128(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 128);
	// addi r27,r29,128
	r27.s64 = r29.s64 + 128;
	// b 0x8232174c
	goto loc_8232174C;
loc_823215B0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// addi r31,r28,-4
	r31.s64 = r28.s64 + -4;
	// bne cr6,0x823215c0
	if (!ctx.cr6.eq) goto loc_823215C0;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_823215C0:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82321748
	if (ctx.cr0.eq) goto loc_82321748;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82321668
	if (!ctx.cr6.eq) goto loc_82321668;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x822fe938
	ctx.lr = 0x823215F0;
	sub_822FE938(ctx, base);
	// cmpwi cr6,r3,56
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 56, ctx.xer);
	// beq cr6,0x82321600
	if (ctx.cr6.eq) goto loc_82321600;
	// cmpwi cr6,r3,21
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 21, ctx.xer);
	// bne cr6,0x82321604
	if (!ctx.cr6.eq) goto loc_82321604;
loc_82321600:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82321604:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82321614
	if (ctx.cr6.eq) goto loc_82321614;
	// cmpwi cr6,r3,79
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 79, ctx.xer);
	// bne cr6,0x823217e4
	if (!ctx.cr6.eq) goto loc_823217E4;
loc_82321614:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82321744
	if (ctx.cr6.eq) goto loc_82321744;
	// addi r4,r1,83
	ctx.r4.s64 = ctx.r1.s64 + 83;
	// lwz r3,52(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 52);
	// bl 0x8233eac0
	ctx.lr = 0x8232162C;
	sub_8233EAC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8232163c
	if (ctx.cr0.eq) goto loc_8232163C;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x823217e4
	if (!ctx.cr6.eq) goto loc_823217E4;
loc_8232163C:
	// lbz r11,83(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82321744
	if (ctx.cr0.eq) goto loc_82321744;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x8233ea78
	ctx.lr = 0x82321654;
	sub_8233EA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82321744
	if (ctx.cr0.eq) goto loc_82321744;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x823217e4
	if (!ctx.cr6.eq) goto loc_823217E4;
	// b 0x82321744
	goto loc_82321744;
loc_82321668:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8231f810
	ctx.lr = 0x82321674;
	sub_8231F810(ctx, base);
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82321698
	if (ctx.cr6.eq) goto loc_82321698;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x82321698
	if (ctx.cr6.eq) goto loc_82321698;
	// cmpwi cr6,r3,37
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 37, ctx.xer);
	// beq cr6,0x82321698
	if (ctx.cr6.eq) goto loc_82321698;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823217e4
	if (!ctx.cr6.eq) goto loc_823217E4;
	// b 0x8232169c
	goto loc_8232169C;
loc_82321698:
	// mr r30,r22
	r30.u64 = r22.u64;
loc_8232169C:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823216dc
	if (!ctx.cr0.eq) goto loc_823216DC;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x8233f250
	ctx.lr = 0x823216B0;
	sub_8233F250(ctx, base);
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x823216cc
	if (ctx.cr6.eq) goto loc_823216CC;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x823216cc
	if (ctx.cr6.eq) goto loc_823216CC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823217e4
	if (!ctx.cr6.eq) goto loc_823217E4;
	// b 0x823216d0
	goto loc_823216D0;
loc_823216CC:
	// stb r24,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r24.u8);
loc_823216D0:
	// lbz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r11,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_823216DC:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82321740
	if (ctx.cr0.eq) goto loc_82321740;
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232171c
	if (ctx.cr6.eq) goto loc_8232171C;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82321704
	if (!ctx.cr6.eq) goto loc_82321704;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82321704:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r6,64(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x822f7c10
	ctx.lr = 0x8232171C;
	sub_822F7C10(ctx, base);
loc_8232171C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// bl 0x82312e10
	ctx.lr = 0x82321730;
	sub_82312E10(ctx, base);
	// lwz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 88);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,88(r29)
	REX_STORE_U32(r29.u32 + 88, ctx.r11.u32);
	// b 0x82321744
	goto loc_82321744;
loc_82321740:
	// mr r19,r22
	r19.u64 = r22.u64;
loc_82321744:
	// mr r25,r22
	r25.u64 = r22.u64;
loc_82321748:
	// lwz r28,0(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_8232174C:
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// bne cr6,0x823215b0
	if (!ctx.cr6.eq) goto loc_823215B0;
loc_82321754:
	// clrlwi r10,r19,24
	ctx.r10.u64 = r19.u32 & 0xFF;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwinm r9,r8,0,14,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stw r9,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r9,96(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// andc r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 & ~r21.u64;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823217f0
	if (ctx.cr0.eq) goto loc_823217F0;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823217f0
	if (!ctx.cr0.eq) goto loc_823217F0;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823217f0
	if (!ctx.cr0.eq) goto loc_823217F0;
	// clrlwi. r11,r20,24
	ctx.r11.u64 = r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823217f0
	if (ctx.cr0.eq) goto loc_823217F0;
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823217E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823217E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823217E4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
loc_823217F0:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823217e0
	if (ctx.cr0.eq) goto loc_823217E0;
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82321818;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// li r3,88
	ctx.r3.s64 = 88;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// b 0x823217e4
	goto loc_823217E4;
}

DEFINE_REX_FUNC(sub_82373338) {
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
	// blt cr6,0x8237338c
	if (ctx.cr6.lt) goto loc_8237338C;
	// bne cr6,0x823733ac
	if (!ctx.cr6.eq) goto loc_823733AC;
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
	ctx.lr = 0x82373378;
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
loc_8237338C:
	// lfs f0,324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,324(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,11508
	ctx.r4.s64 = ctx.r10.s64 + 11508;
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x823733AC;
	sub_826A0568(ctx, base);
loc_823733AC:
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

DEFINE_REX_FUNC(sub_82377270) {
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
	ctx.lr = 0x82377278;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// mr r28,r30
	r28.u64 = r30.u64;
	// bl 0x82340ff0
	ctx.lr = 0x82377294;
	sub_82340FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823773ec
	if (!ctx.cr6.eq) goto loc_823773EC;
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// stw r30,18620(r11)
	REX_STORE_U32(ctx.r11.u32 + 18620, r30.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r30,272(r10)
	REX_STORE_U32(ctx.r10.u32 + 272, r30.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r8,268(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 268);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x823773cc
	if (!ctx.cr6.gt) goto loc_823773CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r30
	r29.u64 = r30.u64;
	// lis r26,-32129
	r26.s64 = -2105606144;
	// addi r27,r11,18104
	r27.s64 = ctx.r11.s64 + 18104;
loc_823772CC:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82340718
	ctx.lr = 0x823772E4;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823773cc
	if (!ctx.cr6.eq) goto loc_823773CC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c1728
	ctx.lr = 0x82377304;
	sub_823C1728(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823773f4
	if (!ctx.cr6.eq) goto loc_823773F4;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + r30.u64;
	// lwz r8,268(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 268);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x823773f4
	if (!ctx.cr6.lt) goto loc_823773F4;
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r10,18620(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 18620);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82377384
	if (ctx.cr6.lt) goto loc_82377384;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,400
	ctx.r7.s64 = 400;
	// lwz r10,18620(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 18620);
	// addi r10,r10,1000
	ctx.r10.s64 = ctx.r10.s64 + 1000;
	// stw r10,18620(r11)
	REX_STORE_U32(ctx.r11.u32 + 18620, ctx.r10.u32);
	// lwz r9,264(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// lwz r4,18624(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 18624);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,18620(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 18620);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82330e48
	ctx.lr = 0x8237736C;
	sub_82330E48(ctx, base);
	// lwz r4,264(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 264);
	// stw r3,18624(r4)
	REX_STORE_U32(ctx.r4.u32 + 18624, ctx.r3.u32);
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r11,18624(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 18624);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82377418
	if (ctx.cr6.eq) goto loc_82377418;
loc_82377384:
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,18624(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 18624);
	// stwx r30,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, r30.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r10,280(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 280);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r9,272(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r9.u32);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r4,r30
	ctx.r11.u64 = ctx.r4.u64 + r30.u64;
	// addi r30,r11,4
	r30.s64 = ctx.r11.s64 + 4;
	// bl 0x82340e38
	ctx.lr = 0x823773C4;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82377404
	if (ctx.cr6.eq) goto loc_82377404;
loc_823773CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82340e38
	ctx.lr = 0x823773DC;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823773ec
	if (!ctx.cr6.eq) goto loc_823773EC;
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// stw r28,18620(r11)
	REX_STORE_U32(ctx.r11.u32 + 18620, r28.u32);
loc_823773EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
loc_823773F4:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x82340e38
	ctx.lr = 0x82377404;
	sub_82340E38(ctx, base);
loc_82377404:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,268(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823772cc
	if (ctx.cr6.lt) goto loc_823772CC;
	// b 0x823773cc
	goto loc_823773CC;
loc_82377418:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8238DD18) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8238dd28
	if (!ctx.cr6.eq) goto loc_8238DD28;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8238DD28:
	// b 0x8238da20
	sub_8238DA20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8238F578) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8238f588
	if (!ctx.cr6.eq) goto loc_8238F588;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8238F588:
	// b 0x8238e198
	sub_8238E198(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8238F8E8) {
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
	ctx.lr = 0x8238F8F0;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ca8
	ctx.lr = 0x8238F8F8;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,2184(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2184);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r6,788(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 788);
	// li r23,0
	r23.s64 = 0;
	// add r7,r9,r3
	ctx.r7.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r8,520(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 520);
	// lwz r10,2180(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2180);
	// mr r17,r23
	r17.u64 = r23.u64;
	// mullw r11,r6,r10
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lbz r5,532(r7)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 532);
	// rotlwi r7,r5,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add. r24,r8,r11
	r24.u64 = ctx.r8.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq 0x82390190
	if (ctx.cr0.eq) goto loc_82390190;
	// lwz r11,528(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238f984
	if (ctx.cr6.eq) goto loc_8238F984;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238f97c
	if (ctx.cr6.eq) goto loc_8238F97C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,2165(r30)
	REX_STORE_U8(r30.u32 + 2165, ctx.r11.u8);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cf4
	ctx.lr = 0x8238F978;
	// b 0x826a1cd0
	return;
loc_8238F97C:
	// li r9,1
	ctx.r9.s64 = 1;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
loc_8238F984:
	// lwz r11,788(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 788);
	// mr r22,r23
	r22.u64 = r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82390190
	if (!ctx.cr6.gt) goto loc_82390190;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,218
	ctx.r6.s64 = 14286848;
	// lfs f28,15200(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15200);
	f28.f64 = double(temp.f32);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lfs f29,19036(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 19036);
	f29.f64 = double(temp.f32);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// lfs f30,3720(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3720);
	f30.f64 = double(temp.f32);
	// lfs f31,19092(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 19092);
	f31.f64 = double(temp.f32);
	// clrlwi r14,r4,24
	r14.u64 = ctx.r4.u32 & 0xFF;
	// li r15,8
	r15.s64 = 8;
	// li r16,64
	r16.s64 = 64;
	// ori r18,r6,30208
	r18.u64 = ctx.r6.u64 | 30208;
	// addi r20,r11,30952
	r20.s64 = ctx.r11.s64 + 30952;
	// addi r19,r10,32064
	r19.s64 = ctx.r10.s64 + 32064;
	// addi r21,r9,32120
	r21.s64 = ctx.r9.s64 + 32120;
loc_8238F9E0:
	// addi r11,r22,198
	ctx.r11.s64 = r22.s64 + 198;
	// lbz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U8(r24.u32 + 4);
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r10,28,4,31
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r29,r10,28
	r29.u64 = ctx.r10.u32 & 0xF;
	// lwzx r31,r9,r30
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8238fa18
	if (!ctx.cr6.eq) goto loc_8238FA18;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x8238fa1c
	if (ctx.cr6.eq) goto loc_8238FA1C;
loc_8238FA18:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_8238FA1C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238fa30
	if (ctx.cr6.eq) goto loc_8238FA30;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// stw r19,448(r21)
	REX_STORE_U32(r21.u32 + 448, r19.u32);
loc_8238FA30:
	// lbz r10,1(r24)
	ctx.r10.u64 = REX_LOAD_U8(r24.u32 + 1);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238fa4c
	if (ctx.cr6.eq) goto loc_8238FA4C;
	// addi r11,r10,255
	ctx.r11.s64 = ctx.r10.s64 + 255;
	// stb r11,592(r31)
	REX_STORE_U8(r31.u32 + 592, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8238FA4C:
	// lbz r10,592(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 592);
	// lwz r9,1424(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1424);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8238fa6c
	if (!ctx.cr6.lt) goto loc_8238FA6C;
	// mulli r10,r10,52
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(52));
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r25,r10,2204
	r25.s64 = ctx.r10.s64 + 2204;
	// b 0x8238fa70
	goto loc_8238FA70;
loc_8238FA6C:
	// mr r25,r19
	r25.u64 = r19.u64;
loc_8238FA70:
	// lbz r10,600(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 600);
	// lwz r28,464(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r27,468(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x8238faa0
	if (!ctx.cr6.eq) goto loc_8238FAA0;
	// lbz r9,3(r24)
	ctx.r9.u64 = REX_LOAD_U8(r24.u32 + 3);
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// beq cr6,0x8238faa0
	if (ctx.cr6.eq) goto loc_8238FAA0;
	// lwz r9,476(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 476);
	// rotlwi r10,r27,0
	ctx.r10.u64 = __builtin_rotateleft32(r27.u32, 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, ctx.r10.u32);
loc_8238FAA0:
	// lbz r11,3(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 3);
	// stb r11,600(r31)
	REX_STORE_U8(r31.u32 + 600, ctx.r11.u8);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r23,476(r10)
	REX_STORE_U32(ctx.r10.u32 + 476, r23.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r23,460(r9)
	REX_STORE_U8(ctx.r9.u32 + 460, r23.u8);
	// lbz r7,0(r24)
	ctx.r7.u64 = REX_LOAD_U8(r24.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8238fb88
	if (ctx.cr6.eq) goto loc_8238FB88;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r21
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r21.u32, ctx.xer);
	// bne cr6,0x8238fb04
	if (!ctx.cr6.eq) goto loc_8238FB04;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823c84a0
	ctx.lr = 0x8238FAF4;
	sub_823C84A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238fb04
	if (ctx.cr6.eq) goto loc_8238FB04;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// stw r19,448(r21)
	REX_STORE_U32(r21.u32 + 448, r19.u32);
loc_8238FB04:
	// lbz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U8(r24.u32 + 0);
	// add r9,r22,r30
	ctx.r9.u64 = r22.u64 + r30.u64;
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r8,r11,r20
	ctx.r8.u64 = ctx.r11.u64 + r20.u64;
	// stb r10,593(r31)
	REX_STORE_U8(r31.u32 + 593, ctx.r10.u8);
	// lwz r6,-4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// mulli r5,r6,8363
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(8363));
	// lwz r7,4(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 4);
	// divwu r4,r5,r7
	ctx.r4.u64 = uint32_t(ctx.r7.u32 ? ctx.r5.u32 / ctx.r7.u32 : 0);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r4,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r4.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r3,1276(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 1276);
	// stw r3,472(r11)
	REX_STORE_U32(ctx.r11.u32 + 472, ctx.r3.u32);
	// lbz r11,678(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 678);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x8238fb50
	if (!ctx.cr6.lt) goto loc_8238FB50;
	// stb r23,646(r31)
	REX_STORE_U8(r31.u32 + 646, r23.u8);
loc_8238FB50:
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x8238fb60
	if (!ctx.cr6.lt) goto loc_8238FB60;
	// stb r23,650(r31)
	REX_STORE_U8(r31.u32 + 650, r23.u8);
loc_8238FB60:
	// lbz r11,3(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 3);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8238fb80
	if (ctx.cr6.eq) goto loc_8238FB80;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x8238fb80
	if (ctx.cr6.eq) goto loc_8238FB80;
	// lwz r11,596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 596);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,464(r10)
	REX_STORE_U32(ctx.r10.u32 + 464, ctx.r11.u32);
loc_8238FB80:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r15,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, r15.u8);
loc_8238FB88:
	// lbz r10,1(r24)
	ctx.r10.u64 = REX_LOAD_U8(r24.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238fba0
	if (ctx.cr6.eq) goto loc_8238FBA0;
	// lbz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 8);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,468(r10)
	REX_STORE_U32(ctx.r10.u32 + 468, ctx.r11.u32);
loc_8238FBA0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r23,480(r11)
	REX_STORE_U32(ctx.r11.u32 + 480, r23.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,7
	ctx.r9.u64 = ctx.r10.u64 | 7;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// lbz r11,3(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 3);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x82390008
	if (ctx.cr6.gt) goto loc_82390008;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-1056
	ctx.r12.s64 = ctx.r12.s64 + -1056;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8238FC24;
	case 1:
		goto loc_8238FC64;
	case 2:
		goto loc_8238FC34;
	case 3:
		goto loc_82390008;
	case 4:
		goto loc_8238FC88;
	case 5:
		goto loc_8238FCC0;
	case 6:
		goto loc_8238FCE4;
	case 7:
		goto loc_82390008;
	case 8:
		goto loc_8238FD2C;
	case 9:
		goto loc_8238FC14;
	case 10:
		goto loc_8238FD54;
	case 11:
		goto loc_8238FDD4;
	case 12:
		goto loc_8238FDAC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8238FC14:
	// lbz r9,4(r24)
	ctx.r9.u64 = REX_LOAD_U8(r24.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,468(r10)
	REX_STORE_U32(ctx.r10.u32 + 468, ctx.r9.u32);
	// b 0x82390008
	goto loc_82390008;
loc_8238FC24:
	// lbz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238fc34
	if (ctx.cr6.eq) goto loc_8238FC34;
	// stb r11,644(r31)
	REX_STORE_U8(r31.u32 + 644, ctx.r11.u8);
loc_8238FC34:
	// lwz r11,596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 596);
	// stw r11,640(r31)
	REX_STORE_U32(r31.u32 + 640, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
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
	// b 0x82390008
	goto loc_82390008;
loc_8238FC64:
	// clrlwi r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238fc74
	if (ctx.cr6.eq) goto loc_8238FC74;
	// stb r26,647(r31)
	REX_STORE_U8(r31.u32 + 647, r26.u8);
loc_8238FC74:
	// clrlwi r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390008
	if (ctx.cr6.eq) goto loc_82390008;
	// stb r29,648(r31)
	REX_STORE_U8(r31.u32 + 648, r29.u8);
	// b 0x82390008
	goto loc_82390008;
loc_8238FC88:
	// clrlwi r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238fc98
	if (ctx.cr6.eq) goto loc_8238FC98;
	// stb r26,651(r31)
	REX_STORE_U8(r31.u32 + 651, r26.u8);
loc_8238FC98:
	// clrlwi r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238fca8
	if (ctx.cr6.eq) goto loc_8238FCA8;
	// stb r29,652(r31)
	REX_STORE_U8(r31.u32 + 652, r29.u8);
loc_8238FCA8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// b 0x82390008
	goto loc_82390008;
loc_8238FCC0:
	// lbz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// stw r9,472(r10)
	REX_STORE_U32(ctx.r10.u32 + 472, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r8,460(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r7,r8,4
	ctx.r7.u64 = ctx.r8.u64 | 4;
	// stb r7,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r7.u8);
	// b 0x82390008
	goto loc_82390008;
loc_8238FCE4:
	// lbz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238fcf4
	if (ctx.cr6.eq) goto loc_8238FCF4;
	// stw r11,616(r31)
	REX_STORE_U32(r31.u32 + 616, ctx.r11.u32);
loc_8238FCF4:
	// lwz r11,616(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 616);
	// lwz r9,16(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 16);
	// lwz r10,12(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 12);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8238fd20
	if (ctx.cr6.lt) goto loc_8238FD20;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,488(r11)
	REX_STORE_U32(ctx.r11.u32 + 488, ctx.r10.u32);
	// b 0x82390008
	goto loc_82390008;
loc_8238FD20:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,488(r10)
	REX_STORE_U32(ctx.r10.u32 + 488, ctx.r11.u32);
	// b 0x82390008
	goto loc_82390008;
loc_8238FD2C:
	// lbz r9,4(r24)
	ctx.r9.u64 = REX_LOAD_U8(r24.u32 + 4);
	// lwz r10,1408(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1408);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r23,2196(r30)
	REX_STORE_U32(r30.u32 + 2196, r23.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// stw r9,2200(r30)
	REX_STORE_U32(r30.u32 + 2200, ctx.r9.u32);
	// blt cr6,0x8238fd4c
	if (ctx.cr6.lt) goto loc_8238FD4C;
	// stw r23,2200(r30)
	REX_STORE_U32(r30.u32 + 2200, r23.u32);
loc_8238FD4C:
	// li r17,1
	r17.s64 = 1;
	// b 0x82390008
	goto loc_82390008;
loc_8238FD54:
	// rlwinm r11,r26,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0x3FC;
	// clrlwi r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	// clrlwi r9,r29,24
	ctx.r9.u64 = r29.u32 & 0xFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,2196(r30)
	REX_STORE_U32(r30.u32 + 2196, ctx.r11.u32);
	// cmpwi cr6,r11,63
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 63, ctx.xer);
	// ble cr6,0x8238fd7c
	if (!ctx.cr6.gt) goto loc_8238FD7C;
	// stw r23,2196(r30)
	REX_STORE_U32(r30.u32 + 2196, r23.u32);
loc_8238FD7C:
	// clrlwi r11,r17,24
	ctx.r11.u64 = r17.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238fd94
	if (!ctx.cr6.eq) goto loc_8238FD94;
	// lwz r11,2184(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2184);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2200(r30)
	REX_STORE_U32(r30.u32 + 2200, ctx.r11.u32);
loc_8238FD94:
	// lwz r11,1408(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1408);
	// lwz r10,2200(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 2200);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82390008
	if (ctx.cr6.lt) goto loc_82390008;
	// stw r23,2200(r30)
	REX_STORE_U32(r30.u32 + 2200, r23.u32);
	// b 0x82390008
	goto loc_82390008;
loc_8238FDAC:
	// lbz r4,4(r24)
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + 4);
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// bge cr6,0x8238fdc8
	if (!ctx.cr6.lt) goto loc_8238FDC8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82390008
	if (ctx.cr6.eq) goto loc_82390008;
	// stw r4,2172(r30)
	REX_STORE_U32(r30.u32 + 2172, ctx.r4.u32);
	// b 0x82390008
	goto loc_82390008;
loc_8238FDC8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823c8638
	ctx.lr = 0x8238FDD0;
	sub_823C8638(ctx, base);
	// b 0x82390008
	goto loc_82390008;
loc_8238FDD4:
	// clrlwi r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82390008
	if (ctx.cr6.gt) goto loc_82390008;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-516
	ctx.r12.s64 = ctx.r12.s64 + -516;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8238FE34;
	case 1:
		goto loc_8238FE4C;
	case 2:
		goto loc_82390008;
	case 3:
		goto loc_8238FE64;
	case 4:
		goto loc_8238FE7C;
	case 5:
		goto loc_8238FE90;
	case 6:
		goto loc_8238FF1C;
	case 7:
		goto loc_8238FF2C;
	case 8:
		goto loc_82390008;
	case 9:
		goto loc_8238FF4C;
	case 10:
		goto loc_8238FF78;
	case 11:
		goto loc_82390008;
	case 12:
		goto loc_8238FFA4;
	case 13:
		goto loc_8238FFF8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8238FE34:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r29,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x3FC;
	// lwz r9,464(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r8,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r8.u32);
	// b 0x82390008
	goto loc_82390008;
loc_8238FE4C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r29,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x3FC;
	// lwz r9,464(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r10.u32);
	// b 0x82390008
	goto loc_82390008;
loc_8238FE64:
	// lbz r11,678(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 678);
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// rlwinm r9,r11,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stb r8,678(r31)
	REX_STORE_U8(r31.u32 + 678, ctx.r8.u8);
	// b 0x82390008
	goto loc_82390008;
loc_8238FE7C:
	// addi r5,r25,4
	ctx.r5.s64 = r25.s64 + 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823c8940
	ctx.lr = 0x8238FE8C;
	sub_823C8940(ctx, base);
	// b 0x82390008
	goto loc_82390008;
loc_8238FE90:
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238fea8
	if (!ctx.cr6.eq) goto loc_8238FEA8;
	// lwz r11,2180(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2180);
	// stw r11,668(r31)
	REX_STORE_U32(r31.u32 + 668, ctx.r11.u32);
	// b 0x82390008
	goto loc_82390008;
loc_8238FEA8:
	// lwz r11,672(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 672);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238febc
	if (!ctx.cr6.eq) goto loc_8238FEBC;
	// stw r10,672(r31)
	REX_STORE_U32(r31.u32 + 672, ctx.r10.u32);
	// b 0x8238fec4
	goto loc_8238FEC4;
loc_8238FEBC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,672(r31)
	REX_STORE_U32(r31.u32 + 672, ctx.r11.u32);
loc_8238FEC4:
	// lwz r11,672(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 672);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82390008
	if (ctx.cr6.eq) goto loc_82390008;
	// lwz r11,668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 668);
	// lwz r10,528(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 528);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,2196(r30)
	REX_STORE_U32(r30.u32 + 2196, ctx.r11.u32);
	// beq cr6,0x82390008
	if (ctx.cr6.eq) goto loc_82390008;
	// lwz r11,668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 668);
	// lwz r10,2180(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 2180);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82390008
	if (ctx.cr6.gt) goto loc_82390008;
loc_8238FEF4:
	// lwz r10,2184(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 2184);
	// lwz r9,528(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 528);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stbx r23,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, r23.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,2180(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 2180);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8238fef4
	if (!ctx.cr6.gt) goto loc_8238FEF4;
	// b 0x82390008
	goto loc_82390008;
loc_8238FF1C:
	// lbz r11,678(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 678);
	// rlwimi r11,r29,4,20,27
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFF0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF00F);
	// stb r11,678(r31)
	REX_STORE_U8(r31.u32 + 678, ctx.r11.u8);
	// b 0x82390008
	goto loc_82390008;
loc_8238FF2C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r29,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFF0;
	// stw r10,472(r11)
	REX_STORE_U32(ctx.r11.u32 + 472, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r9,460(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// stb r8,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r8.u8);
	// b 0x82390008
	goto loc_82390008;
loc_8238FF4C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
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
	// ble cr6,0x82390008
	if (!ctx.cr6.gt) goto loc_82390008;
	// stw r16,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, r16.u32);
	// b 0x82390008
	goto loc_82390008;
loc_8238FF78:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// lwz r9,468(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r8,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, ctx.r8.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,468(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x82390008
	if (!ctx.cr6.lt) goto loc_82390008;
	// stw r23,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, r23.u32);
	// b 0x82390008
	goto loc_82390008;
loc_8238FFA4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, r27.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,464(r10)
	REX_STORE_U32(ctx.r10.u32 + 464, r28.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r9,460(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r8,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r8.u8);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r23,460(r7)
	REX_STORE_U8(ctx.r7.u32 + 460, r23.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r6,460(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r5,r5,0,31,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r5,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r5.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r4,460(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r3,r3,0,29,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stb r3,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r3.u8);
	// b 0x82390008
	goto loc_82390008;
loc_8238FFF8:
	// lwz r11,2172(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2172);
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r9,2188(r30)
	REX_STORE_U32(r30.u32 + 2188, ctx.r9.u32);
loc_82390008:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x8239017c
	if (ctx.cr6.eq) goto loc_8239017C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,464(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r10,480(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 480);
	// add. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82390038
	if (!ctx.cr0.eq) goto loc_82390038;
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82390038:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82390064
	if (ctx.cr6.eq) goto loc_82390064;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823c8798
	ctx.lr = 0x82390060;
	sub_823C8798(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82390064:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823900b4
	if (ctx.cr6.eq) goto loc_823900B4;
	// lwz r10,476(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 476);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// lwz r9,468(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// lfs f0,624(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 624);
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
	ctx.lr = 0x823900B0;
	sub_8234BBC8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823900B4:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823900fc
	if (ctx.cr6.eq) goto loc_823900FC;
	// lwz r10,472(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 472);
	// lfs f0,2148(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 2148);
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
	ctx.lr = 0x823900F8;
	sub_8234BE00(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823900FC:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8239014c
	if (ctx.cr6.eq) goto loc_8239014C;
	// lwz r10,480(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 480);
	// lwz r9,464(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x82390124
	if (!ctx.cr6.lt) goto loc_82390124;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82390124:
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r10,r18,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(r18.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? r18.s32 / ctx.r10.s32 : 0);
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
	ctx.lr = 0x82390148;
	sub_8234E480(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8239014C:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8239017c
	if (ctx.cr6.eq) goto loc_8239017C;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8234f290
	ctx.lr = 0x82390168;
	sub_8234F290(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x82334ca0
	ctx.lr = 0x82390174;
	sub_82334CA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r23,488(r11)
	REX_STORE_U32(ctx.r11.u32 + 488, r23.u32);
loc_8239017C:
	// lwz r11,788(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 788);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r24,r24,5
	r24.s64 = r24.s64 + 5;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8238f9e0
	if (ctx.cr6.lt) goto loc_8238F9E0;
loc_82390190:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cf4
	ctx.lr = 0x823901A0;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_823D2FD0) {
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
	ctx.lr = 0x823D2FD8;
	// rlwinm r9,r5,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f12,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lfs f11,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f10,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
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
	// lfs f6,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// stfs f12,-72(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// stfs f11,-68(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// stfs f10,-64(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f9,-92(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// stfs f8,-88(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// stfs f7,-84(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// stfs f6,-76(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// stfs f5,-60(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f4,-56(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f3,-52(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// beq cr6,0x823d30f4
	if (ctx.cr6.eq) goto loc_823D30F4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// addi r28,r1,-80
	r28.s64 = ctx.r1.s64 + -80;
	// addi r27,r1,-64
	r27.s64 = ctx.r1.s64 + -64;
	// subf r29,r4,r3
	r29.u64 = ctx.r3.u64 - ctx.r4.u64;
	// li r30,16
	r30.s64 = 16;
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r29,r4
	r31.u64 = r29.u64 + ctx.r4.u64;
	// lvx128 v13,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,32
	ctx.r3.s64 = 32;
	// lvx128 v12,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,48
	ctx.r4.s64 = 48;
	// li r8,64
	ctx.r8.s64 = 64;
	// li r9,80
	ctx.r9.s64 = 80;
loc_823D3084:
	// lvx128 v11,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v11,v0,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// lvx128 v10,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r31,r30
	ea = (r31.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v11,v13,v10
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// stvx128 v11,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v11,v12,v9
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// stvx128 v11,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v10,v11,v0,v8
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// lvx128 v11,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v10,v10,v13,v11
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v11,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v10,v12,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// stvx128 v11,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// add r31,r29,r11
	r31.u64 = r29.u64 + ctx.r11.u64;
	// bdnz 0x823d3084
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D3084;
loc_823D30F4:
	// clrlwi r9,r5,30
	ctx.r9.u64 = ctx.r5.u32 & 0x3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823d3190
	if (ctx.cr6.eq) goto loc_823D3190;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_823D3110:
	// lfs f0,-8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f13,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f11,4(r8)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f10,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f4,-4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f9,f10
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f9.f64, ctx.f10.f64)));
	// stfs f3,8(r8)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfsx f8,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f2,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f1,f2,f8
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f2.f64, ctx.f8.f64)));
	// lfs f7,16(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// lfs f12,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f12,f13,f7
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f7.f64)));
	// lfs f6,20(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// stfs f11,16(r8)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// lfs f10,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f9,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, ctx.f9.f64, ctx.f6.f64)));
	// lfs f5,24(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// stfs f8,20(r8)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// lfs f7,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// lfs f6,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f6,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f7.f64, ctx.f6.f64, ctx.f5.f64)));
	// stfsu f5,24(r8)
	ea = 24 + ctx.r8.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x823d3110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D3110;
loc_823D3190:
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823E6F68) {
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
	// lfs f13,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lfd f0,32424(r4)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r4.u32 + 32424);
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
loc_823E6FBC:
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
	// lfs f6,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lfs f3,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f10,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// lfs f1,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lfs f10,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// fmsubs f9,f3,f5,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f3.f64, ctx.f5.f64, -ctx.f8.f64)));
	// fmsubs f8,f1,f6,f7
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, ctx.f6.f64, -ctx.f7.f64)));
	// fmadds f7,f1,f12,f4
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, ctx.f12.f64, ctx.f4.f64)));
	// fmadds f6,f3,f11,f2
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f2.f64)));
	// fadds f5,f9,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fsubs f4,f8,f9
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fadds f3,f6,f7
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fsubs f2,f7,f6
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fnmsub f1,f5,f0,f10
	ctx.f1.f64 = -std::fma(ctx.f5.f64, ctx.f0.f64, -ctx.f10.f64);
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
	// bdnz 0x823e6fbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E6FBC;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823ECBB0) {
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
	// bl 0x823ed1d0
	ctx.lr = 0x823ECBC0;
	sub_823ED1D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823ED1C8) {
	REX_FUNC_PROLOGUE();
	// lbz r3,268(r13)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r13.u32 + 268);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823ED270) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x827936b4
	__imp__XamShowGamerCardUIForXUID(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823ED2C0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x823ed32c
	if (!ctx.cr6.eq) goto loc_823ED32C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823ed308
	if (ctx.cr6.eq) goto loc_823ED308;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ed308
	if (ctx.cr6.eq) goto loc_823ED308;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x823eeb10
	ctx.lr = 0x823ED304;
	sub_823EEB10(ctx, base);
	// b 0x823ed30c
	goto loc_823ED30C;
loc_823ED308:
	// li r3,258
	ctx.r3.s64 = 258;
loc_823ED30C:
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// bne cr6,0x823ed31c
	if (!ctx.cr6.eq) goto loc_823ED31C;
	// li r3,996
	ctx.r3.s64 = 996;
	// b 0x823ed340
	goto loc_823ED340;
loc_823ED31C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ed32c
	if (ctx.cr6.eq) goto loc_823ED32C;
	// bl 0x823ee280
	ctx.lr = 0x823ED328;
	sub_823EE280(ctx, base);
	// b 0x823ed340
	goto loc_823ED340;
loc_823ED32C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823ed33c
	if (ctx.cr6.eq) goto loc_823ED33C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_823ED33C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_823ED340:
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

DEFINE_REX_FUNC(sub_823EEDB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823EEDC0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lis r30,-32128
	r30.s64 = -2105540608;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x823eee50
	if (ctx.cr6.lt) goto loc_823EEE50;
	// beq cr6,0x823eee1c
	if (ctx.cr6.eq) goto loc_823EEE1C;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bge cr6,0x823eee1c
	if (!ctx.cr6.lt) goto loc_823EEE1C;
	// lwz r11,-30824(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -30824);
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EEE08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823eeeb0
	if (ctx.cr0.lt) goto loc_823EEEB0;
	// ld r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
loc_823EEE14:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// b 0x823eee54
	goto loc_823EEE54;
loc_823EEE1C:
	// lwz r11,-30824(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -30824);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EEE40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823eeeb0
	if (ctx.cr0.lt) goto loc_823EEEB0;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x823eee14
	goto loc_823EEE14;
loc_823EEE50:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_823EEE54:
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x823eee6c
	if (!ctx.cr6.lt) goto loc_823EEE6C;
	// li r3,131
	ctx.r3.s64 = 131;
	// bl 0x823f0008
	ctx.lr = 0x823EEE68;
	sub_823F0008(ctx, base);
	// b 0x823eeeb4
	goto loc_823EEEB4;
loc_823EEE6C:
	// lwz r11,-30824(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -30824);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EEE90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823eeeb0
	if (ctx.cr0.lt) goto loc_823EEEB0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823eeea8
	if (ctx.cr6.eq) goto loc_823EEEA8;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r28)
	REX_STORE_U64(r28.u32 + 0, ctx.r11.u64);
loc_823EEEA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823eeeb8
	goto loc_823EEEB8;
loc_823EEEB0:
	// bl 0x823f0020
	ctx.lr = 0x823EEEB4;
	sub_823F0020(ctx, base);
loc_823EEEB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EEEB8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823F56A8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823f5090
	ctx.lr = 0x823F56D0;
	sub_823F5090(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,20
	ctx.r6.s64 = 20;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823f5fe8
	ctx.lr = 0x823F56E8;
	sub_823F5FE8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
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

DEFINE_REX_FUNC(sub_823F7838) {
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
	ctx.lr = 0x823F7840;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x826a2e60
	ctx.lr = 0x823F7864;
	sub_826A2E60(ctx, base);
	// li r9,123
	ctx.r9.s64 = 123;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbzx r23,r29,r25
	r23.u64 = REX_LOAD_U8(r29.u32 + r25.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r9,r29,r25
	REX_STORE_U8(r29.u32 + r25.u32, ctx.r9.u8);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r26,r10,12536
	r26.s64 = ctx.r10.s64 + 12536;
	// ble cr6,0x823f7974
	if (!ctx.cr6.gt) goto loc_823F7974;
loc_823F7884:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823f7940
	if (!ctx.cr6.eq) goto loc_823F7940;
loc_823F78A0:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823f78a0
	if (ctx.cr6.eq) goto loc_823F78A0;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x823f7940
	if (ctx.cr6.lt) goto loc_823F7940;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823f78f4
	if (!ctx.cr6.eq) goto loc_823F78F4;
	// cmpwi cr6,r7,51
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 51, ctx.xer);
	// ble cr6,0x823f78cc
	if (!ctx.cr6.gt) goto loc_823F78CC;
	// li r7,51
	ctx.r7.s64 = 51;
loc_823F78CC:
	// cmpwi cr6,r7,19
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 19, ctx.xer);
	// bgt cr6,0x823f78e4
	if (ctx.cr6.gt) goto loc_823F78E4;
	// lhz r10,146(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 146);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,146(r1)
	REX_STORE_U16(ctx.r1.u32 + 146, ctx.r10.u16);
	// b 0x823f7934
	goto loc_823F7934;
loc_823F78E4:
	// lhz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 148);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,148(r1)
	REX_STORE_U16(ctx.r1.u32 + 148, ctx.r10.u16);
	// b 0x823f7934
	goto loc_823F7934;
loc_823F78F4:
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// ble cr6,0x823f7900
	if (!ctx.cr6.gt) goto loc_823F7900;
	// li r7,5
	ctx.r7.s64 = 5;
loc_823F7900:
	// lbzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// addi r8,r26,17
	ctx.r8.s64 = r26.s64 + 17;
	// lbzx r6,r11,r29
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// lbzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sthx r8,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
	// lhz r10,150(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 150);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,150(r1)
	REX_STORE_U16(ctx.r1.u32 + 150, ctx.r10.u16);
loc_823F7934:
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823f7968
	goto loc_823F7968;
loc_823F7940:
	// lbzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// addi r8,r26,17
	ctx.r8.s64 = r26.s64 + 17;
	// lbzx r7,r11,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// lbzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sthx r8,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
loc_823F7968:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r25.s32, ctx.xer);
	// blt cr6,0x823f7884
	if (ctx.cr6.lt) goto loc_823F7884;
loc_823F7974:
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823f9d68
	ctx.lr = 0x823F7990;
	sub_823F9D68(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_823F7994:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x823f6ff8
	ctx.lr = 0x823F79AC;
	sub_823F6FF8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(r31.s32, 20, ctx.xer);
	// blt cr6,0x823f7994
	if (ctx.cr6.lt) goto loc_823F7994;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x823f7af8
	if (!ctx.cr6.gt) goto loc_823F7AF8;
loc_823F79C4:
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// li r30,0
	r30.s64 = 0;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + r29.u64;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + r29.u32);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823f7a38
	if (!ctx.cr6.eq) goto loc_823F7A38;
loc_823F79E0:
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823f79e0
	if (ctx.cr6.eq) goto loc_823F79E0;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x823f7a38
	if (ctx.cr6.lt) goto loc_823F7A38;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f7a24
	if (!ctx.cr6.eq) goto loc_823F7A24;
	// cmpwi cr6,r30,51
	ctx.cr6.compare<int32_t>(r30.s32, 51, ctx.xer);
	// ble cr6,0x823f7a0c
	if (!ctx.cr6.gt) goto loc_823F7A0C;
	// li r30,51
	r30.s64 = 51;
loc_823F7A0C:
	// cmpwi cr6,r30,19
	ctx.cr6.compare<int32_t>(r30.s32, 19, ctx.xer);
	// bgt cr6,0x823f7a1c
	if (ctx.cr6.gt) goto loc_823F7A1C;
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x823f7a48
	goto loc_823F7A48;
loc_823F7A1C:
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x823f7a48
	goto loc_823F7A48;
loc_823F7A24:
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(r30.s32, 5, ctx.xer);
	// ble cr6,0x823f7a30
	if (!ctx.cr6.gt) goto loc_823F7A30;
	// li r30,5
	r30.s64 = 5;
loc_823F7A30:
	// li r11,19
	ctx.r11.s64 = 19;
	// b 0x823f7a48
	goto loc_823F7A48;
loc_823F7A38:
	// lbzx r10,r31,r27
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + r27.u32);
	// addi r9,r26,17
	ctx.r9.s64 = r26.s64 + 17;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lbzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
loc_823F7A48:
	// extsb r28,r11
	r28.s64 = ctx.r11.s8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lbzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// lhzx r5,r10,r9
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x823f6ff8
	ctx.lr = 0x823F7A6C;
	sub_823F6FF8(ctx, base);
	// cmpwi cr6,r28,17
	ctx.cr6.compare<int32_t>(r28.s32, 17, ctx.xer);
	// bne cr6,0x823f7a80
	if (!ctx.cr6.eq) goto loc_823F7A80;
	// addi r5,r30,-4
	ctx.r5.s64 = r30.s64 + -4;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x823f7adc
	goto loc_823F7ADC;
loc_823F7A80:
	// cmpwi cr6,r28,18
	ctx.cr6.compare<int32_t>(r28.s32, 18, ctx.xer);
	// bne cr6,0x823f7a94
	if (!ctx.cr6.eq) goto loc_823F7A94;
	// addi r5,r30,-20
	ctx.r5.s64 = r30.s64 + -20;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x823f7adc
	goto loc_823F7ADC;
loc_823F7A94:
	// cmpwi cr6,r28,19
	ctx.cr6.compare<int32_t>(r28.s32, 19, ctx.xer);
	// bne cr6,0x823f7aec
	if (!ctx.cr6.eq) goto loc_823F7AEC;
	// addi r5,r30,-4
	ctx.r5.s64 = r30.s64 + -4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823f6ff8
	ctx.lr = 0x823F7AAC;
	sub_823F6FF8(ctx, base);
	// lbzx r8,r31,r27
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + r27.u32);
	// lbzx r7,r31,r29
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + r29.u32);
	// addi r11,r26,17
	ctx.r11.s64 = r26.s64 + 17;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lbzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lhzx r5,r8,r9
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
loc_823F7ADC:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823f6ff8
	ctx.lr = 0x823F7AE4;
	sub_823F6FF8(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = r30.u64 + r31.u64;
	// addi r31,r11,-1
	r31.s64 = ctx.r11.s64 + -1;
loc_823F7AEC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(r31.s32, r25.s32, ctx.xer);
	// blt cr6,0x823f79c4
	if (ctx.cr6.lt) goto loc_823F79C4;
loc_823F7AF8:
	// stbx r23,r29,r25
	REX_STORE_U8(r29.u32 + r25.u32, r23.u8);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x823F7B0C;
	sub_826A1E70(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_824094E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824094E8;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// beq cr6,0x824095f8
	if (ctx.cr6.eq) goto loc_824095F8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8240957c
	if (ctx.cr6.eq) goto loc_8240957C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8240957c
	if (ctx.cr6.eq) goto loc_8240957C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82409814
	if (!ctx.cr6.gt) goto loc_82409814;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r4,8
	ctx.r8.s64 = ctx.r4.s64 + 8;
loc_82409520:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r7,88(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r7
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// lwz r7,88(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f0,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r7,88(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lfsx f0,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lwz r7,88(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,104(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82409520
	if (ctx.cr6.lt) goto loc_82409520;
	// b 0x82409814
	goto loc_82409814;
loc_8240957C:
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82409814
	if (!ctx.cr6.gt) goto loc_82409814;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r4,8
	ctx.r8.s64 = ctx.r4.s64 + 8;
loc_82409594:
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r7,88(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfsx f0,r11,r7
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// lwz r7,88(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f0,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r7,88(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lfsx f0,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lwz r7,88(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r10,104(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82409594
	if (ctx.cr6.lt) goto loc_82409594;
	// b 0x82409814
	goto loc_82409814;
loc_824095F8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x824096cc
	if (ctx.cr6.eq) goto loc_824096CC;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x824096cc
	if (ctx.cr6.eq) goto loc_824096CC;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82409814
	if (!ctx.cr6.gt) goto loc_82409814;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r4,8
	ctx.r7.s64 = ctx.r4.s64 + 8;
	// addi r8,r10,18136
	ctx.r8.s64 = ctx.r10.s64 + 18136;
	// lfs f0,20184(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20184);
	ctx.f0.f64 = double(temp.f32);
loc_82409630:
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r6,88(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r5,r8,4
	ctx.r5.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lfs f13,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r6,r11
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// lwz r6,88(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f13,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lwz r6,88(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lfsx f13,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f12.u64);
	// lwz r6,-60(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// std r6,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r6.u64);
	// lfd f12,-56(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfsx f11,r6,r8
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r6,r5
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmadds f13,f10,f13,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f11.f64)));
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r10,104(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82409630
	if (ctx.cr6.lt) goto loc_82409630;
	// b 0x82409814
	goto loc_82409814;
loc_824096CC:
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82409814
	if (!ctx.cr6.gt) goto loc_82409814;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r4,8
	ctx.r7.s64 = ctx.r4.s64 + 8;
	// addi r10,r10,18136
	ctx.r10.s64 = ctx.r10.s64 + 18136;
	// lfs f0,20184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20184);
	ctx.f0.f64 = double(temp.f32);
loc_824096F4:
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r6,88(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// addi r31,r10,4
	r31.s64 = ctx.r10.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lfs f13,-8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f12.u64);
	// lwz r30,-52(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// mr r29,r30
	r29.u64 = r30.u64;
	// std r30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, r30.u64);
	// lfd f10,-64(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// lfsx f11,r30,r5
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f12,r30,r10
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmadds f13,f11,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfsx f13,r6,r11
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// lwz r6,88(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfs f13,-4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f12.u64);
	// lwz r5,-52(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// std r5,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r5.u64);
	// lfd f12,-48(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r5,r10
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r5,r4
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmadds f13,f10,f13,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f11.f64)));
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfsx f13,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r6,88(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f12.u64);
	// lwz r5,-52(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// std r5,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r5.u64);
	// lfd f12,-40(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfsx f11,r5,r10
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r5,r31
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmadds f13,f10,f13,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f11.f64)));
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,88(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stfs f13,12(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lwz r9,104(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824096f4
	if (ctx.cr6.lt) goto loc_824096F4;
loc_82409814:
	// lwz r3,88(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8241ACC8) {
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
	ctx.lr = 0x8241ACD0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r30,r4,2
	r30.s64 = ctx.r4.s64 + 2;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8241adac
	if (!ctx.cr6.lt) goto loc_8241ADAC;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x8241adac
	if (!ctx.cr6.eq) goto loc_8241ADAC;
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// bne cr6,0x8241adac
	if (!ctx.cr6.eq) goto loc_8241ADAC;
	// lbz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 0);
	// bl 0x826a0840
	ctx.lr = 0x8241AD10;
	sub_826A0840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8241adac
	if (ctx.cr0.eq) goto loc_8241ADAC;
	// li r31,0
	r31.s64 = 0;
	// b 0x8241ad68
	goto loc_8241AD68;
loc_8241AD20:
	// lbz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 0);
	// bl 0x826a0840
	ctx.lr = 0x8241AD28;
	sub_826A0840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8241ad74
	if (ctx.cr0.eq) goto loc_8241AD74;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x8241ad50
	if (ctx.cr6.lt) goto loc_8241AD50;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,-87
	r31.s64 = ctx.r11.s64 + -87;
	// b 0x8241ad64
	goto loc_8241AD64;
loc_8241AD50:
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,-55
	r31.s64 = ctx.r11.s64 + -55;
	// bge cr6,0x8241ad64
	if (!ctx.cr6.lt) goto loc_8241AD64;
	// addi r31,r11,-48
	r31.s64 = ctx.r11.s64 + -48;
loc_8241AD64:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8241AD68:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8241ad20
	if (ctx.cr6.lt) goto loc_8241AD20;
loc_8241AD74:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8241ad80
	if (ctx.cr6.eq) goto loc_8241AD80;
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
loc_8241AD80:
	// subf r31,r28,r30
	r31.u64 = r30.u64 - r28.u64;
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(r31.s32, 10, ctx.xer);
	// ble cr6,0x8241ada4
	if (!ctx.cr6.gt) goto loc_8241ADA4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,48(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 48);
	// li r5,1002
	ctx.r5.s64 = 1002;
	// addi r6,r11,25020
	ctx.r6.s64 = ctx.r11.s64 + 25020;
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// bl 0x8241a4f0
	ctx.lr = 0x8241ADA4;
	sub_8241A4F0(ctx, base);
loc_8241ADA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8241adb0
	goto loc_8241ADB0;
loc_8241ADAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241ADB0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82423A30) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82423A58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82423ac4
	if (!ctx.cr0.eq) goto loc_82423AC4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x822c91b8
	ctx.lr = 0x82423A70;
	sub_822C91B8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82423a94
	if (ctx.cr6.eq) goto loc_82423A94;
	// add. r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82423a94
	if (ctx.cr0.eq) goto loc_82423A94;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82423A94:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r10,6880
	ctx.r10.s64 = ctx.r10.s64 + 6880;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x822cea50
	ctx.lr = 0x82423AC4;
	sub_822CEA50(ctx, base);
loc_82423AC4:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
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

DEFINE_REX_FUNC(sub_82436430) {
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
	ctx.lr = 0x82436438;
	// addi r31,r1,-656
	r31.s64 = ctx.r1.s64 + -656;
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,676(r31)
	REX_STORE_U32(r31.u32 + 676, ctx.r3.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// stw r6,700(r31)
	REX_STORE_U32(r31.u32 + 700, ctx.r6.u32);
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// mr r16,r8
	r16.u64 = ctx.r8.u64;
	// mr r15,r9
	r15.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// bl 0x82444570
	ctx.lr = 0x82436478;
	sub_82444570(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,196(r31)
	REX_STORE_U32(r31.u32 + 196, r26.u32);
	// mr r14,r26
	r14.u64 = r26.u64;
	// stw r26,208(r31)
	REX_STORE_U32(r31.u32 + 208, r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r26,212(r31)
	REX_STORE_U32(r31.u32 + 212, r26.u32);
	// mr r22,r26
	r22.u64 = r26.u64;
	// stw r26,220(r31)
	REX_STORE_U32(r31.u32 + 220, r26.u32);
	// mr r21,r26
	r21.u64 = r26.u64;
	// bl 0x826a42a0
	ctx.lr = 0x824364A4;
	sub_826A42A0(ctx, base);
	// li r29,-1
	r29.s64 = -1;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// stw r3,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r4,r4,31
	ctx.r4.u64 = ctx.r4.u64 | 31;
	// bl 0x826a42a0
	ctx.lr = 0x824364BC;
	sub_826A42A0(ctx, base);
	// lis r4,3
	ctx.r4.s64 = 196608;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826a42a0
	ctx.lr = 0x824364C8;
	sub_826A42A0(ctx, base);
	// lwz r19,772(r31)
	r19.u64 = REX_LOAD_U32(r31.u32 + 772);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// bne cr6,0x824364fc
	if (!ctx.cr6.eq) goto loc_824364FC;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r31,280
	ctx.r11.s64 = r31.s64 + 280;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824364E4:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x824364e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824364E4;
	// addi r19,r31,288
	r19.s64 = r31.s64 + 288;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r19,772(r31)
	REX_STORE_U32(r31.u32 + 772, r19.u32);
	// b 0x82436500
	goto loc_82436500;
loc_824364FC:
	// stw r26,28(r19)
	REX_STORE_U32(r19.u32 + 28, r26.u32);
loc_82436500:
	// lwz r27,748(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 748);
	// lis r12,-863
	ctx.r12.s64 = -56557568;
	// ori r12,r12,57344
	ctx.r12.u64 = ctx.r12.u64 | 57344;
	// and. r11,r27,r12
	ctx.r11.u64 = r27.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82436520
	if (ctx.cr0.eq) goto loc_82436520;
loc_82436514:
	// lis r29,-30602
	r29.s64 = -2005532672;
	// ori r29,r29,2156
	r29.u64 = r29.u64 | 2156;
	// b 0x82436e38
	goto loc_82436E38;
loc_82436520:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82436530
	if (ctx.cr6.eq) goto loc_82436530;
	// rlwinm. r11,r27,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82436514
	if (!ctx.cr0.eq) goto loc_82436514;
loc_82436530:
	// lwz r11,756(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 756);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82436514
	if (ctx.cr6.eq) goto loc_82436514;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243655c
	if (ctx.cr6.eq) goto loc_8243655C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243655C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243655C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24);
	// bl 0x823f0350
	ctx.lr = 0x82436568;
	sub_823F0350(ctx, base);
	// lwz r3,740(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 740);
	// addi r23,r30,4
	r23.s64 = r30.s64 + 4;
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r24,136(r30)
	REX_STORE_U32(r30.u32 + 136, r24.u32);
	// mr r18,r26
	r18.u64 = r26.u64;
	// stw r26,4(r30)
	REX_STORE_U32(r30.u32 + 4, r26.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// stw r26,8(r30)
	REX_STORE_U32(r30.u32 + 8, r26.u32);
	// stw r26,24(r30)
	REX_STORE_U32(r30.u32 + 24, r26.u32);
	// stw r26,28(r30)
	REX_STORE_U32(r30.u32 + 28, r26.u32);
	// stw r26,76(r30)
	REX_STORE_U32(r30.u32 + 76, r26.u32);
	// stw r26,80(r30)
	REX_STORE_U32(r30.u32 + 80, r26.u32);
	// stw r26,84(r30)
	REX_STORE_U32(r30.u32 + 84, r26.u32);
	// stw r26,88(r30)
	REX_STORE_U32(r30.u32 + 88, r26.u32);
	// stw r26,92(r30)
	REX_STORE_U32(r30.u32 + 92, r26.u32);
	// stw r26,96(r30)
	REX_STORE_U32(r30.u32 + 96, r26.u32);
	// stw r26,100(r30)
	REX_STORE_U32(r30.u32 + 100, r26.u32);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// stw r27,20(r30)
	REX_STORE_U32(r30.u32 + 20, r27.u32);
	// stw r26,56(r30)
	REX_STORE_U32(r30.u32 + 56, r26.u32);
	// stw r26,60(r30)
	REX_STORE_U32(r30.u32 + 60, r26.u32);
	// stw r26,64(r30)
	REX_STORE_U32(r30.u32 + 64, r26.u32);
	// stw r26,68(r30)
	REX_STORE_U32(r30.u32 + 68, r26.u32);
	// stw r26,108(r30)
	REX_STORE_U32(r30.u32 + 108, r26.u32);
	// stw r26,112(r30)
	REX_STORE_U32(r30.u32 + 112, r26.u32);
	// stw r29,72(r30)
	REX_STORE_U32(r30.u32 + 72, r29.u32);
	// stw r26,116(r30)
	REX_STORE_U32(r30.u32 + 116, r26.u32);
	// stw r26,120(r30)
	REX_STORE_U32(r30.u32 + 120, r26.u32);
	// stw r26,124(r30)
	REX_STORE_U32(r30.u32 + 124, r26.u32);
	// stw r26,128(r30)
	REX_STORE_U32(r30.u32 + 128, r26.u32);
	// stw r26,132(r30)
	REX_STORE_U32(r30.u32 + 132, r26.u32);
	// beq cr6,0x8243662c
	if (ctx.cr6.eq) goto loc_8243662C;
	// lis r11,18008
	ctx.r11.s64 = 1180172288;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// li r3,512
	ctx.r3.s64 = 512;
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// bl 0x823f02b8
	ctx.lr = 0x82436600;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82436614
	if (ctx.cr0.eq) goto loc_82436614;
	// lwz r4,140(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 140);
	// bl 0x824bde78
	ctx.lr = 0x82436610;
	sub_824BDE78(ctx, base);
	// b 0x82436618
	goto loc_82436618;
loc_82436614:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82436618:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// li r18,1
	r18.s64 = 1;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// b 0x824369a0
	goto loc_824369A0;
loc_8243662C:
	// rlwinm. r11,r27,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xC0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824366e8
	if (ctx.cr0.eq) goto loc_824366E8;
	// addi r5,r31,232
	ctx.r5.s64 = r31.s64 + 232;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823ff268
	ctx.lr = 0x82436640;
	sub_823FF268(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82436668
	if (!ctx.cr0.lt) goto loc_82436668;
loc_82436648:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r7,12(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r5,3506
	ctx.r5.s64 = 3506;
	// addi r6,r11,-21460
	ctx.r6.s64 = ctx.r11.s64 + -21460;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423e58
	ctx.lr = 0x82436664;
	sub_82423E58(ctx, base);
	// b 0x82436514
	goto loc_82436514;
loc_82436668:
	// lwz r10,236(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 236);
	// lis r9,-2
	ctx.r9.s64 = -131072;
	// rlwinm r11,r10,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824366b8
	if (ctx.cr6.eq) goto loc_824366B8;
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824366e8
	if (!ctx.cr6.eq) goto loc_824366E8;
	// rlwinm. r11,r27,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824366e8
	if (ctx.cr0.eq) goto loc_824366E8;
	// rlwinm r11,r10,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF00;
	// ori r27,r27,5
	r27.u64 = r27.u64 | 5;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// bne cr6,0x824366ac
	if (!ctx.cr6.eq) goto loc_824366AC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,16424
	ctx.r11.s64 = ctx.r11.s64 + 16424;
	// b 0x824366e4
	goto loc_824366E4;
loc_824366AC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,16440
	ctx.r11.s64 = ctx.r11.s64 + 16440;
	// b 0x824366e4
	goto loc_824366E4;
loc_824366B8:
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824366e8
	if (ctx.cr0.eq) goto loc_824366E8;
	// rlwinm r11,r10,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF00;
	// ori r27,r27,5
	r27.u64 = r27.u64 | 5;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// bne cr6,0x824366dc
	if (!ctx.cr6.eq) goto loc_824366DC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,16264
	ctx.r11.s64 = ctx.r11.s64 + 16264;
	// b 0x824366e4
	goto loc_824366E4;
loc_824366DC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,16280
	ctx.r11.s64 = ctx.r11.s64 + 16280;
loc_824366E4:
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
loc_824366E8:
	// addi r5,r31,232
	ctx.r5.s64 = r31.s64 + 232;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823ff268
	ctx.lr = 0x824366F8;
	sub_823FF268(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82436648
	if (ctx.cr0.lt) goto loc_82436648;
	// lwz r9,236(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 236);
	// lis r11,-2
	ctx.r11.s64 = -131072;
	// stw r27,20(r30)
	REX_STORE_U32(r30.u32 + 20, r27.u32);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// stw r9,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r9.u32);
	// bne cr6,0x8243672c
	if (!ctx.cr6.eq) goto loc_8243672C;
	// lis r11,-2
	ctx.r11.s64 = -131072;
	// li r22,1
	r22.s64 = 1;
	// ori r11,r11,257
	ctx.r11.u64 = ctx.r11.u64 | 257;
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
loc_8243672C:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82436750
	if (!ctx.cr6.eq) goto loc_82436750;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// li r21,1
	r21.s64 = 1;
	// ori r11,r11,257
	ctx.r11.u64 = ctx.r11.u64 | 257;
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
loc_82436750:
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// ori r10,r10,612
	ctx.r10.u64 = ctx.r10.u64 | 612;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82436950
	if (ctx.cr6.gt) goto loc_82436950;
	// beq cr6,0x8243692c
	if (ctx.cr6.eq) goto loc_8243692C;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// ori r10,r10,768
	ctx.r10.u64 = ctx.r10.u64 | 768;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82436800
	if (ctx.cr6.gt) goto loc_82436800;
	// beq cr6,0x82436978
	if (ctx.cr6.eq) goto loc_82436978;
	// lis r10,21592
	ctx.r10.s64 = 1415053312;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824367d8
	if (ctx.cr6.eq) goto loc_824367D8;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// ori r10,r10,257
	ctx.r10.u64 = ctx.r10.u64 | 257;
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824367b4
	if (ctx.cr0.eq) goto loc_824367B4;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x824367b4
	if (ctx.cr6.eq) goto loc_824367B4;
	// cmplwi cr6,r11,257
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 257, ctx.xer);
	// beq cr6,0x824367b4
	if (ctx.cr6.eq) goto loc_824367B4;
	// cmplwi cr6,r11,510
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 510, ctx.xer);
	// bne cr6,0x82436970
	if (!ctx.cr6.eq) goto loc_82436970;
loc_824367B4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,508
	ctx.r3.s64 = 508;
	// bl 0x823f02b8
	ctx.lr = 0x824367C0;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8243699c
	if (ctx.cr0.eq) goto loc_8243699C;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r5,140(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 140);
	// bl 0x824ba468
	ctx.lr = 0x824367D4;
	sub_824BA468(ctx, base);
	// b 0x824369a0
	goto loc_824369A0;
loc_824367D8:
	// ori r11,r27,256
	ctx.r11.u64 = r27.u64 | 256;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x823f02b8
	ctx.lr = 0x824367EC;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8243699c
	if (ctx.cr0.eq) goto loc_8243699C;
	// lwz r4,140(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 140);
	// bl 0x824bde78
	ctx.lr = 0x824367FC;
	sub_824BDE78(ctx, base);
	// b 0x824369a0
	goto loc_824369A0;
loc_82436800:
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// ori r10,r10,260
	ctx.r10.u64 = ctx.r10.u64 | 260;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// bgt cr6,0x82436900
	if (ctx.cr6.gt) goto loc_82436900;
	// ori r10,r10,257
	ctx.r10.u64 = ctx.r10.u64 | 257;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824368d8
	if (!ctx.cr6.lt) goto loc_824368D8;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// ori r10,r10,1021
	ctx.r10.u64 = ctx.r10.u64 | 1021;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82436970
	if (ctx.cr6.lt) goto loc_82436970;
	// lis r8,-2
	ctx.r8.s64 = -131072;
	// ori r8,r8,1022
	ctx.r8.u64 = ctx.r8.u64 | 1022;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82436850
	if (!ctx.cr6.gt) goto loc_82436850;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// ori r10,r10,1023
	ctx.r10.u64 = ctx.r10.u64 | 1023;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// b 0x8243696c
	goto loc_8243696C;
loc_82436850:
	// rlwinm r11,r9,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82436868
	if (ctx.cr0.eq) goto loc_82436868;
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
loc_82436868:
	// lwz r29,24(r19)
	r29.u64 = REX_LOAD_U32(r19.u32 + 24);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82436880
	if (ctx.cr6.eq) goto loc_82436880;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82436884
	if (!ctx.cr0.eq) goto loc_82436884;
loc_82436880:
	// mr r29,r17
	r29.u64 = r17.u64;
loc_82436884:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,1824
	ctx.r3.s64 = 1824;
	// bne 0x824368b8
	if (!ctx.cr0.eq) goto loc_824368B8;
	// bl 0x823f02b8
	ctx.lr = 0x8243689C;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8243699c
	if (ctx.cr0.eq) goto loc_8243699C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r5,140(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 140);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x824219e0
	ctx.lr = 0x824368B4;
	sub_824219E0(ctx, base);
	// b 0x824369a0
	goto loc_824369A0;
loc_824368B8:
	// bl 0x823f02b8
	ctx.lr = 0x824368BC;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8243699c
	if (ctx.cr0.eq) goto loc_8243699C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r5,140(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 140);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82421a20
	ctx.lr = 0x824368D4;
	sub_82421A20(ctx, base);
	// b 0x824369a0
	goto loc_824369A0;
loc_824368D8:
	// rlwinm r11,r27,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// li r3,1160
	ctx.r3.s64 = 1160;
	// bl 0x823f02b8
	ctx.lr = 0x824368EC;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8243699c
	if (ctx.cr0.eq) goto loc_8243699C;
	// lwz r4,140(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 140);
	// bl 0x824aab98
	ctx.lr = 0x824368FC;
	sub_824AAB98(ctx, base);
	// b 0x824369a0
	goto loc_824369A0;
loc_82436900:
	// ori r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 512;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8243692c
	if (ctx.cr6.eq) goto loc_8243692C;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// ori r10,r10,513
	ctx.r10.u64 = ctx.r10.u64 | 513;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82436970
	if (!ctx.cr6.gt) goto loc_82436970;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// ori r10,r10,515
	ctx.r10.u64 = ctx.r10.u64 | 515;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82436970
	if (ctx.cr6.gt) goto loc_82436970;
loc_8243692C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,560
	ctx.r3.s64 = 560;
	// bl 0x823f02b8
	ctx.lr = 0x82436938;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8243699c
	if (ctx.cr0.eq) goto loc_8243699C;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r5,140(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 140);
	// bl 0x824a6c98
	ctx.lr = 0x8243694C;
	sub_824A6C98(ctx, base);
	// b 0x824369a0
	goto loc_824369A0;
loc_82436950:
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// ori r10,r10,767
	ctx.r10.u64 = ctx.r10.u64 | 767;
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8243692c
	if (ctx.cr0.eq) goto loc_8243692C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82436978
	if (ctx.cr6.eq) goto loc_82436978;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
loc_8243696C:
	// beq cr6,0x82436978
	if (ctx.cr6.eq) goto loc_82436978;
loc_82436970:
	// stw r26,8(r30)
	REX_STORE_U32(r30.u32 + 8, r26.u32);
	// b 0x824369a4
	goto loc_824369A4;
loc_82436978:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,508
	ctx.r3.s64 = 508;
	// bl 0x823f02b8
	ctx.lr = 0x82436984;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8243699c
	if (ctx.cr0.eq) goto loc_8243699C;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r5,140(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 140);
	// bl 0x824748f0
	ctx.lr = 0x82436998;
	sub_824748F0(ctx, base);
	// b 0x824369a0
	goto loc_824369A0;
loc_8243699C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_824369A0:
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
loc_824369A4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824369bc
	if (!ctx.cr6.eq) goto loc_824369BC;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x82436e38
	goto loc_82436E38;
loc_824369BC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x82436a04
	if (!ctx.cr6.eq) goto loc_82436A04;
	// addi r3,r31,368
	ctx.r3.s64 = r31.s64 + 368;
	// lwz r29,20(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82493390
	ctx.lr = 0x824369D4;
	sub_82493390(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// oris r5,r29,32768
	ctx.r5.u64 = r29.u64 | 2147483648;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// bl 0x824a6b08
	ctx.lr = 0x824369E8;
	sub_824A6B08(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,368
	ctx.r3.s64 = r31.s64 + 368;
	// rlwinm r28,r29,1,31,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0x1;
	// bl 0x82130e88
	ctx.lr = 0x824369F8;
	sub_82130E88(ctx, base);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne 0x82436e38
	if (!ctx.cr0.eq) goto loc_82436E38;
	// b 0x82436a08
	goto loc_82436A08;
loc_82436A04:
	// stw r25,0(r23)
	REX_STORE_U32(r23.u32 + 0, r25.u32);
loc_82436A08:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x82436a28
	if (ctx.cr6.eq) goto loc_82436A28;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,3505
	ctx.r5.s64 = 3505;
	// addi r6,r11,-25152
	ctx.r6.s64 = ctx.r11.s64 + -25152;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423ee8
	ctx.lr = 0x82436A28;
	sub_82423EE8(ctx, base);
loc_82436A28:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x82436a48
	if (ctx.cr6.eq) goto loc_82436A48;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,3505
	ctx.r5.s64 = 3505;
	// addi r6,r11,-25196
	ctx.r6.s64 = ctx.r11.s64 + -25196;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423ee8
	ctx.lr = 0x82436A48;
	sub_82423EE8(ctx, base);
loc_82436A48:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// bne cr6,0x82436aac
	if (!ctx.cr6.eq) goto loc_82436AAC;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x82436a70
	if (ctx.cr6.eq) goto loc_82436A70;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x824233b8
	ctx.lr = 0x82436A64;
	sub_824233B8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r26
	r25.u64 = r26.u64;
	// b 0x82436ab4
	goto loc_82436AB4;
loc_82436A70:
	// addi r5,r31,700
	ctx.r5.s64 = r31.s64 + 700;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82423508
	ctx.lr = 0x82436A7C;
	sub_82423508(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x82436aa0
	if (!ctx.cr0.eq) goto loc_82436AA0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,3501
	ctx.r5.s64 = 3501;
	// addi r6,r11,-21492
	ctx.r6.s64 = ctx.r11.s64 + -21492;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423e58
	ctx.lr = 0x82436A9C;
	sub_82423E58(ctx, base);
	// b 0x82436fd0
	goto loc_82436FD0;
loc_82436AA0:
	// lwz r17,700(r31)
	r17.u64 = REX_LOAD_U32(r31.u32 + 700);
	// li r25,1
	r25.s64 = 1;
	// b 0x82436ab4
	goto loc_82436AB4;
loc_82436AAC:
	// lwz r28,216(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r25,216(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 216);
loc_82436AB4:
	// lwz r4,20(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm. r9,r4,0,6,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82436acc
	if (!ctx.cr0.eq) goto loc_82436ACC;
	// rlwinm. r11,r4,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// beq 0x82436ad0
	if (ctx.cr0.eq) goto loc_82436AD0;
loc_82436ACC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82436AD0:
	// lwz r10,16(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 16);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82436af0
	if (ctx.cr6.eq) goto loc_82436AF0;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_82436AF0:
	// lwz r10,36(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82436b08
	if (!ctx.cr6.eq) goto loc_82436B08;
	// lwz r10,44(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82436b0c
	if (ctx.cr6.eq) goto loc_82436B0C;
loc_82436B08:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_82436B0C:
	// lwz r10,0(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r8,r4,0,11,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x100000;
	// andi. r10,r10,18
	ctx.r10.u64 = ctx.r10.u64 & 18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r10,r11
	r29.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bne 0x82436c68
	if (!ctx.cr0.eq) goto loc_82436C68;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x82436c68
	if (!ctx.cr6.eq) goto loc_82436C68;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// bne cr6,0x82436ca0
	if (!ctx.cr6.eq) goto loc_82436CA0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82436b50
	if (ctx.cr6.eq) goto loc_82436B50;
	// li r14,1
	r14.s64 = 1;
	// stw r14,220(r31)
	REX_STORE_U32(r31.u32 + 220, r14.u32);
	// b 0x82436c68
	goto loc_82436C68;
loc_82436B50:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r6,0(r23)
	ctx.r6.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r7,r31,208
	ctx.r7.s64 = r31.s64 + 208;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r11,r11,15952
	ctx.r11.s64 = ctx.r11.s64 + 15952;
	// stw r19,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r19.u32);
	// addi r10,r31,196
	ctx.r10.s64 = r31.s64 + 196;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r9,r15
	ctx.r9.u64 = r15.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x824e4fc0
	ctx.lr = 0x82436B8C;
	sub_824E4FC0(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// stw r3,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82436bd4
	if (ctx.cr6.eq) goto loc_82436BD4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436BB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82436bd4
	if (ctx.cr0.eq) goto loc_82436BD4;
	// lwz r11,28(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82436bd4
	if (!ctx.cr6.eq) goto loc_82436BD4;
	// lwz r3,196(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 196);
	// bl 0x82423a30
	ctx.lr = 0x82436BD0;
	sub_82423A30(ctx, base);
	// stw r3,28(r19)
	REX_STORE_U32(r19.u32 + 28, ctx.r3.u32);
loc_82436BD4:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bge cr6,0x82436c68
	if (!ctx.cr6.lt) goto loc_82436C68;
	// lwz r11,28(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82436c68
	if (!ctx.cr6.eq) goto loc_82436C68;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82436c68
	if (ctx.cr0.eq) goto loc_82436C68;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16388
	ctx.r11.u64 = ctx.r11.u64 | 16388;
	// cmpw cr6,r14,r11
	ctx.cr6.compare<int32_t>(r14.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82436c08
	if (!ctx.cr6.eq) goto loc_82436C08;
	// mr r29,r26
	r29.u64 = r26.u64;
	// b 0x82436c68
	goto loc_82436C68;
loc_82436C08:
	// lwz r3,196(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82436c28
	if (ctx.cr6.eq) goto loc_82436C28;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436C24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,196(r31)
	REX_STORE_U32(r31.u32 + 196, r26.u32);
loc_82436C28:
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82436c48
	if (ctx.cr6.eq) goto loc_82436C48;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436C44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,208(r31)
	REX_STORE_U32(r31.u32 + 208, r26.u32);
loc_82436C48:
	// stw r26,76(r30)
	REX_STORE_U32(r30.u32 + 76, r26.u32);
	// addi r4,r31,212
	ctx.r4.s64 = r31.s64 + 212;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x824198c8
	ctx.lr = 0x82436C5C;
	sub_824198C8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8241a310
	ctx.lr = 0x82436C68;
	sub_8241A310(ctx, base);
loc_82436C68:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// bne cr6,0x82436ca0
	if (!ctx.cr6.eq) goto loc_82436CA0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82436ca0
	if (!ctx.cr6.eq) goto loc_82436CA0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// blt cr6,0x82436fd0
	if (ctx.cr6.lt) goto loc_82436FD0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// addi r6,r11,-21520
	ctx.r6.s64 = ctx.r11.s64 + -21520;
	// li r5,3501
	ctx.r5.s64 = 3501;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423e58
	ctx.lr = 0x82436C9C;
	sub_82423E58(ctx, base);
	// b 0x82436fd0
	goto loc_82436FD0;
loc_82436CA0:
	// lwz r8,28(r19)
	ctx.r8.u64 = REX_LOAD_U32(r19.u32 + 28);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// addic r10,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 & r29.u64;
	// bne cr6,0x82436cc8
	if (!ctx.cr6.eq) goto loc_82436CC8;
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm. r11,r10,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82436cd8
	if (!ctx.cr0.eq) goto loc_82436CD8;
loc_82436CC8:
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm. r11,r10,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// beq 0x82436cdc
	if (ctx.cr0.eq) goto loc_82436CDC;
loc_82436CD8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82436CDC:
	// clrlwi. r27,r11,24
	r27.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// stb r27,200(r31)
	REX_STORE_U8(r31.u32 + 200, r27.u8);
	// beq 0x82436d9c
	if (ctx.cr0.eq) goto loc_82436D9C;
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82436d9c
	if (!ctx.cr0.eq) goto loc_82436D9C;
	// rlwinm. r11,r10,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r27,r26
	r27.u64 = r26.u64;
	// stb r26,200(r31)
	REX_STORE_U8(r31.u32 + 200, r26.u8);
	// beq 0x82436d0c
	if (ctx.cr0.eq) goto loc_82436D0C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,-21568
	ctx.r6.s64 = ctx.r11.s64 + -21568;
	// b 0x82436d8c
	goto loc_82436D8C;
loc_82436D0C:
	// lwz r11,16(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82436d2c
	if (ctx.cr6.eq) goto loc_82436D2C;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x82436d2c
	if (ctx.cr6.eq) goto loc_82436D2C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,-21620
	ctx.r6.s64 = ctx.r11.s64 + -21620;
	// b 0x82436d8c
	goto loc_82436D8C;
loc_82436D2C:
	// lwz r11,36(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82436d84
	if (!ctx.cr6.eq) goto loc_82436D84;
	// lwz r11,44(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82436d84
	if (!ctx.cr6.eq) goto loc_82436D84;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82436d58
	if (ctx.cr6.eq) goto loc_82436D58;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,-21676
	ctx.r6.s64 = ctx.r11.s64 + -21676;
	// b 0x82436d8c
	goto loc_82436D8C;
loc_82436D58:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82436d70
	if (ctx.cr0.eq) goto loc_82436D70;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,-21720
	ctx.r6.s64 = ctx.r11.s64 + -21720;
	// b 0x82436d8c
	goto loc_82436D8C;
loc_82436D70:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82436d9c
	if (ctx.cr0.eq) goto loc_82436D9C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,-21764
	ctx.r6.s64 = ctx.r11.s64 + -21764;
	// b 0x82436d8c
	goto loc_82436D8C;
loc_82436D84:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,-21816
	ctx.r6.s64 = ctx.r11.s64 + -21816;
loc_82436D8C:
	// li r5,3042
	ctx.r5.s64 = 3042;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423ee8
	ctx.lr = 0x82436D9C;
	sub_82423EE8(ctx, base);
loc_82436D9C:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82436f08
	if (!ctx.cr0.eq) goto loc_82436F08;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82436db8
	if (!ctx.cr6.eq) goto loc_82436DB8;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bge cr6,0x82436f08
	if (!ctx.cr6.lt) goto loc_82436F08;
loc_82436DB8:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// blt cr6,0x82437178
	if (ctx.cr6.lt) goto loc_82437178;
	// lwz r28,764(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 764);
	// lwz r27,756(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 756);
loc_82436DC8:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82436e34
	if (ctx.cr6.eq) goto loc_82436E34;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82436df4
	if (ctx.cr6.eq) goto loc_82436DF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436DF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,0(r27)
	REX_STORE_U32(r27.u32 + 0, r26.u32);
loc_82436DF4:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// stw r26,196(r31)
	REX_STORE_U32(r31.u32 + 196, r26.u32);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82436e34
	if (ctx.cr6.eq) goto loc_82436E34;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82436e28
	if (ctx.cr6.eq) goto loc_82436E28;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436E24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,0(r28)
	REX_STORE_U32(r28.u32 + 0, r26.u32);
loc_82436E28:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// stw r26,208(r31)
	REX_STORE_U32(r31.u32 + 208, r26.u32);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_82436E34:
	// mr r29,r26
	r29.u64 = r26.u64;
loc_82436E38:
	// bl 0x826a4408
	ctx.lr = 0x82436E3C;
	sub_826A4408(ctx, base);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// lwz r3,216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 216);
	// ori r4,r4,31
	ctx.r4.u64 = ctx.r4.u64 | 31;
	// bl 0x826a42a0
	ctx.lr = 0x82436E4C;
	sub_826A42A0(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r26,4(r30)
	REX_STORE_U32(r30.u32 + 4, r26.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82436e70
	if (ctx.cr6.eq) goto loc_82436E70;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436E70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82436E70:
	// stw r26,8(r30)
	REX_STORE_U32(r30.u32 + 8, r26.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24);
	// bl 0x823f0350
	ctx.lr = 0x82436E80;
	sub_823F0350(ctx, base);
	// stw r26,24(r30)
	REX_STORE_U32(r30.u32 + 24, r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82478220
	ctx.lr = 0x82436E8C;
	sub_82478220(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82477a50
	ctx.lr = 0x82436E94;
	sub_82477A50(ctx, base);
	// lwz r3,196(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82436eb4
	if (ctx.cr6.eq) goto loc_82436EB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436EB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,196(r31)
	REX_STORE_U32(r31.u32 + 196, r26.u32);
loc_82436EB4:
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82436ed4
	if (ctx.cr6.eq) goto loc_82436ED4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436ED0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,208(r31)
	REX_STORE_U32(r31.u32 + 208, r26.u32);
loc_82436ED4:
	// lwz r3,212(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82436ef4
	if (ctx.cr6.eq) goto loc_82436EF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436EF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,212(r31)
	REX_STORE_U32(r31.u32 + 212, r26.u32);
loc_82436EF4:
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x824445b8
	ctx.lr = 0x82436EFC;
	sub_824445B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82436F00:
	// addi r1,r31,656
	ctx.r1.s64 = r31.s64 + 656;
	// b 0x826a1cd0
	return;
loc_82436F08:
	// clrlwi. r11,r18,24
	ctx.r11.u64 = r18.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82436f28
	if (!ctx.cr0.eq) goto loc_82436F28;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,3505
	ctx.r5.s64 = 3505;
	// addi r6,r11,-21888
	ctx.r6.s64 = ctx.r11.s64 + -21888;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423ee8
	ctx.lr = 0x82436F28;
	sub_82423EE8(ctx, base);
loc_82436F28:
	// lwz r11,144(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82436f68
	if (!ctx.cr6.eq) goto loc_82436F68;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,148(r30)
	REX_STORE_U32(r30.u32 + 148, ctx.r11.u32);
	// li r3,16384
	ctx.r3.s64 = 16384;
	// bl 0x823f02b8
	ctx.lr = 0x82436F48;
	sub_823F02B8(ctx, base);
	// stw r3,144(r30)
	REX_STORE_U32(r30.u32 + 144, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82436f68
	if (!ctx.cr0.eq) goto loc_82436F68;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x824445b8
	ctx.lr = 0x82436F5C;
	sub_824445B8(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82436f00
	goto loc_82436F00;
loc_82436F68:
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x82478220
	ctx.lr = 0x82436F70;
	sub_82478220(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x82477a50
	ctx.lr = 0x82436F78;
	sub_82477A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824341d8
	ctx.lr = 0x82436F80;
	sub_824341D8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82436e38
	if (ctx.cr0.lt) goto loc_82436E38;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x82436fa0
	if (ctx.cr6.eq) goto loc_82436FA0;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x824362b8
	ctx.lr = 0x82436F9C;
	sub_824362B8(ctx, base);
	// b 0x82436fbc
	goto loc_82436FBC;
loc_82436FA0:
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82433470
	ctx.lr = 0x82436FBC;
	sub_82433470(ctx, base);
loc_82436FBC:
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82436e38
	if (ctx.cr0.lt) goto loc_82436E38;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82436fdc
	if (ctx.cr6.eq) goto loc_82436FDC;
loc_82436FD0:
	// lis r29,-32768
	r29.s64 = -2147483648;
	// ori r29,r29,16389
	r29.u64 = r29.u64 | 16389;
	// b 0x82436e38
	goto loc_82436E38;
loc_82436FDC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423660
	ctx.lr = 0x82436FE4;
	sub_82423660(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82436e38
	if (ctx.cr0.lt) goto loc_82436E38;
	// stw r26,192(r31)
	REX_STORE_U32(r31.u32 + 192, r26.u32);
	// stw r26,204(r31)
	REX_STORE_U32(r31.u32 + 204, r26.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82437014;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r3,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82437068
	goto loc_82437068;
loc_82437068:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x82436e38
	if (ctx.cr6.lt) goto loc_82436E38;
	// lwz r28,764(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 764);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824370c4
	if (ctx.cr6.eq) goto loc_824370C4;
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82437090;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,204
	ctx.r4.s64 = r31.s64 + 204;
	// bl 0x823ffeb8
	ctx.lr = 0x82437098;
	sub_823FFEB8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x824370c4
	if (!ctx.cr0.lt) goto loc_824370C4;
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82436e38
	if (ctx.cr6.eq) goto loc_82436E38;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824370BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,192(r31)
	REX_STORE_U32(r31.u32 + 192, r26.u32);
	// b 0x82436e38
	goto loc_82436E38;
loc_824370C4:
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824370D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r9,r11,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// bne 0x82437240
	if (!ctx.cr0.eq) goto loc_82437240;
	// lis r10,18008
	ctx.r10.s64 = 1180172288;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82437240
	if (ctx.cr6.eq) goto loc_82437240;
	// lis r10,21592
	ctx.r10.s64 = 1415053312;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82437240
	if (ctx.cr6.eq) goto loc_82437240;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// ori r10,r10,1022
	ctx.r10.u64 = ctx.r10.u64 | 1022;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82437240
	if (ctx.cr6.eq) goto loc_82437240;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// ori r10,r10,1021
	ctx.r10.u64 = ctx.r10.u64 | 1021;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82437240
	if (ctx.cr6.eq) goto loc_82437240;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82437180
	if (!ctx.cr0.eq) goto loc_82437180;
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82437150
	if (ctx.cr6.eq) goto loc_82437150;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243714C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,192(r31)
	REX_STORE_U32(r31.u32 + 192, r26.u32);
loc_82437150:
	// lwz r3,204(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82437170
	if (ctx.cr6.eq) goto loc_82437170;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243716C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,204(r31)
	REX_STORE_U32(r31.u32 + 204, r26.u32);
loc_82437170:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bge cr6,0x82436fd0
	if (!ctx.cr6.lt) goto loc_82436FD0;
loc_82437178:
	// mr r29,r14
	r29.u64 = r14.u64;
	// b 0x82436e38
	goto loc_82436E38;
loc_82437180:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8265edb0
	ctx.lr = 0x8243718C;
	sub_8265EDB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824371b8
	if (ctx.cr0.eq) goto loc_824371B8;
loc_82437194:
	// lwz r3,204(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82436e38
	if (ctx.cr6.eq) goto loc_82436E38;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824371B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,204(r31)
	REX_STORE_U32(r31.u32 + 204, r26.u32);
	// b 0x82436e38
	goto loc_82436E38;
loc_824371B8:
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824371CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824371E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// lwz r27,756(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 756);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r3,r11,0,7,5
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r8,r10,15936
	ctx.r8.s64 = ctx.r10.s64 + 15936;
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// bl 0x8241c6d8
	ctx.lr = 0x82437214;
	sub_8241C6D8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 192);
	// bge 0x8243726c
	if (!ctx.cr0.lt) goto loc_8243726C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82437194
	if (ctx.cr6.eq) goto loc_82437194;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82437238;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,192(r31)
	REX_STORE_U32(r31.u32 + 192, r26.u32);
	// b 0x82437194
	goto loc_82437194;
loc_82437240:
	// lwz r27,756(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 756);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82437264
	if (ctx.cr6.eq) goto loc_82437264;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82437260;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,0(r27)
	REX_STORE_U32(r27.u32 + 0, r26.u32);
loc_82437264:
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 192);
	// stw r3,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r3.u32);
loc_8243726C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8243727c
	if (ctx.cr6.eq) goto loc_8243727C;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_8243727C:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82437358
	if (ctx.cr6.eq) goto loc_82437358;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8265edb0
	ctx.lr = 0x82437294;
	sub_8265EDB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82436e38
	if (!ctx.cr0.eq) goto loc_82436E38;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,196(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 196);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 192);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x824372d0
	if (ctx.cr6.eq) goto loc_824372D0;
	// bl 0x82205518
	ctx.lr = 0x824372CC;
	sub_82205518(ctx, base);
	// b 0x824372d4
	goto loc_824372D4;
loc_824372D0:
	// bl 0x82205518
	ctx.lr = 0x824372D4;
	sub_82205518(ctx, base);
loc_824372D4:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824372fc
	if (ctx.cr6.eq) goto loc_824372FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824372F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r26,192(r31)
	REX_STORE_U32(r31.u32 + 192, r26.u32);
loc_824372FC:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82437324
	if (ctx.cr6.eq) goto loc_82437324;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243731C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 192);
	// stw r26,204(r31)
	REX_STORE_U32(r31.u32 + 204, r26.u32);
loc_82437324:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82437330
	if (ctx.cr6.eq) goto loc_82437330;
	// stw r26,0(r28)
	REX_STORE_U32(r28.u32 + 0, r26.u32);
loc_82437330:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x82437354
	if (!ctx.cr6.eq) goto loc_82437354;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,3042
	ctx.r5.s64 = 3042;
	// addi r6,r11,-22072
	ctx.r6.s64 = ctx.r11.s64 + -22072;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423ee8
	ctx.lr = 0x82437350;
	sub_82423EE8(ctx, base);
	// b 0x82436fd0
	goto loc_82436FD0;
loc_82437354:
	// lwz r27,756(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 756);
loc_82437358:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82436dc8
	if (ctx.cr6.eq) goto loc_82436DC8;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82436dc8
	if (ctx.cr6.eq) goto loc_82436DC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243737C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,192(r31)
	REX_STORE_U32(r31.u32 + 192, r26.u32);
	// b 0x82436dc8
	goto loc_82436DC8;
}

DEFINE_REX_FUNC(sub_824A3050) {
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
	ctx.lr = 0x824A3058;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r25,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r25.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r26,1
	r26.s64 = 1;
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// ble cr6,0x824a3084
	if (!ctx.cr6.gt) goto loc_824A3084;
	// stw r26,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, r26.u32);
loc_824A3084:
	// lwz r11,72(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824a37a0
	if (!ctx.cr6.eq) goto loc_824A37A0;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// subfic r9,r30,16
	ctx.xer.ca = r30.u32 <= 16;
	ctx.r9.u64 = static_cast<uint64_t>(16) - r30.u64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a2e60
	ctx.lr = 0x824A30B0;
	sub_826A2E60(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824a30fc
	if (ctx.cr6.eq) goto loc_824A30FC;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_824A30C0:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a312c
	if (ctx.cr6.eq) goto loc_824A312C;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r8.u32);
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r25.u32);
	// lwz r8,12(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 12);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r11,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r11.u32);
	// bne cr6,0x824a30c0
	if (!ctx.cr6.eq) goto loc_824A30C0;
loc_824A30FC:
	// cmplwi cr6,r27,439
	ctx.cr6.compare<uint32_t>(r27.u32, 439, ctx.xer);
	// bgt cr6,0x824a54f4
	if (ctx.cr6.gt) goto loc_824A54F4;
	// lis r12,-32252
	ctx.r12.s64 = -2113667072;
	// rlwinm r0,r27,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-14832
	ctx.r12.s64 = ctx.r12.s64 + -14832;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32182
	ctx.r12.s64 = -2109079552;
	// addi r12,r12,12588
	ctx.r12.s64 = ctx.r12.s64 + 12588;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (r27.u32) {
	case 0:
		goto loc_824A3148;
	case 1:
		goto loc_824A3194;
	case 2:
		goto loc_824A3428;
	case 3:
		goto loc_824A31EC;
	case 4:
		goto loc_824A3FA4;
	case 5:
		goto loc_824A3428;
	case 6:
		goto loc_824A3428;
	case 7:
		goto loc_824A3428;
	case 8:
		goto loc_824A3428;
	case 9:
		goto loc_824A3428;
	case 10:
		goto loc_824A3428;
	case 11:
		goto loc_824A3428;
	case 12:
		goto loc_824A3428;
	case 13:
		goto loc_824A3428;
	case 14:
		goto loc_824A3208;
	case 15:
		goto loc_824A3230;
	case 16:
		goto loc_824A3270;
	case 17:
		goto loc_824A41F0;
	case 18:
		goto loc_824A3260;
	case 19:
		goto loc_824A3288;
	case 20:
		goto loc_824A32BC;
	case 21:
		goto loc_824A3428;
	case 22:
		goto loc_824A32F0;
	case 23:
		goto loc_824A54F4;
	case 24:
		goto loc_824A3364;
	case 25:
		goto loc_824A3380;
	case 26:
		goto loc_824A33B8;
	case 27:
		goto loc_824A33DC;
	case 28:
		goto loc_824A340C;
	case 29:
		goto loc_824A54F4;
	case 30:
		goto loc_824A3364;
	case 31:
		goto loc_824A3380;
	case 32:
		goto loc_824A33B8;
	case 33:
		goto loc_824A3428;
	case 34:
		goto loc_824A3418;
	case 35:
		goto loc_824A3FA4;
	case 36:
		goto loc_824A3428;
	case 37:
		goto loc_824A3430;
	case 38:
		goto loc_824A3458;
	case 39:
		goto loc_824A3470;
	case 40:
		goto loc_824A3488;
	case 41:
		goto loc_824A34A0;
	case 42:
		goto loc_824A34B8;
	case 43:
		goto loc_824A34D0;
	case 44:
		goto loc_824A34E8;
	case 45:
		goto loc_824A3500;
	case 46:
		goto loc_824A3518;
	case 47:
		goto loc_824A3428;
	case 48:
		goto loc_824A3530;
	case 49:
		goto loc_824A54F4;
	case 50:
		goto loc_824A54F4;
	case 51:
		goto loc_824A54F4;
	case 52:
		goto loc_824A3428;
	case 53:
		goto loc_824A3418;
	case 54:
		goto loc_824A3558;
	case 55:
		goto loc_824A3570;
	case 56:
		goto loc_824A3588;
	case 57:
		goto loc_824A35A0;
	case 58:
		goto loc_824A3600;
	case 59:
		goto loc_824A54F4;
	case 60:
		goto loc_824A54F4;
	case 61:
		goto loc_824A361C;
	case 62:
		goto loc_824A364C;
	case 63:
		goto loc_824A367C;
	case 64:
		goto loc_824A3690;
	case 65:
		goto loc_824A3428;
	case 66:
		goto loc_824A36CC;
	case 67:
		goto loc_824A36F4;
	case 68:
		goto loc_824A3428;
	case 69:
		goto loc_824A3428;
	case 70:
		goto loc_824A373C;
	case 71:
		goto loc_824A37A8;
	case 72:
		goto loc_824A3818;
	case 73:
		goto loc_824A3848;
	case 74:
		goto loc_824A3878;
	case 75:
		goto loc_824A3428;
	case 76:
		goto loc_824A38A8;
	case 77:
		goto loc_824A3428;
	case 78:
		goto loc_824A38BC;
	case 79:
		goto loc_824A3FA4;
	case 80:
		goto loc_824A3428;
	case 81:
		goto loc_824A3428;
	case 82:
		goto loc_824A3428;
	case 83:
		goto loc_824A3428;
	case 84:
		goto loc_824A38D0;
	case 85:
		goto loc_824A3900;
	case 86:
		goto loc_824A3918;
	case 87:
		goto loc_824A3930;
	case 88:
		goto loc_824A3948;
	case 89:
		goto loc_824A3960;
	case 90:
		goto loc_824A3960;
	case 91:
		goto loc_824A3978;
	case 92:
		goto loc_824A3990;
	case 93:
		goto loc_824A39A8;
	case 94:
		goto loc_824A39C8;
	case 95:
		goto loc_824A39DC;
	case 96:
		goto loc_824A3A00;
	case 97:
		goto loc_824A3A18;
	case 98:
		goto loc_824A3A40;
	case 99:
		goto loc_824A3A80;
	case 100:
		goto loc_824A3AE0;
	case 101:
		goto loc_824A3B40;
	case 102:
		goto loc_824A3BA0;
	case 103:
		goto loc_824A3C00;
	case 104:
		goto loc_824A3C60;
	case 105:
		goto loc_824A3CC0;
	case 106:
		goto loc_824A3CD8;
	case 107:
		goto loc_824A3CF0;
	case 108:
		goto loc_824A3D08;
	case 109:
		goto loc_824A3D20;
	case 110:
		goto loc_824A3D38;
	case 111:
		goto loc_824A3D80;
	case 112:
		goto loc_824A3DB0;
	case 113:
		goto loc_824A3DE0;
	case 114:
		goto loc_824A3E10;
	case 115:
		goto loc_824A3E40;
	case 116:
		goto loc_824A3E58;
	case 117:
		goto loc_824A3E88;
	case 118:
		goto loc_824A3EA0;
	case 119:
		goto loc_824A3EE8;
	case 120:
		goto loc_824A3F48;
	case 121:
		goto loc_824A3F60;
	case 122:
		goto loc_824A3FCC;
	case 123:
		goto loc_824A3D50;
	case 124:
		goto loc_824A3D68;
	case 125:
		goto loc_824A3EB8;
	case 126:
		goto loc_824A4020;
	case 127:
		goto loc_824A4008;
	case 128:
		goto loc_824A4038;
	case 129:
		goto loc_824A3E70;
	case 130:
		goto loc_824A4050;
	case 131:
		goto loc_824A406C;
	case 132:
		goto loc_824A4088;
	case 133:
		goto loc_824A40A4;
	case 134:
		goto loc_824A40BC;
	case 135:
		goto loc_824A54F4;
	case 136:
		goto loc_824A54F4;
	case 137:
		goto loc_824A54F4;
	case 138:
		goto loc_824A3FA4;
	case 139:
		goto loc_824A3674;
	case 140:
		goto loc_824A40D4;
	case 141:
		goto loc_824A40E8;
	case 142:
		goto loc_824A3428;
	case 143:
		goto loc_824A40F0;
	case 144:
		goto loc_824A4100;
	case 145:
		goto loc_824A3428;
	case 146:
		goto loc_824A31EC;
	case 147:
		goto loc_824A4110;
	case 148:
		goto loc_824A4174;
	case 149:
		goto loc_824A41EC;
	case 150:
		goto loc_824A41FC;
	case 151:
		goto loc_824A41FC;
	case 152:
		goto loc_824A41FC;
	case 153:
		goto loc_824A41FC;
	case 154:
		goto loc_824A3428;
	case 155:
		goto loc_824A4218;
	case 156:
		goto loc_824A3FA4;
	case 157:
		goto loc_824A3428;
	case 158:
		goto loc_824A4228;
	case 159:
		goto loc_824A4250;
	case 160:
		goto loc_824A4278;
	case 161:
		goto loc_824A4290;
	case 162:
		goto loc_824A42A8;
	case 163:
		goto loc_824A42C4;
	case 164:
		goto loc_824A42E0;
	case 165:
		goto loc_824A4304;
	case 166:
		goto loc_824A3FA4;
	case 167:
		goto loc_824A3674;
	case 168:
		goto loc_824A3FA4;
	case 169:
		goto loc_824A3428;
	case 170:
		goto loc_824A434C;
	case 171:
		goto loc_824A3428;
	case 172:
		goto loc_824A31EC;
	case 173:
		goto loc_824A41EC;
	case 174:
		goto loc_824A4354;
	case 175:
		goto loc_824A3428;
	case 176:
		goto loc_824A31EC;
	case 177:
		goto loc_824A3428;
	case 178:
		goto loc_824A3428;
	case 179:
		goto loc_824A3428;
	case 180:
		goto loc_824A3428;
	case 181:
		goto loc_824A3428;
	case 182:
		goto loc_824A3FA4;
	case 183:
		goto loc_824A3428;
	case 184:
		goto loc_824A4398;
	case 185:
		goto loc_824A43B8;
	case 186:
		goto loc_824A3428;
	case 187:
		goto loc_824A31EC;
	case 188:
		goto loc_824A43D0;
	case 189:
		goto loc_824A3428;
	case 190:
		goto loc_824A43EC;
	case 191:
		goto loc_824A4408;
	case 192:
		goto loc_824A3428;
	case 193:
		goto loc_824A31EC;
	case 194:
		goto loc_824A4424;
	case 195:
		goto loc_824A4438;
	case 196:
		goto loc_824A444C;
	case 197:
		goto loc_824A4470;
	case 198:
		goto loc_824A4488;
	case 199:
		goto loc_824A45F0;
	case 200:
		goto loc_824A461C;
	case 201:
		goto loc_824A3FA4;
	case 202:
		goto loc_824A3FA4;
	case 203:
		goto loc_824A3674;
	case 204:
		goto loc_824A4630;
	case 205:
		goto loc_824A3FA4;
	case 206:
		goto loc_824A3428;
	case 207:
		goto loc_824A31EC;
	case 208:
		goto loc_824A4398;
	case 209:
		goto loc_824A463C;
	case 210:
		goto loc_824A4654;
	case 211:
		goto loc_824A54F4;
	case 212:
		goto loc_824A54F4;
	case 213:
		goto loc_824A3428;
	case 214:
		goto loc_824A3418;
	case 215:
		goto loc_824A4688;
	case 216:
		goto loc_824A46D8;
	case 217:
		goto loc_824A472C;
	case 218:
		goto loc_824A4744;
	case 219:
		goto loc_824A475C;
	case 220:
		goto loc_824A4774;
	case 221:
		goto loc_824A478C;
	case 222:
		goto loc_824A47A4;
	case 223:
		goto loc_824A47BC;
	case 224:
		goto loc_824A47D4;
	case 225:
		goto loc_824A47F0;
	case 226:
		goto loc_824A34D0;
	case 227:
		goto loc_824A34E8;
	case 228:
		goto loc_824A3500;
	case 229:
		goto loc_824A3518;
	case 230:
		goto loc_824A3428;
	case 231:
		goto loc_824A4808;
	case 232:
		goto loc_824A48B0;
	case 233:
		goto loc_824A3FA4;
	case 234:
		goto loc_824A3674;
	case 235:
		goto loc_824A4988;
	case 236:
		goto loc_824A41EC;
	case 237:
		goto loc_824A3428;
	case 238:
		goto loc_824A31EC;
	case 239:
		goto loc_824A499C;
	case 240:
		goto loc_824A3FA4;
	case 241:
		goto loc_824A3674;
	case 242:
		goto loc_824A4A1C;
	case 243:
		goto loc_824A4A38;
	case 244:
		goto loc_824A3428;
	case 245:
		goto loc_824A31EC;
	case 246:
		goto loc_824A4A8C;
	case 247:
		goto loc_824A54F4;
	case 248:
		goto loc_824A4A64;
	case 249:
		goto loc_824A4A74;
	case 250:
		goto loc_824A3FA4;
	case 251:
		goto loc_824A4B1C;
	case 252:
		goto loc_824A376C;
	case 253:
		goto loc_824A376C;
	case 254:
		goto loc_824A3FA4;
	case 255:
		goto loc_824A3674;
	case 256:
		goto loc_824A4B5C;
	case 257:
		goto loc_824A41EC;
	case 258:
		goto loc_824A3428;
	case 259:
		goto loc_824A31EC;
	case 260:
		goto loc_824A3FA4;
	case 261:
		goto loc_824A4B64;
	case 262:
		goto loc_824A4B78;
	case 263:
		goto loc_824A4B88;
	case 264:
		goto loc_824A4B90;
	case 265:
		goto loc_824A4BB0;
	case 266:
		goto loc_824A4BCC;
	case 267:
		goto loc_824A3428;
	case 268:
		goto loc_824A3428;
	case 269:
		goto loc_824A3428;
	case 270:
		goto loc_824A4BD8;
	case 271:
		goto loc_824A4BE4;
	case 272:
		goto loc_824A4BF0;
	case 273:
		goto loc_824A3428;
	case 274:
		goto loc_824A4BFC;
	case 275:
		goto loc_824A4C1C;
	case 276:
		goto loc_824A4C50;
	case 277:
		goto loc_824A4C6C;
	case 278:
		goto loc_824A4C8C;
	case 279:
		goto loc_824A3428;
	case 280:
		goto loc_824A4BFC;
	case 281:
		goto loc_824A4C1C;
	case 282:
		goto loc_824A4CA4;
	case 283:
		goto loc_824A4CC0;
	case 284:
		goto loc_824A4CC8;
	case 285:
		goto loc_824A4C50;
	case 286:
		goto loc_824A4C6C;
	case 287:
		goto loc_824A4CE0;
	case 288:
		goto loc_824A4D14;
	case 289:
		goto loc_824A4D28;
	case 290:
		goto loc_824A4D30;
	case 291:
		goto loc_824A4D40;
	case 292:
		goto loc_824A4D50;
	case 293:
		goto loc_824A4D6C;
	case 294:
		goto loc_824A4D88;
	case 295:
		goto loc_824A4DD4;
	case 296:
		goto loc_824A3428;
	case 297:
		goto loc_824A31EC;
	case 298:
		goto loc_824A4DE8;
	case 299:
		goto loc_824A3FA4;
	case 300:
		goto loc_824A4B64;
	case 301:
		goto loc_824A3428;
	case 302:
		goto loc_824A3FA4;
	case 303:
		goto loc_824A3428;
	case 304:
		goto loc_824A3FA4;
	case 305:
		goto loc_824A3428;
	case 306:
		goto loc_824A4DF0;
	case 307:
		goto loc_824A4E0C;
	case 308:
		goto loc_824A3428;
	case 309:
		goto loc_824A3428;
	case 310:
		goto loc_824A3428;
	case 311:
		goto loc_824A3428;
	case 312:
		goto loc_824A3428;
	case 313:
		goto loc_824A4E28;
	case 314:
		goto loc_824A4EE8;
	case 315:
		goto loc_824A4FD8;
	case 316:
		goto loc_824A4FD8;
	case 317:
		goto loc_824A4FE8;
	case 318:
		goto loc_824A4FF8;
	case 319:
		goto loc_824A500C;
	case 320:
		goto loc_824A3428;
	case 321:
		goto loc_824A501C;
	case 322:
		goto loc_824A501C;
	case 323:
		goto loc_824A5038;
	case 324:
		goto loc_824A5050;
	case 325:
		goto loc_824A5064;
	case 326:
		goto loc_824A50A4;
	case 327:
		goto loc_824A3428;
	case 328:
		goto loc_824A3FA4;
	case 329:
		goto loc_824A50D8;
	case 330:
		goto loc_824A50E8;
	case 331:
		goto loc_824A50E8;
	case 332:
		goto loc_824A50F0;
	case 333:
		goto loc_824A5108;
	case 334:
		goto loc_824A5128;
	case 335:
		goto loc_824A5140;
	case 336:
		goto loc_824A5168;
	case 337:
		goto loc_824A5170;
	case 338:
		goto loc_824A3428;
	case 339:
		goto loc_824A3428;
	case 340:
		goto loc_824A3428;
	case 341:
		goto loc_824A5180;
	case 342:
		goto loc_824A5194;
	case 343:
		goto loc_824A51A8;
	case 344:
		goto loc_824A51C8;
	case 345:
		goto loc_824A51D0;
	case 346:
		goto loc_824A3428;
	case 347:
		goto loc_824A51E8;
	case 348:
		goto loc_824A51F0;
	case 349:
		goto loc_824A51F8;
	case 350:
		goto loc_824A5200;
	case 351:
		goto loc_824A5208;
	case 352:
		goto loc_824A5210;
	case 353:
		goto loc_824A3428;
	case 354:
		goto loc_824A5218;
	case 355:
		goto loc_824A3428;
	case 356:
		goto loc_824A5220;
	case 357:
		goto loc_824A522C;
	case 358:
		goto loc_824A5238;
	case 359:
		goto loc_824A3428;
	case 360:
		goto loc_824A5244;
	case 361:
		goto loc_824A5250;
	case 362:
		goto loc_824A3428;
	case 363:
		goto loc_824A525C;
	case 364:
		goto loc_824A5268;
	case 365:
		goto loc_824A3428;
	case 366:
		goto loc_824A5274;
	case 367:
		goto loc_824A5280;
	case 368:
		goto loc_824A528C;
	case 369:
		goto loc_824A5298;
	case 370:
		goto loc_824A3428;
	case 371:
		goto loc_824A52A4;
	case 372:
		goto loc_824A52B0;
	case 373:
		goto loc_824A3428;
	case 374:
		goto loc_824A52BC;
	case 375:
		goto loc_824A3428;
	case 376:
		goto loc_824A52C8;
	case 377:
		goto loc_824A3428;
	case 378:
		goto loc_824A52D4;
	case 379:
		goto loc_824A3428;
	case 380:
		goto loc_824A52E0;
	case 381:
		goto loc_824A3428;
	case 382:
		goto loc_824A52EC;
	case 383:
		goto loc_824A3428;
	case 384:
		goto loc_824A5310;
	case 385:
		goto loc_824A531C;
	case 386:
		goto loc_824A5328;
	case 387:
		goto loc_824A5334;
	case 388:
		goto loc_824A5340;
	case 389:
		goto loc_824A534C;
	case 390:
		goto loc_824A5358;
	case 391:
		goto loc_824A5364;
	case 392:
		goto loc_824A5370;
	case 393:
		goto loc_824A537C;
	case 394:
		goto loc_824A5388;
	case 395:
		goto loc_824A3428;
	case 396:
		goto loc_824A52F8;
	case 397:
		goto loc_824A5394;
	case 398:
		goto loc_824A53B0;
	case 399:
		goto loc_824A3FA4;
	case 400:
		goto loc_824A3428;
	case 401:
		goto loc_824A53CC;
	case 402:
		goto loc_824A3428;
	case 403:
		goto loc_824A3428;
	case 404:
		goto loc_824A3428;
	case 405:
		goto loc_824A31EC;
	case 406:
		goto loc_824A3428;
	case 407:
		goto loc_824A3428;
	case 408:
		goto loc_824A53E8;
	case 409:
		goto loc_824A3428;
	case 410:
		goto loc_824A543C;
	case 411:
		goto loc_824A3428;
	case 412:
		goto loc_824A5454;
	case 413:
		goto loc_824A3428;
	case 414:
		goto loc_824A546C;
	case 415:
		goto loc_824A3428;
	case 416:
		goto loc_824A5480;
	case 417:
		goto loc_824A5480;
	case 418:
		goto loc_824A5480;
	case 419:
		goto loc_824A5480;
	case 420:
		goto loc_824A549C;
	case 421:
		goto loc_824A549C;
	case 422:
		goto loc_824A3FA4;
	case 423:
		goto loc_824A3428;
	case 424:
		goto loc_824A3428;
	case 425:
		goto loc_824A5480;
	case 426:
		goto loc_824A5480;
	case 427:
		goto loc_824A5480;
	case 428:
		goto loc_824A5480;
	case 429:
		goto loc_824A5480;
	case 430:
		goto loc_824A5480;
	case 431:
		goto loc_824A5480;
	case 432:
		goto loc_824A3428;
	case 433:
		goto loc_824A54B0;
	case 434:
		goto loc_824A5480;
	case 435:
		goto loc_824A5480;
	case 436:
		goto loc_824A5480;
	case 437:
		goto loc_824A54C4;
	case 438:
		goto loc_824A54DC;
	case 439:
		goto loc_824A54EC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_824A312C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r11,24260
	ctx.r6.s64 = ctx.r11.s64 + 24260;
loc_824A3134:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494e30
	ctx.lr = 0x824A3144;
	sub_82494E30(ctx, base);
	// b 0x824a37a0
	goto loc_824A37A0;
loc_824A3148:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82444750
	ctx.lr = 0x824A3150;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444ef0
	ctx.lr = 0x824A3178;
	sub_82444EF0(ctx, base);
loc_824A3178:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a3184
	goto loc_824A3184;
loc_824A3180:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A3184:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_824A3188:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A3190;
	sub_82494EB0(ctx, base);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A3194:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82444750
	ctx.lr = 0x824A319C;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a31cc
	if (ctx.cr0.eq) goto loc_824A31CC;
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r9,112(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 112);
	// lwz r8,108(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 108);
	// lwz r7,104(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 104);
	// lwz r6,100(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 100);
	// lwz r5,96(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 96);
	// lwz r4,92(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 92);
	// bl 0x82444ef0
	ctx.lr = 0x824A31C4;
	sub_82444EF0(ctx, base);
loc_824A31C4:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a31d0
	goto loc_824A31D0;
loc_824A31CC:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A31D0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A31DC;
	sub_82494EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
loc_824A31E0:
	// beq 0x824a376c
	if (ctx.cr0.eq) goto loc_824A376C;
loc_824A31E4:
	// stw r25,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r25.u32);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A31EC:
	// lwz r4,180(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
loc_824A31F0:
	// lwz r3,176(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x824448b0
	ctx.lr = 0x824A31F8;
	sub_824448B0(ctx, base);
loc_824A31F8:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_824A31FC:
	// stw r25,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r25.u32);
loc_824A3200:
	// stw r25,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r25.u32);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A3208:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82495490
	ctx.lr = 0x824A321C;
	sub_82495490(ctx, base);
loc_824A321C:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A322C;
	sub_82494EB0(ctx, base);
	// b 0x824a31e4
	goto loc_824A31E4;
loc_824A3230:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,184(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82495490
	ctx.lr = 0x824A3244;
	sub_82495490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A3254;
	sub_82494EB0(ctx, base);
	// stw r25,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r25.u32);
loc_824A3258:
	// stw r25,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r25.u32);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A3260:
	// lwz r31,176(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stw r25,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r25.u32);
	// stw r31,28(r28)
	REX_STORE_U32(r28.u32 + 28, r31.u32);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A3270:
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_824A327C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494f18
	ctx.lr = 0x824A3284;
	sub_82494F18(ctx, base);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A3288:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
loc_824A3290:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r7,184(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r5,176(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82495368
	ctx.lr = 0x824A32A4;
	sub_82495368(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A32B4;
	sub_82494EB0(ctx, base);
loc_824A32B4:
	// stw r25,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, r25.u32);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A32BC:
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r8,188(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r7,184(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r5,176(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82495368
	ctx.lr = 0x824A32D8;
	sub_82495368(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A32E8;
	sub_82494EB0(ctx, base);
	// stw r25,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r25.u32);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A32F0:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A32F8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a331c
	if (ctx.cr0.eq) goto loc_824A331C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82445d58
	ctx.lr = 0x824A3314;
	sub_82445D58(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a3320
	goto loc_824A3320;
loc_824A331C:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A3320:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A332C;
	sub_82494EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3344
	if (ctx.cr0.eq) goto loc_824A3344;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r31,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r31.u32);
	// b 0x824a3348
	goto loc_824A3348;
loc_824A3344:
	// lwz r31,176(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
loc_824A3348:
	// lwz r4,180(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824a31e4
	if (ctx.cr6.eq) goto loc_824A31E4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824985f0
	ctx.lr = 0x824A3360;
	sub_824985F0(ctx, base);
	// b 0x824a3674
	goto loc_824A3674;
loc_824A3364:
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a376c
	if (ctx.cr6.eq) goto loc_824A376C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,16(r28)
	REX_STORE_U32(r28.u32 + 16, ctx.r10.u32);
loc_824A3378:
	// stw r25,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r25.u32);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A3380:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82493788
	ctx.lr = 0x824A3390;
	sub_82493788(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
loc_824A33A8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82495550
	ctx.lr = 0x824A33B4;
	sub_82495550(ctx, base);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A33B8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82493788
	ctx.lr = 0x824A33C8;
	sub_82493788(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x824a33a8
	if (ctx.cr0.eq) goto loc_824A33A8;
	// stw r25,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r25.u32);
	// stw r25,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r25.u32);
	// b 0x824a33a8
	goto loc_824A33A8;
loc_824A33DC:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,184(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,176(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82495368
	ctx.lr = 0x824A33F8;
	sub_82495368(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A3408;
	sub_82494EB0(ctx, base);
	// b 0x824a3258
	goto loc_824A3258;
loc_824A340C:
	// lwz r8,188(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x824a3290
	goto loc_824A3290;
loc_824A3418:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x824985f0
	ctx.lr = 0x824A3428;
	sub_824985F0(ctx, base);
loc_824A3428:
	// lwz r31,176(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x824a31e4
	goto loc_824A31E4;
loc_824A3430:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A3438;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r4,2
	ctx.r4.s64 = 2;
loc_824A3444:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82445d58
	ctx.lr = 0x824A3454;
	sub_82445D58(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A3458:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A3460;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r4,64
	ctx.r4.s64 = 64;
	// b 0x824a3444
	goto loc_824A3444;
loc_824A3470:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A3478;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824a3444
	goto loc_824A3444;
loc_824A3488:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A3490;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x824a3444
	goto loc_824A3444;
loc_824A34A0:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A34A8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r4,256
	ctx.r4.s64 = 256;
	// b 0x824a3444
	goto loc_824A3444;
loc_824A34B8:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A34C0;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x824a3444
	goto loc_824A3444;
loc_824A34D0:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A34D8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// b 0x824a3444
	goto loc_824A3444;
loc_824A34E8:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A34F0;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// b 0x824a3444
	goto loc_824A3444;
loc_824A3500:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A3508;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// b 0x824a3444
	goto loc_824A3444;
loc_824A3518:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A3520;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// b 0x824a3444
	goto loc_824A3444;
loc_824A3530:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A3538;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a31cc
	if (ctx.cr0.eq) goto loc_824A31CC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,176(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82445d58
	ctx.lr = 0x824A3554;
	sub_82445D58(ctx, base);
	// b 0x824a31c4
	goto loc_824A31C4;
loc_824A3558:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A3560;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r4,512
	ctx.r4.s64 = 512;
	// b 0x824a3444
	goto loc_824A3444;
loc_824A3570:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A3578;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// b 0x824a3444
	goto loc_824A3444;
loc_824A3588:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A3590;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// b 0x824a3444
	goto loc_824A3444;
loc_824A35A0:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A35A8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a35cc
	if (ctx.cr0.eq) goto loc_824A35CC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_824A35B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82445d58
	ctx.lr = 0x824A35C4;
	sub_82445D58(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a35d0
	goto loc_824A35D0;
loc_824A35CC:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A35D0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A35DC;
	sub_82494EB0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
loc_824A35F0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8249acc8
	ctx.lr = 0x824A35FC;
	sub_8249ACC8(ctx, base);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A3600:
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r31,176(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stw r25,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r25.u32);
	// stw r25,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r25.u32);
	// b 0x824a35f0
	goto loc_824A35F0;
loc_824A361C:
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,24(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82445d58
	ctx.lr = 0x824A363C;
	sub_82445D58(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8249acc8
	ctx.lr = 0x824A3648;
	sub_8249ACC8(ctx, base);
	// b 0x824a3428
	goto loc_824A3428;
loc_824A364C:
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8249acc8
	ctx.lr = 0x824A366C;
	sub_8249ACC8(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stw r25,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r25.u32);
loc_824A3674:
	// lwz r31,180(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// b 0x824a3200
	goto loc_824A3200;
loc_824A367C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8249bf78
	ctx.lr = 0x824A368C;
	sub_8249BF78(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A3690:
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8249bf78
	ctx.lr = 0x824A36A8;
	sub_8249BF78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A36B8;
	sub_82494EB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,176(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x824448b0
	ctx.lr = 0x824A36C4;
	sub_824448B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a31e4
	goto loc_824A31E4;
loc_824A36CC:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A36D4;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a31cc
	if (ctx.cr0.eq) goto loc_824A31CC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-5200
	ctx.r6.s64 = ctx.r11.s64 + -5200;
loc_824A36E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82444918
	ctx.lr = 0x824A36F0;
	sub_82444918(ctx, base);
	// b 0x824a31c4
	goto loc_824A31C4;
loc_824A36F4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A36FC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3720
	if (ctx.cr0.eq) goto loc_824A3720;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-5200
	ctx.r6.s64 = ctx.r11.s64 + -5200;
loc_824A370C:
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82444918
	ctx.lr = 0x824A3718;
	sub_82444918(ctx, base);
loc_824A3718:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a3724
	goto loc_824A3724;
loc_824A3720:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A3724:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A3730;
	sub_82494EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a376c
	if (ctx.cr0.eq) goto loc_824A376C;
	// b 0x824a31fc
	goto loc_824A31FC;
loc_824A373C:
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,20(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8249b4f0
	ctx.lr = 0x824A3768;
	sub_8249B4F0(ctx, base);
loc_824A3768:
	// lwz r31,128(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_824A376C:
	// lwz r11,76(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824a37a0
	if (!ctx.cr6.eq) goto loc_824A37A0;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a5510
	if (ctx.cr6.eq) goto loc_824A5510;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r10.u32);
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r31.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_824A379C:
	// stw r3,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r3.u32);
loc_824A37A0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cfc
	return;
loc_824A37A8:
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,20(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8249b4f0
	ctx.lr = 0x824A37D4;
	sub_8249B4F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824a3768
	if (!ctx.cr0.eq) goto loc_824A3768;
	// lwz r31,128(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824a376c
	if (ctx.cr6.eq) goto loc_824A376C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824a376c
	if (ctx.cr6.eq) goto loc_824A376C;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r5,3005
	ctx.r5.s64 = 3005;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r6,r10,-5220
	ctx.r6.s64 = ctx.r10.s64 + -5220;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r7,24(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82494d48
	ctx.lr = 0x824A3814;
	sub_82494D48(ctx, base);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A3818:
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r9,32
	ctx.r9.s64 = 32;
	// lwz r8,20(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8249b4f0
	ctx.lr = 0x824A3844;
	sub_8249B4F0(ctx, base);
	// b 0x824a3768
	goto loc_824A3768;
loc_824A3848:
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r9,128
	ctx.r9.s64 = 128;
	// lwz r8,20(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8249b4f0
	ctx.lr = 0x824A3874;
	sub_8249B4F0(ctx, base);
	// b 0x824a3768
	goto loc_824A3768;
loc_824A3878:
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r9,64
	ctx.r9.s64 = 64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,20(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8249b4f0
	ctx.lr = 0x824A38A4;
	sub_8249B4F0(ctx, base);
	// b 0x824a3768
	goto loc_824A3768;
loc_824A38A8:
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
loc_824A38B0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82498500
	ctx.lr = 0x824A38B8;
	sub_82498500(ctx, base);
	// b 0x824a3674
	goto loc_824A3674;
loc_824A38BC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8249c3d0
	ctx.lr = 0x824A38CC;
	sub_8249C3D0(ctx, base);
	// b 0x824a31c4
	goto loc_824A31C4;
loc_824A38D0:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A38D8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,0
	ctx.r5.s64 = 0;
loc_824A38E4:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
loc_824A38EC:
	// li r7,1
	ctx.r7.s64 = 1;
loc_824A38F0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_824A38F4:
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x824461c0
	ctx.lr = 0x824A38FC;
	sub_824461C0(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A3900:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3908;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,5
	ctx.r5.s64 = 5;
	// b 0x824a38e4
	goto loc_824A38E4;
loc_824A3918:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3920;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,11
	ctx.r5.s64 = 11;
	// b 0x824a38e4
	goto loc_824A38E4;
loc_824A3930:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3938;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,12
	ctx.r5.s64 = 12;
	// b 0x824a38e4
	goto loc_824A38E4;
loc_824A3948:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3950;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,13
	ctx.r5.s64 = 13;
	// b 0x824a38e4
	goto loc_824A38E4;
loc_824A3960:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3968;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,9
	ctx.r5.s64 = 9;
	// b 0x824a38e4
	goto loc_824A38E4;
loc_824A3978:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3980;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,16
	ctx.r5.s64 = 16;
	// b 0x824a38e4
	goto loc_824A38E4;
loc_824A3990:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3998;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,20
	ctx.r5.s64 = 20;
	// b 0x824a38e4
	goto loc_824A38E4;
loc_824A39A8:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A39B0;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824a38ec
	goto loc_824A38EC;
loc_824A39C8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8249c230
	ctx.lr = 0x824A39D8;
	sub_8249C230(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A39DC:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A39E4;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x824a38f0
	goto loc_824A38F0;
loc_824A3A00:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r6,184(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8249c2e8
	ctx.lr = 0x824A3A14;
	sub_8249C2E8(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A3A18:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3A20;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,23
	ctx.r5.s64 = 23;
loc_824A3A2C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_824A3A30:
	// li r7,1
	ctx.r7.s64 = 1;
loc_824A3A34:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x824a38f4
	goto loc_824A38F4;
loc_824A3A40:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824a3a64
	if (!ctx.cr0.eq) goto loc_824A3A64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3A54;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,24
	ctx.r5.s64 = 24;
	// b 0x824a3a2c
	goto loc_824A3A2C;
loc_824A3A64:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-5268
	ctx.r6.s64 = ctx.r11.s64 + -5268;
loc_824A3A6C:
	// li r5,3086
	ctx.r5.s64 = 3086;
	// addi r4,r28,40
	ctx.r4.s64 = r28.s64 + 40;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494d48
	ctx.lr = 0x824A3A7C;
	sub_82494D48(ctx, base);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A3A80:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3A88;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3ab4
	if (ctx.cr0.eq) goto loc_824A3AB4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824461c0
	ctx.lr = 0x824A3AAC;
	sub_824461C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a3ab8
	goto loc_824A3AB8;
loc_824A3AB4:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A3AB8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A3AC4;
	sub_82494EB0(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3ACC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_824A3AD8:
	// li r5,25
	ctx.r5.s64 = 25;
	// b 0x824a3a30
	goto loc_824A3A30;
loc_824A3AE0:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3AE8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3b14
	if (ctx.cr0.eq) goto loc_824A3B14;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824461c0
	ctx.lr = 0x824A3B0C;
	sub_824461C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a3b18
	goto loc_824A3B18;
loc_824A3B14:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A3B18:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A3B24;
	sub_82494EB0(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3B2C;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_824A3B38:
	// li r5,26
	ctx.r5.s64 = 26;
	// b 0x824a3a30
	goto loc_824A3A30;
loc_824A3B40:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3B48;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3b74
	if (ctx.cr0.eq) goto loc_824A3B74;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824461c0
	ctx.lr = 0x824A3B6C;
	sub_824461C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a3b78
	goto loc_824A3B78;
loc_824A3B74:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A3B78:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A3B84;
	sub_82494EB0(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3B8C;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_824A3B98:
	// li r5,27
	ctx.r5.s64 = 27;
	// b 0x824a3a30
	goto loc_824A3A30;
loc_824A3BA0:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3BA8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3bd4
	if (ctx.cr0.eq) goto loc_824A3BD4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824461c0
	ctx.lr = 0x824A3BCC;
	sub_824461C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a3bd8
	goto loc_824A3BD8;
loc_824A3BD4:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A3BD8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A3BE4;
	sub_82494EB0(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3BEC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_824A3BF8:
	// li r5,28
	ctx.r5.s64 = 28;
	// b 0x824a3a30
	goto loc_824A3A30;
loc_824A3C00:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3C08;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3c34
	if (ctx.cr0.eq) goto loc_824A3C34;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824461c0
	ctx.lr = 0x824A3C2C;
	sub_824461C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a3c38
	goto loc_824A3C38;
loc_824A3C34:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A3C38:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A3C44;
	sub_82494EB0(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3C4C;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_824A3C58:
	// li r5,29
	ctx.r5.s64 = 29;
	// b 0x824a3a30
	goto loc_824A3A30;
loc_824A3C60:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3C68;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3c94
	if (ctx.cr0.eq) goto loc_824A3C94;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824461c0
	ctx.lr = 0x824A3C8C;
	sub_824461C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a3c98
	goto loc_824A3C98;
loc_824A3C94:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A3C98:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A3CA4;
	sub_82494EB0(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3CAC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_824A3CB8:
	// li r5,30
	ctx.r5.s64 = 30;
	// b 0x824a3a30
	goto loc_824A3A30;
loc_824A3CC0:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3CC8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x824a3ad8
	goto loc_824A3AD8;
loc_824A3CD8:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3CE0;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x824a3b38
	goto loc_824A3B38;
loc_824A3CF0:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3CF8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x824a3b98
	goto loc_824A3B98;
loc_824A3D08:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3D10;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x824a3bf8
	goto loc_824A3BF8;
loc_824A3D20:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3D28;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x824a3c58
	goto loc_824A3C58;
loc_824A3D38:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3D40;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x824a3cb8
	goto loc_824A3CB8;
loc_824A3D50:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3D58;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,33
	ctx.r5.s64 = 33;
	// b 0x824a3a2c
	goto loc_824A3A2C;
loc_824A3D68:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3D70;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,38
	ctx.r5.s64 = 38;
	// b 0x824a3a2c
	goto loc_824A3A2C;
loc_824A3D80:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824a3da4
	if (!ctx.cr0.eq) goto loc_824A3DA4;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3D94;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,34
	ctx.r5.s64 = 34;
	// b 0x824a3a2c
	goto loc_824A3A2C;
loc_824A3DA4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-5352
	ctx.r6.s64 = ctx.r11.s64 + -5352;
	// b 0x824a3a6c
	goto loc_824A3A6C;
loc_824A3DB0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824a3dd4
	if (!ctx.cr0.eq) goto loc_824A3DD4;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3DC4;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,35
	ctx.r5.s64 = 35;
	// b 0x824a3a2c
	goto loc_824A3A2C;
loc_824A3DD4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-5440
	ctx.r6.s64 = ctx.r11.s64 + -5440;
	// b 0x824a3a6c
	goto loc_824A3A6C;
loc_824A3DE0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824a3e04
	if (!ctx.cr0.eq) goto loc_824A3E04;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3DF4;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,36
	ctx.r5.s64 = 36;
	// b 0x824a3a2c
	goto loc_824A3A2C;
loc_824A3E04:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-5528
	ctx.r6.s64 = ctx.r11.s64 + -5528;
	// b 0x824a3a6c
	goto loc_824A3A6C;
loc_824A3E10:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824a3e34
	if (!ctx.cr0.eq) goto loc_824A3E34;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3E24;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,37
	ctx.r5.s64 = 37;
	// b 0x824a3a2c
	goto loc_824A3A2C;
loc_824A3E34:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-5616
	ctx.r6.s64 = ctx.r11.s64 + -5616;
	// b 0x824a3a6c
	goto loc_824A3A6C;
loc_824A3E40:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3E48;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,42
	ctx.r5.s64 = 42;
	// b 0x824a3a2c
	goto loc_824A3A2C;
loc_824A3E58:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3E60;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,43
	ctx.r5.s64 = 43;
	// b 0x824a3a2c
	goto loc_824A3A2C;
loc_824A3E70:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3E78;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,44
	ctx.r5.s64 = 44;
	// b 0x824a3a2c
	goto loc_824A3A2C;
loc_824A3E88:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3E90;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,45
	ctx.r5.s64 = 45;
	// b 0x824a3a2c
	goto loc_824A3A2C;
loc_824A3EA0:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3EA8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,46
	ctx.r5.s64 = 46;
	// b 0x824a3a2c
	goto loc_824A3A2C;
loc_824A3EB8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824a3edc
	if (!ctx.cr0.eq) goto loc_824A3EDC;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3ECC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,47
	ctx.r5.s64 = 47;
	// b 0x824a3a2c
	goto loc_824A3A2C;
loc_824A3EDC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-5676
	ctx.r6.s64 = ctx.r11.s64 + -5676;
	// b 0x824a3a6c
	goto loc_824A3A6C;
loc_824A3EE8:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3EF0;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3f1c
	if (ctx.cr0.eq) goto loc_824A3F1C;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824461c0
	ctx.lr = 0x824A3F14;
	sub_824461C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a3f20
	goto loc_824A3F20;
loc_824A3F1C:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A3F20:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A3F2C;
	sub_82494EB0(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3F34;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_824A3F40:
	// li r5,39
	ctx.r5.s64 = 39;
	// b 0x824a3a30
	goto loc_824A3A30;
loc_824A3F48:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3F50;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x824a3f40
	goto loc_824A3F40;
loc_824A3F60:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,180(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r25,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r25.u32);
	// bl 0x8249af20
	ctx.lr = 0x824A3F74;
	sub_8249AF20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824a3fac
	if (!ctx.cr0.lt) goto loc_824A3FAC;
loc_824A3F7C:
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a3f90
	if (!ctx.cr6.eq) goto loc_824A3F90;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_824A3F90:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,3020
	ctx.r5.s64 = 3020;
	// addi r6,r11,-5704
	ctx.r6.s64 = ctx.r11.s64 + -5704;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494d48
	ctx.lr = 0x824A3FA4;
	sub_82494D48(ctx, base);
loc_824A3FA4:
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x824a376c
	goto loc_824A376C;
loc_824A3FAC:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3FB4;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r5,31
	ctx.r5.s64 = 31;
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x824a3a34
	goto loc_824A3A34;
loc_824A3FCC:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,180(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r25,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r25.u32);
	// bl 0x8249af20
	ctx.lr = 0x824A3FE0;
	sub_8249AF20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a3f7c
	if (ctx.cr0.lt) goto loc_824A3F7C;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A3FF0;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x824a3a34
	goto loc_824A3A34;
loc_824A4008:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A4010;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,48
	ctx.r5.s64 = 48;
	// b 0x824a3a2c
	goto loc_824A3A2C;
loc_824A4020:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A4028;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,49
	ctx.r5.s64 = 49;
	// b 0x824a3a2c
	goto loc_824A3A2C;
loc_824A4038:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A4040;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,50
	ctx.r5.s64 = 50;
	// b 0x824a3a2c
	goto loc_824A3A2C;
loc_824A4050:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A4058;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r5,51
	ctx.r5.s64 = 51;
	// b 0x824a3a30
	goto loc_824A3A30;
loc_824A406C:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A4074;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r5,52
	ctx.r5.s64 = 52;
	// b 0x824a3a30
	goto loc_824A3A30;
loc_824A4088:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A4090;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r5,53
	ctx.r5.s64 = 53;
	// b 0x824a3a30
	goto loc_824A3A30;
loc_824A40A4:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A40AC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,40
	ctx.r5.s64 = 40;
	// b 0x824a3a2c
	goto loc_824A3A2C;
loc_824A40BC:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A40C4;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r5,41
	ctx.r5.s64 = 41;
	// b 0x824a3a2c
	goto loc_824A3A2C;
loc_824A40D4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824A40D8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,176(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8249c1b8
	ctx.lr = 0x824A40E4;
	sub_8249C1B8(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A40E8:
	// lwz r4,184(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// b 0x824a40d8
	goto loc_824A40D8;
loc_824A40F0:
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x824a38b0
	goto loc_824A38B0;
loc_824A4100:
	// li r4,1
	ctx.r4.s64 = 1;
loc_824A4104:
	// li r5,0
	ctx.r5.s64 = 0;
loc_824A4108:
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x824a327c
	goto loc_824A327C;
loc_824A4110:
	// lwz r31,180(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824a3200
	if (ctx.cr6.eq) goto loc_824A3200;
loc_824A4120:
	// lwz r31,8(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x824a4164
	if (!ctx.cr6.eq) goto loc_824A4164;
	// lwz r3,176(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A4144;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// bl 0x82494eb0
	ctx.lr = 0x824A415C;
	sub_82494EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3674
	if (ctx.cr0.eq) goto loc_824A3674;
loc_824A4164:
	// lwz r30,12(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824a4120
	if (!ctx.cr6.eq) goto loc_824A4120;
	// b 0x824a3674
	goto loc_824A3674;
loc_824A4174:
	// lwz r3,180(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a41d8
	if (ctx.cr6.eq) goto loc_824A41D8;
loc_824A4184:
	// lwz r31,8(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x824a41c8
	if (!ctx.cr6.eq) goto loc_824A41C8;
	// lwz r3,176(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A41A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// bl 0x82494eb0
	ctx.lr = 0x824A41C0;
	sub_82494EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a41d4
	if (ctx.cr0.eq) goto loc_824A41D4;
loc_824A41C8:
	// lwz r30,12(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824a4184
	if (!ctx.cr6.eq) goto loc_824A4184;
loc_824A41D4:
	// lwz r3,180(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
loc_824A41D8:
	// lwz r4,184(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x824448b0
	ctx.lr = 0x824A41E0;
	sub_824448B0(ctx, base);
loc_824A41E0:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_824A41E4:
	// stw r25,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r25.u32);
	// b 0x824a3258
	goto loc_824A3258;
loc_824A41EC:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A41F0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82495088
	ctx.lr = 0x824A41F8;
	sub_82495088(ctx, base);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A41FC:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A4204;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a31cc
	if (ctx.cr0.eq) goto loc_824A31CC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-5716
	ctx.r6.s64 = ctx.r11.s64 + -5716;
	// b 0x824a36e4
	goto loc_824A36E4;
loc_824A4218:
	// lwz r4,180(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,176(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x824448b0
	ctx.lr = 0x824A4224;
	sub_824448B0(ctx, base);
	// b 0x824a3718
	goto loc_824A3718;
loc_824A4228:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A4230;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a31cc
	if (ctx.cr0.eq) goto loc_824A31CC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_824A423C:
	// li r7,0
	ctx.r7.s64 = 0;
loc_824A4240:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82447f08
	ctx.lr = 0x824A424C;
	sub_82447F08(ctx, base);
	// b 0x824a31c4
	goto loc_824A31C4;
loc_824A4250:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A4258;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3720
	if (ctx.cr0.eq) goto loc_824A3720;
	// li r4,0
	ctx.r4.s64 = 0;
loc_824A4264:
	// li r7,0
	ctx.r7.s64 = 0;
loc_824A4268:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r5,176(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82447f08
	ctx.lr = 0x824A4274;
	sub_82447F08(ctx, base);
	// b 0x824a3718
	goto loc_824A3718;
loc_824A4278:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A4280;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a31cc
	if (ctx.cr0.eq) goto loc_824A31CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824a423c
	goto loc_824A423C;
loc_824A4290:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A4298;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3720
	if (ctx.cr0.eq) goto loc_824A3720;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824a4264
	goto loc_824A4264;
loc_824A42A8:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A42B0;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a31cc
	if (ctx.cr0.eq) goto loc_824A31CC;
	// lwz r7,180(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824a4240
	goto loc_824A4240;
loc_824A42C4:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A42CC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3720
	if (ctx.cr0.eq) goto loc_824A3720;
	// lwz r7,184(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824a4268
	goto loc_824A4268;
loc_824A42E0:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82444750
	ctx.lr = 0x824A42E8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a31cc
	if (ctx.cr0.eq) goto loc_824A31CC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82448180
	ctx.lr = 0x824A4300;
	sub_82448180(ctx, base);
	// b 0x824a31c4
	goto loc_824A31C4;
loc_824A4304:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82444750
	ctx.lr = 0x824A430C;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a432c
	if (ctx.cr0.eq) goto loc_824A432C;
	// lwz r6,184(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82448180
	ctx.lr = 0x824A4324;
	sub_82448180(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a4330
	goto loc_824A4330;
loc_824A432C:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A4330:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_824A4334:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A433C;
	sub_82494EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a376c
	if (ctx.cr0.eq) goto loc_824A376C;
	// stw r25,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r25.u32);
	// b 0x824a41e4
	goto loc_824A41E4;
loc_824A434C:
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x824a4104
	goto loc_824A4104;
loc_824A4354:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8249a0d0
	ctx.lr = 0x824A4360;
	sub_8249A0D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A4370;
	sub_82494EB0(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A4378;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-17164
	ctx.r6.s64 = ctx.r11.s64 + -17164;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82444918
	ctx.lr = 0x824A4394;
	sub_82444918(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A4398:
	// lwz r31,180(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
loc_824A439C:
	// stw r25,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r25.u32);
loc_824A43A0:
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a376c
	if (ctx.cr6.eq) goto loc_824A376C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,24(r28)
	REX_STORE_U32(r28.u32 + 24, ctx.r10.u32);
	// b 0x824a3378
	goto loc_824A3378;
loc_824A43B8:
	// lwz r4,180(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,176(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x824448b0
	ctx.lr = 0x824A43C4;
	sub_824448B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r25,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r25.u32);
	// b 0x824a439c
	goto loc_824A439C;
loc_824A43D0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r7,188(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r6,184(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x824a0a58
	ctx.lr = 0x824A43E8;
	sub_824A0A58(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A43EC:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A43F4;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a31cc
	if (ctx.cr0.eq) goto loc_824A31CC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-5728
	ctx.r6.s64 = ctx.r11.s64 + -5728;
	// b 0x824a36e4
	goto loc_824A36E4;
loc_824A4408:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A4410;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3720
	if (ctx.cr0.eq) goto loc_824A3720;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-5728
	ctx.r6.s64 = ctx.r11.s64 + -5728;
	// b 0x824a370c
	goto loc_824A370C;
loc_824A4424:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824941e0
	ctx.lr = 0x824A4434;
	sub_824941E0(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A4438:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824941e0
	ctx.lr = 0x824A4448;
	sub_824941E0(ctx, base);
	// b 0x824a321c
	goto loc_824A321C;
loc_824A444C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x824941e0
	ctx.lr = 0x824A445C;
	sub_824941E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A446C;
	sub_82494EB0(ctx, base);
	// b 0x824a31fc
	goto loc_824A31FC;
loc_824A4470:
	// lwz r31,176(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
loc_824A4474:
	// stw r25,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r25.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82495088
	ctx.lr = 0x824A4480;
	sub_82495088(ctx, base);
	// stw r25,32(r28)
	REX_STORE_U32(r28.u32 + 32, r25.u32);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A4488:
	// lwz r31,176(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824a4474
	if (ctx.cr6.eq) goto loc_824A4474;
	// lwz r29,8(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824a4474
	if (ctx.cr6.eq) goto loc_824A4474;
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r3,52
	ctx.r3.s64 = 52;
	// lwz r30,24(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 24);
	// stw r11,28(r29)
	REX_STORE_U32(r29.u32 + 28, ctx.r11.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stw r26,76(r30)
	REX_STORE_U32(r30.u32 + 76, r26.u32);
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
	// bl 0x82444750
	ctx.lr = 0x824A44C0;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a44d4
	if (ctx.cr0.eq) goto loc_824A44D4;
	// bl 0x82446f70
	ctx.lr = 0x824A44CC;
	sub_82446F70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a44d8
	goto loc_824A44D8;
loc_824A44D4:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A44D8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A44E4;
	sub_82494EB0(ctx, base);
	// stw r3,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r3.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824a454c
	if (ctx.cr6.eq) goto loc_824A454C;
	// stw r26,16(r31)
	REX_STORE_U32(r31.u32 + 16, r26.u32);
	// li r3,80
	ctx.r3.s64 = 80;
	// lwz r11,112(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 112);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lwz r11,112(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r28)
	REX_STORE_U32(r28.u32 + 112, ctx.r11.u32);
	// bl 0x82444750
	ctx.lr = 0x824A4510;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a453c
	if (ctx.cr0.eq) goto loc_824A453C;
	// addi r9,r28,40
	ctx.r9.s64 = r28.s64 + 40;
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
	ctx.lr = 0x824A4534;
	sub_824474C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824a4540
	goto loc_824A4540;
loc_824A453C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_824A4540:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A4548;
	sub_82494EB0(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
loc_824A454C:
	// stw r25,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r25.u32);
	// stw r25,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r25.u32);
	// lwz r5,20(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// b 0x824a45ac
	goto loc_824A45AC;
loc_824A4564:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82493608
	ctx.lr = 0x824A456C;
	sub_82493608(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x824a45a8
	if (ctx.cr0.eq) goto loc_824A45A8;
loc_824A4574:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a459c
	if (ctx.cr6.eq) goto loc_824A459C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x824a459c
	if (!ctx.cr6.eq) goto loc_824A459C;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,40(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 40);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824a45b8
	if (ctx.cr6.eq) goto loc_824A45B8;
loc_824A459C:
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824a4574
	if (!ctx.cr6.eq) goto loc_824A4574;
loc_824A45A8:
	// lwz r5,32(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
loc_824A45AC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x824a4564
	if (!ctx.cr6.eq) goto loc_824A4564;
	// b 0x824a4470
	goto loc_824A4470;
loc_824A45B8:
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a45e0
	if (ctx.cr6.eq) goto loc_824A45E0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r5,3069
	ctx.r5.s64 = 3069;
	// addi r6,r11,-5752
	ctx.r6.s64 = ctx.r11.s64 + -5752;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494d48
	ctx.lr = 0x824A45E0;
	sub_82494D48(ctx, base);
loc_824A45E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r26,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, r26.u32);
	// b 0x824a4470
	goto loc_824A4470;
loc_824A45F0:
	// lwz r7,188(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,184(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
loc_824A4600:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a1838
	ctx.lr = 0x824A4608;
	sub_824A1838(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A4618;
	sub_82494EB0(ctx, base);
	// b 0x824a43a0
	goto loc_824A43A0;
loc_824A461C:
	// lwz r7,192(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r6,188(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r5,184(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x824a4600
	goto loc_824A4600;
loc_824A4630:
	// lwz r5,36(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 36);
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x824a4108
	goto loc_824A4108;
loc_824A463C:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A4644;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a35cc
	if (ctx.cr0.eq) goto loc_824A35CC;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x824a35b4
	goto loc_824A35B4;
loc_824A4654:
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r31,176(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stw r25,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r25.u32);
	// stw r25,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r25.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm. r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824a35f0
	if (!ctx.cr0.eq) goto loc_824A35F0;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// b 0x824a35f0
	goto loc_824A35F0;
loc_824A4688:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A4690;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a46b4
	if (ctx.cr0.eq) goto loc_824A46B4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82445d58
	ctx.lr = 0x824A46AC;
	sub_82445D58(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a46b8
	goto loc_824A46B8;
loc_824A46B4:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A46B8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A46C4;
	sub_82494EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a376c
	if (ctx.cr0.eq) goto loc_824A376C;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// b 0x824a31e4
	goto loc_824A31E4;
loc_824A46D8:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A46E0;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a4704
	if (ctx.cr0.eq) goto loc_824A4704;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82445d58
	ctx.lr = 0x824A46FC;
	sub_82445D58(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a4708
	goto loc_824A4708;
loc_824A4704:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A4708:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A4714;
	sub_82494EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3418
	if (ctx.cr0.eq) goto loc_824A3418;
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r31,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r31.u32);
	// b 0x824a3418
	goto loc_824A3418;
loc_824A472C:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A4734;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x824a3444
	goto loc_824A3444;
loc_824A4744:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A474C;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r4,32
	ctx.r4.s64 = 32;
	// b 0x824a3444
	goto loc_824A3444;
loc_824A475C:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A4764;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r4,48
	ctx.r4.s64 = 48;
	// b 0x824a3444
	goto loc_824A3444;
loc_824A4774:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A477C;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r4,80
	ctx.r4.s64 = 80;
	// b 0x824a3444
	goto loc_824A3444;
loc_824A478C:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A4794;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// b 0x824a3444
	goto loc_824A3444;
loc_824A47A4:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A47AC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// b 0x824a3444
	goto loc_824A3444;
loc_824A47BC:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A47C4;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// b 0x824a3444
	goto loc_824A3444;
loc_824A47D4:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A47DC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// b 0x824a3444
	goto loc_824A3444;
loc_824A47F0:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82444750
	ctx.lr = 0x824A47F8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// b 0x824a3444
	goto loc_824A3444;
loc_824A4808:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A4810;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a4834
	if (ctx.cr0.eq) goto loc_824A4834;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-22516
	ctx.r6.s64 = ctx.r11.s64 + -22516;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x824A482C;
	sub_82444918(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a4838
	goto loc_824A4838;
loc_824A4834:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A4838:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A4844;
	sub_82494EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a48a0
	if (ctx.cr0.eq) goto loc_824A48A0;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82444750
	ctx.lr = 0x824A4854;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a487c
	if (ctx.cr0.eq) goto loc_824A487C;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,180(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r6,184(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r5,176(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x824453f8
	ctx.lr = 0x824A4874;
	sub_824453F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824a4880
	goto loc_824A4880;
loc_824A487C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_824A4880:
	// stw r4,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A488C;
	sub_82494EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a48a0
	if (ctx.cr0.eq) goto loc_824A48A0;
	// stw r25,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r25.u32);
	// stw r25,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r25.u32);
	// stw r25,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r25.u32);
loc_824A48A0:
	// lwz r11,92(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r28)
	REX_STORE_U32(r28.u32 + 92, ctx.r11.u32);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A48B0:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A48B8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a48dc
	if (ctx.cr0.eq) goto loc_824A48DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-22516
	ctx.r6.s64 = ctx.r11.s64 + -22516;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x824A48D4;
	sub_82444918(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a48e0
	goto loc_824A48E0;
loc_824A48DC:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A48E0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A48EC;
	sub_82494EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a4978
	if (ctx.cr0.eq) goto loc_824A4978;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82444750
	ctx.lr = 0x824A48FC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a4924
	if (ctx.cr0.eq) goto loc_824A4924;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,180(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r6,184(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r5,176(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x824453f8
	ctx.lr = 0x824A491C;
	sub_824453F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824a4928
	goto loc_824A4928;
loc_824A4924:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_824A4928:
	// stw r4,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A4934;
	sub_82494EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a4978
	if (ctx.cr0.eq) goto loc_824A4978;
	// stw r25,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r25.u32);
	// stw r25,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r25.u32);
	// stw r25,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r25.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a4978
	if (ctx.cr6.eq) goto loc_824A4978;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82495180
	ctx.lr = 0x824A4964;
	sub_82495180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824a4978
	if (!ctx.cr0.lt) goto loc_824A4978;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A4978;
	sub_82494EB0(ctx, base);
loc_824A4978:
	// lwz r11,96(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r28)
	REX_STORE_U32(r28.u32 + 96, ctx.r11.u32);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A4988:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494f18
	ctx.lr = 0x824A4998;
	sub_82494F18(ctx, base);
	// b 0x824a3fa4
	goto loc_824A3FA4;
loc_824A499C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A49A4;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a49c8
	if (ctx.cr0.eq) goto loc_824A49C8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-5760
	ctx.r6.s64 = ctx.r11.s64 + -5760;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x824A49C0;
	sub_82444918(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a49cc
	goto loc_824A49CC;
loc_824A49C8:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A49CC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A49D8;
	sub_82494EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a376c
	if (ctx.cr0.eq) goto loc_824A376C;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82444750
	ctx.lr = 0x824A49E8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a4a10
	if (ctx.cr0.eq) goto loc_824A4A10;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,180(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r6,184(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r5,176(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x824453f8
	ctx.lr = 0x824A4A08;
	sub_824453F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824a4a14
	goto loc_824A4A14;
loc_824A4A10:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_824A4A14:
	// stw r4,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// b 0x824a4334
	goto loc_824A4334;
loc_824A4A1C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494f18
	ctx.lr = 0x824A4A2C;
	sub_82494F18(ctx, base);
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A4A30:
	// stw r25,84(r28)
	REX_STORE_U32(r28.u32 + 84, r25.u32);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A4A38:
	// stw r26,84(r28)
	REX_STORE_U32(r28.u32 + 84, r26.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// bl 0x82495088
	ctx.lr = 0x824A4A48;
	sub_82495088(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a376c
	if (ctx.cr6.eq) goto loc_824A376C;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x824a376c
	if (!ctx.cr6.eq) goto loc_824A376C;
	// b 0x824a4a30
	goto loc_824A4A30;
loc_824A4A64:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824c6aa0
	ctx.lr = 0x824A4A70;
	sub_824C6AA0(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A4A74:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a4a8c
	if (ctx.cr0.eq) goto loc_824A4A8C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-5820
	ctx.r6.s64 = ctx.r11.s64 + -5820;
	// b 0x824a3a6c
	goto loc_824A3A6C;
loc_824A4A8C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A4A94;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a4ab8
	if (ctx.cr0.eq) goto loc_824A4AB8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-11724
	ctx.r6.s64 = ctx.r11.s64 + -11724;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x824A4AB0;
	sub_82444918(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a4abc
	goto loc_824A4ABC;
loc_824A4AB8:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A4ABC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A4AC8;
	sub_82494EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a376c
	if (ctx.cr0.eq) goto loc_824A376C;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82444750
	ctx.lr = 0x824A4AD8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a4af8
	if (ctx.cr0.eq) goto loc_824A4AF8;
	// lwz r6,188(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82447bf8
	ctx.lr = 0x824A4AF0;
	sub_82447BF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824a4afc
	goto loc_824A4AFC;
loc_824A4AF8:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_824A4AFC:
	// stw r4,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A4B08;
	sub_82494EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a376c
	if (ctx.cr0.eq) goto loc_824A376C;
	// stw r25,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r25.u32);
	// stw r25,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r25.u32);
	// b 0x824a32b4
	goto loc_824A32B4;
loc_824A4B1C:
	// lwz r31,176(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stw r25,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r25.u32);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x824a376c
	if (ctx.cr0.eq) goto loc_824A376C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x824a376c
	if (!ctx.cr6.eq) goto loc_824A376C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x824a376c
	if (!ctx.cr6.eq) goto loc_824A376C;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a376c
	if (!ctx.cr6.eq) goto loc_824A376C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A4B5C:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x824a4104
	goto loc_824A4104;
loc_824A4B64:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82494570
	ctx.lr = 0x824A4B70;
	sub_82494570(ctx, base);
loc_824A4B70:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a376c
	goto loc_824A376C;
loc_824A4B78:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824A4B7C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8249dba8
	ctx.lr = 0x824A4B84;
	sub_8249DBA8(ctx, base);
	// b 0x824a4b70
	goto loc_824A4B70;
loc_824A4B88:
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x824a4b7c
	goto loc_824A4B7C;
loc_824A4B90:
	// lwz r8,176(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// bl 0x8249e170
	ctx.lr = 0x824A4BAC;
	sub_8249E170(ctx, base);
	// b 0x824a4b70
	goto loc_824A4B70;
loc_824A4BB0:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A4BB8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a31cc
	if (ctx.cr0.eq) goto loc_824A31CC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,-22516
	ctx.r6.s64 = ctx.r11.s64 + -22516;
	// b 0x824a36e4
	goto loc_824A36E4;
loc_824A4BCC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494948
	ctx.lr = 0x824A4BD4;
	sub_82494948(ctx, base);
	// b 0x824a4b70
	goto loc_824A4B70;
loc_824A4BD8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494840
	ctx.lr = 0x824A4BE0;
	sub_82494840(ctx, base);
	// b 0x824a4b70
	goto loc_824A4B70;
loc_824A4BE4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494630
	ctx.lr = 0x824A4BEC;
	sub_82494630(ctx, base);
	// b 0x824a4b70
	goto loc_824A4B70;
loc_824A4BF0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494738
	ctx.lr = 0x824A4BF8;
	sub_82494738(ctx, base);
	// b 0x824a4b70
	goto loc_824A4B70;
loc_824A4BFC:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,180(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8249e170
	ctx.lr = 0x824A4C18;
	sub_8249E170(ctx, base);
	// b 0x824a31f8
	goto loc_824A31F8;
loc_824A4C1C:
	// lwz r8,192(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,188(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r6,184(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
loc_824A4C30:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8249e170
	ctx.lr = 0x824A4C38;
	sub_8249E170(ctx, base);
	// stw r25,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r25.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r25,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r25.u32);
	// stw r25,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, r25.u32);
	// stw r25,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r25.u32);
	// b 0x824a41f0
	goto loc_824A41F0;
loc_824A4C50:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A4C58;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3720
	if (ctx.cr0.eq) goto loc_824A3720;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,-22516
	ctx.r6.s64 = ctx.r11.s64 + -22516;
	// b 0x824a370c
	goto loc_824A370C;
loc_824A4C6C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,184(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8249e170
	ctx.lr = 0x824A4C88;
	sub_8249E170(ctx, base);
	// b 0x824a41e0
	goto loc_824A41E0;
loc_824A4C8C:
	// lwz r8,196(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r7,192(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r6,188(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r5,184(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x824a4c30
	goto loc_824A4C30;
loc_824A4CA4:
	// li r7,0
	ctx.r7.s64 = 0;
loc_824A4CA8:
	// lwz r5,176(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
loc_824A4CB4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8249dd08
	ctx.lr = 0x824A4CBC;
	sub_8249DD08(ctx, base);
	// b 0x824a4b70
	goto loc_824A4B70;
loc_824A4CC0:
	// lwz r7,184(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// b 0x824a4ca8
	goto loc_824A4CA8;
loc_824A4CC8:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,176(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
loc_824A4CD4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8249df78
	ctx.lr = 0x824A4CDC;
	sub_8249DF78(ctx, base);
	// b 0x824a4b70
	goto loc_824A4B70;
loc_824A4CE0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r8,196(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r7,192(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r6,188(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r5,184(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8249e170
	ctx.lr = 0x824A4CFC;
	sub_8249E170(ctx, base);
	// stw r25,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r25.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r25,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, r25.u32);
	// stw r25,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r25.u32);
	// stw r25,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, r25.u32);
	// b 0x824a41f0
	goto loc_824A41F0;
loc_824A4D14:
	// li r7,0
	ctx.r7.s64 = 0;
loc_824A4D18:
	// lwz r6,184(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x824a4cb4
	goto loc_824A4CB4;
loc_824A4D28:
	// lwz r7,188(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// b 0x824a4d18
	goto loc_824A4D18;
loc_824A4D30:
	// lwz r6,184(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x824a4cd4
	goto loc_824A4CD4;
loc_824A4D40:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8249afc8
	ctx.lr = 0x824A4D4C;
	sub_8249AFC8(ctx, base);
	// b 0x824a4b70
	goto loc_824A4B70;
loc_824A4D50:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A4D58;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82445bf8
	ctx.lr = 0x824A4D68;
	sub_82445BF8(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A4D6C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A4D74;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a31cc
	if (ctx.cr0.eq) goto loc_824A31CC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-5836
	ctx.r6.s64 = ctx.r11.s64 + -5836;
	// b 0x824a36e4
	goto loc_824A36E4;
loc_824A4D88:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A4D90;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a4db4
	if (ctx.cr0.eq) goto loc_824A4DB4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-5836
	ctx.r6.s64 = ctx.r11.s64 + -5836;
loc_824A4DA0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,180(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82444918
	ctx.lr = 0x824A4DAC;
	sub_82444918(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a4db8
	goto loc_824A4DB8;
loc_824A4DB4:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A4DB8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494eb0
	ctx.lr = 0x824A4DC4;
	sub_82494EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a376c
	if (ctx.cr0.eq) goto loc_824A376C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x824a31f0
	goto loc_824A31F0;
loc_824A4DD4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82494a40
	ctx.lr = 0x824A4DE4;
	sub_82494A40(ctx, base);
	// b 0x824a4b70
	goto loc_824A4B70;
loc_824A4DE8:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x824a4104
	goto loc_824A4104;
loc_824A4DF0:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A4DF8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a31cc
	if (ctx.cr0.eq) goto loc_824A31CC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-5848
	ctx.r6.s64 = ctx.r11.s64 + -5848;
	// b 0x824a36e4
	goto loc_824A36E4;
loc_824A4E0C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A4E14;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3720
	if (ctx.cr0.eq) goto loc_824A3720;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-5848
	ctx.r6.s64 = ctx.r11.s64 + -5848;
	// b 0x824a370c
	goto loc_824A370C;
loc_824A4E28:
	// li r3,80
	ctx.r3.s64 = 80;
	// addi r30,r28,40
	r30.s64 = r28.s64 + 40;
	// bl 0x82444750
	ctx.lr = 0x824A4E34;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a4e60
	if (ctx.cr0.eq) goto loc_824A4E60;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
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
	ctx.lr = 0x824A4E58;
	sub_824474C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a4e64
	goto loc_824A4E64;
loc_824A4E60:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A4E64:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824a4e74
	if (!ctx.cr6.eq) goto loc_824A4E74;
loc_824A4E6C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// b 0x824a4ee0
	goto loc_824A4EE0;
loc_824A4E74:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A4E7C;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a4ea4
	if (ctx.cr0.eq) goto loc_824A4EA4;
	// li r9,512
	ctx.r9.s64 = 512;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824461c0
	ctx.lr = 0x824A4EA0;
	sub_824461C0(ctx, base);
	// b 0x824a4ea8
	goto loc_824A4EA8;
loc_824A4EA4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_824A4EA8:
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a4e6c
	if (ctx.cr6.eq) goto loc_824A4E6C;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82444750
	ctx.lr = 0x824A4EBC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a4f90
	if (ctx.cr0.eq) goto loc_824A4F90;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x824a4f80
	goto loc_824A4F80;
loc_824A4ECC:
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824974b0
	ctx.lr = 0x824A4EDC;
	sub_824974B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_824A4EE0:
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// b 0x824a3188
	goto loc_824A3188;
loc_824A4EE8:
	// li r3,80
	ctx.r3.s64 = 80;
	// addi r30,r28,40
	r30.s64 = r28.s64 + 40;
	// bl 0x82444750
	ctx.lr = 0x824A4EF4;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a4f20
	if (ctx.cr0.eq) goto loc_824A4F20;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
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
	ctx.lr = 0x824A4F18;
	sub_824474C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a4f24
	goto loc_824A4F24;
loc_824A4F20:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824A4F24:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824a4e6c
	if (ctx.cr6.eq) goto loc_824A4E6C;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824A4F34;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a4f5c
	if (ctx.cr0.eq) goto loc_824A4F5C;
	// li r9,512
	ctx.r9.s64 = 512;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824461c0
	ctx.lr = 0x824A4F58;
	sub_824461C0(ctx, base);
	// b 0x824a4f60
	goto loc_824A4F60;
loc_824A4F5C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_824A4F60:
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a4e6c
	if (ctx.cr6.eq) goto loc_824A4E6C;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82444750
	ctx.lr = 0x824A4F74;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a4f90
	if (ctx.cr0.eq) goto loc_824A4F90;
	// li r5,0
	ctx.r5.s64 = 0;
loc_824A4F80:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82447910
	ctx.lr = 0x824A4F8C;
	sub_82447910(ctx, base);
	// b 0x824a4f94
	goto loc_824A4F94;
loc_824A4F90:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_824A4F94:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// beq cr6,0x824a4e6c
	if (ctx.cr6.eq) goto loc_824A4E6C;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A4FA8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a4fc8
	if (ctx.cr0.eq) goto loc_824A4FC8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-17164
	ctx.r6.s64 = ctx.r11.s64 + -17164;
	// bl 0x82444918
	ctx.lr = 0x824A4FC4;
	sub_82444918(ctx, base);
	// b 0x824a4fcc
	goto loc_824A4FCC;
loc_824A4FC8:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_824A4FCC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824a4ecc
	if (!ctx.cr6.eq) goto loc_824A4ECC;
	// b 0x824a4e6c
	goto loc_824A4E6C;
loc_824A4FD8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x824993b8
	ctx.lr = 0x824A4FE4;
	sub_824993B8(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A4FE8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82499480
	ctx.lr = 0x824A4FF4;
	sub_82499480(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A4FF8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8249c4a8
	ctx.lr = 0x824A5008;
	sub_8249C4A8(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A500C:
	// addi r4,r28,40
	ctx.r4.s64 = r28.s64 + 40;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824995d0
	ctx.lr = 0x824A5018;
	sub_824995D0(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A501C:
	// li r6,1
	ctx.r6.s64 = 1;
loc_824A5020:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8249c6f0
	ctx.lr = 0x824A5034;
	sub_8249C6F0(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A5038:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x824a1f10
	ctx.lr = 0x824A504C;
	sub_824A1F10(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A5050:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82495ea8
	ctx.lr = 0x824A505C;
	sub_82495EA8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// b 0x824a31e0
	goto loc_824A31E0;
loc_824A5064:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824c6980
	ctx.lr = 0x824A5074;
	sub_824C6980(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a376c
	if (ctx.cr0.lt) goto loc_824A376C;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82444750
	ctx.lr = 0x824A5084;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// bl 0x82447910
	ctx.lr = 0x824A50A0;
	sub_82447910(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A50A4:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,180(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824c6980
	ctx.lr = 0x824A50B4;
	sub_824C6980(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a376c
	if (ctx.cr0.lt) goto loc_824A376C;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r31,176(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A50D8:
	// lwz r4,180(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
loc_824A50DC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82499dd0
	ctx.lr = 0x824A50E4;
	sub_82499DD0(ctx, base);
	// b 0x824a4b70
	goto loc_824A4B70;
loc_824A50E8:
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x824a50dc
	goto loc_824A50DC;
loc_824A50F0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a5108
	if (ctx.cr0.eq) goto loc_824A5108;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-5904
	ctx.r6.s64 = ctx.r11.s64 + -5904;
	// b 0x824a3a6c
	goto loc_824A3A6C;
loc_824A5108:
	// li r8,0
	ctx.r8.s64 = 0;
loc_824A510C:
	// lwz r6,184(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
loc_824A5118:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x824a2b78
	ctx.lr = 0x824A5124;
	sub_824A2B78(ctx, base);
	// b 0x824a4b70
	goto loc_824A4B70;
loc_824A5128:
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,188(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r5,184(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r7,24(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x824a5118
	goto loc_824A5118;
loc_824A5140:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824a515c
	if (!ctx.cr0.eq) goto loc_824A515C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82499f90
	ctx.lr = 0x824A5158;
	sub_82499F90(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A515C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-5968
	ctx.r6.s64 = ctx.r11.s64 + -5968;
	// b 0x824a3a6c
	goto loc_824A3A6C;
loc_824A5168:
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x824a510c
	goto loc_824A510C;
loc_824A5170:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8249a0d0
	ctx.lr = 0x824A517C;
	sub_8249A0D0(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A5180:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8249d020
	ctx.lr = 0x824A5190;
	sub_8249D020(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A5194:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82499848
	ctx.lr = 0x824A51A4;
	sub_82499848(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A51A8:
	// li r4,45
	ctx.r4.s64 = 45;
loc_824A51AC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_824A51B0:
	// lwz r5,176(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,1
	ctx.r7.s64 = 1;
loc_824A51B8:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8249d2e8
	ctx.lr = 0x824A51C4;
	sub_8249D2E8(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A51C8:
	// li r4,46
	ctx.r4.s64 = 46;
	// b 0x824a51ac
	goto loc_824A51AC;
loc_824A51D0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r6,184(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x824a2560
	ctx.lr = 0x824A51E4;
	sub_824A2560(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A51E8:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x824a51ac
	goto loc_824A51AC;
loc_824A51F0:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x824a51ac
	goto loc_824A51AC;
loc_824A51F8:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x824a51ac
	goto loc_824A51AC;
loc_824A5200:
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x824a51ac
	goto loc_824A51AC;
loc_824A5208:
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x824a51ac
	goto loc_824A51AC;
loc_824A5210:
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x824a51ac
	goto loc_824A51AC;
loc_824A5218:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x824a5020
	goto loc_824A5020;
loc_824A5220:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A522C:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A5238:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A5244:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,11
	ctx.r4.s64 = 11;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A5250:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A525C:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A5268:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A5274:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A5280:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A528C:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,17
	ctx.r4.s64 = 17;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A5298:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,18
	ctx.r4.s64 = 18;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A52A4:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,19
	ctx.r4.s64 = 19;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A52B0:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,20
	ctx.r4.s64 = 20;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A52BC:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A52C8:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,22
	ctx.r4.s64 = 22;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A52D4:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,23
	ctx.r4.s64 = 23;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A52E0:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,24
	ctx.r4.s64 = 24;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A52EC:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,25
	ctx.r4.s64 = 25;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A52F8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r6,184(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8249ca08
	ctx.lr = 0x824A530C;
	sub_8249CA08(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A5310:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,27
	ctx.r4.s64 = 27;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A531C:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,35
	ctx.r4.s64 = 35;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A5328:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,36
	ctx.r4.s64 = 36;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A5334:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,37
	ctx.r4.s64 = 37;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A5340:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,38
	ctx.r4.s64 = 38;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A534C:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,39
	ctx.r4.s64 = 39;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A5358:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,40
	ctx.r4.s64 = 40;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A5364:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,41
	ctx.r4.s64 = 41;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A5370:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,42
	ctx.r4.s64 = 42;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A537C:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,43
	ctx.r4.s64 = 43;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A5388:
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,44
	ctx.r4.s64 = 44;
	// b 0x824a51b0
	goto loc_824A51B0;
loc_824A5394:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A539C;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a31cc
	if (ctx.cr0.eq) goto loc_824A31CC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-5984
	ctx.r6.s64 = ctx.r11.s64 + -5984;
	// b 0x824a36e4
	goto loc_824A36E4;
loc_824A53B0:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A53B8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a4db4
	if (ctx.cr0.eq) goto loc_824A4DB4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-5984
	ctx.r6.s64 = ctx.r11.s64 + -5984;
	// b 0x824a4da0
	goto loc_824A4DA0;
loc_824A53CC:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A53D4;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a31cc
	if (ctx.cr0.eq) goto loc_824A31CC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r6,r11,-17164
	ctx.r6.s64 = ctx.r11.s64 + -17164;
	// b 0x824a36e4
	goto loc_824A36E4;
loc_824A53E8:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a5428
	if (ctx.cr6.eq) goto loc_824A5428;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x824a5428
	if (!ctx.cr6.eq) goto loc_824A5428;
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a5410
	if (!ctx.cr6.eq) goto loc_824A5410;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
loc_824A5410:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r5,3081
	ctx.r5.s64 = 3081;
	// addi r6,r10,-6056
	ctx.r6.s64 = ctx.r10.s64 + -6056;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494dc0
	ctx.lr = 0x824A5428;
	sub_82494DC0(ctx, base);
loc_824A5428:
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824a51b8
	goto loc_824A51B8;
loc_824A543C:
	// lwz r31,176(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stw r25,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r25.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A5454:
	// lwz r31,176(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stw r25,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r25.u32);
	// lfd f0,24(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 24);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfd f0,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.f0.u64);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A546C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82497538
	ctx.lr = 0x824A547C;
	sub_82497538(ctx, base);
	// b 0x824a4b70
	goto loc_824A4B70;
loc_824A5480:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82444750
	ctx.lr = 0x824A5488;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a3180
	if (ctx.cr0.eq) goto loc_824A3180;
	// addi r4,r28,40
	ctx.r4.s64 = r28.s64 + 40;
	// bl 0x82444d78
	ctx.lr = 0x824A5498;
	sub_82444D78(ctx, base);
	// b 0x824a3178
	goto loc_824A3178;
loc_824A549C:
	// lwz r31,176(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r25,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r25.u32);
	// stw r11,36(r28)
	REX_STORE_U32(r28.u32 + 36, ctx.r11.u32);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A54B0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82497680
	ctx.lr = 0x824A54C0;
	sub_82497680(ctx, base);
	// b 0x824a4b70
	goto loc_824A4B70;
loc_824A54C4:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x82415dc8
	ctx.lr = 0x824A54D0;
	sub_82415DC8(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x82418e98
	ctx.lr = 0x824A54D8;
	sub_82418E98(ctx, base);
	// b 0x824a3fa4
	goto loc_824A3FA4;
loc_824A54DC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824A54E0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2e40
	ctx.lr = 0x824A54E8;
	sub_824A2E40(ctx, base);
	// b 0x824a4b70
	goto loc_824A4B70;
loc_824A54EC:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824a54e0
	goto loc_824A54E0;
loc_824A54F4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-6100
	ctx.r6.s64 = ctx.r11.s64 + -6100;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82494e30
	ctx.lr = 0x824A550C;
	sub_82494E30(ctx, base);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A5510:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A5518;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a5538
	if (ctx.cr0.eq) goto loc_824A5538;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,8(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r6,r11,24208
	ctx.r6.s64 = ctx.r11.s64 + 24208;
	// bl 0x82444918
	ctx.lr = 0x824A5534;
	sub_82444918(ctx, base);
	// b 0x824a553c
	goto loc_824A553C;
loc_824A5538:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_824A553C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824a379c
	if (!ctx.cr6.eq) goto loc_824A379C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r11,24176
	ctx.r6.s64 = ctx.r11.s64 + 24176;
	// b 0x824a3134
	goto loc_824A3134;
}

DEFINE_REX_FUNC(sub_825BD1A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825BD1A8;
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
	// li r6,61
	ctx.r6.s64 = 61;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x825bb860
	ctx.lr = 0x825BD1CC;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bd1f0
	if (ctx.cr6.eq) goto loc_825BD1F0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825BD1EC;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825BD1F0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825BD1F8;
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

DEFINE_REX_FUNC(sub_825C1A18) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825bdf00
	ctx.lr = 0x825C1A4C;
	sub_825BDF00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825C41D0) {
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
	ctx.lr = 0x825C41D8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r25,r4,4
	r25.s64 = ctx.r4.s64 + 4;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// li r21,0
	r21.s64 = 0;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_825C4200:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825c4434
	if (ctx.cr6.eq) goto loc_825C4434;
	// lwz r30,16(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825c4414
	if (ctx.cr6.eq) goto loc_825C4414;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c43c4
	if (!ctx.cr0.eq) goto loc_825C43C4;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r9,28(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 28);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x825c4414
	if (!ctx.cr6.eq) goto loc_825C4414;
	// rlwinm r11,r10,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r9,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825c4338
	if (ctx.cr0.eq) goto loc_825C4338;
	// rlwinm r11,r10,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825c42e4
	if (ctx.cr6.lt) goto loc_825C42E4;
	// beq cr6,0x825c42cc
	if (ctx.cr6.eq) goto loc_825C42CC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x825c42bc
	if (ctx.cr6.lt) goto loc_825C42BC;
	// beq cr6,0x825c42ac
	if (ctx.cr6.eq) goto loc_825C42AC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x825c42f0
	if (ctx.cr6.lt) goto loc_825C42F0;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x825c4288
	if (ctx.cr6.eq) goto loc_825C4288;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x825c4428
	if (!ctx.cr6.eq) goto loc_825C4428;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824f6e38
	ctx.lr = 0x825C4284;
	sub_824F6E38(ctx, base);
	// b 0x825c4320
	goto loc_825C4320;
loc_825C4288:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x825c42a4
	if (ctx.cr6.lt) goto loc_825C42A4;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x825c431c
	if (!ctx.cr6.gt) goto loc_825C431C;
loc_825C42A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825c431c
	goto loc_825C431C;
loc_825C42AC:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-13056
	ctx.r11.s64 = ctx.r11.s64 + -13056;
	// b 0x825c42d8
	goto loc_825C42D8;
loc_825C42BC:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-12928
	ctx.r11.s64 = ctx.r11.s64 + -12928;
	// b 0x825c42d8
	goto loc_825C42D8;
loc_825C42CC:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-12544
	ctx.r11.s64 = ctx.r11.s64 + -12544;
loc_825C42D8:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x825c4320
	goto loc_825C4320;
loc_825C42E4:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c42f8
	if (!ctx.cr0.eq) goto loc_825C42F8;
loc_825C42F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825c4320
	goto loc_825C4320;
loc_825C42F8:
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x825c4318
	if (ctx.cr6.eq) goto loc_825C4318;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// beq cr6,0x825c4318
	if (ctx.cr6.eq) goto loc_825C4318;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825c431c
	if (!ctx.cr6.eq) goto loc_825C431C;
loc_825C4318:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825C431C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_825C4320:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c4414
	if (ctx.cr0.eq) goto loc_825C4414;
loc_825C4328:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825c43a0
	goto loc_825C43A0;
loc_825C4338:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c4328
	if (ctx.cr0.eq) goto loc_825C4328;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x825c4360
	if (ctx.cr6.lt) goto loc_825C4360;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x825c4364
	if (!ctx.cr6.gt) goto loc_825C4364;
loc_825C4360:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825C4364:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c4328
	if (!ctx.cr0.eq) goto loc_825C4328;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x825c4384
	if (!ctx.cr6.eq) goto loc_825C4384;
	// cmplwi cr6,r10,113
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 113, ctx.xer);
	// beq cr6,0x825c4328
	if (ctx.cr6.eq) goto loc_825C4328;
loc_825C4384:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250b470
	ctx.lr = 0x825C4394;
	sub_8250B470(ctx, base);
	// b 0x825c4414
	goto loc_825C4414;
loc_825C4398:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_825C43A0:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x825c4398
	if (!ctx.cr6.eq) goto loc_825C4398;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r26)
	REX_STORE_U32(r26.u32 + 4, r31.u32);
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// b 0x825c43e8
	goto loc_825C43E8;
loc_825C43C4:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825bae70
	ctx.lr = 0x825C43E0;
	sub_825BAE70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c4414
	if (ctx.cr0.eq) goto loc_825C4414;
loc_825C43E8:
	// li r21,1
	r21.s64 = 1;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x825c4408
	if (ctx.cr6.eq) goto loc_825C4408;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8255e698
	ctx.lr = 0x825C4404;
	sub_8255E698(ctx, base);
	// b 0x825c4414
	goto loc_825C4414;
loc_825C4408:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_825C4414:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x825c4200
	if (!ctx.cr6.eq) goto loc_825C4200;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// b 0x825c4200
	goto loc_825C4200;
loc_825C4428:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824e4368
	ctx.lr = 0x825C4434;
	sub_824E4368(ctx, base);
loc_825C4434:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x825c4468
	if (ctx.cr6.eq) goto loc_825C4468;
	// clrlwi. r11,r21,24
	ctx.r11.u64 = r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c4468
	if (ctx.cr0.eq) goto loc_825C4468;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824f7708
	ctx.lr = 0x825C444C;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c4474
	if (ctx.cr0.eq) goto loc_825C4474;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825c2288
	ctx.lr = 0x825C4468;
	sub_825C2288(ctx, base);
loc_825C4468:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
loc_825C4474:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c4488
	if (!ctx.cr0.eq) goto loc_825C4488;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825c44b0
	goto loc_825C44B0;
loc_825C4488:
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x825c44a8
	if (ctx.cr6.eq) goto loc_825C44A8;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// beq cr6,0x825c44a8
	if (ctx.cr6.eq) goto loc_825C44A8;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825c44ac
	if (!ctx.cr6.eq) goto loc_825C44AC;
loc_825C44A8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825C44AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_825C44B0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c4598
	if (ctx.cr0.eq) goto loc_825C4598;
	// lwz r30,4(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 4);
loc_825C44BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825c4528
	if (ctx.cr6.eq) goto loc_825C4528;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825c4520
	if (ctx.cr6.eq) goto loc_825C4520;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r9,r11,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825c44e8
	if (ctx.cr0.eq) goto loc_825C44E8;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x825c44ec
	if (ctx.cr0.eq) goto loc_825C44EC;
loc_825C44E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825C44EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c4520
	if (ctx.cr0.eq) goto loc_825C4520;
	// lwz r31,4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_825C44F8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825c4520
	if (ctx.cr6.eq) goto loc_825C4520;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825c4518
	if (ctx.cr6.eq) goto loc_825C4518;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8255e698
	ctx.lr = 0x825C4518;
	sub_8255E698(ctx, base);
loc_825C4518:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x825c44f8
	goto loc_825C44F8;
loc_825C4520:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x825c44bc
	goto loc_825C44BC;
loc_825C4528:
	// lwz r30,0(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 0);
loc_825C452C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825c4598
	if (ctx.cr6.eq) goto loc_825C4598;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825c4590
	if (ctx.cr6.eq) goto loc_825C4590;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r9,r11,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825c4558
	if (ctx.cr0.eq) goto loc_825C4558;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x825c455c
	if (ctx.cr0.eq) goto loc_825C455C;
loc_825C4558:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825C455C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c4590
	if (ctx.cr0.eq) goto loc_825C4590;
	// lwz r31,4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_825C4568:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825c4590
	if (ctx.cr6.eq) goto loc_825C4590;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825c4588
	if (ctx.cr6.eq) goto loc_825C4588;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8255e698
	ctx.lr = 0x825C4588;
	sub_8255E698(ctx, base);
loc_825C4588:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x825c4568
	goto loc_825C4568;
loc_825C4590:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x825c452c
	goto loc_825C452C;
loc_825C4598:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824f6e38
	ctx.lr = 0x825C45A0;
	sub_824F6E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c465c
	if (ctx.cr0.eq) goto loc_825C465C;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lwz r29,28(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c465c
	if (!ctx.cr0.eq) goto loc_825C465C;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825c465c
	if (ctx.cr0.eq) goto loc_825C465C;
loc_825C45C4:
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,40(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 40);
	// clrlwi r8,r11,13
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r8,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c4640
	if (ctx.cr0.eq) goto loc_825C4640;
	// lwz r31,20(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 20);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c4640
	if (!ctx.cr0.eq) goto loc_825C4640;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x825c4640
	if (ctx.cr0.eq) goto loc_825C4640;
loc_825C4608:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x825c4628
	if (!ctx.cr6.eq) goto loc_825C4628;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8255e698
	ctx.lr = 0x825C4628;
	sub_8255E698(ctx, base);
loc_825C4628:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c4640
	if (!ctx.cr0.eq) goto loc_825C4640;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825c4608
	if (!ctx.cr6.eq) goto loc_825C4608;
loc_825C4640:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c465c
	if (!ctx.cr0.eq) goto loc_825C465C;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825c45c4
	if (!ctx.cr6.eq) goto loc_825C45C4;
loc_825C465C:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8255e698
	ctx.lr = 0x825C466C;
	sub_8255E698(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824f7708
	ctx.lr = 0x825C4674;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c4468
	if (ctx.cr0.eq) goto loc_825C4468;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r22,40
	r30.s64 = r22.s64 + 40;
loc_825C4684:
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825c4468
	if (!ctx.cr6.lt) goto loc_825C4468;
	// lwzu r11,4(r30)
	ea = 4 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8255e698
	ctx.lr = 0x825C46A8;
	sub_8255E698(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x825c4684
	goto loc_825C4684;
}

DEFINE_REX_FUNC(sub_825DEDD0) {
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
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x825dee10
	if (ctx.cr6.eq) goto loc_825DEE10;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825dee14
	if (!ctx.cr6.eq) goto loc_825DEE14;
loc_825DEE10:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825DEE14:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E31F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825E31F8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2736(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 2736);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,168(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r9,16(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r29,8(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r9,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r9.u32);
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x825e3268
	if (ctx.cr6.lt) goto loc_825E3268;
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// subf r4,r10,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bl 0x825e06b0
	ctx.lr = 0x825E323C;
	sub_825E06B0(ctx, base);
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stb r10,48(r31)
	REX_STORE_U8(r31.u32 + 48, ctx.r10.u8);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_825E3268:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825E6D18) {
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
	ctx.lr = 0x825E6D20;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// std r5,272(r1)
	REX_STORE_U64(ctx.r1.u32 + 272, ctx.r5.u64);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r24,r11,22852
	r24.s64 = ctx.r11.s64 + 22852;
	// std r6,280(r1)
	REX_STORE_U64(ctx.r1.u32 + 280, ctx.r6.u64);
	// std r7,288(r1)
	REX_STORE_U64(ctx.r1.u32 + 288, ctx.r7.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// std r8,296(r1)
	REX_STORE_U64(ctx.r1.u32 + 296, ctx.r8.u64);
	// lbz r11,1393(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 1393);
	// addi r23,r10,13848
	r23.s64 = ctx.r10.s64 + 13848;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825e6d78
	if (!ctx.cr0.eq) goto loc_825E6D78;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r11,13824
	ctx.r5.s64 = ctx.r11.s64 + 13824;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,422
	ctx.r7.s64 = 422;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E6D78;
	sub_824EA978(ctx, base);
loc_825E6D78:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x825e6d88
	if (!ctx.cr6.gt) goto loc_825E6D88;
	// cmpwi cr6,r25,5
	ctx.cr6.compare<int32_t>(r25.s32, 5, ctx.xer);
	// blt cr6,0x825e6da4
	if (ctx.cr6.lt) goto loc_825E6DA4;
loc_825E6D88:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r11,13780
	ctx.r5.s64 = ctx.r11.s64 + 13780;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,423
	ctx.r7.s64 = 423;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E6DA4;
	sub_824EA978(ctx, base);
loc_825E6DA4:
	// lwz r22,296(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r21,0
	r21.s64 = 0;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// lwz r4,272(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// li r9,928
	ctx.r9.s64 = 928;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r30,276(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r29,280(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// subfic r7,r7,896
	ctx.xer.ca = ctx.r7.u32 <= 896;
	ctx.r7.u64 = static_cast<uint64_t>(896) - ctx.r7.u64;
	// lwz r28,284(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r27,288(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r26,292(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r20,300(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// stw r22,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r22.u32);
	// li r22,1
	r22.s64 = 1;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r29,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// stw r27,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// stw r20,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r20.u32);
loc_825E6E28:
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r6,r25
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r25.s32, ctx.xer);
	// bge cr6,0x825e6e58
	if (!ctx.cr6.lt) goto loc_825E6E58;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stwx r22,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r22.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// b 0x825e6e5c
	goto loc_825E6E5C;
loc_825E6E58:
	// stwx r21,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r21.u32);
loc_825E6E5C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x825e6e28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825E6E28;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r26,-4(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825f79d0
	ctx.lr = 0x825E6E88;
	sub_825F79D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x825e6fe4
	if (!ctx.cr0.eq) goto loc_825E6FE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825E6EA4;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x825e6ec4
	if (ctx.cr0.eq) goto loc_825E6EC4;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x825faec0
	ctx.lr = 0x825E6EBC;
	sub_825FAEC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825e6ec8
	goto loc_825E6EC8;
loc_825E6EC4:
	// mr r30,r21
	r30.u64 = r21.u64;
loc_825E6EC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbz r11,1392(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1392);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825e6ef4
	if (!ctx.cr0.eq) goto loc_825E6EF4;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// stw r11,56(r30)
	REX_STORE_U32(r30.u32 + 56, ctx.r11.u32);
	// stw r10,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r10.u32);
	// b 0x825e6f68
	goto loc_825E6F68;
loc_825E6EF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e6b98
	ctx.lr = 0x825E6EFC;
	sub_825E6B98(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r3,56(r30)
	REX_STORE_U32(r30.u32 + 56, ctx.r3.u32);
	// mr r29,r21
	r29.u64 = r21.u64;
	// stw r11,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x825e6f68
	if (!ctx.cr6.gt) goto loc_825E6F68;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r1,96
	r28.s64 = ctx.r1.s64 + 96;
	// addi r27,r11,13764
	r27.s64 = ctx.r11.s64 + 13764;
loc_825E6F20:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e6f44
	if (ctx.cr6.eq) goto loc_825E6F44;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,457
	ctx.r7.s64 = 457;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E6F44;
	sub_824EA978(ctx, base);
loc_825E6F44:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// ld r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U64(r28.u32 + 0);
	// lwz r4,56(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 56);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x825b3c20
	ctx.lr = 0x825E6F58;
	sub_825B3C20(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(r29.s32, r25.s32, ctx.xer);
	// blt cr6,0x825e6f20
	if (ctx.cr6.lt) goto loc_825E6F20;
loc_825E6F68:
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r30,928
	ctx.r11.s64 = r30.s64 + 928;
	// addi r9,r30,896
	ctx.r9.s64 = r30.s64 + 896;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_825E6F80:
	// cmpw cr6,r7,r25
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r25.s32, ctx.xer);
	// bge cr6,0x825e6fa0
	if (!ctx.cr6.lt) goto loc_825E6FA0;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r22.u32);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r6,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// b 0x825e6fa4
	goto loc_825E6FA4;
loc_825E6FA0:
	// stw r21,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r21.u32);
loc_825E6FA4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x825e6f80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825E6F80;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,2736(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// lwz r3,164(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E6FD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825f7a90
	ctx.lr = 0x825E6FE4;
	sub_825F7A90(ctx, base);
loc_825E6FE4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_825F8AB0) {
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
	// bl 0x825f7fb8
	ctx.lr = 0x825F8AC8;
	sub_825F7FB8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,28528
	ctx.r11.s64 = ctx.r11.s64 + 28528;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_825F9888) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825F9A18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825F9A20;
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
loc_825F9A30:
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
	ctx.lr = 0x825F9A4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne cr6,0x825f9a74
	if (!ctx.cr6.eq) goto loc_825F9A74;
	// li r6,0
	ctx.r6.s64 = 0;
loc_825F9A74:
	// bctrl 
	ctx.lr = 0x825F9A78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x825f9a30
	if (ctx.cr6.lt) goto loc_825F9A30;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825FAEB0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,31528
	ctx.r3.s64 = ctx.r11.s64 + 31528;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FB0E8) {
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
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825fa990
	ctx.lr = 0x825FB104;
	sub_825FA990(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,31896
	ctx.r10.s64 = ctx.r10.s64 + 31896;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_825FBD78) {
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
	// lwz r30,1452(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 1452);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FBDA0;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x825fbdd8
	if (ctx.cr0.eq) goto loc_825FBDD8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,126
	ctx.r4.s64 = 126;
	// bl 0x825fa990
	ctx.lr = 0x825FBDBC;
	sub_825FA990(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,32240
	ctx.r10.s64 = ctx.r10.s64 + 32240;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x825fbddc
	goto loc_825FBDDC;
loc_825FBDD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825FBDDC:
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

DEFINE_REX_FUNC(sub_826001A0) {
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
	ctx.lr = 0x826001A8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r9
	r17.u64 = ctx.r9.u64;
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// rlwinm r10,r9,19,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1F8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r4,25
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 25, ctx.xer);
	// bne cr6,0x8260020c
	if (!ctx.cr6.eq) goto loc_8260020C;
	// lwz r11,2104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2104);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x826001f4
	if (ctx.cr6.lt) goto loc_826001F4;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_826001F4:
	// stw r11,2104(r31)
	REX_STORE_U32(r31.u32 + 2104, ctx.r11.u32);
	// lwz r11,2108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2108);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x82600208
	if (ctx.cr6.gt) goto loc_82600208;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
loc_82600208:
	// stw r11,2108(r31)
	REX_STORE_U32(r31.u32 + 2108, ctx.r11.u32);
loc_8260020C:
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// bl 0x825e7538
	ctx.lr = 0x82600214;
	sub_825E7538(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// clrlwi. r20,r30,24
	r20.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq 0x82600230
	if (ctx.cr0.eq) goto loc_82600230;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// b 0x82600248
	goto loc_82600248;
loc_82600230:
	// lwz r9,0(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// rlwinm r10,r9,19,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1F8;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82600248:
	// bl 0x825e7538
	ctx.lr = 0x8260024C;
	sub_825E7538(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r7,r10,15992
	ctx.r7.s64 = ctx.r10.s64 + 15992;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r6,1384(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 1384);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x825d4b90
	ctx.lr = 0x82600274;
	sub_825D4B90(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r23,r11,22852
	r23.s64 = ctx.r11.s64 + 22852;
	// addi r21,r10,-19112
	r21.s64 = ctx.r10.s64 + -19112;
	// addi r22,r9,-20568
	r22.s64 = ctx.r9.s64 + -20568;
	// beq cr6,0x826002ac
	if (ctx.cr6.eq) goto loc_826002AC;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,1077
	ctx.r7.s64 = 1077;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x826002AC;
	sub_824EA978(ctx, base);
loc_826002AC:
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(r24.s32, -1, ctx.xer);
	// beq cr6,0x8260041c
	if (ctx.cr6.eq) goto loc_8260041C;
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r3,1488(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826002D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x825d4018
	ctx.lr = 0x826002EC;
	sub_825D4018(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8260041c
	if (!ctx.cr6.eq) goto loc_8260041C;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x825d5a08
	ctx.lr = 0x82600310;
	sub_825D5A08(ctx, base);
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x8260031C;
	sub_825F9AD0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,1508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// stw r29,1508(r10)
	REX_STORE_U32(ctx.r10.u32 + 1508, r29.u32);
	// stw r29,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r29.u32);
	// stw r26,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r26.u32);
	// bl 0x825f9f38
	ctx.lr = 0x82600344;
	sub_825F9F38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f0,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmr f4,f1
	ctx.f4.f64 = ctx.f1.f64;
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x825faab8
	ctx.lr = 0x82600370;
	sub_825FAAB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x8260037C;
	sub_825D82D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825fcb18
	ctx.lr = 0x82600388;
	sub_825FCB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x82600390;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826003b4
	if (!ctx.cr0.eq) goto loc_826003B4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r5,r11,10244
	ctx.r5.s64 = ctx.r11.s64 + 10244;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,1102
	ctx.r7.s64 = 1102;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x826003B4;
	sub_824EA978(ctx, base);
loc_826003B4:
	// li r3,21
	ctx.r3.s64 = 21;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x826003C0;
	sub_825F9AD0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r29,56(r30)
	REX_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r26,80(r30)
	REX_STORE_U32(r30.u32 + 80, r26.u32);
	// stw r29,60(r30)
	REX_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r26,84(r30)
	REX_STORE_U32(r30.u32 + 84, r26.u32);
	// bl 0x825d82d0
	ctx.lr = 0x826003E0;
	sub_825D82D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825fcb18
	ctx.lr = 0x826003EC;
	sub_825FCB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x826003F4;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82600418
	if (!ctx.cr0.eq) goto loc_82600418;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r5,r11,-19132
	ctx.r5.s64 = ctx.r11.s64 + -19132;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,1113
	ctx.r7.s64 = 1113;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x82600418;
	sub_824EA978(ctx, base);
loc_82600418:
	// lwz r25,28(r30)
	r25.u64 = REX_LOAD_U32(r30.u32 + 28);
loc_8260041C:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r28,r26
	r28.u64 = r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82600590
	if (!ctx.cr6.gt) goto loc_82600590;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r27,r11,-30136
	r27.s64 = ctx.r11.s64 + -30136;
loc_82600434:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x825fc098
	ctx.lr = 0x82600448;
	sub_825FC098(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x82600458;
	sub_825F9F38(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9f38
	ctx.lr = 0x82600468;
	sub_825F9F38(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// bne cr6,0x82600494
	if (!ctx.cr6.eq) goto loc_82600494;
	// lwz r11,-36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -36);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825fe3a0
	ctx.lr = 0x82600490;
	sub_825FE3A0(ctx, base);
	// b 0x8260049c
	goto loc_8260049C;
loc_82600494:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r11,132(r30)
	REX_STORE_U32(r30.u32 + 132, ctx.r11.u32);
loc_8260049C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r8,r10,15992
	ctx.r8.s64 = ctx.r10.s64 + 15992;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,1536(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1536);
	// lwz r7,1384(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 1384);
	// bl 0x825d47c0
	ctx.lr = 0x826004C4;
	sub_825D47C0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x826004e4
	if (ctx.cr6.eq) goto loc_826004E4;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,1146
	ctx.r7.s64 = 1146;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x826004E4;
	sub_824EA978(ctx, base);
loc_826004E4:
	// stw r16,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r16.u32);
	// mr r29,r26
	r29.u64 = r26.u64;
loc_826004EC:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// bl 0x825fde00
	ctx.lr = 0x826004F8;
	sub_825FDE00(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r3,r29,r11
	REX_STORE_U8(r29.u32 + ctx.r11.u32, ctx.r3.u8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// blt cr6,0x826004ec
	if (ctx.cr6.lt) goto loc_826004EC;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82600518:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82600558
	if (ctx.cr6.lt) goto loc_82600558;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bgt cr6,0x82600558
	if (ctx.cr6.gt) goto loc_82600558;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,-4(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + -4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8260054c
	if (ctx.cr6.lt) goto loc_8260054C;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// ble cr6,0x82600554
	if (!ctx.cr6.gt) goto loc_82600554;
loc_8260054C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_82600554:
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
loc_82600558:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82600518
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82600518;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,128(r30)
	REX_STORE_U32(r30.u32 + 128, ctx.r11.u32);
	// bl 0x825d82d0
	ctx.lr = 0x82600574;
	sub_825D82D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825fcb18
	ctx.lr = 0x82600580;
	sub_825FCB18(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82600434
	if (ctx.cr6.lt) goto loc_82600434;
loc_82600590:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,29(r25)
	REX_STORE_U8(r25.u32 + 29, ctx.r11.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_8261AC10) {
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
	// addi r10,r11,-14164
	ctx.r10.s64 = ctx.r11.s64 + -14164;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_8261AC34:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8261ac54
	if (!ctx.cr0.eq) goto loc_8261AC54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8261ac34
	if (!ctx.cr6.eq) goto loc_8261AC34;
loc_8261AC54:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8261ac84
	if (!ctx.cr0.eq) goto loc_8261AC84;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// bne cr6,0x8261ac6c
	if (!ctx.cr6.eq) goto loc_8261AC6C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8261AC6C:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261AC80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8261ac8c
	goto loc_8261AC8C;
loc_8261AC84:
	// bl 0x82617aa8
	ctx.lr = 0x8261AC88;
	sub_82617AA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8261AC8C:
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

DEFINE_REX_FUNC(sub_82620340) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c90
	ctx.lr = 0x82620348;
	// stfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f29.u64);
	// stfd f30,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r25,0
	r25.s64 = 0;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r25
	r26.u64 = r25.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82620a78
	if (ctx.cr6.eq) goto loc_82620A78;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r21,1
	r21.s64 = 1;
	// li r22,4
	r22.s64 = 4;
	// li r19,2
	r19.s64 = 2;
	// lfs f30,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f30.f64 = double(temp.f32);
	// li r24,6
	r24.s64 = 6;
	// lfs f29,3804(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3804);
	f29.f64 = double(temp.f32);
	// li r18,5
	r18.s64 = 5;
	// li r20,8
	r20.s64 = 8;
	// li r23,-1
	r23.s64 = -1;
loc_826203A0:
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82620a6c
	if (ctx.cr6.gt) goto loc_82620A6C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82620458
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82620458;
	// bdzf 4*cr6+eq,0x82620480
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82620480;
	// bdzf 4*cr6+eq,0x82620a6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82620A6C;
	// bdzf 4*cr6+eq,0x8262052c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8262052C;
	// bne cr6,0x826205ec
	if (!ctx.cr6.eq) goto loc_826205EC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8263a828
	ctx.lr = 0x826203D0;
	sub_8263A828(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82620a78
	if (ctx.cr6.lt) goto loc_82620A78;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bne cr6,0x82620430
	if (!ctx.cr6.eq) goto loc_82620430;
	// stw r21,36(r28)
	REX_STORE_U32(r28.u32 + 36, r21.u32);
	// sth r25,202(r11)
	REX_STORE_U16(ctx.r11.u32 + 202, r25.u16);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// sth r25,150(r28)
	REX_STORE_U16(r28.u32 + 150, r25.u16);
	// lwz r9,60(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bgt cr6,0x82620410
	if (ctx.cr6.gt) goto loc_82620410;
	// stw r25,56(r28)
	REX_STORE_U32(r28.u32 + 56, r25.u32);
	// b 0x82620a6c
	goto loc_82620A6C;
loc_82620410:
	// lwz r11,512(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 512);
	// stw r22,56(r28)
	REX_STORE_U32(r28.u32 + 56, r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82620a6c
	if (ctx.cr6.eq) goto loc_82620A6C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8262042C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82620a6c
	goto loc_82620A6C;
loc_82620430:
	// stw r19,36(r28)
	REX_STORE_U32(r28.u32 + 36, r19.u32);
	// sth r25,150(r28)
	REX_STORE_U16(r28.u32 + 150, r25.u16);
	// stb r25,145(r28)
	REX_STORE_U8(r28.u32 + 145, r25.u8);
	// stw r24,72(r28)
	REX_STORE_U32(r28.u32 + 72, r24.u32);
	// sth r25,148(r28)
	REX_STORE_U16(r28.u32 + 148, r25.u16);
	// sth r25,202(r11)
	REX_STORE_U16(ctx.r11.u32 + 202, r25.u16);
	// stw r25,76(r28)
	REX_STORE_U32(r28.u32 + 76, r25.u32);
	// stw r25,200(r28)
	REX_STORE_U32(r28.u32 + 200, r25.u32);
	// stw r25,208(r28)
	REX_STORE_U32(r28.u32 + 208, r25.u32);
	// b 0x82620a6c
	goto loc_82620A6C;
loc_82620458:
	// lwz r11,508(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 508);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,320(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8262046C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82620a78
	if (ctx.cr6.lt) goto loc_82620A78;
	// stw r18,36(r28)
	REX_STORE_U32(r28.u32 + 36, r18.u32);
	// b 0x82620a6c
	goto loc_82620A6C;
loc_82620480:
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
	// bge cr6,0x82620524
	if (!ctx.cr6.lt) goto loc_82620524;
loc_82620498:
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
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,40(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826204e0
	if (ctx.cr6.eq) goto loc_826204E0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x8263bbc8
	ctx.lr = 0x826204D4;
	sub_8263BBC8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82620a78
	if (ctx.cr6.lt) goto loc_82620A78;
loc_826204E0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stb r25,145(r28)
	REX_STORE_U8(r28.u32 + 145, r25.u8);
	// stw r24,72(r28)
	REX_STORE_U32(r28.u32 + 72, r24.u32);
	// sth r25,148(r28)
	REX_STORE_U16(r28.u32 + 148, r25.u16);
	// sth r25,202(r11)
	REX_STORE_U16(ctx.r11.u32 + 202, r25.u16);
	// stw r25,76(r28)
	REX_STORE_U32(r28.u32 + 76, r25.u32);
	// stw r25,200(r28)
	REX_STORE_U32(r28.u32 + 200, r25.u32);
	// stw r25,208(r28)
	REX_STORE_U32(r28.u32 + 208, r25.u32);
	// lhz r11,150(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 150);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,150(r28)
	REX_STORE_U16(r28.u32 + 150, ctx.r9.u16);
	// lhz r7,580(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82620498
	if (ctx.cr6.lt) goto loc_82620498;
loc_82620524:
	// stw r22,36(r28)
	REX_STORE_U32(r28.u32 + 36, r22.u32);
	// b 0x82620a6c
	goto loc_82620A6C;
loc_8262052C:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82620a68
	if (!ctx.cr6.gt) goto loc_82620A68;
	// mr r29,r25
	r29.u64 = r25.u64;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_82620544:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,40(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x826205b0
	if (ctx.cr6.eq) goto loc_826205B0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8263c148
	ctx.lr = 0x82620578;
	sub_8263C148(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82620a78
	if (ctx.cr6.lt) goto loc_82620A78;
	// stw r25,48(r30)
	REX_STORE_U32(r30.u32 + 48, r25.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826205cc
	if (!ctx.cr6.eq) goto loc_826205CC;
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x826e2058
	ctx.lr = 0x826205AC;
	sub_826E2058(ctx, base);
	// b 0x826205cc
	goto loc_826205CC;
loc_826205B0:
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x826205C8;
	sub_826A2E60(ctx, base);
	// stw r25,48(r30)
	REX_STORE_U32(r30.u32 + 48, r25.u32);
loc_826205CC:
	// lhz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 580);
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
	// blt cr6,0x82620544
	if (ctx.cr6.lt) goto loc_82620544;
	// b 0x82620a68
	goto loc_82620A68;
loc_826205EC:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82620658
	if (!ctx.cr6.eq) goto loc_82620658;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82620658
	if (ctx.cr6.eq) goto loc_82620658;
	// mr r30,r25
	r30.u64 = r25.u64;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_8262060C:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,40(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82620640
	if (ctx.cr6.eq) goto loc_82620640;
	// lwz r6,72(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r4,36(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// lwz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x826e2058
	ctx.lr = 0x82620640;
	sub_826E2058(ctx, base);
loc_82620640:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r30,r11
	r30.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x8262060c
	if (ctx.cr6.lt) goto loc_8262060C;
loc_82620658:
	// lwz r3,296(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 296);
	// bl 0x8263a148
	ctx.lr = 0x82620660;
	sub_8263A148(ctx, base);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82620730
	if (ctx.cr6.eq) goto loc_82620730;
	// mr r30,r25
	r30.u64 = r25.u64;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_82620678:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,40(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x826206c0
	if (ctx.cr6.eq) goto loc_826206C0;
	// lwz r11,476(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 476);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,52(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826206B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82620a78
	if (ctx.cr6.lt) goto loc_82620A78;
	// b 0x82620718
	goto loc_82620718;
loc_826206C0:
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826206e4
	if (ctx.cr6.eq) goto loc_826206E4;
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 456);
	// lhz r10,118(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// sraw r11,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r11.s64 = ctx.r8.s32 >> temp.u32;
	// b 0x82620708
	goto loc_82620708;
loc_826206E4:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r11,118(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// beq cr6,0x82620704
	if (ctx.cr6.eq) goto loc_82620704;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// slw r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x82620708
	goto loc_82620708;
loc_82620704:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_82620708:
	// lwz r3,56(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x82620718;
	sub_826A2E60(ctx, base);
loc_82620718:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r30,r11
	r30.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x82620678
	if (ctx.cr6.lt) goto loc_82620678;
loc_82620730:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826202a8
	ctx.lr = 0x82620738;
	sub_826202A8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82620a78
	if (ctx.cr6.lt) goto loc_82620A78;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e72c0
	ctx.lr = 0x82620750;
	sub_826E72C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e72c0
	ctx.lr = 0x8262075C;
	sub_826E72C0(ctx, base);
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// mr r27,r21
	r27.u64 = r21.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826207c0
	if (!ctx.cr6.gt) goto loc_826207C0;
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lwz r8,320(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 320);
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_82620780:
	// lhzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r5,40(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x826207bc
	if (!ctx.cr6.eq) goto loc_826207BC;
	// lhz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x82620780
	if (ctx.cr6.lt) goto loc_82620780;
	// b 0x826207c0
	goto loc_826207C0;
loc_826207BC:
	// mr r27,r25
	r27.u64 = r25.u64;
loc_826207C0:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82620878
	if (!ctx.cr6.gt) goto loc_82620878;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x82620878
	if (!ctx.cr6.eq) goto loc_82620878;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82620878
	if (ctx.cr6.eq) goto loc_82620878;
	// mr r29,r25
	r29.u64 = r25.u64;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_826207E8:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lhz r8,108(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 108);
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r10,r5,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82620838
	if (!ctx.cr6.eq) goto loc_82620838;
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,312(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 312);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x82620838;
	sub_826A2E60(ctx, base);
loc_82620838:
	// sth r23,202(r31)
	REX_STORE_U16(r31.u32 + 202, r23.u16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,424(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 424);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x826378d8
	ctx.lr = 0x82620854;
	sub_826378D8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82620a78
	if (ctx.cr6.lt) goto loc_82620A78;
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r29,r11
	r29.s64 = ctx.r11.s16;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x826207e8
	if (ctx.cr6.lt) goto loc_826207E8;
loc_82620878:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826208f0
	if (!ctx.cr6.eq) goto loc_826208F0;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826208f0
	if (ctx.cr6.eq) goto loc_826208F0;
	// mr r30,r25
	r30.u64 = r25.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_82620898:
	// lwz r8,584(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 584);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r7,472(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 472);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r11,r5,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r3,120(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 120);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r8,r7,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r7.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x826208D8;
	sub_826A2E60(ctx, base);
	// addi r7,r30,1
	ctx.r7.s64 = r30.s64 + 1;
	// lhz r5,34(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r30,r7
	r30.s64 = ctx.r7.s16;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82620898
	if (ctx.cr6.lt) goto loc_82620898;
loc_826208F0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82620904
	if (ctx.cr6.eq) goto loc_82620904;
	// lwz r11,784(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82620a68
	if (ctx.cr6.eq) goto loc_82620A68;
loc_82620904:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82620a68
	if (ctx.cr6.eq) goto loc_82620A68;
	// mr r29,r25
	r29.u64 = r25.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_82620918:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// lhzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x82620944
	if (!ctx.cr6.eq) goto loc_82620944;
	// lfs f31,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 300);
	f31.f64 = double(temp.f32);
	// b 0x82620960
	goto loc_82620960;
loc_82620944:
	// lhz r11,118(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 118);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f31,f29,f12
	f31.f64 = double(float(f29.f64 / ctx.f12.f64));
loc_82620960:
	// lwz r11,320(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826209b4
	if (ctx.cr6.eq) goto loc_826209B4;
	// lhz r11,118(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 118);
	// lwz r10,332(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 332);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r7,328(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 328);
	// lwz r8,56(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 56);
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// divw r4,r5,r7
	ctx.r4.u64 = uint32_t((ctx.r7.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r5.s32 / ctx.r7.s32 : 0);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// subf. r10,r4,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ble 0x826209b4
	if (!ctx.cr0.gt) goto loc_826209B4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826209A4:
	// stfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsu f30,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826209a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826209A4;
loc_826209B4:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826209cc
	if (!ctx.cr6.eq) goto loc_826209CC;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82620a50
	if (!ctx.cr6.gt) goto loc_82620A50;
loc_826209CC:
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// lhz r10,118(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82620a08
	if (!ctx.cr6.gt) goto loc_82620A08;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82620A08;
	sub_826A2E60(ctx, base);
loc_82620A08:
	// lwz r9,464(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 464);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,496(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 496);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// lhz r6,114(r30)
	ctx.r6.u64 = REX_LOAD_U16(r30.u32 + 114);
	// lhz r4,120(r30)
	ctx.r4.u64 = REX_LOAD_U16(r30.u32 + 120);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lwz r9,440(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 440);
	// lwz r8,532(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lwz r7,516(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 516);
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
	// bctrl 
	ctx.lr = 0x82620A50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82620A50:
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r29,r11
	r29.s64 = ctx.r11.s16;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x82620918
	if (ctx.cr6.lt) goto loc_82620918;
loc_82620A68:
	// stw r20,36(r28)
	REX_STORE_U32(r28.u32 + 36, r20.u32);
loc_82620A6C:
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x826203a0
	if (!ctx.cr6.eq) goto loc_826203A0;
loc_82620A78:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_826509D0) {
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
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,4096
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4096, ctx.xer);
	// bgt cr6,0x82650cc0
	if (ctx.cr6.gt) goto loc_82650CC0;
	// beq cr6,0x82650cac
	if (ctx.cr6.eq) goto loc_82650CAC;
	// cmplwi cr6,r4,28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 28, ctx.xer);
	// bgt cr6,0x82650d8c
	if (ctx.cr6.gt) goto loc_82650D8C;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,-11432
	ctx.r12.s64 = ctx.r12.s64 + -11432;
	// lbzx r0,r12,r4
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r4.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32155
	ctx.r12.s64 = -2107310080;
	// nop 
	// addi r12,r12,2604
	ctx.r12.s64 = ctx.r12.s64 + 2604;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_82650A2C;
	case 1:
		goto loc_82650A64;
	case 2:
		goto loc_82650A78;
	case 3:
		goto loc_82650A8C;
	case 4:
		goto loc_82650AA0;
	case 5:
		goto loc_82650AB4;
	case 6:
		goto loc_82650AC8;
	case 7:
		goto loc_82650ADC;
	case 8:
		goto loc_82650AF4;
	case 9:
		goto loc_82650B0C;
	case 10:
		goto loc_82650B3C;
	case 11:
		goto loc_82650B50;
	case 12:
		goto loc_82650B84;
	case 13:
		goto loc_82650B98;
	case 14:
		goto loc_82650BCC;
	case 15:
		goto loc_82650BE4;
	case 16:
		goto loc_82650BF0;
	case 17:
		goto loc_82650C08;
	case 18:
		goto loc_82650C2C;
	case 19:
		goto loc_82650C50;
	case 20:
		goto loc_82650C50;
	case 21:
		goto loc_82650C98;
	case 22:
		goto loc_82650C50;
	case 23:
		goto loc_82650C50;
	case 24:
		goto loc_82650D8C;
	case 25:
		goto loc_82650D8C;
	case 26:
		goto loc_82650B84;
	case 27:
		goto loc_82650C50;
	case 28:
		goto loc_82650C50;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82650A2C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82650a50
	if (ctx.cr6.lt) goto loc_82650A50;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82650A44:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// b 0x82650a58
	goto loc_82650A58;
loc_82650A50:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
loc_82650A58:
	// li r11,4
	ctx.r11.s64 = 4;
loc_82650A5C:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x82650d94
	goto loc_82650D94;
loc_82650A64:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82650a50
	if (ctx.cr6.lt) goto loc_82650A50;
	// lbz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 168);
	// b 0x82650a44
	goto loc_82650A44;
loc_82650A78:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82650a50
	if (ctx.cr6.lt) goto loc_82650A50;
	// lbz r11,169(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 169);
	// b 0x82650a44
	goto loc_82650A44;
loc_82650A8C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82650a50
	if (ctx.cr6.lt) goto loc_82650A50;
	// lbz r11,170(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 170);
	// b 0x82650a44
	goto loc_82650A44;
loc_82650AA0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82650a50
	if (ctx.cr6.lt) goto loc_82650A50;
	// lbz r11,171(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 171);
	// b 0x82650a44
	goto loc_82650A44;
loc_82650AB4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82650a50
	if (ctx.cr6.lt) goto loc_82650A50;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// b 0x82650a44
	goto loc_82650A44;
loc_82650AC8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82650a50
	if (ctx.cr6.lt) goto loc_82650A50;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// b 0x82650a44
	goto loc_82650A44;
loc_82650ADC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82650a50
	if (ctx.cr6.lt) goto loc_82650A50;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm r11,r11,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// b 0x82650a44
	goto loc_82650A44;
loc_82650AF4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82650a50
	if (ctx.cr6.lt) goto loc_82650A50;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm r11,r11,4,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// b 0x82650a44
	goto loc_82650A44;
loc_82650B0C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82650a50
	if (ctx.cr6.lt) goto loc_82650A50;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm. r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82650b2c
	if (ctx.cr0.eq) goto loc_82650B2C;
loc_82650B24:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82650b30
	goto loc_82650B30;
loc_82650B2C:
	// rlwinm r11,r11,7,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x2;
loc_82650B30:
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82650a58
	goto loc_82650A58;
loc_82650B3C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82650a50
	if (ctx.cr6.lt) goto loc_82650A50;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// b 0x82650a44
	goto loc_82650A44;
loc_82650B50:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r5,524(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 524);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82650b74
	if (ctx.cr6.lt) goto loc_82650B74;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r4,520(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 520);
	// bl 0x826a1e70
	ctx.lr = 0x82650B6C;
	sub_826A1E70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82650b7c
	goto loc_82650B7C;
loc_82650B74:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
loc_82650B7C:
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 524);
	// b 0x82650a5c
	goto loc_82650A5C;
loc_82650B84:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r31,424
	ctx.r3.s64 = r31.s64 + 424;
	// bl 0x8265d940
	ctx.lr = 0x82650B94;
	sub_8265D940(ctx, base);
	// b 0x82650d94
	goto loc_82650D94;
loc_82650B98:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82650bb8
	if (ctx.cr6.eq) goto loc_82650BB8;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x82650a50
	if (ctx.cr6.lt) goto loc_82650A50;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82650a44
	goto loc_82650A44;
loc_82650BB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// ori r3,r3,1168
	ctx.r3.u64 = ctx.r3.u64 | 1168;
	// b 0x82650d94
	goto loc_82650D94;
loc_82650BCC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82650a50
	if (ctx.cr6.lt) goto loc_82650A50;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm r11,r11,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// b 0x82650a44
	goto loc_82650A44;
loc_82650BE4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82650d94
	goto loc_82650D94;
loc_82650BF0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82650a50
	if (ctx.cr6.lt) goto loc_82650A50;
	// lhz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 740);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x82650a44
	goto loc_82650A44;
loc_82650C08:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82650a50
	if (ctx.cr6.lt) goto loc_82650A50;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82650b24
	if (!ctx.cr0.eq) goto loc_82650B24;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,19,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x2;
	// b 0x82650b30
	goto loc_82650B30;
loc_82650C2C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82650a50
	if (ctx.cr6.lt) goto loc_82650A50;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82650b24
	if (!ctx.cr0.eq) goto loc_82650B24;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,21,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x2;
	// b 0x82650b30
	goto loc_82650B30;
loc_82650C50:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82650a50
	if (ctx.cr6.lt) goto loc_82650A50;
	// cmpwi cr6,r4,19
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 19, ctx.xer);
	// bne cr6,0x82650c6c
	if (!ctx.cr6.eq) goto loc_82650C6C;
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 536);
	// b 0x82650b30
	goto loc_82650B30;
loc_82650C6C:
	// cmpwi cr6,r4,20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 20, ctx.xer);
	// bne cr6,0x82650c7c
	if (!ctx.cr6.eq) goto loc_82650C7C;
loc_82650C74:
	// lwz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 540);
	// b 0x82650b30
	goto loc_82650B30;
loc_82650C7C:
	// cmpwi cr6,r4,22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 22, ctx.xer);
	// beq cr6,0x82650c74
	if (ctx.cr6.eq) goto loc_82650C74;
	// cmpwi cr6,r4,23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 23, ctx.xer);
	// beq cr6,0x82650c74
	if (ctx.cr6.eq) goto loc_82650C74;
	// lwz r11,556(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 556);
	// cmpwi cr6,r4,27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 27, ctx.xer);
	// b 0x82650b30
	goto loc_82650B30;
loc_82650C98:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82650a50
	if (ctx.cr6.lt) goto loc_82650A50;
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 560);
	// b 0x82650a44
	goto loc_82650A44;
loc_82650CAC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82650a50
	if (ctx.cr6.lt) goto loc_82650A50;
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// b 0x82650a44
	goto loc_82650A44;
loc_82650CC0:
	// addi r11,r4,-4097
	ctx.r11.s64 = ctx.r4.s64 + -4097;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82650d8c
	if (ctx.cr6.gt) goto loc_82650D8C;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,-11448
	ctx.r12.s64 = ctx.r12.s64 + -11448;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32155
	ctx.r12.s64 = -2107310080;
	// nop 
	// addi r12,r12,3316
	ctx.r12.s64 = ctx.r12.s64 + 3316;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82650CF4;
	case 1:
		goto loc_82650D38;
	case 2:
		goto loc_82650D40;
	case 3:
		goto loc_82650D48;
	case 4:
		goto loc_82650D50;
	case 5:
		goto loc_82650D58;
	case 6:
		goto loc_82650D60;
	case 7:
		goto loc_82650D68;
	case 8:
		goto loc_82650D70;
	case 9:
		goto loc_82650D78;
	case 10:
		goto loc_82650D80;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82650CF4:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82650CF8:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r3,400(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 400);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8265d7d8
	ctx.lr = 0x82650D0C;
	sub_8265D7D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82650d30
	if (!ctx.cr0.lt) goto loc_82650D30;
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// ori r11,r11,4097
	ctx.r11.u64 = ctx.r11.u64 | 4097;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82650d94
	if (!ctx.cr6.eq) goto loc_82650D94;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// b 0x82650d94
	goto loc_82650D94;
loc_82650D30:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82650d94
	goto loc_82650D94;
loc_82650D38:
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x82650cf8
	goto loc_82650CF8;
loc_82650D40:
	// li r6,5
	ctx.r6.s64 = 5;
	// b 0x82650cf8
	goto loc_82650CF8;
loc_82650D48:
	// li r6,6
	ctx.r6.s64 = 6;
	// b 0x82650cf8
	goto loc_82650CF8;
loc_82650D50:
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x82650cf8
	goto loc_82650CF8;
loc_82650D58:
	// li r6,7
	ctx.r6.s64 = 7;
	// b 0x82650cf8
	goto loc_82650CF8;
loc_82650D60:
	// li r6,8
	ctx.r6.s64 = 8;
	// b 0x82650cf8
	goto loc_82650CF8;
loc_82650D68:
	// li r6,9
	ctx.r6.s64 = 9;
	// b 0x82650cf8
	goto loc_82650CF8;
loc_82650D70:
	// li r6,24
	ctx.r6.s64 = 24;
	// b 0x82650cf8
	goto loc_82650CF8;
loc_82650D78:
	// li r6,25
	ctx.r6.s64 = 25;
	// b 0x82650cf8
	goto loc_82650CF8;
loc_82650D80:
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r6,r6,3
	ctx.r6.u64 = ctx.r6.u64 | 3;
	// b 0x82650cf8
	goto loc_82650CF8;
loc_82650D8C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82650D94:
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

DEFINE_REX_FUNC(sub_8266B160) {
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
	ctx.lr = 0x8266B168;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,240(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// addi r30,r3,240
	r30.s64 = ctx.r3.s64 + 240;
	// clrlwi r10,r4,8
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFFFF;
	// stw r4,81(r1)
	REX_STORE_U32(ctx.r1.u32 + 81, ctx.r4.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r6,85(r1)
	REX_STORE_U32(ctx.r1.u32 + 85, ctx.r6.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// oris r27,r10,1280
	r27.u64 = ctx.r10.u64 | 83886080;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8266b27c
	if (ctx.cr6.eq) goto loc_8266B27C;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8266b27c
	if (ctx.cr0.eq) goto loc_8266B27C;
loc_8266B1B0:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r31,r26,-4
	r31.s64 = r26.s64 + -4;
	// lwz r10,232(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 232);
	// subf r9,r11,r30
	ctx.r9.u64 = r30.u64 - ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// subfic r10,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r26,r10,r11
	r26.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bne cr6,0x8266b274
	if (!ctx.cr6.eq) goto loc_8266B274;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// beq cr6,0x8266b1f4
	if (ctx.cr6.eq) goto loc_8266B1F4;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x82670660
	ctx.lr = 0x8266B1EC;
	sub_82670660(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8266b274
	if (ctx.cr0.eq) goto loc_8266B274;
loc_8266B1F4:
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266b274
	if (!ctx.cr0.eq) goto loc_8266B274;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8266b274
	if (ctx.cr0.eq) goto loc_8266B274;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bge cr6,0x8266b274
	if (!ctx.cr6.lt) goto loc_8266B274;
	// lhz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 68);
	// rlwinm r11,r10,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8266b274
	if (ctx.cr6.lt) goto loc_8266B274;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8266b234
	if (!ctx.cr6.eq) goto loc_8266B234;
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266b274
	if (ctx.cr0.eq) goto loc_8266B274;
loc_8266B234:
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// li r9,331
	ctx.r9.s64 = 331;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
	// li r6,9
	ctx.r6.s64 = 9;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826698e0
	ctx.lr = 0x8266B260;
	sub_826698E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8266b274
	if (!ctx.cr0.lt) goto loc_8266B274;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
loc_8266B274:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x8266b1b0
	if (!ctx.cr6.eq) goto loc_8266B1B0;
loc_8266B27C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82672140) {
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
	// bl 0x82671fb0
	ctx.lr = 0x82672158;
	sub_82671FB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,267
	ctx.r3.s64 = 267;
	// bl 0x8265d850
	ctx.lr = 0x82672164;
	sub_8265D850(ctx, base);
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

DEFINE_REX_FUNC(sub_82672AD8) {
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
	ctx.lr = 0x82672AE0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// addi r9,r3,44
	ctx.r9.s64 = ctx.r3.s64 + 44;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// li r27,0
	r27.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// addi r25,r1,80
	r25.s64 = ctx.r1.s64 + 80;
	// li r21,3
	r21.s64 = 3;
loc_82672B20:
	// lwz r23,0(r25)
	r23.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// beq cr6,0x82672c20
	if (ctx.cr6.eq) goto loc_82672C20;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82672c20
	if (ctx.cr0.eq) goto loc_82672C20;
loc_82672B3C:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r31,r24,-4
	r31.s64 = r24.s64 + -4;
	// lwz r10,32(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 32);
	// subf r9,r11,r23
	ctx.r9.u64 = r23.u64 - ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// subfic r10,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r24,r10,r11
	r24.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bne cr6,0x82672be8
	if (!ctx.cr6.eq) goto loc_82672BE8;
	// lwz r29,104(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r28,100(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82672b78
	if (ctx.cr6.eq) goto loc_82672B78;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
loc_82672B78:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82672bdc
	if (ctx.cr6.eq) goto loc_82672BDC;
	// lbz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 60);
	// addi r4,r31,61
	ctx.r4.s64 = r31.s64 + 61;
	// stb r11,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r11.u8);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r28,5(r30)
	REX_STORE_U32(r30.u32 + 5, r28.u32);
	// stw r11,1(r30)
	REX_STORE_U32(r30.u32 + 1, ctx.r11.u32);
	// addi r30,r30,9
	r30.s64 = r30.s64 + 9;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 100);
	// bl 0x826a1e70
	ctx.lr = 0x82672BA8;
	sub_826A1E70(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// beq cr6,0x82672bd0
	if (ctx.cr6.eq) goto loc_82672BD0;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// lwz r5,8(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82672BC8;
	sub_826A1E70(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
loc_82672BD0:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// rlwinm r11,r11,0,4,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
loc_82672BDC:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// add r26,r28,r26
	r26.u64 = r28.u64 + r26.u64;
	// b 0x82672c18
	goto loc_82672C18;
loc_82672BE8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82672c14
	if (ctx.cr6.eq) goto loc_82672C14;
	// lbz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 60);
	// stb r11,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r11.u8);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r11,1(r30)
	REX_STORE_U32(r30.u32 + 1, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r11,5(r30)
	REX_STORE_U32(r30.u32 + 5, ctx.r11.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// stw r11,9(r30)
	REX_STORE_U32(r30.u32 + 9, ctx.r11.u32);
	// addi r30,r30,13
	r30.s64 = r30.s64 + 13;
loc_82672C14:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
loc_82672C18:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x82672b3c
	if (!ctx.cr6.eq) goto loc_82672B3C;
loc_82672C20:
	// addic. r21,r21,-1
	ctx.xer.ca = r21.u32 > 0;
	r21.s64 = r21.s64 + -1;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// bne 0x82672b20
	if (!ctx.cr0.eq) goto loc_82672B20;
	// stw r27,0(r20)
	REX_STORE_U32(r20.u32 + 0, r27.u32);
	// stw r22,0(r19)
	REX_STORE_U32(r19.u32 + 0, r22.u32);
	// stw r26,0(r18)
	REX_STORE_U32(r18.u32 + 0, r26.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_82679600) {
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
	ctx.lr = 0x82679608;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,18(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 18);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lhz r8,828(r4)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 828);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82679634
	if (ctx.cr0.eq) goto loc_82679634;
	// lbz r11,21(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 21);
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r28,r11,24
	r28.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82679678
	goto loc_82679678;
loc_82679634:
	// lbz r11,21(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 21);
	// li r28,0
	r28.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82679678
	if (ctx.cr0.eq) goto loc_82679678;
	// mulli r10,r11,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r10,r10,42
	ctx.r10.s64 = ctx.r10.s64 + 42;
loc_82679654:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82679678
	if (!ctx.cr0.eq) goto loc_82679678;
	// clrlwi r9,r29,24
	ctx.r9.u64 = r29.u32 & 0xFF;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,-24
	ctx.r10.s64 = ctx.r10.s64 + -24;
	// clrlwi r29,r9,24
	r29.u64 = ctx.r9.u32 & 0xFF;
	// bne 0x82679654
	if (!ctx.cr0.eq) goto loc_82679654;
loc_82679678:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8267970c
	if (ctx.cr6.eq) goto loc_8267970C;
	// addi r31,r4,66
	r31.s64 = ctx.r4.s64 + 66;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
loc_82679688:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82679700
	if (!ctx.cr0.eq) goto loc_82679700;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82679700
	if (ctx.cr0.eq) goto loc_82679700;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82679700
	if (ctx.cr0.eq) goto loc_82679700;
	// lhz r11,-2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + -2);
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// rlwinm r9,r11,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82679700
	if (ctx.cr6.gt) goto loc_82679700;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82679700
	if (ctx.cr6.gt) goto loc_82679700;
	// lwz r11,-10(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -10);
	// lwz r10,596(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 596);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826796f8
	if (!ctx.cr6.lt) goto loc_826796F8;
	// lwz r10,592(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 592);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,127
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 127, ctx.xer);
	// ble cr6,0x826796f8
	if (!ctx.cr6.gt) goto loc_826796F8;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x826796fc
	goto loc_826796FC;
loc_826796F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826796FC:
	// bl 0x826836c8
	ctx.lr = 0x82679700;
	sub_826836C8(ctx, base);
loc_82679700:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// bne 0x82679688
	if (!ctx.cr0.eq) goto loc_82679688;
loc_8267970C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826812D8) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r5,9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 9, ctx.xer);
	// bge cr6,0x826812f0
	if (!ctx.cr6.lt) goto loc_826812F0;
loc_826812E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826812F0:
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x826812e8
	if (!ctx.cr6.eq) goto loc_826812E8;
	// addi r11,r5,-9
	ctx.r11.s64 = ctx.r5.s64 + -9;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82681CF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82681CF8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,328(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 328);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82681d50
	if (ctx.cr0.eq) goto loc_82681D50;
	// addi r30,r3,72
	r30.s64 = ctx.r3.s64 + 72;
loc_82681D18:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82681d3c
	if (ctx.cr6.eq) goto loc_82681D3C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82681D3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82681D3C:
	// lhz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 328);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82681d18
	if (ctx.cr6.lt) goto loc_82681D18;
loc_82681D50:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,330(r31)
	REX_STORE_U16(r31.u32 + 330, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82683D58) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826846B0) {
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
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,164(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// rlwinm r11,r11,0,4,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// stw r11,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// beq cr6,0x82684784
	if (ctx.cr6.eq) goto loc_82684784;
	// lwz r3,4(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826846fc
	if (ctx.cr6.eq) goto loc_826846FC;
	// bl 0x82687a98
	ctx.lr = 0x826846F4;
	sub_82687A98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_826846FC:
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addi r11,r31,64
	ctx.r11.s64 = r31.s64 + 64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8268473c
	if (!ctx.cr6.eq) goto loc_8268473C;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268473c
	if (!ctx.cr0.eq) goto loc_8268473C;
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268473c
	if (!ctx.cr0.eq) goto loc_8268473C;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82684784
	if (ctx.cr0.eq) goto loc_82684784;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82684784
	if (!ctx.cr6.eq) goto loc_82684784;
loc_8268473C:
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r9,r11,516
	ctx.r9.s64 = ctx.r11.s64 + 516;
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// lwz r9,520(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 520);
	// stw r9,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// lwz r9,520(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 520);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,520(r11)
	REX_STORE_U32(ctx.r11.u32 + 520, ctx.r10.u32);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
loc_82684784:
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

DEFINE_REX_FUNC(sub_8268A2A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8268A2A8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,232
	r29.s64 = ctx.r3.s64 + 232;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x827938a4
	ctx.lr = 0x8268A2C4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826896a0
	ctx.lr = 0x8268A2D0;
	sub_826896A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268a2e0
	if (ctx.cr0.eq) goto loc_8268A2E0;
	// bl 0x8268e538
	ctx.lr = 0x8268A2DC;
	sub_8268E538(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8268A2E0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938b4
	ctx.lr = 0x8268A2E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8268C940) {
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
	ctx.lr = 0x8268C948;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8268C964;
	sub_823EF5F0(ctx, base);
	// lwz r11,56(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 56);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8268c9d4
	if (!ctx.cr6.gt) goto loc_8268C9D4;
	// addi r31,r28,48
	r31.s64 = r28.s64 + 48;
loc_8268C978:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r29,12(r8)
	r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
loc_8268C98C:
	// lwz r8,-8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8268c9a4
	if (ctx.cr6.eq) goto loc_8268C9A4;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8268c9dc
	if (ctx.cr6.eq) goto loc_8268C9DC;
loc_8268C9A4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x8268c98c
	if (ctx.cr6.lt) goto loc_8268C98C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268C9B8:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stwx r3,r11,r27
	REX_STORE_U32(ctx.r11.u32 + r27.u32, ctx.r3.u32);
	// lwz r11,56(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 56);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268c978
	if (ctx.cr6.lt) goto loc_8268C978;
loc_8268C9D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_8268C9DC:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8268ee00
	ctx.lr = 0x8268C9E8;
	sub_8268EE00(ctx, base);
	// b 0x8268c9b8
	goto loc_8268C9B8;
}

DEFINE_REX_FUNC(sub_82692800) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-5940(r10)
	REX_STORE_U32(ctx.r10.u32 + -5940, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82693580) {
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
	ctx.lr = 0x82693588;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// lhz r24,0(r8)
	r24.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lbz r23,0(r9)
	r23.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r20,4(r3)
	r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// sth r7,116(r1)
	REX_STORE_U16(ctx.r1.u32 + 116, ctx.r7.u16);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// mr r28,r27
	r28.u64 = r27.u64;
	// addi r22,r11,-8992
	r22.s64 = ctx.r11.s64 + -8992;
loc_826935D4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r5,r28,r22
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + r22.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82697708
	ctx.lr = 0x826935E4;
	sub_82697708(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stwx r10,r28,r11
	REX_STORE_U32(r28.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpwi cr6,r28,68
	ctx.cr6.compare<int32_t>(r28.s32, 68, ctx.xer);
	// blt cr6,0x826935d4
	if (ctx.cr6.lt) goto loc_826935D4;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82693378
	ctx.lr = 0x82693610;
	sub_82693378(ctx, base);
	// lhz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 92);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82693640
	if (!ctx.cr6.eq) goto loc_82693640;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// lwz r10,484(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lhz r8,58(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 58);
	// lhz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 56);
	// lfs f2,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lfs f1,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826972c0
	ctx.lr = 0x82693640;
	sub_826972C0(ctx, base);
loc_82693640:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82697218
	ctx.lr = 0x82693654;
	sub_82697218(ctx, base);
	// lwz r11,492(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// li r10,80
	ctx.r10.s64 = 80;
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lis r28,-32119
	r28.s64 = -2104950784;
	// sth r10,0(r26)
	REX_STORE_U16(r26.u32 + 0, ctx.r10.u16);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lhz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 92);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8269369c
	if (!ctx.cr0.eq) goto loc_8269369C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// sth r11,92(r31)
	REX_STORE_U16(r31.u32 + 92, ctx.r11.u16);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// lwz r11,-5948(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -5948);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82693698;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8269373c
	goto loc_8269373C;
loc_8269369C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// sth r27,92(r31)
	REX_STORE_U16(r31.u32 + 92, r27.u16);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// sth r24,0(r30)
	REX_STORE_U16(r30.u32 + 0, r24.u16);
	// stb r23,0(r29)
	REX_STORE_U8(r29.u32 + 0, r23.u8);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// lhz r8,94(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 94);
	// lfs f0,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bne cr6,0x8269373c
	if (!ctx.cr6.eq) goto loc_8269373C;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// sth r27,94(r31)
	REX_STORE_U16(r31.u32 + 94, r27.u16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8269373c
	if (!ctx.cr6.gt) goto loc_8269373C;
	// addi r10,r21,-2
	ctx.r10.s64 = r21.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_826936F4:
	// lha r11,2(r10)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 2));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x826936f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826936F4;
loc_8269373C:
	// lwz r11,-5948(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -5948);
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r4,r20,2056
	ctx.r4.s64 = r20.s64 + 2056;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82693754;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-5948(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -5948);
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r4,r20,2316
	ctx.r4.s64 = r20.s64 + 2316;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269376C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_8269D960) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8269D968;
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r29,0
	r29.s64 = 0;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// bne 0x8269d9a4
	if (!ctx.cr0.eq) goto loc_8269D9A4;
	// bl 0x826a33d0
	ctx.lr = 0x8269D990;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x8269D99C;
	sub_8269CB20(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8269dab4
	goto loc_8269DAB4;
loc_8269D9A4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269e120
	ctx.lr = 0x8269D9AC;
	sub_8269E120(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8269da6c
	if (!ctx.cr0.eq) goto loc_8269DA6C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a3320
	ctx.lr = 0x8269D9C4;
	sub_826A3320(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8269da00
	if (ctx.cr6.eq) goto loc_8269DA00;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x8269da00
	if (ctx.cr6.eq) goto loc_8269DA00;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,31264
	ctx.r11.s64 = ctx.r11.s64 + 31264;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mulli r9,r9,72
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(72));
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r10,r10,26400
	ctx.r10.s64 = ctx.r10.s64 + 26400;
	// b 0x8269da14
	goto loc_8269DA14;
loc_8269DA00:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r10,r10,26400
	ctx.r10.s64 = ctx.r10.s64 + 26400;
	// addi r11,r11,31264
	ctx.r11.s64 = ctx.r11.s64 + 31264;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8269DA14:
	// lbz r9,40(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 40);
	// rlwinm. r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269da54
	if (!ctx.cr0.eq) goto loc_8269DA54;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8269da48
	if (ctx.cr6.eq) goto loc_8269DA48;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x8269da48
	if (ctx.cr6.eq) goto loc_8269DA48;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8269DA48:
	// lbz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269da6c
	if (ctx.cr0.eq) goto loc_8269DA6C;
loc_8269DA54:
	// bl 0x826a33d0
	ctx.lr = 0x8269DA58;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x8269DA64;
	sub_8269CB20(ctx, base);
	// li r29,-1
	r29.s64 = -1;
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
loc_8269DA6C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x8269daa4
	if (!ctx.cr6.eq) goto loc_8269DAA4;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// blt 0x8269da98
	if (ctx.cr0.lt) goto loc_8269DA98;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x8269daa0
	goto loc_8269DAA0;
loc_8269DA98:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a91b0
	ctx.lr = 0x8269DAA0;
	sub_826A91B0(ctx, base);
loc_8269DAA0:
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
loc_8269DAA4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = r31.s64 + 128;
	// bl 0x8269dadc
	ctx.lr = 0x8269DAB0;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_8269DADC(ctx, base);
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_8269DAB4:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(__savevmx_92) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826A91B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826A91B8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826a91dc
	if (!ctx.cr6.eq) goto loc_826A91DC;
	// bl 0x826a33d0
	ctx.lr = 0x826A91CC;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826A91D8;
	sub_8269CB20(ctx, base);
	// b 0x826a9350
	goto loc_826A9350;
loc_826A91DC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a9350
	if (ctx.cr0.eq) goto loc_826A9350;
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826a9350
	if (!ctx.cr0.eq) goto loc_826A9350;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a9204
	if (ctx.cr0.eq) goto loc_826A9204;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// b 0x826a934c
	goto loc_826A934C;
loc_826A9204:
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// andi. r10,r11,268
	ctx.r10.u64 = ctx.r11.u64 & 268;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826a9224
	if (!ctx.cr0.eq) goto loc_826A9224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a94c0
	ctx.lr = 0x826A9220;
	sub_826A94C0(ctx, base);
	// b 0x826a922c
	goto loc_826A922C;
loc_826A9224:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_826A922C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r29,24(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x826a3320
	ctx.lr = 0x826A923C;
	sub_826A3320(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826ac748
	ctx.lr = 0x826A9248;
	sub_826AC748(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq 0x826a932c
	if (ctx.cr0.eq) goto loc_826A932C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826a932c
	if (ctx.cr6.eq) goto loc_826A932C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// andi. r11,r11,130
	ctx.r11.u64 = ctx.r11.u64 & 130;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a92e4
	if (!ctx.cr0.eq) goto loc_826A92E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a3320
	ctx.lr = 0x826A9274;
	sub_826A3320(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826a92c0
	if (ctx.cr6.eq) goto loc_826A92C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a3320
	ctx.lr = 0x826A9284;
	sub_826A3320(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x826a92c0
	if (ctx.cr6.eq) goto loc_826A92C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a3320
	ctx.lr = 0x826A9294;
	sub_826A3320(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,31264
	r30.s64 = ctx.r10.s64 + 31264;
	// bl 0x826a3320
	ctx.lr = 0x826A92AC;
	sub_826A3320(ctx, base);
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r30.u32);
	// mulli r10,r10,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(72));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x826a92c8
	goto loc_826A92C8;
loc_826A92C0:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,26400
	ctx.r11.s64 = ctx.r11.s64 + 26400;
loc_826A92C8:
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// andi. r11,r11,130
	ctx.r11.u64 = ctx.r11.u64 & 130;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,130
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 130, ctx.xer);
	// bne cr6,0x826a92e4
	if (!ctx.cr6.eq) goto loc_826A92E4;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_826A92E4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// bne cr6,0x826a930c
	if (!ctx.cr6.eq) goto loc_826A930C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a930c
	if (ctx.cr0.eq) goto loc_826A930C;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a930c
	if (!ctx.cr0.eq) goto loc_826A930C;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_826A930C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// b 0x826a9354
	goto loc_826A9354;
loc_826A932C:
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_826A934C:
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_826A9350:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_826A9354:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826B5BF8) {
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
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b5ca0
	if (ctx.cr6.eq) goto loc_826B5CA0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822c4780
	ctx.lr = 0x826B5C2C;
	sub_822C4780(ctx, base);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x822c4660
	ctx.lr = 0x826B5C4C;
	sub_822C4660(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,120
	ctx.r5.s64 = 120;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822c6130
	ctx.lr = 0x826B5C60;
	sub_822C6130(ctx, base);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x826a1e70
	ctx.lr = 0x826B5C6C;
	sub_826A1E70(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// bl 0x822c6180
	ctx.lr = 0x826B5C74;
	sub_822C6180(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822c4660
	ctx.lr = 0x826B5C90;
	sub_822C4660(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826b5ca0
	if (ctx.cr6.eq) goto loc_826B5CA0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c5ef0
	ctx.lr = 0x826B5CA0;
	sub_822C5EF0(ctx, base);
loc_826B5CA0:
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

DEFINE_REX_FUNC(sub_826BA748) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// stw r10,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826BAA48) {
	REX_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,52(r9)
	REX_STORE_U32(ctx.r9.u32 + 52, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826BB5A8) {
	REX_FUNC_PROLOGUE();
	// ld r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r9,56(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 56);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ld r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 88);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpld cr6,r10,r8
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x826bb5d4
	if (ctx.cr6.gt) goto loc_826BB5D4;
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bge cr6,0x826bb5d8
	if (!ctx.cr6.lt) goto loc_826BB5D8;
loc_826BB5D4:
	// li r9,1
	ctx.r9.s64 = 1;
loc_826BB5D8:
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r10,88(r11)
	REX_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826BDDB0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826bddc4
	if (!ctx.cr6.eq) goto loc_826BDDC4;
loc_826BDDB8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_826BDDC4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826bddb8
	if (ctx.cr6.eq) goto loc_826BDDB8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x826bddb8
	if (ctx.cr6.eq) goto loc_826BDDB8;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x826c6f10
	sub_826C6F10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826BF708) {
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
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BF730;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r5,r7,10
	ctx.r5.u64 = ctx.r7.u64 | 10;
	// and r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 & ctx.r5.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C1C98) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C2FF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826C2FF8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r30
	r29.u64 = r30.u64;
	// lwz r10,244(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C3018;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x826c303c
	if (!ctx.cr6.eq) goto loc_826C303C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,248(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C3034;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x826c30e8
	if (ctx.cr6.eq) goto loc_826C30E8;
loc_826C303C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C3050;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,180(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 180);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C3064;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,184(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 184);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826C3078;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,188(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 188);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x826C308C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,192(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C30A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C30B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,84(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826C30C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x826C30E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x826c31e0
	if (ctx.cr6.lt) goto loc_826C31E0;
loc_826C30E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C30FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,288(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 288);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C3114;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,292(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 292);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826C312C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,264(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C3144;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,268(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 268);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826C315C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,244(r31)
	REX_STORE_U32(r31.u32 + 244, r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,248(r31)
	REX_STORE_U32(r31.u32 + 248, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,252(r31)
	REX_STORE_U32(r31.u32 + 252, r30.u32);
	// stw r8,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r8.u32);
	// stw r30,232(r31)
	REX_STORE_U32(r31.u32 + 232, r30.u32);
	// stw r30,236(r31)
	REX_STORE_U32(r31.u32 + 236, r30.u32);
	// stw r30,256(r31)
	REX_STORE_U32(r31.u32 + 256, r30.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,228(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 228);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826C3190;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,232(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 232);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x826C31A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,236(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C31B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,240(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 240);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C31CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826C31E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C31E0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826D5698) {
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
	ctx.lr = 0x826D56A0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,28(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r31,0
	r31.s64 = 0;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// addi r22,r4,-24
	r22.s64 = ctx.r4.s64 + -24;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r22.u32);
	// sth r31,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r31.u16);
	// sth r31,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, r31.u16);
	// sth r31,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, r31.u16);
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, r31.u16);
	// sth r31,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, r31.u16);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826D56EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d5c54
	if (ctx.cr6.lt) goto loc_826D5C54;
	// cmplwi cr6,r22,10
	ctx.cr6.compare<uint32_t>(r22.u32, 10, ctx.xer);
	// bge cr6,0x826d570c
	if (!ctx.cr6.lt) goto loc_826D570C;
loc_826D56FC:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf0
	return;
loc_826D570C:
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D5724;
	sub_826D3B98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d5c54
	if (ctx.cr6.lt) goto loc_826D5C54;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D5744;
	sub_826D3B98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d5c54
	if (ctx.cr6.lt) goto loc_826D5C54;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D5764;
	sub_826D3B98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d5c54
	if (ctx.cr6.lt) goto loc_826D5C54;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D5784;
	sub_826D3B98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d5c54
	if (ctx.cr6.lt) goto loc_826D5C54;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D57A4;
	sub_826D3B98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d5c54
	if (ctx.cr6.lt) goto loc_826D5C54;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r26,10
	r26.s64 = 10;
	// lhz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 56);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x826d56fc
	if (ctx.cr6.gt) goto loc_826D56FC;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r3,224(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 224);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c6880
	ctx.lr = 0x826D57D8;
	sub_826C6880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d5c54
	if (ctx.cr6.lt) goto loc_826D5C54;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826D57F4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x826d57f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D57F4;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r29,82(r1)
	r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r27,84(r1)
	r27.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// rlwinm r7,r29,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r25,86(r1)
	r25.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// stw r9,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r9.u32);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// rlwinm r6,r27,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r23,88(r1)
	r23.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// rlwinm r4,r25,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r23,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// sth r8,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r8.u16);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// sth r6,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r6.u16);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// sth r4,6(r8)
	REX_STORE_U16(ctx.r8.u32 + 6, ctx.r4.u16);
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// sth r9,8(r7)
	REX_STORE_U16(ctx.r7.u32 + 8, ctx.r9.u16);
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r31,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, r31.u32);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r31,16(r5)
	REX_STORE_U32(ctx.r5.u32 + 16, r31.u32);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r31,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, r31.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r31,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r31.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r31,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, r31.u32);
	// beq cr6,0x826d5934
	if (ctx.cr6.eq) goto loc_826D5934;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 224);
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// bl 0x826c6880
	ctx.lr = 0x826D58A4;
	sub_826C6880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d5c54
	if (ctx.cr6.lt) goto loc_826D5C54;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x826a2e60
	ctx.lr = 0x826D58C0;
	sub_826A2E60(ctx, base);
	// addi r31,r30,10
	r31.s64 = r30.s64 + 10;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(r31.u32, r22.u32, ctx.xer);
	// bgt cr6,0x826d56fc
	if (ctx.cr6.gt) goto loc_826D56FC;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x826d4230
	ctx.lr = 0x826D58EC;
	sub_826D4230(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d5c54
	if (ctx.cr6.lt) goto loc_826D5C54;
	// lwz r11,76(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 76);
	// mr r26,r31
	r26.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d5934
	if (ctx.cr6.eq) goto loc_826D5934;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r30,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// ble cr6,0x826d5934
	if (!ctx.cr6.gt) goto loc_826D5934;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_826D5920:
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
	// bdnz 0x826d5920
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D5920;
loc_826D5934:
	// clrlwi r31,r29,16
	r31.u64 = r29.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826d59e8
	if (ctx.cr6.eq) goto loc_826D59E8;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 224);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// bl 0x826c6880
	ctx.lr = 0x826D5958;
	sub_826C6880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d5c54
	if (ctx.cr6.lt) goto loc_826D5C54;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x826a2e60
	ctx.lr = 0x826D5974;
	sub_826A2E60(ctx, base);
	// add r30,r26,r31
	r30.u64 = r26.u64 + r31.u64;
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(r30.u32, r22.u32, ctx.xer);
	// bgt cr6,0x826d56fc
	if (ctx.cr6.gt) goto loc_826D56FC;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x826d4230
	ctx.lr = 0x826D59A0;
	sub_826D4230(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d5c54
	if (ctx.cr6.lt) goto loc_826D5C54;
	// lwz r11,76(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 76);
	// mr r26,r30
	r26.u64 = r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d59e8
	if (ctx.cr6.eq) goto loc_826D59E8;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r31,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// ble cr6,0x826d59e8
	if (!ctx.cr6.gt) goto loc_826D59E8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_826D59D4:
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
	// bdnz 0x826d59d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D59D4;
loc_826D59E8:
	// clrlwi r31,r27,16
	r31.u64 = r27.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826d5a9c
	if (ctx.cr6.eq) goto loc_826D5A9C;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 224);
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// bl 0x826c6880
	ctx.lr = 0x826D5A0C;
	sub_826C6880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d5c54
	if (ctx.cr6.lt) goto loc_826D5C54;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x826a2e60
	ctx.lr = 0x826D5A28;
	sub_826A2E60(ctx, base);
	// add r30,r26,r31
	r30.u64 = r26.u64 + r31.u64;
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(r30.u32, r22.u32, ctx.xer);
	// bgt cr6,0x826d56fc
	if (ctx.cr6.gt) goto loc_826D56FC;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x826d4230
	ctx.lr = 0x826D5A54;
	sub_826D4230(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d5c54
	if (ctx.cr6.lt) goto loc_826D5C54;
	// lwz r11,76(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 76);
	// mr r26,r30
	r26.u64 = r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d5a9c
	if (ctx.cr6.eq) goto loc_826D5A9C;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r31,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// ble cr6,0x826d5a9c
	if (!ctx.cr6.gt) goto loc_826D5A9C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_826D5A88:
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
	// bdnz 0x826d5a88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D5A88;
loc_826D5A9C:
	// clrlwi r31,r25,16
	r31.u64 = r25.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826d5b50
	if (ctx.cr6.eq) goto loc_826D5B50;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 224);
	// addi r6,r11,24
	ctx.r6.s64 = ctx.r11.s64 + 24;
	// bl 0x826c6880
	ctx.lr = 0x826D5AC0;
	sub_826C6880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d5c54
	if (ctx.cr6.lt) goto loc_826D5C54;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x826a2e60
	ctx.lr = 0x826D5ADC;
	sub_826A2E60(ctx, base);
	// add r30,r26,r31
	r30.u64 = r26.u64 + r31.u64;
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(r30.u32, r22.u32, ctx.xer);
	// bgt cr6,0x826d56fc
	if (ctx.cr6.gt) goto loc_826D56FC;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x826d4230
	ctx.lr = 0x826D5B08;
	sub_826D4230(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d5c54
	if (ctx.cr6.lt) goto loc_826D5C54;
	// lwz r11,76(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 76);
	// mr r26,r30
	r26.u64 = r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d5b50
	if (ctx.cr6.eq) goto loc_826D5B50;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r31,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// ble cr6,0x826d5b50
	if (!ctx.cr6.gt) goto loc_826D5B50;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_826D5B3C:
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
	// bdnz 0x826d5b3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D5B3C;
loc_826D5B50:
	// clrlwi r31,r23,16
	r31.u64 = r23.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826d5c04
	if (ctx.cr6.eq) goto loc_826D5C04;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 224);
	// addi r6,r11,28
	ctx.r6.s64 = ctx.r11.s64 + 28;
	// bl 0x826c6880
	ctx.lr = 0x826D5B74;
	sub_826C6880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d5c54
	if (ctx.cr6.lt) goto loc_826D5C54;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x826a2e60
	ctx.lr = 0x826D5B90;
	sub_826A2E60(ctx, base);
	// add r30,r26,r31
	r30.u64 = r26.u64 + r31.u64;
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(r30.u32, r22.u32, ctx.xer);
	// bgt cr6,0x826d56fc
	if (ctx.cr6.gt) goto loc_826D56FC;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x826d4230
	ctx.lr = 0x826D5BBC;
	sub_826D4230(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d5c54
	if (ctx.cr6.lt) goto loc_826D5C54;
	// lwz r11,76(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 76);
	// mr r26,r30
	r26.u64 = r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d5c04
	if (ctx.cr6.eq) goto loc_826D5C04;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r31,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// ble cr6,0x826d5c04
	if (!ctx.cr6.gt) goto loc_826D5C04;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_826D5BF0:
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
	// bdnz 0x826d5bf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D5BF0;
loc_826D5C04:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lhz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 56);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,56(r11)
	REX_STORE_U16(ctx.r11.u32 + 56, ctx.r9.u16);
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subf r6,r7,r22
	ctx.r6.u64 = r22.u64 - ctx.r7.u64;
	// subf. r31,r26,r6
	r31.u64 = ctx.r6.u64 - r26.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x826d5c54
	if (ctx.cr0.eq) goto loc_826D5C54;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D5C3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d5c54
	if (ctx.cr6.lt) goto loc_826D5C54;
	// ld r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 8);
	// clrldi r10,r31,32
	ctx.r10.u64 = r31.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r28)
	REX_STORE_U64(r28.u32 + 8, ctx.r11.u64);
loc_826D5C54:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_826FC950) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826fc998
	if (ctx.cr6.eq) goto loc_826FC998;
	// lwz r11,20696(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826fc998
	if (ctx.cr6.eq) goto loc_826FC998;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ecc50
	ctx.lr = 0x826FC980;
	sub_823ECC50(ctx, base);
	// ld r11,20672(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 20672);
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,20696(r31)
	REX_STORE_U32(r31.u32 + 20696, ctx.r9.u32);
	// std r8,20672(r31)
	REX_STORE_U64(r31.u32 + 20672, ctx.r8.u64);
loc_826FC998:
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

DEFINE_REX_FUNC(sub_82702FD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82702FD8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82702ffc
	if (!ctx.cr6.eq) goto loc_82702FFC;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82702FFC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82703014
	if (ctx.cr6.eq) goto loc_82703014;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82703014:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fc8f0
	ctx.lr = 0x8270301C;
	sub_826FC8F0(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(r30.s32, -1, ctx.xer);
	// beq cr6,0x8270302c
	if (ctx.cr6.eq) goto loc_8270302C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x82703034
	if (!ctx.cr6.eq) goto loc_82703034;
loc_8270302C:
	// rlwinm r11,r30,0,20,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFF0;
	// ori r30,r11,15
	r30.u64 = ctx.r11.u64 | 15;
loc_82703034:
	// lwz r11,15332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15332);
	// li r28,1
	r28.s64 = 1;
	// stw r30,15588(r31)
	REX_STORE_U32(r31.u32 + 15588, r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82703054
	if (!ctx.cr6.eq) goto loc_82703054;
	// lwz r11,15400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270307c
	if (ctx.cr6.eq) goto loc_8270307C;
loc_82703054:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,15344(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 15344);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r6,15340(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 15340);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826febe0
	ctx.lr = 0x82703074;
	sub_826FEBE0(ctx, base);
	// sth r28,0(r29)
	REX_STORE_U16(r29.u32 + 0, r28.u16);
	// b 0x8270308c
	goto loc_8270308C;
loc_8270307C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82702bb0
	ctx.lr = 0x8270308C;
	sub_82702BB0(ctx, base);
loc_8270308C:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8270309c
	if (!ctx.cr6.eq) goto loc_8270309C;
	// stw r28,3700(r31)
	REX_STORE_U32(r31.u32 + 3700, r28.u32);
loc_8270309C:
	// lwz r11,3704(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827030b4
	if (ctx.cr6.eq) goto loc_827030B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,3700(r31)
	REX_STORE_U32(r31.u32 + 3700, r28.u32);
	// stw r11,3704(r31)
	REX_STORE_U32(r31.u32 + 3704, ctx.r11.u32);
loc_827030B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fc950
	ctx.lr = 0x827030BC;
	sub_826FC950(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82712898) {
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
	ctx.lr = 0x827128A0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// srd r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r5
	r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r4,r11,r5
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// bl 0x82725f80
	ctx.lr = 0x827128D4;
	sub_82725F80(ctx, base);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x827128e8
	if (!ctx.cr6.eq) goto loc_827128E8;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
loc_827128E8:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r26,0
	r26.s64 = 0;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82712af4
	if (!ctx.cr6.eq) goto loc_82712AF4;
	// extsb r28,r11
	r28.s64 = ctx.r11.s8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82712b80
	if (ctx.cr6.eq) goto loc_82712B80;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(r28.s32, 8, ctx.xer);
	// mr r30,r28
	r30.u64 = r28.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bgt cr6,0x82712a38
	if (ctx.cr6.gt) goto loc_82712A38;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(r28.u32, 32, ctx.xer);
	// ble cr6,0x82712934
	if (!ctx.cr6.gt) goto loc_82712934;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// b 0x827129d0
	goto loc_827129D0;
loc_82712934:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82712994
	if (!ctx.cr6.gt) goto loc_82712994;
loc_8271293C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82712994
	if (ctx.cr6.eq) goto loc_82712994;
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
	// bge 0x82712984
	if (!ctx.cr0.lt) goto loc_82712984;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82712984;
	sub_82725E38(ctx, base);
loc_82712984:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8271293c
	if (ctx.cr6.gt) goto loc_8271293C;
loc_82712994:
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
	// bge 0x827129cc
	if (!ctx.cr0.lt) goto loc_827129CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827129CC;
	sub_82725E38(ctx, base);
loc_827129CC:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_827129D0:
	// lwz r10,84(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 84);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82712af4
	if (!ctx.cr6.eq) goto loc_82712AF4;
	// addi r10,r28,-1
	ctx.r10.s64 = r28.s64 + -1;
	// stw r26,0(r25)
	REX_STORE_U32(r25.u32 + 0, r26.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82712a28
	if (!ctx.cr6.eq) goto loc_82712A28;
	// subfic r10,r28,8
	ctx.xer.ca = r28.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - r28.u64;
	// lwz r9,1760(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// li r8,255
	ctx.r8.s64 = 255;
	// sraw r7,r8,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// andc r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r11.u64;
	// neg r5,r6
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// stw r5,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_82712A28:
	// lwz r10,1760(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_82712A38:
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(r28.u32, 32, ctx.xer);
	// ble cr6,0x82712a48
	if (!ctx.cr6.gt) goto loc_82712A48;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// b 0x82712ae4
	goto loc_82712AE4;
loc_82712A48:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82712aa8
	if (!ctx.cr6.gt) goto loc_82712AA8;
loc_82712A50:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82712aa8
	if (ctx.cr6.eq) goto loc_82712AA8;
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
	// bge 0x82712a98
	if (!ctx.cr0.lt) goto loc_82712A98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82712A98;
	sub_82725E38(ctx, base);
loc_82712A98:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82712a50
	if (ctx.cr6.gt) goto loc_82712A50;
loc_82712AA8:
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
	// bge 0x82712ae0
	if (!ctx.cr0.lt) goto loc_82712AE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82712AE0;
	sub_82725E38(ctx, base);
loc_82712AE0:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82712AE4:
	// lwz r10,84(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82712b0c
	if (ctx.cr6.eq) goto loc_82712B0C;
loc_82712AF4:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// lwz r10,1760(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// stw r26,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_82712B0C:
	// addi r10,r28,-1
	ctx.r10.s64 = r28.s64 + -1;
	// stw r26,0(r25)
	REX_STORE_U32(r25.u32 + 0, r26.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82712b4c
	if (!ctx.cr6.eq) goto loc_82712B4C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,1760(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// subfic r8,r28,16
	ctx.xer.ca = r28.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - r28.u64;
	// ori r7,r10,65535
	ctx.r7.u64 = ctx.r10.u64 | 65535;
	// sraw r6,r7,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r6.s64 = ctx.r7.s32 >> temp.u32;
	// andc r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r11.u64;
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// stw r4,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// b 0x82712b54
	goto loc_82712B54;
loc_82712B4C:
	// lwz r10,1760(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82712B54:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r9,r11,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r9,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82712b90
	if (!ctx.cr0.lt) goto loc_82712B90;
	// bl 0x82725e38
	ctx.lr = 0x82712B78;
	sub_82725E38(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_82712B80:
	// li r26,0
	r26.s64 = 0;
	// stw r26,0(r25)
	REX_STORE_U32(r25.u32 + 0, r26.u32);
	// lwz r11,1760(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
loc_82712B90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8272AE90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r9,15364(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 15364);
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// lwz r7,15360(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 15360);
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// lwz r11,3800(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3800);
	// ori r4,r8,128
	ctx.r4.u64 = ctx.r8.u64 | 128;
	// lwz r10,3812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3812);
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// vspltisb v0,-1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0xFF)));
	// stw r4,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// vspltisw v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_set1_epi32(int(0x0)));
	// lvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v13,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// srawi r9,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 4;
	// vmrghb v0,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r4,r8,28
	ctx.r4.u64 = ctx.r8.u32 & 0xF;
	// li r5,16
	ctx.r5.s64 = 16;
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8272af30
	if (ctx.cr6.eq) goto loc_8272AF30;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8272af58
	if (!ctx.cr6.gt) goto loc_8272AF58;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_8272AEFC:
	// lvrx128 v62,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lvrx128 v60,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v12,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvlx128 v59,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v11,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vaddubs v10,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// stvlx v10,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvrx v10,r11,r5
	ea = ctx.r11.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v10.u8[i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8272aefc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272AEFC;
	// b 0x8272af58
	goto loc_8272AF58;
loc_8272AF30:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8272af58
	if (!ctx.cr6.gt) goto loc_8272AF58;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8272AF3C:
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vaddubs v10,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// stvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8272af3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272AF3C;
loc_8272AF58:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8272af8c
	if (!ctx.cr6.gt) goto loc_8272AF8C;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8272AF68:
	// lbzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x8272af80
	if (!ctx.cr6.gt) goto loc_8272AF80;
	// li r10,255
	ctx.r10.s64 = 255;
loc_8272AF80:
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8272af68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272AF68;
loc_8272AF8C:
	// srawi r9,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// lwz r11,3804(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3804);
	// lwz r10,3816(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3816);
	// addze r6,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r6.s64 = temp.s64;
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | ctx.r11.u64;
	// srawi r9,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 4;
	// clrlwi r7,r8,28
	ctx.r7.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r4,r9,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// subf r7,r4,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r4.u64;
	// beq cr6,0x8272b030
	if (ctx.cr6.eq) goto loc_8272B030;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8272b088
	if (!ctx.cr6.gt) goto loc_8272B088;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_8272AFCC:
	// lvrx128 v58,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v57,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v56,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v55,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvlx128 v54,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vor128 v53,v54,v56
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vupklsb128 v52,v55,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v55.s16)));
	// vupkhsb128 v51,v55,v0
	simde_mm_store_si128((simde__m128i*)ctx.v51.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v55.s8), simde_mm_load_si128((simde__m128i*)ctx.v55.s8))));
	// vupklsb128 v50,v53,v0
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v53.s16)));
	// vupkhsb128 v49,v53,v0
	simde_mm_store_si128((simde__m128i*)ctx.v49.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v53.s8), simde_mm_load_si128((simde__m128i*)ctx.v53.s8))));
	// vand128 v12,v52,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v11,v51,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v10,v50,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v9,v49,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v8,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v7,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v6,v8,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v5,v7,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vpkshus128 v48,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvlx128 v48,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// stvrx128 v48,r11,r5
	ea = ctx.r11.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v48.u8[i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8272afcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272AFCC;
	// b 0x8272b088
	goto loc_8272B088;
loc_8272B030:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8272b088
	if (!ctx.cr6.gt) goto loc_8272B088;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8272B03C:
	// lvx128 v47,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vupklsb128 v45,v47,v0
	simde_mm_store_si128((simde__m128i*)ctx.v45.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v47.s16)));
	// vupklsb128 v44,v46,v0
	simde_mm_store_si128((simde__m128i*)ctx.v44.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v46.s16)));
	// vupkhsb128 v43,v46,v0
	simde_mm_store_si128((simde__m128i*)ctx.v43.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v46.s8), simde_mm_load_si128((simde__m128i*)ctx.v46.s8))));
	// vupkhsb128 v42,v47,v0
	simde_mm_store_si128((simde__m128i*)ctx.v42.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v47.s8), simde_mm_load_si128((simde__m128i*)ctx.v47.s8))));
	// vand128 v12,v45,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v11,v44,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v10,v43,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v9,v42,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v8,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v7,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v6,v8,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v5,v7,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vpkshus128 v41,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v41,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8272b03c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272B03C;
loc_8272B088:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8272b0d0
	if (!ctx.cr6.gt) goto loc_8272B0D0;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
loc_8272B098:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,1(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x8272b0b8
	if (!ctx.cr6.gt) goto loc_8272B0B8;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x8272b0c4
	goto loc_8272B0C4;
loc_8272B0B8:
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
loc_8272B0C4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r11,1(r8)
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x8272b098
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272B098;
loc_8272B0D0:
	// lwz r11,3808(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3808);
	// srawi r9,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 4;
	// lwz r10,3820(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3820);
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// or r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 | ctx.r11.u64;
	// subf r7,r8,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r8.u64;
	// clrlwi r3,r4,28
	ctx.r3.u64 = ctx.r4.u32 & 0xF;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8272b16c
	if (ctx.cr6.eq) goto loc_8272B16C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8272b1c4
	if (!ctx.cr6.gt) goto loc_8272B1C4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_8272B108:
	// lvrx128 v40,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v39,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v38,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v37,v39,v40
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// lvlx128 v36,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vor128 v35,v36,v38
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// vupklsb128 v34,v37,v0
	simde_mm_store_si128((simde__m128i*)ctx.v34.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v37.s16)));
	// vupkhsb128 v33,v37,v0
	simde_mm_store_si128((simde__m128i*)ctx.v33.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v37.s8), simde_mm_load_si128((simde__m128i*)ctx.v37.s8))));
	// vupklsb128 v32,v35,v0
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v35.s16)));
	// vupkhsb128 v63,v35,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v35.s8), simde_mm_load_si128((simde__m128i*)ctx.v35.s8))));
	// vand128 v12,v34,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v11,v33,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v10,v32,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v9,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v8,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v7,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v6,v8,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v5,v7,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vpkshus128 v62,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvlx128 v62,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r11,r5
	ea = ctx.r11.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8272b108
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272B108;
	// b 0x8272b1c4
	goto loc_8272B1C4;
loc_8272B16C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8272b1c4
	if (!ctx.cr6.gt) goto loc_8272B1C4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8272B178:
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vupklsb128 v59,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v61.s16)));
	// vupklsb128 v58,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v60.s16)));
	// vupkhsb128 v57,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v60.s8), simde_mm_load_si128((simde__m128i*)ctx.v60.s8))));
	// vupkhsb128 v56,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v61.s8), simde_mm_load_si128((simde__m128i*)ctx.v61.s8))));
	// vand128 v12,v59,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v11,v58,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v10,v57,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v9,v56,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v8,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v7,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v6,v8,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v5,v7,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vpkshus128 v55,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v55,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8272b178
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272B178;
loc_8272B1C4:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
loc_8272B1D4:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,1(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x8272b1f4
	if (!ctx.cr6.gt) goto loc_8272B1F4;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x8272b200
	goto loc_8272B200;
loc_8272B1F4:
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
loc_8272B200:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r11,1(r8)
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x8272b1d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272B1D4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8274EE28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x8274EE30;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r28,1
	r28.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8274ee64
	if (ctx.cr6.eq) goto loc_8274EE64;
	// lwz r7,136(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r30,1928(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1928);
	// rlwinm r7,r7,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r31,r7,r5
	r31.u64 = ctx.r5.u64 - ctx.r7.u64;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_8274EE64:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8274eee0
	if (ctx.cr6.eq) goto loc_8274EEE0;
	// lwz r30,1924(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1924);
	// addic. r29,r5,-32
	ctx.xer.ca = ctx.r5.u32 > 31;
	r29.s64 = ctx.r5.s64 + -32;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8274ef00
	if (ctx.cr0.eq) goto loc_8274EF00;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8274eee0
	if (ctx.cr6.eq) goto loc_8274EEE0;
	// lwz r7,1920(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 1920);
	// lwz r6,1916(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 1916);
	// addi r5,r7,-16
	ctx.r5.s64 = ctx.r7.s64 + -16;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r6,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + r29.u32);
	// lhzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + r31.u32);
	// lhzx r7,r7,r31
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + r31.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// subf r6,r6,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r6.u64;
	// subf r5,r7,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r7.u64;
	// srawi r7,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 31;
	// srawi r27,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	r27.s64 = ctx.r5.s32 >> 31;
	// xor r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// xor r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 ^ r27.u64;
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// subf r6,r27,r5
	ctx.r6.u64 = ctx.r5.u64 - r27.u64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8274eee0
	if (!ctx.cr6.lt) goto loc_8274EEE0;
	// lwz r30,1928(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1928);
	// mr r29,r31
	r29.u64 = r31.u64;
loc_8274EEE0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8274ef00
	if (ctx.cr6.eq) goto loc_8274EF00;
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r6,r7,0,27,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x18;
	// subfic r5,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r6.u64;
	// subfe r7,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r7,r28
	r28.u64 = ctx.r7.u64 & r28.u64;
loc_8274EF00:
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8274ef10
	if (!ctx.cr6.eq) goto loc_8274EF10;
	// li r30,-1
	r30.s64 = -1;
loc_8274EF10:
	// lwz r11,1928(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1928);
	// subf r10,r30,r11
	ctx.r10.u64 = ctx.r11.u64 - r30.u64;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r30,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r30.u32);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8275A6F0) {
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
	ctx.lr = 0x8275A6F8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,0
	r30.s64 = 0;
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// srawi. r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r28.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r7,52(r1)
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// stw r8,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r8.u32);
	// stw r9,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r9.u32);
	// stw r30,-488(r1)
	REX_STORE_U32(ctx.r1.u32 + -488, r30.u32);
	// stw r28,-476(r1)
	REX_STORE_U32(ctx.r1.u32 + -476, r28.u32);
	// ble 0x8275b2c8
	if (!ctx.cr0.gt) goto loc_8275B2C8;
	// lwz r27,116(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// srawi r26,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r26.s64 = ctx.r10.s32 >> 2;
	// subf r10,r7,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r7.u64;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r26,-448(r1)
	REX_STORE_U32(ctx.r1.u32 + -448, r26.u32);
	// stw r10,-464(r1)
	REX_STORE_U32(ctx.r1.u32 + -464, ctx.r10.u32);
	// add r6,r27,r11
	ctx.r6.u64 = r27.u64 + ctx.r11.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-468(r1)
	REX_STORE_U32(ctx.r1.u32 + -468, ctx.r11.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
loc_8275A754:
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8275a770
	if (ctx.cr6.eq) goto loc_8275A770;
	// addi r10,r28,-1
	ctx.r10.s64 = r28.s64 + -1;
	// li r19,1
	r19.s64 = 1;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8275a774
	if (ctx.cr6.eq) goto loc_8275A774;
loc_8275A770:
	// li r19,0
	r19.s64 = 0;
loc_8275A774:
	// lwz r6,-464(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -464);
	// li r29,0
	r29.s64 = 0;
	// stw r19,-496(r1)
	REX_STORE_U32(ctx.r1.u32 + -496, r19.u32);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stw r4,-500(r1)
	REX_STORE_U32(ctx.r1.u32 + -500, ctx.r4.u32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r29,-492(r1)
	REX_STORE_U32(ctx.r1.u32 + -492, r29.u32);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x8275b294
	if (!ctx.cr6.gt) goto loc_8275B294;
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// srawi r5,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	ctx.r5.s64 = r27.s32 >> 1;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// stw r5,-472(r1)
	REX_STORE_U32(ctx.r1.u32 + -472, ctx.r5.u32);
	// rlwinm r30,r9,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,-436(r1)
	REX_STORE_U32(ctx.r1.u32 + -436, ctx.r7.u32);
	// add r28,r8,r4
	r28.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r4,r9,r30
	ctx.r4.u64 = ctx.r9.u64 + r30.u64;
	// stw r28,-452(r1)
	REX_STORE_U32(ctx.r1.u32 + -452, r28.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,-460(r1)
	REX_STORE_U32(ctx.r1.u32 + -460, ctx.r4.u32);
	// stw r5,-480(r1)
	REX_STORE_U32(ctx.r1.u32 + -480, ctx.r5.u32);
	// b 0x8275a7e0
	goto loc_8275A7E0;
loc_8275A7DC:
	// lwz r4,-460(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -460);
loc_8275A7E0:
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8275a7fc
	if (ctx.cr6.eq) goto loc_8275A7FC;
	// addi r7,r26,-1
	ctx.r7.s64 = r26.s64 + -1;
	// li r30,1
	r30.s64 = 1;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8275a800
	if (ctx.cr6.eq) goto loc_8275A800;
loc_8275A7FC:
	// li r30,0
	r30.s64 = 0;
loc_8275A800:
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r30,-484(r1)
	REX_STORE_U32(ctx.r1.u32 + -484, r30.u32);
	// addi r7,r1,-529
	ctx.r7.s64 = ctx.r1.s64 + -529;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8275A810:
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r29,1(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r28,2(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r27,3(r10)
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r26,4(r10)
	r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stb r5,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r5.u8);
	// stb r29,2(r7)
	REX_STORE_U8(ctx.r7.u32 + 2, r29.u8);
	// stb r28,3(r7)
	REX_STORE_U8(ctx.r7.u32 + 3, r28.u8);
	// stb r27,4(r7)
	REX_STORE_U8(ctx.r7.u32 + 4, r27.u8);
	// stbu r26,5(r7)
	ea = 5 + ctx.r7.u32;
	REX_STORE_U8(ea, r26.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8275a810
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275A810;
	// lwz r7,-452(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -452);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r8,r1,-560
	ctx.r8.s64 = ctx.r1.s64 + -560;
	// subf r7,r7,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r7.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,-440(r1)
	REX_STORE_U32(ctx.r1.u32 + -440, ctx.r7.u32);
	// addi r7,r1,-544
	ctx.r7.s64 = ctx.r1.s64 + -544;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r5,r1,-559
	ctx.r5.s64 = ctx.r1.s64 + -559;
loc_8275A864:
	// lbz r29,0(r6)
	r29.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// addi r28,r1,-543
	r28.s64 = ctx.r1.s64 + -543;
	// lbz r27,0(r31)
	r27.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r26,r1,-558
	r26.s64 = ctx.r1.s64 + -558;
	// lbz r25,1(r6)
	r25.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// addi r24,r1,-542
	r24.s64 = ctx.r1.s64 + -542;
	// lbz r23,1(r31)
	r23.u64 = REX_LOAD_U8(r31.u32 + 1);
	// lbz r22,2(r6)
	r22.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lbz r21,2(r31)
	r21.u64 = REX_LOAD_U8(r31.u32 + 2);
	// add r31,r31,r9
	r31.u64 = r31.u64 + ctx.r9.u64;
	// stbx r29,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, r29.u8);
	// stbx r27,r10,r7
	REX_STORE_U8(ctx.r10.u32 + ctx.r7.u32, r27.u8);
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r23,r10,r28
	REX_STORE_U8(ctx.r10.u32 + r28.u32, r23.u8);
	// stbx r22,r10,r26
	REX_STORE_U8(ctx.r10.u32 + r26.u32, r22.u8);
	// stbx r21,r10,r24
	REX_STORE_U8(ctx.r10.u32 + r24.u32, r21.u8);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// bdnz 0x8275a864
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275A864;
	// subf r9,r4,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r4.u64;
	// lbz r10,-510(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + -510);
	// subf r8,r4,r31
	ctx.r8.u64 = r31.u64 - ctx.r4.u64;
	// lbz r7,-556(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + -556);
	// lbz r5,-540(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + -540);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r9,-456(r1)
	REX_STORE_U32(ctx.r1.u32 + -456, ctx.r9.u32);
	// stw r8,-432(r1)
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r8.u32);
	// beq cr6,0x8275a920
	if (ctx.cr6.eq) goto loc_8275A920;
	// lbz r9,-525(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + -525);
	// lbz r8,-520(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + -520);
	// lbz r6,-515(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + -515);
	// lbz r4,-505(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + -505);
	// lbz r31,-559(r1)
	r31.u64 = REX_LOAD_U8(ctx.r1.u32 + -559);
	// lbz r30,-543(r1)
	r30.u64 = REX_LOAD_U8(ctx.r1.u32 + -543);
	// lbz r29,-553(r1)
	r29.u64 = REX_LOAD_U8(ctx.r1.u32 + -553);
	// lbz r28,-537(r1)
	r28.u64 = REX_LOAD_U8(ctx.r1.u32 + -537);
	// stb r9,-524(r1)
	REX_STORE_U8(ctx.r1.u32 + -524, ctx.r9.u8);
	// stb r8,-519(r1)
	REX_STORE_U8(ctx.r1.u32 + -519, ctx.r8.u8);
	// stb r6,-514(r1)
	REX_STORE_U8(ctx.r1.u32 + -514, ctx.r6.u8);
	// stb r10,-509(r1)
	REX_STORE_U8(ctx.r1.u32 + -509, ctx.r10.u8);
	// stb r4,-504(r1)
	REX_STORE_U8(ctx.r1.u32 + -504, ctx.r4.u8);
	// stb r31,-558(r1)
	REX_STORE_U8(ctx.r1.u32 + -558, r31.u8);
	// stb r30,-542(r1)
	REX_STORE_U8(ctx.r1.u32 + -542, r30.u8);
	// stb r7,-555(r1)
	REX_STORE_U8(ctx.r1.u32 + -555, ctx.r7.u8);
	// stb r5,-539(r1)
	REX_STORE_U8(ctx.r1.u32 + -539, ctx.r5.u8);
	// stb r29,-552(r1)
	REX_STORE_U8(ctx.r1.u32 + -552, r29.u8);
	// stb r28,-536(r1)
	REX_STORE_U8(ctx.r1.u32 + -536, r28.u8);
loc_8275A920:
	// lbz r9,-511(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + -511);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// lbz r8,-512(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + -512);
	// lbz r23,-513(r1)
	r23.u64 = REX_LOAD_U8(ctx.r1.u32 + -513);
	// beq cr6,0x8275a974
	if (ctx.cr6.eq) goto loc_8275A974;
	// lbz r6,-509(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + -509);
	// lbz r4,-557(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + -557);
	// lbz r31,-541(r1)
	r31.u64 = REX_LOAD_U8(ctx.r1.u32 + -541);
	// lbz r30,-555(r1)
	r30.u64 = REX_LOAD_U8(ctx.r1.u32 + -555);
	// lbz r29,-539(r1)
	r29.u64 = REX_LOAD_U8(ctx.r1.u32 + -539);
	// stb r23,-508(r1)
	REX_STORE_U8(ctx.r1.u32 + -508, r23.u8);
	// stb r8,-507(r1)
	REX_STORE_U8(ctx.r1.u32 + -507, ctx.r8.u8);
	// stb r9,-506(r1)
	REX_STORE_U8(ctx.r1.u32 + -506, ctx.r9.u8);
	// stb r10,-505(r1)
	REX_STORE_U8(ctx.r1.u32 + -505, ctx.r10.u8);
	// stb r6,-504(r1)
	REX_STORE_U8(ctx.r1.u32 + -504, ctx.r6.u8);
	// stb r4,-554(r1)
	REX_STORE_U8(ctx.r1.u32 + -554, ctx.r4.u8);
	// stb r31,-538(r1)
	REX_STORE_U8(ctx.r1.u32 + -538, r31.u8);
	// stb r7,-553(r1)
	REX_STORE_U8(ctx.r1.u32 + -553, ctx.r7.u8);
	// stb r5,-537(r1)
	REX_STORE_U8(ctx.r1.u32 + -537, ctx.r5.u8);
	// stb r30,-552(r1)
	REX_STORE_U8(ctx.r1.u32 + -552, r30.u8);
	// stb r29,-536(r1)
	REX_STORE_U8(ctx.r1.u32 + -536, r29.u8);
loc_8275A974:
	// lbz r10,-522(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + -522);
	// clrlwi r22,r23,24
	r22.u64 = r23.u32 & 0xFF;
	// lbz r25,-517(r1)
	r25.u64 = REX_LOAD_U8(ctx.r1.u32 + -517);
	// rlwinm r23,r23,1,23,30
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0x1FE;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lbz r26,-523(r1)
	r26.u64 = REX_LOAD_U8(ctx.r1.u32 + -523);
	// lbz r24,-521(r1)
	r24.u64 = REX_LOAD_U8(ctx.r1.u32 + -521);
	// rlwinm r29,r8,1,23,30
	r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1FE;
	// add r31,r25,r10
	r31.u64 = r25.u64 + ctx.r10.u64;
	// lbz r18,-528(r1)
	r18.u64 = REX_LOAD_U8(ctx.r1.u32 + -528);
	// lbz r19,-518(r1)
	r19.u64 = REX_LOAD_U8(ctx.r1.u32 + -518);
	// add r21,r10,r26
	r21.u64 = ctx.r10.u64 + r26.u64;
	// add r4,r31,r26
	ctx.r4.u64 = r31.u64 + r26.u64;
	// lbz r27,-527(r1)
	r27.u64 = REX_LOAD_U8(ctx.r1.u32 + -527);
	// add r14,r31,r24
	r14.u64 = r31.u64 + r24.u64;
	// lbz r5,-526(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + -526);
	// mr r31,r18
	r31.u64 = r18.u64;
	// lbz r7,-516(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + -516);
	// add r31,r23,r19
	r31.u64 = r23.u64 + r19.u64;
	// add r10,r24,r10
	ctx.r10.u64 = r24.u64 + ctx.r10.u64;
	// stw r31,-444(r1)
	REX_STORE_U32(ctx.r1.u32 + -444, r31.u32);
	// add r8,r21,r27
	ctx.r8.u64 = r21.u64 + r27.u64;
	// add r16,r10,r27
	r16.u64 = ctx.r10.u64 + r27.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// rotlwi r27,r27,1
	r27.u64 = __builtin_rotateleft32(r27.u32, 1);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// add r20,r9,r29
	r20.u64 = ctx.r9.u64 + r29.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// add r5,r27,r18
	ctx.r5.u64 = r27.u64 + r18.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// rotlwi r26,r26,1
	r26.u64 = __builtin_rotateleft32(r26.u32, 1);
	// rlwinm r17,r8,1,0,30
	r17.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r20,r6
	ctx.r7.u64 = r20.u64 + ctx.r6.u64;
	// rlwinm r15,r4,1,0,30
	r15.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r5,r5,85
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(85));
	// stw r5,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r5.u32);
	// add r4,r26,r18
	ctx.r4.u64 = r26.u64 + r18.u64;
	// rlwinm r16,r16,1,0,30
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r7,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r17,r18
	ctx.r8.u64 = r17.u64 + r18.u64;
	// rlwinm r14,r14,1,0,30
	r14.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r7,r18,8
	ctx.r7.u64 = __builtin_rotateleft32(r18.u32, 8);
	// mulli r5,r4,85
	ctx.r5.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(85));
	// stw r7,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r7.u32);
	// stw r5,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r5.u32);
	// add r17,r16,r28
	r17.u64 = r16.u64 + r28.u64;
	// add r27,r28,r27
	r27.u64 = r28.u64 + r27.u64;
	// mulli r4,r8,28
	ctx.r4.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(28));
	// stw r4,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r4.u32);
	// add r16,r15,r19
	r16.u64 = r15.u64 + r19.u64;
	// add r15,r14,r30
	r15.u64 = r14.u64 + r30.u64;
	// mulli r7,r27,85
	ctx.r7.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(85));
	// stw r7,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r7.u32);
	// mulli r8,r17,28
	ctx.r8.s64 = static_cast<int64_t>(r17.u64 * static_cast<uint64_t>(28));
	// stw r8,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r8.u32);
	// add r26,r19,r26
	r26.u64 = r19.u64 + r26.u64;
	// rotlwi r25,r25,1
	r25.u64 = __builtin_rotateleft32(r25.u32, 1);
	// mulli r4,r15,28
	ctx.r4.s64 = static_cast<int64_t>(r15.u64 * static_cast<uint64_t>(28));
	// stw r4,-264(r1)
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r4.u32);
	// lwz r4,-444(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -444);
	// add r21,r29,r22
	r21.u64 = r29.u64 + r22.u64;
	// mulli r7,r26,85
	ctx.r7.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(85));
	// stw r7,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r7.u32);
	// add r14,r25,r19
	r14.u64 = r25.u64 + r19.u64;
	// mulli r5,r16,28
	ctx.r5.s64 = static_cast<int64_t>(r16.u64 * static_cast<uint64_t>(28));
	// stw r5,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r5.u32);
	// rotlwi r8,r19,8
	ctx.r8.u64 = __builtin_rotateleft32(r19.u32, 8);
	// add r6,r21,r6
	ctx.r6.u64 = r21.u64 + ctx.r6.u64;
	// add r25,r25,r30
	r25.u64 = r25.u64 + r30.u64;
	// stw r8,-248(r1)
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r8.u32);
	// mulli r7,r14,85
	ctx.r7.s64 = static_cast<int64_t>(r14.u64 * static_cast<uint64_t>(85));
	// stw r7,-244(r1)
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r7.u32);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r5,r25,85
	ctx.r5.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(85));
	// stw r5,-240(r1)
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r5.u32);
	// mulli r8,r4,85
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(85));
	// stw r8,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r8.u32);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// add r7,r6,r19
	ctx.r7.u64 = ctx.r6.u64 + r19.u64;
	// add r6,r31,r30
	ctx.r6.u64 = r31.u64 + r30.u64;
	// lwz r19,-496(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -496);
	// mulli r5,r7,28
	ctx.r5.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(28));
	// stw r5,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r5.u32);
	// mulli r4,r6,28
	ctx.r4.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(28));
	// stw r4,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r4.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x8275aaf4
	if (ctx.cr6.eq) goto loc_8275AAF4;
	// rlwinm r10,r22,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 8) & 0xFFFFFF00;
	// mulli r8,r21,85
	ctx.r8.s64 = static_cast<int64_t>(r21.u64 * static_cast<uint64_t>(85));
	// stw r10,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r10.u32);
	// stw r8,-196(r1)
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r8.u32);
	// mulli r7,r20,85
	ctx.r7.s64 = static_cast<int64_t>(r20.u64 * static_cast<uint64_t>(85));
	// stw r7,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r7.u32);
	// b 0x8275ab38
	goto loc_8275AB38;
loc_8275AAF4:
	// lbz r10,-507(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + -507);
	// lbz r8,-508(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + -508);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// lbz r7,-506(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + -506);
	// add r4,r8,r23
	ctx.r4.u64 = ctx.r8.u64 + r23.u64;
	// add r5,r10,r22
	ctx.r5.u64 = ctx.r10.u64 + r22.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mulli r7,r4,85
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(85));
	// stw r7,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r7.u32);
	// mulli r6,r10,28
	ctx.r6.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// stw r6,-196(r1)
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r6.u32);
	// mulli r5,r8,28
	ctx.r5.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(28));
	// stw r5,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r5.u32);
loc_8275AB38:
	// lbz r8,-525(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + -525);
	// rlwinm r7,r28,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r29,-484(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -484);
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// stw r7,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r7.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r6,r10,r28
	ctx.r6.u64 = ctx.r10.u64 + r28.u64;
	// mulli r5,r6,85
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(85));
	// stw r5,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r5.u32);
	// beq cr6,0x8275ab6c
	if (ctx.cr6.eq) goto loc_8275AB6C;
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// stw r10,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r10.u32);
	// b 0x8275ab7c
	goto loc_8275AB7C;
loc_8275AB6C:
	// lbz r7,-524(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + -524);
	// add r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mulli r5,r6,85
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(85));
	// stw r5,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r5.u32);
loc_8275AB7C:
	// lbz r10,-520(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + -520);
	// rlwinm r6,r24,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r5,r6,r28
	ctx.r5.u64 = ctx.r6.u64 + r28.u64;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r4,r5,85
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(85));
	// stw r4,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r4.u32);
	// add r5,r7,r24
	ctx.r5.u64 = ctx.r7.u64 + r24.u64;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r5,r28
	ctx.r4.u64 = ctx.r5.u64 + r28.u64;
	// mulli r5,r4,28
	ctx.r5.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// stw r5,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r5.u32);
	// beq cr6,0x8275abc0
	if (ctx.cr6.eq) goto loc_8275ABC0;
	// mulli r8,r7,85
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(85));
	// stw r8,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r8.u32);
	// b 0x8275abe0
	goto loc_8275ABE0;
loc_8275ABC0:
	// lbz r5,-519(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + -519);
	// lbz r4,-524(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + -524);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mulli r5,r7,28
	ctx.r5.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(28));
	// stw r5,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r5.u32);
loc_8275ABE0:
	// lbz r8,-515(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + -515);
	// add r7,r6,r30
	ctx.r7.u64 = ctx.r6.u64 + r30.u64;
	// lbz r31,-514(r1)
	r31.u64 = REX_LOAD_U8(ctx.r1.u32 + -514);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mulli r6,r7,85
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(85));
	// stw r6,-260(r1)
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r6.u32);
	// add r5,r10,r24
	ctx.r5.u64 = ctx.r10.u64 + r24.u64;
	// rlwinm r7,r5,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r7,r30
	ctx.r4.u64 = ctx.r7.u64 + r30.u64;
	// mulli r7,r4,28
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// stw r7,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r7.u32);
	// beq cr6,0x8275ac20
	if (ctx.cr6.eq) goto loc_8275AC20;
	// mulli r10,r10,85
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(85));
	// stw r10,-252(r1)
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// b 0x8275ac38
	goto loc_8275AC38;
loc_8275AC20:
	// lbz r6,-519(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + -519);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + r31.u64;
	// mulli r4,r5,28
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(28));
	// stw r4,-252(r1)
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r4.u32);
loc_8275AC38:
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r30,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r10,r30
	ctx.r6.u64 = ctx.r10.u64 + r30.u64;
	// stw r7,-236(r1)
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r7.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// mulli r5,r6,85
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(85));
	// stw r5,-232(r1)
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r5.u32);
	// beq cr6,0x8275ac64
	if (ctx.cr6.eq) goto loc_8275AC64;
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// stw r10,-228(r1)
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// b 0x8275ac74
	goto loc_8275AC74;
loc_8275AC64:
	// clrlwi r7,r31,24
	ctx.r7.u64 = r31.u32 & 0xFF;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mulli r7,r10,85
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(85));
	// stw r7,-228(r1)
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r7.u32);
loc_8275AC74:
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r5,-510(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + -510);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r4,r6,r30
	ctx.r4.u64 = ctx.r6.u64 + r30.u64;
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// mulli r4,r4,85
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(85));
	// stw r4,-212(r1)
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r4.u32);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r4,r30
	ctx.r5.u64 = ctx.r4.u64 + r30.u64;
	// mulli r4,r5,28
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(28));
	// stw r4,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r4.u32);
	// lbz r4,-509(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + -509);
	// beq cr6,0x8275acc0
	if (ctx.cr6.eq) goto loc_8275ACC0;
	// mulli r8,r7,85
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(85));
	// stw r8,-204(r1)
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r8.u32);
	// b 0x8275acdc
	goto loc_8275ACDC;
loc_8275ACC0:
	// add r5,r4,r10
	ctx.r5.u64 = ctx.r4.u64 + ctx.r10.u64;
	// clrlwi r7,r31,24
	ctx.r7.u64 = r31.u32 & 0xFF;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulli r5,r7,28
	ctx.r5.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(28));
	// stw r5,-204(r1)
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r5.u32);
loc_8275ACDC:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x8275ad20
	if (ctx.cr6.eq) goto loc_8275AD20;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// mulli r6,r8,85
	ctx.r6.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(85));
	// stw r7,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r7.u32);
	// stw r6,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r6.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8275ad0c
	if (ctx.cr6.eq) goto loc_8275AD0C;
	// rlwinm r10,r28,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFFFF00;
	// stw r10,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// b 0x8275ad7c
	goto loc_8275AD7C;
loc_8275AD0C:
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mulli r9,r10,85
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(85));
	// stw r9,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r9.u32);
	// b 0x8275ad7c
	goto loc_8275AD7C;
loc_8275AD20:
	// lbz r7,-505(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + -505);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lbz r8,-506(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + -506);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r7,r6,r8
	ctx.r7.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r5,r7,85
	ctx.r5.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(85));
	// stw r5,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r5.u32);
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r8,r9,28
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(28));
	// stw r8,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r8.u32);
	// beq cr6,0x8275ad60
	if (ctx.cr6.eq) goto loc_8275AD60;
	// mulli r10,r10,85
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(85));
	// stw r10,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// b 0x8275ad7c
	goto loc_8275AD7C;
loc_8275AD60:
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// lbz r9,-504(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + -504);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r6,r7,28
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(28));
	// stw r6,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r6.u32);
loc_8275AD7C:
	// lbz r8,-560(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + -560);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lbz r7,-559(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + -559);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r8.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mulli r5,r6,85
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(85));
	// stw r5,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r5.u32);
	// beq cr6,0x8275adb8
	if (ctx.cr6.eq) goto loc_8275ADB8;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// stw r10,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r10.u32);
	// b 0x8275adc8
	goto loc_8275ADC8;
loc_8275ADB8:
	// lbz r7,-558(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + -558);
	// add r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mulli r5,r6,85
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(85));
	// stw r5,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r5.u32);
loc_8275ADC8:
	// lbz r5,-556(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + -556);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lbz r6,-557(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + -557);
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// rotlwi r4,r6,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// add r31,r10,r6
	r31.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// add r6,r4,r9
	ctx.r6.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r30,r31,r8
	r30.u64 = r31.u64 + ctx.r8.u64;
	// mulli r6,r6,85
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(85));
	// stw r6,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r6.u32);
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// add r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 + ctx.r9.u64;
	// mulli r9,r5,28
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(28));
	// lbz r5,-555(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + -555);
	// stw r9,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r9.u32);
	// beq cr6,0x8275ae20
	if (ctx.cr6.eq) goto loc_8275AE20;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r8,r9,85
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(85));
	// stw r8,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r8.u32);
	// b 0x8275ae3c
	goto loc_8275AE3C;
loc_8275AE20:
	// add r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lbz r6,-558(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + -558);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mulli r6,r8,28
	ctx.r6.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(28));
	// stw r6,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r6.u32);
loc_8275AE3C:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x8275ae7c
	if (ctx.cr6.eq) goto loc_8275AE7C;
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// mulli r8,r31,85
	ctx.r8.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(85));
	// stw r9,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r9.u32);
	// stw r8,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r8.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8275ae68
	if (ctx.cr6.eq) goto loc_8275AE68;
	// rlwinm r10,r30,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// stw r10,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r10.u32);
	// b 0x8275aed8
	goto loc_8275AED8;
loc_8275AE68:
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mulli r9,r10,85
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(85));
	// stw r9,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r9.u32);
	// b 0x8275aed8
	goto loc_8275AED8;
loc_8275AE7C:
	// lbz r8,-553(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + -553);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lbz r9,-554(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + -554);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mulli r7,r4,85
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(85));
	// stw r7,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r7.u32);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r4,r6,28
	ctx.r4.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(28));
	// stw r4,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r4.u32);
	// beq cr6,0x8275aebc
	if (ctx.cr6.eq) goto loc_8275AEBC;
	// mulli r10,r10,85
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(85));
	// stw r10,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r10.u32);
	// b 0x8275aed8
	goto loc_8275AED8;
loc_8275AEBC:
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// lbz r9,-552(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + -552);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r6,r7,28
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(28));
	// stw r6,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r6.u32);
loc_8275AED8:
	// lbz r8,-544(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + -544);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lbz r7,-543(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + -543);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,-416(r1)
	REX_STORE_U32(ctx.r1.u32 + -416, ctx.r8.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mulli r5,r6,85
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(85));
	// stw r5,-412(r1)
	REX_STORE_U32(ctx.r1.u32 + -412, ctx.r5.u32);
	// beq cr6,0x8275af14
	if (ctx.cr6.eq) goto loc_8275AF14;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// stw r10,-408(r1)
	REX_STORE_U32(ctx.r1.u32 + -408, ctx.r10.u32);
	// b 0x8275af24
	goto loc_8275AF24;
loc_8275AF14:
	// lbz r7,-542(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + -542);
	// add r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mulli r5,r6,85
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(85));
	// stw r5,-408(r1)
	REX_STORE_U32(ctx.r1.u32 + -408, ctx.r5.u32);
loc_8275AF24:
	// lbz r5,-540(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + -540);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lbz r6,-541(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + -541);
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// rotlwi r4,r6,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// add r31,r10,r6
	r31.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// add r6,r4,r9
	ctx.r6.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r30,r31,r8
	r30.u64 = r31.u64 + ctx.r8.u64;
	// mulli r6,r6,85
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(85));
	// stw r6,-404(r1)
	REX_STORE_U32(ctx.r1.u32 + -404, ctx.r6.u32);
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// add r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 + ctx.r9.u64;
	// mulli r9,r5,28
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(28));
	// lbz r5,-539(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + -539);
	// stw r9,-400(r1)
	REX_STORE_U32(ctx.r1.u32 + -400, ctx.r9.u32);
	// beq cr6,0x8275af7c
	if (ctx.cr6.eq) goto loc_8275AF7C;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r8,r9,85
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(85));
	// stw r8,-396(r1)
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r8.u32);
	// b 0x8275af98
	goto loc_8275AF98;
loc_8275AF7C:
	// add r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lbz r6,-542(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + -542);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mulli r6,r8,28
	ctx.r6.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(28));
	// stw r6,-396(r1)
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r6.u32);
loc_8275AF98:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x8275afd8
	if (ctx.cr6.eq) goto loc_8275AFD8;
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// mulli r8,r31,85
	ctx.r8.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(85));
	// stw r9,-392(r1)
	REX_STORE_U32(ctx.r1.u32 + -392, ctx.r9.u32);
	// stw r8,-388(r1)
	REX_STORE_U32(ctx.r1.u32 + -388, ctx.r8.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8275afc4
	if (ctx.cr6.eq) goto loc_8275AFC4;
	// rlwinm r10,r30,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// stw r10,-384(r1)
	REX_STORE_U32(ctx.r1.u32 + -384, ctx.r10.u32);
	// b 0x8275b034
	goto loc_8275B034;
loc_8275AFC4:
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mulli r9,r10,85
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(85));
	// stw r9,-384(r1)
	REX_STORE_U32(ctx.r1.u32 + -384, ctx.r9.u32);
	// b 0x8275b034
	goto loc_8275B034;
loc_8275AFD8:
	// lbz r8,-537(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + -537);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lbz r9,-538(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + -538);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mulli r7,r4,85
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(85));
	// stw r7,-392(r1)
	REX_STORE_U32(ctx.r1.u32 + -392, ctx.r7.u32);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r4,r6,28
	ctx.r4.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(28));
	// stw r4,-388(r1)
	REX_STORE_U32(ctx.r1.u32 + -388, ctx.r4.u32);
	// beq cr6,0x8275b018
	if (ctx.cr6.eq) goto loc_8275B018;
	// mulli r10,r10,85
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(85));
	// stw r10,-384(r1)
	REX_STORE_U32(ctx.r1.u32 + -384, ctx.r10.u32);
	// b 0x8275b034
	goto loc_8275B034;
loc_8275B018:
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// lbz r9,-536(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + -536);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r6,r7,28
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(28));
	// stw r6,-384(r1)
	REX_STORE_U32(ctx.r1.u32 + -384, ctx.r6.u32);
loc_8275B034:
	// lwz r9,-500(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -500);
	// li r23,0
	r23.s64 = 0;
	// lwz r22,-472(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -472);
	// li r29,0
	r29.s64 = 0;
	// lwz r8,-436(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -436);
	// li r24,0
	r24.s64 = 0;
	// lis r7,154
	ctx.r7.s64 = 10092544;
loc_8275B050:
	// srawi r6,r23,1
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1) != 0);
	ctx.r6.s64 = r23.s32 >> 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r30,r6,r4
	r30.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r26,r1,-416
	r26.s64 = ctx.r1.s64 + -416;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r25,r1,-368
	r25.s64 = ctx.r1.s64 + -368;
loc_8275B070:
	// srawi r6,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 1;
	// add r5,r24,r10
	ctx.r5.u64 = r24.u64 + ctx.r10.u64;
	// add r4,r6,r30
	ctx.r4.u64 = ctx.r6.u64 + r30.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// mullw r27,r8,r10
	r27.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// lwzx r21,r4,r26
	r21.u64 = REX_LOAD_U32(ctx.r4.u32 + r26.u32);
	// lwzx r4,r4,r25
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + r25.u32);
	// lwzx r31,r5,r31
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// mulli r28,r4,100
	r28.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(100));
	// mulli r20,r21,-208
	r20.s64 = static_cast<int64_t>(r21.u64 * static_cast<uint64_t>(-208));
	// subf r28,r28,r20
	r28.u64 = r20.u64 - r28.u64;
	// mulli r31,r31,297
	r31.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(297));
	// subf r21,r11,r21
	r21.u64 = r21.u64 - ctx.r11.u64;
	// add r20,r28,r31
	r20.u64 = r28.u64 + r31.u64;
	// mulli r28,r21,408
	r28.s64 = static_cast<int64_t>(r21.u64 * static_cast<uint64_t>(408));
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// add r21,r28,r31
	r21.u64 = r28.u64 + r31.u64;
	// add r20,r20,r7
	r20.u64 = r20.u64 + ctx.r7.u64;
	// rlwinm r28,r4,9,0,22
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 9) & 0xFFFFFE00;
	// srawi r4,r20,16
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = r20.s32 >> 16;
	// add r31,r28,r31
	r31.u64 = r28.u64 + r31.u64;
	// srawi r21,r21,16
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0xFFFF) != 0);
	r21.s64 = r21.s32 >> 16;
	// addi r28,r6,-1
	r28.s64 = ctx.r6.s64 + -1;
	// srawi r20,r31,16
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFFFF) != 0);
	r20.s64 = r31.s32 >> 16;
	// srawi r31,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	r31.s64 = r28.s32 >> 1;
	// lbzx r4,r4,r3
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// add r27,r27,r29
	r27.u64 = r27.u64 + r29.u64;
	// lbzx r21,r21,r3
	r21.u64 = REX_LOAD_U8(r21.u32 + ctx.r3.u32);
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// addi r18,r1,-416
	r18.s64 = ctx.r1.s64 + -416;
	// rlwimi r4,r21,5,11,23
	ctx.r4.u64 = (__builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 5) & 0x1FFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFE000FF);
	// lbzx r20,r20,r3
	r20.u64 = REX_LOAD_U8(r20.u32 + ctx.r3.u32);
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r21,r1,-368
	r21.s64 = ctx.r1.s64 + -368;
	// rlwinm r4,r4,3,16,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFE0;
	// rlwinm r27,r27,1,0,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r20,29,3,31
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r17,r1,-316
	r17.s64 = ctx.r1.s64 + -316;
	// lwzx r18,r31,r18
	r18.u64 = REX_LOAD_U32(r31.u32 + r18.u32);
	// or r4,r4,r20
	ctx.r4.u64 = ctx.r4.u64 | r20.u64;
	// lwzx r21,r31,r21
	r21.u64 = REX_LOAD_U32(r31.u32 + r21.u32);
	// mulli r20,r18,-208
	r20.s64 = static_cast<int64_t>(r18.u64 * static_cast<uint64_t>(-208));
	// sthx r4,r27,r9
	REX_STORE_U16(r27.u32 + ctx.r9.u32, ctx.r4.u16);
	// lwzx r4,r5,r17
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + r17.u32);
	// mulli r27,r21,100
	r27.s64 = static_cast<int64_t>(r21.u64 * static_cast<uint64_t>(100));
	// mulli r31,r4,297
	r31.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(297));
	// subf r27,r27,r20
	r27.u64 = r20.u64 - r27.u64;
	// subf r4,r11,r18
	ctx.r4.u64 = r18.u64 - ctx.r11.u64;
	// add r20,r27,r31
	r20.u64 = r27.u64 + r31.u64;
	// mulli r27,r4,408
	r27.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(408));
	// subf r4,r11,r21
	ctx.r4.u64 = r21.u64 - ctx.r11.u64;
	// add r20,r20,r7
	r20.u64 = r20.u64 + ctx.r7.u64;
	// add r21,r27,r31
	r21.u64 = r27.u64 + r31.u64;
	// rlwinm r27,r4,9,0,22
	r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 9) & 0xFFFFFE00;
	// srawi r4,r20,16
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = r20.s32 >> 16;
	// srawi r21,r21,16
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0xFFFF) != 0);
	r21.s64 = r21.s32 >> 16;
	// add r27,r27,r31
	r27.u64 = r27.u64 + r31.u64;
	// mullw r31,r8,r28
	r31.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// lbzx r4,r4,r3
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// lbzx r28,r21,r3
	r28.u64 = REX_LOAD_U8(r21.u32 + ctx.r3.u32);
	// srawi r27,r27,16
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xFFFF) != 0);
	r27.s64 = r27.s32 >> 16;
	// add r21,r31,r29
	r21.u64 = r31.u64 + r29.u64;
	// srawi r31,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	r31.s64 = ctx.r6.s32 >> 1;
	// rlwimi r4,r28,5,11,23
	ctx.r4.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0x1FFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFE000FF);
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// lbzx r28,r27,r3
	r28.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
	// rlwinm r4,r4,3,16,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFE0;
	// rlwinm r27,r31,2,0,29
	r27.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r21,1,0,30
	r31.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r28,29,3,31
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r21,r1,-416
	r21.s64 = ctx.r1.s64 + -416;
	// addi r20,r1,-368
	r20.s64 = ctx.r1.s64 + -368;
	// or r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 | r28.u64;
	// addi r28,r1,-312
	r28.s64 = ctx.r1.s64 + -312;
	// sthx r4,r31,r9
	REX_STORE_U16(r31.u32 + ctx.r9.u32, ctx.r4.u16);
	// mullw r31,r6,r8
	r31.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// lwzx r4,r27,r21
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + r21.u32);
	// lwzx r27,r27,r20
	r27.u64 = REX_LOAD_U32(r27.u32 + r20.u32);
	// lwzx r6,r5,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + r28.u32);
	// mulli r28,r4,-208
	r28.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(-208));
	// mulli r5,r27,100
	ctx.r5.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(100));
	// subf r28,r5,r28
	r28.u64 = r28.u64 - ctx.r5.u64;
	// mulli r6,r6,297
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(297));
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// add r5,r28,r6
	ctx.r5.u64 = r28.u64 + ctx.r6.u64;
	// mulli r28,r4,408
	r28.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(408));
	// subf r4,r11,r27
	ctx.r4.u64 = r27.u64 - ctx.r11.u64;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r27,r28,r6
	r27.u64 = r28.u64 + ctx.r6.u64;
	// rlwinm r28,r4,9,0,22
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 9) & 0xFFFFFE00;
	// srawi r4,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 16;
	// srawi r5,r27,16
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = r27.s32 >> 16;
	// add r6,r28,r6
	ctx.r6.u64 = r28.u64 + ctx.r6.u64;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// lbzx r4,r4,r3
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwimi r4,r5,5,11,23
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0x1FFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFE000FF);
	// lbzx r6,r6,r3
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// rlwinm r5,r4,3,16,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFE0;
	// rlwinm r4,r6,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// or r6,r5,r4
	ctx.r6.u64 = ctx.r5.u64 | ctx.r4.u64;
	// sthx r6,r31,r9
	REX_STORE_U16(r31.u32 + ctx.r9.u32, ctx.r6.u16);
	// bdnz 0x8275b070
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275B070;
	// addi r24,r24,6
	r24.s64 = r24.s64 + 6;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// add r29,r22,r29
	r29.u64 = r22.u64 + r29.u64;
	// cmpwi cr6,r24,36
	ctx.cr6.compare<int32_t>(r24.s32, 36, ctx.xer);
	// blt cr6,0x8275b050
	if (ctx.cr6.lt) goto loc_8275B050;
	// lwz r10,-492(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -492);
	// lwz r8,-480(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -480);
	// lwz r7,-440(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -440);
	// addi r29,r10,1
	r29.s64 = ctx.r10.s64 + 1;
	// lwz r6,-456(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -456);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r4,-432(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// lwz r26,-448(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -448);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// lwz r9,68(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// addi r31,r4,2
	r31.s64 = ctx.r4.s64 + 2;
	// lwz r8,60(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(r29.s32, r26.s32, ctx.xer);
	// stw r29,-492(r1)
	REX_STORE_U32(ctx.r1.u32 + -492, r29.u32);
	// stw r5,-500(r1)
	REX_STORE_U32(ctx.r1.u32 + -500, ctx.r5.u32);
	// blt cr6,0x8275a7dc
	if (ctx.cr6.lt) goto loc_8275A7DC;
	// lwz r27,116(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r7,52(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// lwz r5,36(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r30,-488(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -488);
	// lwz r28,-476(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -476);
loc_8275B294:
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,-468(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -468);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,-488(r1)
	REX_STORE_U32(ctx.r1.u32 + -488, r30.u32);
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// stw r7,52(r1)
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// blt cr6,0x8275a754
	if (ctx.cr6.lt) goto loc_8275A754;
loc_8275B2C8:
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_827B4B00) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
	// li r6,48
	ctx.r6.s64 = 48;
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,96
	ctx.r7.s64 = 96;
	// li r8,144
	ctx.r8.s64 = 144;
	// vpkshus v24,v1,v1
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// li r9,192
	ctx.r9.s64 = 192;
	// li r10,240
	ctx.r10.s64 = 240;
	// li r11,288
	ctx.r11.s64 = 288;
	// lvx128 v2,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,336
	ctx.r12.s64 = 336;
	// lvx128 v3,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v25,v2,v2
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// lvx128 v5,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v26,v3,v3
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// lvx128 v6,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v7,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v27,v4,v4
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// lvx128 v8,r4,r12
	ea = (ctx.r4.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stvewx v24,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v24.u32[3 - ((ea & 0xF) >> 2)]);
	// add r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vpkshus v28,v5,v5
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// vpkshus v29,v6,v6
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// add r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 + ctx.r8.u64;
	// vpkshus v30,v7,v7
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvewx v24,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v24.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stvewx v25,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, v25.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v31,v8,v8
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvewx v25,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, v25.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stvewx v26,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v26,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, v31.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, v31.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827B7D10) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x827B7D18;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// li r9,1120
	ctx.r9.s64 = 1120;
	// vspltish v8,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x3)));
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// lwz r30,1164(r6)
	r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v26,7
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_set1_epi16(short(0x7)));
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vrlh v10,v12,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, result);
	}
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// li r31,1
	r31.s64 = 1;
	// lvx128 v11,r6,r9
	ea = (ctx.r6.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// vspltish v3,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_set1_epi16(short(0x1)));
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// vaddshs v4,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// li r28,-32
	r28.s64 = -32;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// li r29,-16
	r29.s64 = -16;
	// vsubshs v25,v10,v11
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vspltish v2,5
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_set1_epi16(short(0x5)));
	// slw r9,r31,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r8.u8 & 0x3F));
	// li r3,16
	ctx.r3.s64 = 16;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bne cr6,0x827b7ecc
	if (!ctx.cr6.eq) goto loc_827B7ECC;
	// lvx128 v60,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvx128 v62,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v59,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v7,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v5,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v9,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827b80a8
	if (!ctx.cr6.gt) goto loc_827B80A8;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_827B7DE4:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v1,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// vor v11,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vor v31,v7,v7
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// vor v7,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvx128 v57,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v5,v11,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v29,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// vperm128 v6,v56,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v27,v10,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v29,v5
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vmrglb v22,v0,v6
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v9,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v24,v27
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v19,v28,v11
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v18,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v7,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v23,v10
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v5,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)v22.u8));
	// vadduhm v28,v21,v30
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vslh v14,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v19,v20
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v24,v17,v18
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v23,v15,v16
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vslh v22,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v20,v1,v14
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vadduhm v19,v27,v28
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vsubshs v18,v31,v29
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vadduhm v17,v23,v24
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsubshs v16,v0,v22
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vsubshs v15,v0,v21
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vadduhm v14,v19,v4
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v1,v17,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v31,v20,v16
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v30,v18,v15
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v29,v14,v31
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v28,v1,v30
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vsrah v27,v29,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v28,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v27,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// blt cr6,0x827b7de4
	if (ctx.cr6.lt) goto loc_827B7DE4;
	// b 0x827b80a8
	goto loc_827B80A8;
loc_827B7ECC:
	// li r31,32
	r31.s64 = 32;
	// lvrx128 v52,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v50,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvlx128 v55,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v54,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r31,r10
	temp.u32 = r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v31,v50,v51
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v10,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v5,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v7,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v9,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v30,v46,v47
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
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
	// ble cr6,0x827b80a8
	if (!ctx.cr6.gt) goto loc_827B80A8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
loc_827B7F50:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v29,v7,v7
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor v28,v6,v6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v7,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor128 v42,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vor v11,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v31.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v6,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v10,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v27,v5,v5
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vslh v30,v11,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v41,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v43,v63,v4
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vslh v24,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v21,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v10,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v19,v63,v41,v5
	simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v20,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v18,v0,v31
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v17,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v31,v0,v31
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v7,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v24,v30
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v14,v23,v11
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v22,v21,v22
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vor v5,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vslh v24,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v6,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v9,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vmrghb v1,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v21,v20,v10
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v30,v18,v18
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)v18.u8));
	// vadduhm v18,v16,v17
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v17,v14,v15
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v16,v23,v24
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vslh v19,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v21,v22
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vslh v20,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v9,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v17,v18
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vslh v22,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v17,v28,v19
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vslh v21,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v15,v16
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v28,v24,v14
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vsubshs v20,v29,v20
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vor128 v4,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// vadduhm v24,v23,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v29,v5,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v0,v22
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vsubshs v22,v0,v21
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vadduhm v19,v16,v4
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v21,v18,v4
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v14,v24,v28
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v15,v29,v15
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vslh v18,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v20,v23
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v28,v17,v22
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v22,v14,v15
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vsubshs v24,v0,v18
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vsubshs v23,v27,v16
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vadduhm v20,v19,v28
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v21,v21,v29
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v18,v22,v4
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v19,v23,v24
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsrah v16,v20,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v15,v18,v19
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// stvx128 v16,r10,r29
	ea = (ctx.r10.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r10,r28
	ea = (ctx.r10.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v14,v15,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// stvx128 v14,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x827b7f50
	if (ctx.cr6.lt) goto loc_827B7F50;
loc_827B80A8:
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
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vslh v9,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// bne cr6,0x827b8130
	if (!ctx.cr6.eq) goto loc_827B8130;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827b81cc
	if (!ctx.cr6.gt) goto loc_827B81CC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_827B80DC:
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
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
	// stvewx128 v39,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x827b80dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B80DC;
	// b 0x827b81cc
	goto loc_827B81CC;
loc_827B8130:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827b81cc
	if (!ctx.cr6.gt) goto loc_827B81CC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_827B8148:
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
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x827b8148
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B8148;
loc_827B81CC:
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
	// b 0x826a1d08
	return;
}

