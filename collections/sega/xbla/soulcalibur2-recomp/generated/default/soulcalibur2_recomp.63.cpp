#include "soulcalibur2_funcs.63.h"

DEFINE_REX_FUNC(sub_820E2538) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsh. r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820e254c
	if (!ctx.cr0.eq) goto loc_820E254C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_820E254C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820e2564
	if (!ctx.cr6.lt) goto loc_820E2564;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// b 0x820e2568
	goto loc_820E2568;
loc_820E2564:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820E2568:
	// rlwinm r10,r3,0,17,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x7C00;
	// rlwinm r9,r3,13,9,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 13) & 0x7FE000;
	// addis r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 131072;
	// addi r10,r10,-16384
	ctx.r10.s64 = ctx.r10.s64 + -16384;
	// rlwinm r10,r10,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E7428) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e88
	ctx.lr = 0x820E7430;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f38
	ctx.lr = 0x820E7438;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// beq 0x820e7538
	if (ctx.cr0.eq) goto loc_820E7538;
	// bl 0x820e73c0
	ctx.lr = 0x820E7468;
	sub_820E73C0(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r30,0
	r30.s64 = 0;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lwz r3,32268(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 32268);
	// bl 0x820e77b0
	ctx.lr = 0x820E748C;
	sub_820E77B0(ctx, base);
	// bl 0x820e7268
	ctx.lr = 0x820E7490;
	sub_820E7268(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x820e72c8
	ctx.lr = 0x820E74A8;
	sub_820E72C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r9,r31,28
	ctx.r9.s64 = r31.s64 + 28;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r9,r31,36
	ctx.r9.s64 = r31.s64 + 36;
	// lfs f13,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// addi r4,r11,16004
	ctx.r4.s64 = ctx.r11.s64 + 16004;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f29,120(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r6,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x821761e0
	ctx.lr = 0x820E7534;
	sub_821761E0(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_820E7538:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f84
	ctx.lr = 0x820E7544;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_820EFDB8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x820efe1c
	if (!ctx.cr6.eq) goto loc_820EFE1C;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r11,r11,32336
	ctx.r11.s64 = ctx.r11.s64 + 32336;
	// lwz r11,4892(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4892);
	// lwz r10,164(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// stw r10,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// stw r11,392(r3)
	REX_STORE_U32(ctx.r3.u32 + 392, ctx.r11.u32);
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820efe14
	if (ctx.cr6.lt) goto loc_820EFE14;
	// bne cr6,0x820efe1c
	if (!ctx.cr6.eq) goto loc_820EFE1C;
	// bl 0x820ee318
	ctx.lr = 0x820EFE10;
	sub_820EE318(ctx, base);
	// b 0x820efe1c
	goto loc_820EFE1C;
loc_820EFE14:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820ee240
	ctx.lr = 0x820EFE1C;
	sub_820EE240(ctx, base);
loc_820EFE1C:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820efe38
	if (ctx.cr6.lt) goto loc_820EFE38;
	// bne cr6,0x820efe40
	if (!ctx.cr6.eq) goto loc_820EFE40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820ee048
	ctx.lr = 0x820EFE34;
	sub_820EE048(ctx, base);
	// b 0x820efe40
	goto loc_820EFE40;
loc_820EFE38:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820efb70
	ctx.lr = 0x820EFE40;
	sub_820EFB70(ctx, base);
loc_820EFE40:
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

DEFINE_REX_FUNC(sub_820F3470) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r8,r11,-7072
	ctx.r8.s64 = ctx.r11.s64 + -7072;
	// b 0x820f3030
	sub_820F3030(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820F3760) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lwz r11,8336(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8336);
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// lhz r10,30(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 30);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// bne cr6,0x820f3780
	if (!ctx.cr6.eq) goto loc_820F3780;
	// lwz r10,9356(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 9356);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820F3780:
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// blt cr6,0x820f378c
	if (ctx.cr6.lt) goto loc_820F378C;
	// li r11,13
	ctx.r11.s64 = 13;
loc_820F378C:
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r10,r9
	temp.u8 = (~ctx.r10.u32 + ctx.r9.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F5418) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e7c
	ctx.lr = 0x820F5420;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f38
	ctx.lr = 0x820F5428;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r25,0
	r25.s64 = 0;
	// lwz r10,8336(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8336);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r28,8(r8)
	r28.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r25,9356(r3)
	REX_STORE_U32(ctx.r3.u32 + 9356, r25.u32);
	// lwz r11,80(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 80);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x820f5470
	if (ctx.cr6.eq) goto loc_820F5470;
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// beq cr6,0x820f5468
	if (ctx.cr6.eq) goto loc_820F5468;
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// bne cr6,0x820f5478
	if (!ctx.cr6.eq) goto loc_820F5478;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x820f5474
	goto loc_820F5474;
loc_820F5468:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x820f5474
	goto loc_820F5474;
loc_820F5470:
	// li r11,3
	ctx.r11.s64 = 3;
loc_820F5474:
	// stw r11,9356(r31)
	REX_STORE_U32(r31.u32 + 9356, ctx.r11.u32);
loc_820F5478:
	// lwz r11,9356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 9356);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// ble cr6,0x820f548c
	if (!ctx.cr6.gt) goto loc_820F548C;
	// li r11,13
	ctx.r11.s64 = 13;
loc_820F548C:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// mulli r9,r11,72
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// addi r26,r10,432
	r26.s64 = ctx.r10.s64 + 432;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r10,r11,2744
	ctx.r10.s64 = ctx.r11.s64 + 2744;
	// lhz r11,30(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 30);
	// add r27,r9,r10
	r27.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x820f54b4
	if (!ctx.cr6.eq) goto loc_820F54B4;
	// addi r27,r31,9368
	r27.s64 = r31.s64 + 9368;
loc_820F54B4:
	// lbz r11,175(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 175);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f54c8
	if (ctx.cr0.eq) goto loc_820F54C8;
loc_820F54C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820f596c
	goto loc_820F596C;
loc_820F54C8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r9,90(r28)
	ctx.r9.u64 = REX_LOAD_U16(r28.u32 + 90);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// cmplwi cr6,r9,27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 27, ctx.xer);
	// addi r29,r11,3896
	r29.s64 = ctx.r11.s64 + 3896;
	// lfs f28,16172(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16172);
	f28.f64 = double(temp.f32);
	// lfs f29,2344(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2344);
	f29.f64 = double(temp.f32);
	// bne cr6,0x820f55c8
	if (!ctx.cr6.eq) goto loc_820F55C8;
	// bl 0x820fed40
	ctx.lr = 0x820F54F0;
	sub_820FED40(ctx, base);
	// lwz r9,8336(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8336);
	// addi r10,r29,12
	ctx.r10.s64 = r29.s64 + 12;
	// lhz r11,592(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 592);
	// mulli r8,r9,28
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(28));
	// fmuls f31,f1,f29
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 * f29.f64));
	// lfsx f30,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	f30.f64 = double(temp.f32);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// cmplwi cr6,r11,105
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 105, ctx.xer);
	// addi r30,r10,1496
	r30.s64 = ctx.r10.s64 + 1496;
	// beq cr6,0x820f5528
	if (ctx.cr6.eq) goto loc_820F5528;
	// cmplwi cr6,r11,106
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 106, ctx.xer);
	// beq cr6,0x820f5528
	if (ctx.cr6.eq) goto loc_820F5528;
	// cmplwi cr6,r11,104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 104, ctx.xer);
	// bne cr6,0x820f5578
	if (!ctx.cr6.eq) goto loc_820F5578;
loc_820F5528:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lfs f0,5732(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 5732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// ble cr6,0x820f5548
	if (!ctx.cr6.gt) goto loc_820F5548;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r30
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// blt cr6,0x820f54c0
	if (ctx.cr6.lt) goto loc_820F54C0;
loc_820F5548:
	// cmplwi cr6,r11,104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 104, ctx.xer);
	// bne cr6,0x820f5578
	if (!ctx.cr6.eq) goto loc_820F5578;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f9310
	ctx.lr = 0x820F555C;
	sub_820F9310(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820f5578
	if (!ctx.cr0.eq) goto loc_820F5578;
	// lwz r11,8336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8336);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// blt cr6,0x820f54c0
	if (ctx.cr6.lt) goto loc_820F54C0;
loc_820F5578:
	// lhz r11,592(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 592);
	// cmplwi cr6,r11,105
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 105, ctx.xer);
	// beq cr6,0x820f558c
	if (ctx.cr6.eq) goto loc_820F558C;
	// cmplwi cr6,r11,106
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 106, ctx.xer);
	// bne cr6,0x820f55c8
	if (!ctx.cr6.eq) goto loc_820F55C8;
loc_820F558C:
	// lhz r11,590(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 590);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820f55a0
	if (ctx.cr6.eq) goto loc_820F55A0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820f55c8
	if (!ctx.cr6.eq) goto loc_820F55C8;
loc_820F55A0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f9310
	ctx.lr = 0x820F55AC;
	sub_820F9310(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820f55c8
	if (!ctx.cr0.eq) goto loc_820F55C8;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// blt cr6,0x820f54c0
	if (ctx.cr6.lt) goto loc_820F54C0;
	// lwz r11,8336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8336);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x820f54c0
	if (ctx.cr6.gt) goto loc_820F54C0;
loc_820F55C8:
	// lhz r11,90(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 90);
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// bne cr6,0x820f5634
	if (!ctx.cr6.eq) goto loc_820F5634;
	// lhz r11,630(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 630);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x820f55e8
	if (ctx.cr6.eq) goto loc_820F55E8;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x820f5634
	if (!ctx.cr6.eq) goto loc_820F5634;
loc_820F55E8:
	// lwz r11,8488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8488);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f5634
	if (!ctx.cr6.eq) goto loc_820F5634;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,5732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5732);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820f5634
	if (!ctx.cr6.gt) goto loc_820F5634;
	// bl 0x820fed40
	ctx.lr = 0x820F5610;
	sub_820FED40(ctx, base);
	// lwz r11,8336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8336);
	// fmuls f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f29.f64));
	// addi r10,r29,12
	ctx.r10.s64 = r29.s64 + 12;
	// mulli r9,r11,28
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// lfsx f13,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820f54c0
	if (ctx.cr6.lt) goto loc_820F54C0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x820f54c0
	if (ctx.cr6.gt) goto loc_820F54C0;
loc_820F5634:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,8384(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8384);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8368(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8368, temp.u32);
	// bne cr6,0x820f5658
	if (!ctx.cr6.eq) goto loc_820F5658;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2340(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8368(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8368, temp.u32);
loc_820F5658:
	// lhz r11,90(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 90);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x820f5700
	if (!ctx.cr6.eq) goto loc_820F5700;
	// lwz r11,8336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8336);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x820f5700
	if (ctx.cr6.lt) goto loc_820F5700;
	// addic. r11,r28,8120
	ctx.xer.ca = r28.u32 > 4294959175;
	ctx.r11.s64 = r28.s64 + 8120;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// beq 0x820f568c
	if (ctx.cr0.eq) goto loc_820F568C;
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_820F568C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,5732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5732);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820f56f4
	if (ctx.cr6.lt) goto loc_820F56F4;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bge cr6,0x820f5700
	if (!ctx.cr6.lt) goto loc_820F5700;
	// lhz r11,630(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 630);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x820f56d4
	if (!ctx.cr6.eq) goto loc_820F56D4;
	// lfs f0,8368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8368);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r10,70
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 70, ctx.xer);
	// blt cr6,0x820f56cc
	if (ctx.cr6.lt) goto loc_820F56CC;
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// b 0x820f56d0
	goto loc_820F56D0;
loc_820F56CC:
	// fsubs f0,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - f29.f64));
loc_820F56D0:
	// stfs f0,8368(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8368, temp.u32);
loc_820F56D4:
	// lhz r11,630(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 630);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x820f5700
	if (!ctx.cr6.eq) goto loc_820F5700;
	// cmpwi cr6,r10,70
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 70, ctx.xer);
	// blt cr6,0x820f56f4
	if (ctx.cr6.lt) goto loc_820F56F4;
	// lfs f0,8368(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8368);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// b 0x820f56fc
	goto loc_820F56FC;
loc_820F56F4:
	// lfs f0,8368(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8368);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - f29.f64));
loc_820F56FC:
	// stfs f0,8368(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8368, temp.u32);
loc_820F5700:
	// lwz r10,8364(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8364);
	// rlwinm. r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x820f573c
	if (ctx.cr0.eq) goto loc_820F573C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lhz r11,90(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 90);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x820f573c
	if (!ctx.cr6.eq) goto loc_820F573C;
	// lwz r11,8336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8336);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x820f573c
	if (!ctx.cr6.lt) goto loc_820F573C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8368(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16188(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16188);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,8368(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8368, temp.u32);
loc_820F573C:
	// lwz r11,8328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8328);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820f5758
	if (!ctx.cr6.eq) goto loc_820F5758;
	// lfs f0,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8368);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8368(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8368, temp.u32);
loc_820F5758:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820f5770
	if (!ctx.cr6.eq) goto loc_820F5770;
	// lfs f0,12(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8368);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8368(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8368, temp.u32);
loc_820F5770:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x820f5788
	if (!ctx.cr6.eq) goto loc_820F5788;
	// lfs f0,16(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8368);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8368(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8368, temp.u32);
loc_820F5788:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x820f57a0
	if (!ctx.cr6.eq) goto loc_820F57A0;
	// lfs f0,20(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8368);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8368(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8368, temp.u32);
loc_820F57A0:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x820f57b8
	if (!ctx.cr6.eq) goto loc_820F57B8;
	// lfs f0,24(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8368);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8368(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8368, temp.u32);
loc_820F57B8:
	// lbz r11,195(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 195);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f57d4
	if (ctx.cr0.eq) goto loc_820F57D4;
	// lfs f0,36(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8368);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8368(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8368, temp.u32);
loc_820F57D4:
	// rlwinm. r11,r10,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f57ec
	if (ctx.cr0.eq) goto loc_820F57EC;
	// lfs f0,52(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8368);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8368(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8368, temp.u32);
loc_820F57EC:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lhz r11,624(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 624);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820f580c
	if (ctx.cr6.eq) goto loc_820F580C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820f580c
	if (ctx.cr6.eq) goto loc_820F580C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x820f581c
	if (!ctx.cr6.eq) goto loc_820F581C;
loc_820F580C:
	// lfs f0,60(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8368);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8368(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8368, temp.u32);
loc_820F581C:
	// lhz r11,618(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 618);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820f5834
	if (!ctx.cr0.eq) goto loc_820F5834;
	// lhz r11,604(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 604);
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bne cr6,0x820f5868
	if (!ctx.cr6.eq) goto loc_820F5868;
loc_820F5834:
	// lhz r11,30(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 30);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x820f5858
	if (!ctx.cr6.eq) goto loc_820F5858;
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bne cr6,0x820f5858
	if (!ctx.cr6.eq) goto loc_820F5858;
	// lfs f0,8368(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8368);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f0,8368(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8368, temp.u32);
loc_820F5858:
	// lfs f0,64(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8368);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8368(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8368, temp.u32);
loc_820F5868:
	// lwz r11,8360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8360);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f5884
	if (ctx.cr0.eq) goto loc_820F5884;
	// lfs f0,68(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8368);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8368(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8368, temp.u32);
loc_820F5884:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f58a0
	if (ctx.cr6.eq) goto loc_820F58A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8368(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2352);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,8368(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8368, temp.u32);
loc_820F58A0:
	// bl 0x820fed40
	ctx.lr = 0x820F58A4;
	sub_820FED40(ctx, base);
	// fmuls f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f29.f64));
	// lfs f13,8368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8368);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820f5968
	if (!ctx.cr6.lt) goto loc_820F5968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820fb518
	ctx.lr = 0x820F58BC;
	sub_820FB518(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f5968
	if (ctx.cr0.eq) goto loc_820F5968;
	// li r29,1
	r29.s64 = 1;
	// stw r25,8288(r31)
	REX_STORE_U32(r31.u32 + 8288, r25.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,8388(r31)
	REX_STORE_U32(r31.u32 + 8388, r29.u32);
	// bl 0x820fa0d0
	ctx.lr = 0x820F58D8;
	sub_820FA0D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f5968
	if (ctx.cr0.eq) goto loc_820F5968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820fa0d8
	ctx.lr = 0x820F58E8;
	sub_820FA0D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f5968
	if (ctx.cr0.eq) goto loc_820F5968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820fa0e0
	ctx.lr = 0x820F58F8;
	sub_820FA0E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f5968
	if (ctx.cr0.eq) goto loc_820F5968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f40d0
	ctx.lr = 0x820F5908;
	sub_820F40D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x820f5960
	if (!ctx.cr0.gt) goto loc_820F5960;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x820f93d0
	ctx.lr = 0x820F591C;
	sub_820F93D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f93b0
	ctx.lr = 0x820F5928;
	sub_820F93B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f9390
	ctx.lr = 0x820F5930;
	sub_820F9390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820fbb18
	ctx.lr = 0x820F5938;
	sub_820FBB18(ctx, base);
	// lwz r11,8384(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8384);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f5948
	if (ctx.cr6.eq) goto loc_820F5948;
	// stw r25,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, r25.u32);
loc_820F5948:
	// stw r25,8380(r31)
	REX_STORE_U32(r31.u32 + 8380, r25.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r25,8384(r31)
	REX_STORE_U32(r31.u32 + 8384, r25.u32);
	// bl 0x820f9390
	ctx.lr = 0x820F5958;
	sub_820F9390(ctx, base);
	// mr r25,r29
	r25.u64 = r29.u64;
	// b 0x820f5968
	goto loc_820F5968;
loc_820F5960:
	// stw r25,8388(r31)
	REX_STORE_U32(r31.u32 + 8388, r25.u32);
	// stw r29,8400(r31)
	REX_STORE_U32(r31.u32 + 8400, r29.u32);
loc_820F5968:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_820F596C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f84
	ctx.lr = 0x820F5978;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82116DA8) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r9,r10,27952
	ctx.r9.s64 = ctx.r10.s64 + 27952;
	// addi r6,r6,31736
	ctx.r6.s64 = ctx.r6.s64 + 31736;
	// addi r8,r8,27992
	ctx.r8.s64 = ctx.r8.s64 + 27992;
	// addi r7,r7,27648
	ctx.r7.s64 = ctx.r7.s64 + 27648;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821f7d50
	ctx.lr = 0x82116DF0;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82116e0c
	if (ctx.cr0.eq) goto loc_82116E0C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82116e10
	goto loc_82116E10;
loc_82116E0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82116E10:
	// stw r31,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r31.u32);
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

DEFINE_REX_FUNC(sub_82117CE0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,32016
	ctx.r6.s64 = ctx.r11.s64 + 32016;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x82117D18;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82117d38
	if (ctx.cr0.eq) goto loc_82117D38;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,31996
	ctx.r11.s64 = ctx.r11.s64 + 31996;
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82117D38:
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

DEFINE_REX_FUNC(sub_82118A80) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e8c
	ctx.lr = 0x82118A88;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f30
	ctx.lr = 0x82118A90;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,208(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82118cb8
	if (ctx.cr6.eq) goto loc_82118CB8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32173
	ctx.r8.s64 = -2108489728;
	// lfs f30,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
	// lfs f3,28452(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28452);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// lfs f1,16204(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16204);
	ctx.f1.f64 = double(temp.f32);
	// lwz r30,504(r8)
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 504);
	// bl 0x82204ae0
	ctx.lr = 0x82118ACC;
	sub_82204AE0(ctx, base);
	// stfs f1,368(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 368, temp.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// lfs f0,244(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r11,192
	r30.s64 = ctx.r11.s64 + 192;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82118aec
	if (!ctx.cr6.lt) goto loc_82118AEC;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
loc_82118AEC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f26,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	f26.f64 = double(temp.f32);
	// fmuls f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * f26.f64));
	// lfs f27,17064(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 17064);
	f27.f64 = double(temp.f32);
	// lfs f13,32252(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32252);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fmadds f0,f12,f27,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, f27.f64, ctx.f0.f64)));
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82118b34
	if (!ctx.cr6.lt) goto loc_82118B34;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,32248(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32248);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x82118b50
	goto loc_82118B50;
loc_82118B34:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// lfs f3,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f3.f64 = double(temp.f32);
	// fnmsubs f1,f0,f27,f31
	ctx.f1.f64 = double(float(-std::fma(ctx.f0.f64, f27.f64, -f31.f64)));
	// bl 0x82204ae0
	ctx.lr = 0x82118B4C;
	sub_82204AE0(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
loc_82118B50:
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 192);
	// bl 0x821b16a0
	ctx.lr = 0x82118B58;
	sub_821B16A0(ctx, base);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lfs f28,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f28.f64 = double(temp.f32);
	// lfs f13,5468(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 5468);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * f28.f64));
	// fmuls f29,f0,f29
	f29.f64 = double(float(ctx.f0.f64 * f29.f64));
	// bgt cr6,0x82118b90
	if (ctx.cr6.gt) goto loc_82118B90;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32244(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32244);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f29,f13,f27,f0
	f29.f64 = double(float(std::fma(ctx.f13.f64, f27.f64, ctx.f0.f64)));
	// b 0x82118bbc
	goto loc_82118BBC;
loc_82118B90:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lhz r11,432(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 432);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82118bbc
	if (!ctx.cr0.eq) goto loc_82118BBC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f0,32240(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32240);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x82204b00
	ctx.lr = 0x82118BB8;
	sub_82204B00(ctx, base);
	// stfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
loc_82118BBC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lfs f3,-8492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8492);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82204ae0
	ctx.lr = 0x82118BD0;
	sub_82204AE0(ctx, base);
	// stfs f1,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,180(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f12,176(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r29,r31,128
	r29.s64 = r31.s64 + 128;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f13,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16704);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x820e2028
	ctx.lr = 0x82118C34;
	sub_820E2028(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0778
	ctx.lr = 0x82118C40;
	sub_820E0778(ctx, base);
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// li r11,27
	ctx.r11.s64 = 27;
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,1904
	ctx.r10.s64 = ctx.r10.s64 + 1904;
	// lfs f11,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r9,24048
	ctx.r9.s64 = ctx.r9.s64 + 24048;
	// stfs f31,188(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 188, temp.u32);
	// stfs f13,176(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// fmuls f0,f30,f28
	ctx.f0.f64 = double(float(f30.f64 * f28.f64));
	// stfs f12,180(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f11,184(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// addi r9,r9,44
	ctx.r9.s64 = ctx.r9.s64 + 44;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82118C80:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82118ca4
	if (ctx.cr6.gt) goto loc_82118CA4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82118ca0
	if (!ctx.cr6.eq) goto loc_82118CA0;
	// stfs f30,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// b 0x82118ca4
	goto loc_82118CA4;
loc_82118CA0:
	// stfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_82118CA4:
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// bdnz 0x82118c80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82118C80;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lbz r11,103(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 103);
	// b 0x82118cbc
	goto loc_82118CBC;
loc_82118CB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82118CBC:
	// stb r11,110(r31)
	REX_STORE_U8(r31.u32 + 110, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f7c
	ctx.lr = 0x82118CCC;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82122F18) {
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
	// bl 0x822d4e78
	ctx.lr = 0x82122F20;
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lha r11,90(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 90));
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// extsb r25,r10
	r25.s64 = ctx.r10.s8;
	// ble cr6,0x82122f48
	if (!ctx.cr6.gt) goto loc_82122F48;
	// li r26,32
	r26.s64 = 32;
loc_82122F48:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lwz r9,10140(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 10140);
	// rlwinm r10,r26,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,11760
	ctx.r11.s64 = ctx.r11.s64 + 11760;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r9,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,21500
	r30.s64 = ctx.r11.s64 + 21500;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r7,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// stw r10,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// bl 0x820e1df8
	ctx.lr = 0x82122F9C;
	sub_820E1DF8(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r24,r11,-27764
	r24.s64 = ctx.r11.s64 + -27764;
	// lbz r11,187(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 187);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82123130
	if (ctx.cr0.eq) goto loc_82123130;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r27,r11,13128
	r27.s64 = ctx.r11.s64 + 13128;
	// lfs f0,-30444(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30444);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82123010
	if (!ctx.cr6.lt) goto loc_82123010;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82125218
	ctx.lr = 0x82122FD4;
	sub_82125218(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x82123010
	if (!ctx.cr6.eq) goto loc_82123010;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lwz r11,1856(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1856);
	// rlwinm r29,r25,2,0,29
	r29.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r10,-27772
	r31.s64 = ctx.r10.s64 + -27772;
	// lwzx r10,r29,r31
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// ble cr6,0x82123010
	if (!ctx.cr6.gt) goto loc_82123010;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82122c88
	ctx.lr = 0x82123008;
	sub_82122C88(ctx, base);
	// lwz r11,1856(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1856);
	// stwx r11,r29,r31
	REX_STORE_U32(r29.u32 + r31.u32, ctx.r11.u32);
loc_82123010:
	// cmpwi cr6,r26,11
	ctx.cr6.compare<int32_t>(r26.s32, 11, ctx.xer);
	// blt cr6,0x82123130
	if (ctx.cr6.lt) goto loc_82123130;
	// cmpwi cr6,r26,12
	ctx.cr6.compare<int32_t>(r26.s32, 12, ctx.xer);
	// ble cr6,0x82123030
	if (!ctx.cr6.gt) goto loc_82123030;
	// cmpwi cr6,r26,16
	ctx.cr6.compare<int32_t>(r26.s32, 16, ctx.xer);
	// ble cr6,0x82123130
	if (!ctx.cr6.gt) goto loc_82123130;
	// cmpwi cr6,r26,18
	ctx.cr6.compare<int32_t>(r26.s32, 18, ctx.xer);
	// bgt cr6,0x82123130
	if (ctx.cr6.gt) goto loc_82123130;
loc_82123030:
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lfs f0,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r25,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 4) & 0xFFFFFFF0;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r31,r11,-27676
	r31.s64 = ctx.r11.s64 + -27676;
	// lfs f0,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfsx f1,r9,r24
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r24.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82128648
	ctx.lr = 0x8212306C;
	sub_82128648(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82128aa8
	ctx.lr = 0x82123090;
	sub_82128AA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x821230b8
	if (!ctx.cr0.gt) goto loc_821230B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lha r11,30(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821230b8
	if (!ctx.cr6.lt) goto loc_821230B8;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r3,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821230bc
	goto loc_821230BC;
loc_821230B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821230BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82123130
	if (ctx.cr6.eq) goto loc_82123130;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r11,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x82123130
	if (ctx.cr6.eq) goto loc_82123130;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x82123130
	if (ctx.cr6.eq) goto loc_82123130;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lwz r11,1856(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1856);
	// rlwinm r31,r25,2,0,29
	r31.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,-27780
	r30.s64 = ctx.r10.s64 + -27780;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + r30.u32);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// ble cr6,0x82123120
	if (!ctx.cr6.gt) goto loc_82123120;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-5280
	ctx.r11.s64 = ctx.r11.s64 + -5280;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lhax r4,r10,r11
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// bl 0x8212d7c8
	ctx.lr = 0x82123120;
	sub_8212D7C8(ctx, base);
loc_82123120:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82122bb8
	ctx.lr = 0x82123128;
	sub_82122BB8(ctx, base);
	// lwz r11,1856(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1856);
	// stwx r11,r31,r30
	REX_STORE_U32(r31.u32 + r30.u32, ctx.r11.u32);
loc_82123130:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r25,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + r24.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stwx r8,r11,r24
	REX_STORE_U32(ctx.r11.u32 + r24.u32, ctx.r8.u32);
	// stw r7,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r6,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r10,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8212AB50) {
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
	// bl 0x822d4e78
	ctx.lr = 0x8212AB58;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32165
	r26.s64 = -2107965440;
	// lwz r10,-32480(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + -32480);
	// addi r31,r10,80
	r31.s64 = ctx.r10.s64 + 80;
	// lbz r11,315(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 315);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8212ad9c
	if (ctx.cr6.lt) goto loc_8212AD9C;
	// beq cr6,0x8212ac94
	if (ctx.cr6.eq) goto loc_8212AC94;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8212abf8
	if (ctx.cr6.lt) goto loc_8212ABF8;
	// bne cr6,0x8212adec
	if (!ctx.cr6.eq) goto loc_8212ADEC;
	// lbz r11,234(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 234);
	// li r27,1
	r27.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r27
	r28.u64 = r27.u64;
	// ble 0x8212abf0
	if (!ctx.cr0.gt) goto loc_8212ABF0;
	// addi r30,r31,260
	r30.s64 = r31.s64 + 260;
loc_8212ABA0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212abc4
	if (ctx.cr6.eq) goto loc_8212ABC4;
	// lwz r3,-24(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212ABB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8212abc8
	if (ctx.cr0.eq) goto loc_8212ABC8;
loc_8212ABC4:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8212ABC8:
	// lbz r10,234(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 234);
	// and r28,r11,r28
	r28.u64 = ctx.r11.u64 & r28.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212aba0
	if (ctx.cr6.lt) goto loc_8212ABA0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8212adec
	if (ctx.cr6.eq) goto loc_8212ADEC;
	// lwz r10,-32480(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + -32480);
loc_8212ABF0:
	// sth r27,40(r10)
	REX_STORE_U16(ctx.r10.u32 + 40, r27.u16);
	// b 0x8212adec
	goto loc_8212ADEC;
loc_8212ABF8:
	// lbz r10,234(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 234);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsb. r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r8,235(r31)
	REX_STORE_U8(r31.u32 + 235, ctx.r8.u8);
	// ble 0x8212ac40
	if (!ctx.cr0.gt) goto loc_8212AC40;
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// li r26,2
	r26.s64 = 2;
loc_8212AC18:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8212ac28
	if (!ctx.cr6.eq) goto loc_8212AC28;
	// stb r26,235(r31)
	REX_STORE_U8(r31.u32 + 235, r26.u8);
loc_8212AC28:
	// lbz r8,234(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 234);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8212ac18
	if (ctx.cr6.lt) goto loc_8212AC18;
loc_8212AC40:
	// lbz r11,235(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 235);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8212adec
	if (!ctx.cr6.eq) goto loc_8212ADEC;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8212adec
	if (!ctx.cr6.gt) goto loc_8212ADEC;
	// addi r30,r31,248
	r30.s64 = r31.s64 + 248;
loc_8212AC5C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212ac78
	if (ctx.cr6.eq) goto loc_8212AC78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212AC74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,-12(r30)
	REX_STORE_U32(r30.u32 + -12, ctx.r3.u32);
loc_8212AC78:
	// lbz r11,234(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 234);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212ac5c
	if (ctx.cr6.lt) goto loc_8212AC5C;
	// b 0x8212adec
	goto loc_8212ADEC;
loc_8212AC94:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// li r26,2
	r26.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212ad10
	if (ctx.cr6.eq) goto loc_8212AD10;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212adec
	if (ctx.cr6.eq) goto loc_8212ADEC;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r6.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r9,30464(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 30464);
	// addi r30,r31,64
	r30.s64 = r31.s64 + 64;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r5,r31,200
	ctx.r5.s64 = r31.s64 + 200;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r4,r31,184
	ctx.r4.s64 = r31.s64 + 184;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// lwzx r3,r3,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// addi r9,r31,12
	ctx.r9.s64 = r31.s64 + 12;
	// bl 0x82205cb0
	ctx.lr = 0x8212AD0C;
	sub_82205CB0(ctx, base);
	// b 0x8212ad94
	goto loc_8212AD94;
loc_8212AD10:
	// lbz r11,234(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 234);
	// li r27,0
	r27.s64 = 0;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8212ad94
	if (!ctx.cr0.gt) goto loc_8212AD94;
	// addi r28,r31,12
	r28.s64 = r31.s64 + 12;
	// addi r29,r31,64
	r29.s64 = r31.s64 + 64;
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
loc_8212AD2C:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r25,52(r30)
	r25.u64 = REX_LOAD_U32(r30.u32 + 52);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r11,2047
	ctx.r11.s64 = ctx.r11.s64 + 2047;
	// lwz r3,-8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -8);
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// srawi r24,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	r24.s64 = ctx.r11.s32 >> 11;
	// lwz r5,28(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r6,-96(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + -96);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwzu r11,4(r30)
	ea = 4 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// addze r24,r24
	temp.s64 = r24.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r24.u32;
	r24.s64 = temp.s64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// rlwinm r25,r24,11,0,20
	r25.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 11) & 0xFFFFF800;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x821f7aa0
	ctx.lr = 0x8212AD78;
	sub_821F7AA0(ctx, base);
	// lbz r11,234(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 234);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212ad2c
	if (ctx.cr6.lt) goto loc_8212AD2C;
loc_8212AD94:
	// stb r26,235(r31)
	REX_STORE_U8(r31.u32 + 235, r26.u8);
	// b 0x8212adec
	goto loc_8212ADEC;
loc_8212AD9C:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// li r27,1
	r27.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212ade8
	if (ctx.cr6.eq) goto loc_8212ADE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r27,234(r31)
	REX_STORE_U8(r31.u32 + 234, r27.u8);
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lis r5,-32165
	ctx.r5.s64 = -2107965440;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// addi r9,r31,64
	ctx.r9.s64 = r31.s64 + 64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r11,30464(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 30464);
	// addi r6,r31,12
	ctx.r6.s64 = r31.s64 + 12;
	// addi r5,r31,200
	ctx.r5.s64 = r31.s64 + 200;
	// addi r4,r31,184
	ctx.r4.s64 = r31.s64 + 184;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82205d38
	ctx.lr = 0x8212ADE8;
	sub_82205D38(ctx, base);
loc_8212ADE8:
	// stb r27,235(r31)
	REX_STORE_U8(r31.u32 + 235, r27.u8);
loc_8212ADEC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82133870) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x82133878;
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x821336c0
	ctx.lr = 0x821338AC;
	sub_821336C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// lfs f29,2012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	f29.f64 = double(temp.f32);
	// bne cr6,0x821339b4
	if (!ctx.cr6.eq) goto loc_821339B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm. r10,r30,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f1,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// beq 0x82133904
	if (ctx.cr0.eq) goto loc_82133904;
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82133904
	if (ctx.cr0.eq) goto loc_82133904;
	// mulli r11,r4,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbz r11,85(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 85);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82133904
	if (ctx.cr0.eq) goto loc_82133904;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
loc_821338FC:
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// b 0x821339ac
	goto loc_821339AC;
loc_82133904:
	// rlwinm. r11,r30,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213393c
	if (ctx.cr0.eq) goto loc_8213393C;
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213393c
	if (ctx.cr0.eq) goto loc_8213393C;
	// mulli r11,r4,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbz r11,83(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 83);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213393c
	if (ctx.cr0.eq) goto loc_8213393C;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// stfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// b 0x821339ac
	goto loc_821339AC;
loc_8213393C:
	// rlwinm. r11,r30,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82133978
	if (ctx.cr0.eq) goto loc_82133978;
	// rlwinm. r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82133978
	if (ctx.cr0.eq) goto loc_82133978;
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82133978
	if (ctx.cr0.eq) goto loc_82133978;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lfs f0,17064(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17064);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821338fc
	goto loc_821338FC;
loc_82133978:
	// rlwinm. r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821339b4
	if (ctx.cr0.eq) goto loc_821339B4;
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821339b4
	if (ctx.cr0.eq) goto loc_821339B4;
	// addi r11,r4,15
	ctx.r11.s64 = ctx.r4.s64 + 15;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821339b4
	if (ctx.cr0.eq) goto loc_821339B4;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// stfs f29,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
loc_821339AC:
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x8212bc38
	ctx.lr = 0x821339B4;
	sub_8212BC38(ctx, base);
loc_821339B4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwa r9,0(r29)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(r29.u32 + 0));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// subfic r11,r11,5
	ctx.xer.ca = ctx.r11.u32 <= 5;
	ctx.r11.u64 = static_cast<uint64_t>(5) - ctx.r11.u64;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfs f0,27552(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 27552);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lfs f12,-24932(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24932);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-24928(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -24928);
	ctx.f13.f64 = double(temp.f32);
	// li r11,30
	ctx.r11.s64 = 30;
	// fmadds f31,f10,f0,f13
	f31.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f30,f11,f0,f12
	f30.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f12.f64)));
	// beq cr6,0x82133a14
	if (ctx.cr6.eq) goto loc_82133A14;
	// li r11,8
	ctx.r11.s64 = 8;
loc_82133A14:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,1856(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1856);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// lfs f0,1980(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1980);
	ctx.f0.f64 = double(temp.f32);
	// divwu r9,r10,r11
	ctx.r9.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e0000
	ctx.lr = 0x82133A6C;
	sub_820E0000(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// addi r8,r9,21008
	ctx.r8.s64 = ctx.r9.s64 + 21008;
	// lfs f12,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,26932(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26932);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f12
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// fadds f11,f30,f0
	ctx.f11.f64 = double(float(f30.f64 + ctx.f0.f64));
	// lwz r3,21008(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 21008);
	// fadds f10,f31,f0
	ctx.f10.f64 = double(float(f31.f64 + ctx.f0.f64));
	// fmr f3,f12
	ctx.f3.f64 = ctx.f12.f64;
	// fmuls f9,f13,f29
	ctx.f9.f64 = double(float(ctx.f13.f64 * f29.f64));
	// fmr f2,f11
	ctx.f2.f64 = ctx.f11.f64;
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// bl 0x82130ec0
	ctx.lr = 0x82133AA8;
	sub_82130EC0(ctx, base);
	// fmr f3,f9
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f9.f64;
	// fsubs f2,f11,f12
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lwz r3,4(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82130ec0
	ctx.lr = 0x82133AB8;
	sub_82130EC0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82149898) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-23120
	ctx.r10.s64 = ctx.r10.s64 + -23120;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r11,62(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 62);
	// sth r11,20(r31)
	REX_STORE_U16(r31.u32 + 20, ctx.r11.u16);
	// lbz r11,61(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 61);
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// sth r11,22(r31)
	REX_STORE_U16(r31.u32 + 22, ctx.r11.u16);
	// lfs f13,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f13,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f13,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f3,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0ec8
	ctx.lr = 0x82149914;
	sub_820E0EC8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f3,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0ec8
	ctx.lr = 0x82149928;
	sub_820E0EC8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e0590
	ctx.lr = 0x82149938;
	sub_820E0590(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1528
	ctx.lr = 0x82149944;
	sub_820E1528(ctx, base);
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f0,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
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

DEFINE_REX_FUNC(sub_8214B1C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8214B1D0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,68(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214b2c8
	if (ctx.cr0.eq) goto loc_8214B2C8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e0250
	ctx.lr = 0x8214B1F4;
	sub_820E0250(ctx, base);
	// lha r11,22(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 22));
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x820e0590
	ctx.lr = 0x8214B20C;
	sub_820E0590(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1528
	ctx.lr = 0x8214B218;
	sub_820E1528(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f11,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f13,f2,f2,f0
	ctx.f13.f64 = double(float(-std::fma(ctx.f2.f64, ctx.f2.f64, -ctx.f0.f64)));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fabs f0,f13
	ctx.f0.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lha r11,22(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 22));
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lfs f0,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x820e0130
	ctx.lr = 0x8214B274;
	sub_820E0130(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fabs f1,f0
	ctx.f1.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// bl 0x8214b118
	ctx.lr = 0x8214B290;
	sub_8214B118(ctx, base);
	// lha r11,22(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 22));
	// li r5,64
	ctx.r5.s64 = 64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8214B2A8;
	sub_822D4FA0(ctx, base);
	// b 0x8214b2c8
	goto loc_8214B2C8;
loc_8214B2AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r31,24(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214B2C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214B2C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8214b2ac
	if (!ctx.cr6.eq) goto loc_8214B2AC;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82150458) {
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
	// lfs f0,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r3,96
	ctx.r6.s64 = ctx.r3.s64 + 96;
	// fsubs f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,80(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fsubs f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// addi r5,r10,-18744
	ctx.r5.s64 = ctx.r10.s64 + -18744;
	// lwz r7,132(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x821eaf80
	ctx.lr = 0x821504A4;
	sub_821EAF80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82152140) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,30(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x82152168
	if (!ctx.cr6.eq) goto loc_82152168;
	// bl 0x82187b58
	ctx.lr = 0x82152164;
	sub_82187B58(ctx, base);
	// bl 0x82188648
	ctx.lr = 0x82152168;
	sub_82188648(ctx, base);
loc_82152168:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82154820) {
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
	// bl 0x822d4e70
	ctx.lr = 0x82154828;
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82154a10
	if (ctx.cr6.eq) goto loc_82154A10;
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// stw r10,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r24,r11,-7072
	r24.s64 = ctx.r11.s64 + -7072;
	// li r22,0
	r22.s64 = 0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r26,r22
	r26.u64 = r22.u64;
	// lfs f31,16228(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16228);
	f31.f64 = double(temp.f32);
	// addi r30,r24,144
	r30.s64 = r24.s64 + 144;
	// addi r31,r3,120
	r31.s64 = ctx.r3.s64 + 120;
	// addi r28,r3,96
	r28.s64 = ctx.r3.s64 + 96;
	// li r27,1
	r27.s64 = 1;
	// lis r29,-32169
	r29.s64 = -2108227584;
	// addi r23,r11,-21624
	r23.s64 = ctx.r11.s64 + -21624;
loc_82154884:
	// lbz r11,-138(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + -138);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821549ec
	if (!ctx.cr0.eq) goto loc_821549EC;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lha r11,0(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 0));
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbzx r5,r11,r23
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + r23.u32);
	// lwz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821548B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lhz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 2);
	// sth r10,18(r11)
	REX_STORE_U16(ctx.r11.u32 + 18, ctx.r10.u16);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8214eeb0
	ctx.lr = 0x821548C4;
	sub_8214EEB0(ctx, base);
	// lwz r11,19276(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 19276);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8215492c
	if (!ctx.cr6.gt) goto loc_8215492C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215492c
	if (!ctx.cr6.eq) goto loc_8215492C;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r30,-144
	ctx.r3.s64 = r30.s64 + -144;
	// lwz r11,24308(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24308);
	// lha r6,160(r28)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r28.u32 + 160));
	// lha r9,8(r10)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 8));
	// lhz r5,16(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mulli r10,r10,36
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(36));
	// lhax r4,r10,r11
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// bl 0x821cb730
	ctx.lr = 0x82154904;
	sub_821CB730(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// sth r11,0(r28)
	REX_STORE_U16(r28.u32 + 0, ctx.r11.u16);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8214ce58
	ctx.lr = 0x82154918;
	sub_8214CE58(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// stfs f31,140(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// stw r27,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, r27.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// sth r27,22(r11)
	REX_STORE_U16(ctx.r11.u32 + 22, r27.u16);
loc_8215492C:
	// lhz r11,312(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 312);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82154970
	if (!ctx.cr0.eq) goto loc_82154970;
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82154968
	if (ctx.cr6.eq) goto loc_82154968;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,24308(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24308);
	// lha r9,8(r10)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 8));
	// lhz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// mulli r9,r9,36
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(36));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// bl 0x8214f788
	ctx.lr = 0x82154968;
	sub_8214F788(ctx, base);
loc_82154968:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x82154980
	goto loc_82154980;
loc_82154970:
	// lhz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 16);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821549d8
	if (ctx.cr0.eq) goto loc_821549D8;
loc_82154980:
	// lha r10,8(r10)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 8));
	// lwz r11,24308(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24308);
	// mulli r10,r10,36
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(36));
	// lhax r10,r10,r11
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x821549ac
	if (ctx.cr6.gt) goto loc_821549AC;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// b 0x821549b4
	goto loc_821549B4;
loc_821549AC:
	// bl 0x82114c40
	ctx.lr = 0x821549B0;
	sub_82114C40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_821549B4:
	// lwz r3,116(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 116);
	// bl 0x8214f0c8
	ctx.lr = 0x821549BC;
	sub_8214F0C8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// sth r27,20(r10)
	REX_STORE_U16(ctx.r10.u32 + 20, r27.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821549ec
	if (ctx.cr6.eq) goto loc_821549EC;
	// stb r27,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, r27.u8);
	// b 0x821549ec
	goto loc_821549EC;
loc_821549D8:
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// sth r22,20(r10)
	REX_STORE_U16(ctx.r10.u32 + 20, r22.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821549ec
	if (ctx.cr6.eq) goto loc_821549EC;
	// stb r22,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, r22.u8);
loc_821549EC:
	// addis r11,r24,1
	ctx.r11.s64 = r24.s64 + 65536;
	// addis r30,r30,1
	r30.s64 = r30.s64 + 65536;
	// addi r11,r11,3840
	ctx.r11.s64 = ctx.r11.s64 + 3840;
	// addi r30,r30,3696
	r30.s64 = r30.s64 + 3696;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82154884
	if (!ctx.cr6.gt) goto loc_82154884;
loc_82154A10:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_8215DC90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8215DC98;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,-13284
	ctx.r11.s64 = ctx.r11.s64 + -13284;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r29,8(r3)
	REX_STORE_U16(ctx.r3.u32 + 8, r29.u16);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// sth r29,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, r29.u16);
	// sth r29,4(r3)
	REX_STORE_U16(ctx.r3.u32 + 4, r29.u16);
	// beq cr6,0x8215dd18
	if (ctx.cr6.eq) goto loc_8215DD18;
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,8(r3)
	REX_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x8215dd08
	goto loc_8215DD08;
loc_8215DCDC:
	// lhz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 8);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x8215dd00
	if (ctx.cr6.lt) goto loc_8215DD00;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215DCF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215dd00
	if (ctx.cr0.eq) goto loc_8215DD00;
	// sth r29,8(r31)
	REX_STORE_U16(r31.u32 + 8, r29.u16);
loc_8215DD00:
	// lwzu r11,32(r30)
	ea = 32 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8215DD08:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215dcdc
	if (!ctx.cr6.eq) goto loc_8215DCDC;
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// sth r11,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r11.u16);
loc_8215DD18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82161DE0) {
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
	// bl 0x822d4e88
	ctx.lr = 0x82161DE8;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f11,964(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 964);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfs f0,-11792(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11792);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r5,18
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 18, ctx.xer);
	// lfs f13,-11796(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -11796);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f12,-11800(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -11800);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f0,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r30,r4,1088
	r30.s64 = ctx.r4.s64 + 1088;
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// beq cr6,0x82161e5c
	if (ctx.cr6.eq) goto loc_82161E5C;
	// addi r30,r4,1344
	r30.s64 = ctx.r4.s64 + 1344;
loc_82161E5C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x820e1df8
	ctx.lr = 0x82161E64;
	sub_820E1DF8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1df8
	ctx.lr = 0x82161E74;
	sub_820E1DF8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82125860
	ctx.lr = 0x82161E8C;
	sub_82125860(ctx, base);
	// lfs f0,3432(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 3432);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fadds f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82125860
	ctx.lr = 0x82161EAC;
	sub_82125860(ctx, base);
	// lfs f0,3432(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 3432);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 - f31.f64));
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82161efc
	if (!ctx.cr6.lt) goto loc_82161EFC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
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
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
loc_82161EFC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82161f10
	if (ctx.cr6.eq) goto loc_82161F10;
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
loc_82161F10:
	// fsubs f1,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 - f31.f64));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8216BE10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8216BE18;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8214b118
	ctx.lr = 0x8216BE50;
	sub_8214B118(ctx, base);
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x8216be74
	goto loc_8216BE74;
loc_8216BE58:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216BE70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,24(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 24);
loc_8216BE74:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8216be58
	if (!ctx.cr6.eq) goto loc_8216BE58;
	// lwz r31,4(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 4);
	// b 0x8216bea4
	goto loc_8216BEA4;
loc_8216BE84:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214b1c8
	ctx.lr = 0x8216BE94;
	sub_8214B1C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216a468
	ctx.lr = 0x8216BEA0;
	sub_8216A468(ctx, base);
	// lwz r31,64(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 64);
loc_8216BEA4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8216be84
	if (!ctx.cr6.eq) goto loc_8216BE84;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8216C680) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// addi r11,r11,24628
	ctx.r11.s64 = ctx.r11.s64 + 24628;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r10,2971(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 2971);
	// sth r9,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// sth r10,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-8816
	ctx.r10.s64 = ctx.r10.s64 + -8816;
	// beq cr6,0x8216c6c8
	if (ctx.cr6.eq) goto loc_8216C6C8;
	// addi r10,r10,104
	ctx.r10.s64 = ctx.r10.s64 + 104;
loc_8216C6C8:
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216DAC8) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8216ca30
	ctx.lr = 0x8216DAE0;
	sub_8216CA30(ctx, base);
	// lbz r11,91(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 91);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8216db84
	if (!ctx.cr0.eq) goto loc_8216DB84;
	// bl 0x821d1ed0
	ctx.lr = 0x8216DAF0;
	sub_821D1ED0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216db04
	if (ctx.cr0.eq) goto loc_8216DB04;
loc_8216DAF8:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// b 0x8216dba0
	goto loc_8216DBA0;
loc_8216DB04:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,22593
	ctx.r10.s64 = 1480654848;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// ori r10,r10,5137
	ctx.r10.u64 = ctx.r10.u64 | 5137;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// rldimi r5,r10,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,2980(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2980);
	// bl 0x82208d38
	ctx.lr = 0x8216DB2C;
	sub_82208D38(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8216db48
	if (ctx.cr0.eq) goto loc_8216DB48;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8448
	ctx.r4.s64 = ctx.r11.s64 + -8448;
	// bl 0x822d55f8
	ctx.lr = 0x8216DB44;
	sub_822D55F8(ctx, base);
	// b 0x8216daf8
	goto loc_8216DAF8;
loc_8216DB48:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,91(r31)
	REX_STORE_U8(r31.u32 + 91, ctx.r11.u8);
	// b 0x8216dba0
	goto loc_8216DBA0;
loc_8216DB54:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x8216db84
	if (!ctx.cr6.eq) goto loc_8216DB84;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,91(r31)
	REX_STORE_U8(r31.u32 + 91, ctx.r11.u8);
	// bne 0x8216db84
	if (!ctx.cr0.eq) goto loc_8216DB84;
	// bl 0x821d1ed0
	ctx.lr = 0x8216DB7C;
	sub_821D1ED0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_8216DB84:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824d3eac
	ctx.lr = 0x8216DB98;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8216db54
	if (!ctx.cr0.eq) goto loc_8216DB54;
loc_8216DBA0:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82170B28) {
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
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82170b64
	if (ctx.cr6.eq) goto loc_82170B64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e48c0
	ctx.lr = 0x82170B54;
	sub_820E48C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x82170B5C;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r30)
	REX_STORE_U32(r30.u32 + 84, ctx.r11.u32);
loc_82170B64:
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

DEFINE_REX_FUNC(sub_82171DE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82171DF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x8216f788
	ctx.lr = 0x82171E0C;
	sub_8216F788(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lbz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U8(r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8216f8a0
	ctx.lr = 0x82171E24;
	sub_8216F8A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f3,2344(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2344);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8216fc18
	ctx.lr = 0x82171E48;
	sub_8216FC18(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r6,16(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// ori r31,r11,34463
	r31.u64 = ctx.r11.u64 | 34463;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8216fd90
	ctx.lr = 0x82171E70;
	sub_8216FD90(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,20(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 20);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8216fd90
	ctx.lr = 0x82171E90;
	sub_8216FD90(ctx, base);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,24(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 24);
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216fd90
	ctx.lr = 0x82171EB0;
	sub_8216FD90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82174238) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 + 6;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82174248:
	// lbz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// stb r10,-4(r11)
	REX_STORE_U8(ctx.r11.u32 + -4, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,-3(r11)
	REX_STORE_U8(ctx.r11.u32 + -3, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,-2(r11)
	REX_STORE_U8(ctx.r11.u32 + -2, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,9(r11)
	REX_STORE_U8(ctx.r11.u32 + 9, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,10(r11)
	REX_STORE_U8(ctx.r11.u32 + 10, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,13(r11)
	REX_STORE_U8(ctx.r11.u32 + 13, ctx.r10.u8);
	// stb r9,14(r11)
	REX_STORE_U8(ctx.r11.u32 + 14, ctx.r9.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,15(r11)
	REX_STORE_U8(ctx.r11.u32 + 15, ctx.r10.u8);
	// lbz r8,-4(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,16(r11)
	REX_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stb r10,17(r11)
	REX_STORE_U8(ctx.r11.u32 + 17, ctx.r10.u8);
	// stb r9,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// beq cr6,0x82174308
	if (ctx.cr6.eq) goto loc_82174308;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
loc_82174308:
	// lbz r10,-3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x82174320
	if (ctx.cr6.eq) goto loc_82174320;
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
loc_82174320:
	// lbz r10,-2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x82174338
	if (ctx.cr6.eq) goto loc_82174338;
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
loc_82174338:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// bdnz 0x82174248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82174248;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82178510) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r10,-5348
	ctx.r10.s64 = ctx.r10.s64 + -5348;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r10,r3,192
	ctx.r10.s64 = ctx.r3.s64 + 192;
	// stb r11,61(r3)
	REX_STORE_U8(ctx.r3.u32 + 61, ctx.r11.u8);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lfs f0,1996(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,196(r3)
	REX_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// stw r11,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,208(r3)
	REX_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r11,212(r3)
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// lwz r11,12(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stfs f1,144(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f2,148(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stw r11,220(r3)
	REX_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// stfs f3,152(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stw r9,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r9.u32);
	// stfs f4,156(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stw r8,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r8.u32);
	// stfs f5,172(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stw r4,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r4.u32);
	// bne cr6,0x821785b0
	if (!ctx.cr6.eq) goto loc_821785B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,144(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 144, temp.u32);
loc_821785B0:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bne cr6,0x821785c4
	if (!ctx.cr6.eq) goto loc_821785C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,148(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 148, temp.u32);
loc_821785C4:
	// fcmpu cr6,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2344(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2344);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217A250) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r4,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r4.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r10,-5148
	ctx.r7.s64 = ctx.r10.s64 + -5148;
	// stw r11,212(r3)
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// stw r11,208(r3)
	REX_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// addi r10,r3,186
	ctx.r10.s64 = ctx.r3.s64 + 186;
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r8,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// stb r8,61(r3)
	REX_STORE_U8(ctx.r3.u32 + 61, ctx.r8.u8);
loc_8217A284:
	// sth r11,10(r10)
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r11.u16);
	// sth r11,8(r10)
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r11.u16);
	// sthu r11,6(r10)
	ea = 6 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8217a284
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217A284;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217B078) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8217B080;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r5,236(r3)
	REX_STORE_U32(ctx.r3.u32 + 236, ctx.r5.u32);
	// li r28,0
	r28.s64 = 0;
	// addi r11,r11,-5028
	ctx.r11.s64 = ctx.r11.s64 + -5028;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,160(r3)
	REX_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// stw r6,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r6.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217b0d4
	if (ctx.cr6.eq) goto loc_8217B0D4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
loc_8217B0D4:
	// addi r29,r31,148
	r29.s64 = r31.s64 + 148;
	// addi r30,r31,144
	r30.s64 = r31.s64 + 144;
	// addi r4,r31,152
	ctx.r4.s64 = r31.s64 + 152;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x820e0e38
	ctx.lr = 0x8217B0EC;
	sub_820E0E38(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lfs f11,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// lbz r11,1827(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1827);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// bne cr6,0x8217b134
	if (!ctx.cr6.eq) goto loc_8217B134;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
loc_8217B134:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8217b14c
	if (!ctx.cr6.eq) goto loc_8217B14C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16188(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
loc_8217B14C:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8217b160
	if (!ctx.cr6.lt) goto loc_8217B160;
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
loc_8217B160:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,236(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 236);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7888
	ctx.lr = 0x8217B170;
	sub_821E7888(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32174
	ctx.r8.s64 = -2108555264;
	// stb r28,91(r31)
	REX_STORE_U8(r31.u32 + 91, r28.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r8,-28944
	ctx.r8.s64 = ctx.r8.s64 + -28944;
	// li r7,2
	ctx.r7.s64 = 2;
	// stb r10,110(r31)
	REX_STORE_U8(r31.u32 + 110, ctx.r10.u8);
	// lfs f0,16304(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16304);
	ctx.f0.f64 = double(temp.f32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// addic. r11,r31,172
	ctx.xer.ca = r31.u32 > 4294967123;
	ctx.r11.s64 = r31.s64 + 172;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r7,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r7.u64);
	// sth r9,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r9.u16);
	// stb r10,90(r31)
	REX_STORE_U8(r31.u32 + 90, ctx.r10.u8);
	// stw r8,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// beq 0x8217b1b4
	if (ctx.cr0.eq) goto loc_8217B1B4;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
loc_8217B1B4:
	// stb r10,109(r31)
	REX_STORE_U8(r31.u32 + 109, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r28,105(r31)
	REX_STORE_U8(r31.u32 + 105, r28.u8);
	// stb r28,106(r31)
	REX_STORE_U8(r31.u32 + 106, r28.u8);
	// stb r28,107(r31)
	REX_STORE_U8(r31.u32 + 107, r28.u8);
	// stw r28,132(r31)
	REX_STORE_U32(r31.u32 + 132, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821800E0) {
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
	// bl 0x822d4e64
	ctx.lr = 0x821800E8;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x822d4f28
	ctx.lr = 0x821800F0;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,224(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r9,244(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,240(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// mulli r11,r11,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(80));
	// lfs f29,-4624(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4624);
	f29.f64 = double(temp.f32);
	// lfs f30,16360(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16360);
	f30.f64 = double(temp.f32);
	// lfs f24,2360(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2360);
	f24.f64 = double(temp.f32);
	// lfs f31,1992(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1992);
	f31.f64 = double(temp.f32);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r30,r11,r9
	r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r20,r3,259
	r20.s64 = ctx.r3.s64 + 259;
	// lfs f26,2384(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	f26.f64 = double(temp.f32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f27,16688(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16688);
	f27.f64 = double(temp.f32);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lfs f28,16172(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16172);
	f28.f64 = double(temp.f32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfs f25,1996(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 1996);
	f25.f64 = double(temp.f32);
	// subfic r19,r3,-259
	ctx.xer.ca = ctx.r3.u32 <= 4294967037;
	r19.u64 = static_cast<uint64_t>(-259) - ctx.r3.u64;
	// mr r28,r20
	r28.u64 = r20.u64;
	// li r24,3
	r24.s64 = 3;
	// li r21,1
	r21.s64 = 1;
	// addi r25,r11,13128
	r25.s64 = ctx.r11.s64 + 13128;
	// addi r27,r10,7808
	r27.s64 = ctx.r10.s64 + 7808;
loc_8218017C:
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821802fc
	if (ctx.cr0.eq) goto loc_821802FC;
loc_8218018C:
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, f25.f64);
	// bge cr6,0x821801c4
	if (!ctx.cr6.lt) goto loc_821801C4;
	// lbz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821801c4
	if (!ctx.cr0.eq) goto loc_821801C4;
	// lfs f0,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821802e4
	if (!ctx.cr6.gt) goto loc_821802E4;
	// lbz r11,-3(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + -3);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,-3(r28)
	REX_STORE_U8(r28.u32 + -3, ctx.r11.u8);
	// stfs f31,44(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// b 0x821802e4
	goto loc_821802E4;
loc_821801C4:
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x820e1b70
	ctx.lr = 0x821801D4;
	sub_820E1B70(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f24.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e20b0
	ctx.lr = 0x821801E8;
	sub_820E20B0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e1b70
	ctx.lr = 0x821801F8;
	sub_820E1B70(ctx, base);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82180210
	if (ctx.cr6.gt) goto loc_82180210;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82180210:
	// stfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82180220
	if (!ctx.cr6.gt) goto loc_82180220;
	// stfs f31,68(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
loc_82180220:
	// lfs f0,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// lfs f13,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f30,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f30.f64, ctx.f0.f64)));
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 44, temp.u32);
	// lfs f0,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f28,f0
	ctx.f0.f64 = double(float(f28.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82180248
	if (!ctx.cr6.lt) goto loc_82180248;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82180248:
	// stfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// fmuls f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 * f26.f64));
	// lfs f12,60(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f27,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, f27.f64, ctx.f13.f64)));
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 60, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8218027c
	if (!ctx.cr6.gt) goto loc_8218027C;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// b 0x82180288
	goto loc_82180288;
loc_8218027C:
	// fcmpu cr6,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f25.f64);
	// bge cr6,0x8218028c
	if (!ctx.cr6.lt) goto loc_8218028C;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
loc_82180288:
	// stfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 60, temp.u32);
loc_8218028C:
	// lfs f0,200(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,72(r30)
	REX_STORE_U16(r30.u32 + 72, ctx.r11.u16);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x821802c4
	if (ctx.cr6.lt) goto loc_821802C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,72(r30)
	REX_STORE_U16(r30.u32 + 72, ctx.r11.u16);
	// stfs f25,72(r31)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
loc_821802C4:
	// stb r21,76(r30)
	REX_STORE_U8(r30.u32 + 76, r21.u8);
	// lfs f0,1836(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 1836);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
loc_821802E4:
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r31,r31,80
	r31.s64 = r31.s64 + 80;
	// addi r30,r30,80
	r30.s64 = r30.s64 + 80;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8218018c
	if (ctx.cr6.lt) goto loc_8218018C;
loc_821802FC:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// bne 0x8218017c
	if (!ctx.cr0.eq) goto loc_8218017C;
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
	// lfs f26,2392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	f26.f64 = double(temp.f32);
	// li r22,0
	r22.s64 = 0;
	// lfs f29,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	f29.f64 = double(temp.f32);
	// mr r23,r20
	r23.u64 = r20.u64;
	// lfs f30,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	f30.f64 = double(temp.f32);
	// lfs f27,16308(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16308);
	f27.f64 = double(temp.f32);
	// lfs f28,16204(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16204);
	f28.f64 = double(temp.f32);
loc_82180338:
	// lbz r9,-3(r23)
	ctx.r9.u64 = REX_LOAD_U8(r23.u32 + -3);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82180350
	if (ctx.cr0.eq) goto loc_82180350;
	// lbz r11,258(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 258);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82180514
	if (!ctx.cr0.eq) goto loc_82180514;
loc_82180350:
	// lwz r10,252(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 252);
	// add r11,r23,r19
	ctx.r11.u64 = r23.u64 + r19.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,148(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 148);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82180514
	if (!ctx.cr6.eq) goto loc_82180514;
	// lwz r8,244(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 244);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r7,240(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 240);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82180394
	if (!ctx.cr6.eq) goto loc_82180394;
	// lbz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U8(r23.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r11,224(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 224);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821803a4
	goto loc_821803A4;
loc_82180394:
	// lbz r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U8(r23.u32 + 0);
	// lwz r10,224(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 224);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821803A4:
	// lwz r9,228(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 228);
	// li r25,0
	r25.s64 = 0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r9,r20,r6
	ctx.r9.u64 = REX_LOAD_U8(r20.u32 + ctx.r6.u32);
	// mulli r10,r11,80
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(80));
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82180514
	if (ctx.cr0.eq) goto loc_82180514;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r27,r6,r29
	r27.u64 = ctx.r6.u64 + r29.u64;
	// addi r24,r29,112
	r24.s64 = r29.s64 + 112;
	// addi r31,r10,-36
	r31.s64 = ctx.r10.s64 + -36;
	// addi r30,r11,40
	r30.s64 = ctx.r11.s64 + 40;
	// addi r26,r9,-40
	r26.s64 = ctx.r9.s64 + -40;
loc_821803E0:
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x821803F0;
	sub_822D4FA0(ctx, base);
	// stb r21,36(r30)
	REX_STORE_U8(r30.u32 + 36, r21.u8);
	// lwz r11,252(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 252);
	// add r11,r22,r11
	ctx.r11.u64 = r22.u64 + ctx.r11.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// addi r9,r11,152
	ctx.r9.s64 = ctx.r11.s64 + 152;
	// stw r10,-40(r30)
	REX_STORE_U32(r30.u32 + -40, ctx.r10.u32);
	// lwz r10,156(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// stw r10,-36(r30)
	REX_STORE_U32(r30.u32 + -36, ctx.r10.u32);
	// lwz r10,160(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// stw r10,-32(r30)
	REX_STORE_U32(r30.u32 + -32, ctx.r10.u32);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// stw r11,-28(r30)
	REX_STORE_U32(r30.u32 + -28, ctx.r11.u32);
	// lfs f0,160(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * f28.f64));
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f31,-8(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + -8, temp.u32);
	// stfs f31,-4(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + -4, temp.u32);
	// stfs f31,0(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f27,4(r30)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// bl 0x821fec88
	ctx.lr = 0x82180444;
	sub_821FEC88(ctx, base);
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// bl 0x821fedc8
	ctx.lr = 0x82180450;
	sub_821FEDC8(ctx, base);
	// fadds f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f30.f64));
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-36(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + -36, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x82180468;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f30.f64));
	// lfs f13,196(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,96(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f29,100(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f31,104(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// lfs f0,192(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfs f25,52(r31)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f25,60(r31)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f31,64(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x821804A0;
	sub_821FEDC8(ctx, base);
	// fsubs f24,f1,f30
	ctx.fpscr.disableFlushMode();
	f24.f64 = double(float(ctx.f1.f64 - f30.f64));
	// add r28,r26,r30
	r28.u64 = r26.u64 + r30.u64;
	// bl 0x821fedc8
	ctx.lr = 0x821804AC;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f30.f64));
	// stfsx f0,r26,r30
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + r30.u32, temp.u32);
	// stfs f26,40(r31)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stfs f24,44(r31)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f31,48(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// bl 0x820e2290
	ctx.lr = 0x821804CC;
	sub_820E2290(ctx, base);
	// lfs f0,192(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * f29.f64));
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820e1cc0
	ctx.lr = 0x821804E0;
	sub_820E1CC0(ctx, base);
	// stfs f25,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f25,72(r31)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// stfs f25,76(r31)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// addi r30,r30,80
	r30.s64 = r30.s64 + 80;
	// stfs f31,80(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// stfsu f29,80(r31)
	ea = 80 + r31.u32;
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ea, temp.u32);
	r31.u32 = ea;
	// lbz r11,256(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,256(r27)
	REX_STORE_U8(r27.u32 + 256, ctx.r11.u8);
	// lbz r11,259(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 259);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821803e0
	if (ctx.cr6.lt) goto loc_821803E0;
loc_82180514:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r22,r22,16
	r22.s64 = r22.s64 + 16;
	// add r11,r23,r19
	ctx.r11.u64 = r23.u64 + r19.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82180338
	if (ctx.cr6.lt) goto loc_82180338;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x822d4f74
	ctx.lr = 0x82180534;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_82191D00) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r4,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r4.u32);
	// stw r5,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r5.u32);
	// addi r11,r11,3100
	ctx.r11.s64 = ctx.r11.s64 + 3100;
	// stw r6,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r6.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82192550) {
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
	// bl 0x821924e8
	ctx.lr = 0x82192570;
	sub_821924E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82192588
	if (ctx.cr0.eq) goto loc_82192588;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,36(r31)
	REX_STORE_U8(r31.u32 + 36, ctx.r11.u8);
	// sth r10,40(r31)
	REX_STORE_U16(r31.u32 + 40, ctx.r10.u16);
loc_82192588:
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

DEFINE_REX_FUNC(sub_821943F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82194400;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8219451c
	if (ctx.cr6.eq) goto loc_8219451C;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// subf r11,r4,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r4.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82194440
	if (!ctx.cr0.eq) goto loc_82194440;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x822ba200
	ctx.lr = 0x8219443C;
	sub_822BA200(ctx, base);
	// b 0x8219451c
	goto loc_8219451C;
loc_82194440:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82194488
	if (ctx.cr6.gt) goto loc_82194488;
	// subf r11,r4,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d6840
	ctx.lr = 0x82194468;
	sub_822D6840(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82194518
	goto loc_82194518;
loc_82194488:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r9,r3,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r3.u64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x821944c8
	if (ctx.cr6.gt) goto loc_821944C8;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r4
	r29.u64 = ctx.r11.u64 + ctx.r4.u64;
	// subf r11,r4,r29
	ctx.r11.u64 = r29.u64 - ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d6840
	ctx.lr = 0x821944B4;
	sub_822D6840(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// b 0x82194504
	goto loc_82194504;
loc_821944C8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821944d4
	if (ctx.cr6.eq) goto loc_821944D4;
	// bl 0x822c80a8
	ctx.lr = 0x821944D4;
	sub_822C80A8(ctx, base);
loc_821944D4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// bl 0x82194318
	ctx.lr = 0x821944EC;
	sub_82194318(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219451c
	if (ctx.cr0.eq) goto loc_8219451C;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
loc_82194504:
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822d6840
	ctx.lr = 0x82194514;
	sub_822D6840(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + r30.u64;
loc_82194518:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8219451C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8219B3A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219BC18) {
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
	// bl 0x822d4e84
	ctx.lr = 0x8219BC20;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// add r30,r10,r7
	r30.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r29,r11,r7
	r29.u64 = ctx.r11.u64 + ctx.r7.u64;
	// beq cr6,0x8219bc98
	if (ctx.cr6.eq) goto loc_8219BC98;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f12,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f11,16(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lfs f10,20(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f1,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e20b0
	ctx.lr = 0x8219BC98;
	sub_820E20B0(ctx, base);
loc_8219BC98:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8219bcb0
	if (ctx.cr6.eq) goto loc_8219BCB0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820e1df8
	ctx.lr = 0x8219BCB0;
	sub_820E1DF8(ctx, base);
loc_8219BCB0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8219bcc8
	if (ctx.cr6.eq) goto loc_8219BCC8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x820e1df8
	ctx.lr = 0x8219BCC8;
	sub_820E1DF8(ctx, base);
loc_8219BCC8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8219EE50) {
	REX_FUNC_PROLOGUE();
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,60(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lhz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lwz r9,32(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x8219ee80
	if (ctx.cr6.eq) goto loc_8219EE80;
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// beq cr6,0x8219ee80
	if (ctx.cr6.eq) goto loc_8219EE80;
	// li r11,2
	ctx.r11.s64 = 2;
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// b 0x8219ee84
	goto loc_8219EE84;
loc_8219EE80:
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
loc_8219EE84:
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// rlwinm r9,r9,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0x1;
	// addi r7,r7,30520
	ctx.r7.s64 = ctx.r7.s64 + 30520;
	// stb r9,10(r3)
	REX_STORE_U8(ctx.r3.u32 + 10, ctx.r9.u8);
	// sth r11,8(r3)
	REX_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lwz r9,52(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 52);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lhz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// stb r10,24(r3)
	REX_STORE_U8(ctx.r3.u32 + 24, ctx.r10.u8);
	// stb r11,25(r3)
	REX_STORE_U8(ctx.r3.u32 + 25, ctx.r11.u8);
	// stb r11,26(r3)
	REX_STORE_U8(ctx.r3.u32 + 26, ctx.r11.u8);
	// stb r8,11(r3)
	REX_STORE_U8(ctx.r3.u32 + 11, ctx.r8.u8);
	// stb r11,29(r3)
	REX_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// stb r11,30(r3)
	REX_STORE_U8(ctx.r3.u32 + 30, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A1118) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,120(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f2,124(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A13F0) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ff870
	ctx.lr = 0x821A1414;
	sub_821FF870(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x821a1648
	if (ctx.cr6.gt) goto loc_821A1648;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821a1488
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821A1488;
	// bdzf 4*cr6+eq,0x821a14cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821A14CC;
	// bdzf 4*cr6+eq,0x821a1510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821A1510;
	// bdzf 4*cr6+eq,0x821a1554
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821A1554;
	// bdzf 4*cr6+eq,0x821a1598
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821A1598;
	// bdzf 4*cr6+eq,0x821a15dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821A15DC;
	// bne cr6,0x821a1620
	if (!ctx.cr6.eq) goto loc_821A1620;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lha r4,82(r1)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 82));
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lfs f3,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// ori r9,r9,3696
	ctx.r9.u64 = ctx.r9.u64 | 3696;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r11,r8,-7072
	ctx.r11.s64 = ctx.r8.s64 + -7072;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lfs f1,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8218cfc8
	ctx.lr = 0x821A1484;
	sub_8218CFC8(ctx, base);
	// b 0x821a1648
	goto loc_821A1648;
loc_821A1488:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lha r4,82(r1)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 82));
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lfs f3,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// ori r9,r9,3696
	ctx.r9.u64 = ctx.r9.u64 | 3696;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r11,r8,-7072
	ctx.r11.s64 = ctx.r8.s64 + -7072;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lfs f1,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8218d470
	ctx.lr = 0x821A14C8;
	sub_8218D470(ctx, base);
	// b 0x821a1648
	goto loc_821A1648;
loc_821A14CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lha r4,82(r1)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 82));
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lfs f3,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// ori r9,r9,3696
	ctx.r9.u64 = ctx.r9.u64 | 3696;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r11,r8,-7072
	ctx.r11.s64 = ctx.r8.s64 + -7072;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lfs f1,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8218d140
	ctx.lr = 0x821A150C;
	sub_8218D140(ctx, base);
	// b 0x821a1648
	goto loc_821A1648;
loc_821A1510:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lha r4,82(r1)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 82));
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lfs f3,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// ori r9,r9,3696
	ctx.r9.u64 = ctx.r9.u64 | 3696;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r11,r8,-7072
	ctx.r11.s64 = ctx.r8.s64 + -7072;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lfs f1,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8218d2d8
	ctx.lr = 0x821A1550;
	sub_8218D2D8(ctx, base);
	// b 0x821a1648
	goto loc_821A1648;
loc_821A1554:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lha r4,82(r1)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 82));
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lfs f3,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// ori r9,r9,3696
	ctx.r9.u64 = ctx.r9.u64 | 3696;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r11,r8,-7072
	ctx.r11.s64 = ctx.r8.s64 + -7072;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lfs f1,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8218d578
	ctx.lr = 0x821A1594;
	sub_8218D578(ctx, base);
	// b 0x821a1648
	goto loc_821A1648;
loc_821A1598:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lha r4,82(r1)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 82));
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lfs f3,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// ori r9,r9,3696
	ctx.r9.u64 = ctx.r9.u64 | 3696;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r11,r8,-7072
	ctx.r11.s64 = ctx.r8.s64 + -7072;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lfs f1,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8218d6d0
	ctx.lr = 0x821A15D8;
	sub_8218D6D0(ctx, base);
	// b 0x821a1648
	goto loc_821A1648;
loc_821A15DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lha r4,82(r1)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 82));
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lfs f3,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// ori r9,r9,3696
	ctx.r9.u64 = ctx.r9.u64 | 3696;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r11,r8,-7072
	ctx.r11.s64 = ctx.r8.s64 + -7072;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lfs f1,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8218d838
	ctx.lr = 0x821A161C;
	sub_8218D838(ctx, base);
	// b 0x821a1648
	goto loc_821A1648;
loc_821A1620:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lha r4,82(r1)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 82));
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// ori r10,r10,3696
	ctx.r10.u64 = ctx.r10.u64 | 3696;
	// addi r11,r9,-7072
	ctx.r11.s64 = ctx.r9.s64 + -7072;
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8218cea0
	ctx.lr = 0x821A1648;
	sub_8218CEA0(ctx, base);
loc_821A1648:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
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

DEFINE_REX_FUNC(sub_821A98F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821A98F8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a9918
	if (ctx.cr6.eq) goto loc_821A9918;
	// bl 0x822c80a8
	ctx.lr = 0x821A9914;
	sub_822C80A8(ctx, base);
	// stw r29,144(r31)
	REX_STORE_U32(r31.u32 + 144, r29.u32);
loc_821A9918:
	// lwz r30,100(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x821a9938
	if (ctx.cr6.eq) goto loc_821A9938;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a9cf8
	ctx.lr = 0x821A992C;
	sub_821A9CF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821A9934;
	sub_822C80A8(ctx, base);
	// stw r29,100(r31)
	REX_STORE_U32(r31.u32 + 100, r29.u32);
loc_821A9938:
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a994c
	if (ctx.cr6.eq) goto loc_821A994C;
	// bl 0x822c80a8
	ctx.lr = 0x821A9948;
	sub_822C80A8(ctx, base);
	// stw r29,160(r31)
	REX_STORE_U32(r31.u32 + 160, r29.u32);
loc_821A994C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821AA658) {
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
	// bl 0x822d4e7c
	ctx.lr = 0x821AA660;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r26,-32168
	r26.s64 = -2108162048;
	// lwz r11,-11712(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -11712);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821aa68c
	if (!ctx.cr0.eq) goto loc_821AA68C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-11712(r10)
	REX_STORE_U32(ctx.r10.u32 + -11712, ctx.r11.u32);
	// bl 0x822094c8
	ctx.lr = 0x821AA688;
	sub_822094C8(ctx, base);
	// stw r3,-11716(r26)
	REX_STORE_U32(r26.u32 + -11716, ctx.r3.u32);
loc_821AA68C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,116(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// bl 0x824d3eac
	ctx.lr = 0x821AA6A4;
	__imp__XNotifyGetNext(ctx, base);
	// li r25,1
	r25.s64 = 1;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821aa7c4
	if (ctx.cr0.eq) goto loc_821AA7C4;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r28,-32168
	r28.s64 = -2108162048;
	// addi r27,r10,432
	r27.s64 = ctx.r10.s64 + 432;
	// addi r30,r11,13128
	r30.s64 = ctx.r11.s64 + 13128;
loc_821AA6C4:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x821aa778
	if (ctx.cr6.eq) goto loc_821AA778;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x821aa714
	if (ctx.cr6.eq) goto loc_821AA714;
	// addis r11,r11,-512
	ctx.r11.s64 = ctx.r11.s64 + -33554432;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821aa70c
	if (ctx.cr0.eq) goto loc_821AA70C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821aa7a8
	if (!ctx.cr6.eq) goto loc_821AA7A8;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r27,3308
	ctx.r4.s64 = r27.s64 + 3308;
	// stb r25,1888(r30)
	REX_STORE_U8(r30.u32 + 1888, r25.u8);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stb r3,1889(r30)
	REX_STORE_U8(r30.u32 + 1889, ctx.r3.u8);
	// bl 0x82234840
	ctx.lr = 0x821AA708;
	sub_82234840(ctx, base);
	// b 0x821aa7a8
	goto loc_821AA7A8;
loc_821AA70C:
	// ori r29,r29,4
	r29.u64 = r29.u64 | 4;
	// b 0x821aa7a8
	goto loc_821AA7A8;
loc_821AA714:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821aa580
	ctx.lr = 0x821AA71C;
	sub_821AA580(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821aa760
	if (!ctx.cr6.eq) goto loc_821AA760;
	// lwz r11,-11720(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -11720);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-11720(r28)
	REX_STORE_U32(r28.u32 + -11720, ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821aa748
	if (!ctx.cr6.eq) goto loc_821AA748;
	// bl 0x822094c8
	ctx.lr = 0x821AA740;
	sub_822094C8(ctx, base);
	// stw r3,-11716(r26)
	REX_STORE_U32(r26.u32 + -11716, ctx.r3.u32);
	// b 0x821aa764
	goto loc_821AA764;
loc_821AA748:
	// ble cr6,0x821aa764
	if (!ctx.cr6.gt) goto loc_821AA764;
	// bl 0x822094c8
	ctx.lr = 0x821AA750;
	sub_822094C8(ctx, base);
	// lwz r11,-11716(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + -11716);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// bgt cr6,0x821aa764
	if (ctx.cr6.gt) goto loc_821AA764;
loc_821AA760:
	// ori r29,r29,1
	r29.u64 = r29.u64 | 1;
loc_821AA764:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821aa7a8
	if (ctx.cr0.eq) goto loc_821AA7A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-11720(r28)
	REX_STORE_U32(r28.u32 + -11720, ctx.r11.u32);
	// b 0x821aa7a8
	goto loc_821AA7A8;
loc_821AA778:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// ori r29,r29,2
	r29.u64 = r29.u64 | 2;
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// slw r9,r25,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r11,157(r31)
	REX_STORE_U8(r31.u32 + 157, ctx.r11.u8);
	// stb r10,156(r31)
	REX_STORE_U8(r31.u32 + 156, ctx.r10.u8);
loc_821AA7A8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,116(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824d3eac
	ctx.lr = 0x821AA7BC;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821aa6c4
	if (!ctx.cr0.eq) goto loc_821AA6C4;
loc_821AA7C4:
	// lbz r11,159(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 159);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821aa804
	if (!ctx.cr0.eq) goto loc_821AA804;
	// lbz r10,157(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 157);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821aa804
	if (!ctx.cr0.eq) goto loc_821AA804;
	// lbz r10,158(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 158);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821aa804
	if (ctx.cr0.eq) goto loc_821AA804;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// slw r10,r25,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821aa804
	if (!ctx.cr0.eq) goto loc_821AA804;
	// stb r25,88(r31)
	REX_STORE_U8(r31.u32 + 88, r25.u8);
	// b 0x821aa880
	goto loc_821AA880;
loc_821AA804:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821aa854
	if (!ctx.cr6.eq) goto loc_821AA854;
	// lbz r11,157(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 157);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821aa854
	if (!ctx.cr0.eq) goto loc_821AA854;
	// lbz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 156);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821aa854
	if (ctx.cr0.eq) goto loc_821AA854;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82208d18
	ctx.lr = 0x821AA830;
	sub_82208D18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821aa844
	if (!ctx.cr0.eq) goto loc_821AA844;
	// stb r25,157(r31)
	REX_STORE_U8(r31.u32 + 157, r25.u8);
	// stb r25,158(r31)
	REX_STORE_U8(r31.u32 + 158, r25.u8);
	// b 0x821aa84c
	goto loc_821AA84C;
loc_821AA844:
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// beq cr6,0x821aa888
	if (ctx.cr6.eq) goto loc_821AA888;
loc_821AA84C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,156(r31)
	REX_STORE_U8(r31.u32 + 156, ctx.r11.u8);
loc_821AA854:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// slw r11,r25,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821aa888
	if (ctx.cr0.eq) goto loc_821AA888;
	// lbz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 156);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821aa888
	if (!ctx.cr0.eq) goto loc_821AA888;
	// lbz r11,157(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 157);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821aa888
	if (!ctx.cr0.eq) goto loc_821AA888;
loc_821AA880:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_821AA888:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821BD1A8) {
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
	// bl 0x822d4e80
	ctx.lr = 0x821BD1B0;
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f29.u64);
	// stfd f30,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x821159c8
	ctx.lr = 0x821BD1C4;
	sub_821159C8(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lwz r28,216(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 216);
	// bne cr6,0x821bd1e4
	if (!ctx.cr6.eq) goto loc_821BD1E4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x821bd6c0
	goto loc_821BD6C0;
loc_821BD1E4:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r26,r10,13128
	r26.s64 = ctx.r10.s64 + 13128;
	// lfs f31,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// bne cr6,0x821bd278
	if (!ctx.cr6.eq) goto loc_821BD278;
	// lwz r11,516(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 516);
	// sth r11,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r11.u16);
	// bl 0x821b9e40
	ctx.lr = 0x821BD20C;
	sub_821B9E40(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r11,14(r31)
	REX_STORE_U8(r31.u32 + 14, ctx.r11.u8);
	// bl 0x821c3f68
	ctx.lr = 0x821BD218;
	sub_821C3F68(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// li r5,30
	ctx.r5.s64 = 30;
	// lfs f1,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212f220
	ctx.lr = 0x821BD230;
	sub_8212F220(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212be90
	ctx.lr = 0x821BD238;
	sub_8212BE90(ctx, base);
	// bl 0x821c3f68
	ctx.lr = 0x821BD23C;
	sub_821C3F68(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,1840(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 1840);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r10,308(r31)
	REX_STORE_U16(r31.u32 + 308, ctx.r10.u16);
	// stw r11,876(r31)
	REX_STORE_U32(r31.u32 + 876, ctx.r11.u32);
	// lfs f0,30112(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 30112);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,880(r31)
	REX_STORE_U32(r31.u32 + 880, ctx.r9.u32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// b 0x821bd280
	goto loc_821BD280;
loc_821BD278:
	// lwz r9,880(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 880);
	// lwz r11,876(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 876);
loc_821BD280:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// addi r30,r10,-7072
	r30.s64 = ctx.r10.s64 + -7072;
	// blt cr6,0x821bd664
	if (ctx.cr6.lt) goto loc_821BD664;
	// beq cr6,0x821bd5b4
	if (ctx.cr6.eq) goto loc_821BD5B4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x821bd2b4
	if (!ctx.cr6.lt) goto loc_821BD2B4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bge cr6,0x821bd2b4
	if (!ctx.cr6.lt) goto loc_821BD2B4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8218e510
	ctx.lr = 0x821BD2AC;
	sub_8218E510(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8218e1b0
	ctx.lr = 0x821BD2B4;
	sub_8218E1B0(ctx, base);
loc_821BD2B4:
	// bl 0x820ee438
	ctx.lr = 0x821BD2B8;
	sub_820EE438(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r30,r11,-7072
	r30.s64 = ctx.r11.s64 + -7072;
	// ori r9,r10,3700
	ctx.r9.u64 = ctx.r10.u64 | 3700;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stb r10,4(r30)
	REX_STORE_U8(r30.u32 + 4, ctx.r10.u8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stbx r11,r30,r9
	REX_STORE_U8(r30.u32 + ctx.r9.u32, ctx.r11.u8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r28,-32168
	r28.s64 = -2108162048;
	// addi r27,r11,9936
	r27.s64 = ctx.r11.s64 + 9936;
	// lfs f29,9948(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 9948);
	f29.f64 = double(temp.f32);
	// lfs f30,15632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	f30.f64 = double(temp.f32);
	// lwz r10,880(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 880);
	// lbz r11,6(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 6);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r29,48(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,880(r31)
	REX_STORE_U32(r31.u32 + 880, ctx.r10.u32);
	// bne 0x821bd428
	if (!ctx.cr0.eq) goto loc_821BD428;
	// bl 0x821159c8
	ctx.lr = 0x821BD314;
	sub_821159C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821bd428
	if (!ctx.cr0.eq) goto loc_821BD428;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x821bd428
	if (ctx.cr6.lt) goto loc_821BD428;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x821bd428
	if (!ctx.cr6.lt) goto loc_821BD428;
	// lha r10,30(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// bne cr6,0x821bd34c
	if (!ctx.cr6.eq) goto loc_821BD34C;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x821bd428
	if (!ctx.cr6.eq) goto loc_821BD428;
loc_821BD34C:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bd428
	if (!ctx.cr6.eq) goto loc_821BD428;
	// lbz r11,6(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821bd428
	if (!ctx.cr0.eq) goto loc_821BD428;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bne cr6,0x821bd39c
	if (!ctx.cr6.eq) goto loc_821BD39C;
	// lbz r11,18(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 18);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821bd39c
	if (ctx.cr0.eq) goto loc_821BD39C;
	// lbz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821bd39c
	if (ctx.cr0.eq) goto loc_821BD39C;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// lbz r10,27(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 27);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821bd428
	if (ctx.cr6.eq) goto loc_821BD428;
loc_821BD39C:
	// lwz r11,-9912(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -9912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bd408
	if (!ctx.cr6.eq) goto loc_821BD408;
	// lwz r11,1852(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1852);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bd408
	if (ctx.cr0.eq) goto loc_821BD408;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821bd3c8
	if (!ctx.cr6.eq) goto loc_821BD3C8;
	// fmr f31,f29
	f31.f64 = f29.f64;
loc_821BD3C8:
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,147
	ctx.r3.u64 = ctx.r3.u64 | 147;
	// bl 0x820e68b8
	ctx.lr = 0x821BD3D8;
	sub_820E68B8(ctx, base);
	// stfs f31,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// stfs f30,20(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821eaf80
	ctx.lr = 0x821BD400;
	sub_821EAF80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-9912(r28)
	REX_STORE_U32(r28.u32 + -9912, ctx.r11.u32);
loc_821BD408:
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2);
	// addi r10,r26,4
	ctx.r10.s64 = r26.s64 + 4;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bd428
	if (ctx.cr0.eq) goto loc_821BD428;
	// stw r29,44(r31)
	REX_STORE_U32(r31.u32 + 44, r29.u32);
loc_821BD428:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r29,48(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 48);
	// ori r11,r11,3702
	ctx.r11.u64 = ctx.r11.u64 | 3702;
	// lbzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821bd570
	if (!ctx.cr0.eq) goto loc_821BD570;
	// bl 0x821159c8
	ctx.lr = 0x821BD444;
	sub_821159C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821bd570
	if (!ctx.cr0.eq) goto loc_821BD570;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x821bd570
	if (ctx.cr6.lt) goto loc_821BD570;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x821bd570
	if (!ctx.cr6.lt) goto loc_821BD570;
	// lha r10,30(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// bne cr6,0x821bd47c
	if (!ctx.cr6.eq) goto loc_821BD47C;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x821bd570
	if (!ctx.cr6.eq) goto loc_821BD570;
loc_821BD47C:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bd570
	if (!ctx.cr6.eq) goto loc_821BD570;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3702
	ctx.r11.u64 = ctx.r11.u64 | 3702;
	// lbzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821bd570
	if (!ctx.cr0.eq) goto loc_821BD570;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bne cr6,0x821bd4dc
	if (!ctx.cr6.eq) goto loc_821BD4DC;
	// lbz r11,18(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 18);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821bd4dc
	if (ctx.cr0.eq) goto loc_821BD4DC;
	// lbz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821bd4dc
	if (ctx.cr0.eq) goto loc_821BD4DC;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lbz r11,27(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 27);
	// ori r10,r10,3696
	ctx.r10.u64 = ctx.r10.u64 | 3696;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lbzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821bd570
	if (ctx.cr6.eq) goto loc_821BD570;
loc_821BD4DC:
	// lwz r11,-9912(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -9912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bd548
	if (!ctx.cr6.eq) goto loc_821BD548;
	// lwz r11,1852(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1852);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bd548
	if (ctx.cr0.eq) goto loc_821BD548;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821bd508
	if (!ctx.cr6.eq) goto loc_821BD508;
	// fmr f31,f29
	f31.f64 = f29.f64;
loc_821BD508:
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,147
	ctx.r3.u64 = ctx.r3.u64 | 147;
	// bl 0x820e68b8
	ctx.lr = 0x821BD518;
	sub_820E68B8(ctx, base);
	// stfs f31,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// stfs f30,20(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821eaf80
	ctx.lr = 0x821BD540;
	sub_821EAF80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-9912(r28)
	REX_STORE_U32(r28.u32 + -9912, ctx.r11.u32);
loc_821BD548:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r26,4
	ctx.r10.s64 = r26.s64 + 4;
	// ori r11,r11,3698
	ctx.r11.u64 = ctx.r11.u64 | 3698;
	// lbzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bd570
	if (ctx.cr0.eq) goto loc_821BD570;
	// stw r29,44(r31)
	REX_STORE_U32(r31.u32 + 44, r29.u32);
loc_821BD570:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821bd6c4
	if (ctx.cr6.lt) goto loc_821BD6C4;
	// lhz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 30);
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
	// bne cr6,0x821bd6dc
	if (!ctx.cr6.eq) goto loc_821BD6DC;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r8,19
	ctx.r8.s64 = 19;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r8,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r8.u32);
	// bl 0x821d17e8
	ctx.lr = 0x821BD5B0;
	sub_821D17E8(ctx, base);
	// b 0x821bd6c4
	goto loc_821BD6C4;
loc_821BD5B4:
	// bl 0x821d7d10
	ctx.lr = 0x821BD5B8;
	sub_821D7D10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821bd684
	if (ctx.cr0.eq) goto loc_821BD684;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 216);
	// bl 0x821c2f08
	ctx.lr = 0x821BD5CC;
	sub_821C2F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821bd684
	if (ctx.cr0.eq) goto loc_821BD684;
	// lwz r3,216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 216);
	// bl 0x821c77e8
	ctx.lr = 0x821BD5DC;
	sub_821C77E8(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-7176
	ctx.r10.s64 = ctx.r10.s64 + -7176;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,88(r10)
	REX_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// bl 0x821d7d78
	ctx.lr = 0x821BD5F4;
	sub_821D7D78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821cd2a8
	ctx.lr = 0x821BD600;
	sub_821CD2A8(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821cd2a8
	ctx.lr = 0x821BD610;
	sub_821CD2A8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821b25c8
	ctx.lr = 0x821BD620;
	sub_821B25C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f2,10488(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 10488);
	ctx.f2.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821ca5a0
	ctx.lr = 0x821BD638;
	sub_821CA5A0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// ori r10,r10,14184
	ctx.r10.u64 = ctx.r10.u64 | 14184;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// lfsx f2,r30,r10
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821ca5a0
	ctx.lr = 0x821BD65C;
	sub_821CA5A0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821bd678
	goto loc_821BD678;
loc_821BD664:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// bne cr6,0x821bd684
	if (!ctx.cr6.eq) goto loc_821BD684;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821d7b50
	ctx.lr = 0x821BD674;
	sub_821D7B50(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_821BD678:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,876(r31)
	REX_STORE_U32(r31.u32 + 876, ctx.r11.u32);
	// stw r10,880(r31)
	REX_STORE_U32(r31.u32 + 880, ctx.r10.u32);
loc_821BD684:
	// bl 0x820ee428
	ctx.lr = 0x821BD688;
	sub_820EE428(ctx, base);
	// lwz r11,876(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 876);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821bd6ac
	if (!ctx.cr6.eq) goto loc_821BD6AC;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r9,r10,3700
	ctx.r9.u64 = ctx.r10.u64 | 3700;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,4(r30)
	REX_STORE_U8(r30.u32 + 4, ctx.r10.u8);
	// stbx r11,r30,r9
	REX_STORE_U8(r30.u32 + ctx.r9.u32, ctx.r11.u8);
loc_821BD6AC:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x821bd6c0
	if (!ctx.cr6.lt) goto loc_821BD6C0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821BD6C0:
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
loc_821BD6C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822d4ed0
	return;
loc_821BD6DC:
	// li r10,14
	ctx.r10.s64 = 14;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r8,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r8.u32);
	// b 0x821bd6c4
	goto loc_821BD6C4;
}

DEFINE_REX_FUNC(sub_821CD320) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,10244(r3)
	REX_STORE_U32(ctx.r3.u32 + 10244, ctx.r11.u32);
	// bl 0x821cb7d0
	ctx.lr = 0x821CD340;
	sub_821CB7D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c1760
	ctx.lr = 0x821CD368;
	sub_821C1760(ctx, base);
	// addi r3,r31,8120
	ctx.r3.s64 = r31.s64 + 8120;
	// bl 0x821be4f8
	ctx.lr = 0x821CD370;
	sub_821BE4F8(ctx, base);
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

DEFINE_REX_FUNC(sub_821D0AD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r10,r11,-11568
	ctx.r10.s64 = ctx.r11.s64 + -11568;
	// lwz r11,-11568(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11568);
	// b 0x821d0af4
	goto loc_821D0AF4;
loc_821D0AE8:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x821d0afc
	if (ctx.cr6.eq) goto loc_821D0AFC;
	// lwzu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
loc_821D0AF4:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821d0ae8
	if (!ctx.cr6.eq) goto loc_821D0AE8;
loc_821D0AFC:
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D0F80) {
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
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// lwz r3,-14880(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -14880);
	// bl 0x82191628
	ctx.lr = 0x821D0F98;
	sub_82191628(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x821D0FAC;
	sub_821D6210(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D1748) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-8944
	ctx.r11.s64 = ctx.r11.s64 + -8944;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D1818) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// beq cr6,0x821d1850
	if (ctx.cr6.eq) goto loc_821D1850;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// stw r10,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r10.u32);
loc_821D1850:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x821d1864
	if (ctx.cr6.eq) goto loc_821D1864;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,352(r31)
	REX_STORE_U32(r31.u32 + 352, ctx.r11.u32);
	// b 0x821d18fc
	goto loc_821D18FC;
loc_821D1864:
	// lha r11,30(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821d18b8
	if (ctx.cr6.eq) goto loc_821D18B8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821d18b8
	if (ctx.cr6.eq) goto loc_821D18B8;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x821d18b8
	if (ctx.cr6.eq) goto loc_821D18B8;
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// li r5,60
	ctx.r5.s64 = 60;
	// lwz r10,5440(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 5440);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// stw r10,5440(r11)
	REX_STORE_U32(ctx.r11.u32 + 5440, ctx.r10.u32);
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r10,216(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 216);
	// addi r3,r10,17772
	ctx.r3.s64 = ctx.r10.s64 + 17772;
	// addi r4,r11,17772
	ctx.r4.s64 = ctx.r11.s64 + 17772;
	// bl 0x822d4fa0
	ctx.lr = 0x821D18A8;
	sub_822D4FA0(ctx, base);
	// bl 0x821db490
	ctx.lr = 0x821D18AC;
	sub_821DB490(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// sth r11,30(r31)
	REX_STORE_U16(r31.u32 + 30, ctx.r11.u16);
	// bl 0x821da948
	ctx.lr = 0x821D18B8;
	sub_821DA948(ctx, base);
loc_821D18B8:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-7072
	ctx.r9.s64 = ctx.r11.s64 + -7072;
	// ori r8,r10,3780
	ctx.r8.u64 = ctx.r10.u64 | 3780;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,84(r9)
	REX_STORE_U32(ctx.r9.u32 + 84, ctx.r10.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stwx r11,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// bl 0x821d6210
	ctx.lr = 0x821D18E4;
	sub_821D6210(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// li r4,3
	ctx.r4.s64 = 3;
	// bne cr6,0x821d18f8
	if (!ctx.cr6.eq) goto loc_821D18F8;
	// li r4,2
	ctx.r4.s64 = 2;
loc_821D18F8:
	// bl 0x821d6210
	ctx.lr = 0x821D18FC;
	sub_821D6210(ctx, base);
loc_821D18FC:
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

DEFINE_REX_FUNC(sub_821D56D0) {
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
	// bl 0x821b0d38
	ctx.lr = 0x821D56E0;
	sub_821B0D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d56f0
	if (ctx.cr0.eq) goto loc_821D56F0;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x821d5748
	goto loc_821D5748;
loc_821D56F0:
	// bl 0x82135998
	ctx.lr = 0x821D56F4;
	sub_82135998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d5714
	if (ctx.cr0.eq) goto loc_821D5714;
	// bl 0x82135c90
	ctx.lr = 0x821D5700;
	sub_82135C90(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// b 0x821d5748
	goto loc_821D5748;
loc_821D5714:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,23240
	ctx.r11.s64 = ctx.r11.s64 + 23240;
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821d573c
	if (!ctx.cr0.eq) goto loc_821D573C;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,336(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 336);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d5744
	if (ctx.cr0.eq) goto loc_821D5744;
loc_821D573C:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x821d5748
	goto loc_821D5748;
loc_821D5744:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D5748:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D80D8) {
	REX_FUNC_PROLOGUE();
	// b 0x820eee80
	sub_820EEE80(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D81E8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821d8218
	if (ctx.cr6.eq) goto loc_821D8218;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x821d8218
	if (ctx.cr6.eq) goto loc_821D8218;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x821d8218
	if (ctx.cr6.eq) goto loc_821D8218;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_821D8218:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D87E0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r10,220(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r10,19356(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 19356);
	// cmpwi cr6,r10,19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 19, ctx.xer);
	// ble cr6,0x821d8800
	if (!ctx.cr6.gt) goto loc_821D8800;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821D8800:
	// lha r11,30(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821d8820
	if (ctx.cr6.eq) goto loc_821D8820;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821d8820
	if (ctx.cr6.eq) goto loc_821D8820;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
loc_821D8820:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D9148) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821d9168
	if (ctx.cr6.eq) goto loc_821D9168;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16536(r3)
	REX_STORE_U32(ctx.r3.u32 + 16536, ctx.r11.u32);
	// blr 
	return;
loc_821D9168:
	// lbz r11,176(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lbz r11,177(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 177);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lbz r11,178(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 178);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lbz r11,179(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 179);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lbz r11,180(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 180);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r11,588(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 588);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,28724(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28724);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5468(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 5468, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DCCC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r9,78
	ctx.r9.s64 = 78;
	// addi r11,r11,5048
	ctx.r11.s64 = ctx.r11.s64 + 5048;
	// addi r8,r10,5128
	ctx.r8.s64 = ctx.r10.s64 + 5128;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821DCCE0:
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,5(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r9,r6,2,22,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC03);
	// clrlwi r9,r9,22
	ctx.r9.u64 = ctx.r9.u32 & 0x3FF;
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwimi r8,r7,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x821dcce0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DCCE0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DD7F0) {
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
	// bl 0x822d4e80
	ctx.lr = 0x821DD7F8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821DD81C;
	sub_820E68B8(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,4696
	r30.s64 = ctx.r11.s64 + 4696;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x821dd9c4
	if (ctx.cr6.eq) goto loc_821DD9C4;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(r27.s32, 3, ctx.xer);
	// beq cr6,0x821dd930
	if (ctx.cr6.eq) goto loc_821DD930;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x821dda5c
	if (ctx.cr6.gt) goto loc_821DDA5C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821dd878
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821DD878;
	// bdzf 4*cr6+eq,0x821dd884
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821DD884;
	// bdzf 4*cr6+eq,0x821dd890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821DD890;
	// bdzf 4*cr6+eq,0x821dd89c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821DD89C;
	// bdzf 4*cr6+eq,0x821dd8a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821DD8A8;
	// bdzf 4*cr6+eq,0x821dd8b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821DD8B4;
	// bne cr6,0x821dd8c0
	if (!ctx.cr6.eq) goto loc_821DD8C0;
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,60
	ctx.r3.u64 = ctx.r3.u64 | 60;
	// b 0x821dda44
	goto loc_821DDA44;
loc_821DD878:
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,62
	ctx.r3.u64 = ctx.r3.u64 | 62;
	// b 0x821dda44
	goto loc_821DDA44;
loc_821DD884:
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,61
	ctx.r3.u64 = ctx.r3.u64 | 61;
	// b 0x821dda44
	goto loc_821DDA44;
loc_821DD890:
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,63
	ctx.r3.u64 = ctx.r3.u64 | 63;
	// b 0x821dda44
	goto loc_821DDA44;
loc_821DD89C:
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,66
	ctx.r3.u64 = ctx.r3.u64 | 66;
	// b 0x821dda44
	goto loc_821DDA44;
loc_821DD8A8:
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,64
	ctx.r3.u64 = ctx.r3.u64 | 64;
	// b 0x821dda44
	goto loc_821DDA44;
loc_821DD8B4:
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,65
	ctx.r3.u64 = ctx.r3.u64 | 65;
	// b 0x821dda44
	goto loc_821DDA44;
loc_821DD8C0:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821dcf00
	ctx.lr = 0x821DD8D0;
	sub_821DCF00(ctx, base);
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addis r3,r29,1280
	ctx.r3.s64 = r29.s64 + 83886080;
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// bl 0x820e68b8
	ctx.lr = 0x821DD8E4;
	sub_820E68B8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,344(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 344);
	// bl 0x821357d0
	ctx.lr = 0x821DD8FC;
	sub_821357D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x820e68b8
	ctx.lr = 0x821DD904;
	sub_820E68B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,67
	ctx.r3.u64 = ctx.r3.u64 | 67;
	// bl 0x820e68b8
	ctx.lr = 0x821DD918;
	sub_820E68B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x822d55f8
	ctx.lr = 0x821DD92C;
	sub_822D55F8(ctx, base);
	// b 0x821dda5c
	goto loc_821DDA5C;
loc_821DD930:
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x821dda5c
	if (ctx.cr6.gt) goto loc_821DDA5C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821dd968
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821DD968;
	// bdzf 4*cr6+eq,0x821dd974
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821DD974;
	// bdzf 4*cr6+eq,0x821dd980
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821DD980;
	// bdzf 4*cr6+eq,0x821dd98c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821DD98C;
	// bdzf 4*cr6+eq,0x821dd998
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821DD998;
	// bdzf 4*cr6+eq,0x821dd9a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821DD9A4;
	// bne cr6,0x821dd9b0
	if (!ctx.cr6.eq) goto loc_821DD9B0;
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,52
	ctx.r3.u64 = ctx.r3.u64 | 52;
	// b 0x821dda44
	goto loc_821DDA44;
loc_821DD968:
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,54
	ctx.r3.u64 = ctx.r3.u64 | 54;
	// b 0x821dda44
	goto loc_821DDA44;
loc_821DD974:
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,53
	ctx.r3.u64 = ctx.r3.u64 | 53;
	// b 0x821dda44
	goto loc_821DDA44;
loc_821DD980:
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,55
	ctx.r3.u64 = ctx.r3.u64 | 55;
	// b 0x821dda44
	goto loc_821DDA44;
loc_821DD98C:
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,59
	ctx.r3.u64 = ctx.r3.u64 | 59;
	// b 0x821dda44
	goto loc_821DDA44;
loc_821DD998:
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,57
	ctx.r3.u64 = ctx.r3.u64 | 57;
	// b 0x821dda44
	goto loc_821DDA44;
loc_821DD9A4:
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,58
	ctx.r3.u64 = ctx.r3.u64 | 58;
	// b 0x821dda44
	goto loc_821DDA44;
loc_821DD9B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,15964
	ctx.r4.s64 = ctx.r11.s64 + 15964;
	// bl 0x822d55f8
	ctx.lr = 0x821DD9C0;
	sub_822D55F8(ctx, base);
	// b 0x821dda5c
	goto loc_821DDA5C;
loc_821DD9C4:
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x821dda5c
	if (ctx.cr6.gt) goto loc_821DDA5C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821dda3c
	if (ctx.cr6.eq) goto loc_821DDA3C;
	// bdz 0x821dd9f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821DD9F4;
	// bdz 0x821dda3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821DDA3C;
	// bdz 0x821dda00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821DDA00;
	// bdz 0x821dda3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821DDA3C;
	// bdz 0x821dda3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821DDA3C;
	// bdz 0x821dda3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821DDA3C;
	// b 0x821dda0c
	goto loc_821DDA0C;
loc_821DD9F4:
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,80
	ctx.r3.u64 = ctx.r3.u64 | 80;
	// b 0x821dda44
	goto loc_821DDA44;
loc_821DDA00:
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,81
	ctx.r3.u64 = ctx.r3.u64 | 81;
	// b 0x821dda44
	goto loc_821DDA44;
loc_821DDA0C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821dcf00
	ctx.lr = 0x821DDA1C;
	sub_821DCF00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,344(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 344);
	// bl 0x821357d0
	ctx.lr = 0x821DDA30;
	sub_821357D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x820e68b8
	ctx.lr = 0x821DDA38;
	sub_820E68B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_821DDA3C:
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// ori r3,r3,83
	ctx.r3.u64 = ctx.r3.u64 | 83;
loc_821DDA44:
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821DDA4C;
	sub_820E68B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d55f8
	ctx.lr = 0x821DDA5C;
	sub_822D55F8(ctx, base);
loc_821DDA5C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821E5680) {
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
	// bl 0x822d4e80
	ctx.lr = 0x821E5688;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mulli r11,r6,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(6));
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// addi r9,r9,16240
	ctx.r9.s64 = ctx.r9.s64 + 16240;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,-5008
	ctx.r10.s64 = ctx.r10.s64 + -5008;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// li r8,37
	ctx.r8.s64 = 37;
	// li r9,63
	ctx.r9.s64 = 63;
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// li r6,88
	ctx.r6.s64 = 88;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// li r10,104
	ctx.r10.s64 = 104;
	// li r9,108
	ctx.r9.s64 = 108;
	// stw r6,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// li r8,111
	ctx.r8.s64 = 111;
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r8,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821e5708
	if (!ctx.cr6.eq) goto loc_821E5708;
	// li r26,114
	r26.s64 = 114;
	// b 0x821e5718
	goto loc_821E5718;
loc_821E5708:
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r26,r10,r11
	r26.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_821E5718:
	// li r30,1
	r30.s64 = 1;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// addi r5,r10,29368
	ctx.r5.s64 = ctx.r10.s64 + 29368;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,324(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// bl 0x821af9d8
	ctx.lr = 0x821E5740;
	sub_821AF9D8(ctx, base);
	// bl 0x820e4bb0
	ctx.lr = 0x821E5744;
	sub_820E4BB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,112
	ctx.r9.s64 = r31.s64 + 112;
	// std r30,80(r31)
	REX_STORE_U64(r31.u32 + 80, r30.u64);
	// stw r3,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// sth r30,88(r31)
	REX_STORE_U16(r31.u32 + 88, r30.u16);
	// stb r28,90(r31)
	REX_STORE_U8(r31.u32 + 90, r28.u8);
	// stw r9,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// beq 0x821e5774
	if (ctx.cr0.eq) goto loc_821E5774;
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// stb r26,104(r31)
	REX_STORE_U8(r31.u32 + 104, r26.u8);
loc_821E5774:
	// stb r11,107(r31)
	REX_STORE_U8(r31.u32 + 107, ctx.r11.u8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stb r11,109(r31)
	REX_STORE_U8(r31.u32 + 109, ctx.r11.u8);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stb r11,105(r31)
	REX_STORE_U8(r31.u32 + 105, ctx.r11.u8);
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// stb r11,106(r31)
	REX_STORE_U8(r31.u32 + 106, ctx.r11.u8);
	// lfs f3,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r10,-4224
	ctx.r10.s64 = ctx.r10.s64 + -4224;
	// lfs f8,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f8.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f5,-8496(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -8496);
	ctx.f5.f64 = double(temp.f32);
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// fmr f4,f5
	ctx.f4.f64 = ctx.f5.f64;
	// lfs f2,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821065b0
	ctx.lr = 0x821E57D0;
	sub_821065B0(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// stfs f31,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// beq cr6,0x821e5800
	if (ctx.cr6.eq) goto loc_821E5800;
	// cmpwi cr6,r26,114
	ctx.cr6.compare<int32_t>(r26.s32, 114, ctx.xer);
	// beq cr6,0x821e57f0
	if (ctx.cr6.eq) goto loc_821E57F0;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// stb r30,77(r11)
	REX_STORE_U8(ctx.r11.u32 + 77, r30.u8);
loc_821E57F0:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lbz r10,74(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 74);
	// ori r10,r10,208
	ctx.r10.u64 = ctx.r10.u64 | 208;
	// b 0x821e580c
	goto loc_821E580C;
loc_821E5800:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lbz r10,74(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 74);
	// ori r10,r10,224
	ctx.r10.u64 = ctx.r10.u64 | 224;
loc_821E580C:
	// stb r10,74(r11)
	REX_STORE_U8(ctx.r11.u32 + 74, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821EC298) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1814(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1814);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r3,7792(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// b 0x821ec008
	sub_821EC008(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821EC8D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x821ec9b0
	if (ctx.cr6.lt) goto loc_821EC9B0;
	// beq cr6,0x821ec970
	if (ctx.cr6.eq) goto loc_821EC970;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x821ec930
	if (ctx.cr6.lt) goto loc_821EC930;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lfs f0,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821ec9ec
	goto loc_821EC9EC;
loc_821EC930:
	// lfs f0,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821ec9ec
	goto loc_821EC9EC;
loc_821EC970:
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821ec9ec
	goto loc_821EC9EC;
loc_821EC9B0:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
loc_821EC9EC:
	// stfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F2E90) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
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
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F45C0) {
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
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x821f4634
	goto loc_821F4634;
loc_821F45E4:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,-4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// lfs f0,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821f460c
	if (ctx.cr6.gt) goto loc_821F460C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821F460C:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821f4618
	if (ctx.cr0.eq) goto loc_821F4618;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821F4618:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// stwx r9,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
loc_821F4634:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821f45e4
	if (ctx.cr6.lt) goto loc_821F45E4;
	// bne cr6,0x821f4658
	if (!ctx.cr6.eq) goto loc_821F4658;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_821F4658:
	// bl 0x821f3ed8
	ctx.lr = 0x821F465C;
	sub_821F3ED8(ctx, base);
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

DEFINE_REX_FUNC(sub_821F8C68) {
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e70
	ctx.lr = 0x821F8C70;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x822d4f38
	ctx.lr = 0x821F8C78;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r5,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(40));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// add r28,r11,r3
	r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f0,12200(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12200);
	ctx.f0.f64 = double(temp.f32);
	// add r29,r11,r30
	r29.u64 = ctx.r11.u64 + r30.u64;
	// fmuls f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f30,f2,f0
	f30.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// add r27,r11,r29
	r27.u64 = ctx.r11.u64 + r29.u64;
	// add r26,r11,r27
	r26.u64 = ctx.r11.u64 + r27.u64;
	// add r25,r11,r26
	r25.u64 = ctx.r11.u64 + r26.u64;
	// add r24,r11,r25
	r24.u64 = ctx.r11.u64 + r25.u64;
	// fneg f29,f31
	f29.u64 = f31.u64 ^ 0x8000000000000000;
	// fneg f28,f30
	f28.u64 = f30.u64 ^ 0x8000000000000000;
	// ble cr6,0x821f8e24
	if (!ctx.cr6.gt) goto loc_821F8E24;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
loc_821F8CC8:
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x821F8CD8;
	sub_822D4FA0(ctx, base);
	// lwz r10,24(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r10,83(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r10,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x821F8D08;
	sub_822D4FA0(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x821F8D18;
	sub_822D4FA0(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x821F8D28;
	sub_822D4FA0(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x821F8D38;
	sub_822D4FA0(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x821F8D48;
	sub_822D4FA0(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x821F8D58;
	sub_822D4FA0(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x821F8D68;
	sub_822D4FA0(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// fadds f13,f28,f13
	ctx.f13.f64 = double(float(f28.f64 + ctx.f13.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// addi r23,r23,40
	r23.s64 = r23.s64 + 40;
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// lfs f13,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 4, temp.u32);
	// stfs f13,0(r28)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// addi r28,r28,40
	r28.s64 = r28.s64 + 40;
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + f29.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// lfs f13,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// addi r29,r29,40
	r29.s64 = r29.s64 + 40;
	// lfs f0,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 4, temp.u32);
	// addi r27,r27,40
	r27.s64 = r27.s64 + 40;
	// lfs f0,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// stfs f0,4(r26)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + 4, temp.u32);
	// addi r26,r26,40
	r26.s64 = r26.s64 + 40;
	// lfs f0,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 + ctx.f0.f64));
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r25.u32 + 0, temp.u32);
	// lfs f0,0(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f0,0(r24)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r24.u32 + 0, temp.u32);
	// addic. r22,r22,-1
	ctx.xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// addi r25,r25,40
	r25.s64 = r25.s64 + 40;
	// addi r24,r24,40
	r24.s64 = r24.s64 + 40;
	// bne 0x821f8cc8
	if (!ctx.cr0.eq) goto loc_821F8CC8;
loc_821F8E24:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x822d4f84
	ctx.lr = 0x821F8E30;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82200918) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,224(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,224(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822009F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,248(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200AB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,200(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// stfs f2,204(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// stfs f3,208(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822021E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,688(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 688, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822022B0) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r4,61
	ctx.r11.s64 = ctx.r4.s64 + 61;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82202EA0) {
	REX_FUNC_PROLOGUE();
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x822c80c8
	sub_822C80C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82203030) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82203138) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r11,15284
	ctx.r3.s64 = ctx.r11.s64 + 15284;
	// b 0x82203418
	sub_82203418(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822031C0) {
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
	// bl 0x822d4e84
	ctx.lr = 0x822031C8;
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// extsb. r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822032b4
	if (ctx.cr0.lt) goto loc_822032B4;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x822032b4
	if (!ctx.cr6.lt) goto loc_822032B4;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r10,15152
	r31.s64 = ctx.r10.s64 + 15152;
	// bl 0x82202fd8
	ctx.lr = 0x82203208;
	sub_82202FD8(ctx, base);
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82203274
	if (!ctx.cr6.eq) goto loc_82203274;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r9,r10,12560
	ctx.r9.s64 = ctx.r10.s64 + 12560;
	// addi r6,r6,21312
	ctx.r6.s64 = ctx.r6.s64 + 21312;
	// addi r8,r8,12344
	ctx.r8.s64 = ctx.r8.s64 + 12344;
	// addi r7,r7,-22768
	ctx.r7.s64 = ctx.r7.s64 + -22768;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x821f7d50
	ctx.lr = 0x8220324C;
	sub_821F7D50(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82203264
	if (ctx.cr0.eq) goto loc_82203264;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82203268
	goto loc_82203268;
loc_82203264:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82203268:
	// stwx r11,r30,r31
	REX_STORE_U32(r30.u32 + r31.u32, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822032b4
	if (ctx.cr6.eq) goto loc_822032B4;
loc_82203274:
	// extsw r10,r28
	ctx.r10.s64 = r28.s32;
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 - f31.f64));
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f30,80(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stb r29,96(r11)
	REX_STORE_U8(ctx.r11.u32 + 96, r29.u8);
	// stw r28,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, r28.u32);
	// stw r27,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, r27.u32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// stw r9,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
loc_822032B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82207E90) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82207ec0
	if (ctx.cr6.eq) goto loc_82207EC0;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82207ec0
	if (ctx.cr6.eq) goto loc_82207EC0;
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82207ec0
	if (!ctx.cr6.lt) goto loc_82207EC0;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_82207EC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822084F0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,10
	ctx.r7.s64 = 10;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r6,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stwx r4,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r4.u32);
	// stb r7,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// stb r10,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// stb r10,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// stb r10,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82208E10) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82208ed8
	if (ctx.cr6.eq) goto loc_82208ED8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,22460
	ctx.r10.s64 = ctx.r10.s64 + 22460;
loc_82208E24:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82208e48
	if (ctx.cr0.eq) goto loc_82208E48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82208e24
	if (ctx.cr6.eq) goto loc_82208E24;
loc_82208E48:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82208e58
	if (!ctx.cr0.eq) goto loc_82208E58;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// b 0x82208ed4
	goto loc_82208ED4;
loc_82208E58:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-8552
	ctx.r10.s64 = ctx.r10.s64 + -8552;
loc_82208E64:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82208e88
	if (ctx.cr0.eq) goto loc_82208E88;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82208e64
	if (ctx.cr6.eq) goto loc_82208E64;
loc_82208E88:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82208e98
	if (!ctx.cr0.eq) goto loc_82208E98;
	// ori r4,r4,256
	ctx.r4.u64 = ctx.r4.u64 | 256;
	// b 0x82208ed4
	goto loc_82208ED4;
loc_82208E98:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,22440
	ctx.r10.s64 = ctx.r10.s64 + 22440;
loc_82208EA4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82208ec8
	if (ctx.cr0.eq) goto loc_82208EC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82208ea4
	if (ctx.cr6.eq) goto loc_82208EA4;
loc_82208EC8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82208ed8
	if (!ctx.cr0.eq) goto loc_82208ED8;
	// oris r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 262144;
loc_82208ED4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82208ED8:
	// b 0x824d3fcc
	__imp__XamLoaderLaunchTitle(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8220C920) {
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
	// bl 0x822d4e7c
	ctx.lr = 0x8220C928;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,56(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// addi r25,r4,56
	r25.s64 = ctx.r4.s64 + 56;
	// li r26,0
	r26.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r25
	r27.u64 = r25.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8220c988
	if (ctx.cr6.eq) goto loc_8220C988;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_8220C954:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8220c974
	if (ctx.cr6.lt) goto loc_8220C974;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8220c994
	if (ctx.cr6.eq) goto loc_8220C994;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8220c994
	if (ctx.cr6.eq) goto loc_8220C994;
loc_8220C974:
	// mr r29,r31
	r29.u64 = r31.u64;
	// mr r27,r31
	r27.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8220c954
	if (!ctx.cr6.eq) goto loc_8220C954;
loc_8220C988:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220C98C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_8220C994:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,1412(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x8220c9bc
	if (ctx.cr6.eq) goto loc_8220C9BC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x8220C9B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8220c9d8
	goto loc_8220C9D8;
loc_8220C9BC:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// lwz r7,1424(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1424);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824d43bc
	ctx.lr = 0x8220C9D8;
	__imp__NtAllocateVirtualMemory(ctx, base);
loc_8220C9D8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8220c988
	if (ctx.cr6.lt) goto loc_8220C988;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 28);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8220ca04
	if (!ctx.cr6.eq) goto loc_8220CA04;
	// stw r26,28(r30)
	REX_STORE_U32(r30.u32 + 28, r26.u32);
loc_8220CA04:
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8220ca34
	if (ctx.cr0.eq) goto loc_8220CA34;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8220caa0
	if (ctx.cr6.eq) goto loc_8220CAA0;
loc_8220CA34:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8220ca44
	if (!ctx.cr6.eq) goto loc_8220CA44;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// b 0x8220ca50
	goto loc_8220CA50;
loc_8220CA44:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8220CA50:
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8220caa0
	if (!ctx.cr0.eq) goto loc_8220CAA0;
	// lwz r9,44(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 44);
loc_8220CA60:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8220ca94
	if (!ctx.cr6.lt) goto loc_8220CA94;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8220ca94
	if (ctx.cr0.eq) goto loc_8220CA94;
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8220ca60
	if (ctx.cr0.eq) goto loc_8220CA60;
	// b 0x8220caa0
	goto loc_8220CAA0;
loc_8220CA94:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8220c988
	if (!ctx.cr6.eq) goto loc_8220C988;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8220CAA0:
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// andi. r10,r10,239
	ctx.r10.u64 = ctx.r10.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// subf. r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bne 0x8220cb30
	if (!ctx.cr0.eq) goto loc_8220CB30;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,44(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8220caf0
	if (!ctx.cr6.eq) goto loc_8220CAF0;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r3,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r3.u32);
	// b 0x8220cafc
	goto loc_8220CAFC;
loc_8220CAF0:
	// stb r26,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, r26.u8);
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// stw r10,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r10.u32);
loc_8220CAFC:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stw r31,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, r31.u32);
	// stw r26,4(r31)
	REX_STORE_U32(r31.u32 + 4, r26.u32);
	// stw r26,8(r31)
	REX_STORE_U32(r31.u32 + 8, r26.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 52);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r10.u32);
	// b 0x8220cb3c
	goto loc_8220CB3C;
loc_8220CB30:
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r3,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r3.u32);
loc_8220CB3C:
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,5(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r10,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r10,28,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFF;
	// sth r10,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r11,2(r3)
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// bne 0x8220cb74
	if (!ctx.cr0.eq) goto loc_8220CB74;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
loc_8220CB74:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220c98c
	if (!ctx.cr6.eq) goto loc_8220C98C;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// b 0x8220cba0
	goto loc_8220CBA0;
loc_8220CB88:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8220cb9c
	if (ctx.cr6.lt) goto loc_8220CB9C;
	// stw r10,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r10.u32);
loc_8220CB9C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8220CBA0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220cb88
	if (!ctx.cr6.eq) goto loc_8220CB88;
	// b 0x8220c98c
	goto loc_8220C98C;
}

DEFINE_REX_FUNC(sub_82216CC8) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82216CE0:
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
	// bne 0x82216ce0
	if (!ctx.cr0.eq) goto loc_82216CE0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82216d34
	if (!ctx.cr6.eq) goto loc_82216D34;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x82216d28
	if (!ctx.cr6.eq) goto loc_82216D28;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82216d28
	if (ctx.cr0.eq) goto loc_82216D28;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82216cc8
	ctx.lr = 0x82216D28;
	sub_82216CC8(ctx, base);
loc_82216D28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82216a20
	ctx.lr = 0x82216D30;
	sub_82216A20(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82216D34:
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

DEFINE_REX_FUNC(sub_8221A3D0) {
	REX_FUNC_PROLOGUE();
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lwz r11,256(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r10,11024(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 11024);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221AA30) {
	REX_FUNC_PROLOGUE();
	// stw r5,13836(r3)
	REX_STORE_U32(ctx.r3.u32 + 13836, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221AC58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x8221AC60;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,24704
	ctx.r3.s64 = 24704;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x8221aa90
	ctx.lr = 0x8221AC88;
	sub_8221AA90(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8221ac9c
	if (!ctx.cr0.eq) goto loc_8221AC9C;
loc_8221AC90:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8221ad24
	goto loc_8221AD24;
loc_8221AC9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822252a8
	ctx.lr = 0x8221ACA4;
	sub_822252A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8221acbc
	if (!ctx.cr0.eq) goto loc_8221ACBC;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -4);
	// bl 0x823cd250
	ctx.lr = 0x8221ACB8;
	sub_823CD250(ctx, base);
	// b 0x8221ac90
	goto loc_8221AC90;
loc_8221ACBC:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// bne cr6,0x8221acf4
	if (!ctx.cr6.eq) goto loc_8221ACF4;
	// lbz r11,11068(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stb r11,11068(r31)
	REX_STORE_U8(r31.u32 + 11068, ctx.r11.u8);
	// bl 0x82213580
	ctx.lr = 0x8221ACD8;
	sub_82213580(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82225318
	ctx.lr = 0x8221ACE0;
	sub_82225318(ctx, base);
loc_8221ACE0:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8221ad1c
	if (!ctx.cr0.eq) goto loc_8221AD1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221a848
	ctx.lr = 0x8221ACF0;
	sub_8221A848(ctx, base);
	// b 0x8221ac90
	goto loc_8221AC90;
loc_8221ACF4:
	// rlwinm. r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221ad08
	if (!ctx.cr0.eq) goto loc_8221AD08;
	// rlwinm. r11,r30,0,2,7
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x3F000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221ad08
	if (!ctx.cr0.eq) goto loc_8221AD08;
	// oris r30,r30,3072
	r30.u64 = r30.u64 | 201326592;
loc_8221AD08:
	// stw r30,24392(r31)
	REX_STORE_U32(r31.u32 + 24392, r30.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82225840
	ctx.lr = 0x8221AD18;
	sub_82225840(ctx, base);
	// b 0x8221ace0
	goto loc_8221ACE0;
loc_8221AD1C:
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221AD24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8221EC20) {
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
	// bl 0x822d4e68
	ctx.lr = 0x8221EC28;
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,112
	ctx.r11.s64 = ctx.r7.s64 + 112;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,872
	ctx.r11.s64 = ctx.r11.s64 + 872;
	// lwz r28,28(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8221f23c
	if (ctx.cr6.eq) goto loc_8221F23C;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mulli r9,r7,416
	ctx.r9.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(416));
	// lwz r25,24(r5)
	r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// addi r8,r10,9
	ctx.r8.s64 = ctx.r10.s64 + 9;
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 + 68;
	// add r30,r9,r11
	r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// mr r27,r30
	r27.u64 = r30.u64;
	// beq cr6,0x8221ef5c
	if (ctx.cr6.eq) goto loc_8221EF5C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r24,r5,52
	r24.s64 = ctx.r5.s64 + 52;
	// subf r26,r11,r10
	r26.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r29,r28
	r29.u64 = r28.u64;
	// addi r31,r11,28848
	r31.s64 = ctx.r11.s64 + 28848;
loc_8221EC9C:
	// add r5,r26,r7
	ctx.r5.u64 = r26.u64 + ctx.r7.u64;
	// lwzx r11,r26,r7
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + ctx.r7.u32);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r3,8(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// beq cr6,0x8221ecf8
	if (ctx.cr6.eq) goto loc_8221ECF8;
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 0);
loc_8221ECC0:
	// lbz r22,9(r8)
	r22.u64 = REX_LOAD_U8(ctx.r8.u32 + 9);
	// rlwinm r21,r5,20,28,31
	r21.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 20) & 0xF;
	// cmplw cr6,r22,r21
	ctx.cr6.compare<uint32_t>(r22.u32, r21.u32, ctx.xer);
	// bne cr6,0x8221ece0
	if (!ctx.cr6.eq) goto loc_8221ECE0;
	// lbz r22,10(r8)
	r22.u64 = REX_LOAD_U8(ctx.r8.u32 + 10);
	// rlwinm r21,r5,16,28,31
	r21.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xF;
	// cmplw cr6,r22,r21
	ctx.cr6.compare<uint32_t>(r22.u32, r21.u32, ctx.xer);
	// beq cr6,0x8221ecf0
	if (ctx.cr6.eq) goto loc_8221ECF0;
loc_8221ECE0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r25.u32, ctx.xer);
	// blt cr6,0x8221ecc0
	if (ctx.cr6.lt) goto loc_8221ECC0;
loc_8221ECF0:
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r25.u32, ctx.xer);
	// blt cr6,0x8221ed2c
	if (ctx.cr6.lt) goto loc_8221ED2C;
loc_8221ECF8:
	// lis r12,-16442
	ctx.r12.s64 = -1077542912;
	// lbz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// li r9,95
	ctx.r9.s64 = 95;
	// ori r12,r12,53247
	ctx.r12.u64 = ctx.r12.u64 | 53247;
	// rlwimi r11,r9,20,2,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x3FF00000) | (ctx.r11.u64 & 0xFFFFFFFFC00FFFFF);
	// and r5,r4,r12
	ctx.r5.u64 = ctx.r4.u64 & ctx.r12.u64;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r4,r3,0,0,0
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80000000;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// ori r10,r10,37456
	ctx.r10.u64 = ctx.r10.u64 | 37456;
	// oris r11,r5,6
	ctx.r11.u64 = ctx.r5.u64 | 393216;
	// or r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 | ctx.r8.u64;
	// b 0x8221ee4c
	goto loc_8221EE4C;
loc_8221ED2C:
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r22,r9,16,29,31
	r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x7;
	// rlwinm r5,r9,22,26,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0x38;
	// rlwinm r21,r9,13,29,31
	r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x7;
	// or r5,r5,r22
	ctx.r5.u64 = ctx.r5.u64 | r22.u64;
	// rlwinm r22,r9,0,16,21
	r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFC00;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r20,r9,0,24,25
	r20.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC0;
	// or r5,r5,r21
	ctx.r5.u64 = ctx.r5.u64 | r21.u64;
	// cmplwi cr6,r20,64
	ctx.cr6.compare<uint32_t>(r20.u32, 64, ctx.xer);
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// or r5,r5,r22
	ctx.r5.u64 = ctx.r5.u64 | r22.u64;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne cr6,0x8221edf0
	if (!ctx.cr6.eq) goto loc_8221EDF0;
	// rlwinm r22,r10,0,16,18
	r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r22,24576
	ctx.cr6.compare<uint32_t>(r22.u32, 24576, ctx.xer);
	// bgt cr6,0x8221ed90
	if (ctx.cr6.gt) goto loc_8221ED90;
	// rlwinm r10,r5,0,16,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xE000;
	// clrlwi r5,r5,19
	ctx.r5.u64 = ctx.r5.u32 & 0x1FFF;
	// xori r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 ^ 8192;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
loc_8221ED90:
	// rlwinm r22,r10,0,19,21
	r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C00;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r22,3072
	ctx.cr6.compare<uint32_t>(r22.u32, 3072, ctx.xer);
	// bgt cr6,0x8221edb0
	if (ctx.cr6.gt) goto loc_8221EDB0;
	// rlwinm r10,r5,0,19,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1C00;
	// andi. r5,r5,58367
	ctx.r5.u64 = ctx.r5.u64 & 58367;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// xori r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 ^ 1024;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
loc_8221EDB0:
	// rlwinm r22,r10,0,22,24
	r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x380;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r22,384
	ctx.cr6.compare<uint32_t>(r22.u32, 384, ctx.xer);
	// bgt cr6,0x8221edd0
	if (ctx.cr6.gt) goto loc_8221EDD0;
	// rlwinm r10,r5,0,22,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x380;
	// andi. r5,r5,64639
	ctx.r5.u64 = ctx.r5.u64 & 64639;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// xori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 ^ 128;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
loc_8221EDD0:
	// rlwinm r22,r10,0,25,27
	r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x70;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r22,48
	ctx.cr6.compare<uint32_t>(r22.u32, 48, ctx.xer);
	// bgt cr6,0x8221edf0
	if (ctx.cr6.gt) goto loc_8221EDF0;
	// rlwinm r10,r5,0,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x70;
	// andi. r5,r5,65423
	ctx.r5.u64 = ctx.r5.u64 & 65423;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// xori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 ^ 16;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
loc_8221EDF0:
	// lhz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// lis r22,342
	r22.s64 = 22413312;
	// lhz r8,2(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// rlwinm r21,r9,12,14,19
	r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3F000;
	// subfic r20,r5,95
	ctx.xer.ca = ctx.r5.u32 <= 95;
	r20.u64 = static_cast<uint64_t>(95) - ctx.r5.u64;
	// ori r22,r22,86
	r22.u64 = r22.u64 | 86;
	// rlwinm r9,r9,0,22,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x300;
	// mullw r22,r20,r22
	r22.s64 = int64_t(r20.s32) * int64_t(r22.s32);
	// lbzx r5,r5,r6
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// mr r20,r22
	r20.u64 = r22.u64;
	// lis r12,-16448
	ctx.r12.s64 = -1077936128;
	// rlwimi r20,r22,11,8,12
	r20.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 11) & 0xF80000) | (r20.u64 & 0xFFFFFFFFFF07FFFF);
	// rlwinm r8,r8,6,1,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x7FFFFF00;
	// or r9,r21,r9
	ctx.r9.u64 = r21.u64 | ctx.r9.u64;
	// ori r12,r12,53247
	ctx.r12.u64 = ctx.r12.u64 | 53247;
	// rlwimi r11,r20,1,5,11
	ctx.r11.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0x7F00000) | (ctx.r11.u64 & 0xFFFFFFFFF80FFFFF);
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// rlwinm r22,r9,4,0,27
	r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// rlwinm r5,r3,0,0,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80000000;
	// rlwinm r9,r11,0,5,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFC7FFFFFF;
	// or r11,r22,r4
	ctx.r11.u64 = r22.u64 | ctx.r4.u64;
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
loc_8221EE4C:
	// rlwinm r5,r11,1,28,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xE;
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r8,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r8.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// lhzx r9,r5,r31
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + r31.u32);
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r9,r9,29,19,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFF;
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// rlwimi r11,r9,31,29,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// rlwinm r9,r11,30,28,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xE;
	// lhzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + r31.u32);
	// and r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ctx.r5.u64;
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r4,r9,29,19,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFF;
	// rlwinm r9,r9,2,14,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FFFC;
	// or r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r4,r4,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// or r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r4,r4,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// or r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r5,r5,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// rlwimi r9,r11,0,29,25
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC7) | (ctx.r9.u64 & 0x38);
	// rlwinm r11,r9,27,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xE;
	// lhzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + r31.u32);
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r5,r11,29,19,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFF;
	// rlwinm r11,r11,3,13,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7FFF8;
	// or r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 | ctx.r8.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r5,r5,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwimi r11,r9,0,26,22
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F) | (ctx.r11.u64 & 0x1C0);
	// rlwinm r9,r11,24,28,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xE;
	// lhzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + r31.u32);
	// and r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 & ctx.r3.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r5,r9,3,13,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x7FFF8;
	// rlwinm r9,r9,29,19,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFF;
	// or r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 | ctx.r8.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwimi r9,r11,0,23,19
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF1FF) | (ctx.r9.u64 & 0xE00);
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// bne 0x8221ec9c
	if (!ctx.cr0.eq) goto loc_8221EC9C;
loc_8221EF5C:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r30
	r27.u64 = r30.u64;
	// add r26,r11,r30
	r26.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// bge cr6,0x8221f200
	if (!ctx.cr6.lt) goto loc_8221F200;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r25,r11,28864
	r25.s64 = ctx.r11.s64 + 28864;
loc_8221EF78:
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
	// bge cr6,0x8221f200
	if (!ctx.cr6.lt) goto loc_8221F200;
loc_8221EF80:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm. r11,r11,0,10,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221ef98
	if (!ctx.cr0.eq) goto loc_8221EF98;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
	// blt cr6,0x8221ef80
	if (ctx.cr6.lt) goto loc_8221EF80;
loc_8221EF98:
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
	// bge cr6,0x8221f200
	if (!ctx.cr6.lt) goto loc_8221F200;
	// addi r11,r27,4
	ctx.r11.s64 = r27.s64 + 4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bge cr6,0x8221f200
	if (!ctx.cr6.lt) goto loc_8221F200;
loc_8221EFB0:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,10,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x300000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8221efc8
	if (!ctx.cr0.eq) goto loc_8221EFC8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// blt cr6,0x8221efb0
	if (ctx.cr6.lt) goto loc_8221EFB0;
loc_8221EFC8:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bge cr6,0x8221f200
	if (!ctx.cr6.lt) goto loc_8221F200;
	// subf r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - r30.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// mulli r8,r8,12
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(12));
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// rlwinm r7,r7,0,10,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x300000;
	// lis r6,48
	ctx.r6.s64 = 3145728;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r27,r11,4
	r27.s64 = ctx.r11.s64 + 4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r29,-1
	r29.s64 = -1;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8221f040
	if (!ctx.cr6.eq) goto loc_8221F040;
	// subf r8,r30,r11
	ctx.r8.u64 = ctx.r11.u64 - r30.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mulli r8,r8,12
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r8,r11,14,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x7C;
	// rlwinm r11,r11,7,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x3;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// or r29,r8,r11
	r29.u64 = ctx.r8.u64 | ctx.r11.u64;
loc_8221F040:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221f130
	if (ctx.cr6.eq) goto loc_8221F130;
	// li r31,1
	r31.s64 = 1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8221F050:
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8221f120
	if (!ctx.cr6.lt) goto loc_8221F120;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// subf r28,r31,r4
	r28.u64 = ctx.r4.u64 - r31.u64;
loc_8221F060:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r8,14,25,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x7C;
	// rlwinm r8,r8,7,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x3;
	// rlwinm r24,r7,14,25,29
	r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0x7C;
	// rlwinm r22,r7,7,30,31
	r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x3;
	// or r7,r6,r8
	ctx.r7.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r6,r24,r22
	ctx.r6.u64 = r24.u64 | r22.u64;
	// subf. r8,r7,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8221f0a0
	if (ctx.cr0.eq) goto loc_8221F0A0;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8221f0e4
	if (ctx.cr6.eq) goto loc_8221F0E4;
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8221f0dc
	if (!ctx.cr6.eq) goto loc_8221F0DC;
	// li r8,-1
	ctx.r8.s64 = -1;
	// b 0x8221f0dc
	goto loc_8221F0DC;
loc_8221F0A0:
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r8,r8,9
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 9;
	// srawi r7,r7,9
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1FF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 9;
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8221f0dc
	if (!ctx.cr0.eq) goto loc_8221F0DC;
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// clrlwi r8,r8,26
	ctx.r8.u64 = ctx.r8.u32 & 0x3F;
	// clrlwi r7,r7,26
	ctx.r7.u64 = ctx.r7.u32 & 0x3F;
	// lbzx r8,r8,r25
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + r25.u32);
	// lbzx r7,r7,r25
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + r25.u32);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
loc_8221F0DC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8221f114
	if (!ctx.cr6.gt) goto loc_8221F114;
loc_8221F0E4:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r24,8(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r24,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r24.u32);
loc_8221F114:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x8221f060
	if (!ctx.cr0.eq) goto loc_8221F060;
loc_8221F120:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bne 0x8221f050
	if (!ctx.cr0.eq) goto loc_8221F050;
loc_8221F130:
	// mulli r11,r5,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(12));
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8221ef78
	if (!ctx.cr6.lt) goto loc_8221EF78;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divwu r10,r10,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8221F160:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r9,r10,25,12,13
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0xC0000) | (ctx.r9.u64 & 0xFFFFFFFFFFF3FFFF);
	// rlwimi r6,r8,25,12,13
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0xC0000) | (ctx.r6.u64 & 0xFFFFFFFFFFF3FFFF);
	// rlwinm r10,r9,0,7,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FC0000;
	// rlwinm r9,r6,0,7,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1FC0000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8221f1f0
	if (!ctx.cr6.eq) goto loc_8221F1F0;
	// lwz r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r10,r10,9
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 9;
	// srawi r9,r9,9
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 9;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8221f1f0
	if (ctx.cr6.gt) goto loc_8221F1F0;
	// lhz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r6,r6,26
	ctx.r6.u64 = ctx.r6.u32 & 0x3F;
	// lbzx r6,r6,r25
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + r25.u32);
	// subf r10,r10,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgt cr6,0x8221f1f0
	if (ctx.cr6.gt) goto loc_8221F1F0;
	// rlwinm r9,r8,5,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0x7;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8221f1d8
	if (!ctx.cr6.gt) goto loc_8221F1D8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8221F1D8:
	// rlwimi r8,r10,27,2,4
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x38000000) | (ctx.r8.u64 & 0xFFFFFFFFC7FFFFFF);
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x8221f1f4
	goto loc_8221F1F4;
loc_8221F1F0:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_8221F1F4:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x8221f160
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221F160;
	// b 0x8221ef78
	goto loc_8221EF78;
loc_8221F200:
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// b 0x8221f234
	goto loc_8221F234;
loc_8221F208:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + r23.u64;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// beq cr6,0x8221f22c
	if (ctx.cr6.eq) goto loc_8221F22C;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8221F22C;
	sub_822D4FA0(ctx, base);
loc_8221F22C:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
loc_8221F234:
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// blt cr6,0x8221f208
	if (ctx.cr6.lt) goto loc_8221F208;
loc_8221F23C:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_8223B5E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8223b5f4
	goto loc_8223B5F4;
loc_8223B5EC:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8223B5F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223b5ec
	if (!ctx.cr6.eq) goto loc_8223B5EC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8223BF48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8223BF50;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lwz r3,412(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 412);
	// bl 0x8223b1d0
	ctx.lr = 0x8223BF88;
	sub_8223B1D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8223bfac
	if (!ctx.cr0.lt) goto loc_8223BFAC;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// b 0x8223bfd4
	goto loc_8223BFD4;
loc_8223BFAC:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r29,400
	ctx.r11.s64 = r29.s64 + 400;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r10,404(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 404);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223bfcc
	if (ctx.cr6.eq) goto loc_8223BFCC;
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// b 0x8223bfd0
	goto loc_8223BFD0;
loc_8223BFCC:
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
loc_8223BFD0:
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
loc_8223BFD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8223E0A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x8223E0A8;
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
	// bl 0x823cd980
	ctx.lr = 0x8223E0C4;
	sub_823CD980(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223e134
	if (!ctx.cr6.gt) goto loc_8223E134;
	// addi r31,r28,24
	r31.s64 = r28.s64 + 24;
loc_8223E0D8:
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
loc_8223E0EC:
	// lwz r8,-8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223e104
	if (ctx.cr6.eq) goto loc_8223E104;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8223e13c
	if (ctx.cr6.eq) goto loc_8223E13C;
loc_8223E104:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x8223e0ec
	if (ctx.cr6.lt) goto loc_8223E0EC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223E118:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stwx r3,r11,r27
	REX_STORE_U32(ctx.r11.u32 + r27.u32, ctx.r3.u32);
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223e0d8
	if (ctx.cr6.lt) goto loc_8223E0D8;
loc_8223E134:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_8223E13C:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8223b5e0
	ctx.lr = 0x8223E148;
	sub_8223B5E0(ctx, base);
	// b 0x8223e118
	goto loc_8223E118;
}

DEFINE_REX_FUNC(sub_82245348) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x8225c508
	ctx.lr = 0x82245364;
	sub_8225C508(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82245388
	if (ctx.cr0.eq) goto loc_82245388;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82245388
	if (!ctx.cr6.eq) goto loc_82245388;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// bl 0x8225c3b8
	ctx.lr = 0x82245380;
	sub_8225C3B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82245390
	goto loc_82245390;
loc_82245388:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82245390:
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

DEFINE_REX_FUNC(sub_82245A40) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82245a54
	if (!ctx.cr6.eq) goto loc_82245A54;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82245A54:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82245D10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82245D18;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32163
	ctx.r8.s64 = -2107834368;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,24592
	r31.s64 = ctx.r11.s64 + 24592;
	// lwz r11,24640(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 24640);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82245d90
	if (!ctx.cr0.eq) goto loc_82245D90;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r10,-5708
	ctx.r9.s64 = ctx.r10.s64 + -5708;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,24640(r8)
	REX_STORE_U32(ctx.r8.u32 + 24640, ctx.r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x82268478
	ctx.lr = 0x82245D74;
	sub_82268478(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r11,r31,28
	ctx.r11.s64 = r31.s64 + 28;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
loc_82245D90:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82246B68) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x822455d0
	sub_822455D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82246BC0) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x8226e918
	sub_8226E918(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82246BF0) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x82263948
	sub_82263948(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82246C40) {
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
	// bl 0x82255b70
	ctx.lr = 0x82246C50;
	sub_82255B70(ctx, base);
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

DEFINE_REX_FUNC(sub_82247258) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822469c0
	ctx.lr = 0x82247278;
	sub_822469C0(ctx, base);
	// bl 0x822571b8
	ctx.lr = 0x8224727C;
	sub_822571B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82247294
	if (ctx.cr0.lt) goto loc_82247294;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8227ae40
	ctx.lr = 0x82247290;
	sub_8227AE40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82247294:
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

DEFINE_REX_FUNC(sub_82247CB0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82246220
	ctx.lr = 0x82247CD0;
	sub_82246220(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82247d00
	if (ctx.cr6.eq) goto loc_82247D00;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82247d00
	if (!ctx.cr6.eq) goto loc_82247D00;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x82247d00
	if (!ctx.cr6.lt) goto loc_82247D00;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82247d08
	goto loc_82247D08;
loc_82247D00:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82247D08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82248BA8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82246220
	ctx.lr = 0x82248BC0;
	sub_82246220(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82248c04
	if (ctx.cr0.lt) goto loc_82248C04;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82248bfc
	if (ctx.cr6.eq) goto loc_82248BFC;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x82248bfc
	if (!ctx.cr6.eq) goto loc_82248BFC;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x82246a38
	ctx.lr = 0x82248BF8;
	sub_82246A38(ctx, base);
	// b 0x82248c04
	goto loc_82248C04;
loc_82248BFC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82248C04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224A7D8) {
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
	// beq cr6,0x8224a800
	if (ctx.cr6.eq) goto loc_8224A800;
	// bl 0x82270448
	ctx.lr = 0x8224A7F8;
	sub_82270448(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8224A800;
	sub_82255B70(ctx, base);
loc_8224A800:
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

DEFINE_REX_FUNC(sub_8224B590) {
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
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r31,r11,25356
	r31.s64 = ctx.r11.s64 + 25356;
	// lwz r11,25376(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 25376);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224b5dc
	if (!ctx.cr0.eq) goto loc_8224B5DC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,25376(r10)
	REX_STORE_U32(ctx.r10.u32 + 25376, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8227ad28
	ctx.lr = 0x8224B5D0;
	sub_8227AD28(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15064
	ctx.r3.s64 = ctx.r11.s64 + 15064;
	// bl 0x822d5848
	ctx.lr = 0x8224B5DC;
	sub_822D5848(ctx, base);
loc_8224B5DC:
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

DEFINE_REX_FUNC(sub_8224CD00) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82246220
	ctx.lr = 0x8224CD18;
	sub_82246220(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8224cd4c
	if (ctx.cr0.lt) goto loc_8224CD4C;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224cd44
	if (ctx.cr6.eq) goto loc_8224CD44;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8224cd44
	if (!ctx.cr6.eq) goto loc_8224CD44;
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x82248a48
	ctx.lr = 0x8224CD40;
	sub_82248A48(ctx, base);
	// b 0x8224cd4c
	goto loc_8224CD4C;
loc_8224CD44:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8224CD4C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224E388) {
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
	// beq cr6,0x8224e3bc
	if (ctx.cr6.eq) goto loc_8224E3BC;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x8225d438
	ctx.lr = 0x8224E3AC;
	sub_8225D438(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82255b70
	ctx.lr = 0x8224E3B4;
	sub_82255B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8224E3BC;
	sub_82255B70(ctx, base);
loc_8224E3BC:
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

DEFINE_REX_FUNC(sub_8224F1C0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8224f1d8
	if (ctx.cr6.eq) goto loc_8224F1D8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_8224F1D8:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// b 0x8224e940
	sub_8224E940(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82250E08) {
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
	// bl 0x822d4e6c
	ctx.lr = 0x82250E10;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82250e3c
	if (!ctx.cr6.eq) goto loc_82250E3C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x822510e8
	goto loc_822510E8;
loc_82250E3C:
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r22,0(r21)
	REX_STORE_U32(r21.u32 + 0, r22.u32);
	// bne cr6,0x82250e54
	if (!ctx.cr6.eq) goto loc_82250E54;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// b 0x82250e60
	goto loc_82250E60;
loc_82250E54:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224d830
	ctx.lr = 0x82250E5C;
	sub_8224D830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82250E60:
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82250eb4
	if (!ctx.cr6.eq) goto loc_82250EB4;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r3,23836(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 23836);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82250ea8
	if (ctx.cr6.eq) goto loc_82250EA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82250E94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82250ea8
	if (ctx.cr0.lt) goto loc_82250EA8;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82250eb4
	if (!ctx.cr6.eq) goto loc_82250EB4;
loc_82250EA8:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// b 0x822510e8
	goto loc_822510E8;
loc_82250EB4:
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82250efc
	if (ctx.cr6.eq) goto loc_82250EFC;
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// bl 0x822468a0
	ctx.lr = 0x82250EC8;
	sub_822468A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82250efc
	if (ctx.cr0.eq) goto loc_82250EFC;
	// stw r24,8(r25)
	REX_STORE_U32(r25.u32 + 8, r24.u32);
	// stw r27,12(r25)
	REX_STORE_U32(r25.u32 + 12, r27.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// b 0x82250ee8
	goto loc_82250EE8;
loc_82250EE0:
	// stw r27,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r27.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82250EE8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82250ee0
	if (!ctx.cr6.eq) goto loc_82250EE0;
	// stw r25,0(r21)
	REX_STORE_U32(r21.u32 + 0, r25.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822510e8
	goto loc_822510E8;
loc_82250EFC:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r23,r11,23768
	r23.s64 = ctx.r11.s64 + 23768;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824d438c
	ctx.lr = 0x82250F0C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r30,r11,23852
	r30.s64 = ctx.r11.s64 + 23852;
	// lwz r31,12(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82250f2c
	if (ctx.cr6.eq) goto loc_82250F2C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// b 0x82250f38
	goto loc_82250F38;
loc_82250F2C:
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x82255b48
	ctx.lr = 0x82250F34;
	sub_82255B48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82250F38:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824d437c
	ctx.lr = 0x82250F40;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82250f54
	if (!ctx.cr6.eq) goto loc_82250F54;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x822510e8
	goto loc_822510E8;
loc_82250F54:
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x82250F64;
	sub_822D5870(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r28,r11,23872
	r28.s64 = ctx.r11.s64 + 23872;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8227bcf8
	ctx.lr = 0x82250F78;
	sub_8227BCF8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82250fdc
	if (!ctx.cr0.eq) goto loc_82250FDC;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824d438c
	ctx.lr = 0x82250F88;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82250fbc
	if (ctx.cr6.lt) goto loc_82250FBC;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82250fbc
	if (!ctx.cr6.lt) goto loc_82250FBC;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// b 0x82250fc4
	goto loc_82250FC4;
loc_82250FBC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x82250FC4;
	sub_82255B70(ctx, base);
loc_82250FC4:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
loc_82250FCC:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824d437c
	ctx.lr = 0x82250FD4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x822510e8
	goto loc_822510E8;
loc_82250FDC:
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x82250fec
	if (!ctx.cr6.eq) goto loc_82250FEC;
	// mr r27,r31
	r27.u64 = r31.u64;
loc_82250FEC:
	// stw r26,24(r31)
	REX_STORE_U32(r31.u32 + 24, r26.u32);
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// stw r24,8(r31)
	REX_STORE_U32(r31.u32 + 8, r24.u32);
	// stw r27,12(r31)
	REX_STORE_U32(r31.u32 + 12, r27.u32);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r11,40(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82251084
	if (ctx.cr6.eq) goto loc_82251084;
	// addi r7,r31,4
	ctx.r7.s64 = r31.s64 + 4;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82250e08
	ctx.lr = 0x82251024;
	sub_82250E08(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bge 0x82251084
	if (!ctx.cr0.lt) goto loc_82251084;
loc_8225102C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8227be50
	ctx.lr = 0x82251038;
	sub_8227BE50(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824d438c
	ctx.lr = 0x82251040;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82251074
	if (ctx.cr6.lt) goto loc_82251074;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82251074
	if (!ctx.cr6.lt) goto loc_82251074;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// b 0x8225107c
	goto loc_8225107C;
loc_82251074:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8225107C;
	sub_82255B70(ctx, base);
loc_8225107C:
	// mr r31,r27
	r31.u64 = r27.u64;
	// b 0x82250fcc
	goto loc_82250FCC;
loc_82251084:
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225109C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bge 0x822510b8
	if (!ctx.cr0.lt) goto loc_822510B8;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225102c
	if (ctx.cr6.eq) goto loc_8225102C;
	// bl 0x82249b00
	ctx.lr = 0x822510B4;
	sub_82249B00(ctx, base);
	// b 0x8225102c
	goto loc_8225102C;
loc_822510B8:
	// addi r11,r26,52
	ctx.r11.s64 = r26.s64 + 52;
loc_822510BC:
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
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
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
	// bne 0x822510bc
	if (!ctx.cr0.eq) goto loc_822510BC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r31,0(r21)
	REX_STORE_U32(r21.u32 + 0, r31.u32);
loc_822510E8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_8225C4B0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8225c4c8
	if (!ctx.cr6.eq) goto loc_8225C4C8;
	// stw r4,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// b 0x8225c4f0
	goto loc_8225C4F0;
loc_8225C4C8:
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8225c4e0
	goto loc_8225C4E0;
loc_8225C4D4:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// lwz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
loc_8225C4E0:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8225c4d4
	if (!ctx.cr6.eq) goto loc_8225C4D4;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r10,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r10.u32);
loc_8225C4F0:
	// stw r9,40(r4)
	REX_STORE_U32(ctx.r4.u32 + 40, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,240(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 240);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,240(r9)
	REX_STORE_U32(ctx.r9.u32 + 240, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225D3E0) {
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
	// lbz r11,188(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 188);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8225d424
	if (!ctx.cr0.eq) goto loc_8225D424;
	// bl 0x822094c8
	ctx.lr = 0x8225D404;
	sub_822094C8(ctx, base);
	// stw r3,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r3.u32);
	// lis r4,-21829
	ctx.r4.s64 = -1430585344;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,16
	ctx.r5.s64 = 16;
	// ori r4,r4,52445
	ctx.r4.u64 = ctx.r4.u64 | 52445;
	// bl 0x822786c8
	ctx.lr = 0x8225D41C;
	sub_822786C8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,188(r31)
	REX_STORE_U8(r31.u32 + 188, ctx.r11.u8);
loc_8225D424:
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

DEFINE_REX_FUNC(sub_8225DFD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8225DFD8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// bl 0x8225ddf0
	ctx.lr = 0x8225DFF4;
	sub_8225DDF0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225de30
	ctx.lr = 0x8225E004;
	sub_8225DE30(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8225E930) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82246fd8
	ctx.lr = 0x8225E950;
	sub_82246FD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x8225E958;
	sub_822469C0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8224db90
	ctx.lr = 0x8225E960;
	sub_8224DB90(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
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

DEFINE_REX_FUNC(sub_82260208) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82262600) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8225e988
	ctx.lr = 0x82262634;
	sub_8225E988(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x8226264c
	if (!ctx.cr6.eq) goto loc_8226264C;
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// beq cr6,0x822626a4
	if (ctx.cr6.eq) goto loc_822626A4;
loc_8226264C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82258b88
	ctx.lr = 0x8226265C;
	sub_82258B88(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,23544(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23544);
	// bl 0x82246920
	ctx.lr = 0x8226266C;
	sub_82246920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822626a4
	if (ctx.cr0.eq) goto loc_822626A4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82246220
	ctx.lr = 0x8226267C;
	sub_82246220(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822626a4
	if (ctx.cr6.eq) goto loc_822626A4;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8225c960
	ctx.lr = 0x82262694;
	sub_8225C960(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82260768
	ctx.lr = 0x822626A4;
	sub_82260768(ctx, base);
loc_822626A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822663E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822663E8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x8226659c
	if (ctx.cr6.eq) goto loc_8226659C;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x82266564
	if (ctx.cr6.eq) goto loc_82266564;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// beq cr6,0x822664fc
	if (ctx.cr6.eq) goto loc_822664FC;
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// beq cr6,0x822664f0
	if (ctx.cr6.eq) goto loc_822664F0;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bne cr6,0x822664e4
	if (!ctx.cr6.eq) goto loc_822664E4;
	// lwz r30,16(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255e88
	ctx.lr = 0x82266430;
	sub_82255E88(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// rlwinm. r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822664ac
	if (ctx.cr0.eq) goto loc_822664AC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82266498
	if (ctx.cr6.eq) goto loc_82266498;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,22532
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22532, ctx.xer);
	// beq cr6,0x82266498
	if (ctx.cr6.eq) goto loc_82266498;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x822664d0
	if (ctx.cr6.eq) goto loc_822664D0;
	// cmplwi cr6,r11,22533
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22533, ctx.xer);
	// b 0x822664cc
	goto loc_822664CC;
loc_82266464:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822664e4
	if (ctx.cr0.eq) goto loc_822664E4;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8226648c
	if (ctx.cr0.eq) goto loc_8226648C;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822664e4
	if (ctx.cr0.eq) goto loc_822664E4;
loc_8226648C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822660c8
	ctx.lr = 0x82266494;
	sub_822660C8(ctx, base);
	// b 0x822664e8
	goto loc_822664E8;
loc_82266498:
	// addi r5,r29,8
	ctx.r5.s64 = r29.s64 + 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82266370
	ctx.lr = 0x822664A8;
	sub_82266370(ctx, base);
	// b 0x822664e8
	goto loc_822664E8;
loc_822664AC:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82266498
	if (ctx.cr6.eq) goto loc_82266498;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,22535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22535, ctx.xer);
	// beq cr6,0x82266498
	if (ctx.cr6.eq) goto loc_82266498;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x822664d0
	if (ctx.cr6.eq) goto loc_822664D0;
	// cmplwi cr6,r11,22534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22534, ctx.xer);
loc_822664CC:
	// bne cr6,0x822664e4
	if (!ctx.cr6.eq) goto loc_822664E4;
loc_822664D0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82266464
	if (!ctx.cr6.eq) goto loc_82266464;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82266464
	if (!ctx.cr0.eq) goto loc_82266464;
loc_822664E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822664E8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ed8
	return;
loc_822664F0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// b 0x822664e4
	goto loc_822664E4;
loc_822664FC:
	// li r4,3000
	ctx.r4.s64 = 3000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8225da70
	ctx.lr = 0x82266508;
	sub_8225DA70(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8224da00
	ctx.lr = 0x82266514;
	sub_8224DA00(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82266528
	if (!ctx.cr6.eq) goto loc_82266528;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822662c0
	ctx.lr = 0x82266528;
	sub_822662C0(ctx, base);
loc_82266528:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822664e4
	if (ctx.cr6.lt) goto loc_822664E4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82266550
	if (ctx.cr6.eq) goto loc_82266550;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// ble cr6,0x82266554
	if (!ctx.cr6.gt) goto loc_82266554;
loc_82266550:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82266554:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822661d0
	ctx.lr = 0x82266560;
	sub_822661D0(ctx, base);
	// b 0x822664e4
	goto loc_822664E4;
loc_82266564:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x82266570;
	sub_822469C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x8226657C;
	sub_822469C0(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x822664e4
	if (!ctx.cr6.eq) goto loc_822664E4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822664e4
	if (ctx.cr0.eq) goto loc_822664E4;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x822664e4
	goto loc_822664E4;
loc_8226659C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822664e4
	if (ctx.cr6.eq) goto loc_822664E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r30,16(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 16);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x822665C0;
	sub_822469C0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8225de80
	ctx.lr = 0x822665DC;
	sub_8225DE80(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82256918
	ctx.lr = 0x822665F0;
	sub_82256918(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8224db90
	ctx.lr = 0x822665FC;
	sub_8224DB90(ctx, base);
	// lbz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U8(r30.u32 + 4);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82259da0
	ctx.lr = 0x82266608;
	sub_82259DA0(ctx, base);
	// b 0x822664e8
	goto loc_822664E8;
}

DEFINE_REX_FUNC(sub_82270E78) {
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
	// bl 0x822d4e84
	ctx.lr = 0x82270E80;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// bgt cr6,0x82271464
	if (ctx.cr6.gt) goto loc_82271464;
	// beq cr6,0x82271420
	if (ctx.cr6.eq) goto loc_82271420;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x8227137c
	if (ctx.cr6.gt) goto loc_8227137C;
	// beq cr6,0x8227132c
	if (ctx.cr6.eq) goto loc_8227132C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x822712c4
	if (ctx.cr6.eq) goto loc_822712C4;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x822712b4
	if (ctx.cr6.eq) goto loc_822712B4;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x822711b0
	if (ctx.cr6.eq) goto loc_822711B0;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x82270f24
	if (ctx.cr6.eq) goto loc_82270F24;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x822716e0
	if (!ctx.cr6.eq) goto loc_822716E0;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r30,16(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 16);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822716e0
	if (!ctx.cr6.eq) goto loc_822716E0;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x82270EEC;
	sub_822469C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x822716e0
	if (!ctx.cr6.eq) goto loc_822716E0;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x822716e0
	if (ctx.cr6.eq) goto loc_822716E0;
	// lwz r5,68(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82259568
	ctx.lr = 0x82270F20;
	sub_82259568(ctx, base);
	// b 0x822716e0
	goto loc_822716E0;
loc_82270F24:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82270ff0
	if (ctx.cr6.eq) goto loc_82270FF0;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82270f6c
	if (ctx.cr6.eq) goto loc_82270F6C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x822716e0
	if (!ctx.cr6.eq) goto loc_822716E0;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82257030
	ctx.lr = 0x82270F54;
	sub_82257030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822716e0
	if (!ctx.cr0.eq) goto loc_822716E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82256228
	ctx.lr = 0x82270F68;
	sub_82256228(ctx, base);
	// b 0x822716e0
	goto loc_822716E0;
loc_82270F6C:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r30,0(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82256fb0
	ctx.lr = 0x82270F84;
	sub_82256FB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822716e0
	if (ctx.cr0.eq) goto loc_822716E0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82270fa8
	if (ctx.cr6.eq) goto loc_82270FA8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82257030
	ctx.lr = 0x82270FA0;
	sub_82257030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82270fb4
	if (!ctx.cr0.eq) goto loc_82270FB4;
loc_82270FA8:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82256228
	ctx.lr = 0x82270FB4;
	sub_82256228(ctx, base);
loc_82270FB4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822716e0
	if (ctx.cr6.eq) goto loc_822716E0;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x822562b8
	ctx.lr = 0x82270FCC;
	sub_822562B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x822562b8
	ctx.lr = 0x82270FD8;
	sub_822562B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x82270FE4;
	sub_822469C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// b 0x8227163c
	goto loc_8227163C;
loc_82270FF0:
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// beq cr6,0x822716e0
	if (ctx.cr6.eq) goto loc_822716E0;
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82256548
	ctx.lr = 0x8227100C;
	sub_82256548(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82256518
	ctx.lr = 0x82271018;
	sub_82256518(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822710e8
	if (!ctx.cr0.eq) goto loc_822710E8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x822710e8
	if (!ctx.cr6.eq) goto loc_822710E8;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,23620(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23620);
	// bl 0x82246920
	ctx.lr = 0x82271038;
	sub_82246920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822716e0
	if (ctx.cr0.eq) goto loc_822716E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8225eae0
	ctx.lr = 0x8227104C;
	sub_8225EAE0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x82271060
	if (!ctx.cr0.lt) goto loc_82271060;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x822716e4
	goto loc_822716E4;
loc_82271060:
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8225f440
	ctx.lr = 0x82271078;
	sub_8225F440(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822716e4
	if (ctx.cr0.lt) goto loc_822716E4;
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822716e0
	if (ctx.cr6.eq) goto loc_822716E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8225e930
	ctx.lr = 0x822710A4;
	sub_8225E930(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x8225b208
	ctx.lr = 0x822710B4;
	sub_8225B208(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822716e4
	if (ctx.cr0.lt) goto loc_822716E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822574b8
	ctx.lr = 0x822710CC;
	sub_822574B8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822574b8
	ctx.lr = 0x822710DC;
	sub_822574B8(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82271198
	goto loc_82271198;
loc_822710E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82271118
	if (ctx.cr6.eq) goto loc_82271118;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x82271100;
	sub_822469C0(ctx, base);
	// bl 0x82257d18
	ctx.lr = 0x82271104;
	sub_82257D18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,253
	ctx.r5.s64 = 253;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8225b7e8
	ctx.lr = 0x82271114;
	sub_8225B7E8(ctx, base);
	// b 0x822716e0
	goto loc_822716E0;
loc_82271118:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82256578
	ctx.lr = 0x82271128;
	sub_82256578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8225e930
	ctx.lr = 0x82271134;
	sub_8225E930(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x8225b208
	ctx.lr = 0x82271144;
	sub_8225B208(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822716e4
	if (ctx.cr0.lt) goto loc_822716E4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822565e8
	ctx.lr = 0x8227115C;
	sub_822565E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82271184
	if (ctx.cr0.lt) goto loc_82271184;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822574b8
	ctx.lr = 0x82271174;
	sub_822574B8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822574b8
	ctx.lr = 0x82271184;
	sub_822574B8(ctx, base);
loc_82271184:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822565b0
	ctx.lr = 0x82271190;
	sub_822565B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_82271198:
	// li r6,253
	ctx.r6.s64 = 253;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8225b5f8
	ctx.lr = 0x822711A4;
	sub_8225B5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822716e0
	if (!ctx.cr0.lt) goto loc_822716E0;
	// b 0x822716e4
	goto loc_822716E4;
loc_822711B0:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r29,16(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x822711C8;
	sub_822469C0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8225de80
	ctx.lr = 0x822711E4;
	sub_8225DE80(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82256918
	ctx.lr = 0x822711F8;
	sub_82256918(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8224db90
	ctx.lr = 0x82271204;
	sub_8224DB90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225cd40
	ctx.lr = 0x8227120C;
	sub_8225CD40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8227122c
	if (ctx.cr0.eq) goto loc_8227122C;
	// lbz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U8(r29.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82259da0
	ctx.lr = 0x82271220;
	sub_82259DA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82271230
	if (ctx.cr0.lt) goto loc_82271230;
	// b 0x822716e0
	goto loc_822716E0;
loc_8227122C:
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
loc_82271230:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82271260
	if (ctx.cr6.eq) goto loc_82271260;
	// bl 0x8227d000
	ctx.lr = 0x82271244;
	sub_8227D000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822712a0
	if (ctx.cr0.eq) goto loc_822712A0;
	// lbz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U8(r29.u32 + 4);
	// bl 0x82259da0
	ctx.lr = 0x82271254;
	sub_82259DA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822712a0
	if (ctx.cr0.lt) goto loc_822712A0;
	// b 0x822716e0
	goto loc_822716E0;
loc_82271260:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82256990
	ctx.lr = 0x82271268;
	sub_82256990(ctx, base);
	// b 0x82271294
	goto loc_82271294;
loc_8227126C:
	// bl 0x82255fb0
	ctx.lr = 0x82271270;
	sub_82255FB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U8(r29.u32 + 4);
	// bl 0x8225ae58
	ctx.lr = 0x82271280;
	sub_8225AE58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822716e0
	if (!ctx.cr0.lt) goto loc_822716E0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82256a80
	ctx.lr = 0x82271294;
	sub_82256A80(ctx, base);
loc_82271294:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227126c
	if (!ctx.cr6.eq) goto loc_8227126C;
loc_822712A0:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x822712A8;
	sub_822469C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8225f008
	ctx.lr = 0x822712B0;
	sub_8225F008(ctx, base);
	// b 0x822716e0
	goto loc_822716E0;
loc_822712B4:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
loc_822712BC:
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// b 0x822716e0
	goto loc_822716E0;
loc_822712C4:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r4,23556(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23556);
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82246920
	ctx.lr = 0x822712D8;
	sub_82246920(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822716e0
	if (ctx.cr0.eq) goto loc_822716E0;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8225ccd0
	ctx.lr = 0x822712F0;
	sub_8225CCD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82256348
	ctx.lr = 0x822712F8;
	sub_82256348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822716e0
	if (ctx.cr0.eq) goto loc_822716E0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822469c0
	ctx.lr = 0x82271308;
	sub_822469C0(ctx, base);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x822783a0
	ctx.lr = 0x82271318;
	sub_822783A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822716e0
	if (!ctx.cr0.eq) goto loc_822716E0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x822716e4
	goto loc_822716E4;
loc_8227132C:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r30,16(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,23544(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23544);
	// bl 0x82246920
	ctx.lr = 0x82271340;
	sub_82246920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822716e0
	if (ctx.cr0.eq) goto loc_822716E0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82246220
	ctx.lr = 0x82271350;
	sub_82246220(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822716e0
	if (ctx.cr6.eq) goto loc_822716E0;
	// lfs f2,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8225c960
	ctx.lr = 0x82271368;
	sub_8225C960(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f2,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82260768
	ctx.lr = 0x82271378;
	sub_82260768(ctx, base);
	// b 0x822716e0
	goto loc_822716E0;
loc_8227137C:
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// beq cr6,0x82271400
	if (ctx.cr6.eq) goto loc_82271400;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// beq cr6,0x822713dc
	if (ctx.cr6.eq) goto loc_822713DC;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// beq cr6,0x822713c4
	if (ctx.cr6.eq) goto loc_822713C4;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bne cr6,0x822716e0
	if (!ctx.cr6.eq) goto loc_822716E0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x822713BC;
	sub_822469C0(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// b 0x822716e0
	goto loc_822716E0;
loc_822713C4:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822716e0
	goto loc_822716E0;
loc_822713DC:
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
loc_822713E0:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82246a38
	ctx.lr = 0x822713EC;
	sub_82246A38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822716e4
	if (ctx.cr0.lt) goto loc_822716E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// b 0x822716e0
	goto loc_822716E0;
loc_82271400:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
loc_82271404:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822716e0
	if (ctx.cr6.eq) goto loc_822716E0;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// b 0x822716e0
	goto loc_822716E0;
loc_82271420:
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822708c0
	ctx.lr = 0x82271430;
	sub_822708C0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8227145c
	if (ctx.cr0.lt) goto loc_8227145C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8227145c
	if (!ctx.cr6.eq) goto loc_8227145C;
	// lis r4,-21829
	ctx.r4.s64 = -1430585344;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,250
	ctx.r5.s64 = 250;
	// ori r4,r4,52445
	ctx.r4.u64 = ctx.r4.u64 | 52445;
	// bl 0x822786c8
	ctx.lr = 0x8227145C;
	sub_822786C8(ctx, base);
loc_8227145C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x822716e4
	goto loc_822716E4;
loc_82271464:
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bgt cr6,0x82271598
	if (ctx.cr6.gt) goto loc_82271598;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bge cr6,0x82271550
	if (!ctx.cr6.lt) goto loc_82271550;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x82271524
	if (ctx.cr6.eq) goto loc_82271524;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// beq cr6,0x82271508
	if (ctx.cr6.eq) goto loc_82271508;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x822714ac
	if (ctx.cr6.eq) goto loc_822714AC;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x822714a4
	if (ctx.cr6.eq) goto loc_822714A4;
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// bne cr6,0x822716e0
	if (!ctx.cr6.eq) goto loc_822716E0;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// b 0x822713e0
	goto loc_822713E0;
loc_822714A4:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// b 0x82271404
	goto loc_82271404;
loc_822714AC:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822716e0
	if (!ctx.cr0.eq) goto loc_822716E0;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r4,23556(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23556);
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82246920
	ctx.lr = 0x822714CC;
	sub_82246920(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822716e0
	if (ctx.cr0.eq) goto loc_822716E0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8225cc70
	ctx.lr = 0x822714DC;
	sub_8225CC70(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822562f8
	ctx.lr = 0x822714EC;
	sub_822562F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822469c0
	ctx.lr = 0x822714F4;
	sub_822469C0(ctx, base);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x8226c858
	ctx.lr = 0x82271504;
	sub_8226C858(ctx, base);
	// b 0x822716e0
	goto loc_822716E0;
loc_82271508:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82261cb0
	ctx.lr = 0x82271518;
	sub_82261CB0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x822712bc
	goto loc_822712BC;
loc_82271524:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x822716e0
	if (!ctx.cr6.eq) goto loc_822716E0;
	// lis r4,-21829
	ctx.r4.s64 = -1430585344;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ori r4,r4,52445
	ctx.r4.u64 = ctx.r4.u64 | 52445;
	// bl 0x82278790
	ctx.lr = 0x8227154C;
	sub_82278790(ctx, base);
	// b 0x822716e0
	goto loc_822716E0;
loc_82271550:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822716e0
	if (!ctx.cr6.gt) goto loc_822716E0;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_82271564:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// bl 0x8224da00
	ctx.lr = 0x82271574;
	sub_8224DA00(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822716e0
	if (!ctx.cr6.eq) goto loc_822716E0;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82271564
	if (ctx.cr6.lt) goto loc_82271564;
	// b 0x822716e0
	goto loc_822716E0;
loc_82271598:
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// beq cr6,0x8227169c
	if (ctx.cr6.eq) goto loc_8227169C;
	// cmplwi cr6,r11,42
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 42, ctx.xer);
	// beq cr6,0x82271688
	if (ctx.cr6.eq) goto loc_82271688;
	// cmplwi cr6,r11,2007
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2007, ctx.xer);
	// beq cr6,0x82271644
	if (ctx.cr6.eq) goto loc_82271644;
	// cmplwi cr6,r11,2008
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2008, ctx.xer);
	// bne cr6,0x822716e0
	if (!ctx.cr6.eq) goto loc_822716E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8225ebd8
	ctx.lr = 0x822715D0;
	sub_8225EBD8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x822715e4
	if (!ctx.cr0.eq) goto loc_822715E4;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x822716e4
	goto loc_822716E4;
loc_822715E4:
	// lwz r29,8(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// beq cr6,0x822716e0
	if (ctx.cr6.eq) goto loc_822716E0;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82258638
	ctx.lr = 0x822715FC;
	sub_82258638(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82271614
	if (ctx.cr0.eq) goto loc_82271614;
	// bl 0x822560a0
	ctx.lr = 0x82271608;
	sub_822560A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82259da0
	ctx.lr = 0x82271614;
	sub_82259DA0(ctx, base);
loc_82271614:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822562b8
	ctx.lr = 0x8227161C;
	sub_822562B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822562b8
	ctx.lr = 0x82271628;
	sub_822562B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x82271634;
	sub_822469C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_8227163C:
	// bl 0x8225eb88
	ctx.lr = 0x82271640;
	sub_8225EB88(ctx, base);
	// b 0x822716e0
	goto loc_822716E0;
loc_82271644:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// li r28,-1
	r28.s64 = -1;
	// li r29,0
	r29.s64 = 0;
	// bl 0x8225cd40
	ctx.lr = 0x8227165C;
	sub_8225CD40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82271674
	if (ctx.cr0.eq) goto loc_82271674;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x822562b8
	ctx.lr = 0x8227166C;
	sub_822562B8(ctx, base);
	// lwz r29,8(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82271674:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// b 0x822716e0
	goto loc_822716E0;
loc_82271688:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bl 0x82261d68
	ctx.lr = 0x82271698;
	sub_82261D68(ctx, base);
	// b 0x822716e0
	goto loc_822716E0;
loc_8227169C:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lis r10,-21829
	ctx.r10.s64 = -1430585344;
	// ori r4,r10,52445
	ctx.r4.u64 = ctx.r10.u64 | 52445;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x822716e0
	if (!ctx.cr6.eq) goto loc_822716E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82278790
	ctx.lr = 0x822716C4;
	sub_82278790(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82256838
	ctx.lr = 0x822716CC;
	sub_82256838(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822716e0
	if (!ctx.cr0.eq) goto loc_822716E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822567e0
	ctx.lr = 0x822716E0;
	sub_822567E0(ctx, base);
loc_822716E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822716E4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82291450) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// li r8,12
	ctx.r8.s64 = 12;
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,48
	ctx.r9.s64 = 48;
	// lvlx128 v62,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r10,32
	ctx.r10.s64 = 32;
	// vspltisw128 v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_set1_epi32(int(0x0)));
	// li r7,64
	ctx.r7.s64 = 64;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvrx128 v60,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r8,4
	ctx.r8.s64 = 4;
	// lvrx128 v59,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vupkd3d128 v61,v61,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v61.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v61.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v61 = vTemp;
	// vsldoi128 v60,v60,v60,4
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 12));
	// lvlx128 v58,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v0,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvlx128 v57,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v59,r7,r5
	temp.u32 = ctx.r7.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r9,8
	ctx.r9.s64 = 8;
	// vor128 v13,v57,v59
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvrx128 v59,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v63,v63,v60
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// lvlx128 v60,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v60,v59
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvrx128 v60,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v11,v62,v60
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vspltw128 v9,v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x0));
	// vspltw128 v10,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v8,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v7,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vmaddfp v0,v0,v10,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v8,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v7,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vor128 v63,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vspltw128 v11,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vrefp v0,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v11.f32)));
	// vnmsubfp v8,v11,v0,v9
	simde_mm_store_ps(ctx.v8.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmaddfp v0,v0,v8,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v9,v11,v0,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v10,v0,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v9,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v12,v13,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v63,v63,v12
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v61,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v63,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// stvewx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229B948) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82255b70
	sub_82255B70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8229BA58) {
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
	// bl 0x822d4e58
	ctx.lr = 0x8229BA60;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,52(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r29,0(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lwz r24,4(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// lwz r27,32(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r28,28(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// bge cr6,0x8229ba9c
	if (!ctx.cr6.lt) goto loc_8229BA9C;
	// subf r11,r26,r11
	ctx.r11.u64 = ctx.r11.u64 - r26.u64;
	// addi r23,r11,-1
	r23.s64 = ctx.r11.s64 + -1;
	// b 0x8229baa4
	goto loc_8229BAA4;
loc_8229BA9C:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// subf r23,r26,r11
	r23.u64 = ctx.r11.u64 - r26.u64;
loc_8229BAA4:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// bgt cr6,0x8229c1ac
	if (ctx.cr6.gt) goto loc_8229C1AC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r21,0
	r21.s64 = 0;
	// li r18,6
	r18.s64 = 6;
	// li r16,7
	r16.s64 = 7;
	// li r20,9
	r20.s64 = 9;
	// addi r19,r11,22536
	r19.s64 = ctx.r11.s64 + 22536;
	// addi r17,r10,17160
	r17.s64 = ctx.r10.s64 + 17160;
loc_8229BAD0:
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// rlwinm r0,r9,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,17240
	ctx.r12.s64 = ctx.r12.s64 + 17240;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32214
	ctx.r12.s64 = -2111176704;
	// addi r12,r12,-17672
	ctx.r12.s64 = ctx.r12.s64 + -17672;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_8229BB1C;
	case 1:
		goto loc_8229BC10;
	case 2:
		goto loc_8229BC64;
	case 3:
		goto loc_8229BD9C;
	case 4:
		goto loc_8229BE78;
	case 5:
		goto loc_8229BEF4;
	case 6:
		goto loc_8229C108;
	case 7:
		goto loc_8229C2C4;
	case 8:
		goto loc_8229C2F4;
	case 9:
		goto loc_8229C2FC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8229BAF8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8229c1ec
	if (ctx.cr6.eq) goto loc_8229C1EC;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// mr r22,r21
	r22.u64 = r21.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r11,r11,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r28.u8 & 0x3F));
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// or r27,r11,r27
	r27.u64 = ctx.r11.u64 | r27.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8229BB1C:
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(r28.u32, 3, ctx.xer);
	// blt cr6,0x8229baf8
	if (ctx.cr6.lt) goto loc_8229BAF8;
	// clrlwi r10,r27,31
	ctx.r10.u64 = r27.u32 & 0x1;
	// rlwinm r11,r27,31,30,31
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x3;
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8229bbcc
	if (ctx.cr6.lt) goto loc_8229BBCC;
	// beq cr6,0x8229bb80
	if (ctx.cr6.eq) goto loc_8229BB80;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8229bb70
	if (ctx.cr6.lt) goto loc_8229BB70;
	// bne cr6,0x8229c1a0
	if (!ctx.cr6.eq) goto loc_8229C1A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r20,0(r31)
	REX_STORE_U32(r31.u32 + 0, r20.u32);
	// rlwinm r10,r27,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,17356
	ctx.r11.s64 = ctx.r11.s64 + 17356;
	// addi r9,r28,-3
	ctx.r9.s64 = r28.s64 + -3;
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// b 0x8229c1b8
	goto loc_8229C1B8;
loc_8229BB70:
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwinm r27,r27,29,3,31
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r28,r28,-3
	r28.s64 = r28.s64 + -3;
	// b 0x8229bc5c
	goto loc_8229BC5C;
loc_8229BB80:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x8229d198
	ctx.lr = 0x8229BB98;
	sub_8229D198(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8229c388
	ctx.lr = 0x8229BBB0;
	sub_8229C388(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8229c200
	if (ctx.cr0.eq) goto loc_8229C200;
	// rlwinm r27,r27,29,3,31
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r18,0(r31)
	REX_STORE_U32(r31.u32 + 0, r18.u32);
	// addi r28,r28,-3
	r28.s64 = r28.s64 + -3;
	// b 0x8229c1a0
	goto loc_8229C1A0;
loc_8229BBCC:
	// addi r11,r28,-3
	ctx.r11.s64 = r28.s64 + -3;
	// rlwinm r10,r27,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// li r8,1
	ctx.r8.s64 = 1;
	// srw r27,r10,r9
	r27.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// subf r28,r9,r11
	r28.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// b 0x8229c1a0
	goto loc_8229C1A0;
loc_8229BBEC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8229c1ec
	if (ctx.cr6.eq) goto loc_8229C1EC;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// mr r22,r21
	r22.u64 = r21.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r11,r11,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r28.u8 & 0x3F));
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// or r27,r11,r27
	r27.u64 = ctx.r11.u64 | r27.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8229BC10:
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(r28.u32, 32, ctx.xer);
	// blt cr6,0x8229bbec
	if (ctx.cr6.lt) goto loc_8229BBEC;
	// not r10,r27
	ctx.r10.u64 = ~r27.u64;
	// clrlwi r11,r27,16
	ctx.r11.u64 = r27.u32 & 0xFFFF;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8229c208
	if (!ctx.cr6.eq) goto loc_8229C208;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r28,r21
	r28.u64 = r21.u64;
	// mr r27,r21
	r27.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229bc4c
	if (ctx.cr6.eq) goto loc_8229BC4C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8229bc5c
	goto loc_8229BC5C;
loc_8229BC4C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 & r16.u64;
loc_8229BC5C:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8229c1a0
	goto loc_8229C1A0;
loc_8229BC64:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8229c1ec
	if (ctx.cr6.eq) goto loc_8229C1EC;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x8229bd24
	if (!ctx.cr6.eq) goto loc_8229BD24;
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8229bcb0
	if (!ctx.cr6.eq) goto loc_8229BCB0;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229bcb0
	if (ctx.cr6.eq) goto loc_8229BCB0;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// bge cr6,0x8229bca4
	if (!ctx.cr6.lt) goto loc_8229BCA4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r23,r11,-1
	r23.s64 = ctx.r11.s64 + -1;
	// b 0x8229bca8
	goto loc_8229BCA8;
loc_8229BCA4:
	// subf r23,r26,r9
	r23.u64 = ctx.r9.u64 - r26.u64;
loc_8229BCA8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x8229bd24
	if (!ctx.cr6.eq) goto loc_8229BD24;
loc_8229BCB0:
	// stw r26,52(r31)
	REX_STORE_U32(r31.u32 + 52, r26.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82404240
	ctx.lr = 0x8229BCC4;
	sub_82404240(ctx, base);
	// lwz r26,52(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8229bce4
	if (!ctx.cr6.lt) goto loc_8229BCE4;
	// subf r10,r26,r11
	ctx.r10.u64 = ctx.r11.u64 - r26.u64;
	// addi r23,r10,-1
	r23.s64 = ctx.r10.s64 + -1;
	// b 0x8229bcec
	goto loc_8229BCEC;
loc_8229BCE4:
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// subf r23,r26,r10
	r23.u64 = ctx.r10.u64 - r26.u64;
loc_8229BCEC:
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8229bd1c
	if (!ctx.cr6.eq) goto loc_8229BD1C;
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8229bd1c
	if (ctx.cr6.eq) goto loc_8229BD1C;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// bge cr6,0x8229bd18
	if (!ctx.cr6.lt) goto loc_8229BD18;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r23,r11,-1
	r23.s64 = ctx.r11.s64 + -1;
	// b 0x8229bd1c
	goto loc_8229BD1C;
loc_8229BD18:
	// subf r23,r26,r9
	r23.u64 = ctx.r9.u64 - r26.u64;
loc_8229BD1C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8229c1b0
	if (ctx.cr6.eq) goto loc_8229C1B0;
loc_8229BD24:
	// lwz r25,4(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r22,r21
	r22.u64 = r21.u64;
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(r25.u32, r24.u32, ctx.xer);
	// ble cr6,0x8229bd38
	if (!ctx.cr6.gt) goto loc_8229BD38;
	// mr r25,r24
	r25.u64 = r24.u64;
loc_8229BD38:
	// cmplw cr6,r25,r23
	ctx.cr6.compare<uint32_t>(r25.u32, r23.u32, ctx.xer);
	// ble cr6,0x8229bd44
	if (!ctx.cr6.gt) goto loc_8229BD44;
	// mr r25,r23
	r25.u64 = r23.u64;
loc_8229BD44:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8229BD54;
	sub_822D4FA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r29,r25,r29
	r29.u64 = r25.u64 + r29.u64;
	// subf. r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r24,r25,r24
	r24.u64 = r24.u64 - r25.u64;
	// add r26,r25,r26
	r26.u64 = r25.u64 + r26.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// subf r23,r25,r23
	r23.u64 = r23.u64 - r25.u64;
	// bne 0x8229c1a0
	if (!ctx.cr0.eq) goto loc_8229C1A0;
	// b 0x8229bc4c
	goto loc_8229BC4C;
loc_8229BD78:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8229c1ec
	if (ctx.cr6.eq) goto loc_8229C1EC;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// mr r22,r21
	r22.u64 = r21.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r11,r11,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r28.u8 & 0x3F));
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// or r27,r11,r27
	r27.u64 = ctx.r11.u64 | r27.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8229BD9C:
	// cmplwi cr6,r28,14
	ctx.cr6.compare<uint32_t>(r28.u32, 14, ctx.xer);
	// blt cr6,0x8229bd78
	if (ctx.cr6.lt) goto loc_8229BD78;
	// clrlwi r11,r27,18
	ctx.r11.u64 = r27.u32 & 0x3FFF;
	// clrlwi r10,r27,27
	ctx.r10.u64 = r27.u32 & 0x1F;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r10,29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 29, ctx.xer);
	// bgt cr6,0x8229c220
	if (ctx.cr6.gt) goto loc_8229C220;
	// rlwinm r11,r11,27,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// bgt cr6,0x8229c220
	if (ctx.cr6.gt) goto loc_8229C220;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// addi r4,r11,258
	ctx.r4.s64 = ctx.r11.s64 + 258;
	// ori r11,r10,65535
	ctx.r11.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8229bde4
	if (!ctx.cr6.gt) goto loc_8229BDE4;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// b 0x8229bdf8
	goto loc_8229BDF8;
loc_8229BDE4:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229BDF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229BDF8:
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229c200
	if (ctx.cr6.eq) goto loc_8229C200;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r21,8(r31)
	REX_STORE_U32(r31.u32 + 8, r21.u32);
	// rlwinm r27,r27,18,14,31
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 18) & 0x3FFFF;
	// addi r28,r28,-14
	r28.s64 = r28.s64 + -14;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8229be78
	goto loc_8229BE78;
loc_8229BE1C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8229c1ec
	if (ctx.cr6.eq) goto loc_8229C1EC;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// mr r22,r21
	r22.u64 = r21.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r11,r11,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r28.u8 & 0x3F));
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// or r27,r11,r27
	r27.u64 = ctx.r11.u64 | r27.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8229BE40:
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(r28.u32, 3, ctx.xer);
	// blt cr6,0x8229be1c
	if (ctx.cr6.lt) goto loc_8229BE1C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r27,29
	ctx.r10.u64 = r27.u32 & 0x7;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r27,r27,29,3,31
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,-3
	r28.s64 = r28.s64 + -3;
	// lwzx r11,r11,r17
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r17.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8229BE78:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,22,10,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FFFFF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8229be40
	if (ctx.cr6.lt) goto loc_8229BE40;
	// b 0x8229beb8
	goto loc_8229BEB8;
loc_8229BE94:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r17
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r17.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r21,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r21.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8229BEB8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// blt cr6,0x8229be94
	if (ctx.cr6.lt) goto loc_8229BE94;
	// stw r16,16(r31)
	REX_STORE_U32(r31.u32 + 16, r16.u32);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r5,r31,20
	ctx.r5.s64 = r31.s64 + 20;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x8229cef8
	ctx.lr = 0x8229BEE0;
	sub_8229CEF8(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne 0x8229c22c
	if (!ctx.cr0.eq) goto loc_8229C22C;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r21,8(r31)
	REX_STORE_U32(r31.u32 + 8, r21.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8229BEF4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8229c074
	goto loc_8229C074;
loc_8229BF08:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// b 0x8229bf34
	goto loc_8229BF34;
loc_8229BF10:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8229c1ec
	if (ctx.cr6.eq) goto loc_8229C1EC;
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// mr r22,r21
	r22.u64 = r21.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r10,r10,r28
	ctx.r10.u64 = r28.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r28.u8 & 0x3F));
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// or r27,r10,r27
	r27.u64 = ctx.r10.u64 | r27.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8229BF34:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8229bf10
	if (ctx.cr6.lt) goto loc_8229BF10;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r10,r19
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r19.u32);
	// and r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 & r27.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// bge cr6,0x8229bf88
	if (!ctx.cr6.lt) goto loc_8229BF88;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// srw r27,r27,r10
	r27.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r10.u8 & 0x3F));
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r10,r28
	r28.u64 = r28.u64 - ctx.r10.u64;
	// stwx r5,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8229c060
	goto loc_8229C060;
loc_8229BF88:
	// cmplwi cr6,r5,18
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 18, ctx.xer);
	// bne cr6,0x8229bf9c
	if (!ctx.cr6.eq) goto loc_8229BF9C;
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// li r6,11
	ctx.r6.s64 = 11;
	// b 0x8229bfa4
	goto loc_8229BFA4;
loc_8229BF9C:
	// addi r11,r5,-14
	ctx.r11.s64 = ctx.r5.s64 + -14;
	// li r6,3
	ctx.r6.s64 = 3;
loc_8229BFA4:
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8229bfd0
	goto loc_8229BFD0;
loc_8229BFAC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8229c1ec
	if (ctx.cr6.eq) goto loc_8229C1EC;
	// lbz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U8(r29.u32 + 0);
	// mr r22,r21
	r22.u64 = r21.u64;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// slw r8,r8,r28
	ctx.r8.u64 = r28.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r28.u8 & 0x3F));
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// or r27,r8,r27
	r27.u64 = ctx.r8.u64 | r27.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8229BFD0:
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8229bfac
	if (ctx.cr6.lt) goto loc_8229BFAC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// srw r4,r27,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r10.u8 & 0x3F));
	// lwzx r9,r9,r19
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r19.u32);
	// rlwinm r7,r8,27,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1F;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// and r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ctx.r4.u64;
	// subf r3,r11,r28
	ctx.r3.u64 = r28.u64 - ctx.r11.u64;
	// srw r27,r4,r11
	r27.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addi r8,r8,258
	ctx.r8.s64 = ctx.r8.s64 + 258;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r28,r10,r3
	r28.u64 = ctx.r3.u64 - ctx.r10.u64;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8229c26c
	if (ctx.cr6.gt) goto loc_8229C26C;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// bne cr6,0x8229c040
	if (!ctx.cr6.eq) goto loc_8229C040;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8229c26c
	if (ctx.cr6.lt) goto loc_8229C26C;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,-4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// b 0x8229c044
	goto loc_8229C044;
loc_8229C040:
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
loc_8229C044:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8229C048:
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8229c048
	if (!ctx.cr0.eq) goto loc_8229C048;
loc_8229C060:
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r10,27,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8229C074:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,258
	ctx.r11.s64 = ctx.r11.s64 + 258;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8229bf08
	if (ctx.cr6.lt) goto loc_8229BF08;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// clrlwi r11,r6,27
	ctx.r11.u64 = ctx.r6.u32 & 0x1F;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r4,r6,27,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1F;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r21,20(r31)
	REX_STORE_U32(r31.u32 + 20, r21.u32);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// stw r20,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r20.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r18,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r18.u32);
	// addi r3,r11,257
	ctx.r3.s64 = ctx.r11.s64 + 257;
	// bl 0x8229cfd8
	ctx.lr = 0x8229C0C4;
	sub_8229CFD8(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne 0x8229c298
	if (!ctx.cr0.eq) goto loc_8229C298;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r6,120(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r5,124(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8229c388
	ctx.lr = 0x8229C0E4;
	sub_8229C388(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8229c200
	if (ctx.cr0.eq) goto loc_8229C200;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bctrl 
	ctx.lr = 0x8229C104;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r18,0(r31)
	REX_STORE_U32(r31.u32 + 0, r18.u32);
loc_8229C108:
	// stw r27,32(r31)
	REX_STORE_U32(r31.u32 + 32, r27.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// stw r28,28(r31)
	REX_STORE_U32(r31.u32 + 28, r28.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r24,4(r30)
	REX_STORE_U32(r30.u32 + 4, r24.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stw r26,52(r31)
	REX_STORE_U32(r31.u32 + 52, r26.u32);
	// bl 0x8229c3e8
	ctx.lr = 0x8229C140;
	sub_8229C3E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bne cr6,0x8229c1dc
	if (!ctx.cr6.eq) goto loc_8229C1DC;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r22,r21
	r22.u64 = r21.u64;
	// bl 0x82403ab8
	ctx.lr = 0x8229C15C;
	sub_82403AB8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r26,52(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r24,4(r30)
	r24.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// lwz r27,32(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r28,28(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bge cr6,0x8229c188
	if (!ctx.cr6.lt) goto loc_8229C188;
	// subf r11,r26,r11
	ctx.r11.u64 = ctx.r11.u64 - r26.u64;
	// addi r23,r11,-1
	r23.s64 = ctx.r11.s64 + -1;
	// b 0x8229c190
	goto loc_8229C190;
loc_8229C188:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// subf r23,r26,r11
	r23.u64 = ctx.r11.u64 - r26.u64;
loc_8229C190:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229c2c0
	if (!ctx.cr6.eq) goto loc_8229C2C0;
	// stw r21,0(r31)
	REX_STORE_U32(r31.u32 + 0, r21.u32);
loc_8229C1A0:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// ble cr6,0x8229bad0
	if (!ctx.cr6.gt) goto loc_8229BAD0;
loc_8229C1AC:
	// li r5,-2
	ctx.r5.s64 = -2;
loc_8229C1B0:
	// stw r28,28(r31)
	REX_STORE_U32(r31.u32 + 28, r28.u32);
	// stw r27,32(r31)
	REX_STORE_U32(r31.u32 + 32, r27.u32);
loc_8229C1B8:
	// stw r24,4(r30)
	REX_STORE_U32(r30.u32 + 4, r24.u32);
loc_8229C1BC:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_8229C1C8:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stw r26,52(r31)
	REX_STORE_U32(r31.u32 + 52, r26.u32);
loc_8229C1DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82404240
	ctx.lr = 0x8229C1E4;
	sub_82404240(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822d4ea8
	return;
loc_8229C1EC:
	// stw r27,32(r31)
	REX_STORE_U32(r31.u32 + 32, r27.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// stw r28,28(r31)
	REX_STORE_U32(r31.u32 + 28, r28.u32);
	// stw r21,4(r30)
	REX_STORE_U32(r30.u32 + 4, r21.u32);
	// b 0x8229c1bc
	goto loc_8229C1BC;
loc_8229C200:
	// li r5,-4
	ctx.r5.s64 = -4;
	// b 0x8229c1b0
	goto loc_8229C1B0;
loc_8229C208:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,17324
	ctx.r11.s64 = ctx.r11.s64 + 17324;
loc_8229C210:
	// stw r20,0(r31)
	REX_STORE_U32(r31.u32 + 0, r20.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// b 0x8229c1b0
	goto loc_8229C1B0;
loc_8229C220:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,17288
	ctx.r11.s64 = ctx.r11.s64 + 17288;
	// b 0x8229c210
	goto loc_8229C210;
loc_8229C22C:
	// cmpwi cr6,r25,-3
	ctx.cr6.compare<int32_t>(r25.s32, -3, ctx.xer);
	// bne cr6,0x8229c24c
	if (!ctx.cr6.eq) goto loc_8229C24C;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229C248;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r20,0(r31)
	REX_STORE_U32(r31.u32 + 0, r20.u32);
loc_8229C24C:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_8229C250:
	// stw r27,32(r31)
	REX_STORE_U32(r31.u32 + 32, r27.u32);
	// stw r28,28(r31)
	REX_STORE_U32(r31.u32 + 28, r28.u32);
	// stw r24,4(r30)
	REX_STORE_U32(r30.u32 + 4, r24.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// b 0x8229c1c8
	goto loc_8229C1C8;
loc_8229C26C:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229C280;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r20,0(r31)
	REX_STORE_U32(r31.u32 + 0, r20.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// b 0x8229c250
	goto loc_8229C250;
loc_8229C298:
	// cmpwi cr6,r25,-3
	ctx.cr6.compare<int32_t>(r25.s32, -3, ctx.xer);
	// bne cr6,0x8229c2b8
	if (!ctx.cr6.eq) goto loc_8229C2B8;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229C2B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r20,0(r31)
	REX_STORE_U32(r31.u32 + 0, r20.u32);
loc_8229C2B8:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// b 0x8229c1b0
	goto loc_8229C1B0;
loc_8229C2C0:
	// stw r16,0(r31)
	REX_STORE_U32(r31.u32 + 0, r16.u32);
loc_8229C2C4:
	// stw r26,52(r31)
	REX_STORE_U32(r31.u32 + 52, r26.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82404240
	ctx.lr = 0x8229C2D8;
	sub_82404240(ctx, base);
	// lwz r26,52(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x8229c250
	if (!ctx.cr6.eq) goto loc_8229C250;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8229C2F4:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8229c1b0
	goto loc_8229C1B0;
loc_8229C2FC:
	// li r5,-3
	ctx.r5.s64 = -3;
	// b 0x8229c1b0
	goto loc_8229C1B0;
}

DEFINE_REX_FUNC(sub_822C2AB8) {
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
	// bl 0x822c9160
	ctx.lr = 0x822C2ADC;
	sub_822C9160(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822c9160
	ctx.lr = 0x822C2AE4;
	sub_822C9160(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x822c9160
	ctx.lr = 0x822C2AEC;
	sub_822C9160(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x822c9160
	ctx.lr = 0x822C2AF4;
	sub_822C9160(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x822c9160
	ctx.lr = 0x822C2AFC;
	sub_822C9160(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x822c9160
	ctx.lr = 0x822C2B04;
	sub_822C9160(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x822c9160
	ctx.lr = 0x822C2B0C;
	sub_822C9160(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x822c9188
	ctx.lr = 0x822C2B14;
	sub_822C9188(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x822c9188
	ctx.lr = 0x822C2B1C;
	sub_822C9188(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x822c9188
	ctx.lr = 0x822C2B24;
	sub_822C9188(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x822c9188
	ctx.lr = 0x822C2B2C;
	sub_822C9188(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x822c9188
	ctx.lr = 0x822C2B34;
	sub_822C9188(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// bl 0x822c9188
	ctx.lr = 0x822C2B3C;
	sub_822C9188(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// bl 0x822c9188
	ctx.lr = 0x822C2B44;
	sub_822C9188(ctx, base);
	// addi r3,r31,172
	ctx.r3.s64 = r31.s64 + 172;
	// bl 0x822c9188
	ctx.lr = 0x822C2B4C;
	sub_822C9188(ctx, base);
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x822c9188
	ctx.lr = 0x822C2B54;
	sub_822C9188(ctx, base);
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// bl 0x822c9218
	ctx.lr = 0x822C2B5C;
	sub_822C9218(ctx, base);
	// addi r3,r31,268
	ctx.r3.s64 = r31.s64 + 268;
	// bl 0x822c9160
	ctx.lr = 0x822C2B64;
	sub_822C9160(ctx, base);
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// bl 0x822c9160
	ctx.lr = 0x822C2B6C;
	sub_822C9160(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b8668
	ctx.lr = 0x822C2B80;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c2b90
	if (ctx.cr0.eq) goto loc_822C2B90;
	// addi r3,r31,280
	ctx.r3.s64 = r31.s64 + 280;
	// bl 0x822c9160
	ctx.lr = 0x822C2B90;
	sub_822C9160(ctx, base);
loc_822C2B90:
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

DEFINE_REX_FUNC(sub_822C6358) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r10,32(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lhz r10,236(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 236);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lhz r11,238(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 238);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bctrl 
	ctx.lr = 0x822C63CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C7110) {
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
	// stwu r1,-2480(r1)
	ea = -2480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822b3b48
	ctx.lr = 0x822C7134;
	sub_822B3B48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c7160
	if (ctx.cr0.eq) goto loc_822C7160;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b5b38
	ctx.lr = 0x822C714C;
	sub_822B5B38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r5,r3,3
	ctx.r5.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(3));
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// b 0x822c71c0
	goto loc_822C71C0;
loc_822C7160:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,44(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// lfs f0,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
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
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_822C71C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C71CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,2480
	ctx.r1.s64 = ctx.r1.s64 + 2480;
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

DEFINE_REX_FUNC(sub_822CA298) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fsubs f10,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f9,f4,f3
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f8,f1,f2
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fadds f7,f3,f4
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fdivs f6,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fdivs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fdivs f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 / ctx.f10.f64));
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fdivs f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 / ctx.f9.f64));
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f12,2024(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2024);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f11.f64 = double(temp.f32);
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fneg f0,f10
	ctx.f0.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f11,60(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// fneg f13,f9
	ctx.f13.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CD498) {
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
	// lwz r11,556(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 556);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
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
	// beq 0x822cd4f0
	if (ctx.cr0.eq) goto loc_822CD4F0;
	// li r31,0
	r31.s64 = 0;
loc_822CD4CC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82203958
	ctx.lr = 0x822CD4D4;
	sub_82203958(ctx, base);
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
loc_822CD4F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,552(r31)
	REX_STORE_U32(r31.u32 + 552, ctx.r11.u32);
	// bl 0x822045a0
	ctx.lr = 0x822CD504;
	sub_822045A0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,536
	ctx.r3.s64 = r31.s64 + 536;
	// bl 0x822cd348
	ctx.lr = 0x822CD510;
	sub_822CD348(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cd520
	if (ctx.cr6.eq) goto loc_822CD520;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_822CD520:
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r4,552(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 552);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,556(r31)
	REX_STORE_U32(r31.u32 + 556, ctx.r11.u32);
	// bl 0x822ce888
	ctx.lr = 0x822CD534;
	sub_822CE888(ctx, base);
	// li r31,1
	r31.s64 = 1;
	// b 0x822cd4cc
	goto loc_822CD4CC;
}

DEFINE_REX_FUNC(sub_822CFD70) {
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
	// lbz r11,272(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 272);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822cfe18
	if (ctx.cr0.eq) goto loc_822CFE18;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// bl 0x822d5870
	ctx.lr = 0x822CFDA4;
	sub_822D5870(ctx, base);
	// lwz r3,188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 188);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cfdbc
	if (ctx.cr6.eq) goto loc_822CFDBC;
	// bl 0x822c80a8
	ctx.lr = 0x822CFDB8;
	sub_822C80A8(ctx, base);
	// stw r30,188(r31)
	REX_STORE_U32(r31.u32 + 188, r30.u32);
loc_822CFDBC:
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cfdd0
	if (ctx.cr6.eq) goto loc_822CFDD0;
	// bl 0x822c80a8
	ctx.lr = 0x822CFDCC;
	sub_822C80A8(ctx, base);
	// stw r30,192(r31)
	REX_STORE_U32(r31.u32 + 192, r30.u32);
loc_822CFDD0:
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cfde4
	if (ctx.cr6.eq) goto loc_822CFDE4;
	// bl 0x822c80a8
	ctx.lr = 0x822CFDE0;
	sub_822C80A8(ctx, base);
	// stw r30,160(r31)
	REX_STORE_U32(r31.u32 + 160, r30.u32);
loc_822CFDE4:
	// lwz r3,156(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cfdf8
	if (ctx.cr6.eq) goto loc_822CFDF8;
	// bl 0x822c80a8
	ctx.lr = 0x822CFDF4;
	sub_822C80A8(ctx, base);
	// stw r30,156(r31)
	REX_STORE_U32(r31.u32 + 156, r30.u32);
loc_822CFDF8:
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stb r11,273(r31)
	REX_STORE_U8(r31.u32 + 273, ctx.r11.u8);
	// stb r30,272(r31)
	REX_STORE_U8(r31.u32 + 272, r30.u8);
loc_822CFE18:
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

DEFINE_REX_FUNC(sub_822D2038) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x822D2040;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r28,r3,36
	r28.s64 = ctx.r3.s64 + 36;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D2064;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822d20b0
	if (!ctx.cr6.gt) goto loc_822D20B0;
	// li r30,0
	r30.s64 = 0;
loc_822D2078:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x822d19c8
	ctx.lr = 0x822D2088;
	sub_822D19C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d209c
	if (ctx.cr0.eq) goto loc_822D209C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x822d1718
	ctx.lr = 0x822D209C;
	sub_822D1718(ctx, base);
loc_822D209C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,108
	r30.s64 = r30.s64 + 108;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822d2078
	if (ctx.cr6.lt) goto loc_822D2078;
loc_822D20B0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D20C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822D4280) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822D4288;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x822d3128
	ctx.lr = 0x822D429C;
	sub_822D3128(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d42d4
	if (ctx.cr0.eq) goto loc_822D42D4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822d42b8
	if (ctx.cr6.lt) goto loc_822D42B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x822d42bc
	goto loc_822D42BC;
loc_822D42B8:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_822D42BC:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// subf r5,r11,r29
	ctx.r5.u64 = r29.u64 - ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4198
	ctx.lr = 0x822D42D0;
	sub_822D4198(ctx, base);
	// b 0x822d4338
	goto loc_822D4338;
loc_822D42D4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d3fd0
	ctx.lr = 0x822D42E4;
	sub_822D3FD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d4334
	if (ctx.cr0.eq) goto loc_822D4334;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822d4300
	if (ctx.cr6.lt) goto loc_822D4300;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x822d4304
	goto loc_822D4304;
loc_822D4300:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822D4304:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822D4310;
	sub_822D4FA0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822d4328
	if (ctx.cr6.lt) goto loc_822D4328;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x822d432c
	goto loc_822D432C;
loc_822D4328:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_822D432C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r30
	REX_STORE_U8(ctx.r11.u32 + r30.u32, ctx.r10.u8);
loc_822D4334:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822D4338:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822D5950) {
	REX_FUNC_PROLOGUE();
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm. r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d5978
	if (!ctx.cr0.eq) goto loc_822D5978;
	// lwz r11,16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// clrlwi. r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d59b4
	if (!ctx.cr0.eq) goto loc_822D59B4;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d59b4
	if (!ctx.cr6.eq) goto loc_822D59B4;
loc_822D5978:
	// fctid f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x822d59b4
	if (!ctx.cr6.eq) goto loc_822D59B4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,4000(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 4000);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fctid f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822d59ac
	if (!ctx.cr6.eq) goto loc_822D59AC;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_822D59AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822D59B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D8740) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d8764
	if (ctx.cr6.eq) goto loc_822D8764;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822d877c
	if (!ctx.cr6.eq) goto loc_822D877C;
loc_822D8764:
	// bl 0x822db6c0
	ctx.lr = 0x822D8768;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D8774;
	sub_822D6910(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x822d8814
	goto loc_822D8814;
loc_822D877C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822d8790
	if (!ctx.cr6.eq) goto loc_822D8790;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// b 0x822d8764
	goto loc_822D8764;
loc_822D8790:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D8794:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x822d87ac
	if (ctx.cr0.eq) goto loc_822D87AC;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x822d8794
	if (!ctx.cr0.eq) goto loc_822D8794;
loc_822D87AC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d87d4
	if (!ctx.cr6.eq) goto loc_822D87D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x822db6c0
	ctx.lr = 0x822D87C0;
	sub_822DB6C0(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_822D87C4:
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D87CC;
	sub_822D6910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x822d8814
	goto loc_822D8814;
loc_822D87D4:
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
loc_822D87D8:
	// lbz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// beq 0x822d87f4
	if (ctx.cr0.eq) goto loc_822D87F4;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d87d8
	if (!ctx.cr0.eq) goto loc_822D87D8;
loc_822D87F4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d8810
	if (!ctx.cr6.eq) goto loc_822D8810;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x822db6c0
	ctx.lr = 0x822D8808;
	sub_822DB6C0(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x822d87c4
	goto loc_822D87C4;
loc_822D8810:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D8814:
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

DEFINE_REX_FUNC(__savevmx_100) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_73) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822E2930) {
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
	// bl 0x822d4e80
	ctx.lr = 0x822E2938;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// mr r27,r28
	r27.u64 = r28.u64;
	// beq cr6,0x822e29cc
	if (ctx.cr6.eq) goto loc_822E29CC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822e29d4
	if (ctx.cr6.eq) goto loc_822E29D4;
loc_822E2968:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822e2974
	if (ctx.cr6.eq) goto loc_822E2974;
	// stb r28,0(r31)
	REX_STORE_U8(r31.u32 + 0, r28.u8);
loc_822E2974:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x822e2980
	if (ctx.cr6.eq) goto loc_822E2980;
	// stw r28,0(r26)
	REX_STORE_U32(r26.u32 + 0, r28.u32);
loc_822E2980:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bgt cr6,0x822e2990
	if (ctx.cr6.gt) goto loc_822E2990;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_822E2990:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822e29d4
	if (ctx.cr6.gt) goto loc_822E29D4;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e2660
	ctx.lr = 0x822E29AC;
	sub_822E2660(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822e29ec
	if (!ctx.cr6.eq) goto loc_822E29EC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822e29c0
	if (ctx.cr6.eq) goto loc_822E29C0;
	// stb r28,0(r31)
	REX_STORE_U8(r31.u32 + 0, r28.u8);
loc_822E29C0:
	// bl 0x822db6c0
	ctx.lr = 0x822E29C4;
	sub_822DB6C0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822e2a4c
	goto loc_822E2A4C;
loc_822E29CC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822e2968
	if (ctx.cr6.eq) goto loc_822E2968;
loc_822E29D4:
	// bl 0x822db6c0
	ctx.lr = 0x822E29D8;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822E29E4;
	sub_822D6910(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x822e2a4c
	goto loc_822E2A4C;
loc_822E29EC:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822e2a3c
	if (ctx.cr6.eq) goto loc_822E2A3C;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// ble cr6,0x822e2a34
	if (!ctx.cr6.gt) goto loc_822E2A34;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// beq cr6,0x822e2a2c
	if (ctx.cr6.eq) goto loc_822E2A2C;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// stb r28,0(r31)
	REX_STORE_U8(r31.u32 + 0, r28.u8);
	// bgt cr6,0x822e2a2c
	if (ctx.cr6.gt) goto loc_822E2A2C;
	// bl 0x822db6c0
	ctx.lr = 0x822E2A18;
	sub_822DB6C0(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822E2A24;
	sub_822D6910(ctx, base);
	// li r3,34
	ctx.r3.s64 = 34;
	// b 0x822e2a4c
	goto loc_822E2A4C;
loc_822E2A2C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// li r27,80
	r27.s64 = 80;
loc_822E2A34:
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// stb r28,-1(r10)
	REX_STORE_U8(ctx.r10.u32 + -1, r28.u8);
loc_822E2A3C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x822e2a48
	if (ctx.cr6.eq) goto loc_822E2A48;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_822E2A48:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_822E2A4C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822EA580) {
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
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// std r11,16(r9)
	REX_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// stw r11,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r7,44(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822EA5C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EBD7C) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EC3CC) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EC4E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,288(r3)
	REX_STORE_U64(ctx.r3.u32 + 288, ctx.r11.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,304(r3)
	REX_STORE_U64(ctx.r3.u32 + 304, ctx.r11.u64);
	// std r11,296(r3)
	REX_STORE_U64(ctx.r3.u32 + 296, ctx.r11.u64);
	// stw r11,312(r3)
	REX_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// stw r11,316(r3)
	REX_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,320(r3)
	REX_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// lfs f13,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,324(r3)
	REX_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// stfs f0,336(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 336, temp.u32);
	// stfs f13,340(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 340, temp.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,328(r3)
	REX_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// stw r11,332(r3)
	REX_STORE_U32(ctx.r3.u32 + 332, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ED168) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-27880
	ctx.r10.s64 = ctx.r11.s64 + -27880;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x822ec5e8
	ctx.lr = 0x822ED194;
	sub_822EC5E8(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// bl 0x822f4920
	ctx.lr = 0x822ED19C;
	sub_822F4920(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// bl 0x822f4920
	ctx.lr = 0x822ED1A4;
	sub_822F4920(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x822f4920
	ctx.lr = 0x822ED1AC;
	sub_822F4920(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822eece8
	ctx.lr = 0x822ED1B4;
	sub_822EECE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822ed1d4
	if (ctx.cr6.eq) goto loc_822ED1D4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32817
	ctx.r4.u64 = ctx.r4.u64 | 32817;
	// bl 0x823cd250
	ctx.lr = 0x822ED1D0;
	sub_823CD250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822ED1D4:
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

DEFINE_REX_FUNC(sub_822EEEA0) {
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
	// bl 0x822098c8
	ctx.lr = 0x822EEEB0;
	sub_822098C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822eeec0
	if (!ctx.cr6.gt) goto loc_822EEEC0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
loc_822EEEC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F07E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,9
	ctx.r9.s64 = 9;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822F0800:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822f0800
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F0800;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,24(r5)
	REX_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// stw r4,28(r5)
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r4.u32);
	// stw r9,32(r5)
	REX_STORE_U32(ctx.r5.u32 + 32, ctx.r9.u32);
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x822f0868
	if (ctx.cr6.eq) goto loc_822F0868;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x822f0840
	if (ctx.cr6.eq) goto loc_822F0840;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,184
	ctx.r3.u64 = ctx.r3.u64 | 184;
	// blr 
	return;
loc_822F0840:
	// stw r3,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r3.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// stw r10,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r6,16(r5)
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r6.u32);
	// blr 
	return;
loc_822F0868:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r6,14(r7)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// stw r9,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// stb r6,12(r5)
	REX_STORE_U8(ctx.r5.u32 + 12, ctx.r6.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F42F8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,-26152
	ctx.r10.s64 = ctx.r11.s64 + -26152;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x822fb6c8
	sub_822FB6C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F44D8) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f4504
	if (ctx.cr6.eq) goto loc_822F4504;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32782
	ctx.r4.u64 = ctx.r4.u64 | 32782;
	// bl 0x823cd250
	ctx.lr = 0x822F4504;
	sub_823CD250(ctx, base);
loc_822F4504:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f4540
	if (ctx.cr6.eq) goto loc_822F4540;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822f453c
	if (ctx.cr6.eq) goto loc_822F453C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822F4538;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822f4540
	goto loc_822F4540;
loc_822F453C:
	// bl 0x822c80a8
	ctx.lr = 0x822F4540;
	sub_822C80A8(ctx, base);
loc_822F4540:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822F6078) {
	REX_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x824d459c
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F6128) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x824d445c
	__imp__KeSetEvent(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F61B8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,224(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F70A0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f70cc
	if (ctx.cr6.eq) goto loc_822F70CC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8221a820
	ctx.lr = 0x822F70CC;
	sub_8221A820(ctx, base);
loc_822F70CC:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f70e4
	if (ctx.cr6.eq) goto loc_822F70E4;
	// bl 0x8221a848
	ctx.lr = 0x822F70DC;
	sub_8221A848(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_822F70E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
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

DEFINE_REX_FUNC(sub_822F9680) {
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
	// bl 0x822d4e70
	ctx.lr = 0x822F9688;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// lis r9,-32688
	ctx.r9.s64 = -2142240768;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// li r24,0
	r24.s64 = 0;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r22,80
	r22.s64 = 5242880;
	// ori r23,r9,3
	r23.u64 = ctx.r9.u64 | 3;
	// addi r29,r10,1880
	r29.s64 = ctx.r10.s64 + 1880;
loc_822F96C0:
	// extsb r30,r11
	r30.s64 = ctx.r11.s8;
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r29.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f9720
	if (ctx.cr6.eq) goto loc_822F9720;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F96F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f9718
	if (ctx.cr6.lt) goto loc_822F9718;
	// cmpw cr6,r3,r22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r22.s32, ctx.xer);
	// bne cr6,0x822f9754
	if (!ctx.cr6.eq) goto loc_822F9754;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x822f9720
	if (!ctx.cr6.eq) goto loc_822F9720;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r29.u32);
	// lwz r24,0(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822f9720
	goto loc_822F9720;
loc_822F9718:
	// cmplw cr6,r3,r23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r23.u32, ctx.xer);
	// bne cr6,0x822f9754
	if (!ctx.cr6.eq) goto loc_822F9754;
loc_822F9720:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x822f96c0
	if (ctx.cr6.lt) goto loc_822F96C0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x822f9754
	if (ctx.cr6.eq) goto loc_822F9754;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bctrl 
	ctx.lr = 0x822F9754;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F9754:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_822FE3E0) {
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
	// bl 0x822d4e68
	ctx.lr = 0x822FE3E8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	r20.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r21,r20
	r21.u64 = r20.u64;
	// bne cr6,0x822fe410
	if (!ctx.cr6.eq) goto loc_822FE410;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eb8
	return;
loc_822FE410:
	// std r20,0(r31)
	REX_STORE_U64(r31.u32 + 0, r20.u64);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822fbc30
	ctx.lr = 0x822FE420;
	sub_822FBC30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fe810
	if (!ctx.cr6.eq) goto loc_822FE810;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r11,r11,50
	ctx.r11.s64 = ctx.r11.s64 + 50;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// addi r8,r10,-50
	ctx.r8.s64 = ctx.r10.s64 + -50;
	// std r10,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r10.u64);
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// bge cr6,0x822fe7dc
	if (!ctx.cr6.lt) goto loc_822FE7DC;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r4,-25320
	r29.s64 = ctx.r4.s64 + -25320;
	// addi r28,r5,-25352
	r28.s64 = ctx.r5.s64 + -25352;
	// addi r27,r6,-25368
	r27.s64 = ctx.r6.s64 + -25368;
	// addi r26,r7,-25448
	r26.s64 = ctx.r7.s64 + -25448;
	// addi r25,r8,-25384
	r25.s64 = ctx.r8.s64 + -25384;
	// addi r24,r9,-25336
	r24.s64 = ctx.r9.s64 + -25336;
	// addi r23,r10,-25464
	r23.s64 = ctx.r10.s64 + -25464;
	// addi r22,r11,-25480
	r22.s64 = ctx.r11.s64 + -25480;
loc_822FE48C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822fb8e0
	ctx.lr = 0x822FE49C;
	sub_822FB8E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fe810
	if (!ctx.cr6.eq) goto loc_822FE810;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r22,16
	ctx.r8.s64 = r22.s64 + 16;
loc_822FE4B0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822fe4d0
	if (!ctx.cr0.eq) goto loc_822FE4D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822fe4b0
	if (!ctx.cr6.eq) goto loc_822FE4B0;
loc_822FE4D0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822fe514
	if (!ctx.cr6.eq) goto loc_822FE514;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r9,r21,16
	ctx.r9.u64 = r21.u32 & 0xFFFF;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r11,r4,-24
	ctx.r11.s64 = ctx.r4.s64 + -24;
	// ld r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 40);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrlwi r21,r7,16
	r21.u64 = ctx.r7.u32 & 0xFFFF;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r6,r8
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x822fe80c
	if (ctx.cr6.gt) goto loc_822FE80C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822fbe00
	ctx.lr = 0x822FE510;
	sub_822FBE00(ctx, base);
	// b 0x822fe7c0
	goto loc_822FE7C0;
loc_822FE514:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r23,16
	ctx.r8.s64 = r23.s64 + 16;
loc_822FE520:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822fe540
	if (!ctx.cr0.eq) goto loc_822FE540;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822fe520
	if (!ctx.cr6.eq) goto loc_822FE520;
loc_822FE540:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822fe788
	if (ctx.cr6.eq) goto loc_822FE788;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r24,16
	ctx.r8.s64 = r24.s64 + 16;
loc_822FE554:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822fe574
	if (!ctx.cr0.eq) goto loc_822FE574;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822fe554
	if (!ctx.cr6.eq) goto loc_822FE554;
loc_822FE574:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822fe788
	if (ctx.cr6.eq) goto loc_822FE788;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r25,16
	ctx.r8.s64 = r25.s64 + 16;
loc_822FE588:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822fe5a8
	if (!ctx.cr0.eq) goto loc_822FE5A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822fe588
	if (!ctx.cr6.eq) goto loc_822FE588;
loc_822FE5A8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822fe5dc
	if (!ctx.cr6.eq) goto loc_822FE5DC;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r11,r4,-24
	ctx.r11.s64 = ctx.r4.s64 + -24;
	// ld r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 40);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bgt cr6,0x822fe80c
	if (ctx.cr6.gt) goto loc_822FE80C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822fc8e0
	ctx.lr = 0x822FE5D8;
	sub_822FC8E0(ctx, base);
	// b 0x822fe7c0
	goto loc_822FE7C0;
loc_822FE5DC:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r26,16
	ctx.r8.s64 = r26.s64 + 16;
loc_822FE5E8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822fe608
	if (!ctx.cr0.eq) goto loc_822FE608;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822fe5e8
	if (!ctx.cr6.eq) goto loc_822FE5E8;
loc_822FE608:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822fe63c
	if (!ctx.cr6.eq) goto loc_822FE63C;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r11,r4,-24
	ctx.r11.s64 = ctx.r4.s64 + -24;
	// ld r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 40);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bgt cr6,0x822fe80c
	if (ctx.cr6.gt) goto loc_822FE80C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822fcc08
	ctx.lr = 0x822FE638;
	sub_822FCC08(ctx, base);
	// b 0x822fe7c8
	goto loc_822FE7C8;
loc_822FE63C:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r27,16
	ctx.r8.s64 = r27.s64 + 16;
loc_822FE648:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822fe668
	if (!ctx.cr0.eq) goto loc_822FE668;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822fe648
	if (!ctx.cr6.eq) goto loc_822FE648;
loc_822FE668:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822fe6ac
	if (!ctx.cr6.eq) goto loc_822FE6AC;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r11,r4,-24
	ctx.r11.s64 = ctx.r4.s64 + -24;
	// ld r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 40);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bgt cr6,0x822fe80c
	if (ctx.cr6.gt) goto loc_822FE80C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x822fe6a4
	if (ctx.cr6.eq) goto loc_822FE6A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822fcfa0
	ctx.lr = 0x822FE6A0;
	sub_822FCFA0(ctx, base);
	// b 0x822fe7c8
	goto loc_822FE7C8;
loc_822FE6A4:
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// b 0x822fe7c8
	goto loc_822FE7C8;
loc_822FE6AC:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r28,16
	ctx.r8.s64 = r28.s64 + 16;
loc_822FE6B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822fe6d8
	if (!ctx.cr0.eq) goto loc_822FE6D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822fe6b8
	if (!ctx.cr6.eq) goto loc_822FE6B8;
loc_822FE6D8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822fe70c
	if (!ctx.cr6.eq) goto loc_822FE70C;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r11,r4,-24
	ctx.r11.s64 = ctx.r4.s64 + -24;
	// ld r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 40);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bgt cr6,0x822fe80c
	if (ctx.cr6.gt) goto loc_822FE80C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822fd4a8
	ctx.lr = 0x822FE708;
	sub_822FD4A8(ctx, base);
	// b 0x822fe7c0
	goto loc_822FE7C0;
loc_822FE70C:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r29,16
	ctx.r8.s64 = r29.s64 + 16;
loc_822FE718:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822fe738
	if (!ctx.cr0.eq) goto loc_822FE738;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822fe718
	if (!ctx.cr6.eq) goto loc_822FE718;
loc_822FE738:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822fe770
	if (!ctx.cr6.eq) goto loc_822FE770;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ld r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 40);
	// addi r11,r4,-24
	ctx.r11.s64 = ctx.r4.s64 + -24;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bgt cr6,0x822fe80c
	if (ctx.cr6.gt) goto loc_822FE80C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822fe048
	ctx.lr = 0x822FE76C;
	sub_822FE048(ctx, base);
	// b 0x822fe7c0
	goto loc_822FE7C0;
loc_822FE770:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r11,-24
	ctx.r9.s64 = ctx.r11.s64 + -24;
	// clrldi r11,r9,32
	ctx.r11.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// b 0x822fe7c8
	goto loc_822FE7C8;
loc_822FE788:
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r9,r20,16
	ctx.r9.u64 = r20.u32 & 0xFFFF;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r11,r4,-24
	ctx.r11.s64 = ctx.r4.s64 + -24;
	// ld r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 40);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrlwi r20,r7,16
	r20.u64 = ctx.r7.u32 & 0xFFFF;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r6,r8
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x822fe80c
	if (ctx.cr6.gt) goto loc_822FE80C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822fc060
	ctx.lr = 0x822FE7C0;
	sub_822FC060(ctx, base);
loc_822FE7C0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fe810
	if (!ctx.cr6.eq) goto loc_822FE810;
loc_822FE7C8:
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r9,r11,-50
	ctx.r9.s64 = ctx.r11.s64 + -50;
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x822fe48c
	if (ctx.cr6.lt) goto loc_822FE48C;
loc_822FE7DC:
	// clrlwi r11,r21,16
	ctx.r11.u64 = r21.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822fe80c
	if (!ctx.cr6.eq) goto loc_822FE80C;
	// clrlwi r11,r20,16
	ctx.r11.u64 = r20.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822fe80c
	if (ctx.cr6.lt) goto loc_822FE80C;
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r9,r11,-50
	ctx.r9.s64 = ctx.r11.s64 + -50;
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x822fe810
	if (ctx.cr6.eq) goto loc_822FE810;
loc_822FE80C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822FE810:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_82310FC0) {
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
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x823107e8
	ctx.lr = 0x82310FE0;
	sub_823107E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231104c
	if (ctx.cr6.lt) goto loc_8231104C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82310c28
	ctx.lr = 0x82310FF0;
	sub_82310C28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231104c
	if (ctx.cr6.lt) goto loc_8231104C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82310b30
	ctx.lr = 0x82311004;
	sub_82310B30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231104c
	if (ctx.cr6.lt) goto loc_8231104C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r11.u64);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
	// std r11,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r11.u64);
	// std r11,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r11.u64);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// std r11,96(r31)
	REX_STORE_U64(r31.u32 + 96, ctx.r11.u64);
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
loc_8231104C:
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

DEFINE_REX_FUNC(sub_823127B8) {
	REX_FUNC_PROLOGUE();
	// b 0x82312478
	sub_82312478(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82312870) {
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
	// bl 0x822d4e80
	ctx.lr = 0x82312878;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,44(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// ld r10,40(r27)
	ctx.r10.u64 = REX_LOAD_U64(r27.u32 + 40);
	// cmpld cr6,r10,r4
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r4.u64, ctx.xer);
	// ble cr6,0x823128b4
	if (!ctx.cr6.gt) goto loc_823128B4;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_823128B4:
	// lwz r9,16(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823128d8
	if (ctx.cr6.eq) goto loc_823128D8;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_823128D8:
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r10,r29,32
	ctx.r10.u64 = r29.u64 & 0xFFFFFFFF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bge cr6,0x82312900
	if (!ctx.cr6.lt) goto loc_82312900;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,212
	ctx.r3.u64 = ctx.r3.u64 | 212;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_82312900:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 48);
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x822f9490
	ctx.lr = 0x82312914;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823129a4
	if (ctx.cr6.lt) goto loc_823129A4;
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82312934:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82312934
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82312934;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// std r30,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r30.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r29.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r11.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823132b0
	ctx.lr = 0x8231296C;
	sub_823132B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823129a4
	if (ctx.cr6.lt) goto loc_823129A4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823123f0
	ctx.lr = 0x82312988;
	sub_823123F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823129a4
	if (ctx.cr6.lt) goto loc_823129A4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_823129A4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823129c0
	if (ctx.cr6.eq) goto loc_823129C0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 48);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x822f94e8
	ctx.lr = 0x823129C0;
	sub_822F94E8(ctx, base);
loc_823129C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82316688) {
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
	// bl 0x822d4e80
	ctx.lr = 0x82316690;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8232e330
	ctx.lr = 0x8231669C;
	sub_8232E330(ctx, base);
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8232e5b8
	ctx.lr = 0x823166A8;
	sub_8232E5B8(ctx, base);
	// addi r29,r31,44
	r29.s64 = r31.s64 + 44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8232e5b8
	ctx.lr = 0x823166B4;
	sub_8232E5B8(ctx, base);
	// addi r28,r31,64
	r28.s64 = r31.s64 + 64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8232e5b8
	ctx.lr = 0x823166C0;
	sub_8232E5B8(ctx, base);
	// addi r27,r31,84
	r27.s64 = r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8232e5b8
	ctx.lr = 0x823166CC;
	sub_8232E5B8(ctx, base);
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823166e4
	if (ctx.cr6.eq) goto loc_823166E4;
	// bl 0x823143d0
	ctx.lr = 0x823166E0;
	sub_823143D0(ctx, base);
	// stw r26,148(r31)
	REX_STORE_U32(r31.u32 + 148, r26.u32);
loc_823166E4:
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823166f8
	if (ctx.cr6.eq) goto loc_823166F8;
	// bl 0x823143d0
	ctx.lr = 0x823166F4;
	sub_823143D0(ctx, base);
	// stw r26,160(r31)
	REX_STORE_U32(r31.u32 + 160, r26.u32);
loc_823166F8:
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x82316708;
	sub_822D5870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247a060
	ctx.lr = 0x82316710;
	sub_8247A060(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823dafc8
	ctx.lr = 0x82316718;
	sub_823DAFC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823dafc8
	ctx.lr = 0x82316720;
	sub_823DAFC8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823dafc8
	ctx.lr = 0x82316728;
	sub_823DAFC8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823dafc8
	ctx.lr = 0x82316730;
	sub_823DAFC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8231AD48) {
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
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,-30400
	r30.s64 = ctx.r11.s64 + -30400;
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231ad78
	if (!ctx.cr6.eq) goto loc_8231AD78;
	// bl 0x8231ac80
	ctx.lr = 0x8231AD78;
	sub_8231AC80(ctx, base);
loc_8231AD78:
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(r31.s32, 20, ctx.xer);
	// blt cr6,0x8231ade4
	if (ctx.cr6.lt) goto loc_8231ADE4;
	// cmpwi cr6,r31,320
	ctx.cr6.compare<int32_t>(r31.s32, 320, ctx.xer);
	// bge cr6,0x8231ade4
	if (!ctx.cr6.lt) goto loc_8231ADE4;
	// lis r11,26214
	ctx.r11.s64 = 1717960704;
	// li r10,20
	ctx.r10.s64 = 20;
	// ori r9,r11,26215
	ctx.r9.u64 = ctx.r11.u64 | 26215;
	// divw r10,r31,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(r31.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? r31.s32 / ctx.r10.s32 : 0);
	// mulhw r8,r31,r9
	ctx.r8.s64 = (int64_t(r31.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r6,r31
	ctx.r11.u64 = r31.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8231adc4
	if (!ctx.cr0.lt) goto loc_8231ADC4;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8231ADC4:
	// addi r9,r30,80
	ctx.r9.s64 = r30.s64 + 80;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r30,20
	ctx.r6.s64 = r30.s64 + 20;
	// lfsx f0,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r7,r6
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x8231ae14
	goto loc_8231AE14;
loc_8231ADE4:
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,16260(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16260);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,-6032(r10)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -6032);
	// fmuls f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x822d5b48
	ctx.lr = 0x8231AE10;
	sub_822D5B48(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
loc_8231AE14:
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

DEFINE_REX_FUNC(sub_82323A68) {
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
	// bl 0x822d4e64
	ctx.lr = 0x82323A70;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,0(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r25,r29
	r25.u64 = r29.u64;
	// lhz r11,34(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 34);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82323b38
	if (!ctx.cr6.eq) goto loc_82323B38;
	// lwz r11,744(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 744);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82323b38
	if (ctx.cr6.eq) goto loc_82323B38;
	// li r24,1
	r24.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, r24.u32);
	// stw r24,572(r26)
	REX_STORE_U32(r26.u32 + 572, r24.u32);
	// lwz r30,120(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// stw r24,0(r30)
	REX_STORE_U32(r30.u32 + 0, r24.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lhz r11,34(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 34);
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x822d5870
	ctx.lr = 0x82323AC8;
	sub_822D5870(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r24.u32);
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r24,12(r30)
	REX_STORE_U32(r30.u32 + 12, r24.u32);
	// stw r29,16(r30)
	REX_STORE_U32(r30.u32 + 16, r29.u32);
	// stw r24,20(r30)
	REX_STORE_U32(r30.u32 + 20, r24.u32);
	// bl 0x822d5870
	ctx.lr = 0x82323AF0;
	sub_822D5870(ctx, base);
	// lhz r9,34(r26)
	ctx.r9.u64 = REX_LOAD_U16(r26.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// mullw r8,r9,r9
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82323B08;
	sub_822D5870(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r4,148(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 148);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r24,12(r30)
	REX_STORE_U32(r30.u32 + 12, r24.u32);
	// stw r6,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r6.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,1992(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stw r5,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r5.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb4
	return;
loc_82323B38:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82323f34
	if (ctx.cr6.eq) goto loc_82323F34;
	// li r24,1
	r24.s64 = 1;
	// li r23,2
	r23.s64 = 2;
	// li r22,3
	r22.s64 = 3;
	// li r19,4
	r19.s64 = 4;
	// li r20,5
	r20.s64 = 5;
	// li r21,8
	r21.s64 = 8;
loc_82323B5C:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82323f28
	if (ctx.cr6.gt) goto loc_82323F28;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82323c74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82323C74;
	// bdzf 4*cr6+eq,0x82323ca8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82323CA8;
	// bdzf 4*cr6+eq,0x82323d4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82323D4C;
	// bdzf 4*cr6+eq,0x82323dd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82323DD8;
	// bdzf 4*cr6+eq,0x82323e60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82323E60;
	// bdzf 4*cr6+eq,0x82323e60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82323E60;
	// bdzf 4*cr6+eq,0x82323f28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82323F28;
	// bne cr6,0x82323eac
	if (!ctx.cr6.eq) goto loc_82323EAC;
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// lhz r10,580(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 580);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r29,116(r31)
	REX_STORE_U32(r31.u32 + 116, r29.u32);
	// stw r29,100(r31)
	REX_STORE_U32(r31.u32 + 100, r29.u32);
	// stw r29,108(r31)
	REX_STORE_U32(r31.u32 + 108, r29.u32);
	// stw r29,104(r31)
	REX_STORE_U32(r31.u32 + 104, r29.u32);
	// stw r9,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// stw r29,112(r31)
	REX_STORE_U32(r31.u32 + 112, r29.u32);
	// lhz r8,34(r26)
	ctx.r8.u64 = REX_LOAD_U16(r26.u32 + 34);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82323be4
	if (ctx.cr6.eq) goto loc_82323BE4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82323BC8:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r29,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r29.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lhz r8,34(r26)
	ctx.r8.u64 = REX_LOAD_U16(r26.u32 + 34);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82323bc8
	if (ctx.cr6.lt) goto loc_82323BC8;
loc_82323BE4:
	// lhz r11,580(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 580);
	// mr r27,r29
	r27.u64 = r29.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82323c6c
	if (!ctx.cr6.gt) goto loc_82323C6C;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_82323BFC:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// stwx r29,r11,r28
	REX_STORE_U32(ctx.r11.u32 + r28.u32, r29.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lhz r11,34(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 34);
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x822d5870
	ctx.lr = 0x82323C1C;
	sub_822D5870(ctx, base);
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// stw r29,12(r30)
	REX_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r29,16(r30)
	REX_STORE_U32(r30.u32 + 16, r29.u32);
	// stw r29,20(r30)
	REX_STORE_U32(r30.u32 + 20, r29.u32);
	// bl 0x822d5870
	ctx.lr = 0x82323C3C;
	sub_822D5870(ctx, base);
	// lhz r10,34(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// mullw r9,r10,r10
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82323C54;
	sub_822D5870(ctx, base);
	// lhz r8,580(r26)
	ctx.r8.u64 = REX_LOAD_U16(r26.u32 + 580);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// addi r28,r28,152
	r28.s64 = r28.s64 + 152;
	// cmpw cr6,r27,r7
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82323bfc
	if (ctx.cr6.lt) goto loc_82323BFC;
loc_82323C6C:
	// stw r24,88(r31)
	REX_STORE_U32(r31.u32 + 88, r24.u32);
	// b 0x82323f28
	goto loc_82323F28;
loc_82323C74:
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x82323C88;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82323f34
	if (ctx.cr6.lt) goto loc_82323F34;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// b 0x82323f24
	goto loc_82323F24;
loc_82323CA8:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82323cd4
	if (!ctx.cr6.eq) goto loc_82323CD4;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82323f40
	if (ctx.cr6.eq) goto loc_82323F40;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82323cd4
	if (!ctx.cr6.eq) goto loc_82323CD4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82323f5c
	if (ctx.cr6.eq) goto loc_82323F5C;
loc_82323CD4:
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x8246e538
	ctx.lr = 0x82323CE0;
	sub_8246E538(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82323f34
	if (ctx.cr6.lt) goto loc_82323F34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82323700
	ctx.lr = 0x82323CF4;
	sub_82323700(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82323f34
	if (ctx.cr6.lt) goto loc_82323F34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82323120
	ctx.lr = 0x82323D08;
	sub_82323120(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82323f34
	if (ctx.cr6.lt) goto loc_82323F34;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r9,r11,152
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r29,108(r31)
	REX_STORE_U32(r31.u32 + 108, r29.u32);
	// stw r29,112(r31)
	REX_STORE_U32(r31.u32 + 112, r29.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r22,88(r31)
	REX_STORE_U32(r31.u32 + 88, r22.u32);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// stw r5,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r5.u32);
	// b 0x82323f28
	goto loc_82323F28;
loc_82323D4C:
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r10,r10,152
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(152));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82323dd0
	if (!ctx.cr6.eq) goto loc_82323DD0;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82323dd0
	if (!ctx.cr6.lt) goto loc_82323DD0;
	// addi r28,r31,224
	r28.s64 = r31.s64 + 224;
loc_82323D7C:
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82319780
	ctx.lr = 0x82323D90;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82323f34
	if (ctx.cr6.lt) goto loc_82323F34;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,136(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 136);
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stbx r7,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u8);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r6.u32);
	// lwz r5,100(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82323d7c
	if (ctx.cr6.lt) goto loc_82323D7C;
loc_82323DD0:
	// stw r19,88(r31)
	REX_STORE_U32(r31.u32 + 88, r19.u32);
	// b 0x82323f28
	goto loc_82323F28;
loc_82323DD8:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r11,r11,152
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82323e58
	if (!ctx.cr6.eq) goto loc_82323E58;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82323e58
	if (!ctx.cr6.lt) goto loc_82323E58;
	// addi r28,r31,224
	r28.s64 = r31.s64 + 224;
loc_82323E08:
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82319780
	ctx.lr = 0x82323E1C;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82323f34
	if (ctx.cr6.lt) goto loc_82323F34;
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r7.u32);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,104(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82323e08
	if (ctx.cr6.lt) goto loc_82323E08;
loc_82323E58:
	// stw r20,88(r31)
	REX_STORE_U32(r31.u32 + 88, r20.u32);
	// b 0x82323f28
	goto loc_82323F28;
loc_82323E60:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82323490
	ctx.lr = 0x82323E68;
	sub_82323490(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82323f34
	if (ctx.cr6.lt) goto loc_82323F34;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82323f28
	if (!ctx.cr6.eq) goto loc_82323F28;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r9,r11,152
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r21,88(r31)
	REX_STORE_U32(r31.u32 + 88, r21.u32);
	// subf r6,r7,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r7.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r6,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r6.u32);
	// stw r5,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r5.u32);
	// b 0x82323f28
	goto loc_82323F28;
loc_82323EAC:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82323f24
	if (ctx.cr6.eq) goto loc_82323F24;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x82323ECC;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82323f34
	if (ctx.cr6.lt) goto loc_82323F34;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82323f24
	if (!ctx.cr6.eq) goto loc_82323F24;
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// lhz r10,580(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 580);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r9,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// lhz r8,34(r26)
	ctx.r8.u64 = REX_LOAD_U16(r26.u32 + 34);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82323f24
	if (ctx.cr6.eq) goto loc_82323F24;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82323F08:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r29,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r29.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lhz r8,34(r26)
	ctx.r8.u64 = REX_LOAD_U16(r26.u32 + 34);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82323f08
	if (ctx.cr6.lt) goto loc_82323F08;
loc_82323F24:
	// stw r23,88(r31)
	REX_STORE_U32(r31.u32 + 88, r23.u32);
loc_82323F28:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82323b5c
	if (!ctx.cr6.eq) goto loc_82323B5C;
loc_82323F34:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb4
	return;
loc_82323F40:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r10,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// stw r11,572(r26)
	REX_STORE_U32(r26.u32 + 572, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb4
	return;
loc_82323F5C:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_8233EF18) {
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
	// bl 0x822d4e74
	ctx.lr = 0x8233EF20;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824d438c
	ctx.lr = 0x8233EF30;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,12(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 12);
	// li r23,0
	r23.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r25,r23
	r25.u64 = r23.u64;
	// addi r24,r11,15387
	r24.s64 = ctx.r11.s64 + 15387;
	// lwz r28,28(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 28);
	// subf r8,r28,r10
	ctx.r8.u64 = ctx.r10.u64 - r28.u64;
	// subfic r7,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r5,r28
	r31.u64 = ctx.r5.u64 & r28.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8233f050
	if (!ctx.cr6.lt) goto loc_8233F050;
	// lwz r8,24(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 24);
	// addi r29,r27,16
	r29.s64 = r27.s64 + 16;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8233EF70:
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8233ef80
	if (ctx.cr6.lt) goto loc_8233EF80;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// b 0x8233ef88
	goto loc_8233EF88;
loc_8233EF80:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_8233EF88:
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// extsb r30,r11
	r30.s64 = ctx.r11.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8233efac
	if (ctx.cr6.eq) goto loc_8233EFAC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8233ef70
	if (ctx.cr6.lt) goto loc_8233EF70;
	// b 0x8233f050
	goto loc_8233F050;
loc_8233EFAC:
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8233efb8
	if (ctx.cr6.lt) goto loc_8233EFB8;
	// bl 0x823ce368
	ctx.lr = 0x8233EFB8;
	sub_823CE368(ctx, base);
loc_8233EFB8:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8233efd4
	if (!ctx.cr6.lt) goto loc_8233EFD4;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r9,r30,1
	ctx.r9.u64 = r30.u64 | 1;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_8233EFD4:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// addi r30,r27,4
	r30.s64 = r27.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8233eff8
	if (!ctx.cr6.lt) goto loc_8233EFF8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r25,r10,r11
	r25.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x8233f038
	if (!ctx.cr6.eq) goto loc_8233F038;
loc_8233EFF8:
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,32(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8233ff60
	ctx.lr = 0x8233F00C;
	sub_8233FF60(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233f020
	if (ctx.cr6.lt) goto loc_8233F020;
	// bl 0x823ce368
	ctx.lr = 0x8233F020;
	sub_823CE368(ctx, base);
loc_8233F020:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8233f038
	if (!ctx.cr6.lt) goto loc_8233F038;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r25.u32);
loc_8233F038:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// bne cr6,0x8233f048
	if (!ctx.cr6.eq) goto loc_8233F048;
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// stw r11,28(r27)
	REX_STORE_U32(r27.u32 + 28, ctx.r11.u32);
loc_8233F048:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x8233f158
	if (!ctx.cr6.eq) goto loc_8233F158;
loc_8233F050:
	// addi r29,r27,4
	r29.s64 = r27.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ea50
	ctx.lr = 0x8233F060;
	sub_8233EA50(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8233f158
	if (ctx.cr6.lt) goto loc_8233F158;
	// addi r30,r27,16
	r30.s64 = r27.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233ea50
	ctx.lr = 0x8233F07C;
	sub_8233EA50(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8233f138
	if (ctx.cr6.lt) goto loc_8233F138;
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,32(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8233ff60
	ctx.lr = 0x8233F09C;
	sub_8233FF60(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233f118
	if (ctx.cr6.eq) goto loc_8233F118;
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// stw r11,28(r27)
	REX_STORE_U32(r27.u32 + 28, ctx.r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8233f0c0
	if (ctx.cr6.lt) goto loc_8233F0C0;
	// bl 0x823ce368
	ctx.lr = 0x8233F0C0;
	sub_823CE368(ctx, base);
loc_8233F0C0:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8233f0dc
	if (!ctx.cr6.lt) goto loc_8233F0DC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_8233F0DC:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233f0ec
	if (ctx.cr6.lt) goto loc_8233F0EC;
	// bl 0x823ce368
	ctx.lr = 0x8233F0EC;
	sub_823CE368(ctx, base);
loc_8233F0EC:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8233f158
	if (!ctx.cr6.lt) goto loc_8233F158;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r25.u32);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x824d437c
	ctx.lr = 0x8233F10C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
loc_8233F118:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233f138
	if (ctx.cr6.eq) goto loc_8233F138;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stwx r23,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r23.u32);
loc_8233F138:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233f158
	if (ctx.cr6.eq) goto loc_8233F158;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stwx r23,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r23.u32);
loc_8233F158:
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x824d437c
	ctx.lr = 0x8233F160;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82353F98) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e50
	ctx.lr = 0x82353FA0;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f38
	ctx.lr = 0x82353FA8;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fmr f28,f3
	f28.f64 = ctx.f3.f64;
	// bne cr6,0x82353fd8
	if (!ctx.cr6.eq) goto loc_82353FD8;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f84
	ctx.lr = 0x82353FD4;
	// b 0x822d4ea0
	return;
loc_82353FD8:
	// fneg f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = f29.u64 ^ 0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,20(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 20);
	// lwz r9,15408(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 15408);
	// lwz r8,15412(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 15412);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// lwz r6,15392(r23)
	ctx.r6.u64 = REX_LOAD_U32(r23.u32 + 15392);
	// lfd f31,31912(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 31912);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// srawi r28,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	r28.s64 = ctx.r6.s32 >> 1;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r28,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// fsel f1,f0,f0,f31
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// bl 0x822d60f0
	ctx.lr = 0x82354014;
	sub_822D60F0(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f13.u64);
	// lwz r5,156(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// lwz r3,15392(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 15392);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r11.u64);
	// lfd f12,152(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f13,f12
	ctx.f13.f64 = double(ctx.f12.s64);
	// lfd f11,144(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f11
	ctx.f0.f64 = double(ctx.f11.s64);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82354050
	if (!ctx.cr6.lt) goto loc_82354050;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82354050:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x822d6130
	ctx.lr = 0x82354058;
	sub_822D6130(ctx, base);
	// lwz r11,15392(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 15392);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lwz r10,20(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 20);
	// stfd f0,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r29,156(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// lfd f13,152(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// std r8,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lfd f12,152(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f0,f13
	ctx.f0.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fsub f13,f11,f29
	ctx.f13.f64 = ctx.f11.f64 - f29.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8235409c
	if (ctx.cr6.lt) goto loc_8235409C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8235409C:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x822d6130
	ctx.lr = 0x823540A4;
	sub_822D6130(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// lfd f13,152(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fsel f1,f12,f12,f31
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : f31.f64;
	// bl 0x822d60f0
	ctx.lr = 0x823540C8;
	sub_822D60F0(ctx, base);
	// fneg f11,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = f30.u64 ^ 0x8000000000000000;
	// fctiwz f10,f1
	ctx.f10.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f10,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f10.u64);
	// lwz r30,156(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// fsel f1,f11,f11,f31
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : f31.f64;
	// bl 0x822d60f0
	ctx.lr = 0x823540E0;
	sub_822D60F0(ctx, base);
	// fctiwz f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f9,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f9.u64);
	// lwz r9,156(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lwz r7,15396(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 15396);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// lfd f8,152(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f0,f8
	ctx.f0.f64 = double(ctx.f8.s64);
	// lfd f7,144(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f7
	ctx.f13.f64 = double(ctx.f7.s64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8235411c
	if (ctx.cr6.lt) goto loc_8235411C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8235411C:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x822d6130
	ctx.lr = 0x82354124;
	sub_822D6130(ctx, base);
	// lwz r11,15396(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 15396);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lwz r10,15388(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 15388);
	// stfd f0,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r31,156(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// lfd f13,152(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// std r8,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lfd f12,152(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fsub f0,f11,f30
	ctx.f0.f64 = ctx.f11.f64 - f30.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82354168
	if (!ctx.cr6.lt) goto loc_82354168;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82354168:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x822d6130
	ctx.lr = 0x82354170;
	sub_822D6130(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// rlwinm r21,r11,0,0,30
	r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r31,r10,0,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r14,r30,0,0,30
	r14.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r21,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r21.u32);
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// lwz r9,156(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lfd f13,152(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fsel f1,f12,f12,f31
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : f31.f64;
	// bl 0x822d60f0
	ctx.lr = 0x823541B0;
	sub_822D60F0(ctx, base);
	// fctiwz f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f11,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f11.u64);
	// lwz r7,156(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// rlwinm r30,r7,0,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r30,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// bge cr6,0x823541d4
	if (!ctx.cr6.lt) goto loc_823541D4;
	// li r30,2
	r30.s64 = 2;
	// stw r30,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r30.u32);
loc_823541D4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,15420(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 15420);
	// rlwinm r10,r21,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 11) & 0xFFFFF800;
	// lwz r6,15424(r23)
	ctx.r6.u64 = REX_LOAD_U32(r23.u32 + 15424);
	// rlwinm r9,r31,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 11) & 0xFFFFF800;
	// lwz r17,15416(r23)
	r17.u64 = REX_LOAD_U32(r23.u32 + 15416);
	// srawi r8,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	ctx.r8.s64 = r31.s32 >> 1;
	// srawi r7,r14,1
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x1) != 0);
	ctx.r7.s64 = r14.s32 >> 1;
	// lfd f0,-28720(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -28720);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmul f12,f29,f0
	ctx.f12.f64 = f29.f64 * ctx.f0.f64;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// fmul f13,f30,f0
	ctx.f13.f64 = f30.f64 * ctx.f0.f64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lfd f0,26664(r5)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r5.u32 + 26664);
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(f28.f64, ctx.f0.f64);
	// fctiwz f10,f12
	ctx.f10.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f10.u64);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f11.u64);
	// lwz r3,156(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// srawi r8,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 11;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// clrlwi r19,r9,21
	r19.u64 = ctx.r9.u32 & 0x7FF;
	// and r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 & ctx.r10.u64;
	// srawi r3,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 11;
	// srawi r11,r5,12
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 12;
	// srawi r10,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// srawi r8,r9,12
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 12;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// clrlwi r18,r5,21
	r18.u64 = ctx.r5.u32 & 0x7FF;
	// stw r8,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// clrlwi r25,r7,21
	r25.u64 = ctx.r7.u32 & 0x7FF;
	// clrlwi r24,r10,21
	r24.u64 = ctx.r10.u32 & 0x7FF;
	// subfic r5,r25,2048
	ctx.xer.ca = r25.u32 <= 2048;
	ctx.r5.u64 = static_cast<uint64_t>(2048) - r25.u64;
	// subfic r3,r18,2048
	ctx.xer.ca = r18.u32 <= 2048;
	ctx.r3.u64 = static_cast<uint64_t>(2048) - r18.u64;
	// mullw r16,r25,r24
	r16.s64 = int64_t(r25.s32) * int64_t(r24.s32);
	// subf r26,r24,r5
	r26.u64 = ctx.r5.u64 - r24.u64;
	// subf r22,r19,r3
	r22.u64 = ctx.r3.u64 - r19.u64;
	// mullw r15,r18,r19
	r15.s64 = int64_t(r18.s32) * int64_t(r19.s32);
	// ble cr6,0x823542a4
	if (!ctx.cr6.gt) goto loc_823542A4;
	// fmr f28,f0
	f28.f64 = ctx.f0.f64;
	// b 0x823542b0
	goto loc_823542B0;
loc_823542A4:
	// fcmpu cr6,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, f31.f64);
	// bge cr6,0x823542b0
	if (!ctx.cr6.lt) goto loc_823542B0;
	// fmr f28,f31
	f28.f64 = f31.f64;
loc_823542B0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// lfd f0,-28728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -28728);
	// fmul f0,f28,f0
	ctx.f0.f64 = f28.f64 * ctx.f0.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f13.u64);
	// lwz r27,156(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// ble cr6,0x82354378
	if (!ctx.cr6.gt) goto loc_82354378;
loc_823542DC:
	// lwz r10,15392(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 15392);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82354304
	if (!ctx.cr6.gt) goto loc_82354304;
	// addi r10,r17,-1
	ctx.r10.s64 = r17.s64 + -1;
loc_823542F0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r5,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r10.u32 = ea;
	// lwz r8,15392(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 15392);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823542f0
	if (ctx.cr6.lt) goto loc_823542F0;
loc_82354304:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82354328
	if (!ctx.cr6.gt) goto loc_82354328;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// subf r10,r6,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r6.u64;
loc_82354318:
	// stbx r3,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u8);
	// stb r3,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82354318
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82354318;
loc_82354328:
	// lwz r11,15392(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 15392);
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + r28.u64;
	// add r8,r11,r17
	ctx.r8.u64 = ctx.r11.u64 + r17.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82354360
	if (!ctx.cr6.gt) goto loc_82354360;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
loc_8235434C:
	// stbu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,15392(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 15392);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8235434c
	if (ctx.cr6.lt) goto loc_8235434C;
loc_82354360:
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// add r17,r11,r8
	r17.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r21.s32, ctx.xer);
	// blt cr6,0x823542dc
	if (ctx.cr6.lt) goto loc_823542DC;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
loc_82354378:
	// addi r11,r30,-2
	ctx.r11.s64 = r30.s64 + -2;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82354aac
	if (!ctx.cr6.lt) goto loc_82354AAC;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r20,128(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// stw r10,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
loc_82354398:
	// lwz r10,20(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 20);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mullw r10,r20,r10
	ctx.r10.s64 = int64_t(r20.s32) * int64_t(ctx.r10.s32);
	// lwz r9,15404(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 15404);
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble cr6,0x823543e0
	if (!ctx.cr6.gt) goto loc_823543E0;
	// addi r11,r17,-1
	ctx.r11.s64 = r17.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823543dc
	if (ctx.cr6.eq) goto loc_823543DC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823543D4:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823543d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823543D4;
loc_823543DC:
	// add r11,r17,r8
	ctx.r11.u64 = r17.u64 + ctx.r8.u64;
loc_823543E0:
	// lwz r9,20(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 20);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne cr6,0x82354430
	if (!ctx.cr6.eq) goto loc_82354430;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x82354478
	if (!ctx.cr6.eq) goto loc_82354478;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r14.s32, ctx.xer);
	// bge cr6,0x82354528
	if (!ctx.cr6.lt) goto loc_82354528;
	// subf r7,r8,r14
	ctx.r7.u64 = r14.u64 - ctx.r8.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82354410:
	// lbzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r7,r8,r27
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(r27.s32);
	// rlwinm r6,r7,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82354410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82354410;
	// b 0x82354528
	goto loc_82354528;
loc_82354430:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x823544c4
	if (!ctx.cr6.eq) goto loc_823544C4;
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r14.s32, ctx.xer);
	// bge cr6,0x82354528
	if (!ctx.cr6.lt) goto loc_82354528;
	// subf r9,r8,r14
	ctx.r9.u64 = r14.u64 - ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82354448:
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mullw r9,r7,r22
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(r22.s32);
	// mullw r8,r6,r19
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(r19.s32);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r4,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 11;
	// mullw r3,r4,r27
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(r27.s32);
	// rlwinm r9,r3,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82354448
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82354448;
	// b 0x82354528
	goto loc_82354528;
loc_82354478:
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r14.s32, ctx.xer);
	// bge cr6,0x82354528
	if (!ctx.cr6.lt) goto loc_82354528;
	// subf r7,r8,r14
	ctx.r7.u64 = r14.u64 - ctx.r8.u64;
	// subf r6,r8,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82354490:
	// lbzx r7,r6,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbzu r5,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mullw r7,r7,r22
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r22.s32);
	// mullw r9,r5,r18
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(r18.s32);
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r3,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 11;
	// mullw r9,r3,r27
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(r27.s32);
	// rlwinm r7,r9,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82354490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82354490;
	// b 0x82354528
	goto loc_82354528;
loc_823544C4:
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r14.s32, ctx.xer);
	// bge cr6,0x82354528
	if (!ctx.cr6.lt) goto loc_82354528;
	// subf r8,r8,r14
	ctx.r8.u64 = r14.u64 - ctx.r8.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823544D4:
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbzu r4,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzu r3,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r7,r5,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r5.u64;
	// mullw r6,r8,r22
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(r22.s32);
	// subf r7,r3,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r3.u64;
	// mullw r5,r5,r18
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r18.s32);
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r7,r3,r19
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(r19.s32);
	// mullw r3,r4,r15
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(r15.s32);
	// srawi r8,r3,11
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 11;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r7,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 11;
	// mullw r6,r7,r27
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(r27.s32);
	// rlwinm r5,r6,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// stb r5,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823544d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823544D4;
loc_82354528:
	// lwz r10,15392(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 15392);
	// cmpw cr6,r14,r10
	ctx.cr6.compare<int32_t>(r14.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82354554
	if (!ctx.cr6.lt) goto loc_82354554;
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82354540:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// lwz r8,15392(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 15392);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82354540
	if (ctx.cr6.lt) goto loc_82354540;
loc_82354554:
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// srawi r10,r21,1
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1) != 0);
	ctx.r10.s64 = r21.s32 >> 1;
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mullw r9,r5,r6
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// ble cr6,0x823545a8
	if (!ctx.cr6.gt) goto loc_823545A8;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// li r9,128
	ctx.r9.s64 = 128;
loc_82354594:
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82354594
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82354594;
loc_823545A8:
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// bne cr6,0x82354640
	if (!ctx.cr6.eq) goto loc_82354640;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x823546d4
	if (!ctx.cr6.eq) goto loc_823546D4;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8235487c
	if (!ctx.cr6.lt) goto loc_8235487C;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// subf r4,r7,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r7.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subf r6,r5,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r5.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_823545F4:
	// lbzx r8,r6,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,-128
	ctx.r8.s64 = ctx.r8.s64 + -128;
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// mullw r5,r8,r27
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(r27.s32);
	// mullw r4,r7,r27
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(r27.s32);
	// rlwinm r8,r5,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r7,r4,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// addi r3,r8,128
	ctx.r3.s64 = ctx.r8.s64 + 128;
	// addi r8,r7,128
	ctx.r8.s64 = ctx.r7.s64 + 128;
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r5,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x823545f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823545F4;
	// b 0x8235487c
	goto loc_8235487C;
loc_82354640:
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x82354788
	if (!ctx.cr6.eq) goto loc_82354788;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8235487c
	if (!ctx.cr6.lt) goto loc_8235487C;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// subf r5,r7,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r7.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82354664:
	// lbz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbzu r7,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbz r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbzu r5,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mullw r6,r7,r25
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(r25.s32);
	// mullw r7,r4,r26
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(r26.s32);
	// mullw r4,r3,r26
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(r26.s32);
	// mullw r5,r5,r25
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r25.s32);
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r6,r4,r5
	ctx.r6.u64 = ctx.r4.u64 + ctx.r5.u64;
	// srawi r7,r3,11
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 11;
	// srawi r6,r6,11
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 11;
	// addi r5,r7,-128
	ctx.r5.s64 = ctx.r7.s64 + -128;
	// addi r4,r6,-128
	ctx.r4.s64 = ctx.r6.s64 + -128;
	// mullw r3,r5,r27
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(r27.s32);
	// mullw r6,r4,r27
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(r27.s32);
	// rlwinm r7,r3,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r6,r6,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// addi r5,r7,128
	ctx.r5.s64 = ctx.r7.s64 + 128;
	// addi r4,r6,128
	ctx.r4.s64 = ctx.r6.s64 + 128;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r7,r4,24
	ctx.r7.u64 = ctx.r4.u32 & 0xFF;
	// stb r3,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r7,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82354664
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82354664;
	// b 0x8235487c
	goto loc_8235487C;
loc_823546D4:
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8235487c
	if (!ctx.cr6.lt) goto loc_8235487C;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rotlwi r4,r8,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r31,r11,r9
	r31.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// subf r8,r6,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r6.u64;
	// subf r4,r7,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r7.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r3,r6,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r6.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_82354714:
	// lbz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// lbzx r30,r3,r8
	r30.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// mullw r9,r5,r24
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(r24.s32);
	// lbzu r4,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// mullw r6,r6,r26
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(r26.s32);
	// mullw r4,r4,r26
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(r26.s32);
	// mullw r5,r30,r24
	ctx.r5.s64 = int64_t(r30.s32) * int64_t(r24.s32);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r6,r4,r5
	ctx.r6.u64 = ctx.r4.u64 + ctx.r5.u64;
	// srawi r9,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 11;
	// srawi r6,r6,11
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 11;
	// addi r5,r9,-128
	ctx.r5.s64 = ctx.r9.s64 + -128;
	// addi r4,r6,-128
	ctx.r4.s64 = ctx.r6.s64 + -128;
	// mullw r9,r5,r27
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(r27.s32);
	// mullw r6,r4,r27
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(r27.s32);
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r6,r6,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// addi r5,r9,128
	ctx.r5.s64 = ctx.r9.s64 + 128;
	// addi r4,r6,128
	ctx.r4.s64 = ctx.r6.s64 + 128;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r6,r4,24
	ctx.r6.u64 = ctx.r4.u32 & 0xFF;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r6,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82354714
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82354714;
	// b 0x8235487c
	goto loc_8235487C;
loc_82354788:
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8235487c
	if (!ctx.cr6.lt) goto loc_8235487C;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf r31,r7,r6
	r31.u64 = ctx.r6.u64 - ctx.r7.u64;
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// add r6,r8,r5
	ctx.r6.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// subfic r3,r5,1
	ctx.xer.ca = ctx.r5.u32 <= 1;
	ctx.r3.u64 = static_cast<uint64_t>(1) - ctx.r5.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_823547B4:
	// lbz r31,0(r7)
	r31.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lbzx r30,r4,r9
	r30.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// mullw r28,r31,r24
	r28.s64 = int64_t(r31.s32) * int64_t(r24.s32);
	// lbzx r29,r3,r7
	r29.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf r31,r31,r30
	r31.u64 = r30.u64 - r31.u64;
	// mullw r30,r5,r26
	r30.s64 = int64_t(ctx.r5.s32) * int64_t(r26.s32);
	// subf r31,r29,r31
	r31.u64 = r31.u64 - r29.u64;
	// mullw r29,r29,r25
	r29.s64 = int64_t(r29.s32) * int64_t(r25.s32);
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r5,r5,r16
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r16.s32);
	// srawi r5,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 11;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + r30.u64;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + r29.u64;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + r28.u64;
	// srawi r5,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 11;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// mullw r5,r5,r27
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r27.s32);
	// rlwinm r5,r5,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// addi r5,r5,128
	ctx.r5.s64 = ctx.r5.s64 + 128;
	// stb r5,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r31,r4,r8
	r31.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// lbzx r28,r3,r6
	r28.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r6.u32);
	// lbz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r30,0(r6)
	r30.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// mullw r29,r30,r24
	r29.s64 = int64_t(r30.s32) * int64_t(r24.s32);
	// subf r31,r30,r31
	r31.u64 = r31.u64 - r30.u64;
	// mullw r30,r5,r26
	r30.s64 = int64_t(ctx.r5.s32) * int64_t(r26.s32);
	// subf r31,r28,r31
	r31.u64 = r31.u64 - r28.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// mullw r31,r28,r25
	r31.s64 = int64_t(r28.s32) * int64_t(r25.s32);
	// mullw r5,r5,r16
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r16.s32);
	// srawi r5,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 11;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + r30.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + r29.u64;
	// srawi r5,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 11;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// mullw r5,r5,r27
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r27.s32);
	// rlwinm r5,r5,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// addi r5,r5,128
	ctx.r5.s64 = ctx.r5.s64 + 128;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// stb r5,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x823547b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823547B4;
loc_8235487C:
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x823548b0
	if (!ctx.cr6.lt) goto loc_823548B0;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// li r7,128
	ctx.r7.s64 = 128;
loc_823548A0:
	// stbx r7,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// stbx r7,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x823548a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823548A0;
loc_823548B0:
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 20);
	// addi r3,r20,1
	ctx.r3.s64 = r20.s64 + 1;
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r21,1
	r31.s64 = r21.s64 + 1;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// lwz r11,15392(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 15392);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,15404(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 15404);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// add r4,r11,r17
	ctx.r4.u64 = ctx.r11.u64 + r17.u64;
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82354920
	if (!ctx.cr6.gt) goto loc_82354920;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8235491c
	if (ctx.cr6.eq) goto loc_8235491C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82354914:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82354914
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82354914;
loc_8235491C:
	// add r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 + ctx.r8.u64;
loc_82354920:
	// lwz r9,20(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 20);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne cr6,0x82354970
	if (!ctx.cr6.eq) goto loc_82354970;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x823549b8
	if (!ctx.cr6.eq) goto loc_823549B8;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r14.s32, ctx.xer);
	// bge cr6,0x82354a68
	if (!ctx.cr6.lt) goto loc_82354A68;
	// subf r7,r8,r14
	ctx.r7.u64 = r14.u64 - ctx.r8.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82354950:
	// lbzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r7,r8,r27
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(r27.s32);
	// rlwinm r6,r7,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82354950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82354950;
	// b 0x82354a68
	goto loc_82354A68;
loc_82354970:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x82354a04
	if (!ctx.cr6.eq) goto loc_82354A04;
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r14.s32, ctx.xer);
	// bge cr6,0x82354a68
	if (!ctx.cr6.lt) goto loc_82354A68;
	// subf r9,r8,r14
	ctx.r9.u64 = r14.u64 - ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82354988:
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mullw r9,r7,r22
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(r22.s32);
	// mullw r8,r6,r19
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(r19.s32);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r9,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 11;
	// mullw r8,r9,r27
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82354988
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82354988;
	// b 0x82354a68
	goto loc_82354A68;
loc_823549B8:
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r14.s32, ctx.xer);
	// bge cr6,0x82354a68
	if (!ctx.cr6.lt) goto loc_82354A68;
	// subf r7,r8,r14
	ctx.r7.u64 = r14.u64 - ctx.r8.u64;
	// subf r6,r8,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823549D0:
	// lbzu r5,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzx r7,r6,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mullw r9,r5,r18
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(r18.s32);
	// mullw r7,r7,r22
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r22.s32);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r7,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 11;
	// mullw r5,r7,r27
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(r27.s32);
	// rlwinm r9,r5,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823549d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823549D0;
	// b 0x82354a68
	goto loc_82354A68;
loc_82354A04:
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r14.s32, ctx.xer);
	// bge cr6,0x82354a68
	if (!ctx.cr6.lt) goto loc_82354A68;
	// subf r8,r8,r14
	ctx.r8.u64 = r14.u64 - ctx.r8.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82354A14:
	// lbz r30,0(r9)
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbzu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mullw r6,r30,r18
	ctx.r6.s64 = int64_t(r30.s32) * int64_t(r18.s32);
	// lbzu r29,1(r10)
	ea = 1 + ctx.r10.u32;
	r29.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r7,r30,r5
	ctx.r7.u64 = ctx.r5.u64 - r30.u64;
	// mullw r5,r8,r22
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(r22.s32);
	// subf r7,r29,r7
	ctx.r7.u64 = ctx.r7.u64 - r29.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r7,r29,r19
	ctx.r7.s64 = int64_t(r29.s32) * int64_t(r19.s32);
	// mullw r8,r8,r15
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r15.s32);
	// srawi r8,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 11;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r6,r7,11
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 11;
	// mullw r5,r6,r27
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(r27.s32);
	// rlwinm r8,r5,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82354a14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82354A14;
loc_82354A68:
	// lwz r10,15392(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 15392);
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
	// cmpw cr6,r14,r10
	ctx.cr6.compare<int32_t>(r14.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82354a94
	if (!ctx.cr6.lt) goto loc_82354A94;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82354A80:
	// stbu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,15392(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 15392);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82354a80
	if (ctx.cr6.lt) goto loc_82354A80;
loc_82354A94:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r21,r31,1
	r21.s64 = r31.s64 + 1;
	// add r17,r10,r4
	r17.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r20,r3,1
	r20.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82354398
	if (ctx.cr6.lt) goto loc_82354398;
loc_82354AAC:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82354cfc
	if (ctx.cr6.lt) goto loc_82354CFC;
	// lwz r31,124(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,15396(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 15396);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82354cfc
	if (!ctx.cr6.lt) goto loc_82354CFC;
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// lwz r30,132(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r15,128
	r15.s64 = 128;
	// lwz r24,108(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r21,96(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r18,100(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r22,0
	r22.s64 = 0;
	// lwz r20,104(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,88(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r26,92(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r29,112(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r16,136(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r19,144(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_82354B14:
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 20);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// lwz r8,15392(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 15392);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// lwz r9,15404(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 15404);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ble cr6,0x82354b94
	if (!ctx.cr6.gt) goto loc_82354B94;
	// subf r7,r24,r29
	ctx.r7.u64 = r29.u64 - r24.u64;
	// addi r11,r17,-1
	ctx.r11.s64 = r17.s64 + -1;
loc_82354B40:
	// lwz r9,15388(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 15388);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82354b80
	if (!ctx.cr6.lt) goto loc_82354B80;
	// lwz r6,20(r23)
	ctx.r6.u64 = REX_LOAD_U32(r23.u32 + 20);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82354b80
	if (!ctx.cr6.lt) goto loc_82354B80;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82354b80
	if (ctx.cr6.lt) goto loc_82354B80;
	// subf r9,r24,r8
	ctx.r9.u64 = ctx.r8.u64 - r24.u64;
	// lbzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// mullw r5,r6,r27
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(r27.s32);
	// rlwinm r9,r5,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82354b84
	goto loc_82354B84;
loc_82354B80:
	// stbu r22,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, r22.u8);
	ctx.r11.u32 = ea;
loc_82354B84:
	// lwz r9,15392(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 15392);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82354b40
	if (ctx.cr6.lt) goto loc_82354B40;
loc_82354B94:
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// add r5,r11,r16
	ctx.r5.u64 = ctx.r11.u64 + r16.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// mullw r11,r5,r18
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(r18.s32);
	// add r7,r11,r19
	ctx.r7.u64 = ctx.r11.u64 + r19.u64;
	// ble cr6,0x82354c48
	if (!ctx.cr6.gt) goto loc_82354C48;
	// subf r6,r25,r19
	ctx.r6.u64 = r19.u64 - r25.u64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addi r10,r26,-1
	ctx.r10.s64 = r26.s64 + -1;
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
loc_82354BC0:
	// lwz r9,15388(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 15388);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82354c38
	if (!ctx.cr6.lt) goto loc_82354C38;
	// add r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r18.s32, ctx.xer);
	// bge cr6,0x82354c38
	if (!ctx.cr6.lt) goto loc_82354C38;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82354c38
	if (ctx.cr6.lt) goto loc_82354C38;
	// subf r9,r25,r7
	ctx.r9.u64 = ctx.r7.u64 - r25.u64;
	// add r14,r9,r8
	r14.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// lbzx r9,r14,r21
	ctx.r9.u64 = REX_LOAD_U8(r14.u32 + r21.u32);
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// mullw r9,r9,r27
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// lwz r14,152(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r9,r14,r20
	ctx.r9.u64 = REX_LOAD_U8(r14.u32 + r20.u32);
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// mullw r9,r9,r27
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stb r9,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x82354c40
	goto loc_82354C40;
loc_82354C38:
	// stbu r15,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, r15.u8);
	ctx.r11.u32 = ea;
	// stbu r15,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, r15.u8);
	ctx.r10.u32 = ea;
loc_82354C40:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x82354bc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82354BC0;
loc_82354C48:
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 20);
	// addi r8,r4,1
	ctx.r8.s64 = ctx.r4.s64 + 1;
	// lwz r9,15404(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 15404);
	// add r28,r28,r30
	r28.u64 = r28.u64 + r30.u64;
	// mullw r10,r8,r11
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwz r11,15392(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 15392);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// add r7,r11,r17
	ctx.r7.u64 = ctx.r11.u64 + r17.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r26,r26,r30
	r26.u64 = r26.u64 + r30.u64;
	// addi r5,r31,1
	ctx.r5.s64 = r31.s64 + 1;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82354ce0
	if (!ctx.cr6.gt) goto loc_82354CE0;
	// subf r3,r24,r29
	ctx.r3.u64 = r29.u64 - r24.u64;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
loc_82354C8C:
	// lwz r11,15388(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 15388);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82354ccc
	if (!ctx.cr6.lt) goto loc_82354CCC;
	// lwz r31,20(r23)
	r31.u64 = REX_LOAD_U32(r23.u32 + 20);
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// bge cr6,0x82354ccc
	if (!ctx.cr6.lt) goto loc_82354CCC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82354ccc
	if (ctx.cr6.lt) goto loc_82354CCC;
	// subf r11,r24,r6
	ctx.r11.u64 = ctx.r6.u64 - r24.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// rlwinm r11,r11,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r11,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r11.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x82354cd0
	goto loc_82354CD0;
loc_82354CCC:
	// stbu r22,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, r22.u8);
	ctx.r9.u32 = ea;
loc_82354CD0:
	// lwz r11,15392(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 15392);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82354c8c
	if (ctx.cr6.lt) goto loc_82354C8C;
loc_82354CE0:
	// lwz r10,15396(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 15396);
	// addi r31,r5,1
	r31.s64 = ctx.r5.s64 + 1;
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// add r17,r11,r7
	r17.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82354b14
	if (ctx.cr6.lt) goto loc_82354B14;
loc_82354CFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f84
	ctx.lr = 0x82354D0C;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8238C5E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x8238C5E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,14668
	ctx.r3.s64 = 14668;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x8233d448
	ctx.lr = 0x8238C608;
	sub_8233D448(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238c624
	if (!ctx.cr6.eq) goto loc_8238C624;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_8238C624:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bcfe8
	ctx.lr = 0x8238C62C;
	sub_823BCFE8(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823c0550
	ctx.lr = 0x8238C644;
	sub_823C0550(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238c65c
	if (ctx.cr6.eq) goto loc_8238C65C;
	// bl 0x8238c158
	ctx.lr = 0x8238C658;
	sub_8238C158(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8238C65C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8238DAF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x8238DAF8;
	// li r11,4
	ctx.r11.s64 = 4;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// subf r31,r6,r7
	r31.u64 = ctx.r7.u64 - ctx.r6.u64;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 2;
	// addi r31,r31,-2
	r31.s64 = r31.s64 + -2;
loc_8238DB18:
	// lbzx r30,r31,r10
	r30.u64 = REX_LOAD_U8(r31.u32 + ctx.r10.u32);
	// add r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lbz r29,-2(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rotlwi r30,r30,16
	r30.u64 = __builtin_rotateleft32(r30.u32, 16);
	// lbz r28,1(r5)
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r27,0(r5)
	r27.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// or r30,r30,r29
	r30.u64 = r30.u64 | r29.u64;
	// rotlwi r29,r28,16
	r29.u64 = __builtin_rotateleft32(r28.u32, 16);
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r27
	r29.u64 = r29.u64 | r27.u64;
	// or r29,r29,r30
	r29.u64 = r29.u64 | r30.u64;
	// stw r29,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r29.u32);
	// lbzx r29,r5,r8
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// lbz r28,1(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r28,r28,16
	r28.u64 = __builtin_rotateleft32(r28.u32, 16);
	// or r29,r28,r29
	r29.u64 = r28.u64 | r29.u64;
	// or r30,r29,r30
	r30.u64 = r29.u64 | r30.u64;
	// stwx r30,r3,r4
	REX_STORE_U32(ctx.r3.u32 + ctx.r4.u32, r30.u32);
	// lbz r30,-1(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r29,3(r5)
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 3);
	// lbz r28,2(r5)
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 2);
	// lbz r27,-1(r7)
	r27.u64 = REX_LOAD_U8(ctx.r7.u32 + -1);
	// rotlwi r27,r27,16
	r27.u64 = __builtin_rotateleft32(r27.u32, 16);
	// rotlwi r29,r29,16
	r29.u64 = __builtin_rotateleft32(r29.u32, 16);
	// or r30,r27,r30
	r30.u64 = r27.u64 | r30.u64;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r30
	r29.u64 = r29.u64 | r30.u64;
	// stw r29,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, r29.u32);
	// lbz r29,2(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r28,3(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r28,r28,16
	r28.u64 = __builtin_rotateleft32(r28.u32, 16);
	// or r29,r28,r29
	r29.u64 = r28.u64 | r29.u64;
	// or r30,r29,r30
	r30.u64 = r29.u64 | r30.u64;
	// stw r30,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, r30.u32);
	// lbz r30,0(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r29,5(r5)
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 5);
	// lbz r28,4(r5)
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// lbz r27,0(r7)
	r27.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// rotlwi r27,r27,16
	r27.u64 = __builtin_rotateleft32(r27.u32, 16);
	// rotlwi r29,r29,16
	r29.u64 = __builtin_rotateleft32(r29.u32, 16);
	// or r30,r27,r30
	r30.u64 = r27.u64 | r30.u64;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r30
	r29.u64 = r29.u64 | r30.u64;
	// stw r29,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, r29.u32);
	// lbz r29,4(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r28,5(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r28,r28,16
	r28.u64 = __builtin_rotateleft32(r28.u32, 16);
	// or r29,r28,r29
	r29.u64 = r28.u64 | r29.u64;
	// or r30,r29,r30
	r30.u64 = r29.u64 | r30.u64;
	// stw r30,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, r30.u32);
	// lbz r30,1(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r29,7(r5)
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 7);
	// lbz r28,6(r5)
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 6);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r27,1(r7)
	r27.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// rotlwi r27,r27,16
	r27.u64 = __builtin_rotateleft32(r27.u32, 16);
	// rotlwi r29,r29,16
	r29.u64 = __builtin_rotateleft32(r29.u32, 16);
	// or r30,r27,r30
	r30.u64 = r27.u64 | r30.u64;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// or r29,r29,r30
	r29.u64 = r29.u64 | r30.u64;
	// stw r29,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, r29.u32);
	// add r4,r3,r6
	ctx.r4.u64 = ctx.r3.u64 + ctx.r6.u64;
	// lbz r29,6(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r11,7(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | r29.u64;
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | r30.u64;
	// stw r11,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// bdnz 0x8238db18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238DB18;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82392B28) {
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
	// bl 0x822d4e78
	ctx.lr = 0x82392B30;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82392bcc
	if (!ctx.cr6.gt) goto loc_82392BCC;
	// lwz r27,260(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// subf r30,r11,r6
	r30.u64 = ctx.r6.u64 - ctx.r11.u64;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_82392B68:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82392b8c
	if (!ctx.cr6.gt) goto loc_82392B8C;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_82392B7C:
	// lbzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82392b7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82392B7C;
loc_82392B8C:
	// bl 0x82392780
	ctx.lr = 0x82392B90;
	sub_82392780(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82392bc0
	if (!ctx.cr6.gt) goto loc_82392BC0;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
loc_82392BA8:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + r31.u32, ctx.r8.u8);
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
	// bdnz 0x82392ba8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82392BA8;
loc_82392BC0:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// bne 0x82392b68
	if (!ctx.cr0.eq) goto loc_82392B68;
loc_82392BCC:
	// lwz r29,252(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r31,r28
	r31.u64 = r28.u64;
	// lwz r27,268(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82392c50
	if (!ctx.cr6.gt) goto loc_82392C50;
	// subf r30,r28,r26
	r30.u64 = r26.u64 - r28.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_82392BEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82392c10
	if (!ctx.cr6.gt) goto loc_82392C10;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_82392C00:
	// lbzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82392c00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82392C00;
loc_82392C10:
	// bl 0x82392780
	ctx.lr = 0x82392C14;
	sub_82392780(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82392c44
	if (!ctx.cr6.gt) goto loc_82392C44;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
loc_82392C2C:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + r31.u32, ctx.r8.u8);
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
	// bdnz 0x82392c2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82392C2C;
loc_82392C44:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// bne 0x82392bec
	if (!ctx.cr0.eq) goto loc_82392BEC;
loc_82392C50:
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82392cc4
	if (!ctx.cr6.gt) goto loc_82392CC4;
	// subf r30,r25,r24
	r30.u64 = r24.u64 - r25.u64;
loc_82392C60:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82392c84
	if (!ctx.cr6.gt) goto loc_82392C84;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_82392C74:
	// lbzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82392c74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82392C74;
loc_82392C84:
	// bl 0x82392780
	ctx.lr = 0x82392C88;
	sub_82392780(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82392cb8
	if (!ctx.cr6.gt) goto loc_82392CB8;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
loc_82392CA0:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + r31.u32, ctx.r8.u8);
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
	// bdnz 0x82392ca0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82392CA0;
loc_82392CB8:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// bne 0x82392c60
	if (!ctx.cr0.eq) goto loc_82392C60;
loc_82392CC4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82394E58) {
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
	// bl 0x822d4e50
	ctx.lr = 0x82394E60;
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
	// ble cr6,0x823951b4
	if (!ctx.cr6.gt) goto loc_823951B4;
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
loc_82394EF8:
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
	// ble cr6,0x8239509c
	if (!ctx.cr6.gt) goto loc_8239509C;
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
loc_82394FFC:
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
	// bdnz 0x82394ffc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82394FFC;
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,255
	r27.s64 = 255;
	// lwz r25,300(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r26,308(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_8239509C:
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
	// ble cr6,0x823951a0
	if (!ctx.cr6.gt) goto loc_823951A0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_82395178:
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x82395190
	if (!ctx.cr6.gt) goto loc_82395190;
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 & r27.u64;
loc_82395190:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// stbux r8,r3,r10
	ea = ctx.r3.u32 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x82395178
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82395178;
loc_823951A0:
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
	// bne 0x82394ef8
	if (!ctx.cr0.eq) goto loc_82394EF8;
loc_823951B4:
	// lwz r7,324(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x82395210
	if (!ctx.cr6.gt) goto loc_82395210;
	// lwz r3,268(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mr r31,r25
	r31.u64 = r25.u64;
loc_823951C8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82394530
	ctx.lr = 0x823951D8;
	sub_82394530(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x823951c8
	if (!ctx.cr0.eq) goto loc_823951C8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x82395210
	if (!ctx.cr6.gt) goto loc_82395210;
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r31,r25
	r31.u64 = r25.u64;
loc_823951F4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82394530
	ctx.lr = 0x82395204;
	sub_82394530(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x823951f4
	if (!ctx.cr0.eq) goto loc_823951F4;
loc_82395210:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823A65D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823A65E0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r3,15984
	r30.s64 = ctx.r3.s64 + 15984;
	// li r31,2
	r31.s64 = 2;
loc_823A65F0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823af7a0
	ctx.lr = 0x823A65FC;
	sub_823AF7A0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,2208
	r30.s64 = r30.s64 + 2208;
	// bne 0x823a65f0
	if (!ctx.cr0.eq) goto loc_823A65F0;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lwz r11,-30192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -30192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823a6630
	if (!ctx.cr6.eq) goto loc_823A6630;
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// addi r9,r11,23248
	ctx.r9.s64 = ctx.r11.s64 + 23248;
	// addi r8,r10,23520
	ctx.r8.s64 = ctx.r10.s64 + 23520;
	// stw r9,3176(r29)
	REX_STORE_U32(r29.u32 + 3176, ctx.r9.u32);
	// stw r8,3184(r29)
	REX_STORE_U32(r29.u32 + 3184, ctx.r8.u32);
loc_823A6630:
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32198
	ctx.r9.s64 = -2110128128;
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32200
	ctx.r7.s64 = -2110259200;
	// lis r6,-32200
	ctx.r6.s64 = -2110259200;
	// addi r3,r9,23920
	ctx.r3.s64 = ctx.r9.s64 + 23920;
	// addi r5,r11,20024
	ctx.r5.s64 = ctx.r11.s64 + 20024;
	// addi r4,r10,23520
	ctx.r4.s64 = ctx.r10.s64 + 23520;
	// stw r3,3188(r29)
	REX_STORE_U32(r29.u32 + 3188, ctx.r3.u32);
	// addi r11,r8,25432
	ctx.r11.s64 = ctx.r8.s64 + 25432;
	// stw r5,3180(r29)
	REX_STORE_U32(r29.u32 + 3180, ctx.r5.u32);
	// addi r10,r7,-26640
	ctx.r10.s64 = ctx.r7.s64 + -26640;
	// stw r4,3184(r29)
	REX_STORE_U32(r29.u32 + 3184, ctx.r4.u32);
	// addi r9,r6,-26064
	ctx.r9.s64 = ctx.r6.s64 + -26064;
	// stw r11,3244(r29)
	REX_STORE_U32(r29.u32 + 3244, ctx.r11.u32);
	// stw r10,3236(r29)
	REX_STORE_U32(r29.u32 + 3236, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r9,3240(r29)
	REX_STORE_U32(r29.u32 + 3240, ctx.r9.u32);
	// bl 0x823c5f10
	ctx.lr = 0x823A6680;
	sub_823C5F10(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823AB630) {
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
	// ble cr6,0x823ab64c
	if (!ctx.cr6.gt) goto loc_823AB64C;
	// li r4,3
	ctx.r4.s64 = 3;
loc_823AB64C:
	// lwz r11,21704(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r11,r11,8088
	ctx.r11.s64 = ctx.r11.s64 + 8088;
	// bne cr6,0x823ab6b8
	if (!ctx.cr6.eq) goto loc_823AB6B8;
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
	// stw r6,21792(r3)
	REX_STORE_U32(ctx.r3.u32 + 21792, ctx.r6.u32);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// addi r31,r11,20
	r31.s64 = ctx.r11.s64 + 20;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r9,21796(r3)
	REX_STORE_U32(ctx.r3.u32 + 21796, ctx.r9.u32);
	// lwzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r8,21800(r3)
	REX_STORE_U32(ctx.r3.u32 + 21800, ctx.r8.u32);
	// lwzx r7,r10,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stw r7,21804(r3)
	REX_STORE_U32(ctx.r3.u32 + 21804, ctx.r7.u32);
	// lwzx r6,r10,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// stw r6,21808(r3)
	REX_STORE_U32(ctx.r3.u32 + 21808, ctx.r6.u32);
	// lwzx r5,r10,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stw r5,21812(r3)
	REX_STORE_U32(ctx.r3.u32 + 21812, ctx.r5.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,21816(r3)
	REX_STORE_U32(ctx.r3.u32 + 21816, ctx.r11.u32);
	// b 0x823ab728
	goto loc_823AB728;
loc_823AB6B8:
	// mulli r7,r4,28
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// addi r6,r11,112
	ctx.r6.s64 = ctx.r11.s64 + 112;
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// addi r8,r11,112
	ctx.r8.s64 = ctx.r11.s64 + 112;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// lwzx r6,r7,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addi r9,r11,112
	ctx.r9.s64 = ctx.r11.s64 + 112;
	// addi r31,r10,16
	r31.s64 = ctx.r10.s64 + 16;
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// stw r6,21792(r3)
	REX_STORE_U32(ctx.r3.u32 + 21792, ctx.r6.u32);
	// addi r6,r10,20
	ctx.r6.s64 = ctx.r10.s64 + 20;
	// lwzx r10,r7,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// stw r10,21796(r3)
	REX_STORE_U32(ctx.r3.u32 + 21796, ctx.r10.u32);
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r8,21800(r3)
	REX_STORE_U32(ctx.r3.u32 + 21800, ctx.r8.u32);
	// lwzx r5,r7,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r5,21804(r3)
	REX_STORE_U32(ctx.r3.u32 + 21804, ctx.r5.u32);
	// lwzx r10,r7,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + r31.u32);
	// stw r10,21808(r3)
	REX_STORE_U32(ctx.r3.u32 + 21808, ctx.r10.u32);
	// lwzx r9,r7,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// stw r9,21812(r3)
	REX_STORE_U32(ctx.r3.u32 + 21812, ctx.r9.u32);
	// lwzx r8,r7,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stw r8,21816(r3)
	REX_STORE_U32(ctx.r3.u32 + 21816, ctx.r8.u32);
loc_823AB728:
	// bl 0x823ab3c8
	ctx.lr = 0x823AB72C;
	sub_823AB3C8(ctx, base);
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

DEFINE_REX_FUNC(sub_823AF2F0) {
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
	// bl 0x822d4e54
	ctx.lr = 0x823AF2F8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r31,1
	r31.s64 = 1;
	// addi r30,r10,3
	r30.s64 = ctx.r10.s64 + 3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// slw r18,r31,r30
	r18.u64 = r30.u8 & 0x20 ? 0 : (r31.u32 << (r30.u8 & 0x3F));
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// slw r29,r31,r11
	r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r11.u8 & 0x3F));
	// beq cr6,0x823af338
	if (ctx.cr6.eq) goto loc_823AF338;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x823af338
	if (ctx.cr6.eq) goto loc_823AF338;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x823af554
	if (!ctx.cr6.eq) goto loc_823AF554;
loc_823AF338:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,23736
	ctx.r11.s64 = ctx.r11.s64 + 23736;
	// rlwinm r30,r8,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// li r17,0
	r17.s64 = 0;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r21,r30,r11
	r21.u64 = r30.u64 + ctx.r11.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823af390
	if (!ctx.cr6.eq) goto loc_823AF390;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// li r26,4
	r26.s64 = 4;
	// beq cr6,0x823af36c
	if (ctx.cr6.eq) goto loc_823AF36C;
	// li r26,6
	r26.s64 = 6;
loc_823AF36C:
	// rlwinm r10,r18,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,-220
	ctx.r8.s64 = ctx.r1.s64 + -220;
	// addi r7,r1,-222
	ctx.r7.s64 = ctx.r1.s64 + -222;
	// mr r24,r17
	r24.u64 = r17.u64;
	// mr r23,r17
	r23.u64 = r17.u64;
	// addi r20,r18,1
	r20.s64 = r18.s64 + 1;
	// sthx r17,r10,r8
	REX_STORE_U16(ctx.r10.u32 + ctx.r8.u32, r17.u16);
	// sthx r17,r10,r7
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, r17.u16);
	// b 0x823af3f8
	goto loc_823AF3F8;
loc_823AF390:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823af3c4
	if (!ctx.cr6.eq) goto loc_823AF3C4;
	// mr r26,r17
	r26.u64 = r17.u64;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// li r24,4
	r24.s64 = 4;
	// beq cr6,0x823af3ac
	if (ctx.cr6.eq) goto loc_823AF3AC;
	// li r24,6
	r24.s64 = 6;
loc_823AF3AC:
	// addi r11,r24,-1
	ctx.r11.s64 = r24.s64 + -1;
	// mr r25,r17
	r25.u64 = r17.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r11.u8 & 0x3F));
	// subf r23,r9,r10
	r23.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r20,r18,3
	r20.s64 = r18.s64 + 3;
	// b 0x823af408
	goto loc_823AF408;
loc_823AF3C4:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// li r10,4
	ctx.r10.s64 = 4;
	// beq cr6,0x823af3d4
	if (ctx.cr6.eq) goto loc_823AF3D4;
	// li r10,6
	ctx.r10.s64 = 6;
loc_823AF3D4:
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// beq cr6,0x823af3e4
	if (ctx.cr6.eq) goto loc_823AF3E4;
	// li r11,6
	ctx.r11.s64 = 6;
loc_823AF3E4:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r24,7
	r24.s64 = 7;
	// addi r26,r11,-7
	r26.s64 = ctx.r11.s64 + -7;
	// subfic r23,r9,64
	ctx.xer.ca = ctx.r9.u32 <= 64;
	r23.u64 = static_cast<uint64_t>(64) - ctx.r9.u64;
	// addi r20,r18,3
	r20.s64 = r18.s64 + 3;
loc_823AF3F8:
	// addi r11,r26,-1
	ctx.r11.s64 = r26.s64 + -1;
	// slw r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r11.u8 & 0x3F));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r25,r11,-1
	r25.s64 = ctx.r11.s64 + -1;
loc_823AF408:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x823af554
	if (!ctx.cr6.gt) goto loc_823AF554;
	// subf r11,r4,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mr r19,r29
	r19.u64 = r29.u64;
	// addi r22,r11,-1
	r22.s64 = ctx.r11.s64 + -1;
loc_823AF41C:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x823af4a0
	if (!ctx.cr6.gt) goto loc_823AF4A0;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r9,6(r21)
	ctx.r9.u64 = REX_LOAD_U16(r21.u32 + 6);
	// lhz r8,4(r21)
	ctx.r8.u64 = REX_LOAD_U16(r21.u32 + 4);
	// addi r10,r1,-226
	ctx.r10.s64 = ctx.r1.s64 + -226;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lhz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 0);
	// lhz r29,2(r21)
	r29.u64 = REX_LOAD_U16(r21.u32 + 2);
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// rlwinm r31,r4,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// extsh r29,r29
	r29.s64 = r29.s16;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_823AF45C:
	// lbzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// lbzx r8,r11,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// lbzx r16,r11,r4
	r16.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbz r15,0(r11)
	r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r8,r8,r3
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r16,r29
	ctx.r8.s64 = int64_t(r16.s32) * int64_t(r29.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r15,r28
	ctx.r8.s64 = int64_t(r15.s32) * int64_t(r28.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + r25.u64;
	// sraw r8,r9,r26
	temp.u32 = r26.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r8.s64 = ctx.r9.s32 >> temp.u32;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x823af45c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823AF45C;
loc_823AF4A0:
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// ble cr6,0x823af544
	if (!ctx.cr6.gt) goto loc_823AF544;
	// mtctr r18
	ctx.ctr.u64 = r18.u64;
	// addi r11,r1,-220
	ctx.r11.s64 = ctx.r1.s64 + -220;
loc_823AF4B4:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// lhz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 0);
	// lhz r7,6(r27)
	ctx.r7.u64 = REX_LOAD_U16(r27.u32 + 6);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r30,r10
	r30.s64 = ctx.r10.s16;
	// lhz r31,0(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhz r29,4(r27)
	r29.u64 = REX_LOAD_U16(r27.u32 + 4);
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// mullw r10,r3,r7
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// lhz r3,-2(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r7,2(r27)
	ctx.r7.u64 = REX_LOAD_U16(r27.u32 + 2);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// extsh r30,r29
	r30.s64 = r29.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r31,r30
	ctx.r9.s64 = int64_t(r31.s32) * int64_t(r30.s32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r3,r7
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r10,r23
	ctx.r3.u64 = ctx.r10.u64 + r23.u64;
	// sraw. r10,r3,r24
	temp.u32 = r24.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r10.s64 = ctx.r3.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x823af524
	if (!ctx.cr0.lt) goto loc_823AF524;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// b 0x823af530
	goto loc_823AF530;
loc_823AF524:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x823af530
	if (!ctx.cr6.gt) goto loc_823AF530;
	// li r10,255
	ctx.r10.s64 = 255;
loc_823AF530:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stbx r10,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r10.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x823af4b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823AF4B4;
loc_823AF544:
	// addic. r19,r19,-1
	ctx.xer.ca = r19.u32 > 0;
	r19.s64 = r19.s64 + -1;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// add r22,r22,r4
	r22.u64 = r22.u64 + ctx.r4.u64;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bne 0x823af41c
	if (!ctx.cr0.eq) goto loc_823AF41C;
loc_823AF554:
	// b 0x822d4ea4
	return;
}

DEFINE_REX_FUNC(sub_823BDC28) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e70
	ctx.lr = 0x823BDC30;
	// lwz r10,14636(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 14636);
	// li r24,1
	r24.s64 = 1;
	// stw r4,14588(r3)
	REX_STORE_U32(ctx.r3.u32 + 14588, ctx.r4.u32);
	// stw r5,14592(r3)
	REX_STORE_U32(ctx.r3.u32 + 14592, ctx.r5.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r6,14596(r3)
	REX_STORE_U32(ctx.r3.u32 + 14596, ctx.r6.u32);
	// stw r7,14600(r3)
	REX_STORE_U32(ctx.r3.u32 + 14600, ctx.r7.u32);
	// beq cr6,0x823bdc5c
	if (ctx.cr6.eq) goto loc_823BDC5C;
	// stw r10,14528(r3)
	REX_STORE_U32(ctx.r3.u32 + 14528, ctx.r10.u32);
	// stw r24,14472(r3)
	REX_STORE_U32(ctx.r3.u32 + 14472, r24.u32);
	// b 0x823bdc84
	goto loc_823BDC84;
loc_823BDC5C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,14472(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14472);
	// lhz r8,14(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// mullw r11,r8,r4
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r8,r11,0,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	// addze r8,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// stw r11,14528(r3)
	REX_STORE_U32(ctx.r3.u32 + 14528, ctx.r11.u32);
loc_823BDC84:
	// lwz r9,14528(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14528);
	// li r27,0
	r27.s64 = 0;
	// lwz r28,14472(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 14472);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// stw r11,14532(r3)
	REX_STORE_U32(ctx.r3.u32 + 14532, ctx.r11.u32);
	// bne cr6,0x823bdca8
	if (!ctx.cr6.eq) goto loc_823BDCA8;
	// mr r29,r27
	r29.u64 = r27.u64;
	// b 0x823bdcc8
	goto loc_823BDCC8;
loc_823BDCA8:
	// srawi r11,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r31,r5,r11
	r31.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// xor r30,r9,r8
	r30.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// subf r8,r8,r30
	ctx.r8.u64 = r30.u64 - ctx.r8.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r29,r11,r8
	r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
loc_823BDCC8:
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,14604(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14604);
	// stw r29,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r29.u32);
	// lwz r8,14608(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 14608);
	// lwz r26,14580(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 14580);
	// lhz r30,14(r31)
	r30.u64 = REX_LOAD_U16(r31.u32 + 14);
	// mullw r30,r30,r11
	r30.s64 = int64_t(r30.s32) * int64_t(ctx.r11.s32);
	// srawi r29,r30,3
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7) != 0);
	r29.s64 = r30.s32 >> 3;
	// mullw r30,r8,r9
	r30.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addze r29,r29
	temp.s64 = r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r29.u32;
	r29.s64 = temp.s64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// stw r30,14536(r3)
	REX_STORE_U32(ctx.r3.u32 + 14536, r30.u32);
	// beq cr6,0x823bdd6c
	if (ctx.cr6.eq) goto loc_823BDD6C;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x823bdd28
	if (!ctx.cr6.eq) goto loc_823BDD28;
	// lhz r30,14(r31)
	r30.u64 = REX_LOAD_U16(r31.u32 + 14);
	// lwz r29,14564(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 14564);
	// lwz r28,14568(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 14568);
	// mullw r30,r29,r30
	r30.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// srawi r30,r30,3
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7) != 0);
	r30.s64 = r30.s32 >> 3;
	// mullw r9,r28,r9
	ctx.r9.s64 = int64_t(r28.s32) * int64_t(ctx.r9.s32);
	// addze r30,r30
	temp.s64 = r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r30.u32;
	r30.s64 = temp.s64;
	// b 0x823bdd64
	goto loc_823BDD64;
loc_823BDD28:
	// lwz r30,14568(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 14568);
	// srawi r29,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	r29.s64 = ctx.r5.s32 >> 31;
	// lhz r28,14(r31)
	r28.u64 = REX_LOAD_U16(r31.u32 + 14);
	// subfic r30,r30,-1
	ctx.xer.ca = r30.u32 <= 4294967295;
	r30.u64 = static_cast<uint64_t>(-1) - r30.u64;
	// lwz r26,14564(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 14564);
	// srawi r25,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	r25.s64 = ctx.r9.s32 >> 31;
	// xor r23,r5,r29
	r23.u64 = ctx.r5.u64 ^ r29.u64;
	// xor r22,r9,r25
	r22.u64 = ctx.r9.u64 ^ r25.u64;
	// subf r9,r29,r23
	ctx.r9.u64 = r23.u64 - r29.u64;
	// mullw r29,r26,r28
	r29.s64 = int64_t(r26.s32) * int64_t(r28.s32);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// subf r30,r25,r22
	r30.u64 = r22.u64 - r25.u64;
	// srawi r29,r29,3
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7) != 0);
	r29.s64 = r29.s32 >> 3;
	// mullw r30,r9,r30
	r30.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// addze r9,r29
	temp.s64 = r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r29.u32;
	ctx.r9.s64 = temp.s64;
loc_823BDD64:
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
loc_823BDD6C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823bdd78
	if (!ctx.cr6.eq) goto loc_823BDD78;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_823BDD78:
	// lis r30,12849
	r30.s64 = 842072064;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r31,12850
	r31.s64 = 842137600;
	// ori r30,r30,22105
	r30.u64 = r30.u64 | 22105;
	// lis r28,22101
	r28.s64 = 1448411136;
	// lis r26,12338
	r26.s64 = 808583168;
	// lis r25,12593
	r25.s64 = 825294848;
	// ori r29,r31,13392
	r29.u64 = r31.u64 | 13392;
	// ori r28,r28,22857
	r28.u64 = r28.u64 | 22857;
	// ori r26,r26,13385
	r26.u64 = r26.u64 | 13385;
	// ori r25,r25,13392
	r25.u64 = r25.u64 | 13392;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// bgt cr6,0x823bde50
	if (ctx.cr6.gt) goto loc_823BDE50;
	// beq cr6,0x823bde0c
	if (ctx.cr6.eq) goto loc_823BDE0C;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// beq cr6,0x823bde60
	if (ctx.cr6.eq) goto loc_823BDE60;
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r25.u32, ctx.xer);
	// bne cr6,0x823bdf14
	if (!ctx.cr6.eq) goto loc_823BDF14;
	// lwz r9,14628(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14628);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823bddd4
	if (!ctx.cr6.eq) goto loc_823BDDD4;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
loc_823BDDD4:
	// mullw r31,r10,r5
	r31.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// stw r9,14644(r3)
	REX_STORE_U32(ctx.r3.u32 + 14644, ctx.r9.u32);
	// stw r31,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, r31.u32);
	// mullw r5,r9,r5
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// mullw r4,r8,r4
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// srawi r23,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r23.s64 = ctx.r11.s32 >> 2;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r8,r5,r31
	ctx.r8.u64 = ctx.r5.u64 + r31.u64;
	// addze r10,r23
	temp.s64 = r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r23.u32;
	ctx.r10.s64 = temp.s64;
	// add r5,r4,r11
	ctx.r5.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r8,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,14540(r3)
	REX_STORE_U32(ctx.r3.u32 + 14540, ctx.r5.u32);
	// b 0x823bdf08
	goto loc_823BDF08;
loc_823BDE0C:
	// srawi r9,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// xor r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// srawi r31,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r31.s64 = ctx.r11.s32 >> 1;
	// subf r4,r9,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r9.u64;
	// addze r5,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	ctx.r5.s64 = temp.s64;
	// mullw r9,r4,r10
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// stw r9,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// rlwinm r31,r9,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r4,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r4.s64 = temp.s64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// srawi r23,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r23.s64 = ctx.r10.s32 >> 1;
	// add r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r5,r9,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r5,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r5.u32);
	// b 0x823bdef8
	goto loc_823BDEF8;
loc_823BDE50:
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, ctx.xer);
	// beq cr6,0x823bdeb8
	if (ctx.cr6.eq) goto loc_823BDEB8;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, ctx.xer);
	// bne cr6,0x823bdf14
	if (!ctx.cr6.eq) goto loc_823BDF14;
loc_823BDE60:
	// lwz r9,14628(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14628);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823bde74
	if (!ctx.cr6.eq) goto loc_823BDE74;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
loc_823BDE74:
	// mullw r31,r9,r5
	r31.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// stw r9,14644(r3)
	REX_STORE_U32(ctx.r3.u32 + 14644, ctx.r9.u32);
	// srawi r31,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r31.s64 = r31.s32 >> 1;
	// mullw r5,r10,r5
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// stw r5,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r5.u32);
	// addze r31,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	r31.s64 = temp.s64;
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// addze r4,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r4.s64 = temp.s64;
	// srawi r23,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r23.s64 = ctx.r11.s32 >> 1;
	// mullw r10,r4,r9
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// addze r9,r23
	temp.s64 = r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r23.u32;
	ctx.r9.s64 = temp.s64;
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r5,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
	// b 0x823bdf04
	goto loc_823BDF04;
loc_823BDEB8:
	// srawi r9,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// xor r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// srawi r31,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r31.s64 = ctx.r11.s32 >> 1;
	// subf r4,r9,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r9.u64;
	// addze r5,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	ctx.r5.s64 = temp.s64;
	// mullw r9,r4,r10
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// stw r9,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// rlwinm r31,r9,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r4,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r4.s64 = temp.s64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// srawi r23,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r23.s64 = ctx.r10.s32 >> 1;
	// add r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r5,r9,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r5,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
loc_823BDEF8:
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addze r11,r23
	temp.s64 = r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r23.u32;
	ctx.r11.s64 = temp.s64;
	// stw r11,14644(r3)
	REX_STORE_U32(ctx.r3.u32 + 14644, ctx.r11.u32);
loc_823BDF04:
	// stw r4,14540(r3)
	REX_STORE_U32(ctx.r3.u32 + 14540, ctx.r4.u32);
loc_823BDF08:
	// stw r10,14548(r3)
	REX_STORE_U32(ctx.r3.u32 + 14548, ctx.r10.u32);
	// stw r10,14544(r3)
	REX_STORE_U32(ctx.r3.u32 + 14544, ctx.r10.u32);
	// stw r27,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r27.u32);
loc_823BDF14:
	// lwz r11,14640(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14640);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bdf2c
	if (ctx.cr6.eq) goto loc_823BDF2C;
	// stw r11,14492(r3)
	REX_STORE_U32(ctx.r3.u32 + 14492, ctx.r11.u32);
	// stw r24,14476(r3)
	REX_STORE_U32(ctx.r3.u32 + 14476, r24.u32);
	// b 0x823bdf54
	goto loc_823BDF54;
loc_823BDF2C:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,14476(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14476);
	// lhz r8,14(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// mullw r10,r8,r6
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// addi r5,r10,31
	ctx.r5.s64 = ctx.r10.s64 + 31;
	// rlwinm r4,r5,0,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r10,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 3;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// mullw r5,r8,r9
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// stw r5,14492(r3)
	REX_STORE_U32(ctx.r3.u32 + 14492, ctx.r5.u32);
loc_823BDF54:
	// lwz r8,14492(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 14492);
	// lwz r10,14476(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 14476);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r9,14496(r3)
	REX_STORE_U32(ctx.r3.u32 + 14496, ctx.r9.u32);
	// bne cr6,0x823bdf74
	if (!ctx.cr6.eq) goto loc_823BDF74;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// b 0x823bdf94
	goto loc_823BDF94;
loc_823BDF74:
	// srawi r10,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 31;
	// srawi r9,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 31;
	// xor r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// xor r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// subf r9,r9,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r9.u64;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// mullw r9,r5,r9
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
loc_823BDF94:
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,14612(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 14612);
	// stw r9,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// lwz r9,14616(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14616);
	// lhz r5,14(r4)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + 14);
	// mullw r5,r5,r10
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// srawi r31,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	r31.s64 = ctx.r5.s32 >> 3;
	// mullw r5,r9,r8
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addze r8,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	ctx.r8.s64 = temp.s64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stw r8,14500(r3)
	REX_STORE_U32(ctx.r3.u32 + 14500, ctx.r8.u32);
	// bne cr6,0x823bdfcc
	if (!ctx.cr6.eq) goto loc_823BDFCC;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_823BDFCC:
	// lwz r8,16(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, ctx.xer);
	// bgt cr6,0x823be0f4
	if (ctx.cr6.gt) goto loc_823BE0F4;
	// beq cr6,0x823be098
	if (ctx.cr6.eq) goto loc_823BE098;
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r26.u32, ctx.xer);
	// beq cr6,0x823be104
	if (ctx.cr6.eq) goto loc_823BE104;
	// cmplw cr6,r8,r25
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r25.u32, ctx.xer);
	// beq cr6,0x823be03c
	if (ctx.cr6.eq) goto loc_823BE03C;
	// lis r5,12849
	ctx.r5.s64 = 842072064;
	// ori r4,r5,22094
	ctx.r4.u64 = ctx.r5.u64 | 22094;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x823be1ac
	if (!ctx.cr6.eq) goto loc_823BE1AC;
	// srawi r8,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 31;
	// stw r11,14648(r3)
	REX_STORE_U32(ctx.r3.u32 + 14648, ctx.r11.u32);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// stw r27,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r27.u32);
	// stw r27,14512(r3)
	REX_STORE_U32(ctx.r3.u32 + 14512, r27.u32);
	// xor r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// subf r5,r8,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r8.u64;
	// addze r8,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r8.s64 = temp.s64;
	// mullw r4,r5,r11
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// stw r4,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r4.u32);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r11,14504(r3)
	REX_STORE_U32(ctx.r3.u32 + 14504, ctx.r11.u32);
	// stw r10,14508(r3)
	REX_STORE_U32(ctx.r3.u32 + 14508, ctx.r10.u32);
	// b 0x823be1ac
	goto loc_823BE1AC;
loc_823BE03C:
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// mullw r8,r9,r6
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// xor r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// srawi r4,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 2;
	// subf r6,r5,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r5.u64;
	// addze r7,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r9,r6,r11
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// stw r9,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,14508(r3)
	REX_STORE_U32(ctx.r3.u32 + 14508, ctx.r11.u32);
	// addze r5,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r5.s64 = temp.s64;
	// stw r7,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// stw r6,14504(r3)
	REX_STORE_U32(ctx.r3.u32 + 14504, ctx.r6.u32);
	// stw r11,14512(r3)
	REX_STORE_U32(ctx.r3.u32 + 14512, ctx.r11.u32);
	// stw r5,14648(r3)
	REX_STORE_U32(ctx.r3.u32 + 14648, ctx.r5.u32);
	// b 0x823be1ac
	goto loc_823BE1AC;
loc_823BE098:
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// mullw r8,r9,r6
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// xor r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// srawi r4,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 1;
	// subf r6,r5,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r5.u64;
	// addze r7,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r9,r6,r11
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// stw r9,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,14512(r3)
	REX_STORE_U32(ctx.r3.u32 + 14512, ctx.r11.u32);
	// addze r5,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r5.s64 = temp.s64;
	// stw r7,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// stw r6,14504(r3)
	REX_STORE_U32(ctx.r3.u32 + 14504, ctx.r6.u32);
	// stw r11,14508(r3)
	REX_STORE_U32(ctx.r3.u32 + 14508, ctx.r11.u32);
	// stw r5,14648(r3)
	REX_STORE_U32(ctx.r3.u32 + 14648, ctx.r5.u32);
	// b 0x823be1ac
	goto loc_823BE1AC;
loc_823BE0F4:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, ctx.xer);
	// beq cr6,0x823be160
	if (ctx.cr6.eq) goto loc_823BE160;
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r28.u32, ctx.xer);
	// bne cr6,0x823be1ac
	if (!ctx.cr6.eq) goto loc_823BE1AC;
loc_823BE104:
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// mullw r8,r9,r6
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// xor r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// srawi r4,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 1;
	// subf r6,r5,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r5.u64;
	// addze r7,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r9,r6,r11
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// stw r9,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,14508(r3)
	REX_STORE_U32(ctx.r3.u32 + 14508, ctx.r11.u32);
	// addze r5,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r5.s64 = temp.s64;
	// stw r7,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// stw r6,14504(r3)
	REX_STORE_U32(ctx.r3.u32 + 14504, ctx.r6.u32);
	// stw r11,14512(r3)
	REX_STORE_U32(ctx.r3.u32 + 14512, ctx.r11.u32);
	// stw r5,14648(r3)
	REX_STORE_U32(ctx.r3.u32 + 14648, ctx.r5.u32);
	// b 0x823be1ac
	goto loc_823BE1AC;
loc_823BE160:
	// srawi r8,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 31;
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// xor r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// stw r10,14504(r3)
	REX_STORE_U32(ctx.r3.u32 + 14504, ctx.r10.u32);
	// mullw r10,r6,r11
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// stw r10,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r9,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r9.s64 = temp.s64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r9,14508(r3)
	REX_STORE_U32(ctx.r3.u32 + 14508, ctx.r9.u32);
	// stw r9,14512(r3)
	REX_STORE_U32(ctx.r3.u32 + 14512, ctx.r9.u32);
	// rlwinm r10,r4,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r9,14648(r3)
	REX_STORE_U32(ctx.r3.u32 + 14648, ctx.r9.u32);
loc_823BE1AC:
	// lwz r9,14560(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14560);
	// lwz r10,14484(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 14484);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r10,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823be1d8
	if (ctx.cr6.eq) goto loc_823BE1D8;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
loc_823BE1D8:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823be1e4
	if (!ctx.cr6.eq) goto loc_823BE1E4;
	// stw r10,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
loc_823BE1E4:
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x823be1f4
	if (!ctx.cr6.eq) goto loc_823BE1F4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x823be1fc
	goto loc_823BE1FC;
loc_823BE1F4:
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_823BE1FC:
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// beq cr6,0x823be210
	if (ctx.cr6.eq) goto loc_823BE210;
	// stw r10,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// b 0x822d4ec0
	return;
loc_823BE210:
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_823D1538) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x8229a710
	ctx.lr = 0x823D1554;
	sub_8229A710(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x823d1564
	if (!ctx.cr6.eq) goto loc_823D1564;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823d1580
	goto loc_823D1580;
loc_823D1564:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,0,26,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r10,-449
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -449, ctx.xer);
	// bne cr6,0x823d157c
	if (!ctx.cr6.eq) goto loc_823D157C;
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// ori r11,r11,390
	ctx.r11.u64 = ctx.r11.u64 | 390;
loc_823D157C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_823D1580:
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

DEFINE_REX_FUNC(sub_823D3958) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
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
	// bne cr6,0x823d3988
	if (!ctx.cr6.eq) goto loc_823D3988;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_823D3988:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_823D398C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823d39d8
	if (!ctx.cr0.eq) goto loc_823D39D8;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x823d39e0
	if (ctx.cr6.eq) goto loc_823D39E0;
	// cmplwi cr6,r9,65534
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65534, ctx.xer);
	// bne cr6,0x823d39b8
	if (!ctx.cr6.eq) goto loc_823D39B8;
	// rlwinm r10,r10,18,15,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1FFFC;
loc_823D39B0:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d39d8
	goto loc_823D39D8;
loc_823D39B8:
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r7,512
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 512, ctx.xer);
	// blt cr6,0x823d39cc
	if (ctx.cr6.lt) goto loc_823D39CC;
	// rlwinm r10,r10,10,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3C;
	// b 0x823d39b0
	goto loc_823D39B0;
loc_823D39CC:
	// cmplwi cr6,r9,81
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 81, ctx.xer);
	// bne cr6,0x823d39d8
	if (!ctx.cr6.eq) goto loc_823D39D8;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_823D39D8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x823d398c
	goto loc_823D398C;
loc_823D39E0:
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D65D0) {
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
	PPCContext env{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e60
	ctx.lr = 0x823D65D8;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	r19.s64 = 0;
	// stw r3,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r3.u32);
	// stw r4,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r19,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r19.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r19,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r19.u32);
	// mr r30,r19
	r30.u64 = r19.u64;
	// stw r5,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// stw r19,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r19.u32);
	// stw r19,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r19.u32);
	// bl 0x823ec4c8
	ctx.lr = 0x823D660C;
	sub_823EC4C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823d6620
	if (ctx.cr0.eq) goto loc_823D6620;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823d6ad8
	goto loc_823D6AD8;
loc_823D6620:
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// lis r10,-32195
	ctx.r10.s64 = -2109931520;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,-22768
	ctx.r6.s64 = ctx.r11.s64 + -22768;
	// addi r3,r9,-9296
	ctx.r3.s64 = ctx.r9.s64 + -9296;
	// addi r5,r10,15288
	ctx.r5.s64 = ctx.r10.s64 + 15288;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ef5f8
	ctx.lr = 0x823D6640;
	sub_823EF5F8(ctx, base);
	// lis r18,9345
	r18.s64 = 612433920;
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823d6a8c
	if (ctx.cr0.eq) goto loc_823D6A8C;
	// bl 0x823ec668
	ctx.lr = 0x823D6654;
	sub_823EC668(ctx, base);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823d6a8c
	if (ctx.cr0.eq) goto loc_823D6A8C;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8247cdf0
	ctx.lr = 0x823D6668;
	env = ctx;
	temp.s64 = ppc_setjmp(ctx.r3.u32);
	if (temp.s64 != 0) ctx = env;
	ctx.r3 = temp;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823d69b8
	if (!ctx.cr0.eq) goto loc_823D69B8;
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lis r10,-32195
	ctx.r10.s64 = -2109931520;
	// lwz r9,324(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r5,r10,15192
	ctx.r5.s64 = ctx.r10.s64 + 15192;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r9,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// bl 0x823f2268
	ctx.lr = 0x823D6694;
	sub_823F2268(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x823ef760
	ctx.lr = 0x823D66A0;
	sub_823EF760(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r19.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x823f0298
	ctx.lr = 0x823D66C8;
	sub_823F0298(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// lis r9,10280
	ctx.r9.s64 = 673710080;
	// lis r8,10240
	ctx.r8.s64 = 671088640;
	// lis r7,2048
	ctx.r7.s64 = 134217728;
	// ori r24,r10,134
	r24.u64 = ctx.r10.u64 | 134;
	// ori r21,r9,134
	r21.u64 = ctx.r9.u64 | 134;
	// li r20,1
	r20.s64 = 1;
	// ori r22,r8,2
	r22.u64 = ctx.r8.u64 | 2;
	// ori r27,r7,74
	r27.u64 = ctx.r7.u64 | 74;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d6738
	if (ctx.cr6.eq) goto loc_823D6738;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823d6728
	if (ctx.cr6.eq) goto loc_823D6728;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823d671c
	if (ctx.cr6.eq) goto loc_823D671C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x823d69b8
	if (!ctx.cr6.eq) goto loc_823D69B8;
	// lwz r31,308(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r24,0(r31)
	REX_STORE_U32(r31.u32 + 0, r24.u32);
	// b 0x823d6740
	goto loc_823D6740;
loc_823D671C:
	// lwz r31,308(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// b 0x823d6740
	goto loc_823D6740;
loc_823D6728:
	// lwz r31,308(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r20,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r20.u32);
	// stw r21,0(r31)
	REX_STORE_U32(r31.u32 + 0, r21.u32);
	// b 0x823d6740
	goto loc_823D6740;
loc_823D6738:
	// lwz r31,308(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r22,0(r31)
	REX_STORE_U32(r31.u32 + 0, r22.u32);
loc_823D6740:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// lis r9,13873
	ctx.r9.s64 = 909180928;
	// lis r8,6688
	ctx.r8.s64 = 438304768;
	// lis r7,13873
	ctx.r7.s64 = 909180928;
	// lis r6,2048
	ctx.r6.s64 = 134217728;
	// lis r5,6184
	ctx.r5.s64 = 405274624;
	// ori r23,r10,6
	r23.u64 = ctx.r10.u64 | 6;
	// ori r28,r9,21024
	r28.u64 = ctx.r9.u64 | 21024;
	// ori r29,r8,90
	r29.u64 = ctx.r8.u64 | 90;
	// ori r30,r7,19521
	r30.u64 = ctx.r7.u64 | 19521;
	// ori r25,r6,10
	r25.u64 = ctx.r6.u64 | 10;
	// ori r26,r5,6
	r26.u64 = ctx.r5.u64 | 6;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x823d67d0
	if (!ctx.cr6.eq) goto loc_823D67D0;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x823f03b8
	ctx.lr = 0x823D6784;
	sub_823F03B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r25.s32, ctx.xer);
	// beq cr6,0x823d67cc
	if (ctx.cr6.eq) goto loc_823D67CC;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// beq cr6,0x823d67c4
	if (ctx.cr6.eq) goto loc_823D67C4;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// beq cr6,0x823d67b4
	if (ctx.cr6.eq) goto loc_823D67B4;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// bne cr6,0x823d69b8
	if (!ctx.cr6.eq) goto loc_823D69B8;
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x823d67d0
	goto loc_823D67D0;
loc_823D67B4:
	// lis r11,10240
	ctx.r11.s64 = 671088640;
	// ori r11,r11,88
	ctx.r11.u64 = ctx.r11.u64 | 88;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x823d67d0
	goto loc_823D67D0;
loc_823D67C4:
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x823d67d0
	goto loc_823D67D0;
loc_823D67CC:
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
loc_823D67D0:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x823d67e4
	if (!ctx.cr6.lt) goto loc_823D67E4;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x823f03d8
	ctx.lr = 0x823D67E4;
	sub_823F03D8(ctx, base);
loc_823D67E4:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823d6804
	if (!ctx.cr6.eq) goto loc_823D6804;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x823d6804
	if (!ctx.cr6.lt) goto loc_823D6804;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x823f0620
	ctx.lr = 0x823D6804;
	sub_823F0620(ctx, base);
loc_823D6804:
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x823f0258
	ctx.lr = 0x823D6814;
	sub_823F0258(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// beq 0x823d6830
	if (ctx.cr0.eq) goto loc_823D6830;
	// lwz r5,124(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x823ef538
	ctx.lr = 0x823D682C;
	sub_823EF538(ctx, base);
	// b 0x823d6854
	goto loc_823D6854;
loc_823D6830:
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// bl 0x823f0218
	ctx.lr = 0x823D6838;
	sub_823F0218(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823d6854
	if (ctx.cr0.eq) goto loc_823D6854;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lfd f2,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// lfd f1,-9304(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -9304);
	// bl 0x823f05e0
	ctx.lr = 0x823D6854;
	sub_823F05E0(ctx, base);
loc_823D6854:
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x823f01b0
	ctx.lr = 0x823D6864;
	sub_823F01B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823d68c8
	if (ctx.cr0.eq) goto loc_823D68C8;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x823f0620
	ctx.lr = 0x823D6874;
	sub_823F0620(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// subf. r11,r22,r11
	ctx.r11.u64 = ctx.r11.u64 - r22.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823d68c4
	if (ctx.cr0.eq) goto loc_823D68C4;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x823d68bc
	if (ctx.cr6.eq) goto loc_823D68BC;
	// lis r10,40
	ctx.r10.s64 = 2621440;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823d68b4
	if (ctx.cr6.eq) goto loc_823D68B4;
	// lis r10,3633
	ctx.r10.s64 = 238092288;
	// ori r10,r10,21022
	ctx.r10.u64 = ctx.r10.u64 | 21022;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823d68c8
	if (!ctx.cr6.eq) goto loc_823D68C8;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x823d68c8
	goto loc_823D68C8;
loc_823D68B4:
	// stw r24,0(r31)
	REX_STORE_U32(r31.u32 + 0, r24.u32);
	// b 0x823d68c8
	goto loc_823D68C8;
loc_823D68BC:
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x823d68c8
	goto loc_823D68C8;
loc_823D68C4:
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
loc_823D68C8:
	// lwz r30,120(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x823d68ec
	if (!ctx.cr6.eq) goto loc_823D68EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// beq cr6,0x823d68ec
	if (ctx.cr6.eq) goto loc_823D68EC;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// bne cr6,0x823d68f4
	if (!ctx.cr6.eq) goto loc_823D68F4;
loc_823D68EC:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x823f03a8
	ctx.lr = 0x823D68F4;
	sub_823F03A8(ctx, base);
loc_823D68F4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x823d6910
	if (ctx.cr6.eq) goto loc_823D6910;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x823f0430
	ctx.lr = 0x823D690C;
	sub_823F0430(ctx, base);
	// stw r21,0(r31)
	REX_STORE_U32(r31.u32 + 0, r21.u32);
loc_823D6910:
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x823efa78
	ctx.lr = 0x823D691C;
	sub_823EFA78(ctx, base);
	// lis r11,10240
	ctx.r11.s64 = 671088640;
	// ori r10,r11,24
	ctx.r10.u64 = ctx.r11.u64 | 24;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823d6970
	if (ctx.cr6.gt) goto loc_823D6970;
	// beq cr6,0x823d6960
	if (ctx.cr6.eq) goto loc_823D6960;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r25.s32, ctx.xer);
	// beq cr6,0x823d6968
	if (ctx.cr6.eq) goto loc_823D6968;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// beq cr6,0x823d699c
	if (ctx.cr6.eq) goto loc_823D699C;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,26
	ctx.r10.u64 = ctx.r10.u64 | 26;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823d699c
	if (ctx.cr6.eq) goto loc_823D699C;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// bne cr6,0x823d698c
	if (!ctx.cr6.eq) goto loc_823D698C;
loc_823D6960:
	// mr r30,r20
	r30.u64 = r20.u64;
	// b 0x823d69a0
	goto loc_823D69A0;
loc_823D6968:
	// li r30,2
	r30.s64 = 2;
	// b 0x823d69a0
	goto loc_823D69A0;
loc_823D6970:
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// beq cr6,0x823d699c
	if (ctx.cr6.eq) goto loc_823D699C;
	// addis r11,r11,-13873
	ctx.r11.s64 = ctx.r11.s64 + -909180928;
	// addic. r11,r11,-19457
	ctx.xer.ca = ctx.r11.u32 > 19456;
	ctx.r11.s64 = ctx.r11.s64 + -19457;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823d6968
	if (ctx.cr0.eq) goto loc_823D6968;
	// cmplwi cr6,r11,1567
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1567, ctx.xer);
	// beq cr6,0x823d6994
	if (ctx.cr6.eq) goto loc_823D6994;
loc_823D698C:
	// mr r30,r19
	r30.u64 = r19.u64;
	// b 0x823d69a0
	goto loc_823D69A0;
loc_823D6994:
	// li r30,3
	r30.s64 = 3;
	// b 0x823d69a0
	goto loc_823D69A0;
loc_823D699C:
	// li r30,4
	r30.s64 = 4;
loc_823D69A0:
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x823f01f8
	ctx.lr = 0x823D69AC;
	sub_823F01F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823d69c8
	if (ctx.cr6.eq) goto loc_823D69C8;
loc_823D69B8:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// lwz r30,108(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
	// b 0x823d6aa0
	goto loc_823D6AA0;
loc_823D69C8:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r20,20(r31)
	REX_STORE_U32(r31.u32 + 20, r20.u32);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// bl 0x823f01d8
	ctx.lr = 0x823D69E8;
	sub_823F01D8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// stw r19,52(r31)
	REX_STORE_U32(r31.u32 + 52, r19.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// beq cr6,0x823d6a98
	if (ctx.cr6.eq) goto loc_823D6A98;
	// stw r18,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r18.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mullw r3,r3,r11
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// bl 0x823cd118
	ctx.lr = 0x823D6A10;
	sub_823CD118(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq 0x823d6a88
	if (ctx.cr0.eq) goto loc_823D6A88;
	// stw r20,56(r31)
	REX_STORE_U32(r31.u32 + 56, r20.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r18,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r18.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823cd118
	ctx.lr = 0x823D6A34;
	sub_823CD118(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// beq 0x823d6a8c
	if (ctx.cr0.eq) goto loc_823D6A8C;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d6a78
	if (ctx.cr6.eq) goto loc_823D6A78;
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
loc_823D6A54:
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823d6a54
	if (ctx.cr6.lt) goto loc_823D6A54;
loc_823D6A78:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x823eff50
	ctx.lr = 0x823D6A84;
	sub_823EFF50(ctx, base);
	// b 0x823d6a9c
	goto loc_823D6A9C;
loc_823D6A88:
	// lwz r30,108(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_823D6A8C:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x823d6aa0
	goto loc_823D6AA0;
loc_823D6A98:
	// lwz r30,108(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_823D6A9C:
	// mr r31,r19
	r31.u64 = r19.u64;
loc_823D6AA0:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d6abc
	if (ctx.cr6.eq) goto loc_823D6ABC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823f0108
	ctx.lr = 0x823D6ABC;
	sub_823F0108(ctx, base);
loc_823D6ABC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823d6ad4
	if (ctx.cr6.eq) goto loc_823D6AD4;
	// stw r18,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r18.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cd250
	ctx.lr = 0x823D6AD4;
	sub_823CD250(ctx, base);
loc_823D6AD4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823D6AD8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_823E2C38) {
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
	// bge cr6,0x823e2d0c
	if (!ctx.cr6.lt) goto loc_823E2D0C;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-13044(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
loc_823E2C94:
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lbz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lbz r10,7(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x823e2c94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E2C94;
loc_823E2D0C:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e2d28
	if (ctx.cr6.eq) goto loc_823E2D28;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x823E2D28;
	sub_82413D40(ctx, base);
loc_823E2D28:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e2d44
	if (ctx.cr6.eq) goto loc_823E2D44;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x823dc3f0
	ctx.lr = 0x823E2D44;
	sub_823DC3F0(ctx, base);
loc_823E2D44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E3A90) {
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
	// bge cr6,0x823e3b60
	if (!ctx.cr6.lt) goto loc_823E3B60;
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
	// lfs f0,-30112(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -30112);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
loc_823E3AF4:
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
	// bdnz 0x823e3af4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E3AF4;
loc_823E3B60:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e3b7c
	if (ctx.cr6.eq) goto loc_823E3B7C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x823E3B7C;
	sub_82413D40(ctx, base);
loc_823E3B7C:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e3b98
	if (ctx.cr6.eq) goto loc_823E3B98;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x823dc3f0
	ctx.lr = 0x823E3B98;
	sub_823DC3F0(ctx, base);
loc_823E3B98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E6448) {
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
	// bl 0x823dbd38
	ctx.lr = 0x823E6468;
	sub_823DBD38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e647c
	if (ctx.cr0.eq) goto loc_823E647C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cd250
	ctx.lr = 0x823E647C;
	sub_823CD250(ctx, base);
loc_823E647C:
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

DEFINE_REX_FUNC(sub_823E72F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823E72F8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823e7318
	if (!ctx.cr6.eq) goto loc_823E7318;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x823e73b4
	goto loc_823E73B4;
loc_823E7318:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x823cd118
	ctx.lr = 0x823E7324;
	sub_823CD118(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e7354
	if (ctx.cr0.eq) goto loc_823E7354;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-3120
	ctx.r10.s64 = ctx.r10.s64 + -3120;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x823e7358
	goto loc_823E7358;
loc_823E7354:
	// li r31,0
	r31.s64 = 0;
loc_823E7358:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x823e736c
	if (!ctx.cr6.eq) goto loc_823E736C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823e73b4
	goto loc_823E73B4;
loc_823E736C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E7384;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x823e73ac
	if (!ctx.cr0.lt) goto loc_823E73AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E73A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x823e73b4
	goto loc_823E73B4;
loc_823E73AC:
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E73B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823EAD38) {
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
	// stw r6,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// not r31,r5
	r31.u64 = ~ctx.r5.u64;
	// b 0x823ead68
	goto loc_823EAD68;
loc_823EAD5C:
	// lwz r31,36(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823ead8c
	if (ctx.cr6.eq) goto loc_823EAD8C;
loc_823EAD68:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e89e0
	ctx.lr = 0x823EAD80;
	sub_823E89E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823ead5c
	if (!ctx.cr0.lt) goto loc_823EAD5C;
	// b 0x823ead90
	goto loc_823EAD90;
loc_823EAD8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EAD90:
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

DEFINE_REX_FUNC(sub_823EC418) {
	REX_FUNC_PROLOGUE();
	// lwz r11,1348(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1348);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_823ECF18) {
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
	// cmpwi cr6,r11,202
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 202, ctx.xer);
	// bne cr6,0x823ecf70
	if (!ctx.cr6.eq) goto loc_823ECF70;
	// bl 0x823f6c60
	ctx.lr = 0x823ECF3C;
	sub_823F6C60(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ecf68
	if (ctx.cr6.eq) goto loc_823ECF68;
	// li r11,207
	ctx.r11.s64 = 207;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
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
loc_823ECF68:
	// li r11,203
	ctx.r11.s64 = 203;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_823ECF70:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,203
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 203, ctx.xer);
	// bne cr6,0x823ed03c
	if (!ctx.cr6.eq) goto loc_823ED03C;
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823ed030
	if (ctx.cr6.eq) goto loc_823ED030;
loc_823ECF8C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ecfa8
	if (ctx.cr6.eq) goto loc_823ECFA8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ECFA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823ECFA8:
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823ECFBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ed018
	if (ctx.cr6.eq) goto loc_823ED018;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x823ed030
	if (ctx.cr6.eq) goto loc_823ED030;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ecf8c
	if (ctx.cr6.eq) goto loc_823ECF8C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x823ecfe8
	if (ctx.cr6.eq) goto loc_823ECFE8;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823ecf8c
	if (!ctx.cr6.eq) goto loc_823ECF8C;
loc_823ECFE8:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823ecf8c
	if (ctx.cr6.lt) goto loc_823ECF8C;
	// lwz r10,324(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 324);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x823ecf8c
	goto loc_823ECF8C;
loc_823ED018:
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
loc_823ED030:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// b 0x823ed070
	goto loc_823ED070;
loc_823ED03C:
	// cmpwi cr6,r11,204
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 204, ctx.xer);
	// beq cr6,0x823ed070
	if (ctx.cr6.eq) goto loc_823ED070;
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
	ctx.lr = 0x823ED070;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823ED070:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ecd60
	ctx.lr = 0x823ED078;
	sub_823ECD60(ctx, base);
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

DEFINE_REX_FUNC(sub_823F1A48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x823f1ab0
	if (!ctx.cr6.eq) goto loc_823F1AB0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f1ab0
	if (ctx.cr6.eq) goto loc_823F1AB0;
	// lbz r8,9(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// bne cr6,0x823f1ab0
	if (!ctx.cr6.eq) goto loc_823F1AB0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823f1b08
	if (ctx.cr6.eq) goto loc_823F1B08;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
loc_823F1A80:
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r8,r7,5,19,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0x1F00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE0FF);
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r7,r8,2,17,26
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x7FE0) | (ctx.r7.u64 & 0xFFFFFFFFFFFF801F);
	// clrlwi r8,r7,17
	ctx.r8.u64 = ctx.r7.u32 & 0x7FFF;
	// lbzx r8,r8,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x823f1a80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F1A80;
	// b 0x823f1b08
	goto loc_823F1B08;
loc_823F1AB0:
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// bne cr6,0x823f1b38
	if (!ctx.cr6.eq) goto loc_823F1B38;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f1b38
	if (ctx.cr6.eq) goto loc_823F1B38;
	// lbz r8,9(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// bne cr6,0x823f1b38
	if (!ctx.cr6.eq) goto loc_823F1B38;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823f1b08
	if (ctx.cr6.eq) goto loc_823F1B08;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_823F1ADC:
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r8,r7,5,19,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0x1F00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE0FF);
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwimi r7,r8,2,17,26
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x7FE0) | (ctx.r7.u64 & 0xFFFFFFFFFFFF801F);
	// clrlwi r8,r7,17
	ctx.r8.u64 = ctx.r7.u32 & 0x7FFF;
	// lbzx r8,r8,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x823f1adc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F1ADC;
loc_823F1B08:
	// li r11,3
	ctx.r11.s64 = 3;
	// lbz r9,9(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 9);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r11,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// stb r8,10(r3)
	REX_STORE_U8(ctx.r3.u32 + 10, ctx.r8.u8);
	// stb r9,11(r3)
	REX_STORE_U8(ctx.r3.u32 + 11, ctx.r9.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_823F1B38:
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r9,9(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_823F1B64:
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823f1b64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F1B64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F59D0) {
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
	// bl 0x822d4e80
	ctx.lr = 0x823F59D8;
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
	// bgt cr6,0x823f5a18
	if (ctx.cr6.gt) goto loc_823F5A18;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823f5a18
	if (ctx.cr6.gt) goto loc_823F5A18;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f5a34
	if (!ctx.cr6.eq) goto loc_823F5A34;
loc_823F5A18:
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
	ctx.lr = 0x823F5A34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F5A34:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823f5a50
	if (ctx.cr6.lt) goto loc_823F5A50;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823f5adc
	if (!ctx.cr6.gt) goto loc_823F5ADC;
loc_823F5A50:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823f5a7c
	if (!ctx.cr6.eq) goto loc_823F5A7C;
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
	ctx.lr = 0x823F5A7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F5A7C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f5aa0
	if (ctx.cr6.eq) goto loc_823F5AA0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f5810
	ctx.lr = 0x823F5A98;
	sub_823F5810(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
loc_823F5AA0:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823f5ab4
	if (!ctx.cr6.gt) goto loc_823F5AB4;
	// stw r27,24(r31)
	REX_STORE_U32(r31.u32 + 24, r27.u32);
	// b 0x823f5acc
	goto loc_823F5ACC;
loc_823F5AB4:
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
loc_823F5ACC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f5810
	ctx.lr = 0x823F5ADC;
	sub_823F5810(ctx, base);
loc_823F5ADC:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bge cr6,0x823f5b6c
	if (!ctx.cr6.lt) goto loc_823F5B6C;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bge cr6,0x823f5b18
	if (!ctx.cr6.lt) goto loc_823F5B18;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x823f5b14
	if (ctx.cr6.eq) goto loc_823F5B14;
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
	ctx.lr = 0x823F5B14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F5B14:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_823F5B18:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x823f5b24
	if (ctx.cr6.eq) goto loc_823F5B24;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
loc_823F5B24:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823f5b98
	if (ctx.cr6.eq) goto loc_823F5B98;
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
	// bge cr6,0x823f5b6c
	if (!ctx.cr6.lt) goto loc_823F5B6C;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r11,r10
	r30.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_823F5B50:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// bl 0x823f6d98
	ctx.lr = 0x823F5B60;
	sub_823F6D98(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x823f5b50
	if (!ctx.cr0.eq) goto loc_823F5B50;
loc_823F5B6C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x823f5b7c
	if (ctx.cr6.eq) goto loc_823F5B7C;
loc_823F5B74:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
loc_823F5B7C:
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
	// b 0x822d4ed0
	return;
loc_823F5B98:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x823f5b74
	if (!ctx.cr6.eq) goto loc_823F5B74;
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
	ctx.lr = 0x823F5BBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f5b7c
	goto loc_823F5B7C;
}

DEFINE_REX_FUNC(sub_823FBF88) {
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
	// bl 0x822d4e7c
	ctx.lr = 0x823FBF90;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,16(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r11,420(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823fc080
	if (!ctx.cr6.eq) goto loc_823FC080;
	// cmpwi cr6,r5,25
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 25, ctx.xer);
	// bge cr6,0x823fc0d4
	if (!ctx.cr6.lt) goto loc_823FC0D4;
loc_823FBFC4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823fbff4
	if (!ctx.cr6.eq) goto loc_823FBFF4;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FBFE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fc070
	if (ctx.cr6.eq) goto loc_823FC070;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_823FBFF4:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bne cr6,0x823fc058
	if (!ctx.cr6.eq) goto loc_823FC058;
loc_823FC008:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823fc038
	if (!ctx.cr6.eq) goto loc_823FC038;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FC024;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fc070
	if (ctx.cr6.eq) goto loc_823FC070;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_823FC038:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// beq cr6,0x823fc008
	if (ctx.cr6.eq) goto loc_823FC008;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823fc07c
	if (!ctx.cr6.eq) goto loc_823FC07C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_823FC058:
	// rlwinm r10,r26,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 8) & 0xFFFFFF00;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// or r26,r10,r11
	r26.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmpwi cr6,r28,25
	ctx.cr6.compare<int32_t>(r28.s32, 25, ctx.xer);
	// blt cr6,0x823fbfc4
	if (ctx.cr6.lt) goto loc_823FBFC4;
	// b 0x823fc0d4
	goto loc_823FC0D4;
loc_823FC070:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_823FC07C:
	// stw r11,420(r29)
	REX_STORE_U32(r29.u32 + 420, ctx.r11.u32);
loc_823FC080:
	// cmpw cr6,r25,r28
	ctx.cr6.compare<int32_t>(r25.s32, r28.s32, ctx.xer);
	// ble cr6,0x823fc0d4
	if (!ctx.cr6.gt) goto loc_823FC0D4;
	// lwz r11,448(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 448);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823fc0c8
	if (!ctx.cr6.eq) goto loc_823FC0C8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,117
	ctx.r10.s64 = 117;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FC0BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,448(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 448);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
loc_823FC0C8:
	// subfic r11,r28,25
	ctx.xer.ca = r28.u32 <= 25;
	ctx.r11.u64 = static_cast<uint64_t>(25) - r28.u64;
	// li r28,25
	r28.s64 = 25;
	// slw r26,r26,r11
	r26.u64 = ctx.r11.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r11.u8 & 0x3F));
loc_823FC0D4:
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,4(r27)
	REX_STORE_U32(r27.u32 + 4, r30.u32);
	// stw r26,8(r27)
	REX_STORE_U32(r27.u32 + 8, r26.u32);
	// stw r28,12(r27)
	REX_STORE_U32(r27.u32 + 12, r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82402200) {
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
	// bl 0x822d4e68
	ctx.lr = 0x82402208;
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r11,328(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// lwz r10,80(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// addi r3,r5,-2
	ctx.r3.s64 = ctx.r5.s64 + -2;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// addi r10,r10,110
	ctx.r10.s64 = ctx.r10.s64 + 110;
	// addi r11,r1,-276
	ctx.r11.s64 = ctx.r1.s64 + -276;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82402228:
	// lhz r5,18(r3)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + 18);
	// lhz r8,34(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// lhz r4,50(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// extsh r30,r5
	r30.s64 = ctx.r5.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r5,66(r3)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + 66);
	// extsh r29,r4
	r29.s64 = ctx.r4.s16;
	// lhz r4,82(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 82);
	// or r31,r30,r8
	r31.u64 = r30.u64 | ctx.r8.u64;
	// lhz r26,98(r3)
	r26.u64 = REX_LOAD_U16(ctx.r3.u32 + 98);
	// extsh r28,r5
	r28.s64 = ctx.r5.s16;
	// lhz r25,114(r3)
	r25.u64 = REX_LOAD_U16(ctx.r3.u32 + 114);
	// or r5,r31,r29
	ctx.r5.u64 = r31.u64 | r29.u64;
	// extsh r27,r4
	r27.s64 = ctx.r4.s16;
	// or r4,r5,r28
	ctx.r4.u64 = ctx.r5.u64 | r28.u64;
	// extsh r5,r26
	ctx.r5.s64 = r26.s16;
	// or r4,r4,r27
	ctx.r4.u64 = ctx.r4.u64 | r27.u64;
	// extsh r26,r25
	r26.s64 = r25.s16;
	// or r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 | ctx.r5.u64;
	// or r4,r4,r26
	ctx.r4.u64 = ctx.r4.u64 | r26.u64;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x824022c8
	if (!ctx.cr6.eq) goto loc_824022C8;
	// lhz r8,-110(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + -110);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lhz r5,2(r3)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// mullw r5,r4,r8
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// stw r5,-92(r11)
	REX_STORE_U32(ctx.r11.u32 + -92, ctx.r5.u32);
	// stw r5,-60(r11)
	REX_STORE_U32(ctx.r11.u32 + -60, ctx.r5.u32);
	// stw r5,-28(r11)
	REX_STORE_U32(ctx.r11.u32 + -28, ctx.r5.u32);
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r5,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// stw r5,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r5.u32);
	// stw r5,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r5.u32);
	// stw r5,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8240246c
	goto loc_8240246C;
loc_824022C8:
	// lhz r4,-78(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + -78);
	// lhz r31,-14(r10)
	r31.u64 = REX_LOAD_U16(ctx.r10.u32 + -14);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r23,-46(r10)
	r23.u64 = REX_LOAD_U16(ctx.r10.u32 + -46);
	// extsh r24,r31
	r24.s64 = r31.s16;
	// lhz r22,-94(r10)
	r22.u64 = REX_LOAD_U16(ctx.r10.u32 + -94);
	// mullw r8,r4,r8
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// lhz r21,-62(r10)
	r21.u64 = REX_LOAD_U16(ctx.r10.u32 + -62);
	// lhz r20,-30(r10)
	r20.u64 = REX_LOAD_U16(ctx.r10.u32 + -30);
	// lhz r25,-110(r10)
	r25.u64 = REX_LOAD_U16(ctx.r10.u32 + -110);
	// lhzu r4,2(r3)
	ea = 2 + ctx.r3.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r3.u32 = ea;
	// lhzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	r31.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// mullw r24,r24,r5
	r24.s64 = int64_t(r24.s32) * int64_t(ctx.r5.s32);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// extsh r8,r24
	ctx.r8.s64 = r24.s16;
	// extsh r24,r23
	r24.s64 = r23.s16;
	// extsh r23,r22
	r23.s64 = r22.s16;
	// extsh r22,r21
	r22.s64 = r21.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r25,r25
	r25.s64 = r25.s16;
	// extsh r21,r20
	r21.s64 = r20.s16;
	// add r20,r5,r8
	r20.u64 = ctx.r5.u64 + ctx.r8.u64;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// mullw r30,r23,r30
	r30.s64 = int64_t(r23.s32) * int64_t(r30.s32);
	// subf r8,r8,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r8.u64;
	// mullw r29,r22,r29
	r29.s64 = int64_t(r22.s32) * int64_t(r29.s32);
	// mullw r4,r25,r4
	ctx.r4.s64 = int64_t(r25.s32) * int64_t(ctx.r4.s32);
	// mullw r5,r24,r28
	ctx.r5.s64 = int64_t(r24.s32) * int64_t(r28.s32);
	// mullw r31,r31,r26
	r31.s64 = int64_t(r31.s32) * int64_t(r26.s32);
	// mr r25,r30
	r25.u64 = r30.u64;
	// mulli r26,r8,362
	r26.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(362));
	// mullw r28,r21,r27
	r28.s64 = int64_t(r21.s32) * int64_t(r27.s32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r29,r31
	r29.s64 = r31.s16;
	// extsh r31,r28
	r31.s64 = r28.s16;
	// extsh r30,r30
	r30.s64 = r30.s16;
	// srawi r27,r26,8
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0xFF) != 0);
	r27.s64 = r26.s32 >> 8;
	// add r26,r4,r5
	r26.u64 = ctx.r4.u64 + ctx.r5.u64;
	// extsh r28,r25
	r28.s64 = r25.s16;
	// subf r4,r5,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r5.u64;
	// extsh r8,r20
	ctx.r8.s64 = r20.s16;
	// add r5,r30,r31
	ctx.r5.u64 = r30.u64 + r31.u64;
	// subf r25,r30,r31
	r25.u64 = r31.u64 - r30.u64;
	// add r30,r28,r29
	r30.u64 = r28.u64 + r29.u64;
	// subf r24,r29,r28
	r24.u64 = r28.u64 - r29.u64;
	// subf r28,r8,r27
	r28.u64 = r27.u64 - ctx.r8.u64;
	// mr r27,r26
	r27.u64 = r26.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// extsh r5,r27
	ctx.r5.s64 = r27.s16;
	// extsh r29,r28
	r29.s64 = r28.s16;
	// extsh r28,r24
	r28.s64 = r24.s16;
	// extsh r27,r25
	r27.s64 = r25.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// add r25,r27,r28
	r25.u64 = r27.u64 + r28.u64;
	// extsh r31,r26
	r31.s64 = r26.s16;
	// extsh r30,r30
	r30.s64 = r30.s16;
	// add r26,r5,r8
	r26.u64 = ctx.r5.u64 + ctx.r8.u64;
	// subf r24,r8,r5
	r24.u64 = ctx.r5.u64 - ctx.r8.u64;
	// mulli r5,r25,473
	ctx.r5.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(473));
	// add r23,r31,r4
	r23.u64 = r31.u64 + ctx.r4.u64;
	// subf r22,r4,r31
	r22.u64 = r31.u64 - ctx.r4.u64;
	// add r8,r29,r30
	ctx.r8.u64 = r29.u64 + r30.u64;
	// mulli r31,r27,-669
	r31.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(-669));
	// srawi r4,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 8;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// srawi r8,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	ctx.r8.s64 = r31.s32 >> 8;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// subf r4,r5,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r31
	ctx.r8.s64 = r31.s16;
	// subf r31,r29,r30
	r31.u64 = r30.u64 - r29.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// mulli r31,r31,362
	r31.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(362));
	// srawi r31,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r31.s64 = r31.s32 >> 8;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// mulli r30,r28,277
	r30.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(277));
	// subf r31,r4,r31
	r31.u64 = r31.u64 - ctx.r4.u64;
	// srawi r30,r30,8
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	r30.s64 = r30.s32 >> 8;
	// subf r30,r8,r30
	r30.u64 = r30.u64 - ctx.r8.u64;
	// extsh r8,r31
	ctx.r8.s64 = r31.s16;
	// extsh r31,r26
	r31.s64 = r26.s16;
	// add r28,r30,r8
	r28.u64 = r30.u64 + ctx.r8.u64;
	// extsh r30,r23
	r30.s64 = r23.s16;
	// add r26,r5,r31
	r26.u64 = ctx.r5.u64 + r31.u64;
	// subf r31,r5,r31
	r31.u64 = r31.u64 - ctx.r5.u64;
	// extsh r29,r22
	r29.s64 = r22.s16;
	// stw r26,-92(r11)
	REX_STORE_U32(ctx.r11.u32 + -92, r26.u32);
	// add r5,r4,r30
	ctx.r5.u64 = ctx.r4.u64 + r30.u64;
	// stw r31,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, r31.u32);
	// extsh r27,r28
	r27.s64 = r28.s16;
	// subf r30,r4,r30
	r30.u64 = r30.u64 - ctx.r4.u64;
	// stw r5,-60(r11)
	REX_STORE_U32(ctx.r11.u32 + -60, ctx.r5.u32);
	// add r4,r8,r29
	ctx.r4.u64 = ctx.r8.u64 + r29.u64;
	// extsh r28,r24
	r28.s64 = r24.s16;
	// stw r30,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, r30.u32);
	// subf r5,r8,r29
	ctx.r5.u64 = r29.u64 - ctx.r8.u64;
	// stw r4,-28(r11)
	REX_STORE_U32(ctx.r11.u32 + -28, ctx.r4.u32);
	// add r8,r27,r28
	ctx.r8.u64 = r27.u64 + r28.u64;
	// subf r4,r27,r28
	ctx.r4.u64 = r28.u64 - r27.u64;
	// stw r5,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r5.u32);
	// stw r8,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
loc_8240246C:
	// bdnz 0x82402228
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82402228;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,-400
	ctx.r10.s64 = ctx.r1.s64 + -400;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82402480:
	// lwz r8,40(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r6,36(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r4,44(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// lwz r29,48(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r3,52(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// or r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 | ctx.r4.u64;
	// lwz r31,56(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r30,60(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// or r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 | r29.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// or r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 | ctx.r3.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// or r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 | r31.u64;
	// or r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 | r30.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x824024fc
	if (!ctx.cr6.eq) goto loc_824024FC;
	// lwz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// srawi r6,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 5;
	// clrlwi r5,r6,22
	ctx.r5.u64 = ctx.r6.u32 & 0x3FF;
	// lbzx r4,r5,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// stb r4,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// stb r4,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r4.u8);
	// stb r4,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r4.u8);
	// stb r4,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r4.u8);
	// stb r4,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// stb r4,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r4.u8);
	// stb r4,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r4.u8);
	// stb r4,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r4.u8);
	// b 0x82402680
	goto loc_82402680;
loc_824024FC:
	// lwzu r5,32(r10)
	ea = 32 + ctx.r10.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r24,r8,r31
	r24.u64 = ctx.r8.u64 + r31.u64;
	// add r26,r4,r3
	r26.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r25,r5,r29
	r25.u64 = ctx.r5.u64 + r29.u64;
	// subf r4,r4,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r4.u64;
	// subf r23,r30,r6
	r23.u64 = ctx.r6.u64 - r30.u64;
	// add r27,r6,r30
	r27.u64 = ctx.r6.u64 + r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// extsh r6,r27
	ctx.r6.s64 = r27.s16;
	// extsh r3,r26
	ctx.r3.s64 = r26.s16;
	// extsh r4,r30
	ctx.r4.s64 = r30.s16;
	// extsh r26,r31
	r26.s64 = r31.s16;
	// extsh r27,r25
	r27.s64 = r25.s16;
	// extsh r30,r24
	r30.s64 = r24.s16;
	// extsh r31,r23
	r31.s64 = r23.s16;
	// subf r27,r26,r27
	r27.u64 = r27.u64 - r26.u64;
	// add r26,r30,r31
	r26.u64 = r30.u64 + r31.u64;
	// add r25,r3,r6
	r25.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r24,r4,r8
	r24.u64 = ctx.r4.u64 + ctx.r8.u64;
	// subf r23,r3,r6
	r23.u64 = ctx.r6.u64 - ctx.r3.u64;
	// mulli r27,r27,362
	r27.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(362));
	// mulli r26,r26,473
	r26.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(473));
	// extsh r6,r25
	ctx.r6.s64 = r25.s16;
	// mulli r30,r30,-669
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(-669));
	// extsh r3,r24
	ctx.r3.s64 = r24.s16;
	// srawi r27,r27,8
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xFF) != 0);
	r27.s64 = r27.s32 >> 8;
	// mulli r25,r23,362
	r25.s64 = static_cast<int64_t>(r23.u64 * static_cast<uint64_t>(362));
	// srawi r26,r26,8
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0xFF) != 0);
	r26.s64 = r26.s32 >> 8;
	// mulli r31,r31,277
	r31.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(277));
	// add r24,r6,r3
	r24.u64 = ctx.r6.u64 + ctx.r3.u64;
	// srawi r30,r30,8
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	r30.s64 = r30.s32 >> 8;
	// srawi r25,r25,8
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0xFF) != 0);
	r25.s64 = r25.s32 >> 8;
	// srawi r23,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r23.s64 = r31.s32 >> 8;
	// srawi r31,r24,5
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1F) != 0);
	r31.s64 = r24.s32 >> 5;
	// subf r5,r29,r5
	ctx.r5.u64 = ctx.r5.u64 - r29.u64;
	// clrlwi r31,r31,22
	r31.u64 = r31.u32 & 0x3FF;
	// subf r29,r8,r27
	r29.u64 = r27.u64 - ctx.r8.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// subf r5,r6,r30
	ctx.r5.u64 = r30.u64 - ctx.r6.u64;
	// extsh r30,r27
	r30.s64 = r27.s16;
	// lbzx r24,r31,r9
	r24.u64 = REX_LOAD_U8(r31.u32 + ctx.r9.u32);
	// extsh r31,r29
	r31.s64 = r29.s16;
	// extsh r29,r26
	r29.s64 = r26.s16;
	// subf r3,r6,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r6.u64;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + r29.u64;
	// add r27,r30,r31
	r27.u64 = r30.u64 + r31.u64;
	// stb r24,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r24.u8);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// srawi r5,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 5;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r3,r27
	ctx.r3.s64 = r27.s16;
	// clrlwi r27,r5,22
	r27.u64 = ctx.r5.u32 & 0x3FF;
	// add r26,r6,r3
	r26.u64 = ctx.r6.u64 + ctx.r3.u64;
	// subf r5,r6,r25
	ctx.r5.u64 = r25.u64 - ctx.r6.u64;
	// subf r4,r8,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r8.u64;
	// subf r6,r6,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r6.u64;
	// subf r8,r31,r30
	ctx.r8.u64 = r30.u64 - r31.u64;
	// srawi r26,r26,5
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	r26.s64 = r26.s32 >> 5;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// srawi r3,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 5;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// clrlwi r26,r26,22
	r26.u64 = r26.u32 & 0x3FF;
	// add r6,r5,r8
	ctx.r6.u64 = ctx.r5.u64 + ctx.r8.u64;
	// subf r29,r29,r23
	r29.u64 = r23.u64 - r29.u64;
	// clrlwi r3,r3,22
	ctx.r3.u64 = ctx.r3.u32 & 0x3FF;
	// add r31,r29,r5
	r31.u64 = r29.u64 + ctx.r5.u64;
	// srawi r6,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 5;
	// lbzx r30,r27,r9
	r30.u64 = REX_LOAD_U8(r27.u32 + ctx.r9.u32);
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// clrlwi r8,r6,22
	ctx.r8.u64 = ctx.r6.u32 & 0x3FF;
	// srawi r5,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 5;
	// extsh r6,r31
	ctx.r6.s64 = r31.s16;
	// stb r30,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, r30.u8);
	// lbzx r30,r26,r9
	r30.u64 = REX_LOAD_U8(r26.u32 + ctx.r9.u32);
	// stb r30,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, r30.u8);
	// lbzx r3,r3,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// stb r3,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r3.u8);
	// lbzx r3,r8,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// clrlwi r5,r5,22
	ctx.r5.u64 = ctx.r5.u32 & 0x3FF;
	// add r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stb r3,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r3.u8);
	// subf r3,r6,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r6.u64;
	// srawi r8,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 5;
	// lbzx r5,r5,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// stb r5,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r5.u8);
	// srawi r6,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 5;
	// clrlwi r5,r8,22
	ctx.r5.u64 = ctx.r8.u32 & 0x3FF;
	// clrlwi r4,r6,22
	ctx.r4.u64 = ctx.r6.u32 & 0x3FF;
	// lbzx r3,r5,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// stb r3,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r3.u8);
	// lbzx r8,r4,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// stb r8,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
loc_82402680:
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bdnz 0x82402480
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82402480;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_82413788) {
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
	// bl 0x822d4e84
	ctx.lr = 0x82413790;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r11,r11,-23928
	ctx.r11.s64 = ctx.r11.s64 + -23928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r28,r3,60
	r28.s64 = ctx.r3.s64 + 60;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r4,r4,40
	ctx.r4.s64 = ctx.r4.s64 + 40;
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x824137E8;
	sub_822D4FA0(ctx, base);
	// lwz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// beq cr6,0x82413804
	if (ctx.cr6.eq) goto loc_82413804;
	// addi r11,r11,11088
	ctx.r11.s64 = ctx.r11.s64 + 11088;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// b 0x82413808
	goto loc_82413808;
loc_82413804:
	// addi r10,r11,11088
	ctx.r10.s64 = ctx.r11.s64 + 11088;
loc_82413808:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// addic r10,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r10.s64 = r30.s64 + -1;
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// rlwinm r7,r30,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 29) & 0x1FFFFFFF;
	// subfe r6,r10,r30
	temp.u8 = (~ctx.r10.u32 + r30.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// stw r7,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r7.u32);
	// stw r6,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// lwz r10,76(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 76);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// lwz r9,72(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 72);
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x82413904
	if (ctx.cr6.eq) goto loc_82413904;
	// lwz r10,76(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 76);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r3,r10,8,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// std r4,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// rlwinm r5,r10,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// std r3,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// rlwinm r10,r10,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfs f0,-13044(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r9,r31,36
	ctx.r9.s64 = r31.s64 + 36;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,12(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// stw r5,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r5.u32);
	// stw r8,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r8.u32);
loc_82413904:
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(r27.u32, 2, ctx.xer);
	// bne cr6,0x82413924
	if (!ctx.cr6.eq) goto loc_82413924;
	// lis r10,10784
	ctx.r10.s64 = 706740224;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ori r10,r10,2885
	ctx.r10.u64 = ctx.r10.u64 | 2885;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82413924
	if (ctx.cr6.eq) goto loc_82413924;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_82413924:
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(r27.u32, 3, ctx.xer);
	// bne cr6,0x82413930
	if (!ctx.cr6.eq) goto loc_82413930;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_82413930:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r6,72(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// subf r5,r10,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r10.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 80);
	// subf r6,r9,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r9.u64;
	// lwz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mullw r3,r5,r7
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// stw r5,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r5.u32);
	// stw r6,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r6.u32);
	// stw r3,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// subf r6,r8,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r8.u64;
	// stw r6,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r6.u32);
	// beq cr6,0x824139bc
	if (ctx.cr6.eq) goto loc_824139BC;
	// mullw r7,r10,r7
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r5,100(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r3,108(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// lwz r30,112(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 112);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// mullw r10,r8,r5
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mullw r10,r9,r4
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
loc_824139BC:
	// lwz r10,68(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82413a08
	if (ctx.cr6.eq) goto loc_82413A08;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824139e8
	if (!ctx.cr6.gt) goto loc_824139E8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824139E8:
	// bl 0x822c80d0
	ctx.lr = 0x824139EC;
	sub_822C80D0(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822d5870
	ctx.lr = 0x82413A04;
	sub_822D5870(ctx, base);
	// b 0x82413a0c
	goto loc_82413A0C;
loc_82413A08:
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
loc_82413A0C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8241BB08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8241BB10;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// bge cr6,0x8241bc4c
	if (!ctx.cr6.lt) goto loc_8241BC4C;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r10,-32768
	ctx.r10.s64 = -32768;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,23268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23268);
	ctx.f0.f64 = double(temp.f32);
loc_8241BB68:
	// ldu r11,8(r5)
	ea = 8 + ctx.r5.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r5.u32 = ea;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// rldicl r7,r11,48,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 48) & 0xFFFFFFFFFFFF;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// rldicl r8,r11,16,48
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFF;
	// rldicl r30,r11,32,32
	r30.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// subf r7,r10,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r10.u64;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// extsh r31,r11
	r31.s64 = ctx.r11.s16;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// subf r29,r10,r4
	r29.u64 = ctx.r4.u64 - ctx.r10.u64;
	// subf r31,r10,r31
	r31.u64 = r31.u64 - ctx.r10.u64;
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cntlzw r7,r29
	ctx.r7.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// cntlzw r29,r31
	r29.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r9,r29,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x1;
	// rlwinm r31,r7,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r7,r30,16
	ctx.r7.u64 = r30.u32 & 0xFFFF;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r8,r31,r8
	ctx.r8.u64 = r31.u64 + ctx.r8.u64;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// lfd f11,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r30,r11,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// add r11,r30,r7
	ctx.r11.u64 = r30.u64 + ctx.r7.u64;
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,8(r6)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8241bb68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241BB68;
loc_8241BC4C:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241bc68
	if (ctx.cr6.eq) goto loc_8241BC68;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x8241BC68;
	sub_82413D40(ctx, base);
loc_8241BC68:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241bc84
	if (ctx.cr6.eq) goto loc_8241BC84;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82414110
	ctx.lr = 0x8241BC84;
	sub_82414110(ctx, base);
loc_8241BC84:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824206F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x824206F8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,971
	ctx.r4.s64 = 971;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x8240e810
	ctx.lr = 0x82420710;
	sub_8240E810(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82420774
	if (!ctx.cr6.eq) goto loc_82420774;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82420734
	if (ctx.cr6.eq) goto loc_82420734;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e930
	ctx.lr = 0x82420734;
	sub_8240E930(ctx, base);
loc_82420734:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242076c
	if (ctx.cr6.eq) goto loc_8242076C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8242076c
	if (ctx.cr6.eq) goto loc_8242076C;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18888
	ctx.r4.s64 = ctx.r10.s64 + -18888;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,60
	ctx.r6.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,240(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 240);
	// bctrl 
	ctx.lr = 0x8242076C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242076C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824207cc
	goto loc_824207CC;
loc_82420774:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82420790
	if (ctx.cr6.eq) goto loc_82420790;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e930
	ctx.lr = 0x82420790;
	sub_8240E930(ctx, base);
loc_82420790:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824207c8
	if (ctx.cr6.eq) goto loc_824207C8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824207c8
	if (ctx.cr6.eq) goto loc_824207C8;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18888
	ctx.r4.s64 = ctx.r10.s64 + -18888;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,60
	ctx.r6.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,240(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 240);
	// bctrl 
	ctx.lr = 0x824207C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824207C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824207CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82422888) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82412d18
	ctx.lr = 0x824228C0;
	sub_82412D18(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_82424FA0) {
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
	// bl 0x822d4e50
	ctx.lr = 0x82424FA8;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f14
	ctx.lr = 0x82424FB0;
	// stwu r1,-1024(r1)
	ea = -1024 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// stw r3,1044(r1)
	REX_STORE_U32(ctx.r1.u32 + 1044, ctx.r3.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r6,1068(r1)
	REX_STORE_U32(ctx.r1.u32 + 1068, ctx.r6.u32);
	// addi r7,r11,19940
	ctx.r7.s64 = ctx.r11.s64 + 19940;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r26,16
	r26.s64 = 16;
	// stw r7,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r7.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8242503c
	if (ctx.cr6.eq) goto loc_8242503C;
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r9,r4,12
	ctx.r9.s64 = ctx.r4.s64 + 12;
loc_82424FF0:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82425000
	if (!ctx.cr6.lt) goto loc_82425000;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82425000:
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x82424ff0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82424FF0;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bne cr6,0x8242502c
	if (!ctx.cr6.eq) goto loc_8242502C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r11,2(r8)
	REX_STORE_U16(ctx.r8.u32 + 2, ctx.r11.u16);
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// sth r9,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r9.u16);
	// b 0x82425910
	goto loc_82425910;
loc_8242502C:
	// subfic r11,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82425040
	goto loc_82425040;
loc_8242503C:
	// li r11,4
	ctx.r11.s64 = 4;
loc_82425040:
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8242505c
	if (ctx.cr6.eq) goto loc_8242505C;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x822d5870
	ctx.lr = 0x8242505C;
	sub_822D5870(ctx, base);
loc_8242505C:
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r9,r1,332
	ctx.r9.s64 = ctx.r1.s64 + 332;
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// subf r11,r31,r10
	ctx.r11.u64 = ctx.r10.u64 - r31.u64;
	// subf r10,r31,r9
	ctx.r10.u64 = ctx.r9.u64 - r31.u64;
	// subf r9,r31,r8
	ctx.r9.u64 = ctx.r8.u64 - r31.u64;
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// addi r27,r1,300
	r27.s64 = ctx.r1.s64 + 300;
	// stw r10,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// lis r8,-32171
	ctx.r8.s64 = -2108358656;
	// stw r9,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// subf r20,r31,r27
	r20.u64 = r27.u64 - r31.u64;
	// lwz r15,172(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// addi r25,r1,304
	r25.s64 = ctx.r1.s64 + 304;
	// lis r27,-32256
	r27.s64 = -2113929216;
	// subf r19,r31,r25
	r19.u64 = r25.u64 - r31.u64;
	// lfs f27,13072(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 13072);
	f27.f64 = double(temp.f32);
	// addi r25,r8,13072
	r25.s64 = ctx.r8.s64 + 13072;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// addi r5,r1,264
	ctx.r5.s64 = ctx.r1.s64 + 264;
	// lfs f21,17176(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 17176);
	f21.f64 = double(temp.f32);
	// lis r27,-32256
	r27.s64 = -2113929216;
	// subf r30,r31,r5
	r30.u64 = ctx.r5.u64 - r31.u64;
	// stw r27,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r27.u32);
	// addi r4,r1,268
	ctx.r4.s64 = ctx.r1.s64 + 268;
	// lfs f22,22428(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 22428);
	f22.f64 = double(temp.f32);
	// lwz r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f29,8(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8);
	f29.f64 = double(temp.f32);
	// addi r29,r1,272
	r29.s64 = ctx.r1.s64 + 272;
	// lfs f28,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	f28.f64 = double(temp.f32);
	// addi r24,r1,312
	r24.s64 = ctx.r1.s64 + 312;
	// addi r28,r1,296
	r28.s64 = ctx.r1.s64 + 296;
	// addi r23,r1,316
	r23.s64 = ctx.r1.s64 + 316;
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// lfs f19,16288(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16288);
	f19.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r18,r1,320
	r18.s64 = ctx.r1.s64 + 320;
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// addi r17,r1,328
	r17.s64 = ctx.r1.s64 + 328;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// subf r22,r31,r4
	r22.u64 = ctx.r4.u64 - r31.u64;
	// subf r21,r31,r29
	r21.u64 = r29.u64 - r31.u64;
	// subf r4,r31,r24
	ctx.r4.u64 = r24.u64 - r31.u64;
	// subf r29,r31,r28
	r29.u64 = r28.u64 - r31.u64;
	// subf r24,r31,r23
	r24.u64 = r23.u64 - r31.u64;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// subf r23,r31,r18
	r23.u64 = r18.u64 - r31.u64;
	// subf r28,r31,r17
	r28.u64 = r17.u64 - r31.u64;
	// rotlwi r14,r9,0
	r14.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f30,-7220(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -7220);
	f30.f64 = double(temp.f32);
	// lis r18,-32249
	r18.s64 = -2113470464;
	// lfs f31,9952(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 9952);
	f31.f64 = double(temp.f32);
	// lis r17,-32256
	r17.s64 = -2113929216;
	// ld r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// ld r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// addi r7,r1,516
	ctx.r7.s64 = ctx.r1.s64 + 516;
	// addi r16,r1,512
	r16.s64 = ctx.r1.s64 + 512;
	// lfs f23,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	f23.f64 = double(temp.f32);
	// subf r3,r31,r7
	ctx.r3.u64 = ctx.r7.u64 - r31.u64;
	// lfs f20,-7224(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + -7224);
	f20.f64 = double(temp.f32);
	// subf r7,r31,r16
	ctx.r7.u64 = r16.u64 - r31.u64;
	// lwz r16,1068(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
	// lfs f6,1992(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 1992);
	ctx.f6.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f7,25732(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 25732);
	ctx.f7.f64 = double(temp.f32);
	// addi r27,r9,2000
	r27.s64 = ctx.r9.s64 + 2000;
	// lfs f8,32280(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 32280);
	ctx.f8.f64 = double(temp.f32);
loc_82425180:
	// lfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// lfs f12,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x824251b8
	if (ctx.cr6.eq) goto loc_824251B8;
	// lwz r8,164(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// addi r9,r1,260
	ctx.r9.s64 = ctx.r1.s64 + 260;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfsx f11,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f11,-4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
loc_824251B8:
	// fmadds f11,f13,f8,f23
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, f23.f64)));
	// addi r8,r1,512
	ctx.r8.s64 = ctx.r1.s64 + 512;
	// fmadds f10,f12,f7,f23
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f7.f64, f23.f64)));
	// addi r5,r1,516
	ctx.r5.s64 = ctx.r1.s64 + 516;
	// fmadds f9,f0,f8,f23
	ctx.f9.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, f23.f64)));
	// stfsx f6,r3,r11
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// fctiwz f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// fctiwz f11,f10
	ctx.f11.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// lwa r9,100(r1)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 100));
	// fctiwz f10,f9
	ctx.f10.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f10,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f10.u64);
	// stfd f11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// std r9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lwa r17,132(r1)
	r17.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 132));
	// lfd f10,112(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// std r17,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r17.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwa r18,100(r1)
	r18.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 100));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// std r18,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, r18.u64);
	// lfd f11,144(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mr r18,r17
	r18.u64 = r17.u64;
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// stfsx f10,r10,r8
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * f30.f64));
	// stfsx f11,r5,r10
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * f31.f64));
	// stfsx f9,r7,r11
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// beq cr6,0x82425308
	if (ctx.cr6.eq) goto loc_82425308;
	// clrlwi r9,r6,30
	ctx.r9.u64 = ctx.r6.u32 & 0x3;
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// beq cr6,0x82425284
	if (ctx.cr6.eq) goto loc_82425284;
	// lfsx f5,r30,r11
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r22,r11
	temp.u32 = REX_LOAD_U32(r22.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f5,f13,f22,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, f22.f64, ctx.f5.f64)));
	// lfsx f3,r21,r11
	temp.u32 = REX_LOAD_U32(r21.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f4,f12,f22,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f12.f64, f22.f64, ctx.f4.f64)));
	// fmadds f3,f0,f22,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, f22.f64, ctx.f3.f64)));
	// stfsx f5,r30,r11
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r30.u32 + ctx.r11.u32, temp.u32);
	// stfsx f4,r22,r11
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r22.u32 + ctx.r11.u32, temp.u32);
	// stfsx f3,r21,r11
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r21.u32 + ctx.r11.u32, temp.u32);
loc_82425284:
	// cmplwi cr6,r6,12
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 12, ctx.xer);
	// bge cr6,0x82425308
	if (!ctx.cr6.lt) goto loc_82425308;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824252b8
	if (ctx.cr6.eq) goto loc_824252B8;
	// lfsx f5,r29,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r20,r11
	temp.u32 = REX_LOAD_U32(r20.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f5,f13,f21,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, f21.f64, ctx.f5.f64)));
	// lfsx f3,r19,r11
	temp.u32 = REX_LOAD_U32(r19.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f4,f12,f21,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f12.f64, f21.f64, ctx.f4.f64)));
	// fmadds f3,f0,f21,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, f21.f64, ctx.f3.f64)));
	// stfsx f5,r29,r11
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r29.u32 + ctx.r11.u32, temp.u32);
	// stfsx f4,r20,r11
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r20.u32 + ctx.r11.u32, temp.u32);
	// stfsx f3,r19,r11
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r19.u32 + ctx.r11.u32, temp.u32);
loc_824252B8:
	// lfsx f5,r4,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// lfsx f4,r24,r11
	temp.u32 = REX_LOAD_U32(r24.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f5,f13,f20,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, f20.f64, ctx.f5.f64)));
	// lfsx f3,r23,r11
	temp.u32 = REX_LOAD_U32(r23.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f4,f12,f20,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f12.f64, f20.f64, ctx.f4.f64)));
	// fmadds f3,f0,f20,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, f20.f64, ctx.f3.f64)));
	// stfsx f5,r4,r11
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
	// stfsx f4,r24,r11
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r24.u32 + ctx.r11.u32, temp.u32);
	// stfsx f3,r23,r11
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r23.u32 + ctx.r11.u32, temp.u32);
	// beq cr6,0x82425308
	if (ctx.cr6.eq) goto loc_82425308;
	// lfsx f5,r28,r11
	temp.u32 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f13,f13,f19,f5
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f19.f64, ctx.f5.f64)));
	// lfsx f4,r15,r11
	temp.u32 = REX_LOAD_U32(r15.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f5,r14,r11
	temp.u32 = REX_LOAD_U32(r14.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f12,f12,f19,f4
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f19.f64, ctx.f4.f64)));
	// fmadds f0,f0,f19,f5
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f19.f64, ctx.f5.f64)));
	// stfsx f13,r28,r11
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + ctx.r11.u32, temp.u32);
	// stfsx f12,r15,r11
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r15.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r14,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r14.u32 + ctx.r11.u32, temp.u32);
loc_82425308:
	// fmuls f0,f10,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 * f27.f64));
	// stfsx f0,r10,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// fmuls f0,f11,f28
	ctx.f0.f64 = double(float(ctx.f11.f64 * f28.f64));
	// stfsx f0,r5,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// fmuls f0,f9,f29
	ctx.f0.f64 = double(float(ctx.f9.f64 * f29.f64));
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82425180
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82425180;
	// lwz r18,168(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82424b20
	ctx.lr = 0x82425348;
	sub_82424B20(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lfs f11,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,13088
	ctx.r10.s64 = ctx.r11.s64 + 13088;
	// lfs f10,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,13088(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 13088);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f11,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x823f22d8
	ctx.lr = 0x824253AC;
	sub_823F22D8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f22d8
	ctx.lr = 0x824253B8;
	sub_823F22D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r18,4
	ctx.cr6.compare<uint32_t>(r18.u32, 4, ctx.xer);
	// bne cr6,0x824253ec
	if (!ctx.cr6.eq) goto loc_824253EC;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824253ec
	if (!ctx.cr6.eq) goto loc_824253EC;
	// lwz r10,1044(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1044);
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r8,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// sth r3,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r3.u16);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// b 0x82425910
	goto loc_82425910;
loc_824253EC:
	// rlwinm r9,r8,21,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 21) & 0x1F;
	// lwz r17,1044(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1044);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// std r9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// rlwinm r9,r8,27,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3F;
	// rlwinm r7,r11,27,26,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f9,96(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r10,r11,21,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1F;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// lfd f13,112(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f10,112(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// clrlwi r10,r8,27
	ctx.r10.u64 = ctx.r8.u32 & 0x1F;
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// addi r6,r18,-3
	ctx.r6.s64 = r18.s64 + -3;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// li r5,-1
	ctx.r5.s64 = -1;
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// subfc r10,r9,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r9.u32;
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// subfze r10,r5
	temp.u8 = ~ctx.r5.u32 + ctx.xer.ca < ~ctx.r5.u32;
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// fmuls f9,f9,f30
	ctx.f9.f64 = double(float(ctx.f9.f64 * f30.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * f30.f64));
	// fmuls f13,f27,f13
	ctx.f13.f64 = double(float(f27.f64 * ctx.f13.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f13,f10,f27
	ctx.f13.f64 = double(float(ctx.f10.f64 * f27.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f13,f9,f28
	ctx.f13.f64 = double(float(ctx.f9.f64 * f28.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f11,f11,f29
	ctx.f11.f64 = double(float(ctx.f11.f64 * f29.f64));
	// stfs f11,152(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f13,f12,f28
	ctx.f13.f64 = double(float(ctx.f12.f64 * f28.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bne cr6,0x82425514
	if (!ctx.cr6.eq) goto loc_82425514;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// std r7,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// sth r8,0(r17)
	REX_STORE_U16(r17.u32 + 0, ctx.r8.u16);
	// sth r11,2(r17)
	REX_STORE_U16(r17.u32 + 2, ctx.r11.u16);
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r7,8(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stw r9,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r7,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// ld r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// b 0x82425544
	goto loc_82425544;
loc_82425514:
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// std r7,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// sth r11,0(r17)
	REX_STORE_U16(r17.u32 + 0, ctx.r11.u16);
	// sth r8,2(r17)
	REX_STORE_U16(r17.u32 + 2, ctx.r8.u16);
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r7,8(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stw r9,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r7,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// ld r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
loc_82425544:
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lwz r30,4(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r18,3
	ctx.cr6.compare<uint32_t>(r18.u32, 3, ctx.xer);
	// lwz r29,8(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lwz r28,0(r6)
	r28.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r3,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r6,12(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stw r29,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, r29.u32);
	// stw r28,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r28.u32);
	// stw r10,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r30,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, r30.u32);
	// stw r6,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v61,r26,r8
	temp.u32 = r26.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// bne cr6,0x824255d0
	if (!ctx.cr6.eq) goto loc_824255D0;
	// lvlx128 v63,r0,r27
	temp.u32 = r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// vspltw128 v12,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvrx128 v63,r26,r11
	temp.u32 = r26.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v0,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvlx128 v63,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v63,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r28,r11,-14736
	r28.s64 = ctx.r11.s64 + -14736;
	// vsubfp128 v13,v63,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v13,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvlx v0,0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r4,r26
	ea = ctx.r4.u32 + r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// b 0x82425668
	goto loc_82425668;
loc_824255D0:
	// lvrx128 v63,r26,r11
	temp.u32 = r26.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// vor128 v0,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvlx128 v63,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v63,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// addi r11,r5,-31056
	ctx.r11.s64 = ctx.r5.s64 + -31056;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lwz r15,172(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r14,160(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r30,r1,176
	r30.s64 = ctx.r1.s64 + 176;
	// lwz r16,1068(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
	// vsubfp128 v13,v63,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lvlx128 v62,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// vspltw128 v12,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// addi r3,r11,-30672
	ctx.r3.s64 = ctx.r11.s64 + -30672;
	// addi r29,r1,224
	r29.s64 = ctx.r1.s64 + 224;
	// addi r27,r1,224
	r27.s64 = ctx.r1.s64 + 224;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r28,r11,-14752
	r28.s64 = ctx.r11.s64 + -14752;
	// vmaddfp v0,v13,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvlx v0,0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r10,r26
	ea = ctx.r10.u32 + r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lvrx128 v60,r26,r5
	temp.u32 = r26.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v59,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v63,r26,r8
	temp.u32 = r26.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vor128 v0,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vspltw128 v12,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// vsubfp128 v13,v63,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v13,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvlx v0,0,r29
	ea = r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r27,r26
	ea = r27.u32 + r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
loc_82425668:
	// addi r11,r18,-1
	ctx.r11.s64 = r18.s64 + -1;
	// lfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f27,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	f27.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - f27.f64));
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f0,200(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// lfs f25,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	f25.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// fsubs f11,f0,f25
	ctx.f11.f64 = double(float(ctx.f0.f64 - f25.f64));
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f26,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	f26.f64 = double(temp.f32);
	// lfs f12,196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// frsp f24,f0
	f24.f64 = double(float(ctx.f0.f64));
	// lfs f28,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f28.f64 = double(temp.f32);
	// fsubs f12,f12,f26
	ctx.f12.f64 = double(float(ctx.f12.f64 - f26.f64));
	// beq cr6,0x824256c8
	if (ctx.cr6.eq) goto loc_824256C8;
	// fmuls f0,f12,f12
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f0.f64)));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fdivs f0,f24,f0
	ctx.f0.f64 = double(float(f24.f64 / ctx.f0.f64));
	// b 0x824256cc
	goto loc_824256CC;
loc_824256C8:
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f28.f64;
loc_824256CC:
	// fmuls f31,f0,f13
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// li r29,0
	r29.s64 = 0;
	// fmuls f30,f0,f12
	f30.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// fmuls f29,f0,f11
	f29.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// beq cr6,0x824256f4
	if (ctx.cr6.eq) goto loc_824256F4;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x822d5870
	ctx.lr = 0x824256F4;
	sub_822D5870(ctx, base);
loc_824256F4:
	// addi r10,r1,260
	ctx.r10.s64 = ctx.r1.s64 + 260;
	// lfs f10,8(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r1,520
	ctx.r7.s64 = ctx.r1.s64 + 520;
	// lfs f9,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// subf r30,r31,r10
	r30.u64 = ctx.r10.u64 - r31.u64;
	// lwz r10,240(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// addi r4,r1,324
	ctx.r4.s64 = ctx.r1.s64 + 324;
	// lfs f8,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r1,276
	ctx.r6.s64 = ctx.r1.s64 + 276;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r5,r1,308
	ctx.r5.s64 = ctx.r1.s64 + 308;
	// addi r27,r1,340
	r27.s64 = ctx.r1.s64 + 340;
	// subf r3,r31,r7
	ctx.r3.u64 = ctx.r7.u64 - r31.u64;
	// lfs f7,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// subf r7,r31,r4
	ctx.r7.u64 = ctx.r4.u64 - r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// subf r6,r31,r6
	ctx.r6.u64 = ctx.r6.u64 - r31.u64;
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - r31.u64;
	// subf r4,r31,r27
	ctx.r4.u64 = r27.u64 - r31.u64;
loc_8242574C:
	// cmplwi cr6,r18,3
	ctx.cr6.compare<uint32_t>(r18.u32, 3, ctx.xer);
	// bne cr6,0x8242576c
	if (!ctx.cr6.eq) goto loc_8242576C;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bge cr6,0x8242576c
	if (!ctx.cr6.lt) goto loc_8242576C;
	// rlwinm r10,r29,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// oris r29,r10,49152
	r29.u64 = ctx.r10.u64 | 3221225472;
	// b 0x824258f8
	goto loc_824258F8;
loc_8242576C:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// fmuls f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// beq cr6,0x824257a8
	if (ctx.cr6.eq) goto loc_824257A8;
	// lwz r10,164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lfs f0,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfsx f6,r30,r11
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fadds f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// lfsx f0,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
loc_824257A8:
	// fsubs f0,f12,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 - f26.f64));
	// fsubs f6,f11,f25
	ctx.f6.f64 = double(float(ctx.f11.f64 - f25.f64));
	// fsubs f5,f13,f27
	ctx.f5.f64 = double(float(ctx.f13.f64 - f27.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fmadds f0,f6,f29,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f6.f64, f29.f64, ctx.f0.f64)));
	// fmadds f0,f5,f31,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f5.f64, f31.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bgt cr6,0x824257d0
	if (ctx.cr6.gt) goto loc_824257D0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x824257f8
	goto loc_824257F8;
loc_824257D0:
	// fcmpu cr6,f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f24.f64);
	// blt cr6,0x824257e0
	if (ctx.cr6.lt) goto loc_824257E0;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x824257f8
	goto loc_824257F8;
loc_824257E0:
	// fadds f0,f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f23.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
loc_824257F8:
	// rlwinm r31,r10,30,0,1
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xC0000000;
	// rlwinm r29,r29,30,2,31
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// or r29,r31,r29
	r29.u64 = r31.u64 | r29.u64;
	// beq cr6,0x824258f8
	if (ctx.cr6.eq) goto loc_824258F8;
	// rlwinm r31,r10,4,0,27
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f6,r3,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// addi r27,r1,176
	r27.s64 = ctx.r1.s64 + 176;
	// addi r26,r1,180
	r26.s64 = ctx.r1.s64 + 180;
	// addi r25,r1,184
	r25.s64 = ctx.r1.s64 + 184;
	// clrlwi r10,r9,30
	ctx.r10.u64 = ctx.r9.u32 & 0x3;
	// lfsx f0,r31,r27
	temp.u32 = REX_LOAD_U32(r31.u32 + r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// lfsx f5,r31,r26
	temp.u32 = REX_LOAD_U32(r31.u32 + r26.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfsx f13,r31,r25
	temp.u32 = REX_LOAD_U32(r31.u32 + r25.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f13,f12,f6
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f12,f11,f6
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// beq cr6,0x82425874
	if (ctx.cr6.eq) goto loc_82425874;
	// lfsx f11,r11,r22
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f6,r11,r21
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f11,f0,f22,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, f22.f64, ctx.f11.f64)));
	// lfsx f5,r6,r11
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f6,f13,f22,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, f22.f64, ctx.f6.f64)));
	// fmadds f5,f12,f22,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f12.f64, f22.f64, ctx.f5.f64)));
	// stfsx f11,r11,r22
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + r22.u32, temp.u32);
	// stfsx f6,r11,r21
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + r21.u32, temp.u32);
	// stfsx f5,r6,r11
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
loc_82425874:
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// bge cr6,0x824258f8
	if (!ctx.cr6.lt) goto loc_824258F8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824258a8
	if (ctx.cr6.eq) goto loc_824258A8;
	// lfsx f11,r11,r20
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f6,r11,r19
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r19.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f11,f0,f21,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, f21.f64, ctx.f11.f64)));
	// lfsx f5,r5,r11
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f6,f13,f21,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, f21.f64, ctx.f6.f64)));
	// fmadds f5,f12,f21,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f12.f64, f21.f64, ctx.f5.f64)));
	// stfsx f11,r11,r20
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + r20.u32, temp.u32);
	// stfsx f6,r11,r19
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + r19.u32, temp.u32);
	// stfsx f5,r5,r11
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
loc_824258A8:
	// lfsx f11,r11,r24
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r24.u32);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// lfsx f6,r11,r23
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f11,f0,f20,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, f20.f64, ctx.f11.f64)));
	// lfsx f5,r11,r7
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f6,f13,f20,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, f20.f64, ctx.f6.f64)));
	// fmadds f5,f12,f20,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f12.f64, f20.f64, ctx.f5.f64)));
	// stfsx f11,r11,r24
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + r24.u32, temp.u32);
	// stfsx f6,r11,r23
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + r23.u32, temp.u32);
	// stfsx f5,r11,r7
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// beq cr6,0x824258f8
	if (ctx.cr6.eq) goto loc_824258F8;
	// lfsx f11,r11,r15
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f0,f19,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f19.f64, ctx.f11.f64)));
	// lfsx f6,r11,r14
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r14.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f11,r11,r4
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f13,f19,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f19.f64, ctx.f6.f64)));
	// fmadds f12,f12,f19,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f19.f64, ctx.f11.f64)));
	// stfsx f0,r11,r15
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r15.u32, temp.u32);
	// stfsx f13,r11,r14
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + r14.u32, temp.u32);
	// stfsx f12,r11,r4
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, temp.u32);
loc_824258F8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bdnz 0x8242574c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242574C;
	// rotlwi r11,r29,16
	ctx.r11.u64 = __builtin_rotateleft32(r29.u32, 16);
	// stw r11,4(r17)
	REX_STORE_U32(r17.u32 + 4, ctx.r11.u32);
loc_82425910:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f60
	ctx.lr = 0x82425920;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8245D2E0) {
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
	// lwz r11,592(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 592);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x8245d314
	goto loc_8245D314;
loc_8245D304:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// beq cr6,0x8245d31c
	if (ctx.cr6.eq) goto loc_8245D31C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8245D314:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8245d304
	if (!ctx.cr6.eq) goto loc_8245D304;
loc_8245D31C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245d330
	if (ctx.cr6.eq) goto loc_8245D330;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,388
	ctx.r3.s64 = r31.s64 + 388;
	// bl 0x8245cef8
	ctx.lr = 0x8245D330;
	sub_8245CEF8(ctx, base);
loc_8245D330:
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// b 0x8245d348
	goto loc_8245D348;
loc_8245D338:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// beq cr6,0x8245d350
	if (ctx.cr6.eq) goto loc_8245D350;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8245D348:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8245d338
	if (!ctx.cr6.eq) goto loc_8245D338;
loc_8245D350:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245d364
	if (ctx.cr6.eq) goto loc_8245D364;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x8245cef8
	ctx.lr = 0x8245D364;
	sub_8245CEF8(ctx, base);
loc_8245D364:
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

DEFINE_REX_FUNC(sub_8245E508) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x8245f278
	sub_8245F278(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8245E6C0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245E6F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// bl 0x82474378
	ctx.lr = 0x8245E6FC;
	sub_82474378(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245E710;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_8245F320) {
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
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245F34C;
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
	ctx.lr = 0x8245F364;
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

DEFINE_REX_FUNC(sub_8245FCE0) {
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
	// lwz r3,12(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245FD0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x8245fd24
	if (ctx.cr6.eq) goto loc_8245FD24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8245FD24;
	sub_82473600(ctx, base);
loc_8245FD24:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

DEFINE_REX_FUNC(sub_824604B8) {
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
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x824604e4
	if (!ctx.cr6.eq) goto loc_824604E4;
	// lwz r5,52(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r4,60(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8243a588
	ctx.lr = 0x824604E4;
	sub_8243A588(ctx, base);
loc_824604E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 76);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824d445c
	ctx.lr = 0x824604FC;
	__imp__KeSetEvent(ctx, base);
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

DEFINE_REX_FUNC(sub_82462940) {
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
	// li r3,824
	ctx.r3.s64 = 824;
	// bl 0x82460ed8
	ctx.lr = 0x82462958;
	sub_82460ED8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82462978
	if (!ctx.cr6.eq) goto loc_82462978;
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
loc_82462978:
	// li r5,824
	ctx.r5.s64 = 824;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x82462988;
	sub_822D5870(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// li r7,9
	ctx.r7.s64 = 9;
	// sth r10,110(r31)
	REX_STORE_U16(r31.u32 + 110, ctx.r10.u16);
	// li r6,511
	ctx.r6.s64 = 511;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// li r4,61
	ctx.r4.s64 = 61;
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// lfs f13,16644(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16644);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stfs f0,300(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 300, temp.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stfs f13,292(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 292, temp.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// sth r11,28(r31)
	REX_STORE_U16(r31.u32 + 28, ctx.r11.u16);
	// sth r11,30(r31)
	REX_STORE_U16(r31.u32 + 30, ctx.r11.u16);
	// sth r11,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r11.u16);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r7,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r7.u32);
	// stw r6,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r6.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// sth r11,34(r31)
	REX_STORE_U16(r31.u32 + 34, ctx.r11.u16);
	// stw r5,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r5.u32);
	// stw r4,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// sth r3,108(r31)
	REX_STORE_U16(r31.u32 + 108, ctx.r3.u16);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// stw r11,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r11.u32);
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// stw r11,656(r31)
	REX_STORE_U32(r31.u32 + 656, ctx.r11.u32);
	// stw r11,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r11.u32);
	// stb r11,200(r31)
	REX_STORE_U8(r31.u32 + 200, ctx.r11.u8);
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
	// sth r11,210(r31)
	REX_STORE_U16(r31.u32 + 210, ctx.r11.u16);
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
	// sth r11,202(r31)
	REX_STORE_U16(r31.u32 + 202, ctx.r11.u16);
	// stw r11,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r11.u32);
	// stw r10,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r10.u32);
	// stw r11,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r11.u32);
	// stw r11,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r11.u32);
	// stw r11,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r11.u32);
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r11.u32);
	// stw r11,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// stw r11,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r11.u32);
	// stw r11,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r11.u32);
	// stw r9,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r9.u32);
	// stfs f0,396(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 396, temp.u32);
	// stw r11,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r11.u32);
	// lis r8,-32185
	ctx.r8.s64 = -2109276160;
	// stw r11,784(r31)
	REX_STORE_U32(r31.u32 + 784, ctx.r11.u32);
	// lis r7,-32186
	ctx.r7.s64 = -2109341696;
	// stw r11,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r11.u32);
	// addi r6,r8,26080
	ctx.r6.s64 = ctx.r8.s64 + 26080;
	// stw r11,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r11.u32);
	// lis r5,-32185
	ctx.r5.s64 = -2109276160;
	// stw r11,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r11.u32);
	// addi r4,r7,9976
	ctx.r4.s64 = ctx.r7.s64 + 9976;
	// stw r11,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r11.u32);
	// lis r3,-32185
	ctx.r3.s64 = -2109276160;
	// stw r11,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r11.u32);
	// addi r9,r5,31152
	ctx.r9.s64 = ctx.r5.s64 + 31152;
	// stw r11,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r11.u32);
	// addi r8,r3,29960
	ctx.r8.s64 = ctx.r3.s64 + 29960;
	// stw r11,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r11.u32);
	// stw r11,320(r31)
	REX_STORE_U32(r31.u32 + 320, ctx.r11.u32);
	// stw r11,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r11.u32);
	// stw r11,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r11.u32);
	// stw r11,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r11.u32);
	// stw r11,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r11.u32);
	// stw r11,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r11.u32);
	// stw r11,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r11.u32);
	// stw r11,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r11.u32);
	// stw r11,352(r31)
	REX_STORE_U32(r31.u32 + 352, ctx.r11.u32);
	// stw r11,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r11.u32);
	// stw r11,360(r31)
	REX_STORE_U32(r31.u32 + 360, ctx.r11.u32);
	// stw r11,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r11.u32);
	// stw r11,368(r31)
	REX_STORE_U32(r31.u32 + 368, ctx.r11.u32);
	// stw r11,372(r31)
	REX_STORE_U32(r31.u32 + 372, ctx.r11.u32);
	// stw r11,376(r31)
	REX_STORE_U32(r31.u32 + 376, ctx.r11.u32);
	// stw r11,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r11.u32);
	// stw r11,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r11.u32);
	// stw r11,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r11.u32);
	// stw r11,400(r31)
	REX_STORE_U32(r31.u32 + 400, ctx.r11.u32);
	// stw r11,404(r31)
	REX_STORE_U32(r31.u32 + 404, ctx.r11.u32);
	// stw r10,408(r31)
	REX_STORE_U32(r31.u32 + 408, ctx.r10.u32);
	// stw r11,412(r31)
	REX_STORE_U32(r31.u32 + 412, ctx.r11.u32);
	// stw r11,416(r31)
	REX_STORE_U32(r31.u32 + 416, ctx.r11.u32);
	// stw r11,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r11.u32);
	// stw r11,424(r31)
	REX_STORE_U32(r31.u32 + 424, ctx.r11.u32);
	// stw r11,428(r31)
	REX_STORE_U32(r31.u32 + 428, ctx.r11.u32);
	// stw r11,432(r31)
	REX_STORE_U32(r31.u32 + 432, ctx.r11.u32);
	// stw r11,436(r31)
	REX_STORE_U32(r31.u32 + 436, ctx.r11.u32);
	// stw r11,440(r31)
	REX_STORE_U32(r31.u32 + 440, ctx.r11.u32);
	// stw r11,444(r31)
	REX_STORE_U32(r31.u32 + 444, ctx.r11.u32);
	// stw r11,448(r31)
	REX_STORE_U32(r31.u32 + 448, ctx.r11.u32);
	// stw r11,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r11.u32);
	// stw r11,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r11.u32);
	// stw r11,460(r31)
	REX_STORE_U32(r31.u32 + 460, ctx.r11.u32);
	// stw r11,464(r31)
	REX_STORE_U32(r31.u32 + 464, ctx.r11.u32);
	// stw r11,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r11.u32);
	// stw r11,472(r31)
	REX_STORE_U32(r31.u32 + 472, ctx.r11.u32);
	// stw r6,476(r31)
	REX_STORE_U32(r31.u32 + 476, ctx.r6.u32);
	// stw r11,480(r31)
	REX_STORE_U32(r31.u32 + 480, ctx.r11.u32);
	// stw r11,484(r31)
	REX_STORE_U32(r31.u32 + 484, ctx.r11.u32);
	// stw r4,488(r31)
	REX_STORE_U32(r31.u32 + 488, ctx.r4.u32);
	// stw r11,492(r31)
	REX_STORE_U32(r31.u32 + 492, ctx.r11.u32);
	// stw r9,496(r31)
	REX_STORE_U32(r31.u32 + 496, ctx.r9.u32);
	// stw r8,516(r31)
	REX_STORE_U32(r31.u32 + 516, ctx.r8.u32);
	// stw r11,520(r31)
	REX_STORE_U32(r31.u32 + 520, ctx.r11.u32);
	// stw r11,524(r31)
	REX_STORE_U32(r31.u32 + 524, ctx.r11.u32);
	// stw r11,540(r31)
	REX_STORE_U32(r31.u32 + 540, ctx.r11.u32);
	// stw r11,544(r31)
	REX_STORE_U32(r31.u32 + 544, ctx.r11.u32);
	// stw r11,548(r31)
	REX_STORE_U32(r31.u32 + 548, ctx.r11.u32);
	// stw r11,552(r31)
	REX_STORE_U32(r31.u32 + 552, ctx.r11.u32);
	// stw r11,556(r31)
	REX_STORE_U32(r31.u32 + 556, ctx.r11.u32);
	// stw r11,560(r31)
	REX_STORE_U32(r31.u32 + 560, ctx.r11.u32);
	// stw r11,564(r31)
	REX_STORE_U32(r31.u32 + 564, ctx.r11.u32);
	// stb r11,201(r31)
	REX_STORE_U8(r31.u32 + 201, ctx.r11.u8);
	// stw r11,568(r31)
	REX_STORE_U32(r31.u32 + 568, ctx.r11.u32);
	// stw r11,572(r31)
	REX_STORE_U32(r31.u32 + 572, ctx.r11.u32);
	// stw r11,576(r31)
	REX_STORE_U32(r31.u32 + 576, ctx.r11.u32);
	// sth r11,580(r31)
	REX_STORE_U16(r31.u32 + 580, ctx.r11.u16);
	// stw r11,584(r31)
	REX_STORE_U32(r31.u32 + 584, ctx.r11.u32);
	// stw r11,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r11.u32);
	// stw r11,600(r31)
	REX_STORE_U32(r31.u32 + 600, ctx.r11.u32);
	// stw r11,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r11.u32);
	// stw r11,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,608(r31)
	REX_STORE_U32(r31.u32 + 608, ctx.r11.u32);
	// stw r11,624(r31)
	REX_STORE_U32(r31.u32 + 624, ctx.r11.u32);
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824717D8) {
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
	// bl 0x822d4e80
	ctx.lr = 0x824717E0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82471a18
	if (ctx.cr6.eq) goto loc_82471A18;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82471a18
	if (ctx.cr6.eq) goto loc_82471A18;
	// rlwinm r31,r4,30,2,31
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82471a10
	if (ctx.cr6.eq) goto loc_82471A10;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// clrlwi r27,r7,16
	r27.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r6,r3,-4
	ctx.r6.s64 = ctx.r3.s64 + -4;
	// li r28,1
	r28.s64 = 1;
	// lfd f0,-6048(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -6048);
	// li r29,128
	r29.s64 = 128;
	// addi r30,r11,-1840
	r30.s64 = ctx.r11.s64 + -1840;
loc_82471820:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// blt cr6,0x82471830
	if (ctx.cr6.lt) goto loc_82471830;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82471830:
	// stb r28,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, r28.u8);
	// addic. r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sthu r29,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U16(ea, r29.u16);
	ctx.r5.u32 = ea;
	// lfs f13,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f11.u64);
	// lwz r9,-60(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// beq 0x82471884
	if (ctx.cr0.eq) goto loc_82471884;
	// lfs f13,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f11.u64);
	// lwz r3,-60(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// b 0x82471888
	goto loc_82471888;
loc_82471884:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82471888:
	// sth r3,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// beq cr6,0x82471a08
	if (ctx.cr6.eq) goto loc_82471A08;
loc_8247189C:
	// lfs f13,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f11.u64);
	// lwz r9,-60(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r4,r8,r10
	ctx.r4.u64 = uint32_t((ctx.r10.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r8.s32 / ctx.r10.s32 : 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x824718ec
	if (!ctx.cr6.gt) goto loc_824718EC;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x824718f8
	goto loc_824718F8;
loc_824718EC:
	// cmpwi cr6,r4,-8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -8, ctx.xer);
	// bge cr6,0x824718f8
	if (!ctx.cr6.lt) goto loc_824718F8;
	// li r4,-8
	ctx.r4.s64 = -8;
loc_824718F8:
	// mullw r9,r4,r10
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x82471910
	if (!ctx.cr6.gt) goto loc_82471910;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x8247191c
	goto loc_8247191C;
loc_82471910:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x8247191c
	if (!ctx.cr6.lt) goto loc_8247191C;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_8247191C:
	// rlwinm r9,r4,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// lwzx r8,r9,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bge cr6,0x82471938
	if (!ctx.cr6.lt) goto loc_82471938;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82471938:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824719ec
	if (ctx.cr6.eq) goto loc_824719EC;
	// lfsu f13,4(r6)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r6.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r6.u32 = ea;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f12.u64);
	// lwz r8,-60(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// andc r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x82471994
	if (!ctx.cr6.gt) goto loc_82471994;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x824719a0
	goto loc_824719A0;
loc_82471994:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x824719a0
	if (!ctx.cr6.lt) goto loc_824719A0;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_824719A0:
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi cr6,r8,32767
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32767, ctx.xer);
	// ble cr6,0x824719b8
	if (!ctx.cr6.gt) goto loc_824719B8;
	// li r8,32767
	ctx.r8.s64 = 32767;
	// b 0x824719c4
	goto loc_824719C4;
loc_824719B8:
	// cmpwi cr6,r8,-32768
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -32768, ctx.xer);
	// bge cr6,0x824719c4
	if (!ctx.cr6.lt) goto loc_824719C4;
	// li r8,-32768
	ctx.r8.s64 = -32768;
loc_824719C4:
	// rlwinm r9,r11,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r9,r9,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bge cr6,0x824719e0
	if (!ctx.cr6.lt) goto loc_824719E0;
	// li r10,16
	ctx.r10.s64 = 16;
loc_824719E0:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x824719f0
	goto loc_824719F0;
loc_824719EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824719F0:
	// rlwimi r11,r4,4,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bne cr6,0x8247189c
	if (!ctx.cr6.eq) goto loc_8247189C;
loc_82471A08:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82471820
	if (!ctx.cr6.eq) goto loc_82471820;
loc_82471A10:
	// subf r3,r26,r5
	ctx.r3.u64 = ctx.r5.u64 - r26.u64;
	// b 0x822d4ed0
	return;
loc_82471A18:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8247A5F8) {
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
	// bl 0x822d4e80
	ctx.lr = 0x8247A600;
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
	// blt cr6,0x8247a640
	if (ctx.cr6.lt) goto loc_8247A640;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// add r28,r11,r5
	r28.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x8247a644
	goto loc_8247A644;
loc_8247A640:
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
loc_8247A644:
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
	// bl 0x822d4fa0
	ctx.lr = 0x8247A660;
	sub_822D4FA0(ctx, base);
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
	// ble 0x8247a6b0
	if (!ctx.cr0.gt) goto loc_8247A6B0;
loc_8247A67C:
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
	// blt cr6,0x8247a67c
	if (ctx.cr6.lt) goto loc_8247A67C;
loc_8247A6B0:
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
	// blt cr6,0x8247a73c
	if (ctx.cr6.lt) goto loc_8247A73C;
	// addi r7,r8,-3
	ctx.r7.s64 = ctx.r8.s64 + -3;
loc_8247A6E8:
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
	// blt cr6,0x8247a6e8
	if (ctx.cr6.lt) goto loc_8247A6E8;
loc_8247A73C:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8247a768
	if (!ctx.cr6.lt) goto loc_8247A768;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8247A750:
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
	// bdnz 0x8247a750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247A750;
loc_8247A768:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8247a78c
	if (ctx.cr6.lt) goto loc_8247A78C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x822d4fa0
	ctx.lr = 0x8247A784;
	sub_822D4FA0(ctx, base);
	// stw r28,16(r31)
	REX_STORE_U32(r31.u32 + 16, r28.u32);
	// b 0x8247a7cc
	goto loc_8247A7CC;
loc_8247A78C:
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// add r4,r3,r6
	ctx.r4.u64 = ctx.r3.u64 + ctx.r6.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d6840
	ctx.lr = 0x8247A79C;
	sub_822D6840(ctx, base);
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
	// bl 0x822d4fa0
	ctx.lr = 0x8247A7BC;
	sub_822D4FA0(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r11,r30,r28
	ctx.r11.u64 = r28.u64 - r30.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r7.u32);
loc_8247A7CC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8247a7dc
	if (ctx.cr6.eq) goto loc_8247A7DC;
	// stw r30,0(r26)
	REX_STORE_U32(r26.u32 + 0, r30.u32);
loc_8247A7DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8248A558) {
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
	// bl 0x822d4e7c
	ctx.lr = 0x8248A560;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v62,r4,r5
	temp.u32 = ctx.r4.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r7,r4,r5
	ctx.r7.u64 = ctx.r4.u64 + ctx.r5.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r5
	ctx.r3.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvrx128 v60,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 + ctx.r5.u64;
	// vor128 v12,v63,v60
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// lvrx128 v55,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r31,r10,r9
	r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// vor128 v10,v62,v55
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvlx128 v59,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvlx128 v58,r3,r4
	temp.u32 = ctx.r3.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvlx128 v56,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lvlx128 v61,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v57,r31,r4
	temp.u32 = r31.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r31,r31,r4
	r31.u64 = r31.u64 + ctx.r4.u64;
	// lvx128 v13,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r8,r4
	ctx.r10.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvrx128 v54,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r29,32
	r29.s64 = 32;
	// lvrx128 v53,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vaddshs v6,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// lvrx128 v52,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v56,v54
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvrx128 v51,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v8,v59,v53
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvx128 v30,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v7,v61,v52
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v5,v58,v51
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// li r28,48
	r28.s64 = 48;
	// vaddshs v25,v30,v4
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// li r27,64
	r27.s64 = 64;
	// li r26,80
	r26.s64 = 80;
	// lvrx128 v50,r11,r31
	temp.u32 = ctx.r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v48,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vpkshus128 v49,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// lvlx128 v47,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v2,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v28,r30,r29
	ea = (r30.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v1,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v7
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v3,v57,v50
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// vmrghb v29,v0,v5
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r25,96
	r25.s64 = 96;
	// li r29,112
	r29.s64 = 112;
	// vor128 v15,v47,v48
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vpkshus128 v46,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// li r11,4
	ctx.r11.s64 = 4;
	// lvx128 v26,r30,r28
	ea = (r30.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v27,v0,v3
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v24,r30,r27
	ea = (r30.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v23,v28,v2
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// lvx128 v20,r30,r26
	ea = (r30.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v22,v26,v1
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v21,v24,v31
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vmrghb v14,v0,v15
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v18,v20,v29
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// lvx128 v19,r30,r25
	ea = (r30.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v16,r30,r29
	ea = (r30.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v17,v19,v27
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// stvewx128 v49,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v45,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// stvewx128 v49,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v44,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// stvewx128 v46,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v43,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vaddshs v0,v16,v14
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vpkshus128 v42,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// stvewx128 v46,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v45,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v41,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// stvewx128 v45,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v40,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvewx128 v44,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v44,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r0,r31
	ea = (r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_824A9AD8) {
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
	// bl 0x822d4e88
	ctx.lr = 0x824A9AE0;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vsrah v11,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v53,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lvx128 v58,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r9,r4
	ctx.r5.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v54,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r7,r4
	r31.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvx128 v56,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v63,v58,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v60,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,48
	ctx.r3.s64 = 48;
	// lvsl v6,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r29,96
	r29.s64 = 96;
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r28,144
	r28.s64 = 144;
	// vperm128 v9,v62,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v55,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v60,v56,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v59,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v2,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v51,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v50,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,192
	ctx.r6.s64 = 192;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v31,v0,v8
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v1,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r5,240
	ctx.r5.s64 = 240;
	// lvsl v5,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v7,v59,v55,v1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// lvsl v4,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v61,v54,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v49,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v5,v53,v51,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v48,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v52,v50,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvsl v3,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v1,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r4,288
	ctx.r4.s64 = 288;
	// vperm128 v3,v49,v48,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// li r11,336
	ctx.r11.s64 = 336;
	// vmrglb v30,v0,v7
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v29,v0,v6
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v28,v0,v5
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v27,v0,v4
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v26,v0,v3
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v0,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v3,v10,v2,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), 14));
	// vsldoi v2,v9,v1,2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), 14));
	// vsldoi v1,v8,v31,2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v31.u8), 14));
	// vsldoi v31,v7,v30,2
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)v30.u8), 14));
	// vsldoi v30,v6,v29,2
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)v29.u8), 14));
	// vslh v25,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v29,v5,v28,2
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v28.u8), 14));
	// vslh v24,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v28,v4,v27,2
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)v27.u8), 14));
	// vslh v23,v1,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v27,v0,v26,2
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)v26.u8), 14));
	// vslh v22,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v28,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v17,v25,v3
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v16,v24,v2
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v15,v23,v1
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v14,v22,v31
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v12,v21,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v3,v20,v29
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddshs v2,v19,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v1,v18,v27
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vaddshs v31,v17,v10
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v30,v16,v9
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v29,v15,v8
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v28,v14,v7
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v27,v12,v6
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v24,v1,v0
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v26,v3,v5
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v25,v2,v4
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v23,v31,v11
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v22,v30,v11
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v21,v29,v11
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v20,v28,v11
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v18,v26,v11
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v17,v25,v11
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v16,v24,v11
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v19,v27,v11
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v15,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v14,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v0,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v12,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v11,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v15,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v10,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v14,r30,r3
	ea = (r30.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v9,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v0,r30,r29
	ea = (r30.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v8,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v12,r30,r28
	ea = (r30.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r30,r6
	ea = (r30.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r30,r5
	ea = (r30.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r30,r4
	ea = (r30.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v8,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_824B2308) {
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
	// b 0x824b0858
	sub_824B0858(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824B2B58) {
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
	// bl 0x822d4e80
	ctx.lr = 0x824B2B60;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v13,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvlx128 v62,r3,r5
	temp.u32 = ctx.r3.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r4,r8,r3
	ctx.r4.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lvlx128 v61,r8,r3
	temp.u32 = ctx.r8.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r7,r3
	r31.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lvrx128 v60,r10,r3
	temp.u32 = ctx.r10.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r30,r9,r3
	r30.u64 = ctx.r9.u64 + ctx.r3.u64;
	// vor128 v12,v63,v60
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// lvrx128 v56,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lvrx128 v59,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// vor128 v11,v62,v59
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// add r11,r6,r3
	ctx.r11.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lvrx128 v54,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r31,r4,r3
	r31.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lvrx128 v53,r10,r30
	temp.u32 = ctx.r10.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v6,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r30,48
	r30.s64 = 48;
	// lvlx128 v58,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v4,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v57,r7,r3
	temp.u32 = ctx.r7.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v52,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r28,64
	r28.s64 = 64;
	// lvrx128 v51,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r31,r7,r9
	r31.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lvlx128 v55,r6,r3
	temp.u32 = ctx.r6.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddshs v24,v6,v13
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// lvlx128 v50,r4,r3
	temp.u32 = ctx.r4.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r11,32
	ctx.r11.s64 = 32;
	// lvx128 v1,r29,r10
	ea = (r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v10,v61,v56
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vor128 v9,v57,v54
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvx128 v28,r29,r30
	ea = (r29.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v8,v58,v53
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// li r27,80
	r27.s64 = 80;
	// vor128 v7,v55,v52
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// li r26,96
	r26.s64 = 96;
	// vor128 v5,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// add r30,r31,r3
	r30.u64 = r31.u64 + ctx.r3.u64;
	// vaddshs v23,v4,v1
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// lvx128 v27,r29,r28
	ea = (r29.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v47,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// li r28,112
	r28.s64 = 112;
	// vmrghb v3,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v30,r29,r11
	ea = (r29.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// vmrghb v31,v0,v8
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v26,r29,r27
	ea = (r29.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v29,v0,v7
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v22,r29,r26
	ea = (r29.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v25,v0,v5
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v49,r31,r3
	temp.u32 = r31.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vpkshus128 v46,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// lvrx128 v48,r10,r30
	temp.u32 = ctx.r10.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vaddshs v21,v3,v30
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// lvx128 v16,r29,r28
	ea = (r29.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v20,v2,v28
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// stvewx128 v47,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v19,v31,v27
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// stvewx128 v47,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v18,v29,v26
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vaddshs v17,v25,v22
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vpkshus128 v45,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vor128 v15,v49,v48
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vpkshus128 v44,v20,v20
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// stvewx128 v46,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v43,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vpkshus128 v42,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// stvewx128 v46,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v41,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vmrghb v14,v0,v15
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v0,v14,v16
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvewx128 v45,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v45,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v44,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v44,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v40,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvewx128 v43,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_824B9CB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// srawi r8,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 16;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r5,r31,16
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = r31.s32 >> 16;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// add r31,r9,r8
	r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r7,-59
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -59, ctx.xer);
	// bge cr6,0x824b9cf8
	if (!ctx.cr6.lt) goto loc_824B9CF8;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r11,-56
	ctx.r10.s64 = ctx.r11.s64 + -56;
	// b 0x824b9d10
	goto loc_824B9D10;
loc_824B9CF8:
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x824b9d14
	if (!ctx.cr6.gt) goto loc_824B9D14;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
loc_824B9D10:
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_824B9D14:
	// cmpwi cr6,r31,-59
	ctx.cr6.compare<int32_t>(r31.s32, -59, ctx.xer);
	// bge cr6,0x824b9d50
	if (!ctx.cr6.lt) goto loc_824B9D50;
	// rlwinm r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// beq cr6,0x824b9d40
	if (ctx.cr6.eq) goto loc_824B9D40;
	// addi r10,r11,-60
	ctx.r10.s64 = ctx.r11.s64 + -60;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_824B9D40:
	// addi r10,r11,-56
	ctx.r10.s64 = ctx.r11.s64 + -56;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_824B9D50:
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x824b9d7c
	if (!ctx.cr6.gt) goto loc_824B9D7C;
	// rlwinm r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x824b9d78
	if (!ctx.cr6.eq) goto loc_824B9D78;
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
loc_824B9D78:
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_824B9D7C:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D1560) {
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
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r31,1
	r31.s64 = 1;
	// addi r30,r11,-27144
	r30.s64 = ctx.r11.s64 + -27144;
loc_824D1580:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d7748
	ctx.lr = 0x824D1588;
	sub_823D7748(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,9504
	r30.s64 = r30.s64 + 9504;
	// bge 0x824d1580
	if (!ctx.cr0.lt) goto loc_824D1580;
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

DEFINE_REX_FUNC(sub_824D1700) {
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
	// lis r31,-32170
	r31.s64 = -2108293120;
	// addi r11,r31,8000
	ctx.r11.s64 = r31.s64 + 8000;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D1720;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21572
	ctx.r11.s64 = ctx.r11.s64 + 21572;
	// stw r11,8000(r31)
	REX_STORE_U32(r31.u32 + 8000, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1940) {
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
	// lis r31,-32170
	r31.s64 = -2108293120;
	// addi r11,r31,8360
	ctx.r11.s64 = r31.s64 + 8360;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D1960;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21644
	ctx.r11.s64 = ctx.r11.s64 + 21644;
	// stw r11,8360(r31)
	REX_STORE_U32(r31.u32 + 8360, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1B80) {
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
	// lis r31,-32170
	r31.s64 = -2108293120;
	// addi r11,r31,8724
	ctx.r11.s64 = r31.s64 + 8724;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D1BA0;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21716
	ctx.r11.s64 = ctx.r11.s64 + 21716;
	// stw r11,8724(r31)
	REX_STORE_U32(r31.u32 + 8724, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1DA0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r9,r11,-27032
	ctx.r9.s64 = ctx.r11.s64 + -27032;
	// addi r11,r10,-23168
	ctx.r11.s64 = ctx.r10.s64 + -23168;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D1F58) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r9,r11,-26800
	ctx.r9.s64 = ctx.r11.s64 + -26800;
	// addi r11,r10,-22596
	ctx.r11.s64 = ctx.r10.s64 + -22596;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lwz r10,12(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D2118) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r10,r10,-20888
	ctx.r10.s64 = ctx.r10.s64 + -20888;
	// lwz r11,-28516(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -28516);
	// stw r11,172(r10)
	REX_STORE_U32(ctx.r10.u32 + 172, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D2820) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,24328
	ctx.r11.s64 = ctx.r11.s64 + 24328;
	// addi r9,r9,-13284
	ctx.r9.s64 = ctx.r9.s64 + -13284;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824D2840:
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// sth r10,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// sth r10,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r10.u16);
	// sth r10,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// stwu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824d2840
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D2840;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D2B20) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r31,1
	r31.s64 = 1;
	// addi r11,r11,-32448
	ctx.r11.s64 = ctx.r11.s64 + -32448;
	// addi r30,r11,356
	r30.s64 = ctx.r11.s64 + 356;
loc_824D2B44:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822a3ba8
	ctx.lr = 0x824D2B4C;
	sub_822A3BA8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bge 0x824d2b44
	if (!ctx.cr0.lt) goto loc_824D2B44;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,14720
	ctx.r3.s64 = ctx.r11.s64 + 14720;
	// bl 0x822d5848
	ctx.lr = 0x824D2B64;
	sub_822D5848(ctx, base);
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

DEFINE_REX_FUNC(sub_824D32A8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,16008
	ctx.r3.s64 = ctx.r11.s64 + 16008;
	// b 0x822d5848
	sub_822D5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3320) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// addi r4,r11,7284
	ctx.r4.s64 = ctx.r11.s64 + 7284;
	// addi r3,r10,7328
	ctx.r3.s64 = ctx.r10.s64 + 7328;
	// b 0x82412fc0
	sub_82412FC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3728) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// addi r10,r10,-28232
	ctx.r10.s64 = ctx.r10.s64 + -28232;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r10,800
	ctx.r10.s64 = ctx.r10.s64 + 800;
	// addi r11,r11,17460
	ctx.r11.s64 = ctx.r11.s64 + 17460;
loc_824D3744:
	// stwu r11,-160(r10)
	ea = -160 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x824d3744
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D3744;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D39E0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// addi r11,r11,-4468
	ctx.r11.s64 = ctx.r11.s64 + -4468;
	// stw r11,772(r10)
	REX_STORE_U32(ctx.r10.u32 + 772, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D3A70) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D3A88) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,25308
	ctx.r3.s64 = ctx.r11.s64 + 25308;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3AD8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,25356
	ctx.r3.s64 = ctx.r11.s64 + 25356;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3B38) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,25756
	ctx.r3.s64 = ctx.r11.s64 + 25756;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3BF8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,26228
	ctx.r3.s64 = ctx.r11.s64 + 26228;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3D40) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,29688
	ctx.r3.s64 = ctx.r11.s64 + 29688;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3E90) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D3F60) {
	REX_FUNC_PROLOGUE();
	// .long 0x20002bc
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D40B0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000192
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4220) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100cf
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D43A0) {
	REX_FUNC_PROLOGUE();
	// .long 0x201012b
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4520) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010083
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D46A0) {
	REX_FUNC_PROLOGUE();
	// .long 0x201007d
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4820) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000006
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D49A0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010351
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4B20) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100f5
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

