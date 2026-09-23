#include "soulcalibur2_funcs.8.h"

DEFINE_REX_FUNC(sub_820E01B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E77B0) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e58
	ctx.lr = 0x820E77B8;
	// stfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -152, f30.u64);
	// stfd f31,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 12);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820e7aa4
	if (ctx.cr0.eq) goto loc_820E7AA4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820e7aa4
	if (ctx.cr6.eq) goto loc_820E7AA4;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r30,r11,-32032
	r30.s64 = ctx.r11.s64 + -32032;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r11,-32032(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32032);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r25,16(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82208750
	ctx.lr = 0x820E780C;
	sub_82208750(ctx, base);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820e7548
	ctx.lr = 0x820E7820;
	sub_820E7548(ctx, base);
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x822c80d0
	ctx.lr = 0x820E7828;
	sub_822C80D0(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820e7840
	if (ctx.cr0.eq) goto loc_820E7840;
	// bl 0x822a2f80
	ctx.lr = 0x820E7838;
	sub_822A2F80(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x820e7844
	goto loc_820E7844;
loc_820E7840:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_820E7844:
	// lwz r27,160(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,17
	ctx.r6.s64 = 17;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822a3958
	ctx.lr = 0x820E786C;
	sub_822A3958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f1f90
	ctx.lr = 0x820E7874;
	sub_821F1F90(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822a3120
	ctx.lr = 0x820E7888;
	sub_822A3120(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f30,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x822a1038
	ctx.lr = 0x820E78B0;
	sub_822A1038(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822a26b8
	ctx.lr = 0x820E78BC;
	sub_822A26B8(ctx, base);
	// stfs f31,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f30,212(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stw r31,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r31.u32);
	// stw r31,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, r31.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r26,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, r26.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r27,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, r27.u32);
	// bl 0x82212de0
	ctx.lr = 0x820E78E0;
	sub_82212DE0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r31,r28,4
	r31.s64 = r28.s64 + 4;
	// bl 0x82288a80
	ctx.lr = 0x820E78F0;
	sub_82288A80(ctx, base);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// vupkd3d128 v60,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v60 = vTemp;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvsr v0,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// vpermwi128 v63,v60,234
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x15));
	// li r5,12
	ctx.r5.s64 = 12;
	// vpermwi128 v62,v60,186
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x45));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// vpermwi128 v61,v60,174
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x51));
	// li r3,16
	ctx.r3.s64 = 16;
	// vpermwi128 v60,v60,171
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x54));
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r23,20
	r23.s64 = 20;
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r22,r1,96
	r22.s64 = ctx.r1.s64 + 96;
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r21,24
	r21.s64 = 24;
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r20,r1,96
	r20.s64 = ctx.r1.s64 + 96;
	// li r19,28
	r19.s64 = 28;
	// addi r18,r1,96
	r18.s64 = ctx.r1.s64 + 96;
	// li r17,32
	r17.s64 = 32;
	// stvewx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r16,r1,96
	r16.s64 = ctx.r1.s64 + 96;
	// stvewx128 v63,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stvewx128 v63,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r11,36
	ctx.r11.s64 = 36;
	// stvewx128 v63,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r9,40
	ctx.r9.s64 = 40;
	// stvewx128 v62,r4,r3
	ea = (ctx.r4.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r25,r23
	ea = (r25.u32 + r23.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r7,44
	ctx.r7.s64 = 44;
	// stvewx128 v62,r22,r21
	ea = (r22.u32 + r21.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r20,r19
	ea = (r20.u32 + r19.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stvewx128 v61,r18,r17
	ea = (r18.u32 + r17.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// li r5,48
	ctx.r5.s64 = 48;
	// stvewx128 v61,r16,r11
	ea = (r16.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stvewx128 v61,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// li r11,52
	ctx.r11.s64 = 52;
	// stvewx128 v61,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,56
	ctx.r9.s64 = 56;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stvewx128 v60,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// li r7,60
	ctx.r7.s64 = 60;
	// stvewx128 v60,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stvewx128 v60,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x82288d68
	ctx.lr = 0x820E79E8;
	sub_82288D68(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x82288d40
	ctx.lr = 0x820E79F4;
	sub_82288D40(ctx, base);
	// std r27,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r27.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r26,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r26.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfs f31,176(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stfs f31,180(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lwz r4,8(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x82288de0
	ctx.lr = 0x820E7A38;
	sub_82288DE0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x82288f58
	ctx.lr = 0x820E7A44;
	sub_82288F58(ctx, base);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x822849f0
	ctx.lr = 0x820E7A5C;
	sub_822849F0(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x82288aa8
	ctx.lr = 0x820E7A64;
	sub_82288AA8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82288b10
	ctx.lr = 0x820E7A78;
	sub_82288B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822a33c8
	ctx.lr = 0x820E7A80;
	sub_822A33C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f1f98
	ctx.lr = 0x820E7A88;
	sub_821F1F98(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r3,31464(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// bl 0x8229f998
	ctx.lr = 0x820E7A94;
	sub_8229F998(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822a1cf0
	ctx.lr = 0x820E7A9C;
	sub_822A1CF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x820e7aa8
	goto loc_820E7AA8;
loc_820E7AA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820E7AA8:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_820FCA90) {
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
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820fcb28
	if (ctx.cr6.lt) goto loc_820FCB28;
	// beq cr6,0x820fcaf4
	if (ctx.cr6.eq) goto loc_820FCAF4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x820fcb7c
	if (!ctx.cr6.lt) goto loc_820FCB7C;
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r5,4160
	ctx.r5.s64 = 4160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FCAD4;
	sub_820F8D58(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x820f8db8
	ctx.lr = 0x820FCAE4;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fcb7c
	if (!ctx.cr0.eq) goto loc_820FCB7C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820fcb78
	goto loc_820FCB78;
loc_820FCAF4:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FCB08;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,4160
	ctx.r5.s64 = 4160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x820fcb5c
	if (ctx.cr0.eq) goto loc_820FCB5C;
	// bl 0x820f8d58
	ctx.lr = 0x820FCB20;
	sub_820F8D58(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x820fcb78
	goto loc_820FCB78;
loc_820FCB28:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FCB3C;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fcb64
	if (!ctx.cr0.eq) goto loc_820FCB64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,586(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 586);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820fcb64
	if (ctx.cr0.eq) goto loc_820FCB64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_820FCB5C:
	// bl 0x820f8d58
	ctx.lr = 0x820FCB60;
	sub_820F8D58(ctx, base);
	// b 0x820fcb7c
	goto loc_820FCB7C;
loc_820FCB64:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FCB74;
	sub_820F8D58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FCB78:
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_820FCB7C:
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

DEFINE_REX_FUNC(sub_820FFBC8) {
	REX_FUNC_PROLOGUE();
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FFCF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32173
	r30.s64 = -2108489728;
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,504(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 504);
	// lfs f0,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,1332
	ctx.r10.s64 = ctx.r11.s64 + 1332;
	// lfs f11,28(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1344(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 1344, temp.u32);
	// stfs f12,1332(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 1332, temp.u32);
	// stfs f13,1336(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 1336, temp.u32);
	// stfs f0,1340(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 1340, temp.u32);
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820ffd5c
	if (!ctx.cr0.eq) goto loc_820FFD5C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820ffd88
	goto loc_820FFD88;
loc_820FFD5C:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820ffd94
	if (!ctx.cr6.lt) goto loc_820FFD94;
	// lfs f13,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820ffd94
	if (!ctx.cr6.lt) goto loc_820FFD94;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
loc_820FFD88:
	// lwz r11,504(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 504);
	// stw r10,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// b 0x820ffe7c
	goto loc_820FFE7C;
loc_820FFD94:
	// lwz r11,504(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 504);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r8.u32);
	// lfs f1,300(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 300);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// bne cr6,0x820ffe44
	if (!ctx.cr6.eq) goto loc_820FFE44;
	// lfs f13,304(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// bne cr6,0x820ffe44
	if (!ctx.cr6.eq) goto loc_820FFE44;
	// lfs f13,308(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 308);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x820ffe44
	if (!ctx.cr6.eq) goto loc_820FFE44;
	// lfs f0,312(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x820ffe44
	if (!ctx.cr6.eq) goto loc_820FFE44;
	// lfs f0,316(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x820ffe44
	if (!ctx.cr6.eq) goto loc_820FFE44;
	// lfs f0,320(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x820ffe44
	if (!ctx.cr6.eq) goto loc_820FFE44;
	// lfs f0,324(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x820ffe44
	if (!ctx.cr6.eq) goto loc_820FFE44;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r3,504(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 504);
	// lfs f4,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820ff398
	ctx.lr = 0x820FFE20;
	sub_820FF398(ctx, base);
	// lwz r11,504(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 504);
	// addi r10,r11,1332
	ctx.r10.s64 = ctx.r11.s64 + 1332;
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1344(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 1344, temp.u32);
	// b 0x820ffe70
	goto loc_820FFE70;
loc_820FFE44:
	// lwz r3,504(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 504);
	// lfs f4,312(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 312);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,304(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 304);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,308(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 308);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820ff398
	ctx.lr = 0x820FFE58;
	sub_820FF398(ctx, base);
	// lwz r11,504(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 504);
	// lfs f0,324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,320(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,316(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 316);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,1332
	ctx.r10.s64 = ctx.r11.s64 + 1332;
	// stfs f31,1344(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 1344, temp.u32);
loc_820FFE70:
	// stfs f0,1340(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 1340, temp.u32);
	// stfs f13,1336(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 1336, temp.u32);
	// stfs f12,1332(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 1332, temp.u32);
loc_820FFE7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210E638) {
	REX_FUNC_PROLOGUE();
	// lbz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 120);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r9,r11,45
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(45));
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r10,r11,-19896
	ctx.r10.s64 = ctx.r11.s64 + -19896;
loc_8210E64C:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x8210e660
	if (!ctx.cr0.lt) goto loc_8210E660;
	// lbz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 124);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
loc_8210E660:
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8210e64c
	if (ctx.cr6.eq) goto loc_8210E64C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210FB10) {
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
	// lwz r31,-32480(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821afce8
	ctx.lr = 0x8210FB2C;
	sub_821AFCE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8210fbcc
	if (!ctx.cr0.eq) goto loc_8210FBCC;
	// lhz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 208);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8210fb84
	if (ctx.cr0.eq) goto loc_8210FB84;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// stw r9,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r9.u32);
	// blt cr6,0x8210fb84
	if (ctx.cr6.lt) goto loc_8210FB84;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8210fb78
	if (ctx.cr6.eq) goto loc_8210FB78;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8210fb80
	if (!ctx.cr6.eq) goto loc_8210FB80;
	// lbz r11,122(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 122);
	// sth r10,208(r31)
	REX_STORE_U16(r31.u32 + 208, ctx.r10.u16);
	// b 0x8210fb7c
	goto loc_8210FB7C;
loc_8210FB78:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8210FB7C:
	// stb r11,121(r31)
	REX_STORE_U8(r31.u32 + 121, ctx.r11.u8);
loc_8210FB80:
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
loc_8210FB84:
	// lbz r11,121(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 121);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8210fbc4
	if (ctx.cr6.lt) goto loc_8210FBC4;
	// beq cr6,0x8210fbb8
	if (ctx.cr6.eq) goto loc_8210FBB8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8210fbac
	if (ctx.cr6.lt) goto loc_8210FBAC;
	// bne cr6,0x8210fbcc
	if (!ctx.cr6.eq) goto loc_8210FBCC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8210f7f0
	ctx.lr = 0x8210FBA8;
	sub_8210F7F0(ctx, base);
	// b 0x8210fbcc
	goto loc_8210FBCC;
loc_8210FBAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8210eaa8
	ctx.lr = 0x8210FBB4;
	sub_8210EAA8(ctx, base);
	// b 0x8210fbcc
	goto loc_8210FBCC;
loc_8210FBB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8210f4e0
	ctx.lr = 0x8210FBC0;
	sub_8210F4E0(ctx, base);
	// b 0x8210fbcc
	goto loc_8210FBCC;
loc_8210FBC4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8210e980
	ctx.lr = 0x8210FBCC;
	sub_8210E980(ctx, base);
loc_8210FBCC:
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

DEFINE_REX_FUNC(sub_821121B8) {
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
	// lwz r31,-32480(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821afce8
	ctx.lr = 0x821121D4;
	sub_821AFCE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82112224
	if (!ctx.cr0.eq) goto loc_82112224;
	// lhz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 124);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8211221c
	if (ctx.cr6.lt) goto loc_8211221C;
	// beq cr6,0x82112210
	if (ctx.cr6.eq) goto loc_82112210;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82112204
	if (ctx.cr6.lt) goto loc_82112204;
	// bne cr6,0x82112224
	if (!ctx.cr6.eq) goto loc_82112224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82111c90
	ctx.lr = 0x82112200;
	sub_82111C90(ctx, base);
	// b 0x82112224
	goto loc_82112224;
loc_82112204:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82111850
	ctx.lr = 0x8211220C;
	sub_82111850(ctx, base);
	// b 0x82112224
	goto loc_82112224;
loc_82112210:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82111518
	ctx.lr = 0x82112218;
	sub_82111518(ctx, base);
	// b 0x82112224
	goto loc_82112224;
loc_8211221C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82110d78
	ctx.lr = 0x82112224;
	sub_82110D78(ctx, base);
loc_82112224:
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

DEFINE_REX_FUNC(sub_82113B10) {
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
	// lwz r4,80(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,61(r3)
	REX_STORE_U8(ctx.r3.u32 + 61, ctx.r11.u8);
	// bl 0x82112e88
	ctx.lr = 0x82113B34;
	sub_82112E88(ctx, base);
	// stw r3,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_82114BA0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mulli r10,r3,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(12));
	// addi r11,r11,23968
	ctx.r11.s64 = ctx.r11.s64 + 23968;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82115738) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,84(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82115774
	if (ctx.cr6.eq) goto loc_82115774;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// b 0x821157f0
	goto loc_821157F0;
loc_82115774:
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r10,r10,-32480
	ctx.r10.s64 = ctx.r10.s64 + -32480;
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lhz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821157d8
	if (!ctx.cr0.eq) goto loc_821157D8;
	// lhz r10,42(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 42);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821157d8
	if (!ctx.cr0.eq) goto loc_821157D8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// ble cr6,0x821157d8
	if (!ctx.cr6.gt) goto loc_821157D8;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f12,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,16600(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16600);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f1,f0,f13,f12
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// bl 0x82204ae0
	ctx.lr = 0x821157D4;
	sub_82204AE0(ctx, base);
	// stfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
loc_821157D8:
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// lwz r3,504(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 504);
	// bl 0x821fa8e8
	ctx.lr = 0x821157F0;
	sub_821FA8E8(ctx, base);
loc_821157F0:
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

DEFINE_REX_FUNC(sub_82117CD0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24028(r10)
	REX_STORE_U32(ctx.r10.u32 + 24028, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82117EF0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24032(r10)
	REX_STORE_U32(ctx.r10.u32 + 24032, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82118110) {
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
	// bl 0x822d4e88
	ctx.lr = 0x82118118;
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,24032(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82118150
	if (!ctx.cr6.eq) goto loc_82118150;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// b 0x82118250
	goto loc_82118250;
loc_82118150:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r30,92(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f30,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
	// lfs f29,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f29.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// lfs f0,31220(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 31220);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x82204ae0
	ctx.lr = 0x82118180;
	sub_82204AE0(ctx, base);
	// stfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	f31.f64 = double(temp.f32);
	// fmuls f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64));
	// bl 0x820e0028
	ctx.lr = 0x82118194;
	sub_820E0028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 68, temp.u32);
	// stfs f1,64(r30)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 64, temp.u32);
	// lfs f0,232(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,17188(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f13,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f13,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x821181d0
	if (!ctx.cr6.gt) goto loc_821181D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16904(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16904);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821181d8
	goto loc_821181D8;
loc_821181D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16844);
	ctx.f0.f64 = double(temp.f32);
loc_821181D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// li r28,1
	r28.s64 = 1;
	// lfs f0,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lis r29,-32165
	r29.s64 = -2107965440;
	// lfs f13,17064(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17064);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82118228
	if (!ctx.cr6.gt) goto loc_82118228;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + f31.f64));
	// bl 0x820e0028
	ctx.lr = 0x82118208;
	sub_820E0028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 44, temp.u32);
	// lfs f0,32024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32024);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82118234
	if (!ctx.cr6.lt) goto loc_82118234;
	// lwz r11,-32480(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -32480);
	// sth r28,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, r28.u16);
	// b 0x82118234
	goto loc_82118234;
loc_82118228:
	// bl 0x821feec8
	ctx.lr = 0x8211822C;
	sub_821FEEC8(ctx, base);
	// fadds f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f30.f64));
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 44, temp.u32);
loc_82118234:
	// lfs f0,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// stfs f0,236(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 236, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x82118250
	if (!ctx.cr6.lt) goto loc_82118250;
	// lwz r11,-32480(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -32480);
	// sth r28,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, r28.u16);
loc_82118250:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8211E6A8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,29428(r10)
	REX_STORE_U32(ctx.r10.u32 + 29428, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8211E778) {
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
	ctx.lr = 0x8211E780;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x822d4f38
	ctx.lr = 0x8211E788;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r31,156(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r10,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r10.u32);
	// li r29,0
	r29.s64 = 0;
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r10,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// ble cr6,0x8211e7e4
	if (!ctx.cr6.gt) goto loc_8211E7E4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r28,r11,22
	r28.s64 = ctx.r11.s64 + 22;
loc_8211E7C0:
	// add r11,r28,r29
	ctx.r11.u64 = r28.u64 + r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211E7D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bgt 0x8211e7c0
	if (ctx.cr0.gt) goto loc_8211E7C0;
loc_8211E7E4:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// ori r26,r10,3696
	r26.u64 = ctx.r10.u64 | 3696;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r23,r11,-7072
	r23.s64 = ctx.r11.s64 + -7072;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lfs f30,2348(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2348);
	f30.f64 = double(temp.f32);
	// lfs f28,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f28.f64 = double(temp.f32);
	// li r24,-1
	r24.s64 = -1;
	// lfs f29,-8496(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -8496);
	f29.f64 = double(temp.f32);
	// subf r28,r26,r23
	r28.u64 = r23.u64 - r26.u64;
	// lfs f31,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	f31.f64 = double(temp.f32);
	// addi r31,r30,184
	r31.s64 = r30.s64 + 184;
	// addi r22,r11,432
	r22.s64 = ctx.r11.s64 + 432;
loc_8211E828:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt cr6,0x8211e83c
	if (ctx.cr6.lt) goto loc_8211E83C;
	// mr r27,r28
	r27.u64 = r28.u64;
	// addi r25,r28,10532
	r25.s64 = r28.s64 + 10532;
	// b 0x8211e854
	goto loc_8211E854;
loc_8211E83C:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r27,0
	r27.s64 = 0;
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f28,108(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_8211E854:
	// lwz r11,300(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 300);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r29,80(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 80);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// beq cr6,0x8211e8c4
	if (ctx.cr6.eq) goto loc_8211E8C4;
	// b 0x8211e8ac
	goto loc_8211E8AC;
loc_8211E878:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211E898;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1b28
	ctx.lr = 0x8211E8A8;
	sub_820E1B28(ctx, base);
	// lwz r29,80(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 80);
loc_8211E8AC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8211e878
	if (!ctx.cr6.eq) goto loc_8211E878;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f1,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1cc0
	ctx.lr = 0x8211E8C4;
	sub_820E1CC0(ctx, base);
loc_8211E8C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e22e8
	ctx.lr = 0x8211E8CC;
	sub_820E22E8(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// ble cr6,0x8211e8e4
	if (!ctx.cr6.gt) goto loc_8211E8E4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fdivs f1,f30,f1
	ctx.f1.f64 = double(float(f30.f64 / ctx.f1.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1cf8
	ctx.lr = 0x8211E8E4;
	sub_820E1CF8(ctx, base);
loc_8211E8E4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8211e914
	if (ctx.cr6.eq) goto loc_8211E914;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r27,11024
	ctx.r10.s64 = r27.s64 + 11024;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,11024(r27)
	REX_STORE_U32(r27.u32 + 11024, ctx.r10.u32);
	// stw r9,11028(r27)
	REX_STORE_U32(r27.u32 + 11028, ctx.r9.u32);
	// stw r8,11032(r27)
	REX_STORE_U32(r27.u32 + 11032, ctx.r8.u32);
	// stw r11,11036(r27)
	REX_STORE_U32(r27.u32 + 11036, ctx.r11.u32);
loc_8211E914:
	// addis r11,r23,2
	ctx.r11.s64 = r23.s64 + 131072;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,7392
	ctx.r11.s64 = ctx.r11.s64 + 7392;
	// add r28,r28,r26
	r28.u64 = r28.u64 + r26.u64;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// blt cr6,0x8211e828
	if (ctx.cr6.lt) goto loc_8211E828;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x822d4f84
	ctx.lr = 0x8211E960;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82124998) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-24048
	ctx.r8.s64 = ctx.r10.s64 + -24048;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r11.u8);
	// stb r10,2(r8)
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r10.u8);
	// stb r9,3(r8)
	REX_STORE_U8(ctx.r8.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82124C98) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e88
	ctx.lr = 0x82124CA0;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f34
	ctx.lr = 0x82124CA8;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-24048
	ctx.r11.s64 = ctx.r11.s64 + -24048;
	// li r28,0
	r28.s64 = 0;
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82124cd0
	if (!ctx.cr0.eq) goto loc_82124CD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82124f70
	goto loc_82124F70;
loc_82124CD0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r30,r11,-27676
	r30.s64 = ctx.r11.s64 + -27676;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f31,-31156(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -31156);
	f31.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f30,f31
	f30.f64 = f31.f64;
	// li r29,0
	r29.s64 = 0;
	// fmr f29,f31
	f29.f64 = f31.f64;
	// fmr f28,f31
	f28.f64 = f31.f64;
	// bl 0x821291f8
	ctx.lr = 0x82124D00;
	sub_821291F8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8211f870
	ctx.lr = 0x82124D18;
	sub_8211F870(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82124d90
	if (ctx.cr6.eq) goto loc_82124D90;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r9,-27648
	ctx.r11.s64 = ctx.r9.s64 + -27648;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,28,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xF;
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// beq cr6,0x82124d90
	if (ctx.cr6.eq) goto loc_82124D90;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-27136
	ctx.r11.s64 = ctx.r11.s64 + -27136;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r11,1664
	ctx.r11.s64 = ctx.r11.s64 + 1664;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,8(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// stw r7,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
	// stw r5,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
	// stw r9,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
loc_82124D90:
	// lbz r11,210(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 210);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82124f28
	if (ctx.cr0.eq) goto loc_82124F28;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x8211f870
	ctx.lr = 0x82124DB4;
	sub_8211F870(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1ba8
	ctx.lr = 0x82124DC4;
	sub_820E1BA8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f30,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x820e2290
	ctx.lr = 0x82124DDC;
	sub_820E2290(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,2384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cc0
	ctx.lr = 0x82124DF0;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820e1b28
	ctx.lr = 0x82124E00;
	sub_820E1B28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lfs f2,-31056(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31056);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820e1850
	ctx.lr = 0x82124E18;
	sub_820E1850(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x820e0af8
	ctx.lr = 0x82124E24;
	sub_820E0AF8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1ec0
	ctx.lr = 0x82124E34;
	sub_820E1EC0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x820e1b28
	ctx.lr = 0x82124E44;
	sub_820E1B28(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1ec0
	ctx.lr = 0x82124E54;
	sub_820E1EC0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x820e1b28
	ctx.lr = 0x82124E64;
	sub_820E1B28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// lfs f2,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f2.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f1,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82128688
	ctx.lr = 0x82124E7C;
	sub_82128688(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82124f28
	if (ctx.cr6.eq) goto loc_82124F28;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r11,0,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r11,192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 192, ctx.xer);
	// bne cr6,0x82124f28
	if (!ctx.cr6.eq) goto loc_82124F28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f2,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f2.f64 = double(temp.f32);
	// li r7,2
	ctx.r7.s64 = 2;
	// lfs f1,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f30,f31
	f30.f64 = f31.f64;
	// bl 0x82128688
	ctx.lr = 0x82124EB8;
	sub_82128688(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82124f1c
	if (ctx.cr6.eq) goto loc_82124F1C;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r11,0,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r11,192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 192, ctx.xer);
	// bne cr6,0x82124f1c
	if (!ctx.cr6.eq) goto loc_82124F1C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f2,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
	// li r7,2
	ctx.r7.s64 = 2;
	// lfs f1,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f29,f31
	f29.f64 = f31.f64;
	// bl 0x82128688
	ctx.lr = 0x82124EF4;
	sub_82128688(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82124f1c
	if (ctx.cr6.eq) goto loc_82124F1C;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r11,0,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r11,192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 192, ctx.xer);
	// bne cr6,0x82124f1c
	if (!ctx.cr6.eq) goto loc_82124F1C;
	// fmr f28,f31
	f28.f64 = f31.f64;
	// li r29,1
	r29.s64 = 1;
loc_82124F1C:
	// fcmpu cr6,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f28.f64);
	// bge cr6,0x82124f28
	if (!ctx.cr6.lt) goto loc_82124F28;
	// fmr f29,f28
	f29.f64 = f28.f64;
loc_82124F28:
	// fcmpu cr6,f27,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f27.f64, f30.f64);
	// blt cr6,0x82124f38
	if (ctx.cr6.lt) goto loc_82124F38;
	// fmr f0,f27
	ctx.f0.f64 = f27.f64;
	// b 0x82124f3c
	goto loc_82124F3C;
loc_82124F38:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f30.f64;
loc_82124F3C:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x82124f48
	if (!ctx.cr6.lt) goto loc_82124F48;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
loc_82124F48:
	// stfs f0,10228(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10228, temp.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x82124f58
	if (!ctx.cr6.eq) goto loc_82124F58;
	// stfs f0,10232(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10232, temp.u32);
loc_82124F58:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf940
	ctx.lr = 0x82124F6C;
	sub_821BF940(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82124F70:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f80
	ctx.lr = 0x82124F7C;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8212FD00) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-25176
	ctx.r11.s64 = ctx.r11.s64 + -25176;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x8212FD2C;
	sub_821E2FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8212fd3c
	if (ctx.cr0.eq) goto loc_8212FD3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x8212FD3C;
	sub_822C80A8(ctx, base);
loc_8212FD3C:
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

DEFINE_REX_FUNC(sub_821302A8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r10,524(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 524);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-25408
	ctx.r12.s64 = ctx.r12.s64 + -25408;
	// lbzx r0,r12,r10
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// lis r12,-32237
	ctx.r12.s64 = -2112684032;
	// nop 
	// addi r12,r12,744
	ctx.r12.s64 = ctx.r12.s64 + 744;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82130300;
	case 1:
		goto loc_82130360;
	case 2:
		goto loc_82130308;
	case 3:
		goto loc_82130330;
	case 4:
		goto loc_82130310;
	case 5:
		goto loc_82130350;
	case 6:
		goto loc_82130368;
	case 7:
		goto loc_82130368;
	case 8:
		goto loc_82130368;
	case 9:
		goto loc_82130368;
	case 10:
		goto loc_82130340;
	case 11:
		goto loc_82130320;
	case 12:
		goto loc_82130328;
	case 13:
		goto loc_82130368;
	case 14:
		goto loc_82130348;
	case 15:
		goto loc_82130368;
	case 16:
		goto loc_82130318;
	case 17:
		goto loc_82130338;
	case 18:
		goto loc_82130368;
	case 19:
		goto loc_82130358;
	case 20:
		goto loc_821302E8;
	case 21:
		goto loc_82130360;
	case 22:
		goto loc_821302F0;
	case 23:
		goto loc_82130350;
	case 24:
		goto loc_821302F8;
	case 25:
		goto loc_821302F8;
	case 26:
		goto loc_82130318;
	case 27:
		goto loc_82130318;
	case 28:
		goto loc_82130318;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_821302E8:
	// li r10,6
	ctx.r10.s64 = 6;
	// b 0x82130364
	goto loc_82130364;
loc_821302F0:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82130364
	goto loc_82130364;
loc_821302F8:
	// li r10,22
	ctx.r10.s64 = 22;
	// b 0x82130364
	goto loc_82130364;
loc_82130300:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x82130364
	goto loc_82130364;
loc_82130308:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82130364
	goto loc_82130364;
loc_82130310:
	// li r10,15
	ctx.r10.s64 = 15;
	// b 0x82130364
	goto loc_82130364;
loc_82130318:
	// li r10,21
	ctx.r10.s64 = 21;
	// b 0x82130364
	goto loc_82130364;
loc_82130320:
	// li r10,13
	ctx.r10.s64 = 13;
	// b 0x82130364
	goto loc_82130364;
loc_82130328:
	// li r10,12
	ctx.r10.s64 = 12;
	// b 0x82130364
	goto loc_82130364;
loc_82130330:
	// li r10,18
	ctx.r10.s64 = 18;
	// b 0x82130364
	goto loc_82130364;
loc_82130338:
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x82130364
	goto loc_82130364;
loc_82130340:
	// li r10,20
	ctx.r10.s64 = 20;
	// b 0x82130364
	goto loc_82130364;
loc_82130348:
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x82130364
	goto loc_82130364;
loc_82130350:
	// li r10,23
	ctx.r10.s64 = 23;
	// b 0x82130364
	goto loc_82130364;
loc_82130358:
	// li r10,11
	ctx.r10.s64 = 11;
	// b 0x82130364
	goto loc_82130364;
loc_82130360:
	// li r10,26
	ctx.r10.s64 = 26;
loc_82130364:
	// sth r10,526(r11)
	REX_STORE_U16(ctx.r11.u32 + 526, ctx.r10.u16);
loc_82130368:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82133118) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,142
	ctx.r9.s64 = ctx.r9.s64 + 142;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r9,r8
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32));
	// mulli r8,r9,24
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(24));
	// b 0x8213314c
	goto loc_8213314C;
loc_82133140:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mulli r8,r8,24
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(24));
loc_8213314C:
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r8,9(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 9);
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// bne cr6,0x82133140
	if (!ctx.cr6.eq) goto loc_82133140;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82133178
	if (!ctx.cr6.lt) goto loc_82133178;
	// add r11,r9,r6
	ctx.r11.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
loc_82133178:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821341F8) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x82133b28
	ctx.lr = 0x8213420C;
	sub_82133B28(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82133ad0
	ctx.lr = 0x82134218;
	sub_82133AD0(ctx, base);
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82134224
	if (ctx.cr6.lt) goto loc_82134224;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82134224:
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82134270
	if (!ctx.cr6.lt) goto loc_82134270;
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mulli r11,r11,10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10));
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,614
	ctx.r11.s64 = ctx.r11.s64 + 614;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r11,r9
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lha r11,18(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 18));
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r3,r11,20
	ctx.r3.u64 = ctx.r11.u32 & 0xFFF;
	// bne 0x82134274
	if (!ctx.cr0.eq) goto loc_82134274;
loc_82134270:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82134274:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82136068) {
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
	ctx.lr = 0x82136070;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r31,r11,23912
	r31.s64 = ctx.r11.s64 + 23912;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82136138
	if (ctx.cr6.eq) goto loc_82136138;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lwz r28,76(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r29,r10,22000
	r29.s64 = ctx.r10.s64 + 22000;
	// bne cr6,0x82136128
	if (!ctx.cr6.eq) goto loc_82136128;
	// mulli r11,r28,54
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(54));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r10,r29,144
	ctx.r10.s64 = r29.s64 + 144;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r9,r9,432
	ctx.r9.s64 = ctx.r9.s64 + 432;
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb. r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r27,168(r9)
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 168);
	// ble 0x821360e0
	if (!ctx.cr0.gt) goto loc_821360E0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x82136158
	goto loc_82136158;
loc_821360E0:
	// li r8,1
	ctx.r8.s64 = 1;
	// mulli r9,r28,324
	ctx.r9.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(324));
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// add r30,r9,r29
	r30.u64 = ctx.r9.u64 + r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82134170
	ctx.lr = 0x821360F8;
	sub_82134170(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x82136120
	if (!ctx.cr6.eq) goto loc_82136120;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821341f8
	ctx.lr = 0x8213610C;
	sub_821341F8(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// b 0x82136158
	goto loc_82136158;
loc_82136120:
	// bl 0x82134170
	ctx.lr = 0x82136124;
	sub_82134170(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
loc_82136128:
	// mulli r11,r28,324
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(324));
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82134170
	ctx.lr = 0x82136134;
	sub_82134170(ctx, base);
	// b 0x82136158
	goto loc_82136158;
loc_82136138:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r10,r10,21824
	ctx.r10.s64 = ctx.r10.s64 + 21824;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mulli r11,r11,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(88));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82133568
	ctx.lr = 0x82136158;
	sub_82133568(ctx, base);
loc_82136158:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8213F9E8) {
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
	// lis r31,-32165
	r31.s64 = -2107965440;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r30,-32480(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + -32480);
	// addi r11,r30,80
	ctx.r11.s64 = r30.s64 + 80;
	// bl 0x821b0030
	ctx.lr = 0x8213FA10;
	sub_821B0030(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r3.u32);
	// lwz r11,-32480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -32480);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// stw r10,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r7,r9,23912
	ctx.r7.s64 = ctx.r9.s64 + 23912;
	// addi r4,r11,21264
	ctx.r4.s64 = ctx.r11.s64 + 21264;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82130170
	ctx.lr = 0x8213FA38;
	sub_82130170(ctx, base);
	// bl 0x82130370
	ctx.lr = 0x8213FA3C;
	sub_82130370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8213fa48
	if (!ctx.cr0.eq) goto loc_8213FA48;
	// bl 0x82136640
	ctx.lr = 0x8213FA48;
	sub_82136640(ctx, base);
loc_8213FA48:
	// bl 0x821308e8
	ctx.lr = 0x8213FA4C;
	sub_821308E8(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// li r4,6
	ctx.r4.s64 = 6;
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,7840(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7840);
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f0,112(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f0,116(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f0,120(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// bl 0x821d6210
	ctx.lr = 0x8213FA84;
	sub_821D6210(ctx, base);
	// lwz r11,-32480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -32480);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_82149250) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,23912
	ctx.r10.s64 = ctx.r10.s64 + 23912;
	// stw r11,72(r10)
	REX_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82149298) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r10,23912
	ctx.r10.s64 = ctx.r10.s64 + 23912;
	// stw r11,72(r10)
	REX_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821492F8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r10,23912
	ctx.r10.s64 = ctx.r10.s64 + 23912;
	// stw r11,72(r10)
	REX_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82149780) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82149788;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e0af8
	ctx.lr = 0x821497A0;
	sub_820E0AF8(ctx, base);
	// lha r11,78(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 78));
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x820e0590
	ctx.lr = 0x821497B8;
	sub_820E0590(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e0250
	ctx.lr = 0x821497C4;
	sub_820E0250(ctx, base);
	// lha r11,76(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 76));
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x820e0590
	ctx.lr = 0x821497DC;
	sub_820E0590(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x820e1028
	ctx.lr = 0x821497F0;
	sub_820E1028(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// lha r11,20(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 20));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lfs f10,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f10,f13
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f3,f0,f12
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// add r30,r11,r29
	r30.u64 = ctx.r11.u64 + r29.u64;
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e0ec8
	ctx.lr = 0x82149834;
	sub_820E0EC8(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e0af8
	ctx.lr = 0x82149840;
	sub_820E0AF8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x820e0590
	ctx.lr = 0x82149850;
	sub_820E0590(ctx, base);
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 48, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 52, temp.u32);
	// lfs f13,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 56, temp.u32);
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 60, temp.u32);
	// lha r11,22(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 22));
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x820e0368
	ctx.lr = 0x8214988C;
	sub_820E0368(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8214C790) {
	REX_FUNC_PROLOGUE();
	// lha r3,4(r3)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 4));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214C870) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,12
	ctx.r9.s64 = ctx.r3.s64 + 12;
loc_8214C878:
	// lbzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8214c88c
	if (ctx.cr0.eq) goto loc_8214C88C;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt 0x8214c8a8
	if (ctx.cr0.lt) goto loc_8214C8A8;
loc_8214C88C:
	// lha r10,6(r3)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 6));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8214c878
	if (!ctx.cr6.gt) goto loc_8214C878;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8214c878
	goto loc_8214C878;
loc_8214C8A8:
	// sth r11,8(r3)
	REX_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214D118) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8214D120;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r11,7856
	ctx.r11.s64 = ctx.r11.s64 + 7856;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,1545
	ctx.r11.s64 = ctx.r11.s64 + 1545;
	// li r29,0
	r29.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8214D140:
	// stb r29,5039(r11)
	REX_STORE_U8(ctx.r11.u32 + 5039, r29.u8);
	// stbu r29,5040(r11)
	ea = 5040 + ctx.r11.u32;
	REX_STORE_U8(ea, r29.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8214d140
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214D140;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f2,16624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16624);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,26816(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26816);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ff668
	ctx.lr = 0x8214D160;
	sub_821FF668(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821d1748
	ctx.lr = 0x8214D168;
	sub_821D1748(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821d1748
	ctx.lr = 0x8214D170;
	sub_821D1748(ctx, base);
	// lwz r31,408(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 408);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8214d190
	if (ctx.cr6.eq) goto loc_8214D190;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e48c0
	ctx.lr = 0x8214D184;
	sub_820E48C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x8214D18C;
	sub_822C80A8(ctx, base);
	// stw r29,408(r30)
	REX_STORE_U32(r30.u32 + 408, r29.u32);
loc_8214D190:
	// addi r31,r30,80
	r31.s64 = r30.s64 + 80;
	// bl 0x82187b58
	ctx.lr = 0x8214D198;
	sub_82187B58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82187ff8
	ctx.lr = 0x8214D1A0;
	sub_82187FF8(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,30(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x8214d1c8
	if (!ctx.cr6.eq) goto loc_8214D1C8;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8214d1c8
	if (!ctx.cr6.gt) goto loc_8214D1C8;
	// bl 0x821b1470
	ctx.lr = 0x8214D1C8;
	sub_821B1470(ctx, base);
loc_8214D1C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82150380) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lfs f13,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821503e0
	if (!ctx.cr6.eq) goto loc_821503E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,108(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821503bc
	if (!ctx.cr6.gt) goto loc_821503BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
loc_821503BC:
	// lfs f0,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f13,80(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// blr 
	return;
loc_821503E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,124(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,28428(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28428);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,108(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// bne cr6,0x8215041c
	if (!ctx.cr6.eq) goto loc_8215041C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-31132(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31132);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,96(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// b 0x8215042c
	goto loc_8215042C;
loc_8215041C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,31844(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 31844);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
loc_8215042C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821503bc
	if (!ctx.cr6.lt) goto loc_821503BC;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82157E68) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lwz r10,-32480(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// lbz r11,1888(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1888);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82157e9c
	if (!ctx.cr6.eq) goto loc_82157E9C;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// stb r11,24293(r9)
	REX_STORE_U8(ctx.r9.u32 + 24293, ctx.r11.u8);
loc_82157E9C:
	// lwz r11,68(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82157f64
	if (!ctx.cr6.gt) goto loc_82157F64;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,30(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82157f50
	if (ctx.cr6.eq) goto loc_82157F50;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r31,r11,-7072
	r31.s64 = ctx.r11.s64 + -7072;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82157ee4
	if (ctx.cr6.eq) goto loc_82157EE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821c2f08
	ctx.lr = 0x82157EDC;
	sub_821C2F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82157fe0
	if (ctx.cr0.eq) goto loc_82157FE0;
loc_82157EE4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3812
	ctx.r11.u64 = ctx.r11.u64 | 3812;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82157f10
	if (ctx.cr6.eq) goto loc_82157F10;
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c2f08
	ctx.lr = 0x82157F08;
	sub_821C2F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82157fe0
	if (ctx.cr0.eq) goto loc_82157FE0;
loc_82157F10:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821c9e88
	ctx.lr = 0x82157F24;
	sub_821C9E88(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c9e88
	ctx.lr = 0x82157F3C;
	sub_821C9E88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821d45c8
	ctx.lr = 0x82157F48;
	sub_821D45C8(ctx, base);
	// bl 0x821d17a8
	ctx.lr = 0x82157F4C;
	sub_821D17A8(ctx, base);
	// b 0x82157fe0
	goto loc_82157FE0;
loc_82157F50:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x821d45b0
	ctx.lr = 0x82157F5C;
	sub_821D45B0(ctx, base);
	// bl 0x82115f98
	ctx.lr = 0x82157F60;
	sub_82115F98(ctx, base);
	// b 0x82157fe0
	goto loc_82157FE0;
loc_82157F64:
	// bge cr6,0x82157fe0
	if (!ctx.cr6.lt) goto loc_82157FE0;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lhz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 30);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x82157f94
	if (!ctx.cr6.eq) goto loc_82157F94;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,31868
	ctx.r11.s64 = ctx.r11.s64 + 31868;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82157f94
	if (ctx.cr6.eq) goto loc_82157F94;
	// bl 0x821dde20
	ctx.lr = 0x82157F94;
	sub_821DDE20(ctx, base);
loc_82157F94:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,30
	ctx.r5.s64 = 30;
	// lfs f2,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2024(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212f220
	ctx.lr = 0x82157FB0;
	sub_8212F220(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821f8230
	ctx.lr = 0x82157FB8;
	sub_821F8230(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82157fd0
	if (ctx.cr6.eq) goto loc_82157FD0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x821c78c0
	ctx.lr = 0x82157FD0;
	sub_821C78C0(ctx, base);
loc_82157FD0:
	// bl 0x821d17a8
	ctx.lr = 0x82157FD4;
	sub_821D17A8(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821dd7a0
	ctx.lr = 0x82157FDC;
	sub_821DD7A0(ctx, base);
	// bl 0x8215e020
	ctx.lr = 0x82157FE0;
	sub_8215E020(ctx, base);
loc_82157FE0:
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

DEFINE_REX_FUNC(sub_8215D698) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,75
	ctx.r3.s64 = 75;
	// b 0x821dce30
	sub_821DCE30(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215D7D0) {
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
	// li r30,0
	r30.s64 = 0;
	// li r31,1
	r31.s64 = 1;
loc_8215D7EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dd198
	ctx.lr = 0x8215D7F4;
	sub_821DD198(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215d830
	if (ctx.cr6.eq) goto loc_8215D830;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8215d808
	if (!ctx.cr6.eq) goto loc_8215D808;
	// li r30,2
	r30.s64 = 2;
loc_8215D808:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,33
	ctx.cr6.compare<int32_t>(r31.s32, 33, ctx.xer);
	// blt cr6,0x8215d7ec
	if (ctx.cr6.lt) goto loc_8215D7EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8215D818:
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
loc_8215D830:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8215d818
	goto loc_8215D818;
}

DEFINE_REX_FUNC(sub_8215F308) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// b 0x8215e188
	sub_8215E188(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215F928) {
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
	ctx.lr = 0x8215F930;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82187b58
	ctx.lr = 0x8215F93C;
	sub_82187B58(ctx, base);
	// lis r30,-32169
	r30.s64 = -2108227584;
	// li r27,0
	r27.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,24324(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 24324);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8215f980
	if (ctx.cr6.eq) goto loc_8215F980;
	// bl 0x82187ff8
	ctx.lr = 0x8215F958;
	sub_82187FF8(ctx, base);
	// lwz r3,24324(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24324);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215f980
	if (ctx.cr6.eq) goto loc_8215F980;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215F978;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// stw r27,24324(r30)
	REX_STORE_U32(r30.u32 + 24324, r27.u32);
loc_8215F980:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822c80d0
	ctx.lr = 0x8215F988;
	sub_822C80D0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8215f9a4
	if (ctx.cr0.eq) goto loc_8215F9A4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, r31.u32);
	// addi r11,r11,-13236
	ctx.r11.s64 = ctx.r11.s64 + -13236;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x8215f9a8
	goto loc_8215F9A8;
loc_8215F9A4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_8215F9A8:
	// stw r4,24324(r30)
	REX_STORE_U32(r30.u32 + 24324, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82188070
	ctx.lr = 0x8215F9B4;
	sub_82188070(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821b0030
	ctx.lr = 0x8215F9BC;
	sub_821B0030(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215f9d4
	if (ctx.cr6.eq) goto loc_8215F9D4;
	// bl 0x821523e0
	ctx.lr = 0x8215F9D0;
	sub_821523E0(ctx, base);
	// b 0x8215f9d8
	goto loc_8215F9D8;
loc_8215F9D4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8215F9D8:
	// lis r10,19283
	ctx.r10.s64 = 1263730688;
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r30,r10,17740
	r30.u64 = ctx.r10.u64 | 17740;
	// addi r29,r11,-7176
	r29.s64 = ctx.r11.s64 + -7176;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// bne cr6,0x8215fa04
	if (!ctx.cr6.eq) goto loc_8215FA04;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8215fa34
	if (ctx.cr6.eq) goto loc_8215FA34;
loc_8215FA04:
	// li r5,5624
	ctx.r5.s64 = 5624;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8215FA10;
	sub_822D5870(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r4,r4,38912
	ctx.r4.u64 = ctx.r4.u64 | 38912;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stw r28,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r28.u32);
	// bl 0x821af9a0
	ctx.lr = 0x8215FA30;
	sub_821AF9A0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
loc_8215FA34:
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lhz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8215fab0
	if (!ctx.cr0.eq) goto loc_8215FAB0;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8215fab0
	if (!ctx.cr6.eq) goto loc_8215FAB0;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// addi r30,r11,31432
	r30.s64 = ctx.r11.s64 + 31432;
	// sth r9,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r9.u16);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r27,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r7,40(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 40);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r7,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwz r3,128(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 128);
	// lwz r6,44(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r30,132(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 132);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// bl 0x821f7aa0
	ctx.lr = 0x8215FAAC;
	sub_821F7AA0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
loc_8215FAB0:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// addi r6,r10,13128
	ctx.r6.s64 = ctx.r10.s64 + 13128;
	// lfs f13,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x8215fadc
	if (ctx.cr6.eq) goto loc_8215FADC;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// beq cr6,0x8215fadc
	if (ctx.cr6.eq) goto loc_8215FADC;
	// lbz r11,1888(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 1888);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215fb44
	if (ctx.cr0.eq) goto loc_8215FB44;
loc_8215FADC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f13,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,24328
	ctx.r11.s64 = ctx.r11.s64 + 24328;
	// addi r8,r9,-16872
	ctx.r8.s64 = ctx.r9.s64 + -16872;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// sth r27,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, r27.u16);
	// stw r11,24316(r10)
	REX_STORE_U32(ctx.r10.u32 + 24316, ctx.r11.u32);
	// stw r27,24320(r7)
	REX_STORE_U32(ctx.r7.u32 + 24320, r27.u32);
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// sth r8,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r8.u16);
	// lbz r10,1888(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 1888);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// sth r10,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
loc_8215FB3C:
	// stwu r27,16(r7)
	ea = 16 + ctx.r7.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x8215fb3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215FB3C;
loc_8215FB44:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// stfs f13,144(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,148(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// stfs f13,160(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// stfs f13,172(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
	// stfs f13,176(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// stfs f13,180(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// stw r27,120(r31)
	REX_STORE_U32(r31.u32 + 120, r27.u32);
	// lfs f2,2348(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2348);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2340(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2340);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stfs f0,152(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// stfs f0,156(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// stfs f0,160(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 160, temp.u32);
	// stfs f13,164(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 164, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stfs f0,168(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// stfs f0,172(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// stfs f0,176(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// stfs f13,180(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stfs f0,184(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 184, temp.u32);
	// stfs f0,188(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// stfs f0,192(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// stfs f0,196(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 196, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stfs f0,200(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// stfs f0,204(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 204, temp.u32);
	// stfs f0,208(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// stfs f0,212(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 212, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stfs f0,216(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 216, temp.u32);
	// stfs f0,220(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 220, temp.u32);
	// stfs f0,224(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 224, temp.u32);
	// stfs f13,228(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 228, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stfs f0,232(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 232, temp.u32);
	// stfs f0,236(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 236, temp.u32);
	// stfs f0,240(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 240, temp.u32);
	// stfs f13,244(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 244, temp.u32);
	// stw r27,80(r31)
	REX_STORE_U32(r31.u32 + 80, r27.u32);
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// bl 0x821ff668
	ctx.lr = 0x8215FC14;
	sub_821FF668(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821d48f0
	ctx.lr = 0x8215FC1C;
	sub_821D48F0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x8215FC30;
	sub_821D6210(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8216FC18) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e8c
	ctx.lr = 0x8216FC20;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f38
	ctx.lr = 0x8216FC28;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,216(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// addi r10,r4,47
	ctx.r10.s64 = ctx.r4.s64 + 47;
	// lwz r8,80(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lfs f13,212(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// lfs f0,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fcmpu cr6,f1,f2
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f9,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lfsx f10,r10,r3
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f31,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	f31.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fadds f30,f0,f9
	f30.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// lfs f8,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// fadds f29,f8,f12
	f29.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f0,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f10,f31,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, f31.f64, ctx.f13.f64)));
	// fsubs f28,f13,f0
	f28.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bge cr6,0x8216fca8
	if (!ctx.cr6.lt) goto loc_8216FCA8;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
loc_8216FCA8:
	// fcmpu cr6,f1,f3
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f3.f64);
	// ble cr6,0x8216fcb4
	if (!ctx.cr6.gt) goto loc_8216FCB4;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
loc_8216FCB4:
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7516
	ctx.r4.s64 = ctx.r11.s64 + -7516;
	// bl 0x822d55f8
	ctx.lr = 0x8216FCCC;
	sub_822D55F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8216FCD0:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,46
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 46, ctx.xer);
	// beq cr6,0x8216fcf0
	if (ctx.cr6.eq) goto loc_8216FCF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x8216fcd0
	if (ctx.cr6.lt) goto loc_8216FCD0;
	// b 0x8216fcf8
	goto loc_8216FCF8;
loc_8216FCF0:
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
loc_8216FCF8:
	// addi r10,r1,97
	ctx.r10.s64 = ctx.r1.s64 + 97;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r9,-7536
	ctx.r5.s64 = ctx.r9.s64 + -7536;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x8216FD1C;
	sub_821EB1A0(ctx, base);
	// addi r11,r29,41
	ctx.r11.s64 = r29.s64 + 41;
	// addi r10,r29,35
	ctx.r10.s64 = r29.s64 + 35;
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r3,r9,-7560
	ctx.r3.s64 = ctx.r9.s64 + -7560;
	// lfsx f13,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfsx f11,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fmadds f0,f0,f31,f28
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, f28.f64)));
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + f30.f64));
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fadds f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// fsubs f1,f13,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x8216FD7C;
	sub_821EACB0(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f84
	ctx.lr = 0x8216FD88;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82174CA0) {
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
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82174010
	ctx.lr = 0x82174CC0;
	sub_82174010(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,1180
	ctx.r4.s64 = r31.s64 + 1180;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82174010
	ctx.lr = 0x82174CD0;
	sub_82174010(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,1768
	ctx.r4.s64 = r31.s64 + 1768;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82174010
	ctx.lr = 0x82174CE0;
	sub_82174010(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,2356
	ctx.r4.s64 = r31.s64 + 2356;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82174010
	ctx.lr = 0x82174CF0;
	sub_82174010(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,4708
	ctx.r4.s64 = r31.s64 + 4708;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82174118
	ctx.lr = 0x82174D00;
	sub_82174118(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,7060
	ctx.r4.s64 = r31.s64 + 7060;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82174238
	ctx.lr = 0x82174D10;
	sub_82174238(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,592
	ctx.r4.s64 = r31.s64 + 592;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82174010
	ctx.lr = 0x82174D20;
	sub_82174010(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,2944
	ctx.r4.s64 = r31.s64 + 2944;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82174010
	ctx.lr = 0x82174D30;
	sub_82174010(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,3532
	ctx.r4.s64 = r31.s64 + 3532;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82174010
	ctx.lr = 0x82174D40;
	sub_82174010(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,4120
	ctx.r4.s64 = r31.s64 + 4120;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82174010
	ctx.lr = 0x82174D50;
	sub_82174010(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,5296
	ctx.r4.s64 = r31.s64 + 5296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82174118
	ctx.lr = 0x82174D60;
	sub_82174118(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,5884
	ctx.r4.s64 = r31.s64 + 5884;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82174118
	ctx.lr = 0x82174D70;
	sub_82174118(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,6472
	ctx.r4.s64 = r31.s64 + 6472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82174118
	ctx.lr = 0x82174D80;
	sub_82174118(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,7648
	ctx.r4.s64 = r31.s64 + 7648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82174238
	ctx.lr = 0x82174D90;
	sub_82174238(ctx, base);
	// lwz r11,8236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8236);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,8236(r31)
	REX_STORE_U32(r31.u32 + 8236, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82178258) {
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
	// bl 0x822d4e74
	ctx.lr = 0x82178260;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f24
	ctx.lr = 0x82178268;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lfs f26,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	f26.f64 = double(temp.f32);
	// addi r3,r11,1700
	ctx.r3.s64 = ctx.r11.s64 + 1700;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// fmr f30,f31
	f30.f64 = f31.f64;
	// fmuls f29,f1,f26
	f29.f64 = double(float(ctx.f1.f64 * f26.f64));
	// fmr f28,f31
	f28.f64 = f31.f64;
	// bl 0x82202070
	ctx.lr = 0x821782B0;
	sub_82202070(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addic. r25,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r25.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r29,0
	r29.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// lfs f25,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f25.f64 = double(temp.f32);
	// stfs f25,108(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// beq 0x82178438
	if (ctx.cr0.eq) goto loc_82178438;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// lfs f23,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	f23.f64 = double(temp.f32);
	// lfs f24,16232(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16232);
	f24.f64 = double(temp.f32);
loc_821782EC:
	// lwz r11,136(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 136);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8217831c
	if (!ctx.cr6.eq) goto loc_8217831C;
	// li r11,3
	ctx.r11.s64 = 3;
	// divwu r11,r24,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? r24.u32 / ctx.r11.u32 : 0);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8217831c
	if (!ctx.cr6.gt) goto loc_8217831C;
	// fmuls f29,f29,f24
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(f29.f64 * f24.f64));
	// fmuls f0,f27,f23
	ctx.f0.f64 = double(float(f27.f64 * f23.f64));
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// bge cr6,0x8217831c
	if (!ctx.cr6.lt) goto loc_8217831C;
	// fmr f29,f0
	f29.f64 = ctx.f0.f64;
loc_8217831C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1ba8
	ctx.lr = 0x8217832C;
	sub_820E1BA8(ctx, base);
	// addi r27,r30,16
	r27.s64 = r30.s64 + 16;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e1ba8
	ctx.lr = 0x82178340;
	sub_820E1BA8(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1c50
	ctx.lr = 0x82178350;
	sub_820E1C50(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x820e2290
	ctx.lr = 0x82178384;
	sub_820E2290(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1b28
	ctx.lr = 0x82178394;
	sub_820E1B28(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f1,f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f29.f64 * f26.f64));
	// bl 0x820e1cc0
	ctx.lr = 0x821783A4;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820e1b28
	ctx.lr = 0x821783B4;
	sub_820E1B28(ctx, base);
	// stfs f30,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f28,4(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// addi r28,r28,64
	r28.s64 = r28.s64 + 64;
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(f30.f64, f31.f64);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bne cr6,0x821783d8
	if (!ctx.cr6.eq) goto loc_821783D8;
	// fmr f30,f25
	f30.f64 = f25.f64;
	// b 0x821783dc
	goto loc_821783DC;
loc_821783D8:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64;
loc_821783DC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820e1ba8
	ctx.lr = 0x821783EC;
	sub_820E1BA8(ctx, base);
	// stfs f30,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f28,4(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// addi r28,r28,64
	r28.s64 = r28.s64 + 64;
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(f30.f64, f31.f64);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bne cr6,0x82178410
	if (!ctx.cr6.eq) goto loc_82178410;
	// fmr f30,f25
	f30.f64 = f25.f64;
	// b 0x82178414
	goto loc_82178414;
loc_82178410:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64;
loc_82178414:
	// fcmpu cr6,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, f31.f64);
	// bne cr6,0x82178424
	if (!ctx.cr6.eq) goto loc_82178424;
	// fmr f28,f25
	f28.f64 = f25.f64;
	// b 0x82178428
	goto loc_82178428;
loc_82178424:
	// fmr f28,f31
	ctx.fpscr.disableFlushMode();
	f28.f64 = f31.f64;
loc_82178428:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// mr r30,r27
	r30.u64 = r27.u64;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(r26.u32, r25.u32, ctx.xer);
	// blt cr6,0x821782ec
	if (ctx.cr6.lt) goto loc_821782EC;
loc_82178438:
	// lwz r11,136(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 136);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82178490
	if (!ctx.cr6.eq) goto loc_82178490;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x820e1b28
	ctx.lr = 0x82178454;
	sub_820E1B28(ctx, base);
	// stfs f30,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f28,4(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(f30.f64, f31.f64);
	// bne cr6,0x82178470
	if (!ctx.cr6.eq) goto loc_82178470;
	// fmr f31,f25
	f31.f64 = f25.f64;
loc_82178470:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x820e1ba8
	ctx.lr = 0x82178480;
	sub_820E1BA8(ctx, base);
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f28,4(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// addi r3,r29,1
	ctx.r3.s64 = r29.s64 + 1;
	// b 0x82178500
	goto loc_82178500;
loc_82178490:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f30.f64, f31.f64);
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// addi r11,r31,64
	ctx.r11.s64 = r31.s64 + 64;
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r9,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stfs f30,0(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f28,4(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stw r9,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// bne cr6,0x821784d0
	if (!ctx.cr6.eq) goto loc_821784D0;
	// fmr f31,f25
	f31.f64 = f25.f64;
loc_821784D0:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f28,4(r11)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_82178500:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f70
	ctx.lr = 0x8217850C;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_821810E8) {
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
	// lwz r11,244(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181138
	if (ctx.cr6.eq) goto loc_82181138;
	// lwz r11,240(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181138
	if (ctx.cr6.eq) goto loc_82181138;
	// lwz r11,248(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181138
	if (ctx.cr6.eq) goto loc_82181138;
	// bl 0x8217fe40
	ctx.lr = 0x82181124;
	sub_8217FE40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82180b90
	ctx.lr = 0x8218112C;
	sub_82180B90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821800e0
	ctx.lr = 0x82181134;
	sub_821800E0(ctx, base);
	// b 0x82181148
	goto loc_82181148;
loc_82181138:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
loc_82181148:
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

DEFINE_REX_FUNC(sub_82181878) {
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
	// lbz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821818a8
	if (ctx.cr0.eq) goto loc_821818A8;
loc_821818A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8218192c
	goto loc_8218192C;
loc_821818A8:
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// subf. r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x821818a0
	if (ctx.cr0.gt) goto loc_821818A0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82181e38
	ctx.lr = 0x821818C4;
	sub_82181E38(ctx, base);
	// clrlwi r30,r30,24
	r30.u64 = r30.u32 & 0xFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// bl 0x82182158
	ctx.lr = 0x821818DC;
	sub_82182158(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82181928
	if (ctx.cr6.eq) goto loc_82181928;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// li r30,0
	r30.s64 = 0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
loc_821818F8:
	// addi r11,r30,2
	ctx.r11.s64 = r30.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82181918
	if (!ctx.cr6.eq) goto loc_82181918;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82183768
	ctx.lr = 0x82181918;
	sub_82183768(ctx, base);
loc_82181918:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// clrlwi r30,r11,24
	r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// blt cr6,0x821818f8
	if (ctx.cr6.lt) goto loc_821818F8;
loc_82181928:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8218192C:
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

DEFINE_REX_FUNC(sub_82183C70) {
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
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r9,r11,4444
	ctx.r9.u64 = ctx.r11.u64 | 4444;
	// ori r10,r10,4448
	ctx.r10.u64 = ctx.r10.u64 | 4448;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stwx r11,r3,r9
	REX_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r11,r3,r10
	REX_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x821836a0
	ctx.lr = 0x82183CB0;
	sub_821836A0(ctx, base);
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r30,r11,31656
	r30.s64 = ctx.r11.s64 + 31656;
	// lbz r11,31648(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 31648);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82183cd0
	if (!ctx.cr0.eq) goto loc_82183CD0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82208828
	ctx.lr = 0x82183CD0;
	sub_82208828(ctx, base);
loc_82183CD0:
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 0);
	// ori r10,r10,4432
	ctx.r10.u64 = ctx.r10.u64 | 4432;
	// stdx r11,r31,r10
	REX_STORE_U64(r31.u32 + ctx.r10.u32, ctx.r11.u64);
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

DEFINE_REX_FUNC(sub_82185370) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82185378;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,436(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 436);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8218542c
	if (!ctx.cr0.eq) goto loc_8218542C;
	// lwz r11,404(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 404);
	// addi r29,r3,404
	r29.s64 = ctx.r3.s64 + 404;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x821853b4
	if (!ctx.cr6.eq) goto loc_821853B4;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82208d78
	ctx.lr = 0x821853B4;
	sub_82208D78(ctx, base);
loc_821853B4:
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821853c8
	if (ctx.cr6.eq) goto loc_821853C8;
	// bl 0x822c80a8
	ctx.lr = 0x821853C4;
	sub_822C80A8(ctx, base);
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
loc_821853C8:
	// lwz r3,492(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 492);
	// bl 0x82189cd0
	ctx.lr = 0x821853D0;
	sub_82189CD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821853e0
	if (ctx.cr0.eq) goto loc_821853E0;
	// lwz r3,492(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 492);
	// bl 0x82189e88
	ctx.lr = 0x821853E0;
	sub_82189E88(ctx, base);
loc_821853E0:
	// lbz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 100);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82185410
	if (!ctx.cr6.eq) goto loc_82185410;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d5870
	ctx.lr = 0x821853FC;
	sub_822D5870(ctx, base);
	// lwz r11,432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 432);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stw r11,416(r31)
	REX_STORE_U32(r31.u32 + 416, ctx.r11.u32);
	// bl 0x82234078
	ctx.lr = 0x82185410;
	sub_82234078(ctx, base);
loc_82185410:
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x822cb8a0
	ctx.lr = 0x82185418;
	sub_822CB8A0(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x822cb8a0
	ctx.lr = 0x82185420;
	sub_822CB8A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,436(r31)
	REX_STORE_U8(r31.u32 + 436, ctx.r11.u8);
	// b 0x821854a8
	goto loc_821854A8;
loc_8218542C:
	// lbz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 100);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82185450
	if (!ctx.cr6.eq) goto loc_82185450;
	// lwz r11,404(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 404);
	// addi r3,r31,404
	ctx.r3.s64 = r31.s64 + 404;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821854a8
	if (ctx.cr6.eq) goto loc_821854A8;
	// bl 0x82209598
	ctx.lr = 0x8218544C;
	sub_82209598(ctx, base);
	// stb r30,100(r31)
	REX_STORE_U8(r31.u32 + 100, r30.u8);
loc_82185450:
	// lbz r11,101(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 101);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8218549c
	if (!ctx.cr6.eq) goto loc_8218549C;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82188300
	ctx.lr = 0x82185464;
	sub_82188300(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x82233e50
	ctx.lr = 0x82185488;
	sub_82233E50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r30,101(r31)
	REX_STORE_U8(r31.u32 + 101, r30.u8);
	// beq 0x8218549c
	if (ctx.cr0.eq) goto loc_8218549C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82209598
	ctx.lr = 0x8218549C;
	sub_82209598(ctx, base);
loc_8218549C:
	// li r11,13
	ctx.r11.s64 = 13;
	// stb r30,436(r31)
	REX_STORE_U8(r31.u32 + 436, r30.u8);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_821854A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82189710) {
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
	ctx.lr = 0x82189718;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x82428fe8
	ctx.lr = 0x82189730;
	sub_82428FE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821897b4
	if (ctx.cr0.eq) goto loc_821897B4;
	// mulli r11,r28,3
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(3));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// mulli r11,r11,14424
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(14424));
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// lwz r11,980(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 980);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,8(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x821897ac
	if (ctx.cr6.eq) goto loc_821897AC;
	// li r8,100
	ctx.r8.s64 = 100;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stb r7,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r7.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,960(r31)
	REX_STORE_U32(r31.u32 + 960, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r11,964(r31)
	REX_STORE_U32(r31.u32 + 964, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821894f0
	ctx.lr = 0x821897A0;
	sub_821894F0(ctx, base);
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// stw r11,972(r31)
	REX_STORE_U32(r31.u32 + 972, ctx.r11.u32);
	// b 0x821897b4
	goto loc_821897B4;
loc_821897AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_821897B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8218CFC8) {
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
	ctx.lr = 0x8218CFD0;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r30,r11,30636
	r30.s64 = ctx.r11.s64 + 30636;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,30652(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 30652);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8218d020
	if (!ctx.cr0.eq) goto loc_8218D020;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,12(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stfs f31,4(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f31,8(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// stw r11,30652(r10)
	REX_STORE_U32(ctx.r10.u32 + 30652, ctx.r11.u32);
	// lfs f0,17220(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
loc_8218D020:
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// rlwinm. r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r31,r9,30620
	r31.s64 = ctx.r9.s64 + 30620;
	// bne 0x8218d050
	if (!ctx.cr0.eq) goto loc_8218D050;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stfs f31,4(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f31,8(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stw r11,30652(r10)
	REX_STORE_U32(ctx.r10.u32 + 30652, ctx.r11.u32);
	// lfs f0,16780(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16780);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
loc_8218D050:
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8218d080
	if (!ctx.cr0.eq) goto loc_8218D080;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r9,30604
	ctx.r7.s64 = ctx.r9.s64 + 30604;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,30652(r10)
	REX_STORE_U32(ctx.r10.u32 + 30652, ctx.r11.u32);
	// lfs f0,2512(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2512);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,12(r7)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// stfs f0,30604(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 30604, temp.u32);
	// stfs f31,4(r7)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f31,8(r7)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r7.u32 + 8, temp.u32);
loc_8218D080:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8218cc78
	ctx.lr = 0x8218D08C;
	sub_8218CC78(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r29,6272
	ctx.r3.s64 = r29.s64 + 6272;
	// bl 0x8215bcc8
	ctx.lr = 0x8218D0A0;
	sub_8215BCC8(ctx, base);
	// stfs f31,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1bf0
	ctx.lr = 0x8218D0B8;
	sub_820E1BF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a6b40
	ctx.lr = 0x8218D0C0;
	sub_821A6B40(ctx, base);
	// lwz r11,5564(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 5564);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x8218d0e4
	if (ctx.cr6.lt) goto loc_8218D0E4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8219cb70
	ctx.lr = 0x8218D0DC;
	sub_8219CB70(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x8218d0f0
	goto loc_8218D0F0;
loc_8218D0E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8219cb70
	ctx.lr = 0x8218D0EC;
	sub_8219CB70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8218D0F0:
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218fe60
	ctx.lr = 0x8218D110;
	sub_8218FE60(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8218d134
	if (!ctx.cr6.eq) goto loc_8218D134;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a13a8
	ctx.lr = 0x8218D134;
	sub_821A13A8(ctx, base);
loc_8218D134:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82193CD8) {
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
	// bl 0x82192ed8
	ctx.lr = 0x82193CF0;
	sub_82192ED8(ctx, base);
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r10,r10,-32736
	ctx.r10.s64 = ctx.r10.s64 + -32736;
	// stw r11,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// bl 0x82102738
	ctx.lr = 0x82193D08;
	sub_82102738(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82106460
	ctx.lr = 0x82193D20;
	sub_82106460(ctx, base);
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

DEFINE_REX_FUNC(sub_82195B18) {
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
	// lwz r31,128(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82195b54
	if (ctx.cr6.eq) goto loc_82195B54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e48c0
	ctx.lr = 0x82195B44;
	sub_820E48C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x82195B4C;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,128(r30)
	REX_STORE_U32(r30.u32 + 128, ctx.r11.u32);
loc_82195B54:
	// lwz r3,140(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 140);
	// bl 0x820e73c0
	ctx.lr = 0x82195B5C;
	sub_820E73C0(ctx, base);
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

DEFINE_REX_FUNC(sub_82198410) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// addi r7,r3,80
	ctx.r7.s64 = ctx.r3.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,190
	ctx.r10.s64 = 190;
	// addi r8,r3,104
	ctx.r8.s64 = ctx.r3.s64 + 104;
loc_82198420:
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// blt cr6,0x8219843c
	if (ctx.cr6.lt) goto loc_8219843C;
	// li r9,5
	ctx.r9.s64 = 5;
loc_8219843C:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// lwzu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r6,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r10,r10,85
	ctx.r10.s64 = ctx.r10.s64 + 85;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,84(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 84, temp.u32);
	// b 0x82198420
	goto loc_82198420;
}

DEFINE_REX_FUNC(sub_82199E58) {
	REX_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82199e84
	if (!ctx.cr0.eq) goto loc_82199E84;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82199e7c
	if (ctx.cr0.lt) goto loc_82199E7C;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82199e84
	if (!ctx.cr6.gt) goto loc_82199E84;
loc_82199E7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82199E84:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219A7D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8219A7E0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lbz r9,2(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r30,r9
	r30.s64 = ctx.r9.s8;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,125
	ctx.r10.s64 = ctx.r10.s64 + 125;
	// mulli r8,r30,136
	ctx.r8.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(136));
	// lbzx r28,r8,r10
	r28.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8219a8a0
	if (ctx.cr6.eq) goto loc_8219A8A0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219a88c
	if (ctx.cr6.eq) goto loc_8219A88C;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mulli r10,r30,14
	ctx.r10.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(14));
	// addi r11,r11,32056
	ctx.r11.s64 = ctx.r11.s64 + 32056;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8219a868
	if (ctx.cr6.eq) goto loc_8219A868;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// mulli r11,r11,14
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(14));
	// addi r10,r10,-9860
	ctx.r10.s64 = ctx.r10.s64 + -9860;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8219A868:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82114b78
	ctx.lr = 0x8219A874;
	sub_82114B78(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, ctx.r10.u32);
loc_8219A88C:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, r28.u32);
loc_8219A8A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x82114c18
	ctx.lr = 0x8219A8AC;
	sub_82114C18(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82114c18
	ctx.lr = 0x8219A8BC;
	sub_82114C18(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8219D3E4) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219D508) {
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
	// bl 0x822d4e70
	ctx.lr = 0x8219D510;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x822d4f1c
	ctx.lr = 0x8219D518;
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,60(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r22,0
	r22.s64 = 0;
	// lwz r28,4(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8219d790
	if (ctx.cr6.eq) goto loc_8219D790;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r27,r11,-20
	r27.s64 = ctx.r11.s64 + -20;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// lfs f21,15944(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15944);
	f21.f64 = double(temp.f32);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lfs f24,2000(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2000);
	f24.f64 = double(temp.f32);
	// lfs f23,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	f23.f64 = double(temp.f32);
	// addi r24,r11,6248
	r24.s64 = ctx.r11.s64 + 6248;
	// lfs f22,1996(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1996);
	f22.f64 = double(temp.f32);
	// addi r23,r10,-28740
	r23.s64 = ctx.r10.s64 + -28740;
loc_8219D56C:
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// addi r9,r28,36
	ctx.r9.s64 = r28.s64 + 36;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8219d590
	if (!ctx.cr6.eq) goto loc_8219D590;
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8219d5a8
	goto loc_8219D5A8;
loc_8219D590:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
loc_8219D5A8:
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// lwz r10,12(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8219d5c4
	if (!ctx.cr6.eq) goto loc_8219D5C4;
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8219d5dc
	goto loc_8219D5DC;
loc_8219D5C4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
loc_8219D5DC:
	// lwz r10,52(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 52);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219d670
	if (ctx.cr6.eq) goto loc_8219D670;
	// lwz r9,28(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8219d614
	if (ctx.cr6.eq) goto loc_8219D614;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r6,r9
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
loc_8219D614:
	// fcmpu cr6,f0,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f22.f64);
	// bge cr6,0x8219d620
	if (!ctx.cr6.lt) goto loc_8219D620;
	// fmr f0,f22
	ctx.f0.f64 = f22.f64;
loc_8219D620:
	// lhz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// lhz r10,10(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f12,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r9,86(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lfsux f30,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	f30.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfs f31,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f31.f64 = double(temp.f32);
	// lfs f0,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f27,f0,f30
	f27.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fsubs f28,f12,f31
	f28.f64 = double(float(ctx.f12.f64 - f31.f64));
	// b 0x8219d680
	goto loc_8219D680;
loc_8219D670:
	// fmr f31,f22
	ctx.fpscr.disableFlushMode();
	f31.f64 = f22.f64;
	// fmr f30,f22
	f30.f64 = f22.f64;
	// fmr f28,f23
	f28.f64 = f23.f64;
	// fmr f27,f23
	f27.f64 = f23.f64;
loc_8219D680:
	// lwz r11,44(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// lfs f0,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219d6a4
	if (ctx.cr6.eq) goto loc_8219D6A4;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
loc_8219D6A4:
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// lfs f12,248(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,56(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 56);
	// fmuls f2,f12,f13
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r30,r11,84
	r30.s64 = ctx.r11.s64 + 84;
	// lfs f13,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r28,212
	ctx.r7.s64 = r28.s64 + 212;
	// fmuls f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// bl 0x8218a980
	ctx.lr = 0x8219D6E0;
	sub_8218A980(ctx, base);
	// li r29,16
	r29.s64 = 16;
	// fmadds f26,f27,f24,f30
	ctx.fpscr.disableFlushMode();
	f26.f64 = double(float(std::fma(f27.f64, f24.f64, f30.f64)));
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// fmadds f25,f28,f24,f31
	f25.f64 = double(float(std::fma(f28.f64, f24.f64, f31.f64)));
loc_8219D6F0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x8219d6fc
	if (!ctx.cr6.eq) goto loc_8219D6FC;
	// addi r31,r31,-256
	r31.s64 = r31.s64 + -256;
loc_8219D6FC:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stfs f0,36(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 36, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 40, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 44, temp.u32);
	// stfs f26,20(r27)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r27.u32 + 20, temp.u32);
	// stfs f25,24(r27)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r27.u32 + 24, temp.u32);
	// stfs f29,64(r27)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r27.u32 + 64, temp.u32);
	// addi r27,r27,64
	r27.s64 = r27.s64 + 64;
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfsu f1,16(r31)
	ea = 16 + r31.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	r31.u32 = ea;
	// stfs f0,36(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 36, temp.u32);
	// stfs f13,40(r27)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r27.u32 + 40, temp.u32);
	// stfs f12,44(r27)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r27.u32 + 44, temp.u32);
	// bl 0x820e00c0
	ctx.lr = 0x8219D74C;
	sub_820E00C0(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 + f23.f64));
	// fsubs f13,f13,f23
	ctx.f13.f64 = double(float(ctx.f13.f64 - f23.f64));
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// fmuls f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 * f24.f64));
	// fmuls f13,f13,f21
	ctx.f13.f64 = double(float(ctx.f13.f64 * f21.f64));
	// fmadds f0,f0,f27,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f27.f64, f30.f64)));
	// stfs f0,20(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 20, temp.u32);
	// fmadds f0,f13,f28,f31
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f28.f64, f31.f64)));
	// stfs f0,24(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 24, temp.u32);
	// stfsu f29,64(r27)
	ea = 64 + r27.u32;
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ea, temp.u32);
	r27.u32 = ea;
	// bge 0x8219d6f0
	if (!ctx.cr0.lt) goto loc_8219D6F0;
	// lwz r28,4(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8219d56c
	if (!ctx.cr6.eq) goto loc_8219D56C;
loc_8219D790:
	// mulli r11,r22,34
	ctx.r11.s64 = static_cast<int64_t>(r22.u64 * static_cast<uint64_t>(34));
	// sth r11,8(r26)
	REX_STORE_U16(r26.u32 + 8, ctx.r11.u16);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x8219d7a8
	if (ctx.cr6.eq) goto loc_8219D7A8;
	// lbz r3,24(r26)
	ctx.r3.u64 = REX_LOAD_U8(r26.u32 + 24);
	// bl 0x8218c0a8
	ctx.lr = 0x8219D7A8;
	sub_8218C0A8(ctx, base);
loc_8219D7A8:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x822d4f68
	ctx.lr = 0x8219D7B4;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_821A9CE0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-12008(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -12008);
	// addi r11,r11,-997
	ctx.r11.s64 = ctx.r11.s64 + -997;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A9F70) {
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
	ctx.lr = 0x821A9F78;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822095c0
	ctx.lr = 0x821A9F94;
	sub_822095C0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x822d5870
	ctx.lr = 0x821A9FB0;
	sub_822D5870(ctx, base);
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822097e8
	ctx.lr = 0x821A9FD4;
	sub_822097E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a9ff4
	if (ctx.cr0.eq) goto loc_821A9FF4;
loc_821A9FDC:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_821A9FE0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82208848
	ctx.lr = 0x821A9FE8;
	sub_82208848(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed4
	return;
loc_821A9FF4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821aa008
	if (!ctx.cr6.eq) goto loc_821AA008;
	// li r31,-1
	r31.s64 = -1;
	// b 0x821a9fe0
	goto loc_821A9FE0;
loc_821AA008:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lis r29,-32174
	r29.s64 = -2108555264;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r4,28840(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 28840);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82209888
	ctx.lr = 0x821AA030;
	sub_82209888(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x821a9fdc
	if (!ctx.cr6.eq) goto loc_821A9FDC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82208d78
	ctx.lr = 0x821AA048;
	sub_82208D78(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x821aa0d0
	if (!ctx.cr0.eq) goto loc_821AA0D0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r11,7848
	ctx.r3.s64 = ctx.r11.s64 + 7848;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x822099f8
	ctx.lr = 0x821AA074;
	sub_822099F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821aa0c8
	if (ctx.cr6.eq) goto loc_821AA0C8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,320(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 320);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,312(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 312);
	// bl 0x82209bf0
	ctx.lr = 0x821AA094;
	sub_82209BF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821aa0b4
	if (ctx.cr0.eq) goto loc_821AA0B4;
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 316);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821aa0bc
	if (!ctx.cr6.gt) goto loc_821AA0BC;
	// li r30,1392
	r30.s64 = 1392;
	// b 0x821aa0bc
	goto loc_821AA0BC;
loc_821AA0B4:
	// bl 0x822098c8
	ctx.lr = 0x821AA0B8;
	sub_822098C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_821AA0BC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82208848
	ctx.lr = 0x821AA0C4;
	sub_82208848(ctx, base);
	// b 0x821aa0d0
	goto loc_821AA0D0;
loc_821AA0C8:
	// bl 0x822098c8
	ctx.lr = 0x821AA0CC;
	sub_822098C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_821AA0D0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,28840(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 28840);
	// bl 0x822097e0
	ctx.lr = 0x821AA0DC;
	sub_822097E0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82208d78
	ctx.lr = 0x821AA0EC;
	sub_82208D78(ctx, base);
	// mr r31,r30
	r31.u64 = r30.u64;
	// b 0x821a9fe0
	goto loc_821A9FE0;
}

DEFINE_REX_FUNC(sub_821B1510) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821B1518;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82187b58
	ctx.lr = 0x821B1520;
	sub_82187B58(ctx, base);
	// lis r31,-32168
	r31.s64 = -2108162048;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,-9784(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + -9784);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b1560
	if (ctx.cr6.eq) goto loc_821B1560;
	// bl 0x82187ff8
	ctx.lr = 0x821B1538;
	sub_82187FF8(ctx, base);
	// lwz r3,-9784(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -9784);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b1560
	if (ctx.cr6.eq) goto loc_821B1560;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B1558;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9784(r31)
	REX_STORE_U32(r31.u32 + -9784, ctx.r11.u32);
loc_821B1560:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9828(r10)
	REX_STORE_U32(ctx.r10.u32 + -9828, ctx.r11.u32);
	// bl 0x820eee80
	ctx.lr = 0x821B1570;
	sub_820EEE80(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
	// lhz r11,30(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 30);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x821b158c
	if (!ctx.cr6.eq) goto loc_821B158C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82188648
	ctx.lr = 0x821B158C;
	sub_82188648(ctx, base);
loc_821B158C:
	// lis r31,-32168
	r31.s64 = -2108162048;
	// lwz r3,-9804(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -9804);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b15b8
	if (ctx.cr6.eq) goto loc_821B15B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B15B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9804(r31)
	REX_STORE_U32(r31.u32 + -9804, ctx.r11.u32);
loc_821B15B8:
	// lis r31,-32168
	r31.s64 = -2108162048;
	// lwz r11,-9800(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -9800);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b1600
	if (ctx.cr6.eq) goto loc_821B1600;
	// lwz r10,-8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821b15f4
	if (ctx.cr6.eq) goto loc_821B15F4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B15F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821b15f8
	goto loc_821B15F8;
loc_821B15F4:
	// bl 0x822c80a8
	ctx.lr = 0x821B15F8;
	sub_822C80A8(ctx, base);
loc_821B15F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9800(r31)
	REX_STORE_U32(r31.u32 + -9800, ctx.r11.u32);
loc_821B1600:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,84
	ctx.r3.s64 = r29.s64 + 84;
	// bl 0x821d6b90
	ctx.lr = 0x821B160C;
	sub_821D6B90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821B8B30) {
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
	ctx.lr = 0x821B8B38;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,432
	ctx.r10.s64 = ctx.r11.s64 + 432;
	// li r28,0
	r28.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// li r27,1
	r27.s64 = 1;
	// li r26,0
	r26.s64 = 0;
	// lwz r11,516(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 516);
	// lwz r9,736(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 736);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,516(r10)
	REX_STORE_U32(ctx.r10.u32 + 516, ctx.r11.u32);
	// beq 0x821b8c78
	if (ctx.cr0.eq) goto loc_821B8C78;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// addi r31,r11,-7072
	r31.s64 = ctx.r11.s64 + -7072;
	// beq cr6,0x821b8ba0
	if (ctx.cr6.eq) goto loc_821B8BA0;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// beq cr6,0x821b8b98
	if (ctx.cr6.eq) goto loc_821B8B98;
	// addi r11,r9,-9
	ctx.r11.s64 = ctx.r9.s64 + -9;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r26,r11,27,31,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x821b8bc0
	goto loc_821B8BC0;
loc_821B8B98:
	// li r26,2
	r26.s64 = 2;
	// b 0x821b8bc0
	goto loc_821B8BC0;
loc_821B8BA0:
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lha r30,88(r31)
	r30.s64 = int16_t(REX_LOAD_U16(r31.u32 + 88));
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lha r28,100(r31)
	r28.s64 = int16_t(REX_LOAD_U16(r31.u32 + 100));
	// ori r8,r8,3784
	ctx.r8.u64 = ctx.r8.u64 | 3784;
	// ori r7,r7,3796
	ctx.r7.u64 = ctx.r7.u64 | 3796;
	// lhax r29,r31,r8
	r29.s64 = int16_t(REX_LOAD_U16(r31.u32 + ctx.r8.u32));
	// lhax r27,r31,r7
	r27.s64 = int16_t(REX_LOAD_U16(r31.u32 + ctx.r7.u32));
loc_821B8BC0:
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// beq cr6,0x821b8c0c
	if (ctx.cr6.eq) goto loc_821B8C0C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821d7468
	ctx.lr = 0x821B8BD4;
	sub_821D7468(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x821d7468
	ctx.lr = 0x821B8BE0;
	sub_821D7468(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821b1da8
	ctx.lr = 0x821B8BF0;
	sub_821B1DA8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d7268
	ctx.lr = 0x821B8C08;
	sub_821D7268(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_821B8C0C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821cb730
	ctx.lr = 0x821B8C20;
	sub_821CB730(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821cb730
	ctx.lr = 0x821B8C38;
	sub_821CB730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lha r3,90(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 90));
	// bl 0x821d7648
	ctx.lr = 0x821B8C48;
	sub_821D7648(ctx, base);
	// sth r3,140(r31)
	REX_STORE_U16(r31.u32 + 140, ctx.r3.u16);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r11,r10,3786
	ctx.r11.u64 = ctx.r10.u64 | 3786;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhax r3,r31,r11
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + ctx.r11.u32));
	// bl 0x821d7648
	ctx.lr = 0x821B8C64;
	sub_821D7648(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,3836
	ctx.r10.u64 = ctx.r10.u64 | 3836;
	// sthx r3,r31,r10
	REX_STORE_U16(r31.u32 + ctx.r10.u32, ctx.r3.u16);
	// bl 0x821b8a28
	ctx.lr = 0x821B8C74;
	sub_821B8A28(ctx, base);
	// b 0x821b8cc8
	goto loc_821B8CC8;
loc_821B8C78:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212be90
	ctx.lr = 0x821B8C80;
	sub_8212BE90(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,-7072
	r31.s64 = ctx.r11.s64 + -7072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c54e0
	ctx.lr = 0x821B8C94;
	sub_821C54E0(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c54e0
	ctx.lr = 0x821B8CA4;
	sub_821C54E0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,2
	ctx.r11.s64 = 2;
	// ori r9,r10,23116
	ctx.r9.u64 = ctx.r10.u64 | 23116;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r10,19420(r31)
	REX_STORE_U32(r31.u32 + 19420, ctx.r10.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stwx r11,r31,r9
	REX_STORE_U32(r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x821d3060
	ctx.lr = 0x821B8CC8;
	sub_821D3060(ctx, base);
loc_821B8CC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821BFA90) {
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
	// lha r4,0(r5)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r5.u32 + 0));
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,10024(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 10024);
	// bl 0x821bf940
	ctx.lr = 0x821BFAAC;
	sub_821BF940(ctx, base);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C0618) {
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
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r11,187(r3)
	REX_STORE_U8(ctx.r3.u32 + 187, ctx.r11.u8);
	// stb r11,194(r3)
	REX_STORE_U8(ctx.r3.u32 + 194, ctx.r11.u8);
	// stb r11,217(r3)
	REX_STORE_U8(ctx.r3.u32 + 217, ctx.r11.u8);
	// stb r11,195(r3)
	REX_STORE_U8(ctx.r3.u32 + 195, ctx.r11.u8);
	// stb r11,193(r3)
	REX_STORE_U8(ctx.r3.u32 + 193, ctx.r11.u8);
	// stw r11,5792(r3)
	REX_STORE_U32(ctx.r3.u32 + 5792, ctx.r11.u32);
	// stw r11,5796(r3)
	REX_STORE_U32(ctx.r3.u32 + 5796, ctx.r11.u32);
	// stw r9,5800(r3)
	REX_STORE_U32(ctx.r3.u32 + 5800, ctx.r9.u32);
	// stw r11,5780(r3)
	REX_STORE_U32(ctx.r3.u32 + 5780, ctx.r11.u32);
	// stw r11,5784(r3)
	REX_STORE_U32(ctx.r3.u32 + 5784, ctx.r11.u32);
	// stw r9,5804(r3)
	REX_STORE_U32(ctx.r3.u32 + 5804, ctx.r9.u32);
	// stw r11,5900(r3)
	REX_STORE_U32(ctx.r3.u32 + 5900, ctx.r11.u32);
	// stw r11,5904(r3)
	REX_STORE_U32(ctx.r3.u32 + 5904, ctx.r11.u32);
	// stw r11,5908(r3)
	REX_STORE_U32(ctx.r3.u32 + 5908, ctx.r11.u32);
	// lhz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c06f0
	if (ctx.cr0.eq) goto loc_821C06F0;
	// lwz r11,19672(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 19672);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821c06f0
	if (!ctx.cr6.eq) goto loc_821C06F0;
	// lhz r11,10(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r4,r4,65533
	ctx.r4.u64 = ctx.r4.u64 | 65533;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c06d4
	if (ctx.cr0.eq) goto loc_821C06D4;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// addi r10,r9,23240
	ctx.r10.s64 = ctx.r9.s64 + 23240;
	// mulli r7,r8,284
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(284));
	// lwz r11,23240(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 23240);
	// addi r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 + 52;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c06d4
	if (ctx.cr0.eq) goto loc_821C06D4;
	// lis r4,6
	ctx.r4.s64 = 393216;
	// ori r4,r4,61632
	ctx.r4.u64 = ctx.r4.u64 | 61632;
loc_821C06D4:
	// addi r31,r3,6272
	r31.s64 = ctx.r3.s64 + 6272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215bc88
	ctx.lr = 0x821C06E0;
	sub_8215BC88(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215bc48
	ctx.lr = 0x821C06F0;
	sub_8215BC48(ctx, base);
loc_821C06F0:
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

DEFINE_REX_FUNC(sub_821C2F08) {
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
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x821c2fe4
	if (!ctx.cr6.eq) goto loc_821C2FE4;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x821c2f50
	if (ctx.cr6.eq) goto loc_821C2F50;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bne cr6,0x821c2f84
	if (!ctx.cr6.eq) goto loc_821C2F84;
loc_821C2F44:
	// lhz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 88);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bne cr6,0x821c2f8c
	if (!ctx.cr6.eq) goto loc_821C2F8C;
loc_821C2F50:
	// lwz r11,19668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19668);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821c3030
	if (!ctx.cr6.eq) goto loc_821C3030;
	// lhz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 88);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821c2f70
	if (ctx.cr6.eq) goto loc_821C2F70;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x821c2f7c
	if (!ctx.cr6.eq) goto loc_821C2F7C;
loc_821C2F70:
	// bl 0x821e0c00
	ctx.lr = 0x821C2F74;
	sub_821E0C00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821c2fc4
	if (!ctx.cr6.eq) goto loc_821C2FC4;
loc_821C2F7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821c3034
	goto loc_821C3034;
loc_821C2F84:
	// cmpwi cr6,r10,18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18, ctx.xer);
	// beq cr6,0x821c2f44
	if (ctx.cr6.eq) goto loc_821C2F44;
loc_821C2F8C:
	// lwz r11,19668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19668);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821c3030
	if (!ctx.cr6.eq) goto loc_821C3030;
	// lwz r11,19672(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19672);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821c2fbc
	if (ctx.cr6.eq) goto loc_821C2FBC;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-7176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7176);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821c2fbc
	if (ctx.cr6.eq) goto loc_821C2FBC;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x821c3030
	if (!ctx.cr6.eq) goto loc_821C3030;
loc_821C2FBC:
	// lwz r11,19676(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19676);
	// b 0x821c2fd8
	goto loc_821C2FD8;
loc_821C2FC4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x821c3030
	if (!ctx.cr6.gt) goto loc_821C3030;
	// lwz r11,19672(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19672);
loc_821C2FD8:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821c3030
	if (!ctx.cr6.eq) goto loc_821C3030;
	// b 0x821c2f7c
	goto loc_821C2F7C;
loc_821C2FE4:
	// lwz r11,19668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19668);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821c3030
	if (!ctx.cr6.eq) goto loc_821C3030;
	// lwz r11,19672(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19672);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821c3020
	if (ctx.cr6.eq) goto loc_821C3020;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-7176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7176);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821c3020
	if (ctx.cr6.eq) goto loc_821C3020;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821c3030
	if (!ctx.cr6.eq) goto loc_821C3030;
loc_821C3020:
	// lwz r11,19676(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19676);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821c3034
	if (ctx.cr6.eq) goto loc_821C3034;
loc_821C3030:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C3034:
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

DEFINE_REX_FUNC(sub_821C5ED8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e80
	ctx.lr = 0x821C5EE0;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f34
	ctx.lr = 0x821C5EE8;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r26,r11,-9504
	r26.s64 = ctx.r11.s64 + -9504;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r10,432
	r27.s64 = ctx.r10.s64 + 432;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stwx r8,r9,r26
	REX_STORE_U32(ctx.r9.u32 + r26.u32, ctx.r8.u32);
	// stfs f31,10716(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 10716, temp.u32);
	// stfs f31,10708(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 10708, temp.u32);
	// lhz r11,10(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 10);
	// fmr f28,f31
	f28.f64 = f31.f64;
	// addi r30,r10,23240
	r30.s64 = ctx.r10.s64 + 23240;
	// fmr f29,f31
	f29.f64 = f31.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmr f27,f31
	f27.f64 = f31.f64;
	// beq 0x821c60c8
	if (ctx.cr0.eq) goto loc_821C60C8;
	// lwz r11,40(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 40);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821c60c8
	if (!ctx.cr0.gt) goto loc_821C60C8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x821c60c8
	if (ctx.cr6.gt) goto loc_821C60C8;
	// lbz r7,188(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 188);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne 0x821c5fd8
	if (!ctx.cr0.eq) goto loc_821C5FD8;
	// lbz r11,180(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 180);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c5fd8
	if (!ctx.cr0.eq) goto loc_821C5FD8;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// addi r9,r30,20
	ctx.r9.s64 = r30.s64 + 20;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r8,r11,284
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// and. r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821c5fd8
	if (ctx.cr0.eq) goto loc_821C5FD8;
	// lbz r9,192(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 192);
	// lbz r8,164(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 164);
	// or. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821c5fb4
	if (ctx.cr0.eq) goto loc_821C5FB4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,16644(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16644);
	f29.f64 = double(temp.f32);
	// b 0x821c5fdc
	goto loc_821C5FDC;
loc_821C5FB4:
	// mulli r9,r11,284
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// addi r8,r30,20
	ctx.r8.s64 = r30.s64 + 20;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r30,572
	ctx.r6.s64 = r30.s64 + 572;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f29,r11,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	f29.f64 = double(temp.f32);
	// b 0x821c5fdc
	goto loc_821C5FDC;
loc_821C5FD8:
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	f29.f64 = f31.f64;
loc_821C5FDC:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r9,r30,60
	ctx.r9.s64 = r30.s64 + 60;
	// fmr f28,f31
	ctx.fpscr.disableFlushMode();
	f28.f64 = f31.f64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r8,r11,284
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// and. r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821c6034
	if (ctx.cr0.eq) goto loc_821C6034;
	// mulli r8,r11,284
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// addi r6,r30,60
	ctx.r6.s64 = r30.s64 + 60;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r30,572
	ctx.r5.s64 = r30.s64 + 572;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f0,16904(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16904);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r5
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f27,f13,f0
	f27.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x821c6038
	goto loc_821C6038;
loc_821C6034:
	// fmr f27,f31
	ctx.fpscr.disableFlushMode();
	f27.f64 = f31.f64;
loc_821C6038:
	// mulli r9,r11,284
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// addi r8,r30,96
	ctx.r8.s64 = r30.s64 + 96;
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r6,r10,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// and. r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821c60cc
	if (ctx.cr0.eq) goto loc_821C60CC;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821c60cc
	if (!ctx.cr6.eq) goto loc_821C60CC;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbz r9,188(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 188);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821c60cc
	if (!ctx.cr0.eq) goto loc_821C60CC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,5732(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5732);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16308(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16308);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821c60cc
	if (!ctx.cr6.gt) goto loc_821C60CC;
	// mulli r10,r11,284
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// lfs f0,10312(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10312);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5736(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5736);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// addi r9,r30,96
	ctx.r9.s64 = r30.s64 + 96;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r30,572
	ctx.r8.s64 = r30.s64 + 572;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f30,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	f30.f64 = double(temp.f32);
	// bl 0x820e00c0
	ctx.lr = 0x821C60B8;
	sub_820E00C0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f28,f0,f30
	f28.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fmadds f29,f13,f30,f29
	f29.f64 = double(float(std::fma(ctx.f13.f64, f30.f64, f29.f64)));
loc_821C60C8:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_821C60CC:
	// addic. r11,r31,15908
	ctx.xer.ca = r31.u32 > 4294951387;
	ctx.r11.s64 = r31.s64 + 15908;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c617c
	if (ctx.cr0.eq) goto loc_821C617C;
	// lfs f30,5680(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5680);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(f30.f64, f31.f64);
	// ble cr6,0x821c617c
	if (!ctx.cr6.gt) goto loc_821C617C;
	// addi r29,r31,10324
	r29.s64 = r31.s64 + 10324;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822d4fa0
	ctx.lr = 0x821C60F4;
	sub_822D4FA0(ctx, base);
	// lwz r11,10140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10140);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// addi r5,r31,5684
	ctx.r5.s64 = r31.s64 + 5684;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,32124(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32124);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r11,20028
	r28.s64 = ctx.r11.s64 + 20028;
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 * ctx.f0.f64));
	// bl 0x820e13b8
	ctx.lr = 0x821C611C;
	sub_820E13B8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x820e0af8
	ctx.lr = 0x821C6128;
	sub_820E0AF8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e0250
	ctx.lr = 0x821C6134;
	sub_820E0250(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x820e0590
	ctx.lr = 0x821C6144;
	sub_820E0590(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x820e0590
	ctx.lr = 0x821C6154;
	sub_820E0590(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e0590
	ctx.lr = 0x821C6164;
	sub_820E0590(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,5680(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5680);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12296(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12296);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,5680(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5680, temp.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_821C617C:
	// lbz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 212);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c633c
	if (!ctx.cr0.eq) goto loc_821C633C;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r9,r30,24
	ctx.r9.s64 = r30.s64 + 24;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r8,r11,284
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821c6230
	if (ctx.cr0.eq) goto loc_821C6230;
	// lbz r10,192(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 192);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821c6230
	if (!ctx.cr0.eq) goto loc_821C6230;
	// lbz r10,164(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 164);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821c6230
	if (!ctx.cr0.eq) goto loc_821C6230;
	// lbz r10,188(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 188);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821c6230
	if (!ctx.cr0.eq) goto loc_821C6230;
	// lbz r10,180(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 180);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821c6230
	if (!ctx.cr0.eq) goto loc_821C6230;
	// lfs f12,5652(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5652);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,10580(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10580);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f0,10184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,5660(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5660);
	ctx.f10.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f11,10564(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10564);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,10588(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10588);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,10572(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10572);
	ctx.f9.f64 = double(temp.f32);
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fmuls f10,f9,f0
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f0,16908(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16908);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfs f13,10708(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 10708, temp.u32);
	// fmadds f0,f12,f0,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f10.f64)));
	// stfs f0,10716(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10716, temp.u32);
	// stwx r9,r11,r26
	REX_STORE_U32(ctx.r11.u32 + r26.u32, ctx.r9.u32);
	// b 0x821c6290
	goto loc_821C6290;
loc_821C6230:
	// lfs f0,10184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,10588(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10588);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,10572(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10572);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,10564(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10564);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// lfs f10,10580(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10580);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f11,f0,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f10.f64)));
	// lfs f12,5660(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5660);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,5652(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5652);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,10492(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10492);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,10484(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10484);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f13,10492(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 10492, temp.u32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,10484(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10484, temp.u32);
	// lhz r11,10(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c6290
	if (ctx.cr0.eq) goto loc_821C6290;
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// stfs f0,10484(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10484, temp.u32);
	// fadds f0,f13,f29
	ctx.f0.f64 = double(float(ctx.f13.f64 + f29.f64));
	// stfs f0,10492(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10492, temp.u32);
loc_821C6290:
	// lhz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 604);
	// lfs f0,10584(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10584);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,10568(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10568);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// beq cr6,0x821c639c
	if (ctx.cr6.eq) goto loc_821C639C;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x821c6308
	if (ctx.cr6.eq) goto loc_821C6308;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821c62cc
	if (!ctx.cr6.gt) goto loc_821C62CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,32352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32352);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821c62e0
	if (ctx.cr6.lt) goto loc_821C62E0;
	// b 0x821c62dc
	goto loc_821C62DC;
loc_821C62CC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-11764(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11764);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821c62e0
	if (ctx.cr6.gt) goto loc_821C62E0;
loc_821C62DC:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_821C62E0:
	// lfs f13,10488(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10488);
	ctx.f13.f64 = double(temp.f32);
	// lbz r11,191(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 191);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,10488(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10488, temp.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c639c
	if (ctx.cr0.eq) goto loc_821C639C;
	// lfs f0,10240(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10240);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + f27.f64));
	// b 0x821c6334
	goto loc_821C6334;
loc_821C6308:
	// lfs f13,10488(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10488);
	ctx.f13.f64 = double(temp.f32);
	// lbz r11,191(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 191);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,10488(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10488, temp.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c639c
	if (ctx.cr0.eq) goto loc_821C639C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,10568(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10568);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,10240(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10240);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,16628(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16628);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f12,f0,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64)));
loc_821C6334:
	// stfs f0,10568(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10568, temp.u32);
	// b 0x821c639c
	goto loc_821C639C;
loc_821C633C:
	// lfs f0,10568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10568);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,10240(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10240);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,10564(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10564);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,10572(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10572);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,10484(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10484);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,16688(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16688);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,16232(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16232);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f10,10492(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10492);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,10572(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10572, temp.u32);
	// lfs f8,10488(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10488);
	ctx.f8.f64 = double(temp.f32);
	// stfs f11,10564(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 10564, temp.u32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f13,10568(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 10568, temp.u32);
	// fadds f12,f11,f9
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f12,10484(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 10484, temp.u32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,10492(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10492, temp.u32);
	// fadds f0,f8,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f0,10488(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10488, temp.u32);
loc_821C639C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,10484(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-30080(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30080);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x821c63b4
	if (ctx.cr6.gt) goto loc_821C63B4;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_821C63B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,10484(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 10484, temp.u32);
	// lfs f11,2344(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2344);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blt cr6,0x821c63cc
	if (ctx.cr6.lt) goto loc_821C63CC;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
loc_821C63CC:
	// lfs f0,10492(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10492);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,10484(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 10484, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x821c63e0
	if (ctx.cr6.gt) goto loc_821C63E0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_821C63E0:
	// stfs f0,10492(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10492, temp.u32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x821c63f0
	if (ctx.cr6.lt) goto loc_821C63F0;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_821C63F0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,10492(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10492, temp.u32);
	// lfs f0,10488(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10488);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-31156(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31156);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821c640c
	if (ctx.cr6.gt) goto loc_821C640C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821C640C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,10488(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10488, temp.u32);
	// lfs f13,2340(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2340);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821c6424
	if (ctx.cr6.lt) goto loc_821C6424;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821C6424:
	// stfs f0,10488(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10488, temp.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f80
	ctx.lr = 0x821C6434;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821E1F00) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821e2fb8
	ctx.lr = 0x821E1F1C;
	sub_821E2FB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,12152
	ctx.r11.s64 = ctx.r11.s64 + 12152;
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

DEFINE_REX_FUNC(sub_821E2418) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r10,2971(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2971);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e249c
	if (!ctx.cr0.eq) goto loc_821E249C;
	// lbz r10,2973(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2973);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e249c
	if (!ctx.cr0.eq) goto loc_821E249C;
	// lhz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x821e249c
	if (!ctx.cr6.eq) goto loc_821E249C;
	// lha r10,30(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x821e2458
	if (ctx.cr6.lt) goto loc_821E2458;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// ble cr6,0x821e249c
	if (!ctx.cr6.gt) goto loc_821E249C;
loc_821E2458:
	// lbz r9,6(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821e249c
	if (!ctx.cr0.eq) goto loc_821E249C;
	// lbz r9,2(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lwz r11,2980(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2980);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821e249c
	if (!ctx.cr6.eq) goto loc_821E249C;
	// lha r11,5822(r10)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 5822));
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x821e2494
	if (!ctx.cr6.lt) goto loc_821E2494;
	// lha r11,5824(r10)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 5824));
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x821e249c
	if (ctx.cr6.lt) goto loc_821E249C;
loc_821E2494:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821E249C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E4390) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister f29{};
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
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f29.u64);
	// stfd f30,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,116(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f2,120(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f3,124(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// lfs f0,16700(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16700);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16060(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16060);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f30,f3,f0,f13
	f30.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x82204da8
	ctx.lr = 0x821E43DC;
	sub_82204DA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e43fc
	if (ctx.cr0.eq) goto loc_821E43FC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,16120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16120);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 - ctx.f0.f64));
	// lfs f0,16116(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16116);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_821E43FC:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,80
	ctx.r9.s64 = r31.s64 + 80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,7
	ctx.r11.s64 = 7;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne cr6,0x821e4464
	if (!ctx.cr6.eq) goto loc_821E4464;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,26632(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26632);
	ctx.f0.f64 = double(temp.f32);
loc_821E4420:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e4454
	if (ctx.cr6.eq) goto loc_821E4454;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// stfs f29,116(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f30,176(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stfs f30,180(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f13,f13,f0,f31
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, f31.f64)));
	// stfs f13,112(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
loc_821E4454:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x821e4420
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E4420;
	// b 0x821e44c4
	goto loc_821E44C4;
loc_821E4464:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f12,15632(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15632);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,26620(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 26620);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,26632(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 26632);
	ctx.f0.f64 = double(temp.f32);
loc_821E447C:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e44b8
	if (ctx.cr6.eq) goto loc_821E44B8;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// stfs f29,116(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f30,176(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// stfs f30,180(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmadds f11,f11,f0,f31
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, f31.f64)));
	// fadds f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f11,112(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
loc_821E44B8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x821e447c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E447C;
loc_821E44C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EB090) {
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
	// bl 0x822d4e8c
	ctx.lr = 0x821EB098;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// stw r5,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// lbz r11,1823(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1823);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821eb190
	if (!ctx.cr0.eq) goto loc_821EB190;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r31,r11,-528
	r31.s64 = ctx.r11.s64 + -528;
	// lbz r11,7(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 7);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821eb190
	if (ctx.cr0.eq) goto loc_821EB190;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,280
	ctx.r9.s64 = ctx.r1.s64 + 280;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,96
	ctx.r5.s64 = 96;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x821EB10C;
	sub_822D4FA0(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eaa48
	ctx.lr = 0x821EB120;
	sub_821EAA48(ctx, base);
	// lfs f12,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f11,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r10,10016
	r29.s64 = ctx.r10.s64 + 10016;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,96
	ctx.r5.s64 = 96;
	// stw r11,384(r29)
	REX_STORE_U32(r29.u32 + 384, ctx.r11.u32);
	// fsubs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f13,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fnmsubs f12,f11,f0,f30
	ctx.f12.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f0.f64, -f30.f64)));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fnmsubs f0,f13,f0,f31
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -f31.f64)));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x821EB178;
	sub_822D4FA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r3,-2
	ctx.r3.s64 = -2;
	// lwz r4,276(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// bl 0x821eaa48
	ctx.lr = 0x821EB188;
	sub_821EAA48(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821fe738
	ctx.lr = 0x821EB190;
	sub_821FE738(ctx, base);
loc_821EB190:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821EFD98) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x821EFDA0;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f28
	ctx.lr = 0x821EFDA8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,-32032
	r29.s64 = ctx.r11.s64 + -32032;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r30,r11,2
	r30.s64 = ctx.r11.s64 + 2;
	// bl 0x821f28a0
	ctx.lr = 0x821EFDCC;
	sub_821F28A0(ctx, base);
	// lis r28,-32166
	r28.s64 = -2108030976;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,7792(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 7792);
	// lwz r4,1684(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1684);
	// bl 0x821f2908
	ctx.lr = 0x821EFDE0;
	sub_821F2908(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f2bf0
	ctx.lr = 0x821EFDF0;
	sub_821F2BF0(ctx, base);
	// lwz r11,7792(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 7792);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,1668(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1668);
	// bl 0x820e1df8
	ctx.lr = 0x821EFE08;
	sub_820E1DF8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fdivs f29,f31,f0
	f29.f64 = double(float(f31.f64 / ctx.f0.f64));
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x820e1cf8
	ctx.lr = 0x821EFE28;
	sub_820E1CF8(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lfs f12,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r31,24
	ctx.r8.s64 = r31.s64 + 24;
	// lfs f11,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f27,f12,f11
	f27.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f30,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	f30.f64 = double(temp.f32);
	// fmr f26,f0
	f26.f64 = ctx.f0.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r30,12
	ctx.r9.s64 = r30.s64 + 12;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lfs f28,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	f28.f64 = double(temp.f32);
	// lwz r11,7792(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 7792);
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfs f9,1548(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1548);
	ctx.f9.f64 = double(temp.f32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f28,4(r30)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stfs f27,8(r30)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f31,12(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// lfs f24,-13044(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -13044);
	f24.f64 = double(temp.f32);
	// fdivs f25,f31,f10
	f25.f64 = double(float(f31.f64 / ctx.f10.f64));
	// fmuls f29,f13,f29
	f29.f64 = double(float(ctx.f13.f64 * f29.f64));
loc_821EFEA8:
	// lbzx r11,r10,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 * f24.f64));
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821efea8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EFEA8;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// lwz r28,20(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r27,r30
	r27.u64 = r30.u64;
	// b 0x821eff60
	goto loc_821EFF60;
loc_821EFEDC:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// bl 0x820e00c0
	ctx.lr = 0x821EFEF0;
	sub_820E00C0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64));
	// li r11,4
	ctx.r11.s64 = 4;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f30,f25,f30
	f30.f64 = double(float(f25.f64 + f30.f64));
	// stfs f27,8(r30)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,12(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// addi r9,r30,12
	ctx.r9.s64 = r30.s64 + 12;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// fadds f0,f13,f26
	ctx.f0.f64 = double(float(ctx.f13.f64 + f26.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
loc_821EFF34:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 * f24.f64));
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821eff34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EFF34;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
loc_821EFF60:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x821efedc
	if (!ctx.cr6.eq) goto loc_821EFEDC;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x821EFF78;
	sub_822D4FA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821f2c50
	ctx.lr = 0x821EFF98;
	sub_821F2C50(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f74
	ctx.lr = 0x821EFFA4;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821F9730) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// stw r5,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1823(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1823);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821f9790
	if (!ctx.cr0.eq) goto loc_821F9790;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,3380
	ctx.r11.s64 = ctx.r11.s64 + 3380;
	// lbz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f9790
	if (ctx.cr0.eq) goto loc_821F9790;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x821f9498
	ctx.lr = 0x821F9790;
	sub_821F9498(ctx, base);
loc_821F9790:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FA9F8) {
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
	// li r5,1520
	ctx.r5.s64 = 1520;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82204c18
	ctx.lr = 0x821FAA18;
	sub_82204C18(ctx, base);
	// lis r11,5907
	ctx.r11.s64 = 387121152;
	// ori r11,r11,44295
	ctx.r11.u64 = ctx.r11.u64 | 44295;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821FB248) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x821fb280
	if (!ctx.cr6.lt) goto loc_821FB280;
	// clrlwi. r9,r5,31
	ctx.r9.u64 = ctx.r5.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// bne 0x821fb284
	if (!ctx.cr0.eq) goto loc_821FB284;
loc_821FB260:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fb260
	if (ctx.cr0.eq) goto loc_821FB260;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fb284
	if (ctx.cr6.lt) goto loc_821FB284;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821fb284
	goto loc_821FB284;
loc_821FB280:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_821FB284:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FEEC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r11,4
	ctx.r11.s64 = 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,10448
	ctx.r11.s64 = ctx.r11.s64 + 10448;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821FEEE8:
	// rlwinm r6,r10,0,13,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7FFC0;
	// rlwinm r7,r10,19,13,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// rlwinm r5,r9,0,2,8
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F800000;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// xor r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// rlwinm r3,r8,0,3,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1FFFFF00;
	// rlwinm r31,r8,29,3,31
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// xor r6,r5,r4
	ctx.r6.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// xor r5,r3,r31
	ctx.r5.u64 = ctx.r3.u64 ^ r31.u64;
	// rlwinm r7,r7,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r10,12,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFE000;
	// rlwinm r6,r6,9,23,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0x1FF;
	// rlwinm r9,r9,4,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFF80;
	// rlwinm r5,r5,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r8,r8,17,0,10
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFFE00000;
	// xor r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// xor r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 ^ ctx.r9.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// xor r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bdnz 0x821feee8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821FEEE8;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// xor r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r11,r11,9
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFF;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,21056(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 21056);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200A20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,220(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 220);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200B20) {
	REX_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82201AE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82201AF0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r3,244
	r30.s64 = ctx.r3.s64 + 244;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(r31.s32, 8, ctx.xer);
	// bge cr6,0x82201b10
	if (!ctx.cr6.lt) goto loc_82201B10;
loc_82201B08:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x82201b14
	goto loc_82201B14;
loc_82201B10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82201B14:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82201b30
	if (ctx.cr6.eq) goto loc_82201B30;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82201B30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82201B30:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(r31.s32, 8, ctx.xer);
	// blt cr6,0x82201b08
	if (ctx.cr6.lt) goto loc_82201B08;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822033F0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,18544
	ctx.r10.s64 = ctx.r10.s64 + 18544;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82204608) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82204610;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82204670
	if (!ctx.cr0.eq) goto loc_82204670;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822c80d0
	ctx.lr = 0x8220463C;
	sub_822C80D0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822046b0
	if (ctx.cr0.eq) goto loc_822046B0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r29,16(r3)
	REX_STORE_U8(ctx.r3.u32 + 16, r29.u8);
	// addi r8,r10,21336
	ctx.r8.s64 = ctx.r10.s64 + 21336;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// b 0x822046b4
	goto loc_822046B4;
loc_82204670:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822c80d0
	ctx.lr = 0x82204678;
	sub_822C80D0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822046b0
	if (ctx.cr0.eq) goto loc_822046B0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// addi r8,r10,21352
	ctx.r8.s64 = ctx.r10.s64 + 21352;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stb r11,16(r3)
	REX_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// b 0x822046b4
	goto loc_822046B4;
loc_822046B0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822046B4:
	// stw r10,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822046ec
	if (ctx.cr6.eq) goto loc_822046EC;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822046ec
	if (ctx.cr6.eq) goto loc_822046EC;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x822046f0
	goto loc_822046F0;
loc_822046EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822046F0:
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82207EC8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82207ef8
	if (ctx.cr6.eq) goto loc_82207EF8;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82207ef8
	if (ctx.cr6.eq) goto loc_82207EF8;
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82207ef8
	if (!ctx.cr6.lt) goto loc_82207EF8;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_82207EF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82208590) {
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
	ctx.lr = 0x82208598;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r11,22040
	ctx.r3.s64 = ctx.r11.s64 + 22040;
	// bl 0x822d6d78
	ctx.lr = 0x822085B0;
	sub_822D6D78(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r28,0
	r28.s64 = 0;
	// addi r20,r11,2076
	r20.s64 = ctx.r11.s64 + 2076;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822086a8
	if (!ctx.cr6.gt) goto loc_822086A8;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r21,0
	r21.s64 = 0;
	// addi r27,r5,22024
	r27.s64 = ctx.r5.s64 + 22024;
	// addi r26,r6,22012
	r26.s64 = ctx.r6.s64 + 22012;
	// addi r25,r7,22000
	r25.s64 = ctx.r7.s64 + 22000;
	// addi r24,r8,21984
	r24.s64 = ctx.r8.s64 + 21984;
	// addi r23,r9,21964
	r23.s64 = ctx.r9.s64 + 21964;
	// addi r22,r10,21944
	r22.s64 = ctx.r10.s64 + 21944;
	// addi r30,r11,21936
	r30.s64 = ctx.r11.s64 + 21936;
loc_82208604:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r31,r11,r21
	r31.u64 = ctx.r11.u64 + r21.u64;
	// bl 0x822d6d78
	ctx.lr = 0x82208618;
	sub_822D6D78(ctx, base);
	// lbz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82208678
	if (ctx.cr6.lt) goto loc_82208678;
	// beq cr6,0x82208670
	if (ctx.cr6.eq) goto loc_82208670;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x8220865c
	if (ctx.cr6.lt) goto loc_8220865C;
	// beq cr6,0x8220864c
	if (ctx.cr6.eq) goto loc_8220864C;
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// blt cr6,0x82208644
	if (ctx.cr6.lt) goto loc_82208644;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x82208654
	goto loc_82208654;
loc_82208644:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x82208650
	goto loc_82208650;
loc_8220864C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_82208650:
	// lbz r4,5(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 5);
loc_82208654:
	// bl 0x822d6d78
	ctx.lr = 0x82208658;
	sub_822D6D78(ctx, base);
	// b 0x8220868c
	goto loc_8220868C;
loc_8220865C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lbz r5,6(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 6);
	// lbz r4,5(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 5);
	// bl 0x822d6d78
	ctx.lr = 0x8220866C;
	sub_822D6D78(ctx, base);
	// b 0x8220868c
	goto loc_8220868C;
loc_82208670:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// b 0x8220867c
	goto loc_8220867C;
loc_82208678:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_8220867C:
	// lbz r6,7(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 7);
	// lbz r5,6(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 6);
	// lbz r4,5(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 5);
	// bl 0x822d6d78
	ctx.lr = 0x8220868C;
	sub_822D6D78(ctx, base);
loc_8220868C:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x822d6d78
	ctx.lr = 0x82208694;
	sub_822D6D78(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r21,r21,8
	r21.s64 = r21.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82208604
	if (ctx.cr6.lt) goto loc_82208604;
loc_822086A8:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x822d6d78
	ctx.lr = 0x822086B0;
	sub_822D6D78(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_8220D880) {
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
	ctx.lr = 0x8220D888;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 65536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm r29,r11,16,16,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// li r27,64
	r27.s64 = 64;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_8220D8B4:
	// addi r10,r30,24
	ctx.r10.s64 = r30.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x8220d938
	if (ctx.cr6.eq) goto loc_8220D938;
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8220d948
	if (ctx.cr6.gt) goto loc_8220D948;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8220d948
	if (ctx.cr6.gt) goto loc_8220D948;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8220c920
	ctx.lr = 0x8220D8F8;
	sub_8220C920(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8220d948
	if (ctx.cr0.eq) goto loc_8220D948;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8220cbb0
	ctx.lr = 0x8220D91C;
	sub_8220CBB0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8220cfb8
	ctx.lr = 0x8220D930;
	sub_8220CFB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8220dab4
	goto loc_8220DAB4;
loc_8220D938:
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x8220d948
	if (!ctx.cr6.eq) goto loc_8220D948;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_8220D948:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x8220d8b4
	if (ctx.cr6.lt) goto loc_8220D8B4;
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x8220dab0
	if (ctx.cr6.eq) goto loc_8220DAB0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220dab0
	if (ctx.cr0.eq) goto loc_8220DAB0;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addis r30,r28,1
	r30.s64 = r28.s64 + 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x8220d994
	if (ctx.cr6.gt) goto loc_8220D994;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8220D994:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// lwz r7,1424(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1424);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824d43bc
	ctx.lr = 0x8220D9B0;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8220da04
	if (!ctx.cr0.lt) goto loc_8220DA04;
loc_8220D9B8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8220d9fc
	if (ctx.cr6.eq) goto loc_8220D9FC;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bge cr6,0x8220d9d8
	if (!ctx.cr6.lt) goto loc_8220D9D8;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_8220D9D8:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// lwz r7,1424(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1424);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824d43bc
	ctx.lr = 0x8220D9F4;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220d9b8
	if (ctx.cr0.lt) goto loc_8220D9B8;
loc_8220D9FC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8220dab0
	if (ctx.cr6.lt) goto loc_8220DAB0;
loc_8220DA04:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// bgt cr6,0x8220da28
	if (ctx.cr6.gt) goto loc_8220DA28;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_8220DA28:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// lwz r7,1424(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1424);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824d43bc
	ctx.lr = 0x8220DA44;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8220da98
	if (ctx.cr0.lt) goto loc_8220DA98;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x8220d718
	ctx.lr = 0x8220DA74;
	sub_8220D718(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8220da84
	if (!ctx.cr0.eq) goto loc_8220DA84;
	// lis r30,-16384
	r30.s64 = -1073741824;
	// ori r30,r30,23
	r30.u64 = r30.u64 | 23;
loc_8220DA84:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8220da98
	if (ctx.cr6.lt) goto loc_8220DA98;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,40(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x8220dab4
	goto loc_8220DAB4;
loc_8220DA98:
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r6,1424(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1424);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824d43ec
	ctx.lr = 0x8220DAB0;
	__imp__NtFreeVirtualMemory(ctx, base);
loc_8220DAB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220DAB4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82215390) {
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
	ctx.lr = 0x82215398;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,11036(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11036);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822153dc
	if (ctx.cr6.eq) goto loc_822153DC;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822153dc
	if (ctx.cr6.eq) goto loc_822153DC;
	// bl 0x822152c0
	ctx.lr = 0x822153C0;
	sub_822152C0(ctx, base);
	// b 0x822153cc
	goto loc_822153CC;
loc_822153C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823cd320
	ctx.lr = 0x822153CC;
	sub_823CD320(ctx, base);
loc_822153CC:
	// lwz r10,11120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 11120);
	// lwz r11,11124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11124);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822153c4
	if (!ctx.cr6.eq) goto loc_822153C4;
loc_822153DC:
	// lwz r11,15308(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215428
	if (ctx.cr6.eq) goto loc_82215428;
	// lwz r8,15312(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15312);
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r11,r8,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// addi r7,r10,512
	ctx.r7.s64 = ctx.r10.s64 + 512;
	// addi r10,r11,512
	ctx.r10.s64 = ctx.r11.s64 + 512;
	// clrlwi r11,r8,3
	ctx.r11.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// rlwinm r8,r7,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r7,16384
	ctx.r7.s64 = 1073741824;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r4,r7,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r7.u64;
	// subf r3,r7,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r7.u64;
	// bl 0x8221c548
	ctx.lr = 0x82215428;
	sub_8221C548(ctx, base);
loc_82215428:
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,15240(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15240);
	// bl 0x823cd250
	ctx.lr = 0x82215434;
	sub_823CD250(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,15244(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15244);
	// bl 0x823cd250
	ctx.lr = 0x82215440;
	sub_823CD250(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,15240(r31)
	REX_STORE_U32(r31.u32 + 15240, r29.u32);
	// stw r29,15244(r31)
	REX_STORE_U32(r31.u32 + 15244, r29.u32);
	// stw r29,48(r31)
	REX_STORE_U32(r31.u32 + 48, r29.u32);
	// stw r29,52(r31)
	REX_STORE_U32(r31.u32 + 52, r29.u32);
	// bl 0x824d44dc
	ctx.lr = 0x8221545C;
	__imp__VdSetSystemCommandBufferGpuIdentifierAddress(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8221546c
	if (!ctx.cr6.eq) goto loc_8221546C;
loc_82215464:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82215750
	goto loc_82215750;
loc_8221546C:
	// lwz r25,4(r27)
	r25.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r26,8(r27)
	r26.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r28,12(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 12);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lwz r30,16(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// bne cr6,0x82215490
	if (!ctx.cr6.eq) goto loc_82215490;
	// lis r25,0
	r25.s64 = 0;
	// ori r25,r25,32768
	r25.u64 = r25.u64 | 32768;
loc_82215490:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8221549c
	if (!ctx.cr6.eq) goto loc_8221549C;
	// lis r28,32
	r28.s64 = 2097152;
loc_8221549C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822154a8
	if (!ctx.cr6.eq) goto loc_822154A8;
	// li r11,32
	ctx.r11.s64 = 32;
loc_822154A8:
	// divwu r27,r28,r11
	r27.u64 = uint32_t(ctx.r11.u32 ? r28.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x822154cc
	if (!ctx.cr6.eq) goto loc_822154CC;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823cd118
	ctx.lr = 0x822154C4;
	sub_823CD118(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r3,15240(r31)
	REX_STORE_U32(r31.u32 + 15240, ctx.r3.u32);
loc_822154CC:
	// li r24,3
	r24.s64 = 3;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82215500
	if (!ctx.cr6.eq) goto loc_82215500;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lis r4,-30848
	ctx.r4.s64 = -2021654528;
	// subfc r11,r11,r28
	ctx.xer.ca = r28.u32 >= ctx.r11.u32;
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 & r24.u64;
	// rlwimi r4,r11,28,1,3
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x70000000) | (ctx.r4.u64 & 0xFFFFFFFF8FFFFFFF);
	// bl 0x823cd118
	ctx.lr = 0x822154F8;
	sub_823CD118(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,15244(r31)
	REX_STORE_U32(r31.u32 + 15244, ctx.r3.u32);
loc_82215500:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82215748
	if (ctx.cr6.eq) goto loc_82215748;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82215748
	if (ctx.cr6.eq) goto loc_82215748;
	// cntlzw r11,r25
	ctx.r11.u64 = r25.u32 == 0 ? 32 : __builtin_clz(r25.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// subfic r23,r11,28
	ctx.xer.ca = ctx.r11.u32 <= 28;
	r23.u64 = static_cast<uint64_t>(28) - ctx.r11.u64;
	// bl 0x824d44cc
	ctx.lr = 0x82215520;
	__imp__MmGetPhysicalAddress(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x824d44bc
	ctx.lr = 0x82215528;
	__imp__VdInitializeRingBuffer(ctx, base);
	// rlwinm r11,r25,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 23) & 0x7FFFFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r4,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r4.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// cmplwi cr6,r4,19
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 19, ctx.xer);
	// ble cr6,0x82215540
	if (!ctx.cr6.gt) goto loc_82215540;
	// li r4,19
	ctx.r4.s64 = 19;
loc_82215540:
	// lwz r11,11024(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11024);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x824d44ac
	ctx.lr = 0x82215560;
	__imp__VdEnableRingBufferRPtrWriteBack(ctx, base);
	// rlwinm r11,r28,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFC;
	// lis r9,2989
	ctx.r9.s64 = 195887104;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// ori r7,r9,61453
	ctx.r7.u64 = ctx.r9.u64 | 61453;
	// rlwinm r8,r25,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r27,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// stw r7,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// rlwinm r11,r28,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r9,15312(r31)
	REX_STORE_U32(r31.u32 + 15312, ctx.r9.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r11,15340(r31)
	REX_STORE_U32(r31.u32 + 15340, ctx.r11.u32);
	// stw r26,15300(r31)
	REX_STORE_U32(r31.u32 + 15300, r26.u32);
	// addi r9,r30,-4
	ctx.r9.s64 = r30.s64 + -4;
	// stw r30,15308(r31)
	REX_STORE_U32(r31.u32 + 15308, r30.u32);
	// addi r7,r10,-160
	ctx.r7.s64 = ctx.r10.s64 + -160;
	// stw r30,15328(r31)
	REX_STORE_U32(r31.u32 + 15328, r30.u32);
	// stw r30,15332(r31)
	REX_STORE_U32(r31.u32 + 15332, r30.u32);
	// stw r27,15316(r31)
	REX_STORE_U32(r31.u32 + 15316, r27.u32);
	// stw r8,15304(r31)
	REX_STORE_U32(r31.u32 + 15304, ctx.r8.u32);
	// lwz r11,11024(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11024);
	// stw r29,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, r29.u32);
	// lwz r11,11036(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r29,11088(r31)
	REX_STORE_U32(r31.u32 + 11088, r29.u32);
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r7,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r7.u32);
	// stw r29,15320(r31)
	REX_STORE_U32(r31.u32 + 15320, r29.u32);
	// bne cr6,0x822155e0
	if (!ctx.cr6.eq) goto loc_822155E0;
	// stw r24,11036(r31)
	REX_STORE_U32(r31.u32 + 11036, r24.u32);
loc_822155E0:
	// lwz r11,11036(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11036);
	// lwz r10,11024(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 11024);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,11024(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 11024);
	// lwz r9,15324(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15324);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,11024(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11024);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x824d44dc
	ctx.lr = 0x82215614;
	__imp__VdSetSystemCommandBufferGpuIdentifierAddress(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r9,-16367
	ctx.r9.s64 = -1072627712;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// ori r8,r9,18432
	ctx.r8.u64 = ctx.r9.u64 | 18432;
	// addi r10,r10,27640
	ctx.r10.s64 = ctx.r10.s64 + 27640;
	// li r7,1023
	ctx.r7.s64 = 1023;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
loc_82215648:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82215648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82215648;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// li r11,2048
	ctx.r11.s64 = 2048;
	// stw r29,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// sth r10,11052(r31)
	REX_STORE_U16(r31.u32 + 11052, ctx.r10.u16);
	// sth r11,11054(r31)
	REX_STORE_U16(r31.u32 + 11054, ctx.r11.u16);
	// li r4,19
	ctx.r4.s64 = 19;
	// sth r11,130(r1)
	REX_STORE_U16(ctx.r1.u32 + 130, ctx.r11.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r10,128(r1)
	REX_STORE_U16(ctx.r1.u32 + 128, ctx.r10.u16);
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r29,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// stw r29,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r29.u32);
	// stw r29,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r29.u32);
	// bl 0x824d449c
	ctx.lr = 0x82215694;
	__imp__KiApcNormalRoutineNop(ctx, base);
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82213768
	ctx.lr = 0x822156A4;
	sub_82213768(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822156bc
	if (!ctx.cr6.gt) goto loc_822156BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x822156BC;
	sub_82215008(ctx, base);
loc_822156BC:
	// li r11,3330
	ctx.r11.s64 = 3330;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// ori r11,r11,2562
	ctx.r11.u64 = ctx.r11.u64 | 2562;
	// lis r9,-16368
	ctx.r9.s64 = -1072693248;
	// lis r8,2032
	ctx.r8.s64 = 133169152;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,477
	ctx.r6.s64 = 477;
	// li r4,476
	ctx.r4.s64 = 476;
	// lis r30,2
	r30.s64 = 131072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
	// ori r30,r30,55
	r30.u64 = r30.u64 | 55;
	// stwu r9,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r5.u32 = ea;
	// stwu r8,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// stwu r7,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r5.u32 = ea;
	// stwu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r5.u32 = ea;
	// stwu r6,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r5.u32 = ea;
	// lwz r10,11028(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 11028);
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
	// stwu r4,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r5.u32 = ea;
	// stwu r30,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r5.u32 = ea;
	// stw r5,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r5.u32);
	// bl 0x822151e0
	ctx.lr = 0x82215744;
	sub_822151E0(ctx, base);
	// b 0x82215464
	goto loc_82215464;
loc_82215748:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82215750:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_822266D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822266E0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,13068(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 13068);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8222675c
	if (ctx.cr6.eq) goto loc_8222675C;
	// lwz r11,11036(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222670c
	if (ctx.cr6.eq) goto loc_8222670C;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x8222675c
	goto loc_8222675C;
loc_8222670C:
	// lwz r11,11040(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 11040);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222675c
	if (ctx.cr0.eq) goto loc_8222675C;
	// lwz r11,13932(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 13932);
	// lwz r3,13928(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 13928);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82226734
	if (ctx.cr6.lt) goto loc_82226734;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822158d0
	ctx.lr = 0x82226734;
	sub_822158D0(ctx, base);
loc_82226734:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r31,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r9,13928(r30)
	REX_STORE_U32(r30.u32 + 13928, ctx.r9.u32);
loc_8222675C:
	// stw r29,13068(r30)
	REX_STORE_U32(r30.u32 + 13068, r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// ld r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 16);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// std r11,16(r30)
	REX_STORE_U64(r30.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r30)
	REX_STORE_U64(r30.u32 + 16, ctx.r11.u64);
	// beq cr6,0x8222688c
	if (ctx.cr6.eq) goto loc_8222688C;
	// lwz r10,60(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 60);
	// addi r11,r29,40
	ctx.r11.s64 = r29.s64 + 40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222688c
	if (ctx.cr6.eq) goto loc_8222688C;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 8);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// std r10,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r10.u64);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x822267c0
	if (ctx.cr6.eq) goto loc_822267C0;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 32);
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,32(r30)
	REX_STORE_U64(r30.u32 + 32, ctx.r10.u64);
loc_822267C0:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r31,r11,20
	r31.s64 = ctx.r11.s64 + 20;
	// addi r28,r30,1152
	r28.s64 = r30.s64 + 1152;
	// add r29,r10,r31
	r29.u64 = ctx.r10.u64 + r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bge cr6,0x8222688c
	if (!ctx.cr6.lt) goto loc_8222688C;
loc_822267D8:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822267f4
	if (ctx.cr0.eq) goto loc_822267F4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// blt cr6,0x822267d8
	if (ctx.cr6.lt) goto loc_822267D8;
loc_822267F4:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bge cr6,0x8222688c
	if (!ctx.cr6.lt) goto loc_8222688C;
loc_822267FC:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82226884
	if (ctx.cr0.eq) goto loc_82226884;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82226828;
	sub_822D4FA0(ctx, base);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// blt cr6,0x822267fc
	if (ctx.cr6.lt) goto loc_822267FC;
	// b 0x82226884
	goto loc_82226884;
loc_82226838:
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 2);
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8222688c
	if (ctx.cr0.eq) goto loc_8222688C;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82226858:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// clrlwi. r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bne 0x82226858
	if (!ctx.cr0.eq) goto loc_82226858;
loc_82226884:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// blt cr6,0x82226838
	if (ctx.cr6.lt) goto loc_82226838;
loc_8222688C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8222E680) {
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
	// bl 0x822d4e70
	ctx.lr = 0x8222E688;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// addi r24,r3,400
	r24.s64 = ctx.r3.s64 + 400;
	// addi r23,r4,24488
	r23.s64 = ctx.r4.s64 + 24488;
loc_8222E6A0:
	// li r27,0
	r27.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r24
	r29.u64 = r24.u64;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_8222E6B4:
	// lwz r11,428(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222e6d8
	if (!ctx.cr6.eq) goto loc_8222E6D8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8222e160
	ctx.lr = 0x8222E6CC;
	sub_8222E160(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8222e6dc
	if (ctx.cr0.eq) goto loc_8222E6DC;
loc_8222E6D8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8222E6DC:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,-8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -8);
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222e74c
	if (ctx.cr0.eq) goto loc_8222E74C;
	// lwz r10,4(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 4);
	// rlwinm r8,r10,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8222e710
	if (ctx.cr6.gt) goto loc_8222E710;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r10,20,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x3F;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8222e74c
	if (!ctx.cr6.lt) goto loc_8222E74C;
loc_8222E710:
	// clrlwi. r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8222e750
	if (!ctx.cr0.eq) goto loc_8222E750;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8222e3c8
	ctx.lr = 0x8222E738;
	sub_8222E3C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r28,r11,r28
	r28.u64 = ctx.r11.u64 | r28.u64;
	// b 0x8222e6b4
	goto loc_8222E6B4;
loc_8222E74C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222E750:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// or r27,r11,r10
	r27.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r30,r30,36
	r30.s64 = r30.s64 + 36;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(r31.u32, 3, ctx.xer);
	// blt cr6,0x8222e6b4
	if (ctx.cr6.lt) goto loc_8222E6B4;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222e780
	if (ctx.cr0.eq) goto loc_8222E780;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222e6a0
	if (!ctx.cr0.eq) goto loc_8222E6A0;
loc_8222E780:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82234378) {
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
	ctx.lr = 0x82234380;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-5864
	ctx.r3.s64 = ctx.r10.s64 + -5864;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// bl 0x822350c8
	ctx.lr = 0x822343B4;
	sub_822350C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82234444
	if (ctx.cr0.lt) goto loc_82234444;
	// rlwinm. r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// bne 0x822343cc
	if (!ctx.cr0.eq) goto loc_822343CC;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_822343CC:
	// rlwinm. r10,r29,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822343e0
	if (ctx.cr0.eq) goto loc_822343E0;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r11,r11,260
	ctx.r11.s64 = ctx.r11.s64 + 260;
loc_822343E0:
	// mulli r11,r11,120
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(120));
	// li r10,100
	ctx.r10.s64 = 100;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// divwu r11,r11,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// beq cr6,0x82234400
	if (ctx.cr6.eq) goto loc_82234400;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_82234400:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82234410
	if (ctx.cr6.eq) goto loc_82234410;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_82234410:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82234444
	if (ctx.cr6.eq) goto loc_82234444;
	// rlwinm. r9,r29,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r11,76
	ctx.r11.s64 = 76;
	// beq 0x82234428
	if (ctx.cr0.eq) goto loc_82234428;
	// li r11,80
	ctx.r11.s64 = 80;
loc_82234428:
	// rlwinm. r9,r29,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82234434
	if (ctx.cr0.eq) goto loc_82234434;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82234434:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// addi r11,r11,11808
	ctx.r11.s64 = ctx.r11.s64 + 11808;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_82234444:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822369B8) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// beq cr6,0x82236a00
	if (ctx.cr6.eq) goto loc_82236A00;
	// bl 0x8220a910
	ctx.lr = 0x822369FC;
	sub_8220A910(ctx, base);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
loc_82236A00:
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

DEFINE_REX_FUNC(sub_82237AA8) {
	REX_FUNC_PROLOGUE();
	// clrlwi. r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82237ab8
	if (!ctx.cr0.eq) goto loc_82237AB8;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x822379c8
	sub_822379C8(ctx, base);
	return;
loc_82237AB8:
	// b 0x822379c8
	sub_822379C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82237DC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,296
	ctx.r11.s64 = ctx.r3.s64 + 296;
loc_82237DCC:
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
	// stwcx. r4,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82237dcc
	if (!ctx.cr0.eq) goto loc_82237DCC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822387A0) {
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
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82238850
	if (ctx.cr6.eq) goto loc_82238850;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r31,0
	r31.s64 = 0;
	// addi r10,r3,84
	ctx.r10.s64 = ctx.r3.s64 + 84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822387D4:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822387f0
	if (ctx.cr6.eq) goto loc_822387F0;
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// rlwinm. r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822387f0
	if (!ctx.cr0.eq) goto loc_822387F0;
	// li r31,1
	r31.s64 = 1;
loc_822387F0:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822387d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822387D4;
	// lwz r11,212(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 212);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82238828
	if (!ctx.cr0.eq) goto loc_82238828;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82239978
	ctx.lr = 0x8223880C;
	sub_82239978(ctx, base);
	// lis r11,28672
	ctx.r11.s64 = 1879048192;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82238828
	if (ctx.cr6.eq) goto loc_82238828;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82239970
	ctx.lr = 0x82238820;
	sub_82239970(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82238844
	if (!ctx.cr0.eq) goto loc_82238844;
loc_82238828:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x82238844
	if (!ctx.cr6.eq) goto loc_82238844;
	// bl 0x824d488c
	ctx.lr = 0x82238834;
	__imp__XamVoiceIsActiveProcess(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82238844
	if (ctx.cr0.eq) goto loc_82238844;
	// lfs f0,196(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8223884c
	goto loc_8223884C;
loc_82238844:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_8223884C:
	// stfs f0,208(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 208, temp.u32);
loc_82238850:
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

DEFINE_REX_FUNC(sub_8223BD10) {
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
	ctx.lr = 0x8223BD18;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,304(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 304);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,312(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r8,72(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 72);
	// lhz r7,68(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 68);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f13,26664(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 26664);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// subf r10,r8,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r8.u64;
	// fdiv f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 / ctx.f0.f64;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x8223bd68
	if (!ctx.cr6.lt) goto loc_8223BD68;
	// fdiv f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 / ctx.f0.f64;
	// b 0x8223bd6c
	goto loc_8223BD6C;
loc_8223BD68:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_8223BD6C:
	// lfd f11,288(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(r31.u32 + 288);
	// fmul f0,f11,f0
	ctx.f0.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8223bd80
	if (ctx.cr6.lt) goto loc_8223BD80;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8223BD80:
	// fsub f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// addi r11,r10,10
	ctx.r11.s64 = ctx.r10.s64 + 10;
	// fmul f12,f0,f12
	ctx.f12.f64 = ctx.f0.f64 * ctx.f12.f64;
	// stfd f0,296(r31)
	REX_STORE_U64(r31.u32 + 296, ctx.f0.u64);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r26,0
	r26.s64 = 0;
	// lfdx f0,r11,r31
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + r31.u32);
	// fmadd f0,f13,f0,f12
	ctx.f0.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64);
	// stfdx f0,r11,r31
	REX_STORE_U64(ctx.r11.u32 + r31.u32, ctx.f0.u64);
	// lfd f0,280(r31)
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 280);
	// stw r26,304(r31)
	REX_STORE_U32(r31.u32 + 304, r26.u32);
	// stw r26,312(r31)
	REX_STORE_U32(r31.u32 + 312, r26.u32);
	// lfdx f13,r11,r31
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + r31.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8223bee0
	if (!ctx.cr6.lt) goto loc_8223BEE0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223bf3c
	if (ctx.cr6.eq) goto loc_8223BF3C;
	// addi r11,r10,9
	ctx.r11.s64 = ctx.r10.s64 + 9;
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f12,r11,r31
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + r31.u32);
	// fsub f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 - ctx.f0.f64;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8223bf3c
	if (!ctx.cr6.lt) goto loc_8223BF3C;
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r28,392(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 392);
	// addi r30,r31,392
	r30.s64 = r31.s64 + 392;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// divdu r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 ? ctx.r11.u64 / ctx.r10.u64 : 0;
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
	// sth r10,68(r31)
	REX_STORE_U16(r31.u32 + 68, ctx.r10.u16);
	// beq cr6,0x8223bf3c
	if (ctx.cr6.eq) goto loc_8223BF3C;
	// lwz r27,0(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// ld r29,24(r27)
	r29.u64 = REX_LOAD_U64(r27.u32 + 24);
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// bl 0x8223b5e0
	ctx.lr = 0x8223BE2C;
	sub_8223B5E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223bf3c
	if (ctx.cr0.eq) goto loc_8223BF3C;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// cmpld cr6,r11,r29
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, r29.u64, ctx.xer);
	// ble cr6,0x8223bf3c
	if (!ctx.cr6.gt) goto loc_8223BF3C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r10,r29,20
	ctx.r10.s64 = r29.s64 + 20;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223bed0
	if (ctx.cr6.eq) goto loc_8223BED0;
loc_8223BE54:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 24);
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x8223be78
	if (ctx.cr6.gt) goto loc_8223BE78;
	// bne cr6,0x8223be6c
	if (!ctx.cr6.eq) goto loc_8223BE6C;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8223BE6C:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223be54
	if (!ctx.cr6.eq) goto loc_8223BE54;
loc_8223BE78:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8223bed0
	if (ctx.cr6.eq) goto loc_8223BED0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223bea8
	if (ctx.cr6.eq) goto loc_8223BEA8;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8223be9c
	if (!ctx.cr6.eq) goto loc_8223BE9C;
	// stw r26,4(r30)
	REX_STORE_U32(r30.u32 + 4, r26.u32);
loc_8223BE9C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
loc_8223BEA8:
	// stw r26,4(r28)
	REX_STORE_U32(r28.u32 + 4, r26.u32);
	// addi r11,r31,384
	ctx.r11.s64 = r31.s64 + 384;
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 388);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223bec4
	if (ctx.cr6.eq) goto loc_8223BEC4;
	// stw r28,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r28.u32);
	// b 0x8223bec8
	goto loc_8223BEC8;
loc_8223BEC4:
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
loc_8223BEC8:
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// b 0x8223bf3c
	goto loc_8223BF3C;
loc_8223BED0:
	// ld r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 24);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// std r11,24(r27)
	REX_STORE_U64(r27.u32 + 24, ctx.r11.u64);
	// b 0x8223bf3c
	goto loc_8223BF3C;
loc_8223BEE0:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bge cr6,0x8223bf3c
	if (!ctx.cr6.lt) goto loc_8223BF3C;
	// addi r11,r10,11
	ctx.r11.s64 = ctx.r10.s64 + 11;
	// fsub f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f12,r11,r31
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + r31.u32);
	// fsub f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 - ctx.f0.f64;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8223bf3c
	if (!ctx.cr6.lt) goto loc_8223BF3C;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8223bf3c
	if (ctx.cr6.eq) goto loc_8223BF3C;
	// addi r10,r11,-20
	ctx.r10.s64 = ctx.r11.s64 + -20;
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// divdu r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 ? ctx.r11.u64 / ctx.r9.u64 : 0;
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
	// sth r10,68(r31)
	REX_STORE_U16(r31.u32 + 68, ctx.r10.u16);
loc_8223BF3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82246BF8) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x82263d38
	sub_82263D38(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82246C70) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x82265d78
	sub_82265D78(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82246E98) {
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
	// lwz r3,248(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82246ec4
	if (ctx.cr6.eq) goto loc_82246EC4;
	// bl 0x82255b70
	ctx.lr = 0x82246EC4;
	sub_82255B70(ctx, base);
loc_82246EC4:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8228fba0
	ctx.lr = 0x82246ECC;
	sub_8228FBA0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82246edc
	if (ctx.cr0.eq) goto loc_82246EDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x82246EDC;
	sub_82255B70(ctx, base);
loc_82246EDC:
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

DEFINE_REX_FUNC(sub_82247D18) {
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
	ctx.lr = 0x82247D38;
	sub_82246220(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82247d68
	if (ctx.cr6.eq) goto loc_82247D68;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82247d68
	if (!ctx.cr6.eq) goto loc_82247D68;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82247d68
	if (!ctx.cr6.lt) goto loc_82247D68;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82247d70
	goto loc_82247D70;
loc_82247D68:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82247D70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82248C18) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82246220
	ctx.lr = 0x82248C34;
	sub_82246220(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82248c78
	if (ctx.cr0.lt) goto loc_82248C78;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82248c70
	if (ctx.cr6.eq) goto loc_82248C70;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82248c70
	if (!ctx.cr6.eq) goto loc_82248C70;
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r10,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82248c78
	goto loc_82248C78;
loc_82248C70:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82248C78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224A818) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82255b48
	ctx.lr = 0x8224A83C;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224a858
	if (ctx.cr0.eq) goto loc_8224A858;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8224a85c
	goto loc_8224A85C;
loc_8224A858:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8224A85C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8224a870
	if (!ctx.cr6.eq) goto loc_8224A870;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8224a87c
	goto loc_8224A87C;
loc_8224A870:
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8224A87C:
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

DEFINE_REX_FUNC(sub_8224BDB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8224BDC0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32163
	ctx.r8.s64 = -2107834368;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,-10576
	r31.s64 = ctx.r11.s64 + -10576;
	// lwz r11,25828(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 25828);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8224c1fc
	if (!ctx.cr0.eq) goto loc_8224C1FC;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r10,-4044
	ctx.r9.s64 = ctx.r10.s64 + -4044;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,25828(r8)
	REX_STORE_U32(ctx.r8.u32 + 25828, ctx.r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r11,136
	ctx.r11.s64 = 136;
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
	// bl 0x8224ba48
	ctx.lr = 0x8224BE1C;
	sub_8224BA48(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r9,r9,30616
	ctx.r9.s64 = ctx.r9.s64 + 30616;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r11,-4064
	ctx.r9.s64 = ctx.r11.s64 + -4064;
	// std r30,40(r31)
	REX_STORE_U64(r31.u32 + 40, r30.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r9,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// addi r11,r31,40
	ctx.r11.s64 = r31.s64 + 40;
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x8224baa8
	ctx.lr = 0x8224BE7C;
	sub_8224BAA8(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// addi r9,r9,23144
	ctx.r9.s64 = ctx.r9.s64 + 23144;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// stw r9,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r11,-4096
	ctx.r9.s64 = ctx.r11.s64 + -4096;
	// std r30,88(r31)
	REX_STORE_U64(r31.u32 + 88, r30.u64);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r9,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// addi r11,r31,88
	ctx.r11.s64 = r31.s64 + 88;
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// bl 0x8224bb18
	ctx.lr = 0x8224BEDC;
	sub_8224BB18(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r31,136
	ctx.r11.s64 = r31.s64 + 136;
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// addi r11,r31,188
	ctx.r11.s64 = r31.s64 + 188;
	// stw r3,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,128(r31)
	REX_STORE_U32(r31.u32 + 128, r30.u32);
	// addi r11,r9,30392
	ctx.r11.s64 = ctx.r9.s64 + 30392;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// std r30,136(r31)
	REX_STORE_U64(r31.u32 + 136, r30.u64);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// addi r9,r9,-4116
	ctx.r9.s64 = ctx.r9.s64 + -4116;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r30,156(r31)
	REX_STORE_U32(r31.u32 + 156, r30.u32);
	// stw r10,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// addi r11,r8,-18320
	ctx.r11.s64 = ctx.r8.s64 + -18320;
	// stw r10,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r30,168(r31)
	REX_STORE_U32(r31.u32 + 168, r30.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// stw r9,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r30,180(r31)
	REX_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r30,188(r31)
	REX_STORE_U32(r31.u32 + 188, r30.u32);
	// stw r10,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r10.u32);
	// li r9,40
	ctx.r9.s64 = 40;
	// addi r8,r8,-4140
	ctx.r8.s64 = ctx.r8.s64 + -4140;
	// stw r30,192(r31)
	REX_STORE_U32(r31.u32 + 192, r30.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r30,204(r31)
	REX_STORE_U32(r31.u32 + 204, r30.u32);
	// stw r9,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r8,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r8.u32);
	// stw r10,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r10.u32);
	// bl 0x82259ee8
	ctx.lr = 0x8224BF98;
	sub_82259EE8(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,220(r31)
	REX_STORE_U32(r31.u32 + 220, r30.u32);
	// addi r9,r9,30456
	ctx.r9.s64 = ctx.r9.s64 + 30456;
	// stw r30,224(r31)
	REX_STORE_U32(r31.u32 + 224, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r3,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// stw r9,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r11,-4152
	ctx.r9.s64 = ctx.r11.s64 + -4152;
	// std r30,232(r31)
	REX_STORE_U64(r31.u32 + 232, r30.u64);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r9,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r9.u32);
	// li r9,52
	ctx.r9.s64 = 52;
	// stw r10,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r30,240(r31)
	REX_STORE_U32(r31.u32 + 240, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,252(r31)
	REX_STORE_U32(r31.u32 + 252, r30.u32);
	// addi r11,r31,232
	ctx.r11.s64 = r31.s64 + 232;
	// stw r9,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r9.u32);
	// stw r10,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r10.u32);
	// bl 0x82259f70
	ctx.lr = 0x8224BFF4;
	sub_82259F70(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r30,268(r31)
	REX_STORE_U32(r31.u32 + 268, r30.u32);
	// addi r9,r9,30536
	ctx.r9.s64 = ctx.r9.s64 + 30536;
	// stw r3,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// stw r30,272(r31)
	REX_STORE_U32(r31.u32 + 272, r30.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r9,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// std r30,280(r31)
	REX_STORE_U64(r31.u32 + 280, r30.u64);
	// addi r11,r31,280
	ctx.r11.s64 = r31.s64 + 280;
	// stw r10,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r10.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,288(r31)
	REX_STORE_U32(r31.u32 + 288, r30.u32);
	// addi r9,r8,-4172
	ctx.r9.s64 = ctx.r8.s64 + -4172;
	// stw r30,300(r31)
	REX_STORE_U32(r31.u32 + 300, r30.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r9.u32);
	// stw r11,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r10.u32);
	// bl 0x8224bd50
	ctx.lr = 0x8224C050;
	sub_8224BD50(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r30,316(r31)
	REX_STORE_U32(r31.u32 + 316, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,320(r31)
	REX_STORE_U32(r31.u32 + 320, r30.u32);
	// addi r9,r9,23208
	ctx.r9.s64 = ctx.r9.s64 + 23208;
	// stw r3,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r3.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r9,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r11,-4184
	ctx.r9.s64 = ctx.r11.s64 + -4184;
	// std r30,328(r31)
	REX_STORE_U64(r31.u32 + 328, r30.u64);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r9,352(r31)
	REX_STORE_U32(r31.u32 + 352, ctx.r9.u32);
	// li r9,132
	ctx.r9.s64 = 132;
	// stw r10,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,336(r31)
	REX_STORE_U32(r31.u32 + 336, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,348(r31)
	REX_STORE_U32(r31.u32 + 348, r30.u32);
	// addi r11,r31,328
	ctx.r11.s64 = r31.s64 + 328;
	// stw r9,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r9.u32);
	// stw r10,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r10.u32);
	// bl 0x8225a078
	ctx.lr = 0x8224C0AC;
	sub_8225A078(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stw r30,364(r31)
	REX_STORE_U32(r31.u32 + 364, r30.u32);
	// addi r9,r9,23272
	ctx.r9.s64 = ctx.r9.s64 + 23272;
	// stw r3,360(r31)
	REX_STORE_U32(r31.u32 + 360, ctx.r3.u32);
	// addi r10,r10,30760
	ctx.r10.s64 = ctx.r10.s64 + 30760;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r9,372(r31)
	REX_STORE_U32(r31.u32 + 372, ctx.r9.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r10,368(r31)
	REX_STORE_U32(r31.u32 + 368, ctx.r10.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// std r30,376(r31)
	REX_STORE_U64(r31.u32 + 376, r30.u64);
	// addi r9,r11,-4196
	ctx.r9.s64 = ctx.r11.s64 + -4196;
	// stw r10,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,400(r31)
	REX_STORE_U32(r31.u32 + 400, ctx.r9.u32);
	// li r9,132
	ctx.r9.s64 = 132;
	// stw r30,384(r31)
	REX_STORE_U32(r31.u32 + 384, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,396(r31)
	REX_STORE_U32(r31.u32 + 396, r30.u32);
	// addi r11,r31,376
	ctx.r11.s64 = r31.s64 + 376;
	// stw r9,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r9.u32);
	// stw r10,404(r31)
	REX_STORE_U32(r31.u32 + 404, ctx.r10.u32);
	// bl 0x8225a078
	ctx.lr = 0x8224C10C;
	sub_8225A078(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r30,412(r31)
	REX_STORE_U32(r31.u32 + 412, r30.u32);
	// addi r10,r10,30840
	ctx.r10.s64 = ctx.r10.s64 + 30840;
	// stw r3,408(r31)
	REX_STORE_U32(r31.u32 + 408, ctx.r3.u32);
	// addi r9,r9,23344
	ctx.r9.s64 = ctx.r9.s64 + 23344;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r10,416(r31)
	REX_STORE_U32(r31.u32 + 416, ctx.r10.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r9,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r9.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// std r30,424(r31)
	REX_STORE_U64(r31.u32 + 424, r30.u64);
	// addi r9,r11,-4652
	ctx.r9.s64 = ctx.r11.s64 + -4652;
	// stw r10,436(r31)
	REX_STORE_U32(r31.u32 + 436, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,448(r31)
	REX_STORE_U32(r31.u32 + 448, ctx.r9.u32);
	// li r9,132
	ctx.r9.s64 = 132;
	// stw r30,432(r31)
	REX_STORE_U32(r31.u32 + 432, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,444(r31)
	REX_STORE_U32(r31.u32 + 444, r30.u32);
	// addi r11,r31,424
	ctx.r11.s64 = r31.s64 + 424;
	// stw r9,440(r31)
	REX_STORE_U32(r31.u32 + 440, ctx.r9.u32);
	// stw r10,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r10.u32);
	// bl 0x8225a078
	ctx.lr = 0x8224C16C;
	sub_8225A078(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stw r30,460(r31)
	REX_STORE_U32(r31.u32 + 460, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r9,r9,23416
	ctx.r9.s64 = ctx.r9.s64 + 23416;
	// addi r10,r10,30920
	ctx.r10.s64 = ctx.r10.s64 + 30920;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r9,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r9.u32);
	// addi r9,r11,-4232
	ctx.r9.s64 = ctx.r11.s64 + -4232;
	// stw r10,464(r31)
	REX_STORE_U32(r31.u32 + 464, ctx.r10.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r3,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r3.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// std r30,472(r31)
	REX_STORE_U64(r31.u32 + 472, r30.u64);
	// stw r9,496(r31)
	REX_STORE_U32(r31.u32 + 496, ctx.r9.u32);
	// li r9,132
	ctx.r9.s64 = 132;
	// stw r10,484(r31)
	REX_STORE_U32(r31.u32 + 484, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,480(r31)
	REX_STORE_U32(r31.u32 + 480, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,492(r31)
	REX_STORE_U32(r31.u32 + 492, r30.u32);
	// addi r11,r31,472
	ctx.r11.s64 = r31.s64 + 472;
	// stw r9,488(r31)
	REX_STORE_U32(r31.u32 + 488, ctx.r9.u32);
	// stw r10,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r10.u32);
	// bl 0x8225a078
	ctx.lr = 0x8224C1D0;
	sub_8225A078(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r30,508(r31)
	REX_STORE_U32(r31.u32 + 508, r30.u32);
	// addi r10,r10,31000
	ctx.r10.s64 = ctx.r10.s64 + 31000;
	// stw r3,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r3.u32);
	// addi r9,r9,23480
	ctx.r9.s64 = ctx.r9.s64 + 23480;
	// stw r10,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r10.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r9,516(r31)
	REX_STORE_U32(r31.u32 + 516, ctx.r9.u32);
	// addi r11,r31,520
	ctx.r11.s64 = r31.s64 + 520;
	// std r30,520(r31)
	REX_STORE_U64(r31.u32 + 520, r30.u64);
loc_8224C1FC:
	// li r11,11
	ctx.r11.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8225CA10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8225CA18;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r29.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8225ca48
	if (ctx.cr6.eq) goto loc_8225CA48;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x8225ca88
	goto loc_8225CA88;
loc_8225CA48:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225ca60
	if (ctx.cr6.eq) goto loc_8225CA60;
	// bl 0x82288ee8
	ctx.lr = 0x8225CA5C;
	sub_82288EE8(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
loc_8225CA60:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8228aaa0
	ctx.lr = 0x8225CA6C;
	sub_8228AAA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225ca8c
	if (ctx.cr0.lt) goto loc_8225CA8C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
loc_8225CA88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225CA8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8225DD10) {
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
	// li r4,2051
	ctx.r4.s64 = 2051;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225DD38;
	sub_8225DA70(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8225DD44;
	sub_8227C2B8(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
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

DEFINE_REX_FUNC(sub_8225E680) {
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
	// li r4,2024
	ctx.r4.s64 = 2024;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225E6A8;
	sub_8225DA70(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8225E6B4;
	sub_8227C2B8(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
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

DEFINE_REX_FUNC(sub_8225F500) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8225e7c0
	ctx.lr = 0x8225F524;
	sub_8225E7C0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x8225F530;
	sub_8224DA00(ctx, base);
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

DEFINE_REX_FUNC(sub_82261F28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82261F30;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x822586e0
	ctx.lr = 0x82261F50;
	sub_822586E0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82262004
	if (ctx.cr6.eq) goto loc_82262004;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82261f70
	if (ctx.cr6.eq) goto loc_82261F70;
	// lwz r29,4(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x82261f7c
	goto loc_82261F7C;
loc_82261F70:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82258590
	ctx.lr = 0x82261F78;
	sub_82258590(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82261F7C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82261fe8
	if (ctx.cr6.eq) goto loc_82261FE8;
	// bl 0x8225ee88
	ctx.lr = 0x82261F8C;
	sub_8225EE88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82261fb4
	if (!ctx.cr0.eq) goto loc_82261FB4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-1736
	ctx.r5.s64 = ctx.r11.s64 + -1736;
	// addi r4,r10,-1704
	ctx.r4.s64 = ctx.r10.s64 + -1704;
	// b 0x82261fe0
	goto loc_82261FE0;
loc_82261FB4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82261fd0
	if (ctx.cr6.eq) goto loc_82261FD0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-592
	ctx.r5.s64 = ctx.r11.s64 + -592;
	// addi r4,r10,-572
	ctx.r4.s64 = ctx.r10.s64 + -572;
	// b 0x82261fe0
	goto loc_82261FE0;
loc_82261FD0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-648
	ctx.r5.s64 = ctx.r11.s64 + -648;
	// addi r4,r10,-616
	ctx.r4.s64 = ctx.r10.s64 + -616;
loc_82261FE0:
	// bl 0x822588e0
	ctx.lr = 0x82261FE4;
	sub_822588E0(ctx, base);
	// b 0x82262004
	goto loc_82262004;
loc_82261FE8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82262000
	if (ctx.cr6.eq) goto loc_82262000;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x82256228
	ctx.lr = 0x82261FFC;
	sub_82256228(ctx, base);
	// b 0x82262004
	goto loc_82262004;
loc_82262000:
	// bl 0x822561a8
	ctx.lr = 0x82262004;
	sub_822561A8(ctx, base);
loc_82262004:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82266A78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82266A80;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82266b3c
	if (ctx.cr6.eq) goto loc_82266B3C;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82266b04
	if (ctx.cr6.eq) goto loc_82266B04;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x82266b68
	if (!ctx.cr6.eq) goto loc_82266B68;
	// lwz r29,16(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x82266AB4;
	sub_822469C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82246370
	ctx.lr = 0x82266ABC;
	sub_82246370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225c260
	ctx.lr = 0x82266AC8;
	sub_8225C260(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82266af8
	if (ctx.cr0.eq) goto loc_82266AF8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// beq cr6,0x82266ae8
	if (ctx.cr6.eq) goto loc_82266AE8;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// b 0x82266aec
	goto loc_82266AEC;
loc_82266AE8:
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_82266AEC:
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82245e40
	ctx.lr = 0x82266AF8;
	sub_82245E40(ctx, base);
loc_82266AF8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// b 0x82266b68
	goto loc_82266B68;
loc_82266B04:
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82256918
	ctx.lr = 0x82266B14;
	sub_82256918(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82266b68
	if (ctx.cr0.lt) goto loc_82266B68;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// bl 0x8225e988
	ctx.lr = 0x82266B34;
	sub_8225E988(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x82266b68
	goto loc_82266B68;
loc_82266B3C:
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x82266B44;
	sub_822469C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82246370
	ctx.lr = 0x82266B4C;
	sub_82246370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225c260
	ctx.lr = 0x82266B58;
	sub_8225C260(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82266b68
	if (ctx.cr0.eq) goto loc_82266B68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82245e40
	ctx.lr = 0x82266B68;
	sub_82245E40(ctx, base);
loc_82266B68:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8226C858) {
	REX_FUNC_PROLOGUE();
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8226c890
	if (!ctx.cr6.gt) goto loc_8226C890;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_8226C874:
	// lwzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8226c894
	if (ctx.cr6.eq) goto loc_8226C894;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8226c874
	if (ctx.cr6.lt) goto loc_8226C874;
loc_8226C890:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_8226C894:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8226c8a4
	if (!ctx.cr6.eq) goto loc_8226C8A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8226C8A4:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// b 0x8225d8f8
	sub_8225D8F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8226D650) {
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
	ctx.lr = 0x8226D658;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r4,23544(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23544);
	// bl 0x82246920
	ctx.lr = 0x8226D674;
	sub_82246920(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8226d688
	if (!ctx.cr0.eq) goto loc_8226D688;
loc_8226D67C:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x8226d7cc
	goto loc_8226D7CC;
loc_8226D688:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82246220
	ctx.lr = 0x8226D694;
	sub_82246220(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8226d67c
	if (ctx.cr0.lt) goto loc_8226D67C;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8226d67c
	if (ctx.cr6.eq) goto loc_8226D67C;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r28,23664(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 23664);
	// bl 0x822469c0
	ctx.lr = 0x8226D6B8;
	sub_822469C0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82246920
	ctx.lr = 0x8226D6C0;
	sub_82246920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8226d6d8
	if (ctx.cr0.eq) goto loc_8226D6D8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225c4b0
	ctx.lr = 0x8226D6D4;
	sub_8225C4B0(ctx, base);
	// b 0x8226d7cc
	goto loc_8226D7CC;
loc_8226D6D8:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8226d6f4
	goto loc_8226D6F4;
loc_8226D6E4:
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d708
	if (ctx.cr6.eq) goto loc_8226D708;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8226D6F4:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x8226d6e4
	if (!ctx.cr6.eq) goto loc_8226D6E4;
loc_8226D6FC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8226d7cc
	goto loc_8226D7CC;
loc_8226D708:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226d6fc
	if (!ctx.cr6.eq) goto loc_8226D6FC;
	// stw r31,40(r30)
	REX_STORE_U32(r30.u32 + 40, r31.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226d72c
	if (!ctx.cr6.eq) goto loc_8226D72C;
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// b 0x8226d738
	goto loc_8226D738;
loc_8226D72C:
	// stw r30,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r30.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
loc_8226D738:
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f2,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,240(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 240);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,240(r30)
	REX_STORE_U32(r30.u32 + 240, ctx.r11.u32);
	// bl 0x82260768
	ctx.lr = 0x8226D758;
	sub_82260768(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8225da98
	ctx.lr = 0x8226D768;
	sub_8225DA98(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x8226D770;
	sub_822469C0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8224da00
	ctx.lr = 0x8226D778;
	sub_8224DA00(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8226d7bc
	if (ctx.cr0.lt) goto loc_8226D7BC;
	// bl 0x822567b0
	ctx.lr = 0x8226D784;
	sub_822567B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8226d7b4
	if (!ctx.cr0.eq) goto loc_8226D7B4;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x8226D794;
	sub_822469C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822469c0
	ctx.lr = 0x8226D7A0;
	sub_822469C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x8225fdf0
	ctx.lr = 0x8226D7B0;
	sub_8225FDF0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8226D7B4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge cr6,0x8226d7c8
	if (!ctx.cr6.lt) goto loc_8226D7C8;
loc_8226D7BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8226d438
	ctx.lr = 0x8226D7C8;
	sub_8226D438(ctx, base);
loc_8226D7C8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8226D7CC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82276778) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8227678c
	if (!ctx.cr6.eq) goto loc_8227678C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_8227678C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82276990) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822769b8
	if (ctx.cr6.eq) goto loc_822769B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,1284
	ctx.r4.s64 = ctx.r11.s64 + 1284;
	// bl 0x822d82e0
	ctx.lr = 0x822769B0;
	sub_822D82E0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_822769B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82277468) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r31,r11,29956
	r31.s64 = ctx.r11.s64 + 29956;
	// lbz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + -4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822774c8
	if (ctx.cr0.eq) goto loc_822774C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-4(r31)
	REX_STORE_U8(r31.u32 + -4, ctx.r11.u8);
	// bl 0x8227e6c8
	ctx.lr = 0x8227749C;
	sub_8227E6C8(ctx, base);
	// bl 0x82255758
	ctx.lr = 0x822774A0;
	sub_82255758(ctx, base);
	// bl 0x82276e10
	ctx.lr = 0x822774A4;
	sub_82276E10(ctx, base);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822774c0
	if (ctx.cr6.eq) goto loc_822774C0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227ac70
	ctx.lr = 0x822774B8;
	sub_8227AC70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b70
	ctx.lr = 0x822774C0;
	sub_82255B70(ctx, base);
loc_822774C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_822774C8:
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

DEFINE_REX_FUNC(sub_822784A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822784A8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822784e8
	if (!ctx.cr6.gt) goto loc_822784E8;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_822784C8:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x82277e30
	ctx.lr = 0x822784D4;
	sub_82277E30(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,68
	r30.s64 = r30.s64 + 68;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822784c8
	if (ctx.cr6.lt) goto loc_822784C8;
loc_822784E8:
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822784fc
	if (ctx.cr6.eq) goto loc_822784FC;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822582f0
	ctx.lr = 0x822784FC;
	sub_822582F0(ctx, base);
loc_822784FC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,32(r31)
	REX_STORE_U32(r31.u32 + 32, r28.u32);
	// stw r28,28(r31)
	REX_STORE_U32(r31.u32 + 28, r28.u32);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stw r28,52(r31)
	REX_STORE_U32(r31.u32 + 52, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82279B98) {
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
	ctx.lr = 0x82279BA0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	r19.s64 = 0;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// stw r19,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r19.u32);
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r15,r11
	r15.u64 = ctx.r11.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r21,r19
	r21.u64 = r19.u64;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82279ee4
	if (ctx.cr0.eq) goto loc_82279EE4;
	// mr r16,r19
	r16.u64 = r19.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82279ee4
	if (ctx.cr6.eq) goto loc_82279EE4;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_82279C1C:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82278ad0
	ctx.lr = 0x82279C28;
	sub_82278AD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82279ed4
	if (ctx.cr0.eq) goto loc_82279ED4;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// li r24,1
	r24.s64 = 1;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82279c98
	if (ctx.cr0.eq) goto loc_82279C98;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82279c5c
	if (ctx.cr0.eq) goto loc_82279C5C;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82279c60
	goto loc_82279C60;
loc_82279C5C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82279C60:
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82279c80
	if (ctx.cr0.eq) goto loc_82279C80;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82279c84
	goto loc_82279C84;
loc_82279C80:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82279C84:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// bl 0x82278b28
	ctx.lr = 0x82279C94;
	sub_82278B28(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
loc_82279C98:
	// mr r26,r19
	r26.u64 = r19.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82279ed4
	if (ctx.cr6.eq) goto loc_82279ED4;
	// rlwinm r11,r21,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + r18.u64;
	// addi r27,r11,4
	r27.s64 = ctx.r11.s64 + 4;
loc_82279CB0:
	// mr r31,r19
	r31.u64 = r19.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x82279ccc
	if (ctx.cr6.eq) goto loc_82279CCC;
	// stw r23,0(r27)
	REX_STORE_U32(r27.u32 + 0, r23.u32);
	// addi r31,r27,-4
	r31.s64 = r27.s64 + -4;
	// stw r25,8(r27)
	REX_STORE_U32(r27.u32 + 8, r25.u32);
	// sth r26,-2(r27)
	REX_STORE_U16(r27.u32 + -2, r26.u16);
loc_82279CCC:
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 20);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82279d98
	if (!ctx.cr6.eq) goto loc_82279D98;
	// lwz r11,40(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 40);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82279CE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82279d40
	if (ctx.cr6.eq) goto loc_82279D40;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82279d40
	if (ctx.cr6.eq) goto loc_82279D40;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// bl 0x82279a10
	ctx.lr = 0x82279D34;
	sub_82279A10(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82279ef0
	if (ctx.cr0.eq) goto loc_82279EF0;
loc_82279D40:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r19.u32);
	// beq cr6,0x82279d58
	if (ctx.cr6.eq) goto loc_82279D58;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// b 0x82279d5c
	goto loc_82279D5C;
loc_82279D58:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
loc_82279D5C:
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82279b98
	ctx.lr = 0x82279D7C;
	sub_82279B98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82279ee8
	if (ctx.cr0.lt) goto loc_82279EE8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82279eb4
	if (ctx.cr6.eq) goto loc_82279EB4;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x82279dec
	goto loc_82279DEC;
loc_82279D98:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82279df4
	if (!ctx.cr6.eq) goto loc_82279DF4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82279eb4
	if (ctx.cr6.eq) goto loc_82279EB4;
	// lwz r11,40(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r25)
	REX_STORE_U32(r25.u32 + 40, ctx.r11.u32);
	// stw r25,12(r31)
	REX_STORE_U32(r31.u32 + 12, r25.u32);
	// lwz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 36);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// andi. r11,r10,65512
	ctx.r11.u64 = ctx.r10.u64 & 65512;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r11,r11,18
	ctx.r11.u64 = ctx.r11.u64 | 18;
loc_82279DEC:
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// b 0x82279eb4
	goto loc_82279EB4;
loc_82279DF4:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bgt cr6,0x82279e9c
	if (ctx.cr6.gt) goto loc_82279E9C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82279e60
	if (ctx.cr6.eq) goto loc_82279E60;
	// bdz 0x82279e48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82279E48;
	// bdz 0x82279e48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82279E48;
	// bdz 0x82279e7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82279E7C;
	// bdz 0x82279e2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82279E2C;
	// bdz 0x82279e48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82279E48;
	// bdz 0x82279e48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82279E48;
	// b 0x82279e48
	goto loc_82279E48;
loc_82279E2C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82279e40
	if (ctx.cr6.eq) goto loc_82279E40;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82279E40:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82279e9c
	goto loc_82279E9C;
loc_82279E48:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82279e98
	if (ctx.cr6.eq) goto loc_82279E98;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x82279e98
	goto loc_82279E98;
loc_82279E60:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82279e74
	if (ctx.cr6.eq) goto loc_82279E74;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82279E74:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82279e9c
	goto loc_82279E9C;
loc_82279E7C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82279e98
	if (ctx.cr6.eq) goto loc_82279E98;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
loc_82279E98:
	// li r11,4
	ctx.r11.s64 = 4;
loc_82279E9C:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_82279EB4:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(r26.u32, r24.u32, ctx.xer);
	// blt cr6,0x82279cb0
	if (ctx.cr6.lt) goto loc_82279CB0;
loc_82279ED4:
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// addi r23,r23,48
	r23.s64 = r23.s64 + 48;
	// cmplw cr6,r16,r17
	ctx.cr6.compare<uint32_t>(r16.u32, r17.u32, ctx.xer);
	// blt cr6,0x82279c1c
	if (ctx.cr6.lt) goto loc_82279C1C;
loc_82279EE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82279EE8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea4
	return;
loc_82279EF0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82279ee8
	goto loc_82279EE8;
}

DEFINE_REX_FUNC(sub_82286008) {
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
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e6c
	ctx.lr = 0x82286010;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r31,r3,264
	r31.s64 = ctx.r3.s64 + 264;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,8
	ctx.r9.s64 = 8;
	// vupkd3d128 v60,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v60 = vTemp;
	// li r8,12
	ctx.r8.s64 = 12;
	// lvsr v0,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,24
	ctx.r5.s64 = 24;
	// vpermwi128 v63,v60,234
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x15));
	// li r29,28
	r29.s64 = 28;
	// vpermwi128 v62,v60,186
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x45));
	// li r28,32
	r28.s64 = 32;
	// vpermwi128 v61,v60,174
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x51));
	// li r27,36
	r27.s64 = 36;
	// vpermwi128 v60,v60,171
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x54));
	// li r26,40
	r26.s64 = 40;
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r25,44
	r25.s64 = 44;
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r24,48
	r24.s64 = 48;
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r23,52
	r23.s64 = 52;
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r22,56
	r22.s64 = 56;
	// li r21,60
	r21.s64 = 60;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stvewx128 v63,r0,r31
	ea = (r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r31,r6
	ea = (r31.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r31,r29
	ea = (r31.u32 + r29.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r31,r28
	ea = (r31.u32 + r28.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r31,r27
	ea = (r31.u32 + r27.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r31,r26
	ea = (r31.u32 + r26.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r31,r25
	ea = (r31.u32 + r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r31,r24
	ea = (r31.u32 + r24.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r31,r23
	ea = (r31.u32 + r23.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r31,r22
	ea = (r31.u32 + r22.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r31,r21
	ea = (r31.u32 + r21.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822860E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f12,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,304(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 304, temp.u32);
	// stfs f0,316(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 316, temp.u32);
	// lfs f13,2024(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2024);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,312(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 312, temp.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfs f0,2372(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2372);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f0,284(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 284, temp.u32);
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// stfs f13,264(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 264, temp.u32);
	// bl 0x82291610
	ctx.lr = 0x82286154;
	sub_82291610(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x822d7b58
	ctx.lr = 0x8228615C;
	sub_822D7B58(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_8228C3A8) {
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
	ctx.lr = 0x8228C3B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228c490
	if (ctx.cr6.eq) goto loc_8228C490;
	// addi r26,r3,100
	r26.s64 = ctx.r3.s64 + 100;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824d438c
	ctx.lr = 0x8228C3D0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// lwz r31,72(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 72);
	// blt cr6,0x8228c488
	if (ctx.cr6.lt) goto loc_8228C488;
	// lis r29,-32163
	r29.s64 = -2107834368;
	// lis r27,-32163
	r27.s64 = -2107834368;
	// lwz r10,31372(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 31372);
loc_8228C3F0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8228c488
	if (ctx.cr6.eq) goto loc_8228C488;
	// lwz r11,31368(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 31368);
	// lwz r28,68(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 68);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228c420
	if (ctx.cr0.eq) goto loc_8228C420;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8228c474
	if (ctx.cr6.eq) goto loc_8228C474;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8228c474
	if (ctx.cr6.eq) goto loc_8228C474;
loc_8228C420:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228c474
	if (!ctx.cr6.eq) goto loc_8228C474;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228c474
	if (ctx.cr6.eq) goto loc_8228C474;
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,84(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r30)
	REX_STORE_U32(r30.u32 + 92, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,84(r30)
	REX_STORE_U32(r30.u32 + 84, ctx.r11.u32);
	// bl 0x8228b750
	ctx.lr = 0x8228C460;
	sub_8228B750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228b2b0
	ctx.lr = 0x8228C468;
	sub_8228B2B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8228C470;
	sub_82255B70(ctx, base);
	// lwz r10,31372(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 31372);
loc_8228C474:
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// mr r31,r28
	r31.u64 = r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bge cr6,0x8228c3f0
	if (!ctx.cr6.lt) goto loc_8228C3F0;
loc_8228C488:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824d437c
	ctx.lr = 0x8228C490;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8228C490:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82291328) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,8
	ctx.r11.s64 = 8;
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisw128 v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r10,r10,12928
	ctx.r10.s64 = ctx.r10.s64 + 12928;
	// lvrx128 v62,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vsldoi128 v62,v62,v62,8
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 8));
	// lvx128 v60,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v62,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vsldoi128 v63,v61,v62,8
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 8));
	// vmsum4fp128 v63,v63,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vcmpgefp128. v60,v60,v63
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cmpge_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v63.f32)));
	ctx.cr6.setFromMask(simde_mm_load_ps(ctx.v60.f32), 0xF);
	// bge cr6,0x82291364
	if (!ctx.cr6.lt) goto loc_82291364;
	// vor128 v63,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// b 0x82291384
	goto loc_82291384;
loc_82291364:
	// vspltisw128 v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_set1_epi32(int(0x1)));
	// vrsqrtefp128 v0,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v63.f32))));
	// vcsxwfp128 v11,v61,1
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// vmulfp128 v12,v0,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v13,v63,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vnmsubfp v11,v13,v12,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v63,v62,v0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v0.f32)));
loc_82291384:
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// li r11,4
	ctx.r11.s64 = 4;
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// stvewx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822948E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822948F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82294990
	if (ctx.cr6.eq) goto loc_82294990;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82294990
	if (ctx.cr6.eq) goto loc_82294990;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82294990
	if (ctx.cr6.eq) goto loc_82294990;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lhz r30,668(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 668);
	// rlwinm. r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229494c
	if (ctx.cr0.eq) goto loc_8229494C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x822d60f0
	ctx.lr = 0x8229493C;
	sub_822D60F0(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
loc_8229494C:
	// extsh r11,r30
	ctx.r11.s64 = r30.s16;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lha r11,660(r10)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 660));
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// b 0x82294998
	goto loc_82294998;
loc_82294990:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
loc_82294998:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822990F0) {
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
	ctx.lr = 0x822990F8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x8229a8c8
	ctx.lr = 0x8229911C;
	sub_8229A8C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82298508
	ctx.lr = 0x82299128;
	sub_82298508(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8229922c
	if (ctx.cr0.lt) goto loc_8229922C;
	// lha r7,66(r29)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r29.u32 + 66));
	// lha r11,2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// addi r10,r7,8
	ctx.r10.s64 = ctx.r7.s64 + 8;
	// lha r8,6(r31)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r31.u32 + 6));
	// srawi r5,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 4;
	// lha r6,0(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 0));
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lha r7,4(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// add. r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// bge 0x82299180
	if (!ctx.cr0.lt) goto loc_82299180;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x82299194
	goto loc_82299194;
loc_82299180:
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82299198
	if (!ctx.cr6.gt) goto loc_82299198;
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_82299194:
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_82299198:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x822991b4
	if (!ctx.cr6.gt) goto loc_822991B4;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// b 0x822991c0
	goto loc_822991C0;
loc_822991B4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x822991c4
	if (!ctx.cr6.lt) goto loc_822991C4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_822991C0:
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_822991C4:
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822987d0
	ctx.lr = 0x822991D4;
	sub_822987D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82299224
	if (ctx.cr0.lt) goto loc_82299224;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r6,r11,-28512
	ctx.r6.s64 = ctx.r11.s64 + -28512;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r29,32
	ctx.r4.s64 = r29.s64 + 32;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82298028
	ctx.lr = 0x822991F8;
	sub_82298028(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82299224
	if (ctx.cr0.lt) goto loc_82299224;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r5,66(r29)
	ctx.r5.u64 = REX_LOAD_U16(r29.u32 + 66);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82298e10
	ctx.lr = 0x82299220;
	sub_82298E10(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82299224:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82298678
	ctx.lr = 0x8229922C;
	sub_82298678(ctx, base);
loc_8229922C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8229a710
	ctx.lr = 0x82299234;
	sub_8229A710(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8229F320) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// std r9,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// std r9,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
loc_8229F330:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8229f330
	if (!ctx.cr6.eq) goto loc_8229F330;
	// subf r10,r5,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r5.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8229f360
	if (ctx.cr6.lt) goto loc_8229F360;
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_8229F360:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// std r9,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// std r9,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_8229F384:
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r8,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8229f384
	if (!ctx.cr0.eq) goto loc_8229F384;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A0800) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822A0808;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a0834
	if (ctx.cr6.eq) goto loc_822A0834;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8229f3d8
	ctx.lr = 0x822A082C;
	sub_8229F3D8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x822a083c
	if (!ctx.cr0.eq) goto loc_822A083C;
loc_822A0834:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822a0850
	goto loc_822A0850;
loc_822A083C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a0698
	ctx.lr = 0x822A084C;
	sub_822A0698(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_822A0850:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822A15D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,444(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 228);
	// stw r4,444(r3)
	REX_STORE_U32(ctx.r3.u32 + 444, ctx.r4.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x822117b0
	sub_822117B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822A29D8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A2FE8) {
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
	// bl 0x8229d680
	ctx.lr = 0x822A3004;
	sub_8229D680(ctx, base);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a302c
	if (ctx.cr6.eq) goto loc_822A302C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A3028;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
loc_822A302C:
	// lwz r3,156(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a3040
	if (ctx.cr6.eq) goto loc_822A3040;
	// bl 0x82216cc8
	ctx.lr = 0x822A303C;
	sub_82216CC8(ctx, base);
	// stw r30,156(r31)
	REX_STORE_U32(r31.u32 + 156, r30.u32);
loc_822A3040:
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a3054
	if (ctx.cr6.eq) goto loc_822A3054;
	// bl 0x82216cc8
	ctx.lr = 0x822A3050;
	sub_82216CC8(ctx, base);
	// stw r30,160(r31)
	REX_STORE_U32(r31.u32 + 160, r30.u32);
loc_822A3054:
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a3068
	if (ctx.cr6.eq) goto loc_822A3068;
	// bl 0x822c80a8
	ctx.lr = 0x822A3064;
	sub_822C80A8(ctx, base);
	// stw r30,168(r31)
	REX_STORE_U32(r31.u32 + 168, r30.u32);
loc_822A3068:
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

DEFINE_REX_FUNC(sub_822A56A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r9,4
	ctx.r9.s64 = 4;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// lfs f12,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r10,r11,-20
	ctx.r10.s64 = ctx.r11.s64 + -20;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822A56CC:
	// lfs f11,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f9,-12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmadds f10,f9,f0,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f10.f64)));
	// fmadds f11,f11,f13,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f10.f64)));
	// fadds f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfsu f11,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x822a56cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A56CC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,-4(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x822a5730
	if (!ctx.cr6.gt) goto loc_822A5730;
	// lfs f9,-16(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f9.f64 = double(temp.f32);
	// fabs f9,f9
	ctx.f9.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// bgt cr6,0x822a5720
	if (ctx.cr6.gt) goto loc_822A5720;
loc_822A5718:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822A5720:
	// lfs f9,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// fabs f9,f9
	ctx.f9.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// ble cr6,0x822a5718
	if (!ctx.cr6.gt) goto loc_822A5718;
loc_822A5730:
	// li r10,4
	ctx.r10.s64 = 4;
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// addi r9,r1,-20
	ctx.r9.s64 = ctx.r1.s64 + -20;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822A574C:
	// lfs f11,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f8,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfsu f11,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f9,f8,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f9.f64)));
	// fmadds f11,f11,f13,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f9.f64)));
	// fadds f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfsu f11,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822a574c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A574C;
	// lfs f0,-4(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x822a57a4
	if (!ctx.cr6.gt) goto loc_822A57A4;
	// lfs f13,-16(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822a5718
	if (!ctx.cr6.gt) goto loc_822A5718;
	// lfs f13,-12(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_822A57A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822AA5D0) {
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
	// lwz r11,1428(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1428);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822aa648
	if (ctx.cr0.eq) goto loc_822AA648;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822aa634
	if (ctx.cr0.eq) goto loc_822AA634;
	// addi r6,r3,1136
	ctx.r6.s64 = ctx.r3.s64 + 1136;
	// addi r5,r3,1120
	ctx.r5.s64 = ctx.r3.s64 + 1120;
	// addi r4,r3,1104
	ctx.r4.s64 = ctx.r3.s64 + 1104;
	// addi r3,r3,560
	ctx.r3.s64 = ctx.r3.s64 + 560;
	// bl 0x822cab38
	ctx.lr = 0x822AA60C;
	sub_822CAB38(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r9,945(r31)
	REX_STORE_U8(r31.u32 + 945, ctx.r9.u8);
	// lwz r11,31464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// stb r10,1536(r11)
	REX_STORE_U8(ctx.r11.u32 + 1536, ctx.r10.u8);
	// stb r10,1538(r11)
	REX_STORE_U8(ctx.r11.u32 + 1538, ctx.r10.u8);
	// lwz r11,1428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1428);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,1428(r31)
	REX_STORE_U32(r31.u32 + 1428, ctx.r11.u32);
loc_822AA634:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822aa1f8
	ctx.lr = 0x822AA63C;
	sub_822AA1F8(ctx, base);
	// lwz r11,1428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1428);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,1428(r31)
	REX_STORE_U32(r31.u32 + 1428, ctx.r11.u32);
loc_822AA648:
	// addi r3,r31,1232
	ctx.r3.s64 = r31.s64 + 1232;
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

DEFINE_REX_FUNC(sub_822AC8E0) {
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
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822ac984
	if (!ctx.cr6.lt) goto loc_822AC984;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// lwz r8,31516(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 31516);
loc_822AC914:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,0(r8)
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r30,0(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,-4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r31
	r30.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// lwzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lfs f0,188(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822ac950
	if (ctx.cr6.lt) goto loc_822AC950;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822AC950:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822ac95c
	if (ctx.cr0.eq) goto loc_822AC95C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822AC95C:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r4,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stwx r9,r31,r3
	REX_STORE_U32(r31.u32 + ctx.r3.u32, ctx.r9.u32);
	// blt cr6,0x822ac914
	if (ctx.cr6.lt) goto loc_822AC914;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
loc_822AC984:
	// bne cr6,0x822ac9a0
	if (!ctx.cr6.eq) goto loc_822AC9A0;
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
loc_822AC9A0:
	// bl 0x822ac3a8
	ctx.lr = 0x822AC9A4;
	sub_822AC3A8(ctx, base);
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

DEFINE_REX_FUNC(sub_822B0F90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,528(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b0fdc
	if (ctx.cr6.eq) goto loc_822B0FDC;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x822b0fe0
	goto loc_822B0FE0;
loc_822B0FDC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822B0FE0:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,468(r11)
	REX_STORE_U8(ctx.r11.u32 + 468, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B3838) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822b3850
	if (!ctx.cr6.gt) goto loc_822B3850;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// b 0x822b3854
	goto loc_822B3854;
loc_822B3850:
	// fmr f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f13.f64;
loc_822B3854:
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822b386c
	if (!ctx.cr6.gt) goto loc_822B386C;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// b 0x822b3870
	goto loc_822B3870;
loc_822B386C:
	// fmr f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f13.f64;
loc_822B3870:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822b3888
	if (!ctx.cr6.gt) goto loc_822B3888;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x822b388c
	goto loc_822B388C;
loc_822B3888:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_822B388C:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822b38a0
	if (ctx.cr6.gt) goto loc_822B38A0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822B38A0:
	// stfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B74C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822B74D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x822c80d0
	ctx.lr = 0x822B74E4;
	sub_822C80D0(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d5870
	ctx.lr = 0x822B74F8;
	sub_822D5870(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x822ac200
	ctx.lr = 0x822B7504;
	sub_822AC200(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r3,r30,120
	ctx.r3.s64 = r30.s64 + 120;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// bl 0x822ad9c0
	ctx.lr = 0x822B7544;
	sub_822AD9C0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822B93C8) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822c5ac0
	ctx.lr = 0x822B93E4;
	sub_822C5AC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822b93f8
	if (!ctx.cr0.eq) goto loc_822B93F8;
	// lbz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822b9460
	if (ctx.cr0.eq) goto loc_822B9460;
loc_822B93F8:
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lhz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 80);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r11,120
	ctx.r7.s64 = ctx.r11.s64 + 120;
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,31492(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 31492);
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// srd r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r11.u8 & 0x7F));
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// lfs f0,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1924(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 1924, temp.u32);
	// lfs f0,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1928(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 1928, temp.u32);
	// lfs f0,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1932(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 1932, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// stb r6,72(r31)
	REX_STORE_U8(r31.u32 + 72, ctx.r6.u8);
loc_822B9460:
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

DEFINE_REX_FUNC(sub_822BAC90) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4f2c
	ctx.lr = 0x822BACA0;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f13,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x822bace0
	if (!ctx.cr6.gt) goto loc_822BACE0;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r8,1
	ctx.r8.s64 = 1;
	// bgt cr6,0x822bacd0
	if (ctx.cr6.gt) goto loc_822BACD0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_822BACD0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822bacf0
	if (ctx.cr6.gt) goto loc_822BACF0;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x822bacf4
	goto loc_822BACF4;
loc_822BACE0:
	// li r8,0
	ctx.r8.s64 = 0;
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// li r9,1
	ctx.r9.s64 = 1;
	// bgt cr6,0x822bacf4
	if (ctx.cr6.gt) goto loc_822BACF4;
loc_822BACF0:
	// li r9,2
	ctx.r9.s64 = 2;
loc_822BACF4:
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfsx f3,r7,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f28,r6,r5
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	f28.f64 = double(temp.f32);
	// lfsx f0,r11,r4
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r10,r5
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f3,f0
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// fsubs f8,f13,f28
	ctx.f8.f64 = double(float(ctx.f13.f64 - f28.f64));
	// lfsx f9,r10,r4
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f7,r11,r5
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f12,f9,f13
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfsx f27,r7,r5
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	f27.f64 = double(temp.f32);
	// fsubs f11,f0,f7
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// lfsx f2,r6,r4
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f13,f7,f27
	ctx.f13.f64 = double(float(ctx.f7.f64 - f27.f64));
	// fsubs f9,f2,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// lfs f0,1996(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f6,f12,f13
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmsubs f13,f13,f9,f7
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, -ctx.f7.f64)));
	// fmsubs f8,f11,f8,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f8.f64, -ctx.f6.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822bad74
	if (!ctx.cr6.gt) goto loc_822BAD74;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x822bad74
	if (ctx.cr6.lt) goto loc_822BAD74;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// ble cr6,0x822bad8c
	if (!ctx.cr6.gt) goto loc_822BAD8C;
loc_822BAD74:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822badc4
	if (!ctx.cr6.lt) goto loc_822BADC4;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x822badc4
	if (ctx.cr6.gt) goto loc_822BADC4;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// blt cr6,0x822badc4
	if (ctx.cr6.lt) goto loc_822BADC4;
loc_822BAD8C:
	// fmuls f11,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fmsubs f12,f12,f10,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f11.f64)));
	// ble cr6,0x822badb4
	if (!ctx.cr6.gt) goto loc_822BADB4;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x822badb4
	if (ctx.cr6.lt) goto loc_822BADB4;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x822badb4
	if (ctx.cr6.gt) goto loc_822BADB4;
loc_822BADAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822bb38c
	goto loc_822BB38C;
loc_822BADB4:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x822badc4
	if (ctx.cr6.gt) goto loc_822BADC4;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x822badac
	if (!ctx.cr6.lt) goto loc_822BADAC;
loc_822BADC4:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lfsx f13,r6,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lfsx f5,r10,r4
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r7,r5
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f4,r11,r4
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f12,f5,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fsubs f11,f4,f8
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// lfsx f30,r9,r5
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	f30.f64 = double(temp.f32);
	// fsubs f7,f13,f30
	ctx.f7.f64 = double(float(ctx.f13.f64 - f30.f64));
	// lfsx f29,r8,r5
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	f29.f64 = double(temp.f32);
	// fsubs f13,f8,f29
	ctx.f13.f64 = double(float(ctx.f8.f64 - f29.f64));
	// fmuls f8,f7,f10
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f6,f12,f13
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmsubs f13,f13,f9,f8
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, -ctx.f8.f64)));
	// fmsubs f8,f11,f7,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, -ctx.f6.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822bae24
	if (!ctx.cr6.gt) goto loc_822BAE24;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x822bae24
	if (ctx.cr6.lt) goto loc_822BAE24;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// ble cr6,0x822bae3c
	if (!ctx.cr6.gt) goto loc_822BAE3C;
loc_822BAE24:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822bae6c
	if (!ctx.cr6.lt) goto loc_822BAE6C;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x822bae6c
	if (ctx.cr6.gt) goto loc_822BAE6C;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// blt cr6,0x822bae6c
	if (ctx.cr6.lt) goto loc_822BAE6C;
loc_822BAE3C:
	// fmuls f11,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fmsubs f12,f12,f10,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f11.f64)));
	// ble cr6,0x822bae5c
	if (!ctx.cr6.gt) goto loc_822BAE5C;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x822bae5c
	if (ctx.cr6.lt) goto loc_822BAE5C;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x822badac
	if (!ctx.cr6.gt) goto loc_822BADAC;
loc_822BAE5C:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x822bae6c
	if (ctx.cr6.gt) goto loc_822BAE6C;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x822badac
	if (!ctx.cr6.lt) goto loc_822BADAC;
loc_822BAE6C:
	// lfsx f13,r9,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f1,r10,r5
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f12,f5,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fsubs f8,f13,f1
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfsx f13,r8,r5
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f31,r11,r5
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	f31.f64 = double(temp.f32);
	// fsubs f11,f4,f13
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - f31.f64));
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f6,f12,f13
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmsubs f13,f13,f9,f7
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, -ctx.f7.f64)));
	// fmsubs f8,f11,f8,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f8.f64, -ctx.f6.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822baeb4
	if (!ctx.cr6.gt) goto loc_822BAEB4;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x822baeb4
	if (ctx.cr6.lt) goto loc_822BAEB4;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// ble cr6,0x822baecc
	if (!ctx.cr6.gt) goto loc_822BAECC;
loc_822BAEB4:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822baefc
	if (!ctx.cr6.lt) goto loc_822BAEFC;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x822baefc
	if (ctx.cr6.gt) goto loc_822BAEFC;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// blt cr6,0x822baefc
	if (ctx.cr6.lt) goto loc_822BAEFC;
loc_822BAECC:
	// fmuls f11,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fmsubs f12,f12,f10,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f11.f64)));
	// ble cr6,0x822baeec
	if (!ctx.cr6.gt) goto loc_822BAEEC;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x822baeec
	if (ctx.cr6.lt) goto loc_822BAEEC;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x822badac
	if (!ctx.cr6.gt) goto loc_822BADAC;
loc_822BAEEC:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x822baefc
	if (ctx.cr6.gt) goto loc_822BAEFC;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x822badac
	if (!ctx.cr6.lt) goto loc_822BADAC;
loc_822BAEFC:
	// lfsx f13,r7,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r10,r5
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f7,r8,r4
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f12,f28
	ctx.f8.f64 = double(float(ctx.f12.f64 - f28.f64));
	// fsubs f10,f7,f13
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// lfsx f11,r6,r4
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f6,r9,r4
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfsx f26,r11,r5
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	f26.f64 = double(temp.f32);
	// fsubs f9,f6,f11
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fsubs f11,f13,f26
	ctx.f11.f64 = double(float(ctx.f13.f64 - f26.f64));
	// fsubs f25,f26,f27
	f25.f64 = double(float(f26.f64 - f27.f64));
	// fmuls f13,f8,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f26,f12,f25
	f26.f64 = double(float(ctx.f12.f64 * f25.f64));
	// fmsubs f13,f25,f9,f13
	ctx.f13.f64 = double(float(std::fma(f25.f64, ctx.f9.f64, -ctx.f13.f64)));
	// fmsubs f8,f11,f8,f26
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f8.f64, -f26.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822baf54
	if (!ctx.cr6.gt) goto loc_822BAF54;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x822baf54
	if (ctx.cr6.lt) goto loc_822BAF54;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// ble cr6,0x822baf6c
	if (!ctx.cr6.gt) goto loc_822BAF6C;
loc_822BAF54:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822baf9c
	if (!ctx.cr6.lt) goto loc_822BAF9C;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x822baf9c
	if (ctx.cr6.gt) goto loc_822BAF9C;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// blt cr6,0x822baf9c
	if (ctx.cr6.lt) goto loc_822BAF9C;
loc_822BAF6C:
	// fmuls f11,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fmsubs f12,f12,f10,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f11.f64)));
	// ble cr6,0x822baf8c
	if (!ctx.cr6.gt) goto loc_822BAF8C;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x822baf8c
	if (ctx.cr6.lt) goto loc_822BAF8C;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x822badac
	if (!ctx.cr6.gt) goto loc_822BADAC;
loc_822BAF8C:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x822baf9c
	if (ctx.cr6.gt) goto loc_822BAF9C;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x822badac
	if (!ctx.cr6.lt) goto loc_822BADAC;
loc_822BAF9C:
	// lfsx f13,r6,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f13,f30
	ctx.f8.f64 = double(float(ctx.f13.f64 - f30.f64));
	// lfsx f11,r7,r5
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f2,f13
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// fsubs f26,f11,f29
	f26.f64 = double(float(ctx.f11.f64 - f29.f64));
	// fsubs f11,f3,f11
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// fmuls f13,f8,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f25,f12,f26
	f25.f64 = double(float(ctx.f12.f64 * f26.f64));
	// fmsubs f13,f26,f9,f13
	ctx.f13.f64 = double(float(std::fma(f26.f64, ctx.f9.f64, -ctx.f13.f64)));
	// fmsubs f8,f11,f8,f25
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f8.f64, -f25.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822bafdc
	if (!ctx.cr6.gt) goto loc_822BAFDC;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x822bafdc
	if (ctx.cr6.lt) goto loc_822BAFDC;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// ble cr6,0x822baff4
	if (!ctx.cr6.gt) goto loc_822BAFF4;
loc_822BAFDC:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822bb024
	if (!ctx.cr6.lt) goto loc_822BB024;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x822bb024
	if (ctx.cr6.gt) goto loc_822BB024;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// blt cr6,0x822bb024
	if (ctx.cr6.lt) goto loc_822BB024;
loc_822BAFF4:
	// fmuls f11,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fmsubs f12,f12,f10,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f11.f64)));
	// ble cr6,0x822bb014
	if (!ctx.cr6.gt) goto loc_822BB014;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x822bb014
	if (ctx.cr6.lt) goto loc_822BB014;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x822badac
	if (!ctx.cr6.gt) goto loc_822BADAC;
loc_822BB014:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x822bb024
	if (ctx.cr6.gt) goto loc_822BB024;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x822badac
	if (!ctx.cr6.lt) goto loc_822BADAC;
loc_822BB024:
	// lfsx f13,r9,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f13,f1
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfsx f11,r8,r5
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f2,f13
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// fsubs f26,f11,f31
	f26.f64 = double(float(ctx.f11.f64 - f31.f64));
	// fsubs f11,f3,f11
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// fmuls f13,f8,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f3,f12,f26
	ctx.f3.f64 = double(float(ctx.f12.f64 * f26.f64));
	// fmsubs f13,f26,f9,f13
	ctx.f13.f64 = double(float(std::fma(f26.f64, ctx.f9.f64, -ctx.f13.f64)));
	// fmsubs f8,f11,f8,f3
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f8.f64, -ctx.f3.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822bb064
	if (!ctx.cr6.gt) goto loc_822BB064;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x822bb064
	if (ctx.cr6.lt) goto loc_822BB064;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// ble cr6,0x822bb07c
	if (!ctx.cr6.gt) goto loc_822BB07C;
loc_822BB064:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822bb0ac
	if (!ctx.cr6.lt) goto loc_822BB0AC;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x822bb0ac
	if (ctx.cr6.gt) goto loc_822BB0AC;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// blt cr6,0x822bb0ac
	if (ctx.cr6.lt) goto loc_822BB0AC;
loc_822BB07C:
	// fmuls f11,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fmsubs f12,f12,f10,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f11.f64)));
	// ble cr6,0x822bb09c
	if (!ctx.cr6.gt) goto loc_822BB09C;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x822bb09c
	if (ctx.cr6.lt) goto loc_822BB09C;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x822badac
	if (!ctx.cr6.gt) goto loc_822BADAC;
loc_822BB09C:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x822bb0ac
	if (ctx.cr6.gt) goto loc_822BB0AC;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x822badac
	if (!ctx.cr6.lt) goto loc_822BADAC;
loc_822BB0AC:
	// lfsx f13,r8,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r10,r5
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f4,f13
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fsubs f8,f12,f28
	ctx.f8.f64 = double(float(ctx.f12.f64 - f28.f64));
	// lfsx f11,r9,r4
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f4,r11,r5
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f9,f5,f11
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f11,f13,f4
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fsubs f5,f4,f27
	ctx.f5.f64 = double(float(ctx.f4.f64 - f27.f64));
	// fmuls f13,f8,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmsubs f13,f5,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, ctx.f9.f64, -ctx.f13.f64)));
	// fmsubs f8,f11,f8,f4
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f8.f64, -ctx.f4.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822bb0fc
	if (!ctx.cr6.gt) goto loc_822BB0FC;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x822bb0fc
	if (ctx.cr6.lt) goto loc_822BB0FC;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// ble cr6,0x822bb114
	if (!ctx.cr6.gt) goto loc_822BB114;
loc_822BB0FC:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822bb144
	if (!ctx.cr6.lt) goto loc_822BB144;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x822bb144
	if (ctx.cr6.gt) goto loc_822BB144;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// blt cr6,0x822bb144
	if (ctx.cr6.lt) goto loc_822BB144;
loc_822BB114:
	// fmuls f11,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fmsubs f12,f12,f10,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f11.f64)));
	// ble cr6,0x822bb134
	if (!ctx.cr6.gt) goto loc_822BB134;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x822bb134
	if (ctx.cr6.lt) goto loc_822BB134;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x822badac
	if (!ctx.cr6.gt) goto loc_822BADAC;
loc_822BB134:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x822bb144
	if (ctx.cr6.gt) goto loc_822BB144;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x822badac
	if (!ctx.cr6.lt) goto loc_822BADAC;
loc_822BB144:
	// lfsx f13,r6,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f13,f30
	ctx.f8.f64 = double(float(ctx.f13.f64 - f30.f64));
	// lfsx f11,r7,r5
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f6,f13
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fsubs f5,f11,f29
	ctx.f5.f64 = double(float(ctx.f11.f64 - f29.f64));
	// fsubs f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmuls f13,f8,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmsubs f13,f5,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, ctx.f9.f64, -ctx.f13.f64)));
	// fmsubs f8,f11,f8,f4
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f8.f64, -ctx.f4.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822bb184
	if (!ctx.cr6.gt) goto loc_822BB184;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x822bb184
	if (ctx.cr6.lt) goto loc_822BB184;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// ble cr6,0x822bb19c
	if (!ctx.cr6.gt) goto loc_822BB19C;
loc_822BB184:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822bb1cc
	if (!ctx.cr6.lt) goto loc_822BB1CC;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x822bb1cc
	if (ctx.cr6.gt) goto loc_822BB1CC;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// blt cr6,0x822bb1cc
	if (ctx.cr6.lt) goto loc_822BB1CC;
loc_822BB19C:
	// fmuls f11,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fmsubs f12,f12,f10,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f11.f64)));
	// ble cr6,0x822bb1bc
	if (!ctx.cr6.gt) goto loc_822BB1BC;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x822bb1bc
	if (ctx.cr6.lt) goto loc_822BB1BC;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x822badac
	if (!ctx.cr6.gt) goto loc_822BADAC;
loc_822BB1BC:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x822bb1cc
	if (ctx.cr6.gt) goto loc_822BB1CC;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x822badac
	if (!ctx.cr6.lt) goto loc_822BADAC;
loc_822BB1CC:
	// lfsx f13,r9,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f13,f1
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfsx f11,r8,r5
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f6,f13
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fsubs f5,f11,f31
	ctx.f5.f64 = double(float(ctx.f11.f64 - f31.f64));
	// fsubs f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmuls f13,f8,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f7,f12,f5
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmsubs f13,f5,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, ctx.f9.f64, -ctx.f13.f64)));
	// fmsubs f8,f11,f8,f7
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f8.f64, -ctx.f7.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822bb20c
	if (!ctx.cr6.gt) goto loc_822BB20C;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x822bb20c
	if (ctx.cr6.lt) goto loc_822BB20C;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// ble cr6,0x822bb224
	if (!ctx.cr6.gt) goto loc_822BB224;
loc_822BB20C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822bb254
	if (!ctx.cr6.lt) goto loc_822BB254;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x822bb254
	if (ctx.cr6.gt) goto loc_822BB254;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// blt cr6,0x822bb254
	if (ctx.cr6.lt) goto loc_822BB254;
loc_822BB224:
	// fmuls f11,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fmsubs f12,f12,f10,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f11.f64)));
	// ble cr6,0x822bb244
	if (!ctx.cr6.gt) goto loc_822BB244;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x822bb244
	if (ctx.cr6.lt) goto loc_822BB244;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x822badac
	if (!ctx.cr6.gt) goto loc_822BADAC;
loc_822BB244:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x822bb254
	if (ctx.cr6.gt) goto loc_822BB254;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x822badac
	if (!ctx.cr6.lt) goto loc_822BADAC;
loc_822BB254:
	// lfsx f9,r6,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f6,r10,r5
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f12,r9,r5
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f5,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fsubs f4,f12,f9
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfsx f7,r7,r5
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f3,r11,r5
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f8,f6,f12
	ctx.f8.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// lfsx f11,r8,r5
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f2,f7,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// fsubs f31,f3,f11
	f31.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// lfsx f13,r11,r4
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f11,f7
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// lfsx f10,r10,r4
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f3,f3,f5
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f30,f7,f4
	f30.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fneg f2,f2
	ctx.f2.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fneg f7,f31
	ctx.f7.u64 = f31.u64 ^ 0x8000000000000000;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fneg f3,f3
	ctx.f3.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fneg f31,f30
	f31.u64 = f30.u64 ^ 0x8000000000000000;
	// fnmsubs f6,f6,f2,f3
	ctx.f6.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f2.f64, -ctx.f3.f64)));
	// fnmsubs f9,f9,f1,f31
	ctx.f9.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f1.f64, -f31.f64)));
	// fmadds f6,f13,f5,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f6.f64)));
	// fmadds f5,f13,f4,f9
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, ctx.f4.f64, ctx.f9.f64)));
	// fmadds f9,f10,f2,f6
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f2.f64, ctx.f6.f64)));
	// fmadds f6,f10,f1,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f1.f64, ctx.f5.f64)));
	// fmuls f6,f6,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// ble cr6,0x822bb2ec
	if (!ctx.cr6.gt) goto loc_822BB2EC;
	// fmuls f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fnmsubs f12,f12,f7,f11
	ctx.f12.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f7.f64, -ctx.f11.f64)));
	// fmadds f13,f13,f8,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, ctx.f12.f64)));
	// fmadds f13,f10,f7,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f7.f64, ctx.f13.f64)));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822badac
	if (ctx.cr6.gt) goto loc_822BADAC;
loc_822BB2EC:
	// lfsx f9,r6,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f6,r10,r4
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f12,r9,r4
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f5,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fsubs f4,f12,f9
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfsx f7,r7,r4
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f3,r11,r4
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f8,f6,f12
	ctx.f8.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// lfsx f11,r8,r4
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f2,f7,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// fsubs f31,f3,f11
	f31.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// lfsx f13,r11,r5
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f11,f7
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// lfsx f10,r10,r5
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f3,f3,f5
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f30,f7,f4
	f30.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fneg f2,f2
	ctx.f2.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fneg f7,f31
	ctx.f7.u64 = f31.u64 ^ 0x8000000000000000;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fneg f3,f3
	ctx.f3.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fneg f31,f30
	f31.u64 = f30.u64 ^ 0x8000000000000000;
	// fnmsubs f6,f6,f2,f3
	ctx.f6.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f2.f64, -ctx.f3.f64)));
	// fnmsubs f9,f9,f1,f31
	ctx.f9.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f1.f64, -f31.f64)));
	// fmadds f6,f13,f5,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f6.f64)));
	// fmadds f5,f13,f4,f9
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, ctx.f4.f64, ctx.f9.f64)));
	// fmadds f9,f10,f2,f6
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f2.f64, ctx.f6.f64)));
	// fmadds f6,f10,f1,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f1.f64, ctx.f5.f64)));
	// fmuls f6,f6,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// ble cr6,0x822bb388
	if (!ctx.cr6.gt) goto loc_822BB388;
	// fmuls f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fnmsubs f12,f12,f7,f11
	ctx.f12.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f7.f64, -ctx.f11.f64)));
	// fmadds f13,f13,f8,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, ctx.f12.f64)));
	// fmadds f13,f10,f7,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f7.f64, ctx.f13.f64)));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822bb38c
	if (ctx.cr6.gt) goto loc_822BB38C;
loc_822BB388:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822BB38C:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x822d4f78
	ctx.lr = 0x822BB394;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_117) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__savevmx_122) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_27) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx v27,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_74) {
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

DEFINE_REX_FUNC(sub_822E2090) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822e1eb8
	sub_822E1EB8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822E2160) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822E2168;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r9,r9,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r28,r11,104
	r28.s64 = ctx.r11.s64 + 104;
	// addi r29,r10,-11584
	r29.s64 = ctx.r10.s64 + -11584;
	// bne 0x822e2264
	if (!ctx.cr0.eq) goto loc_822E2264;
	// bl 0x822e15a8
	ctx.lr = 0x822E2190;
	sub_822E15A8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822e21d4
	if (ctx.cr6.eq) goto loc_822E21D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e15a8
	ctx.lr = 0x822E21A0;
	sub_822E15A8(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x822e21d4
	if (ctx.cr6.eq) goto loc_822E21D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e15a8
	ctx.lr = 0x822E21B0;
	sub_822E15A8(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822e15a8
	ctx.lr = 0x822E21C0;
	sub_822E15A8(ctx, base);
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r29.u32);
	// mulli r10,r10,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(72));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822e21d8
	goto loc_822E21D8;
loc_822E21D4:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_822E21D8:
	// lbz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e2264
	if (ctx.cr0.eq) goto loc_822E2264;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// blt 0x822e2208
	if (ctx.cr0.lt) goto loc_822E2208;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x822e2210
	goto loc_822E2210;
loc_822E2208:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e66e8
	ctx.lr = 0x822E2210;
	sub_822E66E8(ctx, base);
loc_822E2210:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822e2220
	if (!ctx.cr6.eq) goto loc_822E2220;
loc_822E2218:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822e23cc
	goto loc_822E23CC;
loc_822E2220:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stb r3,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// blt 0x822e2248
	if (ctx.cr0.lt) goto loc_822E2248;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x822e2250
	goto loc_822E2250;
loc_822E2248:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e66e8
	ctx.lr = 0x822E2250;
	sub_822E66E8(ctx, base);
loc_822E2250:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822e2218
	if (ctx.cr6.eq) goto loc_822E2218;
	// stb r3,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
loc_822E225C:
	// lhz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// b 0x822e23cc
	goto loc_822E23CC;
loc_822E2264:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e239c
	if (!ctx.cr0.eq) goto loc_822E239C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e15a8
	ctx.lr = 0x822E2278;
	sub_822E15A8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822e22bc
	if (ctx.cr6.eq) goto loc_822E22BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e15a8
	ctx.lr = 0x822E2288;
	sub_822E15A8(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x822e22bc
	if (ctx.cr6.eq) goto loc_822E22BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e15a8
	ctx.lr = 0x822E2298;
	sub_822E15A8(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822e15a8
	ctx.lr = 0x822E22A8;
	sub_822E15A8(ctx, base);
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r10,r30,r29
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + r29.u32);
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x822e22c0
	goto loc_822E22C0;
loc_822E22BC:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_822E22C0:
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e239c
	if (ctx.cr0.eq) goto loc_822E239C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r30,1
	r30.s64 = 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// blt 0x822e22f4
	if (ctx.cr0.lt) goto loc_822E22F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x822e22fc
	goto loc_822E22FC;
loc_822E22F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e66e8
	ctx.lr = 0x822E22FC;
	sub_822E66E8(ctx, base);
loc_822E22FC:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822e2218
	if (ctx.cr6.eq) goto loc_822E2218;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// stb r11,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// bl 0x822e17e0
	ctx.lr = 0x822E2314;
	sub_822E17E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822e236c
	if (ctx.cr0.eq) goto loc_822E236C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// blt 0x822e2340
	if (ctx.cr0.lt) goto loc_822E2340;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x822e2348
	goto loc_822E2348;
loc_822E2340:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e66e8
	ctx.lr = 0x822E2348;
	sub_822E66E8(ctx, base);
loc_822E2348:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822e2364
	if (!ctx.cr6.eq) goto loc_822E2364;
	// lbz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822e6618
	ctx.lr = 0x822E2360;
	sub_822E6618(ctx, base);
	// b 0x822e2218
	goto loc_822E2218;
loc_822E2364:
	// li r30,2
	r30.s64 = 2;
	// stb r3,85(r1)
	REX_STORE_U8(ctx.r1.u32 + 85, ctx.r3.u8);
loc_822E236C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e41e0
	ctx.lr = 0x822E237C;
	sub_822E41E0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822e225c
	if (!ctx.cr6.eq) goto loc_822E225C;
	// bl 0x822db6c0
	ctx.lr = 0x822E2388;
	sub_822DB6C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,42
	ctx.r10.s64 = 42;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822e23cc
	goto loc_822E23CC;
loc_822E239C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// blt 0x822e23c0
	if (ctx.cr0.lt) goto loc_822E23C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lhz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x822e23cc
	goto loc_822E23CC;
loc_822E23C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e62b0
	ctx.lr = 0x822E23C8;
	sub_822E62B0(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
loc_822E23CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822F0890) {
	REX_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,72(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r11,r11,96
	ctx.r11.u64 = ctx.r11.u64 | 96;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822f091c
	if (ctx.cr6.gt) goto loc_822F091C;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822f0908
	if (ctx.cr6.gt) goto loc_822F0908;
	// beq cr6,0x822f0900
	if (ctx.cr6.eq) goto loc_822F0900;
	// addis r11,r4,-9
	ctx.r11.s64 = ctx.r4.s64 + -589824;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x822f08f4
	if (ctx.cr6.eq) goto loc_822F08F4;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x822f098c
	if (!ctx.cr6.eq) goto loc_822F098C;
	// stw r5,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r5.u32);
	// blr 
	return;
loc_822F08F4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_822F0900:
	// sth r5,54(r9)
	REX_STORE_U16(ctx.r9.u32 + 54, ctx.r5.u16);
	// blr 
	return;
loc_822F0908:
	// addis r11,r4,-9
	ctx.r11.s64 = ctx.r4.s64 + -589824;
	// addic. r11,r11,-64
	ctx.xer.ca = ctx.r11.u32 > 63;
	ctx.r11.s64 = ctx.r11.s64 + -64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f0984
	if (!ctx.cr0.eq) goto loc_822F0984;
	// sth r5,52(r9)
	REX_STORE_U16(ctx.r9.u32 + 52, ctx.r5.u16);
	// blr 
	return;
loc_822F091C:
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r11,r11,144
	ctx.r11.u64 = ctx.r11.u64 | 144;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822f0978
	if (ctx.cr6.gt) goto loc_822F0978;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addis r11,r4,-9
	ctx.r11.s64 = ctx.r4.s64 + -589824;
	// addic. r11,r11,-112
	ctx.xer.ca = ctx.r11.u32 > 111;
	ctx.r11.s64 = ctx.r11.s64 + -112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f0964
	if (ctx.cr0.eq) goto loc_822F0964;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x822f098c
	if (!ctx.cr6.eq) goto loc_822F098C;
	// lwz r11,552(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 552);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x822f095c
	if (ctx.cr6.eq) goto loc_822F095C;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,183
	ctx.r3.u64 = ctx.r3.u64 | 183;
	// blr 
	return;
loc_822F095C:
	// stw r5,44(r9)
	REX_STORE_U32(ctx.r9.u32 + 44, ctx.r5.u32);
	// blr 
	return;
loc_822F0964:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r8,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// blr 
	return;
loc_822F0978:
	// addis r11,r4,-9
	ctx.r11.s64 = ctx.r4.s64 + -589824;
	// addic. r11,r11,-160
	ctx.xer.ca = ctx.r11.u32 > 159;
	ctx.r11.s64 = ctx.r11.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_822F0984:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822F098C:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,178
	ctx.r3.u64 = ctx.r3.u64 | 178;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F4F20) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r4,8
	ctx.r5.s64 = ctx.r4.s64 + 8;
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822F5B60) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5BA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f5bf8
	if (ctx.cr6.eq) goto loc_822F5BF8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822e91d0
	ctx.lr = 0x822F5BB8;
	sub_822E91D0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f5bdc
	if (ctx.cr6.eq) goto loc_822F5BDC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822F5BDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F5BDC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822F5BE0:
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
loc_822F5BF8:
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x822f5be0
	goto loc_822F5BE0;
}

DEFINE_REX_FUNC(sub_822F8FA8) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// blt cr6,0x822f8fc4
	if (ctx.cr6.lt) goto loc_822F8FC4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_822F8FC4:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F9990) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stb r11,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// lbz r11,512(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 512);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bge cr6,0x822f99d4
	if (!ctx.cr6.lt) goto loc_822F99D4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_822F99B0:
	// lwzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822f99e0
	if (!ctx.cr6.eq) goto loc_822F99E0;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x822f99b0
	if (ctx.cr6.lt) goto loc_822F99B0;
loc_822F99D4:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// blr 
	return;
loc_822F99E0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stb r10,512(r3)
	REX_STORE_U8(ctx.r3.u32 + 512, ctx.r10.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FB338) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822FB340;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822fb3ac
	if (ctx.cr6.eq) goto loc_822FB3AC;
loc_822FB358:
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822f94e8
	ctx.lr = 0x822FB374;
	sub_822F94E8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addi r5,r10,20
	ctx.r5.s64 = ctx.r10.s64 + 20;
	// bl 0x822f94e8
	ctx.lr = 0x822FB388;
	sub_822F94E8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// bl 0x822f94e8
	ctx.lr = 0x822FB398;
	sub_822F94E8(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r9.u32);
	// bne cr6,0x822fb358
	if (!ctx.cr6.eq) goto loc_822FB358;
loc_822FB3AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822FFE50) {
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
	ctx.lr = 0x822FFE58;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,704(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 704);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r28,16(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r29,24(r4)
	r29.u64 = REX_LOAD_U64(ctx.r4.u32 + 24);
	// li r27,1
	r27.s64 = 1;
	// lwz r25,32(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r26,8(r4)
	r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// beq cr6,0x822ffeac
	if (ctx.cr6.eq) goto loc_822FFEAC;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ffeac
	if (!ctx.cr6.eq) goto loc_822FFEAC;
	// lwz r11,696(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ffeac
	if (!ctx.cr6.eq) goto loc_822FFEAC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x822fff24
	if (ctx.cr6.eq) goto loc_822FFF24;
	// bl 0x82445c40
	ctx.lr = 0x822FFEA8;
	sub_82445C40(ctx, base);
	// stw r27,696(r31)
	REX_STORE_U32(r31.u32 + 696, r27.u32);
loc_822FFEAC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x822fff24
	if (ctx.cr6.eq) goto loc_822FFF24;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x822fff24
	if (ctx.cr6.eq) goto loc_822FFF24;
	// lhz r11,154(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 154);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x822ffed4
	if (!ctx.cr6.gt) goto loc_822FFED4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,154(r31)
	REX_STORE_U16(r31.u32 + 154, ctx.r11.u16);
loc_822FFED4:
	// ld r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 168);
	// cmpd cr6,r11,r29
	ctx.cr6.compare<int64_t>(ctx.r11.s64, r29.s64, ctx.xer);
	// beq cr6,0x822fff24
	if (ctx.cr6.eq) goto loc_822FFF24;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ffefc
	if (!ctx.cr6.eq) goto loc_822FFEFC;
	// std r29,168(r31)
	REX_STORE_U64(r31.u32 + 168, r29.u64);
	// stw r27,156(r31)
	REX_STORE_U32(r31.u32 + 156, r27.u32);
	// sth r27,154(r31)
	REX_STORE_U16(r31.u32 + 154, r27.u16);
	// b 0x822fff24
	goto loc_822FFF24;
loc_822FFEFC:
	// lhz r11,154(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 154);
	// std r29,176(r31)
	REX_STORE_U64(r31.u32 + 176, r29.u64);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,154(r31)
	REX_STORE_U16(r31.u32 + 154, ctx.r9.u16);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x822fff24
	if (ctx.cr6.eq) goto loc_822FFF24;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// sth r11,154(r31)
	REX_STORE_U16(r31.u32 + 154, ctx.r11.u16);
loc_822FFF24:
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822fff40
	if (ctx.cr6.eq) goto loc_822FFF40;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x822fff40
	if (ctx.cr6.eq) goto loc_822FFF40;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82465558
	ctx.lr = 0x822FFF40;
	sub_82465558(ctx, base);
loc_822FFF40:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r8,704(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 704);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r7,12(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// beq cr6,0x822fff78
	if (ctx.cr6.eq) goto loc_822FFF78;
	// bl 0x823195e0
	ctx.lr = 0x822FFF74;
	sub_823195E0(ctx, base);
	// b 0x822fff7c
	goto loc_822FFF7C;
loc_822FFF78:
	// bl 0x824658f0
	ctx.lr = 0x822FFF7C;
	sub_824658F0(ctx, base);
loc_822FFF7C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822fffe4
	if (ctx.cr6.lt) goto loc_822FFFE4;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x822fff9c
	if (!ctx.cr6.eq) goto loc_822FFF9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stw r27,696(r31)
	REX_STORE_U32(r31.u32 + 696, r27.u32);
loc_822FFF9C:
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822fffe4
	if (ctx.cr6.eq) goto loc_822FFFE4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x822fffc8
	if (!ctx.cr6.eq) goto loc_822FFFC8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x822fffe4
	if (ctx.cr6.eq) goto loc_822FFFE4;
loc_822FFFB8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_822FFFC8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x822fffe4
	if (ctx.cr6.eq) goto loc_822FFFE4;
	// cmpwi cr6,r25,8
	ctx.cr6.compare<int32_t>(r25.s32, 8, ctx.xer);
	// bge cr6,0x822fffb8
	if (!ctx.cr6.lt) goto loc_822FFFB8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82319a70
	ctx.lr = 0x822FFFE4;
	sub_82319A70(ctx, base);
loc_822FFFE4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82308898) {
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
	ctx.lr = 0x823088A0;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,28(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r30,0
	r30.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r23,r4,-24
	r23.s64 = ctx.r4.s64 + -24;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// sth r30,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, r30.u16);
	// stw r30,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// sth r30,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, r30.u16);
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stb r30,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823088F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// cmplwi cr6,r23,54
	ctx.cr6.compare<uint32_t>(r23.u32, 54, ctx.xer);
	// blt cr6,0x82308d94
	if (ctx.cr6.lt) goto loc_82308D94;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82307c58
	ctx.lr = 0x82308920;
	sub_82307C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82307c58
	ctx.lr = 0x82308940;
	sub_82307C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82307a88
	ctx.lr = 0x82308960;
	sub_82307A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823078f0
	ctx.lr = 0x82308980;
	sub_823078F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823078f0
	ctx.lr = 0x823089A0;
	sub_823078F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82307770
	ctx.lr = 0x823089C0;
	sub_82307770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823078f0
	ctx.lr = 0x823089E0;
	sub_823078F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lhz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lwz r3,148(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 148);
	// li r24,54
	r24.s64 = 54;
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// clrlwi r31,r11,25
	r31.u64 = ctx.r11.u32 & 0x7F;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// subfe r28,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	r28.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x822f9900
	ctx.lr = 0x82308A10;
	sub_822F9900(ctx, base);
	// lis r8,-32688
	ctx.r8.s64 = -2142240768;
	// ori r7,r8,22
	ctx.r7.u64 = ctx.r8.u64 | 22;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82308a38
	if (!ctx.cr6.eq) goto loc_82308A38;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lwz r3,148(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 148);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822f9818
	ctx.lr = 0x82308A30;
	sub_822F9818(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
loc_82308A38:
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// ld r26,128(r1)
	r26.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// li r29,1
	r29.s64 = 1;
	// addi r11,r11,-25400
	ctx.r11.s64 = ctx.r11.s64 + -25400;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// std r26,56(r7)
	REX_STORE_U64(ctx.r7.u32 + 56, r26.u64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r28,64(r6)
	REX_STORE_U32(ctx.r6.u32 + 64, r28.u32);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r29,68(r5)
	REX_STORE_U32(ctx.r5.u32 + 68, r29.u32);
loc_82308A70:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82308a90
	if (!ctx.cr0.eq) goto loc_82308A90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82308a70
	if (!ctx.cr6.eq) goto loc_82308A70;
loc_82308A90:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82308da4
	if (!ctx.cr6.eq) goto loc_82308DA4;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x822f9818
	ctx.lr = 0x82308AAC;
	sub_822F9818(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 224);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// bl 0x822f9490
	ctx.lr = 0x82308ACC;
	sub_822F9490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_82308AEC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82308aec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82308AEC;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r30,112(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lhz r9,38(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 38);
	// sth r9,44(r10)
	REX_STORE_U16(ctx.r10.u32 + 44, ctx.r9.u16);
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r29,48(r8)
	REX_STORE_U32(ctx.r8.u32 + 48, r29.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lhz r10,38(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 38);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// sth r6,38(r11)
	REX_STORE_U16(ctx.r11.u32 + 38, ctx.r6.u16);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lhz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,36(r11)
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r10.u16);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r29,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, r29.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// std r26,16(r6)
	REX_STORE_U64(ctx.r6.u32 + 16, r26.u64);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r28,24(r5)
	REX_STORE_U32(ctx.r5.u32 + 24, r28.u32);
	// beq cr6,0x82308d18
	if (ctx.cr6.eq) goto loc_82308D18;
	// addi r11,r30,54
	ctx.r11.s64 = r30.s64 + 54;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bgt cr6,0x82308d94
	if (ctx.cr6.gt) goto loc_82308D94;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82307770
	ctx.lr = 0x82308B7C;
	sub_82307770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r10.u16);
	// bl 0x82307770
	ctx.lr = 0x82308BAC;
	sub_82307770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r10.u16);
	// bl 0x823078f0
	ctx.lr = 0x82308BDC;
	sub_823078F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bl 0x823078f0
	ctx.lr = 0x82308C0C;
	sub_823078F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// bl 0x82307770
	ctx.lr = 0x82308C3C;
	sub_82307770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,12(r9)
	REX_STORE_U16(ctx.r9.u32 + 12, ctx.r10.u16);
	// bl 0x82307770
	ctx.lr = 0x82308C6C;
	sub_82307770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,14(r9)
	REX_STORE_U16(ctx.r9.u32 + 14, ctx.r10.u16);
	// bl 0x82307770
	ctx.lr = 0x82308C9C;
	sub_82307770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addis r10,r30,1
	ctx.r10.s64 = r30.s64 + 65536;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r10,r10,-18
	ctx.r10.s64 = ctx.r10.s64 + -18;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,16(r8)
	REX_STORE_U16(ctx.r8.u32 + 16, ctx.r10.u16);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,224(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 224);
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// lhz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// bl 0x822f9490
	ctx.lr = 0x82308CD4;
	sub_822F9490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// addi r31,r5,72
	r31.s64 = ctx.r5.s64 + 72;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// bgt cr6,0x82308d94
	if (ctx.cr6.gt) goto loc_82308D94;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82307e08
	ctx.lr = 0x82308D0C;
	sub_82307E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// mr r24,r31
	r24.u64 = r31.u64;
loc_82308D18:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82309214
	if (ctx.cr6.eq) goto loc_82309214;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-25416
	ctx.r11.s64 = ctx.r11.s64 + -25416;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82308D34:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82308d54
	if (!ctx.cr0.eq) goto loc_82308D54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82308d34
	if (!ctx.cr6.eq) goto loc_82308D34;
loc_82308D54:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82309214
	if (ctx.cr6.eq) goto loc_82309214;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-25432
	ctx.r11.s64 = ctx.r11.s64 + -25432;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82308D6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82308d8c
	if (!ctx.cr0.eq) goto loc_82308D8C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82308d6c
	if (!ctx.cr6.eq) goto loc_82308D6C;
loc_82308D8C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82309214
	if (ctx.cr6.eq) goto loc_82309214;
loc_82308D94:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ec4
	return;
loc_82308DA4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,23512
	ctx.r11.s64 = ctx.r11.s64 + 23512;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82308DB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82308dd4
	if (!ctx.cr0.eq) goto loc_82308DD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82308db4
	if (!ctx.cr6.eq) goto loc_82308DB4;
loc_82308DD4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823091c8
	if (!ctx.cr6.eq) goto loc_823091C8;
	// lwz r30,112(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82308d94
	if (ctx.cr6.eq) goto loc_82308D94;
	// cmplwi cr6,r30,51
	ctx.cr6.compare<uint32_t>(r30.u32, 51, ctx.xer);
	// blt cr6,0x82308d94
	if (ctx.cr6.lt) goto loc_82308D94;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x822f9818
	ctx.lr = 0x82308E04;
	sub_822F9818(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 224);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// bl 0x822f9490
	ctx.lr = 0x82308E24;
	sub_822F9490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x822d5870
	ctx.lr = 0x82308E40;
	sub_822D5870(ctx, base);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lhz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 40);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// sth r11,44(r8)
	REX_STORE_U16(ctx.r8.u32 + 44, ctx.r11.u16);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r9,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lhz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lhz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,36(r11)
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r8.u16);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// std r26,16(r8)
	REX_STORE_U64(ctx.r8.u32 + 16, r26.u64);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// bl 0x823078f0
	ctx.lr = 0x82308EAC;
	sub_823078F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// bl 0x823078f0
	ctx.lr = 0x82308EDC;
	sub_823078F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bl 0x82307660
	ctx.lr = 0x82308F0C;
	sub_82307660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82308d94
	if (!ctx.cr6.eq) goto loc_82308D94;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82307770
	ctx.lr = 0x82308F38;
	sub_82307770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823078f0
	ctx.lr = 0x82308F58;
	sub_823078F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823078f0
	ctx.lr = 0x82308F78;
	sub_823078F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// bl 0x823078f0
	ctx.lr = 0x82308FA8;
	sub_823078F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// bl 0x82307770
	ctx.lr = 0x82308FD8;
	sub_82307770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,16(r9)
	REX_STORE_U16(ctx.r9.u32 + 16, ctx.r10.u16);
	// bl 0x82307770
	ctx.lr = 0x82309008;
	sub_82307770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,18(r9)
	REX_STORE_U16(ctx.r9.u32 + 18, ctx.r10.u16);
	// bl 0x823078f0
	ctx.lr = 0x82309038;
	sub_823078F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stwbrx r9,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, __builtin_bswap32(ctx.r9.u32));
	// bl 0x823078f0
	ctx.lr = 0x8230906C;
	sub_823078F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// bl 0x823078f0
	ctx.lr = 0x8230909C;
	sub_823078F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// bl 0x823078f0
	ctx.lr = 0x823090CC;
	sub_823078F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r10.u32);
	// bl 0x823078f0
	ctx.lr = 0x823090FC;
	sub_823078F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// bl 0x823078f0
	ctx.lr = 0x8230912C;
	sub_823078F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r24,105
	r24.s64 = 105;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r30,51
	ctx.cr6.compare<uint32_t>(r30.u32, 51, ctx.xer);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r10.u32);
	// ble cr6,0x82309214
	if (!ctx.cr6.gt) goto loc_82309214;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addis r10,r30,1
	ctx.r10.s64 = r30.s64 + 65536;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r10,r10,-51
	ctx.r10.s64 = ctx.r10.s64 + -51;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,48(r8)
	REX_STORE_U16(ctx.r8.u32 + 48, ctx.r10.u16);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,224(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 224);
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// addi r6,r11,52
	ctx.r6.s64 = ctx.r11.s64 + 52;
	// lhz r5,48(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// bl 0x822f9490
	ctx.lr = 0x82309180;
	sub_822F9490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r5,48(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// addi r31,r5,105
	r31.s64 = ctx.r5.s64 + 105;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// bgt cr6,0x82308d94
	if (ctx.cr6.gt) goto loc_82308D94;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r4,52(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82307e08
	ctx.lr = 0x823091B8;
	sub_82307E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// mr r24,r31
	r24.u64 = r31.u64;
	// b 0x82309214
	goto loc_82309214;
loc_823091C8:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x822f9818
	ctx.lr = 0x823091DC;
	sub_822F9818(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lhz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,36(r11)
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r9.u16);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// std r26,16(r7)
	REX_STORE_U64(ctx.r7.u32 + 16, r26.u64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r30,48(r6)
	REX_STORE_U32(ctx.r6.u32 + 48, r30.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r30,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, r30.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, r31.u8);
loc_82309214:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lhz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 44);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,44(r11)
	REX_STORE_U16(ctx.r11.u32 + 44, ctx.r9.u16);
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// subf r6,r7,r23
	ctx.r6.u64 = r23.u64 - ctx.r7.u64;
	// subf. r31,r24,r6
	r31.u64 = ctx.r6.u64 - r24.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82309264
	if (ctx.cr0.eq) goto loc_82309264;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230924C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309264
	if (ctx.cr6.lt) goto loc_82309264;
	// ld r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U64(r25.u32 + 8);
	// clrldi r11,r31,32
	ctx.r11.u64 = r31.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r25)
	REX_STORE_U64(r25.u32 + 8, ctx.r11.u64);
loc_82309264:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82332FF8) {
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
	ctx.lr = 0x82333000;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233301c
	if (!ctx.cr6.eq) goto loc_8233301C;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ed4
	return;
loc_8233301C:
	// lwz r7,24688(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 24688);
	// lwz r10,712(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 712);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82333038
	if (ctx.cr6.eq) goto loc_82333038;
loc_8233302C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ed4
	return;
loc_82333038:
	// lwz r10,22036(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22036);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8233302c
	if (ctx.cr6.eq) goto loc_8233302C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,22032(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 22032);
	// lwz r8,20680(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20680);
	// li r6,3
	ctx.r6.s64 = 3;
	// ori r3,r10,45384
	ctx.r3.u64 = ctx.r10.u64 | 45384;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x823330b4
	if (ctx.cr6.eq) goto loc_823330B4;
	// lwz r10,20684(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20684);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823330b4
	if (ctx.cr6.eq) goto loc_823330B4;
	// lwz r10,21780(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21780);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lwz r9,21776(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 21776);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r6,-30856
	ctx.r3.s64 = ctx.r6.s64 + -30856;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// b 0x823330bc
	goto loc_823330BC;
loc_823330B4:
	// lwz r10,288(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_823330BC:
	// lwz r10,21864(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,21540(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 21540);
	// lwz r8,21544(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 21544);
	// lwz r6,21868(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 21868);
	// lwz r31,21680(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 21680);
	// lwz r30,3484(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 3484);
	// lwz r29,3488(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 3488);
	// lwz r28,21572(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 21572);
	// lwz r27,21576(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 21576);
	// lwz r11,22140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 22140);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r4,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r5,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// stw r28,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r28.u32);
	// stw r27,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r27.u32);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lwz r10,192(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 192);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82333124;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8233CCA0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r4,408(r3)
	REX_STORE_U32(ctx.r3.u32 + 408, ctx.r4.u32);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29512
	ctx.r11.s64 = ctx.r11.s64 + -29512;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// lwzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r7,412(r3)
	REX_STORE_U32(ctx.r3.u32 + 412, ctx.r7.u32);
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,416(r3)
	REX_STORE_U32(ctx.r3.u32 + 416, ctx.r6.u32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// slw r11,r9,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r5.u8 & 0x3F));
	// slw r10,r9,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r4.u8 & 0x3F));
	// stw r11,420(r3)
	REX_STORE_U32(ctx.r3.u32 + 420, ctx.r11.u32);
	// stw r10,424(r3)
	REX_STORE_U32(ctx.r3.u32 + 424, ctx.r10.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stw r9,428(r3)
	REX_STORE_U32(ctx.r3.u32 + 428, ctx.r9.u32);
	// stw r8,432(r3)
	REX_STORE_U32(ctx.r3.u32 + 432, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233F628) {
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
	ctx.lr = 0x8233F630;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// bl 0x822d9828
	ctx.lr = 0x8233F644;
	sub_822D9828(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233f72c
	if (ctx.cr6.eq) goto loc_8233F72C;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r23,0
	r23.s64 = 0;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8233F664:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8233f664
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8233F664;
	// addi r27,r29,4
	r27.s64 = r29.s64 + 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823a6710
	ctx.lr = 0x8233F67C;
	sub_823A6710(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233f724
	if (ctx.cr6.eq) goto loc_8233F724;
	// addi r26,r29,16
	r26.s64 = r29.s64 + 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823a6710
	ctx.lr = 0x8233F694;
	sub_823A6710(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233f71c
	if (ctx.cr6.eq) goto loc_8233F71C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8233d448
	ctx.lr = 0x8233F6A8;
	sub_8233D448(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233f6c0
	if (ctx.cr6.eq) goto loc_8233F6C0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8233F6C0;
	sub_822D5870(ctx, base);
loc_8233F6C0:
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8233f714
	if (ctx.cr6.eq) goto loc_8233F714;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d440c
	ctx.lr = 0x8233F6D4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233f714
	if (ctx.cr6.eq) goto loc_8233F714;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4384
	ctx.r5.s64 = ctx.r11.s64 + -4384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x8233fdb0
	ctx.lr = 0x8233F6F8;
	sub_8233FDB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233f738
	if (!ctx.cr6.eq) goto loc_8233F738;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233f714
	if (ctx.cr6.eq) goto loc_8233F714;
	// bl 0x8233d4c0
	ctx.lr = 0x8233F710;
	sub_8233D4C0(ctx, base);
	// stw r23,0(r29)
	REX_STORE_U32(r29.u32 + 0, r23.u32);
loc_8233F714:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823a6718
	ctx.lr = 0x8233F71C;
	sub_823A6718(ctx, base);
loc_8233F71C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823a6718
	ctx.lr = 0x8233F724;
	sub_823A6718(ctx, base);
loc_8233F724:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d98f0
	ctx.lr = 0x8233F72C;
	sub_822D98F0(ctx, base);
loc_8233F72C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
loc_8233F738:
	// li r11,512
	ctx.r11.s64 = 512;
	// stw r30,36(r29)
	REX_STORE_U32(r29.u32 + 36, r30.u32);
	// mr r24,r23
	r24.u64 = r23.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// stw r11,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r11.u32);
	// ble cr6,0x8233f85c
	if (!ctx.cr6.gt) goto loc_8233F85C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r25,r11,15387
	r25.s64 = ctx.r11.s64 + 15387;
loc_8233F758:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8233ea50
	ctx.lr = 0x8233F764;
	sub_8233EA50(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8233f84c
	if (ctx.cr6.lt) goto loc_8233F84C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8233ea50
	ctx.lr = 0x8233F77C;
	sub_8233EA50(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8233f82c
	if (ctx.cr6.lt) goto loc_8233F82C;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,32(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8233fdf0
	ctx.lr = 0x8233F7A0;
	sub_8233FDF0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233f80c
	if (ctx.cr6.eq) goto loc_8233F80C;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233f7bc
	if (ctx.cr6.lt) goto loc_8233F7BC;
	// bl 0x823ce368
	ctx.lr = 0x8233F7BC;
	sub_823CE368(ctx, base);
loc_8233F7BC:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8233f7d4
	if (!ctx.cr6.lt) goto loc_8233F7D4;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r31.u32);
loc_8233F7D4:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233f7e4
	if (ctx.cr6.lt) goto loc_8233F7E4;
	// bl 0x823ce368
	ctx.lr = 0x8233F7E4;
	sub_823CE368(ctx, base);
loc_8233F7E4:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8233f7fc
	if (!ctx.cr6.lt) goto loc_8233F7FC;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r23.u32);
loc_8233F7FC:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(r24.s32, r22.s32, ctx.xer);
	// blt cr6,0x8233f758
	if (ctx.cr6.lt) goto loc_8233F758;
	// b 0x8233f84c
	goto loc_8233F84C;
loc_8233F80C:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233f82c
	if (ctx.cr6.eq) goto loc_8233F82C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r11.u32);
	// stwx r23,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r23.u32);
loc_8233F82C:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233f84c
	if (ctx.cr6.eq) goto loc_8233F84C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r11.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stwx r23,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r23.u32);
loc_8233F84C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x8233f85c
	if (!ctx.cr6.gt) goto loc_8233F85C;
	// stw r23,28(r29)
	REX_STORE_U32(r29.u32 + 28, r23.u32);
	// b 0x8233f864
	goto loc_8233F864;
loc_8233F85C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,28(r29)
	REX_STORE_U32(r29.u32 + 28, ctx.r11.u32);
loc_8233F864:
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(r24.s32, r22.s32, ctx.xer);
	// bge cr6,0x8233f878
	if (!ctx.cr6.lt) goto loc_8233F878;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233edb0
	ctx.lr = 0x8233F874;
	sub_8233EDB0(ctx, base);
	// mr r29,r23
	r29.u64 = r23.u64;
loc_8233F878:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82353158) {
	REX_FUNC_PROLOGUE();
	// addis r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 65536;
	// addi r7,r7,-20148
	ctx.r7.s64 = ctx.r7.s64 + -20148;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82353214
	if (!ctx.cr6.eq) goto loc_82353214;
	// lwz r10,24688(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,712(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 712);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82353210
	if (ctx.cr6.eq) goto loc_82353210;
	// lwz r11,188(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r6,180(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// ori r5,r9,22528
	ctx.r5.u64 = ctx.r9.u64 | 22528;
	// lwz r8,776(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 776);
	// mullw r4,r11,r6
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addis r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 131072;
	// addi r11,r11,22527
	ctx.r11.s64 = ctx.r11.s64 + 22527;
	// divw r11,r11,r5
	ctx.r11.u64 = uint32_t((ctx.r5.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r11.s32 / ctx.r5.s32 : 0);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823531b0
	if (!ctx.cr6.lt) goto loc_823531B0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_823531B0:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x823531bc
	if (ctx.cr6.lt) goto loc_823531BC;
	// li r11,4
	ctx.r11.s64 = 4;
loc_823531BC:
	// lwz r9,288(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x823531e8
	if (ctx.cr6.eq) goto loc_823531E8;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x823531e8
	if (ctx.cr6.eq) goto loc_823531E8;
	// lwz r9,780(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 780);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x823531e0
	if (!ctx.cr6.gt) goto loc_823531E0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823531E0:
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823531f0
	goto loc_823531F0;
loc_823531E8:
	// lwz r9,780(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 780);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_823531F0:
	// stw r9,780(r10)
	REX_STORE_U32(ctx.r10.u32 + 780, ctx.r9.u32);
	// lwz r10,18464(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 18464);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82353210
	if (ctx.cr6.eq) goto loc_82353210;
	// lwz r10,288(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82353210
	if (!ctx.cr6.eq) goto loc_82353210;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82353210:
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_82353214:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823587F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// vspltish v13,15
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xF)));
	// sth r7,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r7.u16);
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// srawi. r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r9,r6,28
	ctx.r9.u64 = ctx.r6.u32 & 0xF;
	// vslb v13,v13,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v12,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_set1_epi16(short(0xF0E))));
	// ble 0x82358868
	if (!ctx.cr0.gt) goto loc_82358868;
	// vsubuhm v11,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82358828:
	// lvx128 v13,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lvx128 v12,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// vmrglb v10,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v6,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v5,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v4,v6,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v3,v5,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vpkshus128 v63,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// stvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bdnz 0x82358828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82358828;
loc_82358868:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r8,r5,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r6,r5,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r5.u64;
loc_82358880:
	// lbzx r11,r8,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addic. r11,r11,-128
	ctx.xer.ca = ctx.r11.u32 > 127;
	ctx.r11.s64 = ctx.r11.s64 + -128;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x823588a0
	if (!ctx.cr0.lt) goto loc_823588A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823588ac
	goto loc_823588AC;
loc_823588A0:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x823588ac
	if (!ctx.cr6.gt) goto loc_823588AC;
	// li r11,255
	ctx.r11.s64 = 255;
loc_823588AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stbx r11,r6,r10
	REX_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82358880
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82358880;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235BDF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x8235c118
	if (!ctx.cr6.gt) goto loc_8235C118;
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// ble cr6,0x8235c118
	if (!ctx.cr6.gt) goto loc_8235C118;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// std r8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f0,4000(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 4000);
	// fadd f11,f1,f0
	ctx.f11.f64 = ctx.f1.f64 + ctx.f0.f64;
	// lfs f13,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f4,f13
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f13,15944(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15944);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f3,f13
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fctiwz f8,f11
	ctx.f8.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f7,-16(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// fsubs f13,f2,f10
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// fneg f4,f10
	ctx.f4.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// frsp f12,f5
	ctx.f12.f64 = double(float(ctx.f5.f64));
	// fsubs f11,f2,f4
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fadds f10,f3,f9
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x8235be80
	if (!ctx.cr6.gt) goto loc_8235BE80;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_8235BE80:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r5,-12(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f12,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// blt cr6,0x8235bef8
	if (ctx.cr6.lt) goto loc_8235BEF8;
	// fadds f13,f1,f12
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fadd f9,f13,f0
	ctx.f9.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8235BEBC:
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
	// stw r9,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
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
	// blt cr6,0x8235bebc
	if (ctx.cr6.lt) goto loc_8235BEBC;
loc_8235BEF8:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235bf34
	if (!ctx.cr6.lt) goto loc_8235BF34;
	// fadds f13,f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fadd f9,f13,f0
	ctx.f9.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8235BF24:
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235bf24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235BF24;
loc_8235BF34:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// frsp f13,f9
	ctx.f13.f64 = double(float(ctx.f9.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x8235bf58
	if (ctx.cr6.gt) goto loc_8235BF58;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
loc_8235BF58:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r5,-12(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235c004
	if (!ctx.cr6.lt) goto loc_8235C004;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8235bfcc
	if (ctx.cr6.lt) goto loc_8235BFCC;
	// fadd f13,f10,f0
	ctx.f13.f64 = ctx.f10.f64 + ctx.f0.f64;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8235BF90:
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
	// blt cr6,0x8235bf90
	if (ctx.cr6.lt) goto loc_8235BF90;
loc_8235BFCC:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235c004
	if (!ctx.cr6.lt) goto loc_8235C004;
	// fadd f13,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f10.f64 + ctx.f0.f64;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8235BFF4:
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235bff4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235BFF4;
loc_8235C004:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8235c044
	if (!ctx.cr6.lt) goto loc_8235C044;
	// fadds f13,f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fadd f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8235C028:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8235c028
	if (ctx.cr6.lt) goto loc_8235C028;
loc_8235C044:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8235c080
	if (!ctx.cr6.gt) goto loc_8235C080;
	// fadd f13,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64 + ctx.f0.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8235C064:
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8235c064
	if (ctx.cr6.lt) goto loc_8235C064;
loc_8235C080:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8235c1a8
	if (!ctx.cr6.gt) goto loc_8235C1A8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,2008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
loc_8235C09C:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
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
	// stfiwx f7,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.f7.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwzx r10,r11,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r8.u64);
	// lfd f6,-8(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
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
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8235c09c
	if (ctx.cr6.lt) goto loc_8235C09C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8235C118:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235c1a8
	if (!ctx.cr6.gt) goto loc_8235C1A8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// lfd f0,4000(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 4000);
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
	// stfd f7,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f7.u64);
	// lwz r9,-4(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// fctiwz f6,f9
	ctx.f6.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f6.u64);
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f5.u64);
	// lwz r7,-4(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// lwz r8,-12(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8235C174:
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r7,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stwx r9,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r4,28(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stwx r8,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u32);
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
	// blt cr6,0x8235c174
	if (ctx.cr6.lt) goto loc_8235C174;
loc_8235C1A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82367110) {
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
	// bl 0x822d4e64
	ctx.lr = 0x82367118;
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
	// bne 0x82367258
	if (!ctx.cr0.eq) goto loc_82367258;
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
	// beq 0x82367258
	if (ctx.cr0.eq) goto loc_82367258;
	// clrlwi r21,r30,31
	r21.u64 = r30.u32 & 0x1;
	// mr r25,r19
	r25.u64 = r19.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82367338
	if (!ctx.cr6.gt) goto loc_82367338;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r27,r19
	r27.u64 = r19.u64;
	// add r24,r30,r11
	r24.u64 = r30.u64 + ctx.r11.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r26,r11,-24048
	r26.s64 = ctx.r11.s64 + -24048;
loc_823671A8:
	// mr r28,r21
	r28.u64 = r21.u64;
	// cmpw cr6,r21,r30
	ctx.cr6.compare<int32_t>(r21.s32, r30.s32, ctx.xer);
	// bge cr6,0x82367244
	if (!ctx.cr6.lt) goto loc_82367244;
loc_823671B4:
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
	// bl 0x82341818
	ctx.lr = 0x823671CC;
	sub_82341818(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823674a0
	if (!ctx.cr6.eq) goto loc_823674A0;
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
	// blt cr6,0x823671b4
	if (ctx.cr6.lt) goto loc_823671B4;
loc_82367244:
	// addi r25,r25,3
	r25.s64 = r25.s64 + 3;
	// add r27,r24,r27
	r27.u64 = r24.u64 + r27.u64;
	// cmpw cr6,r25,r22
	ctx.cr6.compare<int32_t>(r25.s32, r22.s32, ctx.xer);
	// blt cr6,0x823671a8
	if (ctx.cr6.lt) goto loc_823671A8;
	// b 0x82367338
	goto loc_82367338;
loc_82367258:
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
	// bge cr6,0x82367338
	if (!ctx.cr6.lt) goto loc_82367338;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mullw r27,r30,r20
	r27.s64 = int64_t(r30.s32) * int64_t(r20.s32);
	// rlwinm r24,r30,1,0,30
	r24.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r26,r11,-24048
	r26.s64 = ctx.r11.s64 + -24048;
loc_82367290:
	// mr r28,r21
	r28.u64 = r21.u64;
	// cmpw cr6,r21,r30
	ctx.cr6.compare<int32_t>(r21.s32, r30.s32, ctx.xer);
	// bge cr6,0x82367328
	if (!ctx.cr6.lt) goto loc_82367328;
loc_8236729C:
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
	// bl 0x82341818
	ctx.lr = 0x823672B4;
	sub_82341818(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823674a0
	if (!ctx.cr6.eq) goto loc_823674A0;
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
	// blt cr6,0x8236729c
	if (ctx.cr6.lt) goto loc_8236729C;
loc_82367328:
	// addi r25,r25,2
	r25.s64 = r25.s64 + 2;
	// add r27,r27,r24
	r27.u64 = r27.u64 + r24.u64;
	// cmpw cr6,r25,r22
	ctx.cr6.compare<int32_t>(r25.s32, r22.s32, ctx.xer);
	// blt cr6,0x82367290
	if (ctx.cr6.lt) goto loc_82367290;
loc_82367338:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x823673e8
	if (!ctx.cr6.gt) goto loc_823673E8;
	// mr r26,r29
	r26.u64 = r29.u64;
	// mr r25,r21
	r25.u64 = r21.u64;
loc_82367348:
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
	// bge 0x82367370
	if (!ctx.cr0.lt) goto loc_82367370;
	// bl 0x823380c8
	ctx.lr = 0x82367370;
	sub_823380C8(ctx, base);
loc_82367370:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823673c4
	if (ctx.cr6.eq) goto loc_823673C4;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x823673dc
	if (!ctx.cr6.gt) goto loc_823673DC;
	// subf r27,r30,r26
	r27.u64 = r26.u64 - r30.u64;
	// mr r31,r22
	r31.u64 = r22.u64;
loc_82367388:
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
	// bge 0x823673b0
	if (!ctx.cr0.lt) goto loc_823673B0;
	// bl 0x823380c8
	ctx.lr = 0x823673B0;
	sub_823380C8(ctx, base);
loc_823673B0:
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stbux r11,r27,r30
	ea = r27.u32 + r30.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	r27.u32 = ea;
	// bne 0x82367388
	if (!ctx.cr0.eq) goto loc_82367388;
	// b 0x823673dc
	goto loc_823673DC;
loc_823673C4:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x823673dc
	if (!ctx.cr6.gt) goto loc_823673DC;
	// subf r11,r30,r26
	ctx.r11.u64 = r26.u64 - r30.u64;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
loc_823673D4:
	// stbux r19,r11,r30
	ea = ctx.r11.u32 + r30.u32;
	REX_STORE_U8(ea, r19.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823673d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823673D4;
loc_823673DC:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// bne 0x82367348
	if (!ctx.cr0.eq) goto loc_82367348;
loc_823673E8:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x8236749c
	if (ctx.cr6.eq) goto loc_8236749C;
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
	// bge 0x82367418
	if (!ctx.cr0.lt) goto loc_82367418;
	// bl 0x823380c8
	ctx.lr = 0x82367418;
	sub_823380C8(ctx, base);
loc_82367418:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82367474
	if (ctx.cr6.eq) goto loc_82367474;
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmpw cr6,r21,r30
	ctx.cr6.compare<int32_t>(r21.s32, r30.s32, ctx.xer);
	// bge cr6,0x8236749c
	if (!ctx.cr6.lt) goto loc_8236749C;
loc_8236742C:
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
	// bge 0x82367454
	if (!ctx.cr0.lt) goto loc_82367454;
	// bl 0x823380c8
	ctx.lr = 0x82367454;
	sub_823380C8(ctx, base);
loc_82367454:
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// stbx r11,r31,r29
	REX_STORE_U8(r31.u32 + r29.u32, ctx.r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
	// blt cr6,0x8236742c
	if (ctx.cr6.lt) goto loc_8236742C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb4
	return;
loc_82367474:
	// cmpw cr6,r21,r30
	ctx.cr6.compare<int32_t>(r21.s32, r30.s32, ctx.xer);
	// bge cr6,0x8236749c
	if (!ctx.cr6.lt) goto loc_8236749C;
	// add r10,r21,r29
	ctx.r10.u64 = r21.u64 + r29.u64;
	// subf. r11,r21,r30
	ctx.r11.u64 = r30.u64 - r21.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// beq 0x8236749c
	if (ctx.cr0.eq) goto loc_8236749C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82367494:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82367494
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367494;
loc_8236749C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823674A0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_82379A30) {
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
	// bl 0x822d4e70
	ctx.lr = 0x82379A38;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v0,15
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0xF)));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vslb v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq cr6,0x82379d70
	if (ctx.cr6.eq) goto loc_82379D70;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r11,16
	ctx.r11.s64 = 16;
	// beq cr6,0x82379cf0
	if (ctx.cr6.eq) goto loc_82379CF0;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v60,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// add r31,r8,r3
	r31.u64 = ctx.r8.u64 + ctx.r3.u64;
	// vspltish v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x2)));
	// add r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vor128 v7,v63,v60
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// lvlx128 v62,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// lvlx128 v61,r8,r3
	temp.u32 = ctx.r8.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltish v6,4
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x4)));
	// lvlx128 v56,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r1,-176
	r30.s64 = ctx.r1.s64 + -176;
	// lvrx128 v59,r11,r31
	temp.u32 = ctx.r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vslh v4,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v8,v61,v59
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvrx128 v57,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// lvrx128 v58,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vslh v1,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r29,r1,-144
	r29.s64 = ctx.r1.s64 + -144;
	// vor128 v10,v62,v58
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// addi r26,r1,-192
	r26.s64 = ctx.r1.s64 + -192;
	// vslh v3,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// vslh v2,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r28,r1,-144
	r28.s64 = ctx.r1.s64 + -144;
	// vaddshs v5,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrghh v7,v6,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vslh v25,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghh v6,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vslh v24,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r25,r1,-192
	r25.s64 = ctx.r1.s64 + -192;
	// vaddshs v31,v2,v3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// addi r27,r1,-160
	r27.s64 = ctx.r1.s64 + -160;
	// vaddshs v30,v1,v4
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vaddshs v8,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// addi r24,r1,-160
	r24.s64 = ctx.r1.s64 + -160;
	// vslh v29,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// subf r23,r7,r6
	r23.u64 = ctx.r6.u64 - ctx.r7.u64;
	// vslh v28,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// subf r22,r3,r6
	r22.u64 = ctx.r6.u64 - ctx.r3.u64;
	// vsubshs v10,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// vaddshs v27,v31,v5
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vaddshs v26,v30,v5
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v20,v24,v25
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vaddshs v21,v28,v29
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vsubshs v23,v27,v10
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v22,v26,v10
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v16,v20,v8
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v17,v21,v8
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v19,v23,v6
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v18,v22,v7
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v9,v16,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v10,v17,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsrah v15,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v14,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v7,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v12,v15,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v11,v14,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v10,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v13,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vpkshus128 v55,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// stvx128 v12,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v54,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v11,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v52,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// stvx128 v10,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v53,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// stvx128 v55,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r31,-176(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// stvx128 v54,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r30,-144(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// stvx128 v52,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r29,-192(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// stvx128 v53,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r28,-156(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// lwz r25,-160(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// add r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stw r25,0(r22)
	REX_STORE_U32(r22.u32 + 0, r25.u32);
	// lwz r26,-172(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r25,-140(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// lwz r27,-188(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// stw r31,0(r23)
	REX_STORE_U32(r23.u32 + 0, r31.u32);
	// stw r30,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r30.u32);
	// stwx r29,r6,r7
	REX_STORE_U32(ctx.r6.u32 + ctx.r7.u32, r29.u32);
	// stw r28,4(r22)
	REX_STORE_U32(r22.u32 + 4, r28.u32);
	// stw r26,4(r23)
	REX_STORE_U32(r23.u32 + 4, r26.u32);
	// stw r25,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, r25.u32);
	// stw r27,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r27.u32);
	// bne cr6,0x82379f90
	if (!ctx.cr6.eq) goto loc_82379F90;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r9,r6,r4
	ctx.r9.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r31,r5,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lvlx128 v51,r6,r4
	temp.u32 = ctx.r6.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r30,r1,-144
	r30.s64 = ctx.r1.s64 + -144;
	// lvlx128 v50,r8,r9
	temp.u32 = ctx.r8.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r8,r31,r9
	ctx.r8.u64 = r31.u64 + ctx.r9.u64;
	// lvlx128 v49,r6,r9
	temp.u32 = ctx.r6.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// lvrx128 v48,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r5,r1,-160
	ctx.r5.s64 = ctx.r1.s64 + -160;
	// lvrx128 v47,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v13,v50,v48
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// lvlx128 v46,r31,r9
	temp.u32 = r31.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v49,v47
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvrx128 v45,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r4,r1,-160
	ctx.r4.s64 = ctx.r1.s64 + -160;
	// lvrx128 v44,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v11,v46,v45
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vor128 v10,v51,v44
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// addi r9,r1,-176
	ctx.r9.s64 = ctx.r1.s64 + -176;
	// vaddshs v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// addi r8,r1,-176
	ctx.r8.s64 = ctx.r1.s64 + -176;
	// vaddshs v12,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// vaddshs v11,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// addi r29,r1,-192
	r29.s64 = ctx.r1.s64 + -192;
	// vaddshs v0,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vpkshus128 v43,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// stvx128 v13,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v42,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// stvx128 v12,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v41,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v40,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stvx128 v43,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,-144(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// stvx128 v42,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r5,-160(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// stvx128 v41,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,-176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// stvx128 v40,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r31,-188(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r30,-140(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// add r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwz r29,-156(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// lwz r28,-172(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r27,-192(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// stw r27,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r27.u32);
	// stwx r6,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r6.u32);
	// stwx r5,r3,r10
	REX_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r5.u32);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// stw r30,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r30.u32);
	// stw r29,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, r29.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// b 0x822d4ec0
	return;
loc_82379CF0:
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvrx128 v38,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v39,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,-144
	ctx.r9.s64 = ctx.r1.s64 + -144;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vor128 v12,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// addi r5,r1,-160
	ctx.r5.s64 = ctx.r1.s64 + -160;
	// addi r4,r1,-160
	ctx.r4.s64 = ctx.r1.s64 + -160;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lvrx128 v37,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v36,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// subf r10,r3,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r3.u64;
	// vor128 v11,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// vaddshs v13,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v0,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vpkshus128 v35,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v34,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v35,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,-144(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// stvx128 v34,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,-156(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// lwz r6,-140(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// lwz r5,-160(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// b 0x822d4ec0
	return;
loc_82379D70:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82379f90
	if (ctx.cr6.eq) goto loc_82379F90;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,16
	ctx.r11.s64 = 16;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// beq cr6,0x82379dfc
	if (ctx.cr6.eq) goto loc_82379DFC;
	// lvrx128 v32,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,-144
	ctx.r3.s64 = ctx.r1.s64 + -144;
	// lvlx128 v33,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,-144
	ctx.r4.s64 = ctx.r1.s64 + -144;
	// vor128 v13,v33,v32
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// lvrx128 v62,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,-160
	ctx.r8.s64 = ctx.r1.s64 + -160;
	// vor128 v12,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// addi r5,r1,-160
	ctx.r5.s64 = ctx.r1.s64 + -160;
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// vaddshs v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v0,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vpkshus128 v61,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// stvx128 v13,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v60,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,-140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// lwz r11,-144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// stvx128 v60,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r10,-160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// lwz r8,-156(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// stwx r10,r6,r7
	REX_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r10.u32);
	// stw r3,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r3.u32);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// b 0x822d4ec0
	return;
loc_82379DFC:
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvrx128 v58,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v59,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r31,r5,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 + ctx.r9.u64;
	// vor128 v13,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lvrx128 v57,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v55,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r5,r31
	ctx.r10.u64 = ctx.r5.u64 + r31.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vor128 v12,v55,v57
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vaddshs v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// rlwinm r3,r5,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r1,-160
	r30.s64 = ctx.r1.s64 + -160;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vaddshs v12,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// lvrx128 v56,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vpkshus128 v52,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// lvlx128 v54,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvlx128 v47,r3,r4
	temp.u32 = ctx.r3.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r1,-176
	r29.s64 = ctx.r1.s64 + -176;
	// stvx128 v13,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvrx128 v53,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r5,r1,-160
	ctx.r5.s64 = ctx.r1.s64 + -160;
	// lvlx128 v49,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v11,v54,v56
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// addi r30,r1,-112
	r30.s64 = ctx.r1.s64 + -112;
	// lvrx128 v48,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v10,v49,v53
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// stvx128 v12,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v9,v47,v48
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// lvrx128 v46,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r1,-128
	ctx.r8.s64 = ctx.r1.s64 + -128;
	// lvlx128 v45,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddshs v11,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v52,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v8,v45,v46
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// vaddshs v10,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vpkshus128 v51,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v9,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// addi r28,r1,-192
	r28.s64 = ctx.r1.s64 + -192;
	// vpkshus128 v50,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// addi r29,r1,-144
	r29.s64 = ctx.r1.s64 + -144;
	// vaddshs v0,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// vpkshus128 v44,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// addi r4,r1,-176
	ctx.r4.s64 = ctx.r1.s64 + -176;
	// stvx128 v9,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,-192
	ctx.r3.s64 = ctx.r1.s64 + -192;
	// addi r30,r1,-144
	r30.s64 = ctx.r1.s64 + -144;
	// stvx128 v10,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v42,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stvx128 v0,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stvx128 v11,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stvx128 v51,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stvx128 v50,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stvx128 v44,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r29,-192(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// stvx128 v42,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,-112
	ctx.r4.s64 = ctx.r1.s64 + -112;
	// lwz r30,-144(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r31,-176(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r28,-140(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// vpkshus128 v43,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r3,-160(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// stvx128 v43,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,-128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -128);
	// stw r3,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// stwx r31,r6,r7
	REX_STORE_U32(ctx.r6.u32 + ctx.r7.u32, r31.u32);
	// lwz r3,-156(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// lwz r7,-172(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// stw r4,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// lwz r31,-188(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r29,-112(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -112);
	// lwz r4,-124(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// stw r29,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r29.u32);
	// stw r30,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r30.u32);
	// stw r3,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r3.u32);
	// stw r7,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// lwz r29,-108(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// stw r29,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r29.u32);
	// stw r28,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, r28.u32);
loc_82379F90:
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_823A6710) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x823a6688
	sub_823A6688(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823A6770) {
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
	// bl 0x822d4e74
	ctx.lr = 0x823A6778;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,156(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r23,160(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// bl 0x8233c788
	ctx.lr = 0x823A678C;
	sub_8233C788(ctx, base);
	// li r25,1
	r25.s64 = 1;
	// li r26,0
	r26.s64 = 0;
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823a6808
	if (!ctx.cr6.lt) goto loc_823A6808;
loc_823A67B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a6808
	if (ctx.cr6.eq) goto loc_823A6808;
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
	// bge 0x823a67f8
	if (!ctx.cr0.lt) goto loc_823A67F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A67F8;
	sub_823380C8(ctx, base);
loc_823A67F8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a67b0
	if (ctx.cr6.gt) goto loc_823A67B0;
loc_823A6808:
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
	// bge 0x823a6840
	if (!ctx.cr0.lt) goto loc_823A6840;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A6840;
	sub_823380C8(ctx, base);
loc_823A6840:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x823a6934
	if (ctx.cr6.eq) goto loc_823A6934;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,4
	r30.s64 = 4;
	// stw r25,21920(r27)
	REX_STORE_U32(r27.u32 + 21920, r25.u32);
	// mr r29,r26
	r29.u64 = r26.u64;
	// stw r25,21916(r27)
	REX_STORE_U32(r27.u32 + 21916, r25.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x823a68c4
	if (!ctx.cr6.lt) goto loc_823A68C4;
loc_823A686C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a68c4
	if (ctx.cr6.eq) goto loc_823A68C4;
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
	// bge 0x823a68b4
	if (!ctx.cr0.lt) goto loc_823A68B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A68B4;
	sub_823380C8(ctx, base);
loc_823A68B4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a686c
	if (ctx.cr6.gt) goto loc_823A686C;
loc_823A68C4:
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
	// bge 0x823a68fc
	if (!ctx.cr0.lt) goto loc_823A68FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A68FC;
	sub_823380C8(ctx, base);
loc_823A68FC:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// bgt cr6,0x823a6910
	if (ctx.cr6.gt) goto loc_823A6910;
	// stw r30,21928(r27)
	REX_STORE_U32(r27.u32 + 21928, r30.u32);
	// stw r30,21924(r27)
	REX_STORE_U32(r27.u32 + 21924, r30.u32);
	// b 0x823a693c
	goto loc_823A693C;
loc_823A6910:
	// addi r10,r30,-8
	ctx.r10.s64 = r30.s64 + -8;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r10,21924(r27)
	REX_STORE_U32(r27.u32 + 21924, ctx.r10.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// stw r11,21928(r27)
	REX_STORE_U32(r27.u32 + 21928, ctx.r11.u32);
	// blt cr6,0x823a692c
	if (ctx.cr6.lt) goto loc_823A692C;
	// li r11,8
	ctx.r11.s64 = 8;
loc_823A692C:
	// stw r11,21928(r27)
	REX_STORE_U32(r27.u32 + 21928, ctx.r11.u32);
	// b 0x823a693c
	goto loc_823A693C;
loc_823A6934:
	// stw r26,21920(r27)
	REX_STORE_U32(r27.u32 + 21920, r26.u32);
	// stw r26,21916(r27)
	REX_STORE_U32(r27.u32 + 21916, r26.u32);
loc_823A693C:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823a69b0
	if (!ctx.cr6.lt) goto loc_823A69B0;
loc_823A6958:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a69b0
	if (ctx.cr6.eq) goto loc_823A69B0;
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
	// bge 0x823a69a0
	if (!ctx.cr0.lt) goto loc_823A69A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A69A0;
	sub_823380C8(ctx, base);
loc_823A69A0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a6958
	if (ctx.cr6.gt) goto loc_823A6958;
loc_823A69B0:
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
	// bge 0x823a69e8
	if (!ctx.cr0.lt) goto loc_823A69E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A69E8;
	sub_823380C8(ctx, base);
loc_823A69E8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x823a6a04
	if (!ctx.cr6.eq) goto loc_823A6A04;
	// lwz r11,22056(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 22056);
	// lwz r10,22060(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 22060);
	// stw r11,156(r27)
	REX_STORE_U32(r27.u32 + 156, ctx.r11.u32);
	// stw r10,160(r27)
	REX_STORE_U32(r27.u32 + 160, ctx.r10.u32);
	// b 0x823a6d24
	goto loc_823A6D24;
loc_823A6A04:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,2
	r30.s64 = 2;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823a6a78
	if (!ctx.cr6.lt) goto loc_823A6A78;
loc_823A6A20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a6a78
	if (ctx.cr6.eq) goto loc_823A6A78;
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
	// bge 0x823a6a68
	if (!ctx.cr0.lt) goto loc_823A6A68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A6A68;
	sub_823380C8(ctx, base);
loc_823A6A68:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a6a20
	if (ctx.cr6.gt) goto loc_823A6A20;
loc_823A6A78:
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
	// bge 0x823a6ab0
	if (!ctx.cr0.lt) goto loc_823A6AB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A6AB0;
	sub_823380C8(ctx, base);
loc_823A6AB0:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,2
	r30.s64 = 2;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823a6b24
	if (!ctx.cr6.lt) goto loc_823A6B24;
loc_823A6ACC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a6b24
	if (ctx.cr6.eq) goto loc_823A6B24;
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
	// bge 0x823a6b14
	if (!ctx.cr0.lt) goto loc_823A6B14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A6B14;
	sub_823380C8(ctx, base);
loc_823A6B14:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a6acc
	if (ctx.cr6.gt) goto loc_823A6ACC;
loc_823A6B24:
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
	// bge 0x823a6b5c
	if (!ctx.cr0.lt) goto loc_823A6B5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A6B5C;
	sub_823380C8(ctx, base);
loc_823A6B5C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x823a6d04
	if (!ctx.cr6.eq) goto loc_823A6D04;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x823a6d04
	if (!ctx.cr6.eq) goto loc_823A6D04;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,12
	r30.s64 = 12;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bge cr6,0x823a6be0
	if (!ctx.cr6.lt) goto loc_823A6BE0;
loc_823A6B88:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a6be0
	if (ctx.cr6.eq) goto loc_823A6BE0;
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
	// bge 0x823a6bd0
	if (!ctx.cr0.lt) goto loc_823A6BD0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A6BD0;
	sub_823380C8(ctx, base);
loc_823A6BD0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a6b88
	if (ctx.cr6.gt) goto loc_823A6B88;
loc_823A6BE0:
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
	// bge 0x823a6c18
	if (!ctx.cr0.lt) goto loc_823A6C18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A6C18;
	sub_823380C8(ctx, base);
loc_823A6C18:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// li r30,12
	r30.s64 = 12;
	// rlwinm r28,r11,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bge cr6,0x823a6c94
	if (!ctx.cr6.lt) goto loc_823A6C94;
loc_823A6C3C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a6c94
	if (ctx.cr6.eq) goto loc_823A6C94;
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
	// bge 0x823a6c84
	if (!ctx.cr0.lt) goto loc_823A6C84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A6C84;
	sub_823380C8(ctx, base);
loc_823A6C84:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a6c3c
	if (ctx.cr6.gt) goto loc_823A6C3C;
loc_823A6C94:
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
	// bge 0x823a6ccc
	if (!ctx.cr0.lt) goto loc_823A6CCC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A6CCC;
	sub_823380C8(ctx, base);
loc_823A6CCC:
	// lwz r10,22056(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 22056);
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823a6cf8
	if (ctx.cr6.gt) goto loc_823A6CF8;
	// lwz r10,22060(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 22060);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823a6cf8
	if (ctx.cr6.gt) goto loc_823A6CF8;
	// stw r28,156(r27)
	REX_STORE_U32(r27.u32 + 156, r28.u32);
	// stw r11,160(r27)
	REX_STORE_U32(r27.u32 + 160, ctx.r11.u32);
	// b 0x823a6d24
	goto loc_823A6D24;
loc_823A6CF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
loc_823A6D04:
	// addi r11,r28,5577
	ctx.r11.s64 = r28.s64 + 5577;
	// addi r10,r30,5581
	ctx.r10.s64 = r30.s64 + 5581;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// stw r7,156(r27)
	REX_STORE_U32(r27.u32 + 156, ctx.r7.u32);
	// lwzx r6,r8,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r27.u32);
	// stw r6,160(r27)
	REX_STORE_U32(r27.u32 + 160, ctx.r6.u32);
loc_823A6D24:
	// lwz r4,156(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 156);
	// cmpw cr6,r4,r24
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r24.s32, ctx.xer);
	// bne cr6,0x823a6d44
	if (!ctx.cr6.eq) goto loc_823A6D44;
	// lwz r11,160(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 160);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// bne cr6,0x823a6d44
	if (!ctx.cr6.eq) goto loc_823A6D44;
	// stw r26,21888(r27)
	REX_STORE_U32(r27.u32 + 21888, r26.u32);
	// b 0x823a6d48
	goto loc_823A6D48;
loc_823A6D44:
	// stw r25,21888(r27)
	REX_STORE_U32(r27.u32 + 21888, r25.u32);
loc_823A6D48:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,160(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 160);
	// bl 0x8233d6b0
	ctx.lr = 0x823A6D54;
	sub_8233D6B0(ctx, base);
	// stw r26,22064(r27)
	REX_STORE_U32(r27.u32 + 22064, r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_823C24A0) {
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
	// bl 0x822d4e60
	ctx.lr = 0x823C24A8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r18,308(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r31,332(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// srawi r25,r18,1
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x1) != 0);
	r25.s64 = r18.s32 >> 1;
	// srawi r24,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	r24.s64 = ctx.r7.s32 >> 1;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r19,r9
	r19.u64 = ctx.r9.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// srawi. r23,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r23.s64 = ctx.r8.s32 >> 1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble 0x823c2508
	if (!ctx.cr0.gt) goto loc_823C2508;
	// mr r27,r23
	r27.u64 = r23.u64;
loc_823C24E8:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822091c8
	ctx.lr = 0x823C24F8;
	sub_822091C8(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r31,r31,r25
	r31.u64 = r31.u64 + r25.u64;
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// bne 0x823c24e8
	if (!ctx.cr0.eq) goto loc_823C24E8;
loc_823C2508:
	// lwz r30,340(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x823c2538
	if (!ctx.cr6.gt) goto loc_823C2538;
	// mr r31,r23
	r31.u64 = r23.u64;
loc_823C2518:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822091c8
	ctx.lr = 0x823C2528;
	sub_822091C8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r30,r30,r25
	r30.u64 = r30.u64 + r25.u64;
	// add r28,r28,r26
	r28.u64 = r28.u64 + r26.u64;
	// bne 0x823c2518
	if (!ctx.cr0.eq) goto loc_823C2518;
loc_823C2538:
	// mr r30,r20
	r30.u64 = r20.u64;
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x823c2568
	if (!ctx.cr6.gt) goto loc_823C2568;
loc_823C2548:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822091c8
	ctx.lr = 0x823C2558;
	sub_822091C8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r31,r31,r18
	r31.u64 = r31.u64 + r18.u64;
	// add r30,r30,r19
	r30.u64 = r30.u64 + r19.u64;
	// bne 0x823c2548
	if (!ctx.cr0.eq) goto loc_823C2548;
loc_823C2568:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_823C3E00) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e50
	ctx.lr = 0x823C3E08;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r31,92(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r8,r8,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,76(r1)
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stw r9,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r9.u32);
	// rlwinm r10,r7,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// stw r6,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// subf r9,r3,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r3.u64;
	// lwz r26,84(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r31,-1
	ctx.r6.s64 = r31.s64 + -1;
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// divw r4,r9,r6
	ctx.r4.u64 = uint32_t((ctx.r6.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r9.s32 / ctx.r6.s32 : 0);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// stw r4,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r4.u32);
	// addi r30,r7,-1
	r30.s64 = ctx.r7.s64 + -1;
	// addze r7,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r7.s64 = temp.s64;
	// rotlwi r3,r9,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lis r9,0
	ctx.r9.s64 = 0;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r29,r26,-1
	r29.s64 = r26.s64 + -1;
	// ori r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 32768;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// andc r30,r29,r30
	r30.u64 = r29.u64 & ~r30.u64;
	// andc r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r3.u64;
	// subf r25,r8,r7
	r25.u64 = ctx.r7.u64 - ctx.r8.u64;
	// divw r19,r10,r29
	r19.u64 = uint32_t((r29.s32 && !(ctx.r10.s32 == INT32_MIN && r29.s32 == -1)) ? ctx.r10.s32 / r29.s32 : 0);
	// twllei r29,0
	if (r29.s32 == 0 || r29.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r25,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, r25.u32);
	// twlgei r30,-1
	if (r30.s32 == -1 || r30.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823c4014
	if (!ctx.cr6.eq) goto loc_823C4014;
	// mr r15,r8
	r15.u64 = ctx.r8.u64;
	// li r18,0
	r18.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x823c4198
	if (!ctx.cr6.gt) goto loc_823C4198;
	// lwz r20,108(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r6,r19,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r20,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r31,r10
	ctx.r9.u64 = ctx.r10.u64 - r31.u64;
	// rlwinm r14,r9,1,0,30
	r14.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_823C3EC8:
	// addi r9,r18,16
	ctx.r9.s64 = r18.s64 + 16;
	// mr r17,r9
	r17.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r26.s32, ctx.xer);
	// ble cr6,0x823c3edc
	if (!ctx.cr6.gt) goto loc_823C3EDC;
	// mr r17,r26
	r17.u64 = r26.u64;
loc_823C3EDC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpw cr6,r25,r8
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x823c3ffc
	if (!ctx.cr6.gt) goto loc_823C3FFC;
	// subf r16,r18,r17
	r16.u64 = r17.u64 - r18.u64;
	// mullw r10,r16,r20
	ctx.r10.s64 = int64_t(r16.s32) * int64_t(r20.s32);
	// subfic r7,r10,2
	ctx.xer.ca = ctx.r10.u32 <= 2;
	ctx.r7.u64 = static_cast<uint64_t>(2) - ctx.r10.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
loc_823C3EF8:
	// srawi r7,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 17;
	// srawi r3,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 16;
	// add r21,r8,r4
	r21.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mullw r8,r3,r27
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(r27.s32);
	// srawi r3,r21,16
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = r21.s32 >> 16;
	// add r30,r8,r28
	r30.u64 = ctx.r8.u64 + r28.u64;
	// mullw r8,r3,r27
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(r27.s32);
	// add r29,r8,r28
	r29.u64 = ctx.r8.u64 + r28.u64;
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// cmpw cr6,r18,r17
	ctx.cr6.compare<int32_t>(r18.s32, r17.s32, ctx.xer);
	// bge cr6,0x823c3fe4
	if (!ctx.cr6.lt) goto loc_823C3FE4;
	// lwz r4,76(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// addi r3,r16,-1
	ctx.r3.s64 = r16.s64 + -1;
	// lwz r31,44(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// rlwinm r24,r20,1,0,30
	r24.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r26,r7,r4
	r26.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// rlwinm r7,r3,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// add r25,r26,r31
	r25.u64 = r26.u64 + r31.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r23,r19,1,0,30
	r23.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r20,2,0,29
	r22.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823C3F50:
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// add r4,r8,r19
	ctx.r4.u64 = ctx.r8.u64 + r19.u64;
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// add r8,r23,r8
	ctx.r8.u64 = r23.u64 + ctx.r8.u64;
	// add r31,r26,r3
	r31.u64 = r26.u64 + ctx.r3.u64;
	// lbzx r28,r7,r30
	r28.u64 = REX_LOAD_U8(ctx.r7.u32 + r30.u32);
	// lbzx r7,r7,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + r29.u32);
	// rotlwi r27,r28,8
	r27.u64 = __builtin_rotateleft32(r28.u32, 8);
	// lbzx r3,r25,r3
	ctx.r3.u64 = REX_LOAD_U8(r25.u32 + ctx.r3.u32);
	// rotlwi r3,r3,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// stw r7,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r7.u32);
	// srawi r7,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 16;
	// lwz r4,-172(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// rlwinm r28,r4,24,0,7
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000;
	// lbzx r4,r31,r5
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + ctx.r5.u32);
	// lbzx r31,r7,r29
	r31.u64 = REX_LOAD_U8(ctx.r7.u32 + r29.u32);
	// lbzx r7,r7,r30
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + r30.u32);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// stw r31,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, r31.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// add r4,r28,r3
	ctx.r4.u64 = r28.u64 + ctx.r3.u64;
	// lwz r28,-172(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// rlwinm r28,r28,24,0,7
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 24) & 0xFF000000;
	// add r27,r27,r31
	r27.u64 = r27.u64 + r31.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + r31.u64;
	// add r3,r28,r3
	ctx.r3.u64 = r28.u64 + ctx.r3.u64;
	// or r4,r27,r4
	ctx.r4.u64 = r27.u64 | ctx.r4.u64;
	// or r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 | ctx.r3.u64;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stwx r3,r11,r24
	REX_STORE_U32(ctx.r11.u32 + r24.u32, ctx.r3.u32);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + r22.u64;
	// bdnz 0x823c3f50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C3F50;
	// lwz r4,-168(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r25,-176(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r28,28(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r27,68(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// lwz r26,84(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_823C3FE4:
	// add r8,r21,r4
	ctx.r8.u64 = r21.u64 + ctx.r4.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r25
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r25.s32, ctx.xer);
	// blt cr6,0x823c3ef8
	if (ctx.cr6.lt) goto loc_823C3EF8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 32768;
loc_823C3FFC:
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + r14.u64;
	// add r15,r15,r6
	r15.u64 = r15.u64 + ctx.r6.u64;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r26.s32, ctx.xer);
	// blt cr6,0x823c3ec8
	if (ctx.cr6.lt) goto loc_823C3EC8;
	// b 0x822d4ea0
	return;
loc_823C4014:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r16,0
	r16.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x823c4198
	if (!ctx.cr6.gt) goto loc_823C4198;
	// lwz r17,108(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r9,r17,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r7,r31,r9
	ctx.r7.u64 = ctx.r9.u64 - r31.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r6.u32);
loc_823C4038:
	// addi r6,r16,16
	ctx.r6.s64 = r16.s64 + 16;
	// mr r14,r6
	r14.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r26
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r26.s32, ctx.xer);
	// ble cr6,0x823c404c
	if (!ctx.cr6.gt) goto loc_823C404C;
	// mr r14,r26
	r14.u64 = r26.u64;
loc_823C404C:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpw cr6,r25,r8
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x823c417c
	if (!ctx.cr6.gt) goto loc_823C417C;
	// subf r15,r16,r14
	r15.u64 = r14.u64 - r16.u64;
	// mullw r9,r15,r17
	ctx.r9.s64 = int64_t(r15.s32) * int64_t(r17.s32);
	// subfic r7,r9,2
	ctx.xer.ca = ctx.r9.u32 <= 2;
	ctx.r7.u64 = static_cast<uint64_t>(2) - ctx.r9.u64;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
loc_823C4068:
	// srawi r3,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 17;
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// add r18,r8,r4
	r18.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mullw r8,r7,r27
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(r27.s32);
	// srawi r7,r18,16
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = r18.s32 >> 16;
	// add r30,r8,r28
	r30.u64 = ctx.r8.u64 + r28.u64;
	// mullw r8,r7,r27
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(r27.s32);
	// add r29,r8,r28
	r29.u64 = ctx.r8.u64 + r28.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmpw cr6,r16,r14
	ctx.cr6.compare<int32_t>(r16.s32, r14.s32, ctx.xer);
	// bge cr6,0x823c4164
	if (!ctx.cr6.lt) goto loc_823C4164;
	// addi r8,r15,-1
	ctx.r8.s64 = r15.s64 + -1;
	// lwz r31,76(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// lwz r28,44(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// rlwinm r24,r17,1,0,30
	r24.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r25,r3,r31
	r25.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r23,r25,r28
	r23.u64 = r25.u64 + r28.u64;
	// addi r22,r24,2
	r22.s64 = r24.s64 + 2;
	// rlwinm r21,r19,1,0,30
	r21.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r17,2,0,29
	r20.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823C40C4:
	// srawi r8,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 16;
	// add r31,r7,r19
	r31.u64 = ctx.r7.u64 + r19.u64;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// add r7,r21,r7
	ctx.r7.u64 = r21.u64 + ctx.r7.u64;
	// add r28,r25,r3
	r28.u64 = r25.u64 + ctx.r3.u64;
	// lbzx r27,r8,r30
	r27.u64 = REX_LOAD_U8(ctx.r8.u32 + r30.u32);
	// lbzx r8,r8,r29
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + r29.u32);
	// lbzx r3,r23,r3
	ctx.r3.u64 = REX_LOAD_U8(r23.u32 + ctx.r3.u32);
	// rotlwi r26,r27,8
	r26.u64 = __builtin_rotateleft32(r27.u32, 8);
	// lbzx r28,r28,r5
	r28.u64 = REX_LOAD_U8(r28.u32 + ctx.r5.u32);
	// stw r8,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// srawi r8,r31,16
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = r31.s32 >> 16;
	// lwz r31,-168(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// rlwinm r27,r31,8,0,23
	r27.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFFFFFF00;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbzx r3,r8,r30
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + r30.u32);
	// lbzx r8,r8,r29
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + r29.u32);
	// add r26,r26,r31
	r26.u64 = r26.u64 + r31.u64;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r3,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r28,-168(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// rlwinm r28,r28,8,0,23
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFFFF00;
	// add r27,r27,r3
	r27.u64 = r27.u64 + ctx.r3.u64;
	// add r31,r28,r31
	r31.u64 = r28.u64 + r31.u64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// clrlwi r8,r26,16
	ctx.r8.u64 = r26.u32 & 0xFFFF;
	// clrlwi r28,r27,16
	r28.u64 = r27.u32 & 0xFFFF;
	// clrlwi r31,r31,16
	r31.u64 = r31.u32 & 0xFFFF;
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r28,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, r28.u16);
	// sthx r31,r11,r24
	REX_STORE_U16(ctx.r11.u32 + r24.u32, r31.u16);
	// sthx r3,r22,r11
	REX_STORE_U16(r22.u32 + ctx.r11.u32, ctx.r3.u16);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
	// bdnz 0x823c40c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C40C4;
	// lwz r25,-176(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r28,28(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r27,68(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// lwz r26,84(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_823C4164:
	// add r8,r18,r4
	ctx.r8.u64 = r18.u64 + ctx.r4.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r25
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r25.s32, ctx.xer);
	// blt cr6,0x823c4068
	if (ctx.cr6.lt) goto loc_823C4068;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 32768;
loc_823C417C:
	// lwz r7,-172(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// rlwinm r9,r19,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r26
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r26.s32, ctx.xer);
	// blt cr6,0x823c4038
	if (ctx.cr6.lt) goto loc_823C4038;
loc_823C4198:
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823D2980) {
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
	ctx.lr = 0x823D2988;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// bl 0x82397b48
	ctx.lr = 0x823D29B4;
	sub_82397B48(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823d29d4
	if (!ctx.cr6.eq) goto loc_823D29D4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823db760
	ctx.lr = 0x823D29C4;
	sub_823DB760(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_823D29CC:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x822d4ec8
	return;
loc_823D29D4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x823d29f4
	if (!ctx.cr6.eq) goto loc_823D29F4;
	// lis r31,-30602
	r31.s64 = -2005532672;
	// ori r31,r31,2156
	r31.u64 = r31.u64 | 2156;
loc_823D29E4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823db760
	ctx.lr = 0x823D29EC;
	sub_823DB760(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x823d29cc
	goto loc_823D29CC;
loc_823D29F4:
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// bne cr6,0x823d2a08
	if (!ctx.cr6.eq) goto loc_823D2A08;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
loc_823D2A08:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823db768
	ctx.lr = 0x823D2A24;
	sub_823DB768(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823d2a34
	if (!ctx.cr0.lt) goto loc_823D2A34;
loc_823D2A2C:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x823d29e4
	goto loc_823D29E4;
loc_823D2A34:
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824081f8
	ctx.lr = 0x823D2A44;
	sub_824081F8(ctx, base);
	// addi r11,r1,200
	ctx.r11.s64 = ctx.r1.s64 + 200;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lwz r9,172(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r8,168(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r7,164(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r6,160(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stw r24,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r24.u32);
	// stw r25,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r25.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r31,268(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r30,264(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r29,260(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// rlwinm r11,r11,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x823d1c70
	ctx.lr = 0x823D2AA0;
	sub_823D1C70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823d2a2c
	if (ctx.cr0.lt) goto loc_823D2A2C;
	// li r31,0
	r31.s64 = 0;
	// b 0x823d29e4
	goto loc_823D29E4;
}

DEFINE_REX_FUNC(sub_823D6E38) {
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
	ctx.lr = 0x823D6E40;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// blt cr6,0x823d72c8
	if (ctx.cr6.lt) goto loc_823D72C8;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,8275
	ctx.r10.s64 = 542310400;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// ori r10,r10,17476
	ctx.r10.u64 = ctx.r10.u64 | 17476;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823d72c8
	if (!ctx.cr6.eq) goto loc_823D72C8;
	// addi r30,r5,-4
	r30.s64 = ctx.r5.s64 + -4;
	// addi r31,r4,4
	r31.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r30,124
	ctx.cr6.compare<uint32_t>(r30.u32, 124, ctx.xer);
	// blt cr6,0x823d72c8
	if (ctx.cr6.lt) goto loc_823D72C8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823D6EA0;
	sub_822D4FA0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823d6c08
	ctx.lr = 0x823D6EAC;
	sub_823D6C08(ctx, base);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r18,r31,124
	r18.s64 = r31.s64 + 124;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r17,r30,-124
	r17.s64 = r30.s64 + -124;
	// rlwinm. r31,r11,0,8,8
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r10,12(r16)
	REX_STORE_U32(r16.u32 + 12, ctx.r10.u32);
	// stw r9,16(r16)
	REX_STORE_U32(r16.u32 + 16, ctx.r9.u32);
	// bne 0x823d6ed8
	if (!ctx.cr0.eq) goto loc_823D6ED8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823D6ED8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,20(r16)
	REX_STORE_U32(r16.u32 + 20, ctx.r11.u32);
	// bne cr6,0x823d6eec
	if (!ctx.cr6.eq) goto loc_823D6EEC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r16)
	REX_STORE_U32(r16.u32 + 20, ctx.r11.u32);
loc_823D6EEC:
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// rlwinm r11,r11,0,16,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC00;
	// cmplwi cr6,r11,64512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64512, ctx.xer);
	// bne cr6,0x823d6f04
	if (!ctx.cr6.eq) goto loc_823D6F04;
	// li r14,6
	r14.s64 = 6;
	// b 0x823d6f10
	goto loc_823D6F10;
loc_823D6F04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d72c8
	if (!ctx.cr6.eq) goto loc_823D72C8;
	// li r14,1
	r14.s64 = 1;
loc_823D6F10:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r15,r11
	r15.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d6f24
	if (!ctx.cr6.eq) goto loc_823D6F24;
	// li r15,1
	r15.s64 = 1;
loc_823D6F24:
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823d6f34
	if (ctx.cr0.eq) goto loc_823D6F34;
	// li r11,4
	ctx.r11.s64 = 4;
loc_823D6F34:
	// lis r12,12
	ctx.r12.s64 = 786432;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// ori r12,r12,17506
	ctx.r12.u64 = ctx.r12.u64 | 17506;
	// addi r9,r10,9888
	ctx.r9.s64 = ctx.r10.s64 + 9888;
	// and r7,r11,r12
	ctx.r7.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,14
	ctx.r12.s64 = 917504;
	// lwz r10,9888(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 9888);
	// clrlwi r4,r11,12
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFFF;
	// ori r12,r12,16448
	ctx.r12.u64 = ctx.r12.u64 | 16448;
	// rlwinm r3,r10,0,26,22
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// and r6,r11,r12
	ctx.r6.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,12
	ctx.r12.s64 = 786432;
	// rlwinm r8,r11,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// ori r12,r12,17472
	ctx.r12.u64 = ctx.r12.u64 | 17472;
	// rlwinm r4,r4,0,30,12
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFF80003;
	// and r5,r11,r12
	ctx.r5.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,12
	ctx.r12.s64 = 786432;
	// ori r12,r12,16448
	ctx.r12.u64 = ctx.r12.u64 | 16448;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// b 0x823d7034
	goto loc_823D7034;
loc_823D6F84:
	// lwz r3,168(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// bne cr6,0x823d702c
	if (!ctx.cr6.eq) goto loc_823D702C;
	// lwz r3,8(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823d702c
	if (!ctx.cr6.eq) goto loc_823D702C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823d6fb4
	if (ctx.cr6.eq) goto loc_823D6FB4;
	// lwz r3,12(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r30,176(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x823d702c
	if (!ctx.cr6.eq) goto loc_823D702C;
loc_823D6FB4:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823d6fcc
	if (ctx.cr6.eq) goto loc_823D6FCC;
	// lwz r3,16(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r30,180(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x823d702c
	if (!ctx.cr6.eq) goto loc_823D702C;
loc_823D6FCC:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x823d6fe4
	if (ctx.cr6.eq) goto loc_823D6FE4;
	// lwz r3,20(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r30,184(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x823d702c
	if (!ctx.cr6.eq) goto loc_823D702C;
loc_823D6FE4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823d6ffc
	if (ctx.cr6.eq) goto loc_823D6FFC;
	// lwz r3,24(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r30,188(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x823d702c
	if (!ctx.cr6.eq) goto loc_823D702C;
loc_823D6FFC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d7014
	if (ctx.cr6.eq) goto loc_823D7014;
	// lwz r3,28(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r30,192(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x823d702c
	if (!ctx.cr6.eq) goto loc_823D702C;
loc_823D7014:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823d703c
	if (ctx.cr6.eq) goto loc_823D703C;
	// lwz r3,32(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r30,196(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x823d703c
	if (ctx.cr6.eq) goto loc_823D703C;
loc_823D702C:
	// lwzu r3,36(r9)
	ea = 36 + ctx.r9.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// rlwinm r3,r3,0,26,22
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
loc_823D7034:
	// cmpwi cr6,r3,-449
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -449, ctx.xer);
	// bne cr6,0x823d6f84
	if (!ctx.cr6.eq) goto loc_823D6F84;
loc_823D703C:
	// lwz r23,0(r9)
	r23.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r23,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r11,-449
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -449, ctx.xer);
	// beq cr6,0x823d72c8
	if (ctx.cr6.eq) goto loc_823D72C8;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823d14c0
	ctx.lr = 0x823D7054;
	sub_823D14C0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823d7068
	if (ctx.cr6.eq) goto loc_823D7068;
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x823d7078
	goto loc_823D7078;
loc_823D7068:
	// cmplwi cr6,r14,6
	ctx.cr6.compare<uint32_t>(r14.u32, 6, ctx.xer);
	// li r11,18
	ctx.r11.s64 = 18;
	// beq cr6,0x823d7078
	if (ctx.cr6.eq) goto loc_823D7078;
	// li r11,3
	ctx.r11.s64 = 3;
loc_823D7078:
	// stw r11,68(r16)
	REX_STORE_U32(r16.u32 + 68, ctx.r11.u32);
	// li r27,0
	r27.s64 = 0;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823d70a4
	if (!ctx.cr6.eq) goto loc_823D70A4;
	// cmplwi cr6,r17,1024
	ctx.cr6.compare<uint32_t>(r17.u32, 1024, ctx.xer);
	// blt cr6,0x823d72c8
	if (ctx.cr6.lt) goto loc_823D72C8;
	// mr r25,r18
	r25.u64 = r18.u64;
	// addi r18,r18,1024
	r18.s64 = r18.s64 + 1024;
	// addi r17,r17,-1024
	r17.s64 = r17.s64 + -1024;
	// b 0x823d70a8
	goto loc_823D70A8;
loc_823D70A4:
	// mr r25,r27
	r25.u64 = r27.u64;
loc_823D70A8:
	// mr r24,r27
	r24.u64 = r27.u64;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x823d72b4
	if (ctx.cr6.eq) goto loc_823D72B4;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// lwz r21,80(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r22,-1
	r22.s64 = -1;
	// ori r20,r11,18
	r20.u64 = ctx.r11.u64 | 18;
loc_823D70C8:
	// lwz r30,12(r16)
	r30.u64 = REX_LOAD_U32(r16.u32 + 12);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// lwz r28,16(r16)
	r28.u64 = REX_LOAD_U32(r16.u32 + 16);
	// lwz r29,20(r16)
	r29.u64 = REX_LOAD_U32(r16.u32 + 20);
	// bne cr6,0x823d70e4
	if (!ctx.cr6.eq) goto loc_823D70E4;
	// mr r21,r16
	r21.u64 = r16.u64;
	// b 0x823d7130
	goto loc_823D7130;
loc_823D70E4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x823cd118
	ctx.lr = 0x823D70F0;
	sub_823CD118(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823d711c
	if (ctx.cr0.eq) goto loc_823D711C;
	// stw r22,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r22.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r27,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r27.u32);
	// stw r27,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r27.u32);
	// stw r27,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r27.u32);
	// stw r27,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r27.u32);
	// stw r27,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, r27.u32);
	// stw r27,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r27.u32);
	// b 0x823d7120
	goto loc_823D7120;
loc_823D711C:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_823D7120:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d72bc
	if (ctx.cr6.eq) goto loc_823D72BC;
	// stw r11,80(r21)
	REX_STORE_U32(r21.u32 + 80, ctx.r11.u32);
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
loc_823D7130:
	// mr r26,r27
	r26.u64 = r27.u64;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x823d72a8
	if (ctx.cr6.eq) goto loc_823D72A8;
loc_823D713C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x823d714c
	if (!ctx.cr6.eq) goto loc_823D714C;
	// mr r31,r21
	r31.u64 = r21.u64;
	// b 0x823d7198
	goto loc_823D7198;
loc_823D714C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x823cd118
	ctx.lr = 0x823D7158;
	sub_823CD118(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823d7184
	if (ctx.cr0.eq) goto loc_823D7184;
	// stw r22,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r22.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r27,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r27.u32);
	// stw r27,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r27.u32);
	// stw r27,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r27.u32);
	// stw r27,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r27.u32);
	// stw r27,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, r27.u32);
	// stw r27,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r27.u32);
	// b 0x823d7188
	goto loc_823D7188;
loc_823D7184:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_823D7188:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d72bc
	if (ctx.cr6.eq) goto loc_823D72BC;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_823D7198:
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// rlwinm r11,r23,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// ori r10,r10,11
	ctx.r10.u64 = ctx.r10.u64 | 11;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823d7228
	if (ctx.cr6.lt) goto loc_823D7228;
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823d721c
	if (!ctx.cr6.gt) goto loc_823D721C;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,10
	ctx.r10.u64 = ctx.r10.u64 | 10;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823d7228
	if (!ctx.cr6.gt) goto loc_823D7228;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823d721c
	if (!ctx.cr6.gt) goto loc_823D721C;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r20.s32, ctx.xer);
	// beq cr6,0x823d7210
	if (ctx.cr6.eq) goto loc_823D7210;
	// ble cr6,0x823d7228
	if (!ctx.cr6.gt) goto loc_823D7228;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,20
	ctx.r10.u64 = ctx.r10.u64 | 20;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823d7228
	if (ctx.cr6.gt) goto loc_823D7228;
	// addi r11,r30,3
	ctx.r11.s64 = r30.s64 + 3;
	// rlwinm r11,r11,2,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF0;
loc_823D7200:
	// addi r10,r28,3
	ctx.r10.s64 = r28.s64 + 3;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x823d7238
	goto loc_823D7238;
loc_823D7210:
	// addi r11,r30,3
	ctx.r11.s64 = r30.s64 + 3;
	// rlwinm r11,r11,1,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFF8;
	// b 0x823d7200
	goto loc_823D7200;
loc_823D721C:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// rlwinm r11,r11,1,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFC;
	// b 0x823d7234
	goto loc_823D7234;
loc_823D7228:
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
loc_823D7234:
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
loc_823D7238:
	// mullw r9,r10,r29
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// stw r18,4(r31)
	REX_STORE_U32(r31.u32 + 4, r18.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r28,16(r31)
	REX_STORE_U32(r31.u32 + 16, r28.u32);
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// stw r25,8(r31)
	REX_STORE_U32(r31.u32 + 8, r25.u32);
	// stw r27,56(r31)
	REX_STORE_U32(r31.u32 + 56, r27.u32);
	// stw r27,60(r31)
	REX_STORE_U32(r31.u32 + 60, r27.u32);
	// rlwinm r8,r23,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// cmplw cr6,r17,r9
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// blt cr6,0x823d72c8
	if (ctx.cr6.lt) goto loc_823D72C8;
	// add r18,r9,r18
	r18.u64 = ctx.r9.u64 + r18.u64;
	// subf r17,r9,r17
	r17.u64 = r17.u64 - ctx.r9.u64;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x823d7284
	if (ctx.cr6.eq) goto loc_823D7284;
	// rlwinm r30,r30,31,1,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
loc_823D7284:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// beq cr6,0x823d7290
	if (ctx.cr6.eq) goto loc_823D7290;
	// rlwinm r28,r28,31,1,31
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
loc_823D7290:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// beq cr6,0x823d729c
	if (ctx.cr6.eq) goto loc_823D729C;
	// rlwinm r29,r29,31,1,31
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
loc_823D729C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r15
	ctx.cr6.compare<uint32_t>(r26.u32, r15.u32, ctx.xer);
	// blt cr6,0x823d713c
	if (ctx.cr6.lt) goto loc_823D713C;
loc_823D72A8:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmplw cr6,r24,r14
	ctx.cr6.compare<uint32_t>(r24.u32, r14.u32, ctx.xer);
	// blt cr6,0x823d70c8
	if (ctx.cr6.lt) goto loc_823D70C8;
loc_823D72B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823d72d0
	goto loc_823D72D0;
loc_823D72BC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823d72d0
	goto loc_823D72D0;
loc_823D72C8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_823D72D0:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823E2D58) {
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
	// bge cr6,0x823e2e1c
	if (!ctx.cr6.lt) goto loc_823E2E1C;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f0,-13044(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
loc_823E2DBC:
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
	// bdnz 0x823e2dbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E2DBC;
loc_823E2E1C:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e2e38
	if (ctx.cr6.eq) goto loc_823E2E38;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x823E2E38;
	sub_82413D40(ctx, base);
loc_823E2E38:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e2e54
	if (ctx.cr6.eq) goto loc_823E2E54;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x823dc3f0
	ctx.lr = 0x823E2E54;
	sub_823DC3F0(ctx, base);
loc_823E2E54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E3890) {
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
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823e3978
	if (!ctx.cr6.lt) goto loc_823E3978;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-30028(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30028);
	ctx.f0.f64 = double(temp.f32);
loc_823E38EC:
	// lhz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
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
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// rldicl r10,r10,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
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
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// rldicl r10,r10,48,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 48) & 0xFFFFFFFFFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
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
	// ldu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
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
	// bdnz 0x823e38ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E38EC;
loc_823E3978:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e3994
	if (ctx.cr6.eq) goto loc_823E3994;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x823E3994;
	sub_82413D40(ctx, base);
loc_823E3994:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e39b0
	if (ctx.cr6.eq) goto loc_823E39B0;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x823dc3f0
	ctx.lr = 0x823E39B0;
	sub_823DC3F0(ctx, base);
loc_823E39B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E6F70) {
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
	// bl 0x823e63f0
	ctx.lr = 0x823E6F90;
	sub_823E63F0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e6fa4
	if (ctx.cr0.eq) goto loc_823E6FA4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cd250
	ctx.lr = 0x823E6FA4;
	sub_823CD250(ctx, base);
loc_823E6FA4:
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

DEFINE_REX_FUNC(sub_823E7620) {
	REX_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r9,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r9,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e764c
	if (ctx.cr6.eq) goto loc_823E764C;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823e7650
	goto loc_823E7650;
loc_823E764C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823E7650:
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lhz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 8);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lhz r11,10(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 10);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lhz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 12);
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// stw r11,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// stw r11,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// stw r11,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lhz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// stw r11,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lhz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// stw r11,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lhz r11,10(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// stw r11,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r11.u32);
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r8,28(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,40(r4)
	REX_STORE_U32(ctx.r4.u32 + 40, ctx.r11.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e76ec
	if (ctx.cr6.eq) goto loc_823E76EC;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823e76f0
	goto loc_823E76F0;
loc_823E76EC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823E76F0:
	// stw r11,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EB528) {
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
	ctx.lr = 0x823EB530;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r10,10(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x823eb748
	if (ctx.cr0.eq) goto loc_823EB748;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x823cd118
	ctx.lr = 0x823EB558;
	sub_823CD118(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// bne 0x823eb570
	if (!ctx.cr0.eq) goto loc_823EB570;
loc_823EB564:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823eb74c
	goto loc_823EB74C;
loc_823EB570:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r11,10(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x822d5870
	ctx.lr = 0x823EB584;
	sub_822D5870(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r25,32(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 32);
loc_823EB598:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823eb598
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EB598;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lhz r10,10(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 10);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// rotlwi r8,r10,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x823eb5d4
	if (!ctx.cr6.gt) goto loc_823EB5D4;
loc_823EB5C8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823eb74c
	goto loc_823EB74C;
loc_823EB5D4:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r27,r26
	r27.u64 = r26.u64;
	// add r29,r11,r9
	r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// beq cr6,0x823eb748
	if (ctx.cr6.eq) goto loc_823EB748;
	// mr r28,r26
	r28.u64 = r26.u64;
loc_823EB5F0:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x823eb5c8
	if (ctx.cr6.gt) goto loc_823EB5C8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x823e73c8
	ctx.lr = 0x823EB630;
	sub_823E73C8(ctx, base);
	// lhz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 12);
	// lhz r10,10(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 10);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r11,102(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lhz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 8);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sth r9,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r9.u16);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823eb690
	if (!ctx.cr6.gt) goto loc_823EB690;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// xoris r9,r26,32768
	ctx.r9.u64 = r26.u64 ^ 2147483648;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addc r11,r11,r9
	ctx.xer.ca = ctx.r11.u32 + ctx.r9.u32 < ctx.r11.u32;
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// sth r11,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
loc_823EB690:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x823eb1c0
	ctx.lr = 0x823EB6A4;
	sub_823EB1C0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r3,r28,r11
	REX_STORE_U32(r28.u32 + ctx.r11.u32, ctx.r3.u32);
	// beq 0x823eb564
	if (ctx.cr0.eq) goto loc_823EB564;
	// lhz r11,102(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sth r11,102(r1)
	REX_STORE_U16(ctx.r1.u32 + 102, ctx.r11.u16);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x823eb6d8
	if (ctx.cr0.eq) goto loc_823EB6D8;
	// li r10,4
	ctx.r10.s64 = 4;
loc_823EB6D8:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lhz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 8);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwzx r7,r28,r11
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// lwz r7,44(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x823eb710
	if (ctx.cr6.eq) goto loc_823EB710;
	// li r10,4
	ctx.r10.s64 = 4;
loc_823EB710:
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lhz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 8);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lhz r9,10(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 10);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r9.u32, ctx.xer);
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// blt cr6,0x823eb5f0
	if (ctx.cr6.lt) goto loc_823EB5F0;
loc_823EB748:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EB74C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823F4530) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r11,9632(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 9632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f4544
	if (ctx.cr6.eq) goto loc_823F4544;
	// b 0x823f4370
	sub_823F4370(ctx, base);
	return;
loc_823F4544:
	// b 0x823f3c48
	sub_823F3C48(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823F45E8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F4660) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x823cd250
	sub_823CD250(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823F47E0) {
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
	ctx.lr = 0x823F47E8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,65500
	ctx.r11.u64 = ctx.r11.u64 | 65500;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x823f4810
	if (ctx.cr6.gt) goto loc_823F4810;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823f4838
	if (!ctx.cr6.gt) goto loc_823F4838;
loc_823F4810:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r9,41
	ctx.r9.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r11.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823F4838;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F4838:
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x823f4870
	if (ctx.cr6.eq) goto loc_823F4870;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,15
	ctx.r10.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,216(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 216);
	// stw r9,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823F4870;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F4870:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// ble cr6,0x823f48b4
	if (!ctx.cr6.gt) goto loc_823F48B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,26
	ctx.r10.s64 = 26;
	// li r9,10
	ctx.r9.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r8,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, ctx.r8.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r9,28(r6)
	REX_STORE_U32(ctx.r6.u32 + 28, ctx.r9.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x823F48B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F48B4:
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r27,1
	r27.s64 = 1;
	// li r26,0
	r26.s64 = 0;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// stw r27,312(r31)
	REX_STORE_U32(r31.u32 + 312, r27.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r29,r26
	r29.u64 = r26.u64;
	// stw r27,316(r31)
	REX_STORE_U32(r31.u32 + 316, r27.u32);
	// ble cr6,0x823f4968
	if (!ctx.cr6.gt) goto loc_823F4968;
	// addi r30,r11,12
	r30.s64 = ctx.r11.s64 + 12;
	// li r28,18
	r28.s64 = 18;
loc_823F48E0:
	// lwz r11,-4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823f4908
	if (!ctx.cr6.gt) goto loc_823F4908;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x823f4908
	if (ctx.cr6.gt) goto loc_823F4908;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823f4908
	if (!ctx.cr6.gt) goto loc_823F4908;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x823f4924
	if (!ctx.cr6.gt) goto loc_823F4924;
loc_823F4908:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r28.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823F4924;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F4924:
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 312);
	// lwz r10,-4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + -4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823f4938
	if (ctx.cr6.gt) goto loc_823F4938;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823F4938:
	// stw r11,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r11.u32);
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 316);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823f4950
	if (ctx.cr6.gt) goto loc_823F4950;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823F4950:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r11,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r30,r30,84
	r30.s64 = r30.s64 + 84;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823f48e0
	if (ctx.cr6.lt) goto loc_823F48E0;
loc_823F4968:
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r28,8
	r28.s64 = 8;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// mr r29,r26
	r29.u64 = r26.u64;
	// stw r28,320(r31)
	REX_STORE_U32(r31.u32 + 320, r28.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823f4a0c
	if (!ctx.cr6.gt) goto loc_823F4A0C;
	// addi r30,r11,-8
	r30.s64 = ctx.r11.s64 + -8;
loc_823F4988:
	// stw r28,44(r30)
	REX_STORE_U32(r30.u32 + 44, r28.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r9,312(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 312);
	// mullw r3,r11,r10
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823f6cd0
	ctx.lr = 0x823F49A4;
	sub_823F6CD0(ctx, base);
	// stw r3,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r3.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r7,316(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 316);
	// rlwinm r4,r7,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mullw r3,r8,r6
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// bl 0x823f6cd0
	ctx.lr = 0x823F49C0;
	sub_823F6CD0(ctx, base);
	// stw r3,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r3.u32);
	// lwz r4,312(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 312);
	// lwz r5,16(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mullw r3,r5,r3
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// bl 0x823f6cd0
	ctx.lr = 0x823F49D8;
	sub_823F6CD0(ctx, base);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// lwz r4,316(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 316);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mullw r3,r11,r10
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x823f6cd0
	ctx.lr = 0x823F49F0;
	sub_823F6CD0(ctx, base);
	// stw r3,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r3.u32);
	// stw r27,56(r30)
	REX_STORE_U32(r30.u32 + 56, r27.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwu r26,84(r30)
	ea = 84 + r30.u32;
	REX_STORE_U32(ea, r26.u32);
	r30.u32 = ea;
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823f4988
	if (ctx.cr6.lt) goto loc_823F4988;
loc_823F4A0C:
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 316);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823f6cd0
	ctx.lr = 0x823F4A1C;
	sub_823F6CD0(ctx, base);
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 332);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r3,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r3.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823f4a4c
	if (ctx.cr6.lt) goto loc_823F4A4C;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823f4a4c
	if (!ctx.cr6.eq) goto loc_823F4A4C;
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// stw r26,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_823F4A4C:
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// stw r27,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_823FC908) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823FC910;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,448(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,444(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// srawi r8,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 3;
	// addze r10,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r10.s64 = temp.s64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// stw r29,16(r30)
	REX_STORE_U32(r30.u32 + 16, r29.u32);
	// lwz r6,444(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// lwz r5,8(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823FC950;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823fc960
	if (!ctx.cr6.eq) goto loc_823FC960;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_823FC960:
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823fc988
	if (!ctx.cr6.gt) goto loc_823FC988;
	// addi r10,r30,20
	ctx.r10.s64 = r30.s64 + 20;
loc_823FC974:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r29,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r10.u32 = ea;
	// lwz r9,332(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 332);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823fc974
	if (ctx.cr6.lt) goto loc_823FC974;
loc_823FC988:
	// stw r29,20(r30)
	REX_STORE_U32(r30.u32 + 20, r29.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
	// lwz r10,420(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823fc9a4
	if (!ctx.cr6.eq) goto loc_823FC9A4;
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
loc_823FC9A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823FE8D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addic. r30,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	r30.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lwz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r7,112(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// blt 0x823fe954
	if (ctx.cr0.lt) goto loc_823FE954;
	// rlwinm r31,r5,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_823FE8F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823fe944
	if (!ctx.cr6.gt) goto loc_823FE944;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_823FE904:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// beq cr6,0x823fe934
	if (ctx.cr6.eq) goto loc_823FE934;
	// subf r10,r8,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r8.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
loc_823FE928:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbux r9,r10,r8
	ea = ctx.r10.u32 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823fe928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FE928;
loc_823FE934:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823fe904
	if (ctx.cr6.lt) goto loc_823FE904;
loc_823FE944:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bge 0x823fe8f4
	if (!ctx.cr0.lt) goto loc_823FE8F4;
loc_823FE954:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82401470) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82401478;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,40(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824014A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824014b0
	if (!ctx.cr0.eq) goto loc_824014B0;
loc_824014A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82401550
	goto loc_82401550;
loc_824014B0:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// li r5,1440
	ctx.r5.s64 = 1440;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824014C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// bne 0x824014ec
	if (!ctx.cr0.eq) goto loc_824014EC;
loc_824014D8:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824014E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824014a8
	goto loc_824014A8;
loc_824014EC:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82401500;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82401528
	if (!ctx.cr0.eq) goto loc_82401528;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82401520;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// b 0x824014d8
	goto loc_824014D8;
loc_82401528:
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + r29.u64;
	// stw r28,56(r31)
	REX_STORE_U32(r31.u32 + 56, r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824013a8
	ctx.lr = 0x8240154C;
	sub_824013A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82401550:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82405278) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// srawi r11,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 18;
	// lis r8,4113
	ctx.r8.s64 = 269549568;
	// rlwinm r7,r11,2,27,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// addi r6,r1,-48
	ctx.r6.s64 = ctx.r1.s64 + -48;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r11,r8,4627
	ctx.r11.u64 = ctx.r8.u64 | 4627;
	// srawi r10,r3,21
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1FFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 21;
	// srawi r9,r3,24
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 24;
	// stw r11,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// ori r4,r4,515
	ctx.r4.u64 = ctx.r4.u64 | 515;
	// stw r11,-40(r1)
	REX_STORE_U32(ctx.r1.u32 + -40, ctx.r11.u32);
	// srawi r5,r3,27
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 27;
	// stw r11,-44(r1)
	REX_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// lis r31,1029
	r31.s64 = 67436544;
	// rlwinm r10,r10,2,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1C;
	// stwx r4,r7,r6
	REX_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r4.u32);
	// addi r3,r1,-48
	ctx.r3.s64 = ctx.r1.s64 + -48;
	// rlwinm r9,r9,2,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1C;
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// lis r30,2057
	r30.s64 = 134807552;
	// rlwinm r5,r5,2,27,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x1C;
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// lis r7,3085
	ctx.r7.s64 = 202178560;
	// addi r6,r1,-48
	ctx.r6.s64 = ctx.r1.s64 + -48;
	// ori r4,r31,1543
	ctx.r4.u64 = r31.u64 | 1543;
	// ori r31,r30,2571
	r31.u64 = r30.u64 | 2571;
	// ori r7,r7,3599
	ctx.r7.u64 = ctx.r7.u64 | 3599;
	// stwx r4,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u32);
	// stwx r31,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, r31.u32);
	// stwx r7,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r7.u32);
	// lvx128 v1,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82406328) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82406458
	if (ctx.cr6.eq) goto loc_82406458;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x824063d4
	if (ctx.cr6.eq) goto loc_824063D4;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x82406350
	if (ctx.cr6.eq) goto loc_82406350;
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82406350:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824063c8
	if (!ctx.cr6.eq) goto loc_824063C8;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x824063bc
	if (ctx.cr6.eq) goto loc_824063BC;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x824063bc
	if (ctx.cr6.eq) goto loc_824063BC;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x824063bc
	if (ctx.cr6.eq) goto loc_824063BC;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x824063c8
	if (!ctx.cr6.eq) goto loc_824063C8;
loc_824063BC:
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r3,r11,21936
	ctx.r3.s64 = ctx.r11.s64 + 21936;
	// blr 
	return;
loc_824063C8:
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r3,r11,21808
	ctx.r3.s64 = ctx.r11.s64 + 21808;
	// blr 
	return;
loc_824063D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8240644c
	if (!ctx.cr6.eq) goto loc_8240644C;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82406440
	if (ctx.cr6.eq) goto loc_82406440;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82406440
	if (ctx.cr6.eq) goto loc_82406440;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82406440
	if (ctx.cr6.eq) goto loc_82406440;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x8240644c
	if (!ctx.cr6.eq) goto loc_8240644C;
loc_82406440:
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r3,r11,21648
	ctx.r3.s64 = ctx.r11.s64 + 21648;
	// blr 
	return;
loc_8240644C:
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r3,r11,21520
	ctx.r3.s64 = ctx.r11.s64 + 21520;
	// blr 
	return;
loc_82406458:
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r3,r11,21440
	ctx.r3.s64 = ctx.r11.s64 + 21440;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8240E5D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8240E5D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8240e6ac
	if (ctx.cr6.eq) goto loc_8240E6AC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,16880
	r31.s64 = ctx.r11.s64 + 16880;
	// addi r30,r10,28368
	r30.s64 = ctx.r10.s64 + 28368;
	// bne cr6,0x8240e620
	if (!ctx.cr6.eq) goto loc_8240E620;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,28532
	ctx.r5.s64 = ctx.r11.s64 + 28532;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,163
	ctx.r7.s64 = 163;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x8240E620;
	sub_8240E308(ctx, base);
loc_8240E620:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240e648
	if (!ctx.cr6.eq) goto loc_8240E648;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,28512
	ctx.r5.s64 = ctx.r11.s64 + 28512;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,164
	ctx.r7.s64 = 164;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x8240E648;
	sub_8240E308(ctx, base);
loc_8240E648:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240e670
	if (ctx.cr6.eq) goto loc_8240E670;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,28484
	ctx.r5.s64 = ctx.r11.s64 + 28484;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,167
	ctx.r7.s64 = 167;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x8240E670;
	sub_8240E308(ctx, base);
loc_8240E670:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240e698
	if (ctx.cr6.eq) goto loc_8240E698;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,28456
	ctx.r5.s64 = ctx.r11.s64 + 28456;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,168
	ctx.r7.s64 = 168;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x8240E698;
	sub_8240E308(ctx, base);
loc_8240E698:
	// stw r29,8(r28)
	REX_STORE_U32(r28.u32 + 8, r29.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r28.u32);
	// stw r28,4(r29)
	REX_STORE_U32(r29.u32 + 4, r28.u32);
loc_8240E6AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82412118) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e58
	ctx.lr = 0x82412120;
	// stfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f29.u64);
	// stfd f30,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, f30.u64);
	// stfd f31,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r18,0
	r18.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r21,r18
	r21.u64 = r18.u64;
	// mr r25,r18
	r25.u64 = r18.u64;
	// mr r19,r18
	r19.u64 = r18.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mr r16,r18
	r16.u64 = r18.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82412830
	if (!ctx.cr6.eq) goto loc_82412830;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,112(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82412830
	if (!ctx.cr6.eq) goto loc_82412830;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,104(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// lwz r3,104(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// not r10,r9
	ctx.r10.u64 = ~ctx.r9.u64;
	// rlwinm r5,r11,16,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	// rlwinm r31,r10,15,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	// bl 0x824115c0
	ctx.lr = 0x82412188;
	sub_824115C0(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq 0x824127ec
	if (ctx.cr0.eq) goto loc_824127EC;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r4,108(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r3,108(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x824115c0
	ctx.lr = 0x824121A8;
	sub_824115C0(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x824127ec
	if (ctx.cr0.eq) goto loc_824127EC;
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lis r8,5461
	ctx.r8.s64 = 357892096;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// li r17,-1
	r17.s64 = -1;
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// ori r8,r8,21845
	ctx.r8.u64 = ctx.r8.u64 | 21845;
	// add r20,r11,r22
	r20.u64 = ctx.r11.u64 + r22.u64;
	// add r23,r10,r21
	r23.u64 = ctx.r10.u64 + r21.u64;
	// lwz r31,108(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 108);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, ctx.xer);
	// mulli r11,r31,12
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(12));
	// ble cr6,0x824121e4
	if (!ctx.cr6.gt) goto loc_824121E4;
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_824121E4:
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824121f8
	if (!ctx.cr6.gt) goto loc_824121F8;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_824121F8:
	// bl 0x822c80d0
	ctx.lr = 0x824121FC;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82412238
	if (ctx.cr0.eq) goto loc_82412238;
	// addic. r11,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	ctx.r11.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// blt 0x82412230
	if (ctx.cr0.lt) goto loc_82412230;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82412220:
	// stw r18,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r18.u32);
	// stw r18,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r18.u32);
	// stwu r18,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U32(ea, r18.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82412220
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82412220;
loc_82412230:
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// b 0x8241223c
	goto loc_8241223C;
loc_82412238:
	// mr r25,r18
	r25.u64 = r18.u64;
loc_8241223C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824127e0
	if (ctx.cr6.eq) goto loc_824127E0;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// ori r24,r10,65535
	r24.u64 = ctx.r10.u64 | 65535;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x82412264
	if (!ctx.cr6.gt) goto loc_82412264;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_82412264:
	// bl 0x822c80d0
	ctx.lr = 0x82412268;
	sub_822C80D0(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824127e0
	if (ctx.cr6.eq) goto loc_824127E0;
	// addi r7,r21,4
	ctx.r7.s64 = r21.s64 + 4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r23.u32, ctx.xer);
	// bge cr6,0x824122dc
	if (!ctx.cr6.lt) goto loc_824122DC;
loc_82412284:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x824122d0
	if (!ctx.cr6.lt) goto loc_824122D0;
	// subf r9,r11,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r11.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824122B0:
	// lwzu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// bdnz 0x824122b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824122B0;
loc_824122D0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r23
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r23.u32, ctx.xer);
	// blt cr6,0x82412284
	if (ctx.cr6.lt) goto loc_82412284;
loc_824122DC:
	// mr r26,r18
	r26.u64 = r18.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r23.u32, ctx.xer);
	// bge cr6,0x824127d8
	if (!ctx.cr6.lt) goto loc_824127D8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f29,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f29.f64 = double(temp.f32);
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lfs f30,2024(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2024);
	f30.f64 = double(temp.f32);
loc_82412304:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r29,r11,4
	r29.s64 = ctx.r11.s64 + 4;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bge cr6,0x82412398
	if (!ctx.cr6.lt) goto loc_82412398;
loc_8241231C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mulli r31,r11,12
	r31.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241238c
	if (!ctx.cr6.eq) goto loc_8241238C;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x8241234c
	if (ctx.cr6.eq) goto loc_8241234C;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// stwx r11,r31,r25
	REX_STORE_U32(r31.u32 + r25.u32, ctx.r11.u32);
	// stw r18,0(r19)
	REX_STORE_U32(r19.u32 + 0, r18.u32);
	// lwz r19,4(r19)
	r19.u64 = REX_LOAD_U32(r19.u32 + 4);
	// b 0x82412374
	goto loc_82412374;
loc_8241234C:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x82412364
	if (!ctx.cr6.gt) goto loc_82412364;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_82412364:
	// bl 0x822c80d0
	ctx.lr = 0x82412368;
	sub_822C80D0(ctx, base);
	// stwx r3,r31,r25
	REX_STORE_U32(r31.u32 + r25.u32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824127e0
	if (ctx.cr6.eq) goto loc_824127E0;
loc_82412374:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r31,r25
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + r25.u32);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822d5870
	ctx.lr = 0x8241238C;
	sub_822D5870(ctx, base);
loc_8241238C:
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// blt cr6,0x8241231c
	if (ctx.cr6.lt) goto loc_8241231C;
loc_82412398:
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824123B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r22,4
	ctx.r11.s64 = r22.s64 + 4;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// bge cr6,0x824124b0
	if (!ctx.cr6.lt) goto loc_824124B0;
	// addi r8,r16,8
	ctx.r8.s64 = r16.s64 + 8;
loc_824123C8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x824124a0
	if (!ctx.cr6.lt) goto loc_824124A0;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_824123E0:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r10,r11,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// bge cr6,0x82412494
	if (!ctx.cr6.lt) goto loc_82412494;
	// subf r9,r4,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r4.u64;
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8241240C:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f13,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,-8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfsx f13,r9,r10
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lfs f13,-4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// lfs f12,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f13,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// lfs f12,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwzu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lfs f13,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r9,12
	ctx.r7.s64 = ctx.r9.s64 + 12;
	// lfs f12,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// bdnz 0x8241240c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241240C;
loc_82412494:
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmplw cr6,r6,r28
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r28.u32, ctx.xer);
	// blt cr6,0x824123e0
	if (ctx.cr6.lt) goto loc_824123E0;
loc_824124A0:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r20
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r20.u32, ctx.xer);
	// blt cr6,0x824123c8
	if (ctx.cr6.lt) goto loc_824123C8;
loc_824124B0:
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bge cr6,0x824127c8
	if (!ctx.cr6.lt) goto loc_824127C8;
loc_824124BC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r31,r11,r25
	r31.u64 = ctx.r11.u64 + r25.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bne 0x824127bc
	if (!ctx.cr0.eq) goto loc_824127BC;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x824126b8
	if (ctx.cr6.eq) goto loc_824126B8;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x824125d8
	if (ctx.cr6.eq) goto loc_824125D8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82412794
	if (!ctx.cr6.eq) goto loc_82412794;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82412794
	if (!ctx.cr6.gt) goto loc_82412794;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_82412510:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82412528
	if (!ctx.cr6.lt) goto loc_82412528;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x82412534
	goto loc_82412534;
loc_82412528:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82412534
	if (ctx.cr6.lt) goto loc_82412534;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82412534:
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82412554
	if (!ctx.cr6.lt) goto loc_82412554;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x82412560
	goto loc_82412560;
loc_82412554:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82412560
	if (ctx.cr6.lt) goto loc_82412560;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82412560:
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82412580
	if (!ctx.cr6.lt) goto loc_82412580;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x8241258c
	goto loc_8241258C;
loc_82412580:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8241258c
	if (ctx.cr6.lt) goto loc_8241258C;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_8241258C:
	// stfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x824125ac
	if (!ctx.cr6.lt) goto loc_824125AC;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x824125b8
	goto loc_824125B8;
loc_824125AC:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x824125b8
	if (ctx.cr6.lt) goto loc_824125B8;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_824125B8:
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r10,104(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82412510
	if (ctx.cr6.lt) goto loc_82412510;
	// b 0x82412794
	goto loc_82412794;
loc_824125D8:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82412794
	if (!ctx.cr6.gt) goto loc_82412794;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_824125F0:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82412608
	if (!ctx.cr6.lt) goto loc_82412608;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x82412614
	goto loc_82412614;
loc_82412608:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82412614
	if (ctx.cr6.lt) goto loc_82412614;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82412614:
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82412634
	if (!ctx.cr6.lt) goto loc_82412634;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x82412640
	goto loc_82412640;
loc_82412634:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82412640
	if (ctx.cr6.lt) goto loc_82412640;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82412640:
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82412660
	if (!ctx.cr6.lt) goto loc_82412660;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x8241266c
	goto loc_8241266C;
loc_82412660:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8241266c
	if (ctx.cr6.lt) goto loc_8241266C;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_8241266C:
	// stfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x8241268c
	if (!ctx.cr6.lt) goto loc_8241268C;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x82412698
	goto loc_82412698;
loc_8241268C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82412698
	if (ctx.cr6.lt) goto loc_82412698;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82412698:
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,104(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824125f0
	if (ctx.cr6.lt) goto loc_824125F0;
	// b 0x82412794
	goto loc_82412794;
loc_824126B8:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82412794
	if (!ctx.cr6.gt) goto loc_82412794;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_824126D0:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x824126e8
	if (!ctx.cr6.lt) goto loc_824126E8;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x824126f4
	goto loc_824126F4;
loc_824126E8:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x824126f4
	if (ctx.cr6.lt) goto loc_824126F4;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_824126F4:
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x82412714
	if (!ctx.cr6.lt) goto loc_82412714;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x82412720
	goto loc_82412720;
loc_82412714:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82412720
	if (ctx.cr6.lt) goto loc_82412720;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82412720:
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x82412740
	if (!ctx.cr6.lt) goto loc_82412740;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x8241274c
	goto loc_8241274C;
loc_82412740:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8241274c
	if (ctx.cr6.lt) goto loc_8241274C;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_8241274C:
	// stfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x8241276c
	if (!ctx.cr6.lt) goto loc_8241276C;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x82412778
	goto loc_82412778;
loc_8241276C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82412778
	if (ctx.cr6.lt) goto loc_82412778;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82412778:
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,104(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824126d0
	if (ctx.cr6.lt) goto loc_824126D0;
loc_82412794:
	// lwz r3,4(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824127B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r19,4(r31)
	REX_STORE_U32(r31.u32 + 4, r19.u32);
	// mr r19,r31
	r19.u64 = r31.u64;
loc_824127BC:
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// blt cr6,0x824124bc
	if (ctx.cr6.lt) goto loc_824124BC;
loc_824127C8:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(r28.u32, r23.u32, ctx.xer);
	// blt cr6,0x82412304
	if (ctx.cr6.lt) goto loc_82412304;
loc_824127D8:
	// mr r31,r18
	r31.u64 = r18.u64;
	// b 0x824127f4
	goto loc_824127F4;
loc_824127E0:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x824127f4
	goto loc_824127F4;
loc_824127EC:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
loc_824127F4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82412808
	if (ctx.cr6.eq) goto loc_82412808;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824118b0
	ctx.lr = 0x82412808;
	sub_824118B0(ctx, base);
loc_82412808:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822c80a8
	ctx.lr = 0x82412810;
	sub_822C80A8(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822c80a8
	ctx.lr = 0x82412818;
	sub_822C80A8(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x822c80a8
	ctx.lr = 0x82412820;
	sub_822C80A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c80a8
	ctx.lr = 0x82412828;
	sub_822C80A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82412838
	goto loc_82412838;
loc_82412830:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82412838:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f30,-152(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_82429B60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82429B68;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,1452(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 1452);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82412d18
	ctx.lr = 0x82429B84;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x82429ba4
	if (ctx.cr0.eq) goto loc_82429BA4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82429b08
	ctx.lr = 0x82429BA0;
	sub_82429B08(ctx, base);
	// b 0x82429ba8
	goto loc_82429BA8;
loc_82429BA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82429BA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8242B2E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8242B2F0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,357
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 357, ctx.xer);
	// beq cr6,0x8242b31c
	if (ctx.cr6.eq) goto loc_8242B31C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8242b31c
	if (ctx.cr6.eq) goto loc_8242B31C;
	// lhz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 16);
	// addi r28,r11,18
	r28.s64 = ctx.r11.s64 + 18;
	// cmplwi cr6,r28,40
	ctx.cr6.compare<uint32_t>(r28.u32, 40, ctx.xer);
	// bge cr6,0x8242b320
	if (!ctx.cr6.lt) goto loc_8242B320;
loc_8242B31C:
	// li r28,40
	r28.s64 = 40;
loc_8242B320:
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823cd118
	ctx.lr = 0x8242B32C;
	sub_823CD118(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8242b3f8
	if (ctx.cr0.eq) goto loc_8242B3F8;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,357
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 357, ctx.xer);
	// bne cr6,0x8242b348
	if (!ctx.cr6.eq) goto loc_8242B348;
	// li r30,32
	r30.s64 = 32;
	// b 0x8242b360
	goto loc_8242B360;
loc_8242B348:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8242b358
	if (!ctx.cr6.eq) goto loc_8242B358;
	// li r30,16
	r30.s64 = 16;
	// b 0x8242b360
	goto loc_8242B360;
loc_8242B358:
	// lhz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 16);
	// addi r30,r11,18
	r30.s64 = ctx.r11.s64 + 18;
loc_8242B360:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8242B370;
	sub_822D4FA0(ctx, base);
	// subf r5,r30,r28
	ctx.r5.u64 = r28.u64 - r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r29
	ctx.r3.u64 = r30.u64 + r29.u64;
	// bl 0x822d5870
	ctx.lr = 0x8242B380;
	sub_822D5870(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// beq cr6,0x8242b3f8
	if (ctx.cr6.eq) goto loc_8242B3F8;
	// lhz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 14);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r11,18(r29)
	REX_STORE_U16(r29.u32 + 18, ctx.r11.u16);
	// bl 0x8242a4f8
	ctx.lr = 0x8242B3A0;
	sub_8242A4F8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r3,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r3.u32);
	// addi r9,r11,9780
	ctx.r9.s64 = ctx.r11.s64 + 9780;
	// li r8,-2
	ctx.r8.s64 = -2;
	// sth r10,16(r29)
	REX_STORE_U16(r29.u32 + 16, ctx.r10.u16);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// sth r8,0(r29)
	REX_STORE_U16(r29.u32 + 0, ctx.r8.u16);
	// addi r3,r29,24
	ctx.r3.s64 = r29.s64 + 24;
	// lwz r11,9780(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 9780);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,8(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r6,12(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lhz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 0);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r6,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x8242B3F8;
	sub_822D4FA0(ctx, base);
loc_8242B3F8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82430C50) {
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
	ctx.lr = 0x82430C58;
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r1,-180
	ctx.r8.s64 = ctx.r1.s64 + -180;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// lwz r30,20(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r28,32(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82430C7C:
	// lwzu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82430c7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430C7C;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82430d00
	if (!ctx.cr6.eq) goto loc_82430D00;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,-152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// stfs f12,-148(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -148, temp.u32);
	// stfs f0,-128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// stfs f11,-144(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stfs f0,-124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// stfs f10,-140(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// stfs f0,-120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// stfs f9,-136(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// stfs f0,-116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// stfs f8,-132(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// stfs f0,-112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// stfs f0,-108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// stfs f0,-104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// stfs f0,-100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// stfs f0,-92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// stfs f0,-88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// stfs f0,-84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// b 0x82430d94
	goto loc_82430D94;
loc_82430D00:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r6,6
	ctx.r6.s64 = 6;
	// lfs f12,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r1,-132
	ctx.r7.s64 = ctx.r1.s64 + -132;
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f9,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
	// lfs f6,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// lfs f4,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lfs f3,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// lfs f1,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f3,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// lfs f12,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f11,-152(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// stfs f8,-148(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -148, temp.u32);
	// stfs f5,-144(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stfs f2,-140(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// stfs f13,-136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// stfs f10,-132(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
loc_82430D6C:
	// lwzu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x82430d6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430D6C;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r8,r1,-108
	ctx.r8.s64 = ctx.r1.s64 + -108;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82430D88:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82430d88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430D88;
loc_82430D94:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// addi r8,r1,-96
	ctx.r8.s64 = ctx.r1.s64 + -96;
	// addi r7,r1,-112
	ctx.r7.s64 = ctx.r1.s64 + -112;
	// addi r6,r1,-112
	ctx.r6.s64 = ctx.r1.s64 + -112;
	// addi r5,r1,-128
	ctx.r5.s64 = ctx.r1.s64 + -128;
	// addi r4,r1,-128
	ctx.r4.s64 = ctx.r1.s64 + -128;
	// lvrx128 v63,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,-144
	ctx.r3.s64 = ctx.r1.s64 + -144;
	// lvrx128 v60,r10,r7
	temp.u32 = ctx.r10.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r9,r1,-144
	ctx.r9.s64 = ctx.r1.s64 + -144;
	// lvlx128 v59,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,-160
	ctx.r8.s64 = ctx.r1.s64 + -160;
	// lvrx128 v57,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r7,r1,-160
	ctx.r7.s64 = ctx.r1.s64 + -160;
	// addi r6,r1,-176
	ctx.r6.s64 = ctx.r1.s64 + -176;
	// lvlx128 v56,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// lvrx128 v55,r10,r3
	temp.u32 = ctx.r10.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// rlwinm r4,r11,0,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// lvlx128 v54,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r29,4
	r29.s64 = 4;
	// lvlx128 v52,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v61,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvrx128 v51,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v58,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// lvlx128 v50,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v57,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vor128 v12,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// vor128 v13,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vor128 v0,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// beq cr6,0x82430e9c
	if (ctx.cr6.eq) goto loc_82430E9C;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// ble cr6,0x82430fec
	if (!ctx.cr6.gt) goto loc_82430FEC;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
loc_82430E2C:
	// lvlx128 v49,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v12,v12,v61
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v61.f32)));
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// vspltw128 v63,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xFF));
	// vor128 v48,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vmulfp128 v63,v63,v0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v0,v0,v57
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vmulfp128 v62,v48,v13
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp128 v13,v13,v58
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v58.f32)));
	// beq cr6,0x82430e6c
	if (ctx.cr6.eq) goto loc_82430E6C;
	// lvlx128 v47,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v46,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v45,v47,v46
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// lvlx128 v44,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v62,v62,v44
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v44.f32)));
	// vaddfp128 v63,v63,v45
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v45.f32)));
loc_82430E6C:
	// vpermwi128 v43,v62,17
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xEE));
	// stvlx128 v63,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// rlwinm r8,r11,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stvewx128 v43,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r9,r29
	ea = (ctx.r9.u32 + r29.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// bne cr6,0x82430e2c
	if (!ctx.cr6.eq) goto loc_82430E2C;
loc_82430E9C:
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// ble cr6,0x82430fec
	if (!ctx.cr6.gt) goto loc_82430FEC;
	// rlwinm r3,r30,2,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFF0;
	// vaddfp128 v63,v61,v61
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v61.f32)));
	// clrlwi r30,r30,30
	r30.u64 = r30.u32 & 0x3;
	// vaddfp128 v62,v58,v58
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v58.f32)));
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// vaddfp128 v61,v57,v57
	simde_mm_store_ps(ctx.v61.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v57.f32)));
	// beq cr6,0x82430fe8
	if (ctx.cr6.eq) goto loc_82430FE8;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,864
	ctx.r9.s64 = ctx.r11.s64 + 864;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r7,64
	ctx.r7.s64 = 64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r8,80
	ctx.r8.s64 = 80;
loc_82430EE8:
	// lvrx128 v42,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v41,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v41,v42
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// dcbt r0,r9
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// vor128 v59,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vmrghw128 v11,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// vmrglw128 v10,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// beq cr6,0x82430f80
	if (ctx.cr6.eq) goto loc_82430F80;
	// vspltw128 v9,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// lvx128 v8,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v7,v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x55));
	// lvx128 v6,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v5,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// lvx128 v3,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v4,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x55));
	// vmaddfp v9,v9,v0,v8
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// lvx128 v8,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v11,v13,v8
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v8,v7,v12,v6
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// lvx128 v6,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v13,v13,v62
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v62.f32)));
	// lvx128 v7,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v0,v0,v61
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vaddfp128 v12,v12,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v9,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v8,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v10,v13,v6
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v9,v5,v0,v7
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v10,v4,v12,v3
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vaddfp128 v0,v0,v61
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vaddfp128 v13,v13,v62
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v12,v12,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v11,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82430fd8
	goto loc_82430FD8;
loc_82430F80:
	// vaddfp128 v40,v13,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v40.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vspltw128 v39,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// vaddfp128 v38,v0,v61
	simde_mm_store_ps(ctx.v38.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vspltw128 v35,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// vaddfp128 v36,v12,v63
	simde_mm_store_ps(ctx.v36.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v37,v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x55));
	// vspltw128 v34,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x55));
	// vmulfp128 v33,v11,v13
	simde_mm_store_ps(ctx.v33.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v32,v39,v0
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v60,v37,v12
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v59,v10,v40
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v40.f32)));
	// vmulfp128 v56,v35,v38
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v38.f32)));
	// vmulfp128 v55,v34,v36
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v36.f32)));
	// stvx128 v33,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v13,v40,v62
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvx128 v32,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v0,v38,v61
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vaddfp128 v12,v36,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v60,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82430FD8:
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r9,r11,864
	ctx.r9.s64 = ctx.r11.s64 + 864;
	// bdnz 0x82430ee8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430EE8;
loc_82430FE8:
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
loc_82430FEC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82431058
	if (ctx.cr6.eq) goto loc_82431058;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82430FF8:
	// lvlx128 v54,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// vspltw128 v63,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), 0xFF));
	// vor128 v53,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vmulfp128 v63,v63,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v0,v0,v57
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vmulfp128 v62,v53,v13
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp128 v13,v13,v58
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v58.f32)));
	// beq cr6,0x82431034
	if (ctx.cr6.eq) goto loc_82431034;
	// lvlx128 v52,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v51,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v50,v52,v51
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v49,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v62,v62,v49
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v49.f32)));
	// vaddfp128 v63,v63,v50
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v50.f32)));
loc_82431034:
	// vpermwi128 v48,v62,17
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xEE));
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stvlx128 v63,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stvrx128 v63,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stvewx128 v48,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v48,r9,r29
	ea = (ctx.r9.u32 + r29.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// bdnz 0x82430ff8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430FF8;
loc_82431058:
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82453A10) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f11,28(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// blt cr6,0x82453b78
	if (ctx.cr6.lt) goto loc_82453B78;
	// addi r10,r5,-3
	ctx.r10.s64 = ctx.r5.s64 + -3;
loc_82453A40:
	// lfs f10,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfsu f12,4(r4)
	ea = 4 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f6,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f7,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f4,f6,f13,f9
	ctx.f4.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmadds f5,f7,f13,f8
	ctx.f5.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f8.f64)));
	// lfs f9,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfsu f12,4(r4)
	ea = 4 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f5,20(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmadds f7,f13,f9,f3
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f3.f64)));
	// stfs f7,0(r4)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// lfsu f12,4(r4)
	ea = 4 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f4,16(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmr f10,f5
	ctx.f10.f64 = ctx.f5.f64;
	// lfs f9,28(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f5,f4,f13,f8
	ctx.f5.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f8.f64)));
	// stfs f5,16(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f7,24(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fmadds f8,f13,f9,f1
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f1.f64)));
	// stfs f8,0(r4)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfsu f12,4(r4)
	ea = 4 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// stfs f8,28(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmadds f4,f10,f13,f6
	ctx.f4.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f6.f64)));
	// stfs f4,20(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// fmadds f5,f13,f7,f2
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, ctx.f2.f64)));
	// stfs f5,0(r4)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfsu f12,4(r4)
	ea = 4 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// fmr f11,f4
	ctx.f11.f64 = ctx.f4.f64;
	// stfs f5,24(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fmuls f4,f12,f0
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f2,f3,f13,f6
	ctx.f2.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, ctx.f6.f64)));
	// stfs f2,16(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f1,f11,f13,f4
	ctx.f1.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f4.f64)));
	// stfs f1,20(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmuls f6,f3,f0
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmr f9,f2
	ctx.f9.f64 = ctx.f2.f64;
	// fmuls f2,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f3,f13,f8,f10
	ctx.f3.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, ctx.f10.f64)));
	// stfs f3,0(r4)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmr f4,f1
	ctx.f4.f64 = ctx.f1.f64;
	// lfsu f12,4(r4)
	ea = 4 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f3,28(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmadds f12,f13,f5,f6
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f6.f64)));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfsu f11,4(r4)
	ea = 4 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// fmadds f10,f13,f3,f2
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f3.f64, ctx.f2.f64)));
	// fmuls f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fmuls f2,f9,f0
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f10,28(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmadds f9,f9,f13,f1
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f1.f64)));
	// stfs f9,16(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmadds f8,f4,f13,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f6.f64)));
	// stfs f8,20(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fmadds f12,f13,f12,f2
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f2.f64)));
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fmadds f11,f13,f10,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f11.f64)));
	// stfs f11,28(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// ble cr6,0x82453a40
	if (!ctx.cr6.gt) goto loc_82453A40;
loc_82453B78:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// lfs f13,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82453B90:
	// lfs f10,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfsu f10,4(r4)
	ea = 4 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f10.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f3,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f13,f9,f8
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f8.f64)));
	// lfs f1,28(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f12,f13,f3,f6
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f3.f64, ctx.f6.f64)));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmadds f11,f13,f1,f5
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f5.f64)));
	// fmadds f10,f13,f7,f4
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, ctx.f4.f64)));
	// stfs f2,16(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stfs f11,28(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// bdnz 0x82453b90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82453B90;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245E798) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x8245f5a8
	sub_8245F5A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8245E7B8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8245e648
	sub_8245E648(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8245E7E0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8245e838
	sub_8245E838(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8245F028) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8245F030;
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
	ctx.lr = 0x8245F050;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8245f070
	if (!ctx.cr6.eq) goto loc_8245F070;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// bl 0x824757e8
	ctx.lr = 0x8245F068;
	sub_824757E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8245f0dc
	goto loc_8245F0DC;
loc_8245F070:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x8242c3b0
	ctx.lr = 0x8245F08C;
	sub_8242C3B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8245f0a0
	if (!ctx.cr0.eq) goto loc_8245F0A0;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x8245f0dc
	goto loc_8245F0DC;
loc_8245F0A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,13
	ctx.r10.s64 = 13;
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
	// bl 0x8245f9d8
	ctx.lr = 0x8245F0CC;
	sub_8245F9D8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x8245f0dc
	if (!ctx.cr0.lt) goto loc_8245F0DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8245F0DC;
	sub_82473600(ctx, base);
loc_8245F0DC:
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245F0F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82460458) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r11,r11,31404
	ctx.r11.s64 = ctx.r11.s64 + 31404;
	// addi r10,r10,31360
	ctx.r10.s64 = ctx.r10.s64 + 31360;
	// addi r9,r9,31316
	ctx.r9.s64 = ctx.r9.s64 + 31316;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// beq 0x8246049c
	if (ctx.cr0.eq) goto loc_8246049C;
	// bl 0x82473600
	ctx.lr = 0x8246049C;
	sub_82473600(ctx, base);
loc_8246049C:
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

DEFINE_REX_FUNC(sub_824628B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lfsx f0,r9,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// std r8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f13,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x8246291c
	if (!ctx.cr6.lt) goto loc_8246291C;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8246291C:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82465008) {
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
	ctx.lr = 0x82465010;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824650cc
	if (ctx.cr6.eq) goto loc_824650CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824650cc
	if (ctx.cr6.eq) goto loc_824650CC;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x824650b8
	if (!ctx.cr6.gt) goto loc_824650B8;
	// mr r29,r30
	r29.u64 = r30.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
loc_82465040:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8246505c
	if (ctx.cr6.eq) goto loc_8246505C;
	// bl 0x82460ee8
	ctx.lr = 0x82465058;
	sub_82460EE8(ctx, base);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_8246505C:
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82465070
	if (ctx.cr6.eq) goto loc_82465070;
	// bl 0x82460ee8
	ctx.lr = 0x8246506C;
	sub_82460EE8(ctx, base);
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
loc_82465070:
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82465084
	if (ctx.cr6.eq) goto loc_82465084;
	// bl 0x82460ee8
	ctx.lr = 0x82465080;
	sub_82460EE8(ctx, base);
	// stw r30,140(r31)
	REX_STORE_U32(r31.u32 + 140, r30.u32);
loc_82465084:
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82465098
	if (ctx.cr6.eq) goto loc_82465098;
	// bl 0x82460ee8
	ctx.lr = 0x82465094;
	sub_82460EE8(ctx, base);
	// stw r30,144(r31)
	REX_STORE_U32(r31.u32 + 144, r30.u32);
loc_82465098:
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824650ac
	if (ctx.cr6.eq) goto loc_824650AC;
	// bl 0x82460ee8
	ctx.lr = 0x824650A8;
	sub_82460EE8(ctx, base);
	// stw r30,148(r31)
	REX_STORE_U32(r31.u32 + 148, r30.u32);
loc_824650AC:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r29,r29,152
	r29.s64 = r29.s64 + 152;
	// bne 0x82465040
	if (!ctx.cr0.eq) goto loc_82465040;
loc_824650B8:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824650cc
	if (ctx.cr6.eq) goto loc_824650CC;
	// bl 0x82460ee8
	ctx.lr = 0x824650C8;
	sub_82460EE8(ctx, base);
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
loc_824650CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8246A0A0) {
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
	// bl 0x822d4e70
	ctx.lr = 0x8246A0A8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// li r25,0
	r25.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r26,r25
	r26.u64 = r25.u64;
	// mr r23,r25
	r23.u64 = r25.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// mr r24,r25
	r24.u64 = r25.u64;
	// beq cr6,0x8246a2b0
	if (ctx.cr6.eq) goto loc_8246A2B0;
	// li r3,4100
	ctx.r3.s64 = 4100;
	// bl 0x82460ed8
	ctx.lr = 0x8246A0DC;
	sub_82460ED8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8246a160
	if (ctx.cr6.eq) goto loc_8246A160;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r29,r3,-4
	r29.s64 = ctx.r3.s64 + -4;
	// lis r27,128
	r27.s64 = 8388608;
	// addi r28,r11,-29820
	r28.s64 = ctx.r11.s64 + -29820;
loc_8246A0FC:
	// rlwinm r4,r31,13,0,18
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 13) & 0xFFFFE000;
	// cmpw cr6,r4,r27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r27.s32, ctx.xer);
	// bne cr6,0x8246a110
	if (!ctx.cr6.eq) goto loc_8246A110;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// b 0x8246a11c
	goto loc_8246A11C;
loc_8246A110:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82469b98
	ctx.lr = 0x8246A118;
	sub_82469B98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8246A11C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82469ef0
	ctx.lr = 0x8246A124;
	sub_82469EF0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stwu r3,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
	// cmpwi cr6,r31,1024
	ctx.cr6.compare<int32_t>(r31.s32, 1024, ctx.xer);
	// ble cr6,0x8246a0fc
	if (!ctx.cr6.gt) goto loc_8246A0FC;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lis r10,320
	ctx.r10.s64 = 20971520;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8246a14c
	if (ctx.cr6.lt) goto loc_8246A14C;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_8246A14C:
	// li r3,4100
	ctx.r3.s64 = 4100;
	// bl 0x82460ed8
	ctx.lr = 0x8246A154;
	sub_82460ED8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8246a16c
	if (!ctx.cr6.eq) goto loc_8246A16C;
loc_8246A160:
	// lis r25,-32761
	r25.s64 = -2147024896;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// b 0x8246a2b0
	goto loc_8246A2B0;
loc_8246A16C:
	// li r11,1024
	ctx.r11.s64 = 1024;
	// mr r24,r31
	r24.u64 = r31.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8246A180:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// subf. r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x8246a194
	if (ctx.cr0.gt) goto loc_8246A194;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_8246A194:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8246a1a0
	if (!ctx.cr6.gt) goto loc_8246A1A0;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_8246A1A0:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8246a180
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246A180;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bgt cr6,0x8246a1b4
	if (ctx.cr6.gt) goto loc_8246A1B4;
	// li r7,2
	ctx.r7.s64 = 2;
loc_8246A1B4:
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8246a1d4
	if (!ctx.cr6.gt) goto loc_8246A1D4;
loc_8246A1C4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8246a1c4
	if (ctx.cr6.gt) goto loc_8246A1C4;
loc_8246A1D4:
	// lwz r10,296(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 296);
	// rlwinm r9,r22,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r8,r11,29
	ctx.xer.ca = ctx.r11.u32 <= 29;
	ctx.r8.u64 = static_cast<uint64_t>(29) - ctx.r11.u64;
	// stwx r8,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r7,296(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 296);
	// lwzx r6,r9,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8246a200
	if (!ctx.cr6.gt) goto loc_8246A200;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x8246a204
	goto loc_8246A204;
loc_8246A200:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
loc_8246A204:
	// lwz r6,296(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 296);
	// li r8,1024
	ctx.r8.s64 = 1024;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// subf r10,r26,r31
	ctx.r10.u64 = r31.u64 - r26.u64;
	// stwx r7,r9,r6
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r7.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8246A21C:
	// lwz r8,296(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 296);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r5,r7,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r7.u64;
	// lwzx r4,r9,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// slw r3,r5,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// srawi r8,r3,13
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1FFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 13;
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// lwz r6,296(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 296);
	// ble cr6,0x8246a27c
	if (!ctx.cr6.gt) goto loc_8246A27C;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r7,13,0,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0xFFFFE000;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// lwzx r7,r9,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// sraw r7,r3,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r7.s64 = ctx.r3.s32 >> temp.u32;
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x8246a2a4
	if (!ctx.cr6.gt) goto loc_8246A2A4;
	// b 0x8246a2a0
	goto loc_8246A2A0;
loc_8246A27C:
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r8,13,0,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0xFFFFE000;
	// subf r3,r8,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r8.u64;
	// lwzx r8,r9,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// sraw r8,r3,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r8.s64 = ctx.r3.s32 >> temp.u32;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8246a2a4
	if (!ctx.cr6.lt) goto loc_8246A2A4;
loc_8246A2A0:
	// stwx r25,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r25.u32);
loc_8246A2A4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8246a21c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246A21C;
	// stw r25,4096(r31)
	REX_STORE_U32(r31.u32 + 4096, r25.u32);
loc_8246A2B0:
	// lwz r11,268(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 268);
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stwx r26,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r26.u32);
	// lwz r9,260(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 260);
	// stwx r23,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r23.u32);
	// lwz r8,272(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 272);
	// stwx r31,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, r31.u32);
	// lwz r7,264(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 264);
	// stwx r24,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82473600) {
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
	ctx.lr = 0x82473608;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// lwz r27,-8(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + -8);
	// subf r30,r11,r3
	r30.u64 = ctx.r3.u64 - ctx.r11.u64;
	// addi r31,r10,7712
	r31.s64 = ctx.r10.s64 + 7712;
	// addi r29,r30,-8
	r29.s64 = r30.s64 + -8;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r11,-8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r28,r11,-8
	r28.s64 = ctx.r11.s64 + -8;
	// bl 0x824d438c
	ctx.lr = 0x82473638;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,-8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + -8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// subf r9,r9,r29
	ctx.r9.u64 = r29.u64 - ctx.r9.u64;
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r9,r8
	ctx.r9.u64 = uint32_t(ctx.r8.u32 ? ctx.r9.u32 / ctx.r8.u32 : 0);
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// xor r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// bl 0x824d437c
	ctx.lr = 0x8247366C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r27,2,17,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0x7FFC;
	// addi r11,r31,20
	ctx.r11.s64 = r31.s64 + 20;
	// subf r9,r28,r9
	ctx.r9.u64 = ctx.r9.u64 - r28.u64;
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// subf r9,r28,r9
	ctx.r9.u64 = ctx.r9.u64 - r28.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82474450) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r9,11036
	ctx.r4.s64 = ctx.r9.s64 + 11036;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82474494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// blt 0x824744d4
	if (ctx.cr0.lt) goto loc_824744D4;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824744B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824744D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824744ec
	goto loc_824744EC;
loc_824744D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824744E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_824744EC:
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

DEFINE_REX_FUNC(sub_82475DA0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82475DC8) {
	REX_FUNC_PROLOGUE();
	// stw r4,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82475E70) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// addi r10,r10,3304
	ctx.r10.s64 = ctx.r10.s64 + 3304;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r8,r3,56
	ctx.r8.s64 = ctx.r3.s64 + 56;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r7,16(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stw r7,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r9,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r8,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r10,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lwz r8,56(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r9,60(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// stw r10,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stw r10,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247BD60) {
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
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
loc_8247BD7C:
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// ld r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// cmpd cr6,r11,r7
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r7.s64, ctx.xer);
	// bne cr6,0x8247bd7c
	if (!ctx.cr6.eq) goto loc_8247BD7C;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8247bdf8
	if (!ctx.cr6.eq) goto loc_8247BDF8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247be9c
	if (ctx.cr6.eq) goto loc_8247BE9C;
	// lwsync 
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// rldicr r11,r10,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r10,r7,33
	ctx.r10.u64 = ctx.r7.u64 & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8247BDC8:
	// mfmsr r31
	std::atomic_thread_fence(std::memory_order_seq_cst);
	r31.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r6,0,r5
	ea = ctx.r5.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r6,r9
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r9.s64, ctx.xer);
	// bne cr6,0x8247bdec
	if (!ctx.cr6.eq) goto loc_8247BDEC;
	// stdcx. r11,0,r5
	ea = ctx.r5.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r11.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r31,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (r31.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8247bdc8
	if (!ctx.cr0.eq) goto loc_8247BDC8;
	// b 0x8247bd7c
	goto loc_8247BD7C;
loc_8247BDEC:
	// stdcx. r6,0,r5
	ea = ctx.r5.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r31,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (r31.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// b 0x8247bd7c
	goto loc_8247BD7C;
loc_8247BDF8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247bd7c
	if (ctx.cr6.eq) goto loc_8247BD7C;
	// ld r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8247BE18:
	// mfmsr r30
	std::atomic_thread_fence(std::memory_order_seq_cst);
	r30.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r31,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	r31.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r31,r11
	ctx.cr6.compare<int64_t>(r31.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8247be3c
	if (!ctx.cr6.eq) goto loc_8247BE3C;
	// stdcx. r10,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r30,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (r30.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8247be18
	if (!ctx.cr0.eq) goto loc_8247BE18;
	// b 0x8247be44
	goto loc_8247BE44;
loc_8247BE3C:
	// stdcx. r31,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(r31.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r30,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (r30.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8247BE44:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmpd cr6,r31,r11
	ctx.cr6.compare<int64_t>(r31.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8247bd7c
	if (!ctx.cr6.eq) goto loc_8247BD7C;
	// std r7,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// rldicr r9,r6,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000;
loc_8247BE58:
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// lwsync 
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r8,33
	ctx.r10.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8247BE78:
	// mfmsr r5
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r5.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r7,0,r3
	ea = ctx.r3.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8247bea4
	if (!ctx.cr6.eq) goto loc_8247BEA4;
	// stdcx. r4,0,r3
	ea = ctx.r3.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8247be78
	if (!ctx.cr0.eq) goto loc_8247BE78;
	// b 0x8247beac
	goto loc_8247BEAC;
loc_8247BE9C:
	// li r3,258
	ctx.r3.s64 = 258;
	// b 0x8247bf00
	goto loc_8247BF00;
loc_8247BEA4:
	// stdcx. r7,0,r3
	ea = ctx.r3.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8247BEAC:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8247be58
	if (!ctx.cr6.eq) goto loc_8247BE58;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247befc
	if (ctx.cr6.eq) goto loc_8247BEFC;
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
loc_8247BEC8:
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
	// bne 0x8247bec8
	if (!ctx.cr0.eq) goto loc_8247BEC8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8247befc
	if (ctx.cr6.gt) goto loc_8247BEFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x8247c540
	ctx.lr = 0x8247BEFC;
	sub_8247C540(ctx, base);
loc_8247BEFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247BF00:
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

DEFINE_REX_FUNC(sub_82490580) {
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
	// blt cr6,0x82490670
	if (ctx.cr6.lt) goto loc_82490670;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// blt cr6,0x824905f8
	if (ctx.cr6.lt) goto loc_824905F8;
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
	// b 0x82490608
	goto loc_82490608;
loc_824905F8:
	// lwz r10,1476(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1476);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
loc_82490608:
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// blt cr6,0x82490658
	if (ctx.cr6.lt) goto loc_82490658;
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
loc_82490658:
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
loc_82490670:
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

DEFINE_REX_FUNC(sub_824A3B10) {
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
	// bl 0x822d4e50
	ctx.lr = 0x824A3B18;
	// stwu r1,-2416(r1)
	ea = -2416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3788(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3788);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r5,1312(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 1312);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// stw r8,2476(r1)
	REX_STORE_U32(ctx.r1.u32 + 2476, ctx.r8.u32);
	// li r14,0
	r14.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a4ae8
	if (ctx.cr6.eq) goto loc_824A4AE8;
	// lwz r11,3792(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a4ae8
	if (ctx.cr6.eq) goto loc_824A4AE8;
	// lwz r11,3796(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3796);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a4ae8
	if (ctx.cr6.eq) goto loc_824A4AE8;
	// addi r11,r1,911
	ctx.r11.s64 = ctx.r1.s64 + 911;
	// addi r10,r1,271
	ctx.r10.s64 = ctx.r1.s64 + 271;
	// addi r9,r1,1484
	ctx.r9.s64 = ctx.r1.s64 + 1484;
	// rlwinm r8,r11,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r4,r10,0,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r11,r9,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r8,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r8.u32);
	// stw r4,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r4.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r11,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r11.u32);
	// lhz r18,74(r31)
	r18.u64 = REX_LOAD_U16(r31.u32 + 74);
	// lhz r16,76(r31)
	r16.u64 = REX_LOAD_U16(r31.u32 + 76);
	// lhz r10,50(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 50);
	// rlwinm r29,r10,31,1,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r18,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r18.u32);
	// stw r16,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r16.u32);
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// bne cr6,0x824a3bc8
	if (!ctx.cr6.eq) goto loc_824A3BC8;
	// lwz r11,22264(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22264);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// lwz r10,22276(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 22276);
	// stw r10,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// stw r14,0(r30)
	REX_STORE_U32(r30.u32 + 0, r14.u32);
	// stw r14,4(r30)
	REX_STORE_U32(r30.u32 + 4, r14.u32);
	// sth r14,16(r30)
	REX_STORE_U16(r30.u32 + 16, r14.u16);
	// b 0x824a3c28
	goto loc_824A3C28;
loc_824A3BC8:
	// addi r11,r6,92
	ctx.r11.s64 = ctx.r6.s64 + 92;
	// mullw r10,r29,r7
	ctx.r10.s64 = int64_t(r29.s32) * int64_t(ctx.r7.s32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r6,r18,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r16,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// stw r3,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// rlwinm r3,r7,1,16,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFE;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r4,r7
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// lwz r27,4(r8)
	r27.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r27,24(r30)
	REX_STORE_U32(r30.u32 + 24, r27.u32);
	// lwz r27,8(r8)
	r27.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r27,28(r30)
	REX_STORE_U32(r30.u32 + 28, r27.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// sth r3,16(r30)
	REX_STORE_U16(r30.u32 + 16, ctx.r3.u16);
loc_824A3C28:
	// sth r14,18(r30)
	REX_STORE_U16(r30.u32 + 18, r14.u16);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, ctx.xer);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// bge cr6,0x824a4adc
	if (!ctx.cr6.lt) goto loc_824A4ADC;
loc_824A3C44:
	// stw r6,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r4,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r4.u32);
	// stw r14,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r14.u32);
	// sth r14,18(r30)
	REX_STORE_U16(r30.u32 + 18, r14.u16);
	// beq cr6,0x824a4a98
	if (ctx.cr6.eq) goto loc_824A4A98;
loc_824A3C5C:
	// lhz r22,18(r30)
	r22.u64 = REX_LOAD_U16(r30.u32 + 18);
	// addi r4,r5,8
	ctx.r4.s64 = ctx.r5.s64 + 8;
	// lwz r7,464(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 464);
	// addi r20,r1,112
	r20.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r22,31,29,31
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 31) & 0x7;
	// ld r19,0(r5)
	r19.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// rlwinm r8,r22,31,28,31
	ctx.r8.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 31) & 0xF;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r3,r11,588
	ctx.r3.s64 = ctx.r11.s64 + 588;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r8,r8,596
	ctx.r8.s64 = ctx.r8.s64 + 596;
	// lwz r6,480(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 480);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,484(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 484);
	// rlwinm r29,r8,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lhz r9,74(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 74);
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lhzx r4,r3,r31
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + r31.u32);
	// rldicl r28,r19,9,55
	r28.u64 = __builtin_rotateleft64(r19.u64, 9) & 0x1FF;
	// lhzx r3,r29,r31
	ctx.r3.u64 = REX_LOAD_U16(r29.u32 + r31.u32);
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// clrlwi r17,r28,31
	r17.u64 = r28.u32 & 0x1;
	// mr r21,r14
	r21.u64 = r14.u64;
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
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x824a4020
	if (!ctx.cr6.eq) goto loc_824A4020;
	// lhz r23,50(r31)
	r23.u64 = REX_LOAD_U16(r31.u32 + 50);
	// addi r11,r20,4
	ctx.r11.s64 = r20.s64 + 4;
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
	// stw r9,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r9.u32);
	// srawi r6,r8,14
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 14;
	// stw r8,4(r20)
	REX_STORE_U32(r20.u32 + 4, ctx.r8.u32);
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
	// addi r20,r11,-12
	r20.s64 = ctx.r11.s64 + -12;
	// or r21,r3,r4
	r21.u64 = ctx.r3.u64 | ctx.r4.u64;
	// bne 0x824a3ffc
	if (!ctx.cr0.eq) goto loc_824A3FFC;
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
	// ble cr6,0x824a3de0
	if (!ctx.cr6.gt) goto loc_824A3DE0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x824a3de8
	goto loc_824A3DE8;
loc_824A3DE0:
	// bge cr6,0x824a3de8
	if (!ctx.cr6.lt) goto loc_824A3DE8;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_824A3DE8:
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x824a3df8
	if (!ctx.cr6.gt) goto loc_824A3DF8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// b 0x824a3e04
	goto loc_824A3E04;
loc_824A3DF8:
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x824a3e04
	if (!ctx.cr6.lt) goto loc_824A3E04;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_824A3E04:
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x824a3e14
	if (!ctx.cr6.gt) goto loc_824A3E14;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// b 0x824a3e20
	goto loc_824A3E20;
loc_824A3E14:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x824a3e20
	if (!ctx.cr6.lt) goto loc_824A3E20;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_824A3E20:
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
	// ble cr6,0x824a3e64
	if (!ctx.cr6.gt) goto loc_824A3E64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x824a3e6c
	goto loc_824A3E6C;
loc_824A3E64:
	// bge cr6,0x824a3e6c
	if (!ctx.cr6.lt) goto loc_824A3E6C;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_824A3E6C:
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x824a3e7c
	if (!ctx.cr6.gt) goto loc_824A3E7C;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// b 0x824a3e88
	goto loc_824A3E88;
loc_824A3E7C:
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x824a3e88
	if (!ctx.cr6.lt) goto loc_824A3E88;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_824A3E88:
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x824a3e98
	if (!ctx.cr6.gt) goto loc_824A3E98;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// b 0x824a3ea4
	goto loc_824A3EA4;
loc_824A3E98:
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x824a3ea4
	if (!ctx.cr6.lt) goto loc_824A3EA4;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_824A3EA4:
	// subf r7,r9,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r9.u64;
	// lwz r28,16(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwimi r10,r9,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r26,1716(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 1716);
	// subf r7,r8,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r8.u64;
	// lwz r25,1712(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 1712);
	// addi r6,r28,-2048
	ctx.r6.s64 = r28.s64 + -2048;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + r29.u64;
	// rlwimi r5,r8,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// add r9,r7,r3
	ctx.r9.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r8,r6,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r3,r28,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r8,r3,r26
	ctx.r8.u64 = r26.u64 - ctx.r3.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// subf r6,r5,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r5.u64;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// or r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 | ctx.r11.u64;
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r3,r5,0,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF8000;
	// rlwimi r4,r10,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r3,r3,0,16,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a4158
	if (ctx.cr6.eq) goto loc_824A4158;
	// li r24,3
	r24.s64 = 3;
	// addi r29,r20,16
	r29.s64 = r20.s64 + 16;
loc_824A3F14:
	// lwz r4,-4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + -4);
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
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r5,r6,0,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r5,r5,0,16,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824a3fec
	if (ctx.cr6.eq) goto loc_824A3FEC;
	// lwz r11,1168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1168);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x824a3f6c
	if (!ctx.cr6.eq) goto loc_824A3F6C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a36b8
	ctx.lr = 0x824A3F64;
	sub_824A36B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824a3fec
	goto loc_824A3FEC;
loc_824A3F6C:
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
	// bge cr6,0x824a3fb0
	if (!ctx.cr6.lt) goto loc_824A3FB0;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// b 0x824a3fc0
	goto loc_824A3FC0;
loc_824A3FB0:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x824a3fc0
	if (!ctx.cr6.gt) goto loc_824A3FC0;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_824A3FC0:
	// cmpwi cr6,r7,-64
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -64, ctx.xer);
	// bge cr6,0x824a3fd4
	if (!ctx.cr6.lt) goto loc_824A3FD4;
	// subf r10,r7,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r7.u64;
	// addi r9,r10,-64
	ctx.r9.s64 = ctx.r10.s64 + -64;
	// b 0x824a3fe4
	goto loc_824A3FE4;
loc_824A3FD4:
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x824a3fe4
	if (!ctx.cr6.gt) goto loc_824A3FE4;
	// subf r10,r7,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r7.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_824A3FE4:
	// rlwimi r11,r9,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_824A3FEC:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// stwu r4,-4(r29)
	ea = -4 + r29.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	r29.u32 = ea;
	// bge 0x824a3f14
	if (!ctx.cr0.lt) goto loc_824A3F14;
	// b 0x824a4158
	goto loc_824A4158;
loc_824A3FFC:
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a3870
	ctx.lr = 0x824A4010;
	sub_824A3870(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,16384
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16384, ctx.xer);
	// beq cr6,0x824a4034
	if (ctx.cr6.eq) goto loc_824A4034;
	// b 0x824a4158
	goto loc_824A4158;
loc_824A4020:
	// lwz r27,0(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r27,16384
	ctx.cr6.compare<int32_t>(r27.s32, 16384, ctx.xer);
	// stw r27,0(r20)
	REX_STORE_U32(r20.u32 + 0, r27.u32);
	// bne cr6,0x824a406c
	if (!ctx.cr6.eq) goto loc_824A406C;
	// li r21,60
	r21.s64 = 60;
loc_824A4034:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,352(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 352);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// bne cr6,0x824a4ae8
	if (!ctx.cr6.eq) goto loc_824A4AE8;
	// lbz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 32);
	// ori r21,r21,3
	r21.u64 = r21.u64 | 3;
	// stw r9,16(r20)
	REX_STORE_U32(r20.u32 + 16, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a42fc
	if (ctx.cr6.eq) goto loc_824A42FC;
	// lwz r10,376(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 376);
	// stwx r14,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r14.u32);
	// b 0x824a42fc
	goto loc_824A42FC;
loc_824A406C:
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r7,r27,1,15,15
	ctx.r7.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0x10000;
	// lwz r10,1712(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1712);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r6,1716(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1716);
	// rlwinm r5,r8,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r3,r5,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r5.u64;
	// subf r10,r7,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r7.u64;
	// subf r9,r27,r3
	ctx.r9.u64 = ctx.r3.u64 - r27.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r7,r8,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r7,r7,0,16,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a4154
	if (ctx.cr6.eq) goto loc_824A4154;
	// lwz r11,1168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1168);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x824a40d4
	if (!ctx.cr6.eq) goto loc_824A40D4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a36b8
	ctx.lr = 0x824A40CC;
	sub_824A36B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x824a4154
	goto loc_824A4154;
loc_824A40D4:
	// lhz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 16);
	// rlwinm r10,r22,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 5) & 0xFFFFFFE0;
	// extsh r11,r27
	ctx.r11.s64 = r27.s16;
	// lhz r7,50(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 50);
	// rotlwi r8,r9,5
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// lhz r6,52(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 52);
	// srawi r9,r27,16
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = r27.s32 >> 16;
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
	// bge cr6,0x824a411c
	if (!ctx.cr6.lt) goto loc_824A411C;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// b 0x824a412c
	goto loc_824A412C;
loc_824A411C:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x824a412c
	if (!ctx.cr6.gt) goto loc_824A412C;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_824A412C:
	// cmpwi cr6,r7,-64
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -64, ctx.xer);
	// bge cr6,0x824a4140
	if (!ctx.cr6.lt) goto loc_824A4140;
	// subf r10,r7,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r7.u64;
	// addi r9,r10,-64
	ctx.r9.s64 = ctx.r10.s64 + -64;
	// b 0x824a4150
	goto loc_824A4150;
loc_824A4140:
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x824a4150
	if (!ctx.cr6.gt) goto loc_824A4150;
	// subf r10,r7,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r7.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_824A4150:
	// rlwimi r11,r9,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
loc_824A4154:
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
loc_824A4158:
	// extsh r9,r27
	ctx.r9.s64 = r27.s16;
	// lbz r8,31(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 31);
	// srawi r11,r27,16
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = r27.s32 >> 16;
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
	// srawi r29,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	r29.s64 = ctx.r5.s32 >> 1;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// beq cr6,0x824a41a8
	if (ctx.cr6.eq) goto loc_824A41A8;
	// rlwinm r10,r29,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0x1;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r29,r10,0,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
loc_824A41A8:
	// lbz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 32);
	// rlwimi r29,r11,16,0,15
	r29.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (r29.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r28,4(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a41fc
	if (ctx.cr6.eq) goto loc_824A41FC;
	// lwz r11,1168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1168);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x824a41d8
	if (!ctx.cr6.eq) goto loc_824A41D8;
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r27.u32);
	// b 0x824a41fc
	goto loc_824A41FC;
loc_824A41D8:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235f798
	ctx.lr = 0x824A41F0;
	sub_8235F798(ctx, base);
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_824A41FC:
	// lwz r11,1168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1168);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x824a4290
	if (!ctx.cr6.eq) goto loc_824A4290;
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r29,1,15,15
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0x10000;
	// stwx r29,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r29.u32);
	// lwz r11,1720(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1720);
	// lwz r8,1724(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1724);
	// lwz r7,16(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r9,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r9.u64;
	// subf r4,r5,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r5.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// subf r10,r29,r4
	ctx.r10.u64 = ctx.r4.u64 - r29.u64;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r8,r9,0,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r8,r8,0,16,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824a42f4
	if (ctx.cr6.eq) goto loc_824A42F4;
	// lwz r11,1168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1168);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x824a4278
	if (!ctx.cr6.eq) goto loc_824A4278;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824a3798
	ctx.lr = 0x824A4274;
	sub_824A3798(ctx, base);
	// b 0x824a42f4
	goto loc_824A42F4;
loc_824A4278:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8235f798
	ctx.lr = 0x824A428C;
	sub_8235F798(ctx, base);
	// b 0x824a42f4
	goto loc_824A42F4;
loc_824A4290:
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r8,r29,1,15,15
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0x10000;
	// lwz r11,1720(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1720);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r7,1724(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1724);
	// rlwinm r6,r9,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r6,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r11,r8,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r10,r29,r4
	ctx.r10.u64 = ctx.r4.u64 - r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r8,r9,0,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r8,r8,0,16,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824a42e8
	if (ctx.cr6.eq) goto loc_824A42E8;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235f798
	ctx.lr = 0x824A42E8;
	sub_8235F798(ctx, base);
loc_824A42E8:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_824A42F4:
	// stw r3,16(r20)
	REX_STORE_U32(r20.u32 + 16, ctx.r3.u32);
	// stw r3,20(r20)
	REX_STORE_U32(r20.u32 + 20, ctx.r3.u32);
loc_824A42FC:
	// rldicl r11,r19,16,48
	ctx.r11.u64 = __builtin_rotateleft64(r19.u64, 16) & 0xFFFF;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// clrlwi r8,r11,26
	ctx.r8.u64 = ctx.r11.u32 & 0x3F;
	// beq cr6,0x824a4568
	if (ctx.cr6.eq) goto loc_824A4568;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a4568
	if (!ctx.cr6.eq) goto loc_824A4568;
	// clrlwi r11,r21,30
	ctx.r11.u64 = r21.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824a4568
	if (!ctx.cr6.eq) goto loc_824A4568;
	// addi r26,r1,112
	r26.s64 = ctx.r1.s64 + 112;
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a437c
	if (!ctx.cr6.eq) goto loc_824A437C;
	// lwz r7,560(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 560);
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
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
	// add r8,r28,r11
	ctx.r8.u64 = r28.u64 + ctx.r11.u64;
	// bl 0x823afc90
	ctx.lr = 0x824A4378;
	sub_823AFC90(ctx, base);
	// b 0x824a4a20
	goto loc_824A4A20;
loc_824A437C:
	// lhz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 0);
	// addi r21,r31,48
	r21.s64 = r31.s64 + 48;
	// lhz r10,2(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 2);
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
	// lbz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 48);
	// srawi r11,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 2;
	// mullw r10,r5,r4
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lwz r5,44(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 44);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r29,r6,30
	r29.u64 = ctx.r6.u32 & 0x3;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r28,r7,30
	r28.u64 = ctx.r7.u32 & 0x3;
	// add r27,r11,r8
	r27.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bne cr6,0x824a441c
	if (!ctx.cr6.eq) goto loc_824A441C;
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
	ctx.lr = 0x824A43F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824a4438
	if (ctx.cr6.eq) goto loc_824A4438;
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
	// bl 0x823af0a0
	ctx.lr = 0x824A4418;
	sub_823AF0A0(ctx, base);
	// b 0x824a4438
	goto loc_824A4438;
loc_824A441C:
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
	ctx.lr = 0x824A4438;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A4438:
	// addi r20,r31,1728
	r20.s64 = r31.s64 + 1728;
	// mr r22,r14
	r22.u64 = r14.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
	// addi r23,r31,556
	r23.s64 = r31.s64 + 556;
loc_824A4448:
	// srawi r29,r22,2
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x3) != 0);
	r29.s64 = r22.s32 >> 2;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x824a4520
	if (ctx.cr6.eq) goto loc_824A4520;
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
	// lbzx r3,r29,r21
	ctx.r3.u64 = REX_LOAD_U8(r29.u32 + r21.u32);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r6,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 2;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// lhzx r4,r24,r31
	ctx.r4.u64 = REX_LOAD_U16(r24.u32 + r31.u32);
	// clrlwi r27,r5,30
	r27.u64 = ctx.r5.u32 & 0x3;
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// lwz r5,44(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwzx r9,r9,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	// mullw r11,r6,r4
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r26,r7,30
	r26.u64 = ctx.r7.u32 & 0x3;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
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
	// bne cr6,0x824a4504
	if (!ctx.cr6.eq) goto loc_824A4504;
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
	ctx.lr = 0x824A44D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824a4520
	if (ctx.cr6.eq) goto loc_824A4520;
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
	// bl 0x823af0a0
	ctx.lr = 0x824A4500;
	sub_823AF0A0(ctx, base);
	// b 0x824a4520
	goto loc_824A4520;
loc_824A4504:
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
	ctx.lr = 0x824A4520;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A4520:
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
	// bl 0x824ac210
	ctx.lr = 0x824A4554;
	sub_824AC210(ctx, base);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpwi cr6,r22,6
	ctx.cr6.compare<int32_t>(r22.s32, 6, ctx.xer);
	// blt cr6,0x824a4448
	if (ctx.cr6.lt) goto loc_824A4448;
	// b 0x824a4a20
	goto loc_824A4A20;
loc_824A4568:
	// rldicl r11,r19,8,56
	ctx.r11.u64 = __builtin_rotateleft64(r19.u64, 8) & 0xFF;
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 388);
	// rlwinm r7,r21,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x20;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// mr r15,r21
	r15.u64 = r21.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r16,r8,24
	r16.u64 = ctx.r8.u32 & 0xFF;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r20,r17
	r20.u64 = r17.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r18,r31,1734
	r18.s64 = r31.s64 + 1734;
	// add r22,r11,r10
	r22.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x824a4670
	if (!ctx.cr6.eq) goto loc_824A4670;
	// cmpwi cr6,r17,1
	ctx.cr6.compare<int32_t>(r17.s32, 1, ctx.xer);
	// bne cr6,0x824a4670
	if (!ctx.cr6.eq) goto loc_824A4670;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lbz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 48);
	// lhz r4,90(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 90);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// lwz r9,464(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 464);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// srawi r11,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// clrlwi r29,r3,30
	r29.u64 = ctx.r3.u32 & 0x3;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r28,r5,30
	r28.u64 = ctx.r5.u32 & 0x3;
	// lwz r5,44(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 44);
	// add r27,r11,r10
	r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bne cr6,0x824a464c
	if (!ctx.cr6.eq) goto loc_824A464C;
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
	ctx.lr = 0x824A4620;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824a4668
	if (ctx.cr6.eq) goto loc_824A4668;
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
	// bl 0x823af0a0
	ctx.lr = 0x824A4648;
	sub_823AF0A0(ctx, base);
	// b 0x824a4668
	goto loc_824A4668;
loc_824A464C:
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
	ctx.lr = 0x824A4668;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A4668:
	// li r20,2
	r20.s64 = 2;
	// addi r18,r31,1728
	r18.s64 = r31.s64 + 1728;
loc_824A4670:
	// mr r28,r14
	r28.u64 = r14.u64;
loc_824A4674:
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
	// rlwinm r5,r15,0,26,26
	ctx.r5.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0x20;
	// clrlwi r8,r16,31
	ctx.r8.u64 = r16.u32 & 0x1;
	// lwzx r10,r9,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// clrlwi r9,r6,29
	ctx.r9.u64 = ctx.r6.u32 & 0x7;
	// lwzx r11,r7,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + r30.u32);
	// subf r20,r24,r20
	r20.u64 = r20.u64 - r24.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r21,r11,r10
	r21.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x824a4a08
	if (!ctx.cr6.eq) goto loc_824A4A08;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x824a48f8
	if (ctx.cr6.eq) goto loc_824A48F8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824a4798
	if (!ctx.cr6.eq) goto loc_824A4798;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r5,r31,168
	ctx.r5.s64 = r31.s64 + 168;
	// lwz r29,40(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 40);
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
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
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
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
	// blt cr6,0x824a4718
	if (ctx.cr6.lt) goto loc_824A4718;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235f5b0
	ctx.lr = 0x824A4710;
	sub_8235F5B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x824a4778
	goto loc_824A4778;
loc_824A4718:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x824a4774
	if (!ctx.cr6.gt) goto loc_824A4774;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824A4724:
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
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r3,r3,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r3,r3
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// lbzx r27,r10,r4
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r3,r3,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r3.u64;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lbzx r26,r27,r5
	r26.u64 = REX_LOAD_U8(r27.u32 + ctx.r5.u32);
	// rotlwi r27,r27,1
	r27.u64 = __builtin_rotateleft32(r27.u32, 1);
	// or r9,r26,r9
	ctx.r9.u64 = r26.u64 | ctx.r9.u64;
	// sthx r8,r27,r29
	REX_STORE_U16(r27.u32 + r29.u32, ctx.r8.u16);
	// bdnz 0x824a4724
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A4724;
loc_824A4774:
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
loc_824A4778:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bne cr6,0x824a4790
	if (!ctx.cr6.eq) goto loc_824A4790;
	// bl 0x823756c8
	ctx.lr = 0x824A478C;
	sub_823756C8(ctx, base);
	// b 0x824a47dc
	goto loc_824A47DC;
loc_824A4790:
	// bl 0x824a5c10
	ctx.lr = 0x824A4794;
	sub_824A5C10(ctx, base);
	// b 0x824a47dc
	goto loc_824A47DC;
loc_824A4798:
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
	ctx.lr = 0x824A47DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A47DC:
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(r20.s32, 2, ctx.xer);
	// bge cr6,0x824a48cc
	if (!ctx.cr6.lt) goto loc_824A48CC;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r11,r28,2
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3) != 0);
	ctx.r11.s64 = r28.s32 >> 2;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
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
	// bne cr6,0x824a48b0
	if (!ctx.cr6.eq) goto loc_824A48B0;
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
	ctx.lr = 0x824A4884;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824a48cc
	if (ctx.cr6.eq) goto loc_824A48CC;
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
	// bl 0x823af0a0
	ctx.lr = 0x824A48AC;
	sub_823AF0A0(ctx, base);
	// b 0x824a48cc
	goto loc_824A48CC;
loc_824A48B0:
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
	ctx.lr = 0x824A48CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A48CC:
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
	// bl 0x824ac2d0
	ctx.lr = 0x824A48F4;
	sub_824AC2D0(ctx, base);
	// b 0x824a4a08
	goto loc_824A4A08;
loc_824A48F8:
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(r20.s32, 2, ctx.xer);
	// bge cr6,0x824a49e4
	if (!ctx.cr6.lt) goto loc_824A49E4;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r24,45
	ctx.r9.s64 = r24.s64 + 45;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r24,2
	ctx.r8.s64 = r24.s64 + 2;
	// addi r7,r28,116
	ctx.r7.s64 = r28.s64 + 116;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r25,r9,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// add r8,r24,r31
	ctx.r8.u64 = r24.u64 + r31.u64;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// lwzx r11,r6,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + r30.u32);
	// lwzx r10,r3,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + r31.u32);
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// lhzx r4,r25,r31
	ctx.r4.u64 = REX_LOAD_U16(r25.u32 + r31.u32);
	// clrlwi r27,r5,30
	r27.u64 = ctx.r5.u32 & 0x3;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r8,48(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 48);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// lwz r5,44(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 44);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r26,r7,30
	r26.u64 = ctx.r7.u32 & 0x3;
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
	// bne cr6,0x824a49c8
	if (!ctx.cr6.eq) goto loc_824A49C8;
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
	ctx.lr = 0x824A499C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824a49e4
	if (ctx.cr6.eq) goto loc_824A49E4;
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
	// bl 0x823af0a0
	ctx.lr = 0x824A49C4;
	sub_823AF0A0(ctx, base);
	// b 0x824a49e4
	goto loc_824A49E4;
loc_824A49C8:
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
	ctx.lr = 0x824A49E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824A49E4:
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
	// bl 0x824ac210
	ctx.lr = 0x824A4A08;
	sub_824AC210(ctx, base);
loc_824A4A08:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// rlwinm r16,r16,31,1,31
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 31) & 0x7FFFFFFF;
	// rldicr r19,r19,8,55
	r19.u64 = __builtin_rotateleft64(r19.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r15,r15,1,0,30
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(r28.s32, 6, ctx.xer);
	// blt cr6,0x824a4674
	if (ctx.cr6.lt) goto loc_824A4674;
loc_824A4A20:
	// lhz r10,18(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 18);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// stw r5,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r5.u32);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// lwz r16,96(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r18,108(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r4,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r4.u32);
	// sth r9,18(r30)
	REX_STORE_U16(r30.u32 + 18, ctx.r9.u16);
	// stw r7,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r7.u32);
	// stw r6,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r6.u32);
	// blt cr6,0x824a3c5c
	if (ctx.cr6.lt) goto loc_824A3C5C;
	// lwz r28,2476(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 2476);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,88(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_824A4A98:
	// lhz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + 16);
	// rlwinm r11,r16,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r9,r18,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// sth r8,16(r30)
	REX_STORE_U16(r30.u32 + 16, ctx.r8.u16);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, ctx.xer);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lhz r11,50(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 50);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// blt cr6,0x824a3c44
	if (ctx.cr6.lt) goto loc_824A3C44;
loc_824A4ADC:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// addi r1,r1,2416
	ctx.r1.s64 = ctx.r1.s64 + 2416;
	// b 0x822d4ea0
	return;
loc_824A4AE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2416
	ctx.r1.s64 = ctx.r1.s64 + 2416;
	// b 0x822d4ea0
	return;
}

