#include "soulcalibur2_funcs.17.h"

DEFINE_REX_FUNC(sub_820E08A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x820E08B0;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lfs f0,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x820e2028
	ctx.lr = 0x820E0908;
	sub_820E2028(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e2128
	ctx.lr = 0x820E0910;
	sub_820E2128(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2004);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820e09a4
	if (!ctx.cr6.lt) goto loc_820E09A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x820e0958
	if (!ctx.cr6.lt) goto loc_820E0958;
	// lfs f0,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// b 0x820e097c
	goto loc_820E097C;
loc_820E0958:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,40(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
loc_820E097C:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
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
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f6,136(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// b 0x820e0a20
	goto loc_820E0A20;
loc_820E09A4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e2290
	ctx.lr = 0x820E09B0;
	sub_820E2290(ctx, base);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f12,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f11,16(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f10,20(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f9,24(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x820e2028
	ctx.lr = 0x820E09F4;
	sub_820E2028(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e1c50
	ctx.lr = 0x820E0A04;
	sub_820E1C50(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e2290
	ctx.lr = 0x820E0A10;
	sub_820E2290(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1c50
	ctx.lr = 0x820E0A20;
	sub_820E1C50(ctx, base);
loc_820E0A20:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lfs f0,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f13,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f12,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f11,48(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lfs f10,52(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,56(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x820e2028
	ctx.lr = 0x820E0A74;
	sub_820E2028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f9,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// stfs f31,60(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f6,40(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f5,48(r31)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f4,52(r31)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f3,56(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_820F9CC0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6260(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 6260);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,20776
	ctx.r5.s64 = ctx.r11.s64 + 20776;
	// bl 0x821af9f8
	ctx.lr = 0x820F9CF0;
	sub_821AF9F8(ctx, base);
	// srawi r11,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 2;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r5,r10,20752
	ctx.r5.s64 = ctx.r10.s64 + 20752;
	// stw r11,7252(r31)
	REX_STORE_U32(r31.u32 + 7252, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6260(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6260);
	// bl 0x821af9d8
	ctx.lr = 0x820F9D14;
	sub_821AF9D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,4196(r31)
	REX_STORE_U32(r31.u32 + 4196, ctx.r3.u32);
	// stw r11,4220(r31)
	REX_STORE_U32(r31.u32 + 4220, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_820FC300) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r9,r11,9316
	ctx.r9.s64 = ctx.r11.s64 + 9316;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r9,-84
	ctx.r11.s64 = ctx.r9.s64 + -84;
	// stw r10,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820FC324:
	// lbz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// sth r8,40(r10)
	REX_STORE_U16(ctx.r10.u32 + 40, ctx.r8.u16);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// sth r8,42(r10)
	REX_STORE_U16(ctx.r10.u32 + 42, ctx.r8.u16);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r8.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r8,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r8.u32);
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r8,60(r10)
	REX_STORE_U32(ctx.r10.u32 + 60, ctx.r8.u32);
	// lbzu r8,28(r11)
	ea = 28 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,64(r10)
	ea = 64 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x820fc324
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FC324;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820FC378:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r9.u32);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// lwzu r9,16(r11)
	ea = 16 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,64(r10)
	ea = 64 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820fc378
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FC378;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stb r11,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FEC88) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820fe770
	sub_820FE770(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820FEED8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r8,10140(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 10140);
	// li r10,21
	ctx.r10.s64 = 21;
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r9,r8,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xFFFFC000;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lfs f0,20144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20144);
	ctx.f0.f64 = double(temp.f32);
loc_820FEEF8:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lfs f13,20080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20080);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820fef14
	if (!ctx.cr6.gt) goto loc_820FEF14;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820FEF14:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x820feef8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FEEF8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f1,6244(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 6244, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821003C0) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// cmplwi cr6,r3,35
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 35, ctx.xer);
	// addi r10,r11,432
	ctx.r10.s64 = ctx.r11.s64 + 432;
	// bgt cr6,0x821006cc
	if (ctx.cr6.gt) goto loc_821006CC;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// addi r12,r12,26368
	ctx.r12.s64 = ctx.r12.s64 + 26368;
	// lbzx r0,r12,r3
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r3.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32240
	ctx.r12.s64 = -2112880640;
	// nop 
	// addi r12,r12,1032
	ctx.r12.s64 = ctx.r12.s64 + 1032;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_82100408;
	case 1:
		goto loc_8210042C;
	case 2:
		goto loc_82100450;
	case 3:
		goto loc_82100450;
	case 4:
		goto loc_8210045C;
	case 5:
		goto loc_82100480;
	case 6:
		goto loc_821004A4;
	case 7:
		goto loc_821004C8;
	case 8:
		goto loc_821004D4;
	case 9:
		goto loc_821004E0;
	case 10:
		goto loc_821004EC;
	case 11:
		goto loc_821004F8;
	case 12:
		goto loc_8210051C;
	case 13:
		goto loc_82100540;
	case 14:
		goto loc_82100564;
	case 15:
		goto loc_82100588;
	case 16:
		goto loc_821005AC;
	case 17:
		goto loc_821005D0;
	case 18:
		goto loc_821005F4;
	case 19:
		goto loc_82100600;
	case 20:
		goto loc_8210060C;
	case 21:
		goto loc_82100618;
	case 22:
		goto loc_82100624;
	case 23:
		goto loc_82100630;
	case 24:
		goto loc_8210063C;
	case 25:
		goto loc_82100648;
	case 26:
		goto loc_82100654;
	case 27:
		goto loc_82100660;
	case 28:
		goto loc_8210066C;
	case 29:
		goto loc_82100678;
	case 30:
		goto loc_82100684;
	case 31:
		goto loc_8210069C;
	case 32:
		goto loc_821006A8;
	case 33:
		goto loc_821006B4;
	case 34:
		goto loc_821006C0;
	case 35:
		goto loc_82100690;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82100408:
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82100420
	if (ctx.cr6.eq) goto loc_82100420;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,28872
	r31.s64 = ctx.r11.s64 + 28872;
	// b 0x821006d4
	goto loc_821006D4;
loc_82100420:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,25416
	r31.s64 = ctx.r11.s64 + 25416;
	// b 0x821006d4
	goto loc_821006D4;
loc_8210042C:
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82100444
	if (ctx.cr6.eq) goto loc_82100444;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,29064
	r31.s64 = ctx.r11.s64 + 29064;
	// b 0x821006d4
	goto loc_821006D4;
loc_82100444:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,25608
	r31.s64 = ctx.r11.s64 + 25608;
	// b 0x821006d4
	goto loc_821006D4;
loc_82100450:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,11024
	r31.s64 = ctx.r11.s64 + 11024;
	// b 0x821006d4
	goto loc_821006D4;
loc_8210045C:
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82100474
	if (ctx.cr6.eq) goto loc_82100474;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,29256
	r31.s64 = ctx.r11.s64 + 29256;
	// b 0x821006d4
	goto loc_821006D4;
loc_82100474:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,25800
	r31.s64 = ctx.r11.s64 + 25800;
	// b 0x821006d4
	goto loc_821006D4;
loc_82100480:
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82100498
	if (ctx.cr6.eq) goto loc_82100498;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,29448
	r31.s64 = ctx.r11.s64 + 29448;
	// b 0x821006d4
	goto loc_821006D4;
loc_82100498:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,25992
	r31.s64 = ctx.r11.s64 + 25992;
	// b 0x821006d4
	goto loc_821006D4;
loc_821004A4:
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821004bc
	if (ctx.cr6.eq) goto loc_821004BC;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r31,r11,-23568
	r31.s64 = ctx.r11.s64 + -23568;
	// b 0x821006d4
	goto loc_821006D4;
loc_821004BC:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r31,r11,-23760
	r31.s64 = ctx.r11.s64 + -23760;
	// b 0x821006d4
	goto loc_821006D4;
loc_821004C8:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,26184
	r31.s64 = ctx.r11.s64 + 26184;
	// b 0x821006d4
	goto loc_821006D4;
loc_821004D4:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,26376
	r31.s64 = ctx.r11.s64 + 26376;
	// b 0x821006d4
	goto loc_821006D4;
loc_821004E0:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,26568
	r31.s64 = ctx.r11.s64 + 26568;
	// b 0x821006d4
	goto loc_821006D4;
loc_821004EC:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,29640
	r31.s64 = ctx.r11.s64 + 29640;
	// b 0x821006d4
	goto loc_821006D4;
loc_821004F8:
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82100510
	if (ctx.cr6.eq) goto loc_82100510;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,29832
	r31.s64 = ctx.r11.s64 + 29832;
	// b 0x821006d4
	goto loc_821006D4;
loc_82100510:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,26760
	r31.s64 = ctx.r11.s64 + 26760;
	// b 0x821006d4
	goto loc_821006D4;
loc_8210051C:
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82100534
	if (ctx.cr6.eq) goto loc_82100534;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,30024
	r31.s64 = ctx.r11.s64 + 30024;
	// b 0x821006d4
	goto loc_821006D4;
loc_82100534:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,26952
	r31.s64 = ctx.r11.s64 + 26952;
	// b 0x821006d4
	goto loc_821006D4;
loc_82100540:
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82100558
	if (ctx.cr6.eq) goto loc_82100558;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,30216
	r31.s64 = ctx.r11.s64 + 30216;
	// b 0x821006d4
	goto loc_821006D4;
loc_82100558:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,27144
	r31.s64 = ctx.r11.s64 + 27144;
	// b 0x821006d4
	goto loc_821006D4;
loc_82100564:
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8210057c
	if (ctx.cr6.eq) goto loc_8210057C;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,30408
	r31.s64 = ctx.r11.s64 + 30408;
	// b 0x821006d4
	goto loc_821006D4;
loc_8210057C:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,27336
	r31.s64 = ctx.r11.s64 + 27336;
	// b 0x821006d4
	goto loc_821006D4;
loc_82100588:
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821005a0
	if (ctx.cr6.eq) goto loc_821005A0;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,30600
	r31.s64 = ctx.r11.s64 + 30600;
	// b 0x821006d4
	goto loc_821006D4;
loc_821005A0:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,27528
	r31.s64 = ctx.r11.s64 + 27528;
	// b 0x821006d4
	goto loc_821006D4;
loc_821005AC:
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821005c4
	if (ctx.cr6.eq) goto loc_821005C4;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,30792
	r31.s64 = ctx.r11.s64 + 30792;
	// b 0x821006d4
	goto loc_821006D4;
loc_821005C4:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,27720
	r31.s64 = ctx.r11.s64 + 27720;
	// b 0x821006d4
	goto loc_821006D4;
loc_821005D0:
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821005e8
	if (ctx.cr6.eq) goto loc_821005E8;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,30984
	r31.s64 = ctx.r11.s64 + 30984;
	// b 0x821006d4
	goto loc_821006D4;
loc_821005E8:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,27912
	r31.s64 = ctx.r11.s64 + 27912;
	// b 0x821006d4
	goto loc_821006D4;
loc_821005F4:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,28104
	r31.s64 = ctx.r11.s64 + 28104;
	// b 0x821006d4
	goto loc_821006D4;
loc_82100600:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,28296
	r31.s64 = ctx.r11.s64 + 28296;
	// b 0x821006d4
	goto loc_821006D4;
loc_8210060C:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,28680
	r31.s64 = ctx.r11.s64 + 28680;
	// b 0x821006d4
	goto loc_821006D4;
loc_82100618:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,28488
	r31.s64 = ctx.r11.s64 + 28488;
	// b 0x821006d4
	goto loc_821006D4;
loc_82100624:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r31,r11,25136
	r31.s64 = ctx.r11.s64 + 25136;
	// b 0x821006d4
	goto loc_821006D4;
loc_82100630:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r31,r11,25328
	r31.s64 = ctx.r11.s64 + 25328;
	// b 0x821006d4
	goto loc_821006D4;
loc_8210063C:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r31,r11,25520
	r31.s64 = ctx.r11.s64 + 25520;
	// b 0x821006d4
	goto loc_821006D4;
loc_82100648:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r31,r11,25712
	r31.s64 = ctx.r11.s64 + 25712;
	// b 0x821006d4
	goto loc_821006D4;
loc_82100654:
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r31,r11,-7288
	r31.s64 = ctx.r11.s64 + -7288;
	// b 0x821006d4
	goto loc_821006D4;
loc_82100660:
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r31,r11,-6864
	r31.s64 = ctx.r11.s64 + -6864;
	// b 0x821006d4
	goto loc_821006D4;
loc_8210066C:
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r31,r11,-8072
	r31.s64 = ctx.r11.s64 + -8072;
	// b 0x821006d4
	goto loc_821006D4;
loc_82100678:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,31296
	r31.s64 = ctx.r11.s64 + 31296;
	// b 0x821006d4
	goto loc_821006D4;
loc_82100684:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,31784
	r31.s64 = ctx.r11.s64 + 31784;
	// b 0x821006d4
	goto loc_821006D4;
loc_82100690:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,32104
	r31.s64 = ctx.r11.s64 + 32104;
	// b 0x821006d4
	goto loc_821006D4;
loc_8210069C:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r31,r11,-32320
	r31.s64 = ctx.r11.s64 + -32320;
	// b 0x821006d4
	goto loc_821006D4;
loc_821006A8:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r31,r11,-32128
	r31.s64 = ctx.r11.s64 + -32128;
	// b 0x821006d4
	goto loc_821006D4;
loc_821006B4:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r31,r11,-31936
	r31.s64 = ctx.r11.s64 + -31936;
	// b 0x821006d4
	goto loc_821006D4;
loc_821006C0:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r31,r11,-31744
	r31.s64 = ctx.r11.s64 + -31744;
	// b 0x821006d4
	goto loc_821006D4;
loc_821006CC:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,13792
	r31.s64 = ctx.r11.s64 + 13792;
loc_821006D4:
	// lwz r3,220(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821006e4
	if (ctx.cr6.eq) goto loc_821006E4;
	// bl 0x82108bc8
	ctx.lr = 0x821006E4;
	sub_82108BC8(ctx, base);
loc_821006E4:
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

DEFINE_REX_FUNC(sub_82112610) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r5,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r5.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r7,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r7.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r8,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r4,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r6.u32);
	// addi r8,r7,29656
	ctx.r8.s64 = ctx.r7.s64 + 29656;
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16036(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16036);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// lfs f12,16032(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16032);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stfs f13,104(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stfs f12,112(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82114298) {
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
	ctx.lr = 0x821142A0;
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r11,13128
	r28.s64 = ctx.r11.s64 + 13128;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lfs f0,1840(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 / ctx.f0.f64));
	// lfs f13,30204(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 30204);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f30,30200(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 30200);
	f30.f64 = double(temp.f32);
	// lis r27,-32170
	r27.s64 = -2108293120;
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82114348
	if (!ctx.cr6.eq) goto loc_82114348;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lwz r6,160(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// addi r7,r3,188
	ctx.r7.s64 = ctx.r3.s64 + 188;
	// addi r4,r11,31432
	ctx.r4.s64 = ctx.r11.s64 + 31432;
	// li r29,0
	r29.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// lwz r11,156(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 156);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,152(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 152);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x821f7970
	ctx.lr = 0x82114340;
	sub_821F7970(ctx, base);
	// stb r29,23956(r27)
	REX_STORE_U8(r27.u32 + 23956, r29.u8);
	// b 0x82114458
	goto loc_82114458;
loc_82114348:
	// fmuls f13,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82114424
	if (!ctx.cr6.eq) goto loc_82114424;
	// lwz r10,188(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82114378
	if (!ctx.cr6.eq) goto loc_82114378;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// b 0x82114548
	goto loc_82114548;
loc_82114378:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 160);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r29,r11,15387
	r29.s64 = ctx.r11.s64 + 15387;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x821af9d8
	ctx.lr = 0x82114394;
	sub_821AF9D8(ctx, base);
	// stw r3,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// bl 0x820e4bb0
	ctx.lr = 0x8211439C;
	sub_820E4BB0(ctx, base);
	// stw r3,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 176);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,30188
	ctx.r6.s64 = ctx.r11.s64 + 30188;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821143C4;
	sub_821F7D50(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8211440c
	if (ctx.cr0.eq) goto loc_8211440C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 160);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821af9d8
	ctx.lr = 0x821143E0;
	sub_821AF9D8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r3.u32);
	// li r29,0
	r29.s64 = 0;
	// stw r3,84(r30)
	REX_STORE_U32(r30.u32 + 84, ctx.r3.u32);
	// addi r10,r10,29676
	ctx.r10.s64 = ctx.r10.s64 + 29676;
	// stw r29,92(r30)
	REX_STORE_U32(r30.u32 + 92, r29.u32);
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stfs f0,88(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 88, temp.u32);
	// stw r29,96(r30)
	REX_STORE_U32(r30.u32 + 96, r29.u32);
loc_8211440C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,70
	ctx.r3.s64 = 70;
	// bl 0x8212eb40
	ctx.lr = 0x82114420;
	sub_8212EB40(ctx, base);
	// b 0x82114458
	goto loc_82114458;
loc_82114424:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,30184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 30184);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82114458
	if (!ctx.cr6.eq) goto loc_82114458;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r9,182(r31)
	REX_STORE_U16(r31.u32 + 182, ctx.r9.u16);
	// stb r11,23957(r10)
	REX_STORE_U8(ctx.r10.u32 + 23957, ctx.r11.u8);
loc_82114458:
	// lfs f0,1840(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 / ctx.f0.f64));
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lfs f12,30180(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 30180);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82114530
	if (!ctx.cr6.gt) goto loc_82114530;
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82114530
	if (ctx.cr6.gt) goto loc_82114530;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r10,172(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f4,112(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// lfs f13,27892(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 27892);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmuls f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,2344(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2344);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,28320(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 28320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,28724(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 28724);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16896(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16896);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f3,f0,f12,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f4.f64)));
	// lfs f8,30176(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 30176);
	ctx.f8.f64 = double(temp.f32);
	// fnmsubs f0,f0,f12,f4
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f4.f64)));
	// lfs f7,30172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 30172);
	ctx.f7.f64 = double(temp.f32);
	// fdivs f12,f3,f6
	ctx.f12.f64 = double(float(ctx.f3.f64 / ctx.f6.f64));
	// fdivs f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f5.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fsubs f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f13,216(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 216, temp.u32);
	// fsubs f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f13,224(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 224, temp.u32);
	// fadds f13,f12,f8
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f13,220(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 220, temp.u32);
	// fadds f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// stfs f0,228(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 228, temp.u32);
loc_82114530:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82114548
	if (!ctx.cr6.eq) goto loc_82114548;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r10.u32);
	// stb r11,23956(r27)
	REX_STORE_U8(r27.u32 + 23956, ctx.r11.u8);
loc_82114548:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8211EEF0) {
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
	ctx.lr = 0x8211EEF8;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f38
	ctx.lr = 0x8211EF00;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r11,29428(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 29428);
	// addi r3,r11,184
	ctx.r3.s64 = ctx.r11.s64 + 184;
	// bl 0x8211c0f0
	ctx.lr = 0x8211EF14;
	sub_8211C0F0(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r11,-7072
	r30.s64 = ctx.r11.s64 + -7072;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f30,2384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2384);
	f30.f64 = double(temp.f32);
	// addi r31,r30,10536
	r31.s64 = r30.s64 + 10536;
	// lis r29,-32173
	r29.s64 = -2108489728;
	// lfs f29,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f29.f64 = double(temp.f32);
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lfs f28,2024(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2024);
	f28.f64 = double(temp.f32);
loc_8211EF44:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bge cr6,0x8211ef8c
	if (!ctx.cr6.lt) goto loc_8211EF8C;
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 - ctx.f0.f64));
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * f30.f64));
	// bl 0x82204ae0
	ctx.lr = 0x8211EF64;
	sub_82204AE0(ctx, base);
	// lbz r11,-10536(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + -10536);
	// fsubs f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lwz r3,504(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 504);
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8211ef84
	if (!ctx.cr0.eq) goto loc_8211EF84;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// b 0x8211ef88
	goto loc_8211EF88;
loc_8211EF84:
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
loc_8211EF88:
	// bl 0x821fa8e8
	ctx.lr = 0x8211EF8C;
	sub_821FA8E8(ctx, base);
loc_8211EF8C:
	// addis r11,r30,2
	ctx.r11.s64 = r30.s64 + 131072;
	// addis r31,r31,1
	r31.s64 = r31.s64 + 65536;
	// addi r11,r11,17928
	ctx.r11.s64 = ctx.r11.s64 + 17928;
	// addi r31,r31,3696
	r31.s64 = r31.s64 + 3696;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8211ef44
	if (ctx.cr6.lt) goto loc_8211EF44;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f84
	ctx.lr = 0x8211EFB0;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82121118) {
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
	// bl 0x822d4e54
	ctx.lr = 0x82121120;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x822d4f20
	ctx.lr = 0x82121128;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32165
	r29.s64 = -2107965440;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r10,r11,-8304
	ctx.r10.s64 = ctx.r11.s64 + -8304;
	// lwz r11,-32480(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -32480);
	// addi r31,r11,80
	r31.s64 = ctx.r11.s64 + 80;
	// lwz r3,496(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 496);
	// addi r24,r31,12
	r24.s64 = r31.s64 + 12;
	// lbz r10,256(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 256);
	// lfs f28,192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 192);
	f28.f64 = double(temp.f32);
	// lbz r9,258(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 258);
	// lfs f23,176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 176);
	f23.f64 = double(temp.f32);
	// extsb r16,r10
	r16.s64 = ctx.r10.s8;
	// extsb r21,r9
	r21.s64 = ctx.r9.s8;
	// addi r15,r16,1
	r15.s64 = r16.s64 + 1;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mullw r11,r15,r21
	ctx.r11.s64 = int64_t(r15.s32) * int64_t(r21.s32);
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r30,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x82190558
	ctx.lr = 0x82121178;
	sub_82190558(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82121474
	if (ctx.cr0.eq) goto loc_82121474;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// sth r30,8(r31)
	REX_STORE_U16(r31.u32 + 8, r30.u16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,30520
	ctx.r11.s64 = ctx.r11.s64 + 30520;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r26,0
	r26.s64 = 0;
	// li r18,1
	r18.s64 = 1;
	// li r7,38
	ctx.r7.s64 = 38;
	// stw r26,16(r31)
	REX_STORE_U32(r31.u32 + 16, r26.u32);
	// li r6,11
	ctx.r6.s64 = 11;
	// std r18,0(r31)
	REX_STORE_U64(r31.u32 + 0, r18.u64);
	// stb r18,10(r31)
	REX_STORE_U8(r31.u32 + 10, r18.u8);
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stb r18,11(r31)
	REX_STORE_U8(r31.u32 + 11, r18.u8);
	// lfs f13,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// stb r7,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r7.u8);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// mr r25,r26
	r25.u64 = r26.u64;
	// stb r18,25(r31)
	REX_STORE_U8(r31.u32 + 25, r18.u8);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// stb r26,26(r31)
	REX_STORE_U8(r31.u32 + 26, r26.u8);
	// stb r26,27(r31)
	REX_STORE_U8(r31.u32 + 27, r26.u8);
	// stb r26,29(r31)
	REX_STORE_U8(r31.u32 + 29, r26.u8);
	// stb r26,28(r31)
	REX_STORE_U8(r31.u32 + 28, r26.u8);
	// stb r18,30(r31)
	REX_STORE_U8(r31.u32 + 30, r18.u8);
	// stb r26,31(r31)
	REX_STORE_U8(r31.u32 + 31, r26.u8);
	// sth r6,156(r31)
	REX_STORE_U16(r31.u32 + 156, ctx.r6.u16);
	// ble cr6,0x8212146c
	if (!ctx.cr6.gt) goto loc_8212146C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// lfs f30,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	f30.f64 = double(temp.f32);
	// lfs f24,2352(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2352);
	f24.f64 = double(temp.f32);
	// rlwinm r20,r16,1,0,30
	r20.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f29,17188(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 17188);
	f29.f64 = double(temp.f32);
	// addi r17,r11,320
	r17.s64 = ctx.r11.s64 + 320;
	// lfs f25,1980(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1980);
	f25.f64 = double(temp.f32);
	// addi r19,r10,9680
	r19.s64 = ctx.r10.s64 + 9680;
loc_82121234:
	// mullw r11,r15,r25
	ctx.r11.s64 = int64_t(r15.s32) * int64_t(r25.s32);
	// rlwinm r23,r11,1,0,30
	r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r26
	r28.u64 = r26.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x82121414
	if (!ctx.cr6.gt) goto loc_82121414;
	// extsw r10,r16
	ctx.r10.s64 = r16.s32;
	// extsw r11,r21
	ctx.r11.s64 = r21.s32;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r27,r31,48
	r27.s64 = r31.s64 + 48;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// rlwinm r22,r23,6,0,25
	r22.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 6) & 0xFFFFFFC0;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f27,f29,f0
	f27.f64 = double(float(f29.f64 / ctx.f0.f64));
	// fdivs f26,f25,f13
	f26.f64 = double(float(f25.f64 / ctx.f13.f64));
loc_82121280:
	// lwz r11,4(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 4);
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// add r30,r22,r10
	r30.u64 = r22.u64 + ctx.r10.u64;
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// lwzx r10,r11,r19
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r19.u32);
	// lbzx r11,r11,r19
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r19.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r8,r10,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r9,r10,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 | ctx.r11.u64;
	// bl 0x82202838
	ctx.lr = 0x821212B8;
	sub_82202838(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f24,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r30.u32 + 44, temp.u32);
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// subfc r10,r11,r28
	ctx.xer.ca = r28.u32 >= ctx.r11.u32;
	ctx.r10.u64 = r28.u64 - ctx.r11.u64;
	// eqv r11,r11,r28
	ctx.r11.u64 = ~(ctx.r11.u64 ^ r28.u64);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r10.s64 = r28.s32 >> 1;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lfd f0,96(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// fmuls f22,f0,f26
	f22.f64 = double(float(ctx.f0.f64 * f26.f64));
	// stw r11,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r11.u32);
	// fmr f1,f22
	ctx.f1.f64 = f22.f64;
	// bl 0x820e0058
	ctx.lr = 0x82121324;
	sub_820E0058(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fmr f1,f22
	ctx.f1.f64 = f22.f64;
	// bl 0x820e0000
	ctx.lr = 0x82121330;
	sub_820E0000(ctx, base);
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r11,r11,r28
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821213c0
	if (!ctx.cr0.eq) goto loc_821213C0;
	// extsw r11,r25
	ctx.r11.s64 = r25.s32;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f0,f0,f27,f29
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f27.f64, -f29.f64)));
	// fmadds f13,f0,f31,f30
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, f30.f64)));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// fmadds f0,f0,f1,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, f30.f64)));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// bne cr6,0x821213a4
	if (!ctx.cr6.eq) goto loc_821213A4;
	// fadds f0,f23,f28
	ctx.f0.f64 = double(float(f23.f64 + f28.f64));
	// lfs f13,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f0,f31,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f13.f64)));
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// fmadds f0,f0,f1,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, ctx.f12.f64)));
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 24, temp.u32);
	// lfs f0,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// b 0x82121404
	goto loc_82121404;
loc_821213A4:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f31,f28,f0
	ctx.f0.f64 = double(float(std::fma(f31.f64, f28.f64, ctx.f0.f64)));
	// fmadds f13,f1,f28,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, f28.f64, ctx.f13.f64)));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f13,24(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 24, temp.u32);
	// b 0x82121404
	goto loc_82121404;
loc_821213C0:
	// addi r11,r25,1
	ctx.r11.s64 = r25.s64 + 1;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f31,f28,f0
	ctx.f0.f64 = double(float(std::fma(f31.f64, f28.f64, ctx.f0.f64)));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f13,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f1,f28,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, f28.f64, ctx.f13.f64)));
	// stfs f13,24(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 24, temp.u32);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f0,f0,f27,f29
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f27.f64, -f29.f64)));
	// fmadds f13,f0,f31,f30
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, f30.f64)));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// fmadds f0,f0,f1,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, f30.f64)));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
loc_82121404:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r22,r22,64
	r22.s64 = r22.s64 + 64;
	// cmpw cr6,r28,r20
	ctx.cr6.compare<int32_t>(r28.s32, r20.s32, ctx.xer);
	// blt cr6,0x82121280
	if (ctx.cr6.lt) goto loc_82121280;
loc_82121414:
	// add r10,r20,r23
	ctx.r10.u64 = r20.u64 + r23.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r29,r23,6,0,25
	r29.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r28,r10,6,0,25
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r29,r11
	ctx.r4.u64 = r29.u64 + ctx.r11.u64;
	// add r30,r28,r11
	r30.u64 = r28.u64 + ctx.r11.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82121438;
	sub_822D4FA0(ctx, base);
	// stw r26,12(r30)
	REX_STORE_U32(r30.u32 + 12, r26.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// add r10,r29,r11
	ctx.r10.u64 = r29.u64 + ctx.r11.u64;
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// addi r4,r10,64
	ctx.r4.s64 = ctx.r10.s64 + 64;
	// addi r30,r11,64
	r30.s64 = ctx.r11.s64 + 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8212145C;
	sub_822D4FA0(ctx, base);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// stw r26,12(r30)
	REX_STORE_U32(r30.u32 + 12, r26.u32);
	// cmpw cr6,r25,r21
	ctx.cr6.compare<int32_t>(r25.s32, r21.s32, ctx.xer);
	// blt cr6,0x82121234
	if (ctx.cr6.lt) goto loc_82121234;
loc_8212146C:
	// sth r18,136(r31)
	REX_STORE_U16(r31.u32 + 136, r18.u16);
	// b 0x82121488
	goto loc_82121488;
loc_82121474:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,136(r31)
	REX_STORE_U16(r31.u32 + 136, ctx.r11.u16);
	// lwz r11,-32480(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
loc_82121488:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x822d4f6c
	ctx.lr = 0x82121494;
	// b 0x822d4ea4
	return;
}

DEFINE_REX_FUNC(sub_8212F8C8) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// li r10,252
	ctx.r10.s64 = 252;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r8,4(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwinm r6,r8,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// or r10,r6,r9
	ctx.r10.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r9,r7,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lhz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// sth r8,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r8.u16);
	// lbz r9,-15(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + -15);
	// lbz r8,-16(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + -16);
	// stb r9,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// stb r8,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 16);
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwinm r6,r8,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r9,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
loc_8212F954:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwinm r6,r9,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r7,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r8,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,16(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 16);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r9,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// rlwinm r8,r8,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r9,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 20);
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r8,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r9,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r8,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r8,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 24);
	// lwz r8,24(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r8,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r9,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,28(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r8,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// lbz r7,28(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 28);
	// rlwinm r9,r9,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r9,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 32);
	// lwz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r8,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r9,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,36(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 36);
	// lwz r8,36(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r8,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,40(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 40);
	// lwz r8,40(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r8,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r9,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r9.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,44(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 44);
	// lwz r8,44(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r8,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r9,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r9.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,60(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 60);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// lwz r8,60(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r8,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r9,60(r10)
	REX_STORE_U32(ctx.r10.u32 + 60, ctx.r9.u32);
	// bdnz 0x8212f954
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8212F954;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821408F8) {
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
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r30,r11,-8304
	r30.s64 = ctx.r11.s64 + -8304;
	// addi r5,r10,-23536
	ctx.r5.s64 = ctx.r10.s64 + -23536;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,324(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 324);
	// bl 0x821af9d8
	ctx.lr = 0x8214092C;
	sub_821AF9D8(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r11,r11,20556
	ctx.r11.s64 = ctx.r11.s64 + 20556;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,14832
	ctx.r5.s64 = ctx.r10.s64 + 14832;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8212f8c8
	ctx.lr = 0x82140948;
	sub_8212F8C8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,324(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 324);
	// addi r5,r11,-23544
	ctx.r5.s64 = ctx.r11.s64 + -23544;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821af9d8
	ctx.lr = 0x82140960;
	sub_821AF9D8(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,22000
	r31.s64 = ctx.r11.s64 + 22000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82136dc0
	ctx.lr = 0x82140974;
	sub_82136DC0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,324(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 324);
	// addi r5,r11,-23552
	ctx.r5.s64 = ctx.r11.s64 + -23552;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x821af9d8
	ctx.lr = 0x8214098C;
	sub_821AF9D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,324
	ctx.r3.s64 = r31.s64 + 324;
	// bl 0x82136dc0
	ctx.lr = 0x82140998;
	sub_82136DC0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,324(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 324);
	// addi r5,r11,-23560
	ctx.r5.s64 = ctx.r11.s64 + -23560;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x821af9d8
	ctx.lr = 0x821409B0;
	sub_821AF9D8(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,21824
	r31.s64 = ctx.r11.s64 + 21824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821367b0
	ctx.lr = 0x821409C4;
	sub_821367B0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,324(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 324);
	// addi r5,r11,-23572
	ctx.r5.s64 = ctx.r11.s64 + -23572;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x821af9d8
	ctx.lr = 0x821409DC;
	sub_821AF9D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821367b0
	ctx.lr = 0x821409E8;
	sub_821367B0(ctx, base);
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r4,r11,16880
	ctx.r4.s64 = ctx.r11.s64 + 16880;
	// addi r3,r10,22648
	ctx.r3.s64 = ctx.r10.s64 + 22648;
	// bl 0x8212fb98
	ctx.lr = 0x821409FC;
	sub_8212FB98(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r11,r11,21264
	ctx.r11.s64 = ctx.r11.s64 + 21264;
	// stw r11,23912(r10)
	REX_STORE_U32(ctx.r10.u32 + 23912, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82149AC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82149AD0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-23096
	ctx.r10.s64 = ctx.r10.s64 + -23096;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lbz r10,62(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 62);
	// lbz r11,60(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 60);
	// rotlwi r11,r11,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
	// sth r10,20(r31)
	REX_STORE_U16(r31.u32 + 20, ctx.r10.u16);
	// add r30,r11,r5
	r30.u64 = ctx.r11.u64 + ctx.r5.u64;
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
	// bl 0x820e1850
	ctx.lr = 0x82149B48;
	sub_820E1850(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// lfs f3,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1850
	ctx.lr = 0x82149B5C;
	sub_820E1850(ctx, base);
	// lfs f0,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// lbz r11,59(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 59);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// lbz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 60);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8214ADB8) {
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
	ctx.lr = 0x8214ADC0;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lha r11,20(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 20));
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e0af8
	ctx.lr = 0x8214ADEC;
	sub_820E0AF8(ctx, base);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f30,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
	// lfs f0,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f30,60(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// lha r11,22(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 22));
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x820e0368
	ctx.lr = 0x8214AE28;
	sub_820E0368(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8214b018
	if (!ctx.cr6.eq) goto loc_8214B018;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// addi r9,r9,-7072
	ctx.r9.s64 = ctx.r9.s64 + -7072;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8214aee4
	if (ctx.cr6.eq) goto loc_8214AEE4;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8214aee4
	if (ctx.cr6.eq) goto loc_8214AEE4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8214aee4
	if (ctx.cr6.eq) goto loc_8214AEE4;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// beq cr6,0x8214aee4
	if (ctx.cr6.eq) goto loc_8214AEE4;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// beq cr6,0x8214aee4
	if (ctx.cr6.eq) goto loc_8214AEE4;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x8214aee4
	if (ctx.cr6.eq) goto loc_8214AEE4;
	// lhz r11,30(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8214aec8
	if (!ctx.cr6.eq) goto loc_8214AEC8;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// lfs f13,1712(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1712);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1716);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1720);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x8214af50
	goto loc_8214AF50;
loc_8214AEC8:
	// lfs f0,192(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,200(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 200);
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
	// b 0x8214af54
	goto loc_8214AF54;
loc_8214AEE4:
	// lwz r11,10148(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 10148);
	// addi r10,r29,-128
	ctx.r10.s64 = r29.s64 + -128;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8214aefc
	if (ctx.cr6.eq) goto loc_8214AEFC;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r9,r11,3696
	ctx.r9.s64 = ctx.r11.s64 + 3696;
loc_8214AEFC:
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,10148(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 10148);
	// lfs f0,176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,184(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f0,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x820e1ba8
	ctx.lr = 0x8214AF4C;
	sub_820E1BA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8214AF50:
	// bl 0x820e2290
	ctx.lr = 0x8214AF54;
	sub_820E2290(ctx, base);
loc_8214AF54:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x820e1c28
	ctx.lr = 0x8214AF78;
	sub_820E1C28(ctx, base);
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x8214af8c
	if (!ctx.cr6.gt) goto loc_8214AF8C;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
loc_8214AF8C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1c50
	ctx.lr = 0x8214AF9C;
	sub_820E1C50(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e2128
	ctx.lr = 0x8214AFA4;
	sub_820E2128(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2004);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8214afd0
	if (!ctx.cr6.lt) goto loc_8214AFD0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x8214aff0
	goto loc_8214AFF0;
loc_8214AFD0:
	// fnmsubs f0,f31,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(-std::fma(f31.f64, f31.f64, -f30.f64)));
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x820e0130
	ctx.lr = 0x8214AFE4;
	sub_820E0130(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x820e13b8
	ctx.lr = 0x8214AFF0;
	sub_820E13B8(ctx, base);
loc_8214AFF0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820e1528
	ctx.lr = 0x8214AFFC;
	sub_820E1528(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1310
	ctx.lr = 0x8214B00C;
	sub_820E1310(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e0af8
	ctx.lr = 0x8214B018;
	sub_820E0AF8(ctx, base);
loc_8214B018:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8215C138) {
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
	// lbz r11,22(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 22);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215c1a0
	if (ctx.cr6.eq) goto loc_8215C1A0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8215c1a0
	if (ctx.cr6.eq) goto loc_8215C1A0;
	// addi r5,r4,48
	ctx.r5.s64 = ctx.r4.s64 + 48;
	// lfs f2,80(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// lfs f1,80(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8215b368
	ctx.lr = 0x8215C180;
	sub_8215B368(ctx, base);
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8215c198
	if (!ctx.cr6.lt) goto loc_8215C198;
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// b 0x8215c1a8
	goto loc_8215C1A8;
loc_8215C198:
	// fmuls f1,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// b 0x8215c1a8
	goto loc_8215C1A8;
loc_8215C1A0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
loc_8215C1A8:
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

DEFINE_REX_FUNC(sub_8215D160) {
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
	// addi r6,r3,112
	ctx.r6.s64 = ctx.r3.s64 + 112;
	// addi r5,r3,96
	ctx.r5.s64 = ctx.r3.s64 + 96;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215c478
	ctx.lr = 0x8215D188;
	sub_8215C478(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,252(r31)
	REX_STORE_U8(r31.u32 + 252, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_8215D6A8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,73
	ctx.r3.s64 = 73;
	// bl 0x821dce30
	ctx.lr = 0x8215D6C4;
	sub_821DCE30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8215d6d8
	if (!ctx.cr6.eq) goto loc_8215D6D8;
loc_8215D6D0:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8215d71c
	goto loc_8215D71C;
loc_8215D6D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,74
	ctx.r3.s64 = 74;
	// bl 0x821dce30
	ctx.lr = 0x8215D6E4;
	sub_821DCE30(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8215d6d0
	if (ctx.cr6.eq) goto loc_8215D6D0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8215d6f8
	if (!ctx.cr6.eq) goto loc_8215D6F8;
	// li r31,3
	r31.s64 = 3;
loc_8215D6F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,75
	ctx.r3.s64 = 75;
	// bl 0x821dce30
	ctx.lr = 0x8215D704;
	sub_821DCE30(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8215d6d0
	if (ctx.cr6.eq) goto loc_8215D6D0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8215d718
	if (!ctx.cr6.eq) goto loc_8215D718;
	// li r31,3
	r31.s64 = 3;
loc_8215D718:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8215D71C:
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

DEFINE_REX_FUNC(sub_8215FC38) {
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
	// bl 0x822d4e58
	ctx.lr = 0x8215FC40;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x822d4f2c
	ctx.lr = 0x8215FC48;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r23,r10,432
	r23.s64 = ctx.r10.s64 + 432;
	// addi r24,r11,13128
	r24.s64 = ctx.r11.s64 + 13128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r24,4
	ctx.r10.s64 = r24.s64 + 4;
	// lwz r11,2980(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 2980);
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwzx r17,r11,r10
	r17.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x821afce8
	ctx.lr = 0x8215FC74;
	sub_821AFCE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82161074
	if (!ctx.cr0.eq) goto loc_82161074;
	// li r19,4
	r19.s64 = 4;
	// li r22,0
	r22.s64 = 0;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// addi r10,r24,121
	ctx.r10.s64 = r24.s64 + 121;
	// stw r22,112(r31)
	REX_STORE_U32(r31.u32 + 112, r22.u32);
	// mtctr r19
	ctx.ctr.u64 = r19.u64;
loc_8215FC94:
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215fcac
	if (ctx.cr0.eq) goto loc_8215FCAC;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
loc_8215FCAC:
	// addi r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 + 136;
	// bdnz 0x8215fc94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215FC94;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f27,2012(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2012);
	f27.f64 = double(temp.f32);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lfs f25,16624(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16624);
	f25.f64 = double(temp.f32);
	// lfs f26,26816(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 26816);
	f26.f64 = double(temp.f32);
	// li r25,1
	r25.s64 = 1;
	// lfs f28,26528(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 26528);
	f28.f64 = double(temp.f32);
	// li r16,2
	r16.s64 = 2;
	// lfs f29,1996(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1996);
	f29.f64 = double(temp.f32);
	// li r18,6
	r18.s64 = 6;
	// lfs f31,1992(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lis r21,-32169
	r21.s64 = -2108227584;
	// lis r26,-32169
	r26.s64 = -2108227584;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// addi r20,r10,24328
	r20.s64 = ctx.r10.s64 + 24328;
	// bgt cr6,0x82160aa0
	if (ctx.cr6.gt) goto loc_82160AA0;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-13336
	ctx.r12.s64 = ctx.r12.s64 + -13336;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32234
	ctx.r12.s64 = -2112487424;
	// addi r12,r12,-716
	ctx.r12.s64 = ctx.r12.s64 + -716;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8215FD34;
	case 1:
		goto loc_82160AA0;
	case 2:
		goto loc_82160AA0;
	case 3:
		goto loc_82160AA0;
	case 4:
		goto loc_82160AA0;
	case 5:
		goto loc_8215FE9C;
	case 6:
		goto loc_82160AA0;
	case 7:
		goto loc_82160190;
	case 8:
		goto loc_82160648;
	case 9:
		goto loc_8216071C;
	case 10:
		goto loc_82160804;
	case 11:
		goto loc_82160820;
	case 12:
		goto loc_821608DC;
	case 13:
		goto loc_821608FC;
	case 14:
		goto loc_82160974;
	case 15:
		goto loc_82160A90;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8215FD34:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82161074
	if (ctx.cr6.eq) goto loc_82161074;
	// lhz r10,5616(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 5616);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8215fd64
	if (!ctx.cr0.eq) goto loc_8215FD64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r3,40(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x821b0660
	ctx.lr = 0x8215FD5C;
	sub_821B0660(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// sth r25,5616(r11)
	REX_STORE_U16(ctx.r11.u32 + 5616, r25.u16);
loc_8215FD64:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-12748
	ctx.r6.s64 = ctx.r10.s64 + -12748;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x8215FD8C;
	sub_821F7D50(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215fdb4
	if (ctx.cr0.eq) goto loc_8215FDB4;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r9,r9,-13256
	ctx.r9.s64 = ctx.r9.s64 + -13256;
	// lwz r10,44(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r22,188(r11)
	REX_STORE_U32(ctx.r11.u32 + 188, r22.u32);
	// stw r10,184(r11)
	REX_STORE_U32(ctx.r11.u32 + 184, ctx.r10.u32);
	// b 0x8215fdb8
	goto loc_8215FDB8;
loc_8215FDB4:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8215FDB8:
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// bl 0x82152178
	ctx.lr = 0x8215FDC0;
	sub_82152178(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r7,r11,-7072
	ctx.r7.s64 = ctx.r11.s64 + -7072;
	// ori r9,r10,3699
	ctx.r9.u64 = ctx.r10.u64 | 3699;
	// ori r4,r8,9288
	ctx.r4.u64 = ctx.r8.u64 | 9288;
	// ori r6,r6,9292
	ctx.r6.u64 = ctx.r6.u64 | 9292;
	// ori r5,r5,3836
	ctx.r5.u64 = ctx.r5.u64 | 3836;
	// stfs f31,5592(r7)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r7.u32 + 5592, temp.u32);
	// stb r22,3(r7)
	REX_STORE_U8(ctx.r7.u32 + 3, r22.u8);
	// stbx r22,r7,r9
	REX_STORE_U8(ctx.r7.u32 + ctx.r9.u32, r22.u8);
	// li r3,2
	ctx.r3.s64 = 2;
	// stfsx f31,r7,r4
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// stw r19,5596(r7)
	REX_STORE_U32(ctx.r7.u32 + 5596, r19.u32);
	// stwx r19,r7,r6
	REX_STORE_U32(ctx.r7.u32 + ctx.r6.u32, r19.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// sth r25,140(r7)
	REX_STORE_U16(ctx.r7.u32 + 140, r25.u16);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// sthx r25,r7,r5
	REX_STORE_U16(ctx.r7.u32 + ctx.r5.u32, r25.u16);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// stw r16,80(r31)
	REX_STORE_U32(r31.u32 + 80, r16.u32);
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// bl 0x821afa50
	ctx.lr = 0x8215FE3C;
	sub_821AFA50(ctx, base);
	// lwz r11,24316(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24316);
	// lwz r10,24320(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 24320);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lha r10,8(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 8));
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lha r11,4(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 4));
	// beq cr6,0x8215fe80
	if (ctx.cr6.eq) goto loc_8215FE80;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// blt cr6,0x8215fe70
	if (ctx.cr6.lt) goto loc_8215FE70;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// ble cr6,0x8215fe78
	if (!ctx.cr6.gt) goto loc_8215FE78;
loc_8215FE70:
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8215fe80
	if (!ctx.cr6.eq) goto loc_8215FE80;
loc_8215FE78:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215e090
	ctx.lr = 0x8215FE80;
	sub_8215E090(ctx, base);
loc_8215FE80:
	// lbz r11,2968(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 2968);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215fe94
	if (ctx.cr0.eq) goto loc_8215FE94;
	// stfs f31,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// b 0x82160aa0
	goto loc_82160AA0;
loc_8215FE94:
	// stfs f29,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// b 0x82160aa0
	goto loc_82160AA0;
loc_8215FE9C:
	// lwz r11,24316(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24316);
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// lha r8,8(r11)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 8));
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,26148(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 26148);
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lha r10,4(r10)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 4));
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lha r3,14(r30)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r30.u32 + 14));
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8215fed8
	if (ctx.cr6.eq) goto loc_8215FED8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x821dde50
	ctx.lr = 0x8215FED8;
	sub_821DDE50(ctx, base);
loc_8215FED8:
	// lha r3,0(r30)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r30.u32 + 0));
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82160114
	if (ctx.cr0.lt) goto loc_82160114;
	// lha r4,2(r30)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r30.u32 + 2));
	// bl 0x821dc148
	ctx.lr = 0x8215FEEC;
	sub_821DC148(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215ff00
	if (ctx.cr6.eq) goto loc_8215FF00;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8215FF00:
	// lbz r11,1888(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 1888);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215ff60
	if (ctx.cr0.eq) goto loc_8215FF60;
	// lbz r11,2970(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 2970);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215ff40
	if (ctx.cr0.eq) goto loc_8215FF40;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r9,23
	ctx.r9.s64 = 23;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,2980(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 2980);
	// stb r25,2968(r23)
	REX_STORE_U8(r23.u32 + 2968, r25.u8);
	// stb r10,2969(r23)
	REX_STORE_U8(r23.u32 + 2969, ctx.r10.u8);
	// bl 0x82191be0
	ctx.lr = 0x8215FF3C;
	sub_82191BE0(ctx, base);
	// b 0x8215ff54
	goto loc_8215FF54;
loc_8215FF40:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lbz r11,1889(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 1889);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
loc_8215FF54:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// stb r22,1888(r24)
	REX_STORE_U8(r24.u32 + 1888, r22.u8);
	// b 0x8215ff84
	goto loc_8215FF84;
loc_8215FF60:
	// lbz r11,2968(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 2968);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215ff84
	if (ctx.cr0.eq) goto loc_8215FF84;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r10,23
	ctx.r10.s64 = 23;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lbz r11,2969(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 2969);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
loc_8215FF84:
	// lhz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 12);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82160068
	if (!ctx.cr6.eq) goto loc_82160068;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215ffa8
	if (ctx.cr6.eq) goto loc_8215FFA8;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
	// stw r22,88(r31)
	REX_STORE_U32(r31.u32 + 88, r22.u32);
loc_8215FFA8:
	// lis r29,-32169
	r29.s64 = -2108227584;
	// lwz r28,24324(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 24324);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8215ffec
	if (ctx.cr6.eq) goto loc_8215FFEC;
	// bl 0x82187b58
	ctx.lr = 0x8215FFBC;
	sub_82187B58(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82187ff8
	ctx.lr = 0x8215FFC4;
	sub_82187FF8(ctx, base);
	// lwz r3,24324(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 24324);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215ffec
	if (ctx.cr6.eq) goto loc_8215FFEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215FFE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// stw r22,24324(r29)
	REX_STORE_U32(r29.u32 + 24324, r22.u32);
loc_8215FFEC:
	// stw r18,80(r31)
	REX_STORE_U32(r31.u32 + 80, r18.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r22,61(r31)
	REX_STORE_U8(r31.u32 + 61, r22.u8);
	// lwz r29,108(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821d3060
	ctx.lr = 0x82160004;
	sub_821D3060(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// clrlwi r9,r29,31
	ctx.r9.u64 = r29.u32 & 0x1;
	// ori r10,r10,3696
	ctx.r10.u64 = ctx.r10.u64 | 3696;
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// stbx r29,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, r29.u8);
	// stbx r25,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, r25.u8);
	// lha r10,0(r30)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r30.u32 + 0));
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82160040
	if (ctx.cr6.eq) goto loc_82160040;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x82160058
	if (!ctx.cr6.eq) goto loc_82160058;
loc_82160040:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r25,19420(r11)
	REX_STORE_U32(ctx.r11.u32 + 19420, r25.u32);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// ori r8,r9,23116
	ctx.r8.u64 = ctx.r9.u64 | 23116;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// stwx r25,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, r25.u32);
loc_82160058:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r23,84
	ctx.r3.s64 = r23.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x82160064;
	sub_821D6210(ctx, base);
	// b 0x82160aa0
	goto loc_82160AA0;
loc_82160068:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212c708
	ctx.lr = 0x82160074;
	sub_8212C708(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// ori r11,r11,3696
	ctx.r11.u64 = ctx.r11.u64 | 3696;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r10,-7072
	ctx.r11.s64 = ctx.r10.s64 + -7072;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// xori r5,r10,1
	ctx.r5.u64 = ctx.r10.u64 ^ 1;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mullw r8,r5,r8
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r9,220(r23)
	REX_STORE_U32(r23.u32 + 220, ctx.r9.u32);
	// stw r11,216(r23)
	REX_STORE_U32(r23.u32 + 216, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stbx r25,r10,r6
	REX_STORE_U8(ctx.r10.u32 + ctx.r6.u32, r25.u8);
	// stbx r11,r10,r7
	REX_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u8);
	// lha r11,0(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 0));
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x821600e0
	if (!ctx.cr6.eq) goto loc_821600E0;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r25,120(r31)
	REX_STORE_U32(r31.u32 + 120, r25.u32);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// b 0x82161074
	goto loc_82161074;
loc_821600E0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82160100
	if (ctx.cr6.eq) goto loc_82160100;
	// bl 0x821f8230
	ctx.lr = 0x821600F0;
	sub_821F8230(ctx, base);
	// li r4,30
	ctx.r4.s64 = 30;
	// lha r3,12(r30)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r30.u32 + 12));
	// bl 0x821d45c8
	ctx.lr = 0x821600FC;
	sub_821D45C8(ctx, base);
	// b 0x82161074
	goto loc_82161074;
loc_82160100:
	// bl 0x821f8230
	ctx.lr = 0x82160104;
	sub_821F8230(ctx, base);
	// lha r3,12(r30)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r30.u32 + 12));
	// li r4,30
	ctx.r4.s64 = 30;
loc_8216010C:
	// bl 0x821d45b0
	ctx.lr = 0x82160110;
	sub_821D45B0(ctx, base);
	// b 0x82161074
	goto loc_82161074;
loc_82160114:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// ori r11,r11,3696
	ctx.r11.u64 = ctx.r11.u64 | 3696;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// xori r6,r10,1
	ctx.r6.u64 = ctx.r10.u64 ^ 1;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r11,r9,-7072
	ctx.r11.s64 = ctx.r9.s64 + -7072;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// mullw r8,r6,r7
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// stw r9,220(r23)
	REX_STORE_U32(r23.u32 + 220, ctx.r9.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,216(r23)
	REX_STORE_U32(r23.u32 + 216, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stbx r25,r10,r6
	REX_STORE_U8(ctx.r10.u32 + ctx.r6.u32, r25.u8);
	// stbx r11,r10,r7
	REX_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u8);
	// stw r9,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// lha r11,0(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 0));
	// cmpwi cr6,r11,-7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -7, ctx.xer);
	// beq cr6,0x82160188
	if (ctx.cr6.eq) goto loc_82160188;
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// beq cr6,0x82160188
	if (ctx.cr6.eq) goto loc_82160188;
	// stw r22,120(r31)
	REX_STORE_U32(r31.u32 + 120, r22.u32);
	// b 0x82160aa0
	goto loc_82160AA0;
loc_82160188:
	// stw r25,120(r31)
	REX_STORE_U32(r31.u32 + 120, r25.u32);
	// b 0x82160aa0
	goto loc_82160AA0;
loc_82160190:
	// lfs f0,1840(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f28,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f28.f64, ctx.f13.f64)));
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x821605d0
	if (ctx.cr6.lt) goto loc_821605D0;
	// li r11,8
	ctx.r11.s64 = 8;
	// stfs f31,92(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// stw r22,116(r31)
	REX_STORE_U32(r31.u32 + 116, r22.u32);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// addi r30,r31,116
	r30.s64 = r31.s64 + 116;
	// lwz r10,26148(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 26148);
	// lwz r11,24316(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24316);
	// lha r9,8(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 8));
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lha r11,4(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 4));
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhax r11,r11,r10
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// bgt cr6,0x821605c8
	if (ctx.cr6.gt) goto loc_821605C8;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-13368
	ctx.r12.s64 = ctx.r12.s64 + -13368;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32234
	ctx.r12.s64 = -2112487424;
	// nop 
	// addi r12,r12,536
	ctx.r12.s64 = ctx.r12.s64 + 536;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82160540;
	case 1:
		goto loc_821604F4;
	case 2:
		goto loc_821604A4;
	case 3:
		goto loc_82160444;
	case 4:
		goto loc_82160410;
	case 5:
		goto loc_821603C4;
	case 6:
		goto loc_82160378;
	case 7:
		goto loc_82160320;
	case 8:
		goto loc_821602C4;
	case 9:
		goto loc_82160264;
	case 10:
		goto loc_82160218;
	case 11:
		goto loc_821605C8;
	case 12:
		goto loc_821605C8;
	case 13:
		goto loc_821605C8;
	case 14:
		goto loc_821605C8;
	case 15:
		goto loc_821605C8;
	case 16:
		goto loc_821605C8;
	case 17:
		goto loc_821605C8;
	case 18:
		goto loc_821605C8;
	case 19:
		goto loc_821605C8;
	case 20:
		goto loc_821605C8;
	case 21:
		goto loc_821605C8;
	case 22:
		goto loc_821605C8;
	case 23:
		goto loc_821605C8;
	case 24:
		goto loc_821605C8;
	case 25:
		goto loc_821605C8;
	case 26:
		goto loc_821605C8;
	case 27:
		goto loc_821605C8;
	case 28:
		goto loc_821605C8;
	case 29:
		goto loc_82160584;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82160218:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-12756
	ctx.r6.s64 = ctx.r10.s64 + -12756;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x82160240;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821605d0
	if (ctx.cr0.eq) goto loc_821605D0;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x8219ac00
	ctx.lr = 0x82160260;
	sub_8219AC00(ctx, base);
	// b 0x821605d0
	goto loc_821605D0;
loc_82160264:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
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
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x82160288;
	sub_821F7D50(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821605d0
	if (ctx.cr0.eq) goto loc_821605D0;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwz r3,44(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// stw r30,108(r29)
	REX_STORE_U32(r29.u32 + 108, r30.u32);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// addi r10,r10,-12932
	ctx.r10.s64 = ctx.r10.s64 + -12932;
	// stw r11,112(r29)
	REX_STORE_U32(r29.u32 + 112, ctx.r11.u32);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x820e4bb0
	ctx.lr = 0x821602BC;
	sub_820E4BB0(ctx, base);
	// stw r3,116(r29)
	REX_STORE_U32(r29.u32 + 116, ctx.r3.u32);
	// b 0x821605d0
	goto loc_821605D0;
loc_821602C4:
	// fmr f2,f25
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f25.f64;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// bl 0x821ff668
	ctx.lr = 0x821602D0;
	sub_821FF668(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
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
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821602F4;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821605d0
	if (ctx.cr0.eq) goto loc_821605D0;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r30,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, r30.u32);
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// addi r10,r10,-13304
	ctx.r10.s64 = ctx.r10.s64 + -13304;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// b 0x821605d0
	goto loc_821605D0;
loc_82160320:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
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
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x82160344;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821605d0
	if (ctx.cr0.eq) goto loc_821605D0;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r8,0
	ctx.r8.s64 = 0;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// addi r6,r11,5744
	ctx.r6.s64 = ctx.r11.s64 + 5744;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r10,r24
	ctx.r4.u64 = ctx.r10.u64 + r24.u64;
	// bl 0x8219b1f0
	ctx.lr = 0x82160374;
	sub_8219B1F0(ctx, base);
	// b 0x821605d0
	goto loc_821605D0;
loc_82160378:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-12764
	ctx.r6.s64 = ctx.r10.s64 + -12764;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821603A0;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821605d0
	if (ctx.cr0.eq) goto loc_821605D0;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mulli r11,r4,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(136));
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x8219a8e8
	ctx.lr = 0x821603C0;
	sub_8219A8E8(ctx, base);
	// b 0x821605d0
	goto loc_821605D0;
loc_821603C4:
	// stw r19,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r19.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lwz r6,84(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// addi r10,r10,21264
	ctx.r10.s64 = ctx.r10.s64 + 21264;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// add r8,r11,r24
	ctx.r8.u64 = ctx.r11.u64 + r24.u64;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// addi r6,r6,5744
	ctx.r6.s64 = ctx.r6.s64 + 5744;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218bf28
	ctx.lr = 0x8216040C;
	sub_8218BF28(ctx, base);
	// b 0x821605d0
	goto loc_821605D0;
loc_82160410:
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// ori r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 32768;
	// add r7,r10,r24
	ctx.r7.u64 = ctx.r10.u64 + r24.u64;
	// addi r5,r11,5744
	ctx.r5.s64 = ctx.r11.s64 + 5744;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dfc88
	ctx.lr = 0x82160440;
	sub_821DFC88(ctx, base);
	// b 0x821605d0
	goto loc_821605D0;
loc_82160444:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
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
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x82160468;
	sub_821F7D50(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821605d0
	if (ctx.cr0.eq) goto loc_821605D0;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwz r3,44(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// stw r30,80(r29)
	REX_STORE_U32(r29.u32 + 80, r30.u32);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// addi r10,r10,-12912
	ctx.r10.s64 = ctx.r10.s64 + -12912;
	// stw r11,84(r29)
	REX_STORE_U32(r29.u32 + 84, ctx.r11.u32);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x820e4bb0
	ctx.lr = 0x8216049C;
	sub_820E4BB0(ctx, base);
	// stw r3,88(r29)
	REX_STORE_U32(r29.u32 + 88, ctx.r3.u32);
	// b 0x821605d0
	goto loc_821605D0;
loc_821604A4:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
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
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821604C8;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821605d0
	if (ctx.cr0.eq) goto loc_821605D0;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// lwz r6,44(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// addi r7,r11,5744
	ctx.r7.s64 = ctx.r11.s64 + 5744;
	// add r5,r10,r24
	ctx.r5.u64 = ctx.r10.u64 + r24.u64;
	// bl 0x82173000
	ctx.lr = 0x821604F0;
	sub_82173000(ctx, base);
	// b 0x821605d0
	goto loc_821605D0;
loc_821604F4:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
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
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x82160518;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821605d0
	if (ctx.cr0.eq) goto loc_821605D0;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwz r6,44(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x82172da0
	ctx.lr = 0x8216053C;
	sub_82172DA0(ctx, base);
	// b 0x821605d0
	goto loc_821605D0;
loc_82160540:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
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
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x82160564;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821605d0
	if (ctx.cr0.eq) goto loc_821605D0;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x82173140
	ctx.lr = 0x82160580;
	sub_82173140(ctx, base);
	// b 0x821605d0
	goto loc_821605D0;
loc_82160584:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
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
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821605A8;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821605d0
	if (ctx.cr0.eq) goto loc_821605D0;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,108(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r6,44(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x82191d00
	ctx.lr = 0x821605C4;
	sub_82191D00(ctx, base);
	// b 0x821605d0
	goto loc_821605D0;
loc_821605C8:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_821605D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,17064(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17064);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f27,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, f27.f64, ctx.f0.f64)));
	// bl 0x820e0028
	ctx.lr = 0x821605E4;
	sub_820E0028(ctx, base);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f31.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821605f4
	if (!ctx.cr6.gt) goto loc_821605F4;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_821605F4:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82160610
	if (!ctx.cr6.eq) goto loc_82160610;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-12768(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12768);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,176(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
loc_82160610:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f13,-12772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12772);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,31156(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31156);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f13,140(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// beq cr6,0x82160aa0
	if (ctx.cr6.eq) goto loc_82160AA0;
	// bl 0x821957b8
	ctx.lr = 0x82160640;
	sub_821957B8(ctx, base);
	// stw r22,136(r31)
	REX_STORE_U32(r31.u32 + 136, r22.u32);
	// b 0x82160aa0
	goto loc_82160AA0;
loc_82160648:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82160684
	if (ctx.cr6.eq) goto loc_82160684;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82160684
	if (ctx.cr6.eq) goto loc_82160684;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82160aa0
	if (!ctx.cr6.eq) goto loc_82160AA0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821f8230
	ctx.lr = 0x8216066C;
	sub_821F8230(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x821dc148
	ctx.lr = 0x82160678;
	sub_821DC148(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// b 0x8216010c
	goto loc_8216010C;
loc_82160684:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f2,2348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2348);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2340(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2340);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ff668
	ctx.lr = 0x82160698;
	sub_821FF668(ctx, base);
	// bl 0x8219a068
	ctx.lr = 0x8216069C;
	sub_8219A068(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821606f8
	if (ctx.cr0.eq) goto loc_821606F8;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r7,-32165
	ctx.r7.s64 = -2107965440;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r8,-12784
	ctx.r6.s64 = ctx.r8.s64 + -12784;
	// stb r22,24392(r10)
	REX_STORE_U8(ctx.r10.u32 + 24392, r22.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,-32480(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + -32480);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// addi r30,r10,24392
	r30.s64 = ctx.r10.s64 + 24392;
	// bl 0x821f7d50
	ctx.lr = 0x821606DC;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821606f0
	if (ctx.cr0.eq) goto loc_821606F0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821a9a18
	ctx.lr = 0x821606F0;
	sub_821A9A18(ctx, base);
loc_821606F0:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x821606fc
	goto loc_821606FC;
loc_821606F8:
	// li r11,9
	ctx.r11.s64 = 9;
loc_821606FC:
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82160aa0
	if (!ctx.cr6.eq) goto loc_82160AA0;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// stw r20,24316(r26)
	REX_STORE_U32(r26.u32 + 24316, r20.u32);
	// stw r22,24320(r21)
	REX_STORE_U32(r21.u32 + 24320, r22.u32);
	// b 0x82160aa0
	goto loc_82160AA0;
loc_8216071C:
	// lfs f0,1840(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f0,f28,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f28.f64, -ctx.f13.f64)));
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bgt cr6,0x821607a0
	if (ctx.cr6.gt) goto loc_821607A0;
	// stfs f29,92(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// lwz r11,24316(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24316);
	// lha r10,8(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 8));
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lha r11,4(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 4));
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// blt cr6,0x82160760
	if (ctx.cr6.lt) goto loc_82160760;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// ble cr6,0x82160768
	if (!ctx.cr6.gt) goto loc_82160768;
loc_82160760:
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82160770
	if (!ctx.cr6.eq) goto loc_82160770;
loc_82160768:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215e090
	ctx.lr = 0x82160770;
	sub_8215E090(ctx, base);
loc_82160770:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821d9620
	ctx.lr = 0x8216077C;
	sub_821D9620(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r16,80(r31)
	REX_STORE_U32(r31.u32 + 80, r16.u32);
	// addi r9,r11,-7072
	ctx.r9.s64 = ctx.r11.s64 + -7072;
	// ori r8,r10,3699
	ctx.r8.u64 = ctx.r10.u64 | 3699;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// stb r22,3(r9)
	REX_STORE_U8(ctx.r9.u32 + 3, r22.u8);
	// stbx r22,r9,r8
	REX_STORE_U8(ctx.r9.u32 + ctx.r8.u32, r22.u8);
loc_821607A0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,17064(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17064);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f27,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, f27.f64, ctx.f0.f64)));
	// bl 0x820e0028
	ctx.lr = 0x821607B4;
	sub_820E0028(ctx, base);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f31.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821607c4
	if (!ctx.cr6.gt) goto loc_821607C4;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_821607C4:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821607e0
	if (!ctx.cr6.eq) goto loc_821607E0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-12768(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12768);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,176(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
loc_821607E0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,-12772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12772);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,31156(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31156);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f13,140(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// b 0x82160aa0
	goto loc_82160AA0;
loc_82160804:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lbz r11,24392(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 24392);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82160aa0
	if (ctx.cr0.eq) goto loc_82160AA0;
	// bl 0x8219a058
	ctx.lr = 0x82160818;
	sub_8219A058(ctx, base);
loc_82160818:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82160a9c
	goto loc_82160A9C;
loc_82160820:
	// bl 0x82187b58
	ctx.lr = 0x82160824;
	sub_82187B58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8216087c
	if (ctx.cr6.lt) goto loc_8216087C;
	// beq cr6,0x8216085c
	if (ctx.cr6.eq) goto loc_8216085C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82160aa0
	if (!ctx.cr6.lt) goto loc_82160AA0;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82160854
	if (ctx.cr6.eq) goto loc_82160854;
	// lwz r3,96(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x82101d68
	ctx.lr = 0x82160850;
	sub_82101D68(ctx, base);
	// stw r22,196(r31)
	REX_STORE_U32(r31.u32 + 196, r22.u32);
loc_82160854:
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x82160a9c
	goto loc_82160A9C;
loc_8216085C:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82160874
	if (ctx.cr6.eq) goto loc_82160874;
	// lwz r3,96(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x82101d68
	ctx.lr = 0x82160870;
	sub_82101D68(ctx, base);
	// stw r22,196(r31)
	REX_STORE_U32(r31.u32 + 196, r22.u32);
loc_82160874:
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82160a9c
	goto loc_82160A9C;
loc_8216087C:
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r11.u32);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// blt cr6,0x82160aa0
	if (ctx.cr6.lt) goto loc_82160AA0;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82160aa0
	if (!ctx.cr6.eq) goto loc_82160AA0;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
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
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821608C0;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821608d0
	if (ctx.cr0.eq) goto loc_821608D0;
	// bl 0x821998b0
	ctx.lr = 0x821608CC;
	sub_821998B0(ctx, base);
	// b 0x821608d4
	goto loc_821608D4;
loc_821608D0:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_821608D4:
	// stw r3,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r3.u32);
	// b 0x82160aa0
	goto loc_82160AA0;
loc_821608DC:
	// rlwinm. r11,r17,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82160aa0
	if (ctx.cr0.eq) goto loc_82160AA0;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lwz r3,140(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// bl 0x82101d68
	ctx.lr = 0x821608F0;
	sub_82101D68(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r22,192(r31)
	REX_STORE_U32(r31.u32 + 192, r22.u32);
	// b 0x82160a9c
	goto loc_82160A9C;
loc_821608FC:
	// stw r16,80(r31)
	REX_STORE_U32(r31.u32 + 80, r16.u32);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r30,r11,31868
	r30.s64 = ctx.r11.s64 + 31868;
	// lbz r11,31868(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 31868);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82160aa0
	if (ctx.cr0.eq) goto loc_82160AA0;
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82160934
	if (!ctx.cr0.eq) goto loc_82160934;
	// stb r25,1(r30)
	REX_STORE_U8(r30.u32 + 1, r25.u8);
	// li r3,27
	ctx.r3.s64 = 27;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// bl 0x82191be0
	ctx.lr = 0x82160930;
	sub_82191BE0(ctx, base);
	// b 0x8216095c
	goto loc_8216095C;
loc_82160934:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82191be0
	ctx.lr = 0x8216093C;
	sub_82191BE0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r10,10
	ctx.r10.s64 = 10;
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// bge 0x8216095c
	if (!ctx.cr0.lt) goto loc_8216095C;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// stw r22,12(r30)
	REX_STORE_U32(r30.u32 + 12, r22.u32);
loc_8216095C:
	// li r10,14
	ctx.r10.s64 = 14;
	// stb r22,0(r30)
	REX_STORE_U8(r30.u32 + 0, r22.u8);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// bl 0x821a9ba8
	ctx.lr = 0x82160970;
	sub_821A9BA8(ctx, base);
	// b 0x82160aa0
	goto loc_82160AA0;
loc_82160974:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216098c
	if (ctx.cr6.eq) goto loc_8216098C;
	// lwz r3,96(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x82101d68
	ctx.lr = 0x82160988;
	sub_82101D68(ctx, base);
	// stw r22,196(r31)
	REX_STORE_U32(r31.u32 + 196, r22.u32);
loc_8216098C:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82160a2c
	if (ctx.cr6.lt) goto loc_82160A2C;
	// beq cr6,0x821609f4
	if (ctx.cr6.eq) goto loc_821609F4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82160aa0
	if (!ctx.cr6.lt) goto loc_82160AA0;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82160aa0
	if (!ctx.cr6.eq) goto loc_82160AA0;
	// bl 0x82191c68
	ctx.lr = 0x821609B8;
	sub_82191C68(ctx, base);
	// bl 0x82191cc0
	ctx.lr = 0x821609BC;
	sub_82191CC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r22,188(r31)
	REX_STORE_U32(r31.u32 + 188, r22.u32);
	// beq 0x82160aa0
	if (ctx.cr0.eq) goto loc_82160AA0;
	// stw r22,192(r31)
	REX_STORE_U32(r31.u32 + 192, r22.u32);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// stw r20,24316(r26)
	REX_STORE_U32(r26.u32 + 24316, r20.u32);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// stb r22,2968(r23)
	REX_STORE_U8(r23.u32 + 2968, r22.u8);
	// stw r22,24320(r21)
	REX_STORE_U32(r21.u32 + 24320, r22.u32);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82160818
	if (ctx.cr6.eq) goto loc_82160818;
	// stw r16,80(r31)
	REX_STORE_U32(r31.u32 + 80, r16.u32);
	// b 0x82160aa0
	goto loc_82160AA0;
loc_821609F4:
	// bl 0x821a9ce0
	ctx.lr = 0x821609F8;
	sub_821A9CE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82160aa0
	if (!ctx.cr0.eq) goto loc_82160AA0;
	// lwz r11,2980(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 2980);
	// addi r10,r24,4
	ctx.r10.s64 = r24.s64 + 4;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82160aa0
	if (ctx.cr0.eq) goto loc_82160AA0;
	// stw r16,188(r31)
	REX_STORE_U32(r31.u32 + 188, r16.u32);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lwz r3,140(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// bl 0x82101d68
	ctx.lr = 0x82160A28;
	sub_82101D68(ctx, base);
	// b 0x82160aa0
	goto loc_82160AA0;
loc_82160A2C:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-12792
	ctx.r6.s64 = ctx.r10.s64 + -12792;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x82160A54;
	sub_821F7D50(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82160a80
	if (ctx.cr0.eq) goto loc_82160A80;
	// bl 0x82191ca0
	ctx.lr = 0x82160A60;
	sub_82191CA0(ctx, base);
	// lwz r11,2980(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 2980);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82192960
	ctx.lr = 0x82160A7C;
	sub_82192960(ctx, base);
	// b 0x82160a84
	goto loc_82160A84;
loc_82160A80:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82160A84:
	// stw r3,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r3.u32);
	// stw r25,188(r31)
	REX_STORE_U32(r31.u32 + 188, r25.u32);
	// b 0x82160aa0
	goto loc_82160AA0;
loc_82160A90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215e090
	ctx.lr = 0x82160A98;
	sub_8215E090(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
loc_82160A9C:
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_82160AA0:
	// lwz r11,24316(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24316);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82160AB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// lfs f30,2352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2352);
	f30.f64 = double(temp.f32);
	// bne cr6,0x82160ec4
	if (!ctx.cr6.eq) goto loc_82160EC4;
	// lbz r11,1888(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 1888);
	// mr r29,r22
	r29.u64 = r22.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82160aec
	if (!ctx.cr0.eq) goto loc_82160AEC;
	// lbz r11,2968(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 2968);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82160b14
	if (ctx.cr0.eq) goto loc_82160B14;
loc_82160AEC:
	// lwz r11,24320(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 24320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82160c08
	if (!ctx.cr6.eq) goto loc_82160C08;
	// lwz r3,24316(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 24316);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82160B10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82160B10:
	// mr r29,r25
	r29.u64 = r25.u64;
loc_82160B14:
	// lwz r11,24320(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 24320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82160b34
	if (!ctx.cr6.eq) goto loc_82160B34;
loc_82160B20:
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82160b34
	if (ctx.cr6.eq) goto loc_82160B34;
	// bl 0x821957b8
	ctx.lr = 0x82160B30;
	sub_821957B8(ctx, base);
	// stw r22,136(r31)
	REX_STORE_U32(r31.u32 + 136, r22.u32);
loc_82160B34:
	// lwz r11,2980(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 2980);
	// addi r10,r24,12
	ctx.r10.s64 = r24.s64 + 12;
	// lwz r5,112(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 112);
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwz r3,24316(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 24316);
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8215dd28
	ctx.lr = 0x82160B50;
	sub_8215DD28(ctx, base);
	// lwz r5,112(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r11,24316(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24316);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bge cr6,0x82160b80
	if (!ctx.cr6.lt) goto loc_82160B80;
	// lha r9,8(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 8));
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82160ba8
	if (!ctx.cr6.eq) goto loc_82160BA8;
loc_82160B80:
	// lha r9,8(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 8));
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82160bbc
	if (ctx.cr6.eq) goto loc_82160BBC;
	// lbz r10,2970(r23)
	ctx.r10.u64 = REX_LOAD_U8(r23.u32 + 2970);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82160bbc
	if (ctx.cr0.eq) goto loc_82160BBC;
loc_82160BA8:
	// li r4,8192
	ctx.r4.s64 = 8192;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8215dd28
	ctx.lr = 0x82160BB4;
	sub_8215DD28(ctx, base);
	// lwz r11,24316(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24316);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82160BBC:
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// bne cr6,0x82160e5c
	if (!ctx.cr6.eq) goto loc_82160E5C;
	// rlwinm. r9,r17,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82160cec
	if (!ctx.cr0.eq) goto loc_82160CEC;
	// rlwinm. r10,r17,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82160cec
	if (!ctx.cr0.eq) goto loc_82160CEC;
	// clrlwi. r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82160cec
	if (!ctx.cr0.eq) goto loc_82160CEC;
	// andi. r11,r17,16416
	ctx.r11.u64 = r17.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82160bf0
	if (!ctx.cr0.eq) goto loc_82160BF0;
	// rlwinm. r10,r17,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82160e68
	if (ctx.cr0.eq) goto loc_82160E68;
loc_82160BF0:
	// lwz r10,24320(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 24320);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x82160c94
	if (ctx.cr6.lt) goto loc_82160C94;
	// stfs f30,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// stw r19,80(r31)
	REX_STORE_U32(r31.u32 + 80, r19.u32);
	// b 0x82160ce0
	goto loc_82160CE0;
loc_82160C08:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r9,24316(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 24316);
	// addi r11,r11,-16264
	ctx.r11.s64 = ctx.r11.s64 + -16264;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r10,r11,-608
	ctx.r10.s64 = ctx.r11.s64 + -608;
	// lha r7,8(r9)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 8));
	// addi r6,r10,32
	ctx.r6.s64 = ctx.r10.s64 + 32;
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82160b10
	if (ctx.cr6.eq) goto loc_82160B10;
	// addi r9,r11,-128
	ctx.r9.s64 = ctx.r11.s64 + -128;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82160b10
	if (ctx.cr6.eq) goto loc_82160B10;
	// addi r9,r11,-128
	ctx.r9.s64 = ctx.r11.s64 + -128;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82160b10
	if (ctx.cr6.eq) goto loc_82160B10;
	// addi r9,r11,-128
	ctx.r9.s64 = ctx.r11.s64 + -128;
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82160b10
	if (ctx.cr6.eq) goto loc_82160B10;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82160b10
	if (ctx.cr6.eq) goto loc_82160B10;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82160b10
	if (ctx.cr6.eq) goto loc_82160B10;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82160b10
	if (ctx.cr6.eq) goto loc_82160B10;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// stw r20,24316(r26)
	REX_STORE_U32(r26.u32 + 24316, r20.u32);
	// stw r22,24320(r21)
	REX_STORE_U32(r21.u32 + 24320, r22.u32);
	// b 0x82160b20
	goto loc_82160B20;
loc_82160C94:
	// lwz r10,24320(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 24320);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82160cbc
	if (!ctx.cr6.gt) goto loc_82160CBC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,24320(r21)
	REX_STORE_U32(r21.u32 + 24320, ctx.r11.u32);
	// add r11,r10,r20
	ctx.r11.u64 = ctx.r10.u64 + r20.u64;
	// stw r11,24316(r26)
	REX_STORE_U32(r26.u32 + 24316, ctx.r11.u32);
	// b 0x82160ce0
	goto loc_82160CE0;
loc_82160CBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82160e68
	if (ctx.cr6.eq) goto loc_82160E68;
	// fmr f2,f25
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f25.f64;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// bl 0x821ff668
	ctx.lr = 0x82160CD0;
	sub_821FF668(ctx, base);
	// stw r18,80(r31)
	REX_STORE_U32(r31.u32 + 80, r18.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821d45b0
	ctx.lr = 0x82160CE0;
	sub_821D45B0(ctx, base);
loc_82160CE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821d1db0
	ctx.lr = 0x82160CE8;
	sub_821D1DB0(ctx, base);
	// b 0x82160e68
	goto loc_82160E68;
loc_82160CEC:
	// lha r10,8(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 8));
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lha r30,4(r11)
	r30.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 4));
	// cmpwi cr6,r30,13
	ctx.cr6.compare<int32_t>(r30.s32, 13, ctx.xer);
	// bge cr6,0x82160e08
	if (!ctx.cr6.lt) goto loc_82160E08;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lwz r11,24320(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 24320);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,26096
	ctx.r10.s64 = ctx.r10.s64 + 26096;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r20,28
	ctx.r7.s64 = r20.s64 + 28;
	// lwzx r4,r9,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82160d68
	if (ctx.cr6.eq) goto loc_82160D68;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8215dc90
	ctx.lr = 0x82160D38;
	sub_8215DC90(ctx, base);
	// lwz r11,24320(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 24320);
	// addi r10,r20,16
	ctx.r10.s64 = r20.s64 + 16;
	// lhz r8,118(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 120);
	// lwz r6,124(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r8,6(r10)
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r8.u16);
	// sth r7,8(r10)
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r7.u16);
	// stw r6,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lhz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 116);
	// sth r9,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r9.u16);
loc_82160D68:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82160d80
	if (ctx.cr6.lt) goto loc_82160D80;
	// li r11,3
	ctx.r11.s64 = 3;
	// stfs f30,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// b 0x82160e50
	goto loc_82160E50;
loc_82160D80:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,24320(r21)
	REX_STORE_U32(r21.u32 + 24320, ctx.r11.u32);
	// add r3,r10,r20
	ctx.r3.u64 = ctx.r10.u64 + r20.u64;
	// stw r3,24316(r26)
	REX_STORE_U32(r26.u32 + 24316, ctx.r3.u32);
	// lha r10,8(r3)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 8));
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82160dbc
	if (ctx.cr6.eq) goto loc_82160DBC;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x82160dd4
	if (ctx.cr6.lt) goto loc_82160DD4;
loc_82160DBC:
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82160de0
	if (ctx.cr6.eq) goto loc_82160DE0;
	// lbz r11,2970(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 2970);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82160de0
	if (ctx.cr0.eq) goto loc_82160DE0;
loc_82160DD4:
	// li r4,8192
	ctx.r4.s64 = 8192;
	// lwz r5,112(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x8215dd28
	ctx.lr = 0x82160DE0;
	sub_8215DD28(ctx, base);
loc_82160DE0:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x82160e50
	if (!ctx.cr6.eq) goto loc_82160E50;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r22,200(r31)
	REX_STORE_U32(r31.u32 + 200, r22.u32);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// lwz r30,2980(r23)
	r30.u64 = REX_LOAD_U32(r23.u32 + 2980);
	// bl 0x82187b58
	ctx.lr = 0x82160DFC;
	sub_82187B58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821883a0
	ctx.lr = 0x82160E04;
	sub_821883A0(ctx, base);
	// b 0x82160e50
	goto loc_82160E50;
loc_82160E08:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82160e18
	if (!ctx.cr6.eq) goto loc_82160E18;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82160e68
	if (ctx.cr0.eq) goto loc_82160E68;
loc_82160E18:
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// addi r11,r24,4
	ctx.r11.s64 = r24.s64 + 4;
loc_82160E28:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82160e4c
	if (!ctx.cr0.eq) goto loc_82160E4C;
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// addi r9,r24,548
	ctx.r9.s64 = r24.s64 + 548;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82160e28
	if (ctx.cr6.lt) goto loc_82160E28;
	// b 0x82160e50
	goto loc_82160E50;
loc_82160E4C:
	// stw r10,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r10.u32);
loc_82160E50:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821d1d90
	ctx.lr = 0x82160E58;
	sub_821D1D90(ctx, base);
	// b 0x82160e68
	goto loc_82160E68;
loc_82160E5C:
	// li r3,12
	ctx.r3.s64 = 12;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x8212bc38
	ctx.lr = 0x82160E68;
	sub_8212BC38(ctx, base);
loc_82160E68:
	// lwz r11,1088(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1088);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82160ebc
	if (!ctx.cr6.eq) goto loc_82160EBC;
	// lwz r11,24320(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 24320);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82160ebc
	if (ctx.cr6.gt) goto loc_82160EBC;
	// lfs f0,1840(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f0,f28,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f28.f64, ctx.f13.f64)));
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// lfs f0,27892(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27892);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82160ec8
	if (!ctx.cr6.gt) goto loc_82160EC8;
	// fmr f2,f25
	ctx.f2.f64 = f25.f64;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// bl 0x821ff668
	ctx.lr = 0x82160EAC;
	sub_821FF668(ctx, base);
	// li r4,30
	ctx.r4.s64 = 30;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821d45b0
	ctx.lr = 0x82160EB8;
	sub_821D45B0(ctx, base);
	// b 0x82160ec8
	goto loc_82160EC8;
loc_82160EBC:
	// stfs f29,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// b 0x82160ec8
	goto loc_82160EC8;
loc_82160EC4:
	// mr r28,r27
	r28.u64 = r27.u64;
loc_82160EC8:
	// lha r11,8(r20)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r20.u32 + 8));
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82160ee4
	if (ctx.cr6.eq) goto loc_82160EE4;
	// stfs f30,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// lha r11,8(r20)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r20.u32 + 8));
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
loc_82160EE4:
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// beq cr6,0x82160efc
	if (ctx.cr6.eq) goto loc_82160EFC;
	// lwz r11,24320(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 24320);
	// addi r10,r20,28
	ctx.r10.s64 = r20.s64 + 28;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r22,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r22.u32);
loc_82160EFC:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82160fa0
	if (ctx.cr6.eq) goto loc_82160FA0;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// li r10,10000
	ctx.r10.s64 = 10000;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// mulli r10,r10,10000
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(10000));
	// lfs f0,16620(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16620);
	ctx.f0.f64 = double(temp.f32);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e0088
	ctx.lr = 0x82160F40;
	sub_820E0088(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// li r9,5000
	ctx.r9.s64 = 5000;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,-12796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12796);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f0,f1,f0,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, -ctx.f0.f64)));
	// stfs f0,80(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// divw r10,r11,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0);
	// mulli r10,r10,5000
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(5000));
	// lfs f0,31452(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 31452);
	ctx.f0.f64 = double(temp.f32);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x82160F8C;
	sub_820E0028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lfs f0,15620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15620);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f0,f1,f0,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, -ctx.f0.f64)));
	// stfs f0,96(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 96, temp.u32);
loc_82160FA0:
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// li r10,60
	ctx.r10.s64 = 60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// mulli r10,r10,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(60));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f28
	ctx.f1.f64 = double(float(ctx.f0.f64 * f28.f64));
	// bl 0x820e0028
	ctx.lr = 0x82160FD8;
	sub_820E0028(ctx, base);
	// fadds f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f27,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f27.f64, ctx.f0.f64)));
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// lfs f0,1840(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f0,f28,f12
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f28.f64, -ctx.f12.f64)));
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x82161008
	if (!ctx.cr6.lt) goto loc_82161008;
	// stfs f29,96(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
loc_82161008:
	// lfs f0,1840(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f0,f28,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f28.f64, -ctx.f13.f64)));
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x82161068
	if (!ctx.cr6.lt) goto loc_82161068;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stfs f29,100(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82161040
	if (!ctx.cr6.eq) goto loc_82161040;
	// stw r16,80(r31)
	REX_STORE_U32(r31.u32 + 80, r16.u32);
	// lwz r11,24320(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 24320);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82161054
	goto loc_82161054;
loc_82161040:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82161068
	if (!ctx.cr6.eq) goto loc_82161068;
	// stw r16,80(r31)
	REX_STORE_U32(r31.u32 + 80, r16.u32);
	// lwz r11,24320(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 24320);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82161054:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,24320(r21)
	REX_STORE_U32(r21.u32 + 24320, ctx.r11.u32);
	// add r11,r10,r20
	ctx.r11.u64 = ctx.r10.u64 + r20.u64;
	// stw r11,24316(r26)
	REX_STORE_U32(r26.u32 + 24316, ctx.r11.u32);
	// stfs f30,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
loc_82161068:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_82161074:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x822d4f78
	ctx.lr = 0x82161080;
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_821B1470) {
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
	// bl 0x82187b58
	ctx.lr = 0x821B1488;
	sub_82187B58(ctx, base);
	// lis r31,-32168
	r31.s64 = -2108162048;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,-9784(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + -9784);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b14c8
	if (ctx.cr6.eq) goto loc_821B14C8;
	// bl 0x82187ff8
	ctx.lr = 0x821B14A0;
	sub_82187FF8(ctx, base);
	// lwz r3,-9784(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -9784);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b14c8
	if (ctx.cr6.eq) goto loc_821B14C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B14C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9784(r31)
	REX_STORE_U32(r31.u32 + -9784, ctx.r11.u32);
loc_821B14C8:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822c80d0
	ctx.lr = 0x821B14D0;
	sub_822C80D0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x821b14e8
	if (ctx.cr0.eq) goto loc_821B14E8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,9844
	ctx.r11.s64 = ctx.r11.s64 + 9844;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x821b14ec
	goto loc_821B14EC;
loc_821B14E8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821B14EC:
	// stw r4,-9784(r31)
	REX_STORE_U32(r31.u32 + -9784, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82188070
	ctx.lr = 0x821B14F8;
	sub_82188070(ctx, base);
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

DEFINE_REX_FUNC(sub_821B4108) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b42a4
	if (ctx.cr6.eq) goto loc_821B42A4;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b418c
	if (ctx.cr0.eq) goto loc_821B418C;
	// cmpwi cr6,r11,330
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 330, ctx.xer);
	// bne cr6,0x821b429c
	if (!ctx.cr6.eq) goto loc_821B429C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// bl 0x8212be90
	ctx.lr = 0x821B4154;
	sub_8212BE90(ctx, base);
	// bl 0x821b2a70
	ctx.lr = 0x821B4158;
	sub_821B2A70(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-7072
	ctx.r9.s64 = ctx.r11.s64 + -7072;
	// ori r8,r10,23116
	ctx.r8.u64 = ctx.r10.u64 | 23116;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r10,19420(r9)
	REX_STORE_U32(ctx.r9.u32 + 19420, ctx.r10.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stwx r11,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// bl 0x821d3060
	ctx.lr = 0x821B4184;
	sub_821D3060(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821b42a8
	goto loc_821B42A8;
loc_821B418C:
	// bl 0x8212c6a0
	ctx.lr = 0x821B4190;
	sub_8212C6A0(ctx, base);
	// bl 0x8212bfb8
	ctx.lr = 0x821B4194;
	sub_8212BFB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8212be90
	ctx.lr = 0x821B419C;
	sub_8212BE90(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r30,r11,-7072
	r30.s64 = ctx.r11.s64 + -7072;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x821bf940
	ctx.lr = 0x821B41B8;
	sub_821BF940(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c3238
	ctx.lr = 0x821B41C0;
	sub_821C3238(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c3190
	ctx.lr = 0x821B41C8;
	sub_821C3190(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821bf940
	ctx.lr = 0x821B41E0;
	sub_821BF940(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c3238
	ctx.lr = 0x821B41EC;
	sub_821C3238(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c3190
	ctx.lr = 0x821B41F8;
	sub_821C3190(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212c708
	ctx.lr = 0x821B4204;
	sub_8212C708(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8212ef78
	ctx.lr = 0x821B4214;
	sub_8212EF78(ctx, base);
	// bl 0x82117a78
	ctx.lr = 0x821B4218;
	sub_82117A78(ctx, base);
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 356);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821b4238
	if (ctx.cr6.eq) goto loc_821B4238;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x821b4238
	if (ctx.cr6.eq) goto loc_821B4238;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,5432(r11)
	REX_STORE_U32(ctx.r11.u32 + 5432, ctx.r10.u32);
loc_821B4238:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821b4284
	if (!ctx.cr6.eq) goto loc_821B4284;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x821b4284
	if (ctx.cr6.lt) goto loc_821B4284;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x821b4260
	if (!ctx.cr6.gt) goto loc_821B4260;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x821b4284
	if (!ctx.cr6.eq) goto loc_821B4284;
loc_821B4260:
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lbz r11,210(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 210);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b4284
	if (!ctx.cr0.eq) goto loc_821B4284;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x820f1090
	ctx.lr = 0x821B4284;
	sub_820F1090(ctx, base);
loc_821B4284:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// sth r11,308(r31)
	REX_STORE_U16(r31.u32 + 308, ctx.r11.u16);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x821B4298;
	sub_821D6210(ctx, base);
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
loc_821B429C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r11.u32);
loc_821B42A4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821B42A8:
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

DEFINE_REX_FUNC(sub_821BF328) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r3,14124
	ctx.r10.s64 = ctx.r3.s64 + 14124;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_821BF33C:
	// stfsu f0,176(r10)
	ctx.fpscr.disableFlushMode();
	ea = 176 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821bf33c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF33C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BF8A8) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r31,-32168
	r31.s64 = -2108162048;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,2024(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// stw r9,-9752(r31)
	REX_STORE_U32(r31.u32 + -9752, ctx.r9.u32);
	// stfs f0,-9756(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -9756, temp.u32);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// stw r8,-9760(r11)
	REX_STORE_U32(ctx.r11.u32 + -9760, ctx.r8.u32);
	// blt cr6,0x821bf914
	if (ctx.cr6.lt) goto loc_821BF914;
	// lha r5,2(r6)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r6.u32 + 2));
	// cmpwi cr6,r5,-2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -2, ctx.xer);
	// bne cr6,0x821bf908
	if (!ctx.cr6.eq) goto loc_821BF908;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-9760(r11)
	REX_STORE_U32(ctx.r11.u32 + -9760, ctx.r10.u32);
	// b 0x821bf914
	goto loc_821BF914;
loc_821BF908:
	// lwz r4,10008(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 10008);
	// bl 0x821bee40
	ctx.lr = 0x821BF910;
	sub_821BEE40(ctx, base);
	// stfs f1,-9756(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + -9756, temp.u32);
loc_821BF914:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x821bf850
	ctx.lr = 0x821BF920;
	sub_821BF850(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9752(r31)
	REX_STORE_U32(r31.u32 + -9752, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821C1370) {
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
	ctx.lr = 0x821C1378;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822091c8
	ctx.lr = 0x821C1398;
	sub_822091C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822c9160
	ctx.lr = 0x821C13A0;
	sub_822C9160(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822091c8
	ctx.lr = 0x821C13B8;
	sub_822091C8(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x822c9160
	ctx.lr = 0x821C13C0;
	sub_822C9160(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x822091c8
	ctx.lr = 0x821C13DC;
	sub_822091C8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822c9160
	ctx.lr = 0x821C13E4;
	sub_822C9160(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x822091c8
	ctx.lr = 0x821C13FC;
	sub_822091C8(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x822c9160
	ctx.lr = 0x821C1404;
	sub_822C9160(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// bl 0x822091c8
	ctx.lr = 0x821C141C;
	sub_822091C8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c9160
	ctx.lr = 0x821C1424;
	sub_822C9160(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// add r30,r11,r31
	r30.u64 = ctx.r11.u64 + r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// ble cr6,0x821c14d8
	if (!ctx.cr6.gt) goto loc_821C14D8;
loc_821C1444:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822091c8
	ctx.lr = 0x821C1454;
	sub_822091C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c9148
	ctx.lr = 0x821C145C;
	sub_822C9148(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addi r4,r30,2
	ctx.r4.s64 = r30.s64 + 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// sth r11,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C1474;
	sub_822091C8(ctx, base);
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x822c9148
	ctx.lr = 0x821C147C;
	sub_822C9148(ctx, base);
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// sth r11,2(r30)
	REX_STORE_U16(r30.u32 + 2, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C1494;
	sub_822091C8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c9148
	ctx.lr = 0x821C149C;
	sub_822C9148(ctx, base);
	// lhz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// addi r4,r30,6
	ctx.r4.s64 = r30.s64 + 6;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,86
	ctx.r3.s64 = ctx.r1.s64 + 86;
	// sth r11,4(r30)
	REX_STORE_U16(r30.u32 + 4, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C14B4;
	sub_822091C8(ctx, base);
	// addi r3,r1,86
	ctx.r3.s64 = ctx.r1.s64 + 86;
	// bl 0x822c9148
	ctx.lr = 0x821C14BC;
	sub_822C9148(ctx, base);
	// lhz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// sth r11,6(r30)
	REX_STORE_U16(r30.u32 + 6, ctx.r11.u16);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821c1444
	if (ctx.cr6.lt) goto loc_821C1444;
loc_821C14D8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lhz r10,-8(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + -8);
	// add r29,r11,r31
	r29.u64 = ctx.r11.u64 + r31.u64;
	// lhz r11,-6(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + -6);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821c1580
	if (!ctx.cr0.gt) goto loc_821C1580;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_821C14F4:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822091c8
	ctx.lr = 0x821C1504;
	sub_822091C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822c9148
	ctx.lr = 0x821C150C;
	sub_822C9148(ctx, base);
	// lhz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// addi r4,r29,2
	ctx.r4.s64 = r29.s64 + 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,90
	ctx.r3.s64 = ctx.r1.s64 + 90;
	// sth r11,0(r29)
	REX_STORE_U16(r29.u32 + 0, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C1524;
	sub_822091C8(ctx, base);
	// addi r3,r1,90
	ctx.r3.s64 = ctx.r1.s64 + 90;
	// bl 0x822c9148
	ctx.lr = 0x821C152C;
	sub_822C9148(ctx, base);
	// lhz r11,90(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// sth r11,2(r29)
	REX_STORE_U16(r29.u32 + 2, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C1544;
	sub_822091C8(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x822c9148
	ctx.lr = 0x821C154C;
	sub_822C9148(ctx, base);
	// lhz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
	// addi r4,r29,6
	ctx.r4.s64 = r29.s64 + 6;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,94
	ctx.r3.s64 = ctx.r1.s64 + 94;
	// sth r11,4(r29)
	REX_STORE_U16(r29.u32 + 4, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C1564;
	sub_822091C8(ctx, base);
	// addi r3,r1,94
	ctx.r3.s64 = ctx.r1.s64 + 94;
	// bl 0x822c9148
	ctx.lr = 0x821C156C;
	sub_822C9148(ctx, base);
	// lhz r11,94(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// sth r11,6(r29)
	REX_STORE_U16(r29.u32 + 6, ctx.r11.u16);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x821c14f4
	if (!ctx.cr0.eq) goto loc_821C14F4;
loc_821C1580:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x821c15a4
	if (!ctx.cr6.gt) goto loc_821C15A4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x821c15a4
	if (ctx.cr6.eq) goto loc_821C15A4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821ff870
	ctx.lr = 0x821C15A0;
	sub_821FF870(ctx, base);
	// b 0x821c15a8
	goto loc_821C15A8;
loc_821C15A4:
	// mr r27,r31
	r27.u64 = r31.u64;
loc_821C15A8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821C7250) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f1.f64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x821c7278
	if (ctx.cr6.eq) goto loc_821C7278;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_821C7278:
	// fcmpu cr6,f2,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f2.f64);
	// beq cr6,0x821c7284
	if (ctx.cr6.eq) goto loc_821C7284;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
loc_821C7284:
	// fcmpu cr6,f3,f3
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f3.f64);
	// beq cr6,0x821c7290
	if (ctx.cr6.eq) goto loc_821C7290;
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
loc_821C7290:
	// lfs f13,10484(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10484);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,10492(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10492);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfs f11,10488(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10488);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fsubs f11,f11,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f1,10252(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 10252, temp.u32);
	// stfs f3,10256(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 10256, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,10484(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 10484, temp.u32);
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,10492(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 10492, temp.u32);
	// stfs f11,10488(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 10488, temp.u32);
	// bl 0x820e2308
	ctx.lr = 0x821C72D0;
	sub_820E2308(ctx, base);
	// lfs f0,10248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10248);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,10248(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10248, temp.u32);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-27648
	ctx.r3.s64 = ctx.r11.s64 + -27648;
	// bl 0x821247d0
	ctx.lr = 0x821C72EC;
	sub_821247D0(ctx, base);
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

DEFINE_REX_FUNC(sub_821C9D30) {
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
	ctx.lr = 0x821C9D38;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x821c7f28
	ctx.lr = 0x821C9D5C;
	sub_821C7F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821c9d68
	if (!ctx.cr0.eq) goto loc_821C9D68;
	// li r29,23
	r29.s64 = 23;
loc_821C9D68:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// sth r29,88(r30)
	REX_STORE_U16(r30.u32 + 88, r29.u16);
	// blt cr6,0x821c9da0
	if (ctx.cr6.lt) goto loc_821C9DA0;
	// cmpwi cr6,r29,33
	ctx.cr6.compare<int32_t>(r29.s32, 33, ctx.xer);
	// bge cr6,0x821c9da0
	if (!ctx.cr6.lt) goto loc_821C9DA0;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// mulli r10,r29,248
	ctx.r10.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(248));
	// addi r11,r11,-25704
	ctx.r11.s64 = ctx.r11.s64 + -25704;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r10,r11
	r31.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x821c9da4
	goto loc_821C9DA4;
loc_821C9DA0:
	// li r31,0
	r31.s64 = 0;
loc_821C9DA4:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// stw r31,124(r30)
	REX_STORE_U32(r30.u32 + 124, r31.u32);
	// lha r11,136(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 136));
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// addi r28,r10,432
	r28.s64 = ctx.r10.s64 + 432;
	// beq cr6,0x821c9dcc
	if (ctx.cr6.eq) goto loc_821C9DCC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821c9dd0
	if (!ctx.cr6.eq) goto loc_821C9DD0;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x821c9dd0
	goto loc_821C9DD0;
loc_821C9DCC:
	// lwz r11,312(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 312);
loc_821C9DD0:
	// sth r11,98(r30)
	REX_STORE_U16(r30.u32 + 98, ctx.r11.u16);
	// lha r11,134(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 134));
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821c9df0
	if (ctx.cr6.eq) goto loc_821C9DF0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821c9df4
	if (!ctx.cr6.eq) goto loc_821C9DF4;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x821c9df4
	goto loc_821C9DF4;
loc_821C9DF0:
	// lwz r11,312(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 312);
loc_821C9DF4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c2e38
	ctx.lr = 0x821C9E00;
	sub_821C2E38(ctx, base);
	// lha r11,132(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 132));
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821c9e1c
	if (ctx.cr6.eq) goto loc_821C9E1C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821c9e20
	if (!ctx.cr6.eq) goto loc_821C9E20;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x821c9e20
	goto loc_821C9E20;
loc_821C9E1C:
	// lwz r11,312(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 312);
loc_821C9E20:
	// sth r11,94(r30)
	REX_STORE_U16(r30.u32 + 94, ctx.r11.u16);
	// lha r11,130(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 130));
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821c9e40
	if (ctx.cr6.eq) goto loc_821C9E40;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821c9e44
	if (!ctx.cr6.eq) goto loc_821C9E44;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x821c9e44
	goto loc_821C9E44;
loc_821C9E40:
	// lwz r11,312(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 312);
loc_821C9E44:
	// sth r11,96(r30)
	REX_STORE_U16(r30.u32 + 96, ctx.r11.u16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821c8cd0
	ctx.lr = 0x821C9E50;
	sub_821C8CD0(ctx, base);
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x821c9e5c
	if (ctx.cr6.gt) goto loc_821C9E5C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821C9E5C:
	// lhz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 88);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// extsh r9,r26
	ctx.r9.s64 = r26.s16;
	// sth r10,100(r30)
	REX_STORE_U16(r30.u32 + 100, ctx.r10.u16);
	// sth r9,140(r30)
	REX_STORE_U16(r30.u32 + 140, ctx.r9.u16);
	// sth r10,156(r30)
	REX_STORE_U16(r30.u32 + 156, ctx.r10.u16);
	// sth r11,154(r30)
	REX_STORE_U16(r30.u32 + 154, ctx.r11.u16);
	// sth r9,158(r30)
	REX_STORE_U16(r30.u32 + 158, ctx.r9.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821D1470) {
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
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// lis r7,-32165
	ctx.r7.s64 = -2107965440;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r8,13076
	ctx.r6.s64 = ctx.r8.s64 + 13076;
	// stb r11,1824(r10)
	REX_STORE_U8(ctx.r10.u32 + 1824, ctx.r11.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,-32480(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + -32480);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821D14B4;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d14c8
	if (ctx.cr0.eq) goto loc_821D14C8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r4,r11,-8915
	ctx.r4.s64 = ctx.r11.s64 + -8915;
	// bl 0x820e4fe0
	ctx.lr = 0x821D14C8;
	sub_820E4FE0(ctx, base);
loc_821D14C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D1E40) {
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
	// bl 0x821dcdf8
	ctx.lr = 0x821D1E50;
	sub_821DCDF8(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// cmpwi cr6,r3,286
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 286, ctx.xer);
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1835(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1835);
	// blt cr6,0x821d1e7c
	if (ctx.cr6.lt) goto loc_821D1E7C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821d1e74
	if (ctx.cr6.eq) goto loc_821D1E74;
	// li r3,14
	ctx.r3.s64 = 14;
	// b 0x821d1eac
	goto loc_821D1EAC;
loc_821D1E74:
	// li r3,34
	ctx.r3.s64 = 34;
	// b 0x821d1eac
	goto loc_821D1EAC;
loc_821D1E7C:
	// cmpwi cr6,r3,110
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 110, ctx.xer);
	// blt cr6,0x821d1e9c
	if (ctx.cr6.lt) goto loc_821D1E9C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821d1e94
	if (ctx.cr6.eq) goto loc_821D1E94;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x821d1eac
	goto loc_821D1EAC;
loc_821D1E94:
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x821d1eac
	goto loc_821D1EAC;
loc_821D1E9C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// li r3,12
	ctx.r3.s64 = 12;
	// bne cr6,0x821d1eac
	if (!ctx.cr6.eq) goto loc_821D1EAC;
	// li r3,32
	ctx.r3.s64 = 32;
loc_821D1EAC:
	// bl 0x821e12a8
	ctx.lr = 0x821D1EB0;
	sub_821E12A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D4518) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,-7176
	ctx.r11.s64 = ctx.r11.s64 + -7176;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D45C8) {
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
	ctx.lr = 0x821D45D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// addi r7,r9,-7176
	ctx.r7.s64 = ctx.r9.s64 + -7176;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,-7176(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -7176);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r30,-32480(r8)
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + -32480);
	// stw r10,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r3,-7176(r9)
	REX_STORE_U32(ctx.r9.u32 + -7176, ctx.r3.u32);
	// stw r11,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// ble cr6,0x821d460c
	if (!ctx.cr6.gt) goto loc_821D460C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x821afc40
	ctx.lr = 0x821D460C;
	sub_821AFC40(ctx, base);
loc_821D460C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d0b08
	ctx.lr = 0x821D4614;
	sub_821D0B08(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d0ad8
	ctx.lr = 0x821D4620;
	sub_821D0AD8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d0aa8
	ctx.lr = 0x821D462C;
	sub_821D0AA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d0b38
	ctx.lr = 0x821D4638;
	sub_821D0B38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x821f8240
	ctx.lr = 0x821D4650;
	sub_821F8240(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821D6AC8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d6b40
	if (ctx.cr6.eq) goto loc_821D6B40;
	// lbz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// addi r11,r11,22576
	ctx.r11.s64 = ctx.r11.s64 + 22576;
	// addi r10,r9,13128
	ctx.r10.s64 = ctx.r9.s64 + 13128;
	// mulli r9,r8,136
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(136));
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d6b24
	if (!ctx.cr6.eq) goto loc_821D6B24;
	// beq 0x821d6b40
	if (ctx.cr0.eq) goto loc_821D6B40;
	// bl 0x82106460
	ctx.lr = 0x821D6B18;
	sub_82106460(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// stw r3,3864(r11)
	REX_STORE_U32(ctx.r11.u32 + 3864, ctx.r3.u32);
	// b 0x821d6b40
	goto loc_821D6B40;
loc_821D6B24:
	// bne 0x821d6b3c
	if (!ctx.cr0.eq) goto loc_821D6B3C;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821d6b40
	if (ctx.cr6.eq) goto loc_821D6B40;
loc_821D6B3C:
	// bl 0x82100b00
	ctx.lr = 0x821D6B40;
	sub_82100B00(ctx, base);
loc_821D6B40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D8450) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r8,r11,432
	ctx.r8.s64 = ctx.r11.s64 + 432;
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,36(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x821d84cc
	if (ctx.cr6.lt) goto loc_821D84CC;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x821d84cc
	if (ctx.cr6.gt) goto loc_821D84CC;
	// lhz r11,74(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 74);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x821d8498
	if (!ctx.cr6.eq) goto loc_821D8498;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,16628(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16628);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821d84ac
	goto loc_821D84AC;
loc_821D8498:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f2,2356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2356);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821d82d0
	ctx.lr = 0x821D84AC;
	sub_821D82D0(ctx, base);
loc_821D84AC:
	// lha r3,32(r8)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + 32));
	// bl 0x821d8370
	ctx.lr = 0x821D84B4;
	sub_821D8370(ctx, base);
	// lha r11,6(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 6));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
loc_821D84CC:
	// lwz r11,220(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 220);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,5468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5468);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,5468(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 5468, temp.u32);
	// lwz r11,220(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 220);
	// lfs f13,28724(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28724);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5468(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5468);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821d84f8
	if (ctx.cr6.lt) goto loc_821D84F8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821D84F8:
	// stfs f0,5468(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 5468, temp.u32);
	// stfs f0,5480(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 5480, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DCDC0) {
	REX_FUNC_PROLOGUE();
	// li r11,88
	ctx.r11.s64 = 88;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,5128
	ctx.r10.s64 = ctx.r10.s64 + 5128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821DCDD4:
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x821dcde8
	if (ctx.cr6.lt) goto loc_821DCDE8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_821DCDE8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x821dcdd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DCDD4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DCFB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// bgt cr6,0x821dd02c
	if (ctx.cr6.gt) goto loc_821DD02C;
	// beq cr6,0x821dd024
	if (ctx.cr6.eq) goto loc_821DD024;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x821dd01c
	if (ctx.cr6.eq) goto loc_821DD01C;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x821dd014
	if (ctx.cr6.eq) goto loc_821DD014;
	// cmpwi cr6,r3,15
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 15, ctx.xer);
	// beq cr6,0x821dd00c
	if (ctx.cr6.eq) goto loc_821DD00C;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bne cr6,0x821dd05c
	if (!ctx.cr6.eq) goto loc_821DD05C;
	// li r11,4
	ctx.r11.s64 = 4;
loc_821DCFE8:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r10,r10,5128
	ctx.r10.s64 = ctx.r10.s64 + 5128;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
loc_821DD00C:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821dcfe8
	goto loc_821DCFE8;
loc_821DD014:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821dcfe8
	goto loc_821DCFE8;
loc_821DD01C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821dcfe8
	goto loc_821DCFE8;
loc_821DD024:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821dcfe8
	goto loc_821DCFE8;
loc_821DD02C:
	// cmpwi cr6,r3,30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 30, ctx.xer);
	// beq cr6,0x821dd054
	if (ctx.cr6.eq) goto loc_821DD054;
	// cmpwi cr6,r3,31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 31, ctx.xer);
	// beq cr6,0x821dd04c
	if (ctx.cr6.eq) goto loc_821DD04C;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// bne cr6,0x821dd05c
	if (!ctx.cr6.eq) goto loc_821DD05C;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x821dcfe8
	goto loc_821DCFE8;
loc_821DD04C:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x821dcfe8
	goto loc_821DCFE8;
loc_821DD054:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x821dcfe8
	goto loc_821DCFE8;
loc_821DD05C:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E02D0) {
	REX_FUNC_PROLOGUE();
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x821e0280
	sub_821E0280(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E0958) {
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
	ctx.lr = 0x821E0960;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821e0984
	if (!ctx.cr6.eq) goto loc_821E0984;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r28,-32480(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
loc_821E0984:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// addi r3,r11,400
	ctx.r3.s64 = ctx.r11.s64 + 400;
	// bl 0x821af980
	ctx.lr = 0x821E0994;
	sub_821AF980(ctx, base);
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(r30.s32, 256, ctx.xer);
	// blt cr6,0x821e09a8
	if (ctx.cr6.lt) goto loc_821E09A8;
	// srawi r11,r30,8
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	ctx.r11.s64 = r30.s32 >> 8;
	// clrlwi r30,r30,24
	r30.u64 = r30.u32 & 0xFF;
	// clrlwi r29,r11,28
	r29.u64 = ctx.r11.u32 & 0xF;
loc_821E09A8:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r31,r11,320
	r31.s64 = ctx.r11.s64 + 320;
	// rlwimi r10,r29,8,20,23
	ctx.r10.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF0FF);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// clrlwi r11,r10,20
	ctx.r11.u64 = ctx.r10.u32 & 0xFFF;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r6,r8,9124
	ctx.r6.s64 = ctx.r8.s64 + 9124;
	// addi r9,r9,-488
	ctx.r9.s64 = ctx.r9.s64 + -488;
	// addi r8,r10,2336
	ctx.r8.s64 = ctx.r10.s64 + 2336;
	// addi r7,r7,-22768
	ctx.r7.s64 = ctx.r7.s64 + -22768;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821E09F8;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e0a14
	if (ctx.cr0.eq) goto loc_821E0A14;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x821e0a18
	goto loc_821E0A18;
loc_821E0A14:
	// li r9,0
	ctx.r9.s64 = 0;
loc_821E0A18:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,20(r31)
	REX_STORE_U16(r31.u32 + 20, ctx.r11.u16);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// bl 0x821f5538
	ctx.lr = 0x821E0A34;
	sub_821F5538(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821E2340) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r10,2971(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2971);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e23d0
	if (!ctx.cr0.eq) goto loc_821E23D0;
	// lbz r10,2973(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2973);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e23d0
	if (!ctx.cr0.eq) goto loc_821E23D0;
	// lhz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x821e23d0
	if (!ctx.cr6.eq) goto loc_821E23D0;
	// lha r10,30(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x821e2380
	if (ctx.cr6.lt) goto loc_821E2380;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// ble cr6,0x821e23d0
	if (!ctx.cr6.gt) goto loc_821E23D0;
loc_821E2380:
	// lbz r10,6(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e23d0
	if (!ctx.cr0.eq) goto loc_821E23D0;
	// lbz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lwz r11,2980(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2980);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821e23d0
	if (!ctx.cr6.eq) goto loc_821E23D0;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,5608
	ctx.r9.s64 = ctx.r11.s64 + 5608;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// stw r11,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// adde r11,r8,r7
	temp.u8 = (ctx.r8.u32 + ctx.r7.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_821E23D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E46D8) {
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
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// stw r4,256(r3)
	REX_STORE_U32(ctx.r3.u32 + 256, ctx.r4.u32);
	// addi r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 + 112;
	// stw r7,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r7.u32);
	// li r5,770
	ctx.r5.s64 = 770;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// addi r6,r11,-5144
	ctx.r6.s64 = ctx.r11.s64 + -5144;
	// sth r5,16(r3)
	REX_STORE_U16(ctx.r3.u32 + 16, ctx.r5.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r3,192
	ctx.r9.s64 = ctx.r3.s64 + 192;
	// li r4,2
	ctx.r4.s64 = 2;
	// std r11,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, ctx.r11.u64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// sth r11,88(r3)
	REX_STORE_U16(ctx.r3.u32 + 88, ctx.r11.u16);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stb r4,90(r3)
	REX_STORE_U8(ctx.r3.u32 + 90, ctx.r4.u8);
	// stw r9,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// li r30,0
	r30.s64 = 0;
	// lwzx r9,r8,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// li r8,196
	ctx.r8.s64 = 196;
	// stb r9,104(r3)
	REX_STORE_U8(ctx.r3.u32 + 104, ctx.r9.u8);
	// stfs f1,112(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f31,1992(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1992);
	f31.f64 = double(temp.f32);
	// stb r11,105(r3)
	REX_STORE_U8(ctx.r3.u32 + 105, ctx.r11.u8);
	// lfs f0,16088(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16088);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,106(r3)
	REX_STORE_U8(ctx.r3.u32 + 106, r30.u8);
	// stfs f2,116(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stb r30,91(r3)
	REX_STORE_U8(ctx.r3.u32 + 91, r30.u8);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stb r30,109(r3)
	REX_STORE_U8(ctx.r3.u32 + 109, r30.u8);
	// stfs f31,124(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stb r8,186(r3)
	REX_STORE_U8(ctx.r3.u32 + 186, ctx.r8.u8);
	// stfs f31,144(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f31,148(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// addi r4,r3,164
	ctx.r4.s64 = ctx.r3.s64 + 164;
	// stfs f31,152(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stfs f31,156(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// lbz r6,104(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 104);
	// bl 0x821e3550
	ctx.lr = 0x821E479C;
	sub_821E3550(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// stfs f31,208(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// stfs f31,216(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 216, temp.u32);
	// stfs f31,228(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 228, temp.u32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16276(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16276);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 212, temp.u32);
	// stfs f0,224(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 224, temp.u32);
	// stfs f31,232(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 232, temp.u32);
	// stfs f31,240(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 240, temp.u32);
	// stfs f31,244(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 244, temp.u32);
	// stfs f31,248(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 248, temp.u32);
	// stb r30,188(r31)
	REX_STORE_U8(r31.u32 + 188, r30.u8);
	// stfs f13,168(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// stfs f31,176(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// stfs f31,180(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EAD40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r4,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1823(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1823);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821eadbc
	if (!ctx.cr0.eq) goto loc_821EADBC;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r11,r11,-528
	ctx.r11.s64 = ctx.r11.s64 + -528;
	// lbz r11,7(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821eadbc
	if (ctx.cr0.eq) goto loc_821EADBC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821eaa48
	ctx.lr = 0x821EADB0;
	sub_821EAA48(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r3,r11,10016
	ctx.r3.s64 = ctx.r11.s64 + 10016;
	// bl 0x821fe738
	ctx.lr = 0x821EADBC;
	sub_821FE738(ctx, base);
loc_821EADBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EC2E0) {
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
	// lis r31,-32166
	r31.s64 = -2108030976;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,7712(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 7712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ec360
	if (!ctx.cr6.eq) goto loc_821EC360;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,17376
	ctx.r6.s64 = ctx.r11.s64 + 17376;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r4,r4,49152
	ctx.r4.u64 = ctx.r4.u64 | 49152;
	// bl 0x821f7d50
	ctx.lr = 0x821EC324;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ec348
	if (ctx.cr0.eq) goto loc_821EC348;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,7712(r31)
	REX_STORE_U32(r31.u32 + 7712, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,17356
	ctx.r11.s64 = ctx.r11.s64 + 17356;
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x821ec350
	goto loc_821EC350;
loc_821EC348:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7712(r31)
	REX_STORE_U32(r31.u32 + 7712, ctx.r11.u32);
loc_821EC350:
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// stb r11,1813(r10)
	REX_STORE_U8(ctx.r10.u32 + 1813, ctx.r11.u8);
loc_821EC360:
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

DEFINE_REX_FUNC(sub_821EF1E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r5,r11,13128
	ctx.r5.s64 = ctx.r11.s64 + 13128;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,-32032
	ctx.r11.s64 = ctx.r11.s64 + -32032;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lbz r9,1809(r5)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + 1809);
	// addi r7,r11,68
	ctx.r7.s64 = ctx.r11.s64 + 68;
	// lwz r8,1852(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 1852);
	// addi r6,r11,60
	ctx.r6.s64 = ctx.r11.s64 + 60;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// stb r9,1809(r5)
	REX_STORE_U8(ctx.r5.u32 + 1809, ctx.r9.u8);
	// stw r10,1852(r5)
	REX_STORE_U32(ctx.r5.u32 + 1852, ctx.r10.u32);
loc_821EF218:
	// ldu r10,8(r7)
	ea = 8 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r7.u32 = ea;
	// stdu r10,8(r6)
	ea = 8 + ctx.r6.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r6.u32 = ea;
	// bdnz 0x821ef218
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EF218;
	// lwz r10,324(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// lwz r9,328(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 328);
	// stw r10,188(r11)
	REX_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// stw r9,192(r11)
	REX_STORE_U32(ctx.r11.u32 + 192, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F04D8) {
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
	// lwz r11,348(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f05a8
	if (ctx.cr6.eq) goto loc_821F05A8;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x821f05a8
	if (ctx.cr6.eq) goto loc_821F05A8;
	// lbz r11,372(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 372);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,356
	ctx.r3.s64 = ctx.r11.s64 + 356;
	// bl 0x822a3c40
	ctx.lr = 0x821F0514;
	sub_822A3C40(ctx, base);
	// lwa r11,336(r31)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r31.u32 + 336));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f3,352(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 352);
	ctx.f3.f64 = double(temp.f32);
	// lwz r9,328(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 328);
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 332);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lwa r8,340(r31)
	ctx.r8.s64 = int32_t(REX_LOAD_U32(r31.u32 + 340));
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f2,f11
	ctx.f2.f64 = double(float(ctx.f11.f64));
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// frsp f4,f12
	ctx.f4.f64 = double(float(ctx.f12.f64));
	// frsp f5,f13
	ctx.f5.f64 = double(float(ctx.f13.f64));
	// bl 0x821f03a0
	ctx.lr = 0x821F0570;
	sub_821F03A0(ctx, base);
	// lbz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 372);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r3,r11,356
	ctx.r3.s64 = ctx.r11.s64 + 356;
	// bl 0x822a3c80
	ctx.lr = 0x821F0584;
	sub_822A3C80(ctx, base);
	// lbz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 372);
	// li r10,255
	ctx.r10.s64 = 255;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r10.u32);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stb r11,372(r31)
	REX_STORE_U8(r31.u32 + 372, ctx.r11.u8);
loc_821F05A8:
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

DEFINE_REX_FUNC(sub_821F3E08) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F3E30) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F3E38) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f3e58
	if (ctx.cr6.eq) goto loc_821F3E58;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x821f3e58
	if (ctx.cr6.lt) goto loc_821F3E58;
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// blr 
	return;
loc_821F3E58:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F4FD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821F4FD8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// ble cr6,0x821f5034
	if (!ctx.cr6.gt) goto loc_821F5034;
	// addi r29,r3,-4
	r29.s64 = ctx.r3.s64 + -4;
loc_821F4FF8:
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// srawi r5,r31,2
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3) != 0);
	ctx.r5.s64 = r31.s32 >> 2;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stwx r9,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x821f45c0
	ctx.lr = 0x821F5024;
	sub_821F45C0(ctx, base);
	// rlwinm r10,r31,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bgt cr6,0x821f4ff8
	if (ctx.cr6.gt) goto loc_821F4FF8;
loc_821F5034:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821F7C50) {
	REX_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
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

DEFINE_REX_FUNC(sub_821F8230) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// b 0x821f8128
	sub_821F8128(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F82E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f8350
	if (ctx.cr6.eq) goto loc_821F8350;
	// std r4,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, ctx.r4.u64);
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// sth r5,88(r3)
	REX_STORE_U16(ctx.r3.u32 + 88, ctx.r5.u16);
	// bne cr6,0x821f8310
	if (!ctx.cr6.eq) goto loc_821F8310;
	// addi r6,r11,32
	ctx.r6.s64 = ctx.r11.s64 + 32;
loc_821F8310:
	// stw r6,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// li r30,0
	r30.s64 = 0;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r31,108(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// stb r9,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r9.u8);
	// stb r10,25(r11)
	REX_STORE_U8(ctx.r11.u32 + 25, ctx.r10.u8);
	// stb r6,26(r11)
	REX_STORE_U8(ctx.r11.u32 + 26, ctx.r6.u8);
	// stb r5,10(r11)
	REX_STORE_U8(ctx.r11.u32 + 10, ctx.r5.u8);
	// stb r30,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, r30.u8);
	// stb r4,29(r11)
	REX_STORE_U8(ctx.r11.u32 + 29, ctx.r4.u8);
	// stb r31,30(r11)
	REX_STORE_U8(ctx.r11.u32 + 30, r31.u8);
loc_821F8350:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F9C68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fctiwz f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwa r11,-12(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -12));
	// fctiwz f0,f1
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwa r10,-12(r1)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -12));
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lbz r9,54(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 54);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// subfic r11,r10,255
	ctx.xer.ca = ctx.r10.u32 <= 255;
	ctx.r11.u64 = static_cast<uint64_t>(255) - ctx.r10.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f3,68(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stw r10,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// stb r11,53(r3)
	REX_STORE_U8(ctx.r3.u32 + 53, ctx.r11.u8);
	// stb r8,73(r3)
	REX_STORE_U8(ctx.r3.u32 + 73, ctx.r8.u8);
	// stw r4,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r4.u32);
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// fsubs f0,f2,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// bge cr6,0x821f9ce4
	if (!ctx.cr6.lt) goto loc_821F9CE4;
	// li r11,128
	ctx.r11.s64 = 128;
	// stb r11,55(r3)
	REX_STORE_U8(ctx.r3.u32 + 55, ctx.r11.u8);
loc_821F9CE4:
	// lbz r11,14(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 14);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stb r11,14(r3)
	REX_STORE_U8(ctx.r3.u32 + 14, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FE670) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	// bl 0x822d4f38
	ctx.lr = 0x821FE688;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// lbz r11,1823(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1823);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821fe6e4
	if (!ctx.cr0.eq) goto loc_821FE6E4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82202838
	ctx.lr = 0x821FE6C4;
	sub_82202838(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f28.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821fe550
	ctx.lr = 0x821FE6E4;
	sub_821FE550(ctx, base);
loc_821FE6E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f84
	ctx.lr = 0x821FE6F0;
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

DEFINE_REX_FUNC(sub_821FF870) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x822091c8
	sub_822091C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821FFC00) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,244(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,248(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 248);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f1,240(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ff9d0
	ctx.lr = 0x821FFC3C;
	sub_821FF9D0(ctx, base);
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,48(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 48, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 52, temp.u32);
	// lfs f13,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 56, temp.u32);
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 60, temp.u32);
	// bl 0x820e02d8
	ctx.lr = 0x821FFC6C;
	sub_820E02D8(ctx, base);
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

DEFINE_REX_FUNC(sub_822021F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,692(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 692, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822022C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,708(r3)
	REX_STORE_U32(ctx.r3.u32 + 708, ctx.r11.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lfs f0,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,664(r3)
	REX_STORE_U32(ctx.r3.u32 + 664, ctx.r9.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,684(r3)
	REX_STORE_U32(ctx.r3.u32 + 684, ctx.r11.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,680(r3)
	REX_STORE_U32(ctx.r3.u32 + 680, ctx.r11.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r8,r3,244
	ctx.r8.s64 = ctx.r3.s64 + 244;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,672(r3)
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r11.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stfs f0,240(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// stw r9,676(r3)
	REX_STORE_U32(ctx.r3.u32 + 676, ctx.r9.u32);
	// stw r11,704(r3)
	REX_STORE_U32(ctx.r3.u32 + 704, ctx.r11.u32);
loc_8220231C:
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bge cr6,0x82202328
	if (!ctx.cr6.lt) goto loc_82202328;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_82202328:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8220231c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8220231C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82204B00) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82204b4c
	if (!ctx.cr6.lt) goto loc_82204B4C;
	// fneg f0,f1
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bge cr6,0x82204b24
	if (!ctx.cr6.lt) goto loc_82204B24;
loc_82204B1C:
	// fsubs f1,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// blr 
	return;
loc_82204B24:
	// fdivs f13,f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f2.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwa r11,-12(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -12));
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fnmsubs f0,f13,f2,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f2.f64, -ctx.f0.f64)));
	// b 0x82204b1c
	goto loc_82204B1C;
loc_82204B4C:
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// fdivs f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f2.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwa r11,-12(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -12));
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f1,f0,f2,f1
	ctx.f1.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f2.f64, -ctx.f1.f64)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822063A0) {
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
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r4,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r4.u32);
	// addi r4,r3,21720
	ctx.r4.s64 = ctx.r3.s64 + 21720;
	// stw r5,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r5.u32);
	// stw r6,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r6.u32);
	// stw r7,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r7.u32);
	// stw r4,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// stw r8,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r8.u32);
	// stw r9,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r9.u32);
	// stw r10,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x822063f0
	if (ctx.cr6.eq) goto loc_822063F0;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
loc_822063F0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822060d0
	ctx.lr = 0x822063FC;
	sub_822060D0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82208750) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,65001
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65001, ctx.xer);
	// bne cr6,0x82208788
	if (!ctx.cr6.eq) goto loc_82208788;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8220a620
	ctx.lr = 0x82208784;
	sub_8220A620(ctx, base);
	// b 0x82208810
	goto loc_82208810;
loc_82208788:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x822087b8
	if (!ctx.cr6.eq) goto loc_822087B8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82208794:
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82208794
	if (!ctx.cr6.eq) goto loc_82208794;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r31,r10,1
	r31.s64 = ctx.r10.s64 + 1;
	// b 0x822087bc
	goto loc_822087BC;
loc_822087B8:
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_822087BC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822087cc
	if (!ctx.cr6.eq) goto loc_822087CC;
loc_822087C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82208810
	goto loc_82208810;
loc_822087CC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x82208804
	if (ctx.cr6.lt) goto loc_82208804;
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r31.s32, ctx.xer);
	// blt cr6,0x82208804
	if (ctx.cr6.lt) goto loc_82208804;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x824d410c
	ctx.lr = 0x822087F4;
	__imp__RtlMultiByteToUnicodeN(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822087c4
	if (!ctx.cr0.lt) goto loc_822087C4;
	// bl 0x824d40fc
	ctx.lr = 0x82208800;
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x82208808
	goto loc_82208808;
loc_82208804:
	// li r3,122
	ctx.r3.s64 = 122;
loc_82208808:
	// bl 0x8220a618
	ctx.lr = 0x8220880C;
	sub_8220A618(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82208810:
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

DEFINE_REX_FUNC(sub_8220BE00) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,1588(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1588);
	// bl 0x824d433c
	ctx.lr = 0x8220BE20;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220be60
	if (ctx.cr0.lt) goto loc_8220BE60;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824d434c
	ctx.lr = 0x8220BE30;
	__imp__KeQueryBasePriorityThread(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bne cr6,0x8220be44
	if (!ctx.cr6.eq) goto loc_8220BE44;
	// li r31,15
	r31.s64 = 15;
	// b 0x8220be50
	goto loc_8220BE50;
loc_8220BE44:
	// cmpwi cr6,r31,-16
	ctx.cr6.compare<int32_t>(r31.s32, -16, ctx.xer);
	// bne cr6,0x8220be50
	if (!ctx.cr6.eq) goto loc_8220BE50;
	// li r31,-15
	r31.s64 = -15;
loc_8220BE50:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824d431c
	ctx.lr = 0x8220BE58;
	__imp__ObDereferenceObject(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8220be6c
	goto loc_8220BE6C;
loc_8220BE60:
	// bl 0x8220c390
	ctx.lr = 0x8220BE64;
	sub_8220C390(ctx, base);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_8220BE6C:
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

DEFINE_REX_FUNC(sub_8220F8C8) {
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
	// bl 0x8220fda0
	ctx.lr = 0x8220F8E0;
	sub_8220FDA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8220d670
	ctx.lr = 0x8220F8EC;
	sub_8220D670(ctx, base);
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

DEFINE_REX_FUNC(sub_82210258) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwimi r11,r4,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,12284(r3)
	REX_STORE_U32(ctx.r3.u32 + 12284, ctx.r11.u32);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,12280(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12280);
	// bne 0x82210290
	if (!ctx.cr0.eq) goto loc_82210290;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82210290:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x822102a0
	if (!ctx.cr6.eq) goto loc_822102A0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_822102A0:
	// stw r11,10588(r3)
	REX_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10552(r3)
	REX_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	REX_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10592(r3)
	REX_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210F08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12824(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12824);
	// li r12,1
	ctx.r12.s64 = 1;
	// lwz r9,10460(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 10460);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// stw r4,12300(r3)
	REX_STORE_U32(ctx.r3.u32 + 12300, ctx.r4.u32);
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

DEFINE_REX_FUNC(sub_822118E0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,10696(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 10696);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822119E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwimi r11,r4,5,26,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0x20) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFDF);
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

DEFINE_REX_FUNC(sub_822122B0) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lhzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82212470) {
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

DEFINE_REX_FUNC(sub_82212B78) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822d4f30
	ctx.lr = 0x82212B8C;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12816(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12816);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// fmr f29,f5
	f29.f64 = ctx.f5.f64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmr f28,f6
	f28.f64 = ctx.f6.f64;
	// bne 0x82212bc0
	if (!ctx.cr0.eq) goto loc_82212BC0;
	// lwz r9,12832(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12832);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82212db4
	if (ctx.cr6.eq) goto loc_82212DB4;
loc_82212BC0:
	// lbz r11,11068(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r8,r11,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82212bd4
	if (ctx.cr0.eq) goto loc_82212BD4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82212c60
	goto loc_82212C60;
loc_82212BD4:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82212c58
	if (ctx.cr0.eq) goto loc_82212C58;
	// lwz r11,13104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13104);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82212bf0
	if (ctx.cr6.eq) goto loc_82212BF0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82212c58
	if (!ctx.cr6.eq) goto loc_82212C58;
loc_82212BF0:
	// lwz r11,12820(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12820);
	// lwz r10,13108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13108);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82212c08
	if (ctx.cr6.eq) goto loc_82212C08;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82212c58
	if (!ctx.cr6.eq) goto loc_82212C58;
loc_82212C08:
	// lwz r11,12824(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12824);
	// lwz r10,13112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82212c20
	if (ctx.cr6.eq) goto loc_82212C20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82212c58
	if (!ctx.cr6.eq) goto loc_82212C58;
loc_82212C20:
	// lwz r11,12828(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12828);
	// lwz r10,13116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13116);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82212c38
	if (ctx.cr6.eq) goto loc_82212C38;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82212c58
	if (!ctx.cr6.eq) goto loc_82212C58;
loc_82212C38:
	// lwz r11,12832(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12832);
	// lwz r10,13120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13120);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82212c50
	if (ctx.cr6.eq) goto loc_82212C50;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82212c58
	if (!ctx.cr6.eq) goto loc_82212C58;
loc_82212C50:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82212c5c
	goto loc_82212C5C;
loc_82212C58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82212C5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82212C60:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82212c74
	if (ctx.cr0.eq) goto loc_82212C74;
	// lwz r11,13556(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13556);
	// lwz r7,13560(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 13560);
	// b 0x82212c88
	goto loc_82212C88;
loc_82212C74:
	// lwz r10,36(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// rlwinm r11,r10,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// rlwinm r10,r10,29,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
loc_82212C88:
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(f31.f64) ? int64_t(0x80000000U) : (f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f31.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// fctiwz f0,f3
	ctx.f0.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f0,f30
	ctx.f0.s64 = std::isnan(f30.f64) ? int64_t(0x80000000U) : (f30.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f30.f64));
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82212cbc
	if (!ctx.cr6.lt) goto loc_82212CBC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82212CBC:
	// fctiwz f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82212cd8
	if (ctx.cr6.lt) goto loc_82212CD8;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82212CD8:
	// subf. r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r10,r8,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r8.u64;
	// blt 0x82212cec
	if (ctx.cr0.lt) goto loc_82212CEC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82212cf4
	if (!ctx.cr6.lt) goto loc_82212CF4;
loc_82212CEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82212CF4:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// stfs f31,13024(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 13024, temp.u32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// stfs f30,13028(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 13028, temp.u32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r11,0
	ctx.r11.s64 = 0;
	// frsp f27,f0
	f27.f64 = double(float(ctx.f0.f64));
	// stfs f29,13040(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 13040, temp.u32);
	// fcfid f0,f13
	ctx.f0.f64 = double(ctx.f13.s64);
	// stfs f28,13044(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 13044, temp.u32);
	// stfs f27,13036(r31)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r31.u32 + 13036, temp.u32);
	// stw r11,13048(r31)
	REX_STORE_U32(r31.u32 + 13048, ctx.r11.u32);
	// addi r4,r31,13052
	ctx.r4.s64 = r31.s64 + 13052;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// frsp f26,f0
	f26.f64 = double(float(ctx.f0.f64));
	// stfs f26,13032(r31)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r31.u32 + 13032, temp.u32);
	// bl 0x82212488
	ctx.lr = 0x82212D48;
	sub_82212488(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f28.f64 - f29.f64));
	// stfs f0,10520(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10520, temp.u32);
	// stfs f29,10524(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 10524, temp.u32);
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f26,f0
	ctx.f13.f64 = double(float(f26.f64 * ctx.f0.f64));
	// stfs f13,10504(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 10504, temp.u32);
	// fmuls f0,f27,f0
	ctx.f0.f64 = double(float(f27.f64 * ctx.f0.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f13,10508(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 10508, temp.u32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,10512(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 10512, temp.u32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f0,10516(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10516, temp.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_82212DB4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822d4f7c
	ctx.lr = 0x82212DC0;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221F868) {
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
	ctx.lr = 0x8221F870;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// rlwinm r10,r4,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20000;
	// li r16,0
	r16.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r15,r11
	r15.u64 = ctx.r11.u64;
	// stw r16,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r16.u32);
	// beq cr6,0x8221f8b4
	if (ctx.cr6.eq) goto loc_8221F8B4;
	// bl 0x8221e1b0
	ctx.lr = 0x8221F8B0;
	sub_8221E1B0(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
loc_8221F8B4:
	// lwz r30,13072(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 13072);
	// lwz r20,12240(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 12240);
	// lwz r29,13068(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 13068);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822201dc
	if (ctx.cr6.eq) goto loc_822201DC;
	// lwz r11,896(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 896);
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// mr r23,r16
	r23.u64 = r16.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// li r22,5
	r22.s64 = 5;
	// lis r21,4096
	r21.s64 = 268435456;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// ori r14,r10,9984
	r14.u64 = ctx.r10.u64 | 9984;
	// addi r25,r11,872
	r25.s64 = ctx.r11.s64 + 872;
	// bne cr6,0x8221f9d0
	if (!ctx.cr6.eq) goto loc_8221F9D0;
	// lbz r11,11071(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11071);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221f934
	if (ctx.cr0.eq) goto loc_8221F934;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8221f914
	if (!ctx.cr6.gt) goto loc_8221F914;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x8221F914;
	sub_82215008(ctx, base);
loc_8221F914:
	// li r11,1480
	ctx.r11.s64 = 1480;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r11,11071(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11071);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// stb r11,11071(r31)
	REX_STORE_U8(r31.u32 + 11071, ctx.r11.u8);
loc_8221F934:
	// lwz r11,872(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 872);
	// mr r27,r16
	r27.u64 = r16.u64;
	// mr r18,r16
	r18.u64 = r16.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r19,r16
	r19.u64 = r16.u64;
	// beq 0x8221f95c
	if (ctx.cr0.eq) goto loc_8221F95C;
	// lwz r11,904(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 904);
	// li r23,1
	r23.s64 = 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r25,r11,872
	r25.s64 = ctx.r11.s64 + 872;
loc_8221F95C:
	// lbz r11,11071(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11071);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221f980
	if (ctx.cr0.eq) goto loc_8221F980;
	// lwz r11,10372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10372);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r11,r11,0,16,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r17,r17,r12
	r17.u64 = r17.u64 | ctx.r12.u64;
	// stw r11,10372(r31)
	REX_STORE_U32(r31.u32 + 10372, ctx.r11.u32);
loc_8221F980:
	// lwz r11,10580(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10580);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x8221f9a0
	if (ctx.cr6.eq) goto loc_8221F9A0;
	// rlwimi r11,r22,0,29,31
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// oris r17,r17,8
	r17.u64 = r17.u64 | 524288;
	// stw r11,10580(r31)
	REX_STORE_U32(r31.u32 + 10580, ctx.r11.u32);
	// ori r17,r17,8
	r17.u64 = r17.u64 | 8;
loc_8221F9A0:
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r28,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r28.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8221F9B0:
	// lwz r11,13904(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13904);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221fb64
	if (!ctx.cr6.eq) goto loc_8221FB64;
	// lwz r11,872(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 872);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221fb64
	if (ctx.cr0.eq) goto loc_8221FB64;
	// li r3,245
	ctx.r3.s64 = 245;
	// bl 0x824d45bc
	ctx.lr = 0x8221F9D0;
	__imp__KeBugCheck(ctx, base);
loc_8221F9D0:
	// lwz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 64);
	// rlwinm r10,r17,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x100000;
	// lbz r9,11070(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 11070);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lbz r8,11071(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 11071);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// addi r27,r11,40
	r27.s64 = ctx.r11.s64 + 40;
	// lwz r18,48(r11)
	r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r16,52(r11)
	r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r11,r18,0,1,3
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0x70000000;
	// mr r19,r18
	r19.u64 = r18.u64;
	// subfc r11,r11,r21
	ctx.xer.ca = r21.u32 >= ctx.r11.u32;
	ctx.r11.u64 = r21.u64 - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r10,r11,3,21,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// rlwinm r11,r11,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FE;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwimi r9,r10,0,28,28
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF7);
	// rlwimi r8,r11,0,30,30
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFD);
	// stb r9,11070(r31)
	REX_STORE_U8(r31.u32 + 11070, ctx.r9.u8);
	// stb r8,11071(r31)
	REX_STORE_U8(r31.u32 + 11071, ctx.r8.u8);
	// beq cr6,0x8221faf8
	if (ctx.cr6.eq) goto loc_8221FAF8;
	// addi r4,r29,40
	ctx.r4.s64 = r29.s64 + 40;
	// lwz r5,24(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221f678
	ctx.lr = 0x8221FA3C;
	sub_8221F678(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8221fa54
	if (!ctx.cr6.gt) goto loc_8221FA54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x8221FA54;
	sub_82215008(ctx, base);
loc_8221FA54:
	// stwu r14,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r14.u32);
	ctx.r3.u32 = ea;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// lwz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 64);
	// ori r17,r17,16384
	r17.u64 = r17.u64 | 16384;
	// lwz r10,24(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 24);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,3,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFFFFE;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 64);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lbz r11,11071(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11071);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// stw r11,10536(r31)
	REX_STORE_U32(r31.u32 + 10536, ctx.r11.u32);
	// beq 0x8221fad4
	if (ctx.cr0.eq) goto loc_8221FAD4;
	// lwz r11,12816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12816);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r17,r17,r12
	r17.u64 = r17.u64 | ctx.r12.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,10372(r31)
	REX_STORE_U32(r31.u32 + 10372, ctx.r11.u32);
loc_8221FAD4:
	// lwz r11,10580(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10580);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x8221faf8
	if (ctx.cr6.eq) goto loc_8221FAF8;
	// li r10,1
	ctx.r10.s64 = 1;
	// oris r17,r17,8
	r17.u64 = r17.u64 | 524288;
	// rlwimi r11,r10,2,29,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// ori r17,r17,8
	r17.u64 = r17.u64 | 8;
	// stw r11,10580(r31)
	REX_STORE_U32(r31.u32 + 10580, ctx.r11.u32);
loc_8221FAF8:
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lwz r7,20(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r6,20(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 20);
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// lwz r11,-7304(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -7304);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8221fb2c
	if (!ctx.cr0.eq) goto loc_8221FB2C;
	// ori r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 | 1;
	// lis r11,6
	ctx.r11.s64 = 393216;
	// stw r8,-7304(r10)
	REX_STORE_U32(ctx.r10.u32 + -7304, ctx.r8.u32);
	// ori r11,r11,1023
	ctx.r11.u64 = ctx.r11.u64 | 1023;
	// stw r11,-7308(r9)
	REX_STORE_U32(ctx.r9.u32 + -7308, ctx.r11.u32);
	// b 0x8221fb30
	goto loc_8221FB30;
loc_8221FB2C:
	// lwz r11,-7308(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -7308);
loc_8221FB30:
	// and r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 & ctx.r11.u64;
	// lwz r9,13904(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 13904);
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r28,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r28.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bne cr6,0x8221f9b0
	if (!ctx.cr6.eq) goto loc_8221F9B0;
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 40);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221f9b0
	if (ctx.cr0.eq) goto loc_8221F9B0;
	// li r3,245
	ctx.r3.s64 = 245;
	// bl 0x824d45bc
	ctx.lr = 0x8221FB64;
	__imp__KeBugCheck(ctx, base);
loc_8221FB64:
	// lwz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 8);
	// lbz r11,11068(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// lwz r26,10580(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 10580);
	// lwz r24,12(r25)
	r24.u64 = REX_LOAD_U32(r25.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r26
	r29.u64 = r26.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq 0x8221fc30
	if (ctx.cr0.eq) goto loc_8221FC30;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8221fbc8
	if (ctx.cr6.eq) goto loc_8221FBC8;
	// lwz r11,10556(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10556);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221fbcc
	if (!ctx.cr0.eq) goto loc_8221FBCC;
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8221fbcc
	if (!ctx.cr0.eq) goto loc_8221FBCC;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221fbcc
	if (!ctx.cr0.eq) goto loc_8221FBCC;
	// lbz r11,11071(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11071);
	// li r19,0
	r19.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stb r11,11071(r31)
	REX_STORE_U8(r31.u32 + 11071, ctx.r11.u8);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_8221FBC8:
	// rlwimi r29,r22,0,29,31
	r29.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x7) | (r29.u64 & 0xFFFFFFFFFFFFFFF8);
loc_8221FBCC:
	// rlwinm r11,r17,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x40000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8221fbe8
	if (ctx.cr6.eq) goto loc_8221FBE8;
	// or r11,r10,r19
	ctx.r11.u64 = ctx.r10.u64 | r19.u64;
	// or r10,r24,r16
	ctx.r10.u64 = r24.u64 | r16.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_8221FBE8:
	// lbz r11,11071(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11071);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221fc0c
	if (ctx.cr0.eq) goto loc_8221FC0C;
	// clrlwi r10,r29,29
	ctx.r10.u64 = r29.u32 & 0x7;
	// lwz r11,10372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10372);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bne cr6,0x8221fc08
	if (!ctx.cr6.eq) goto loc_8221FC08;
	// rlwinm r11,r11,0,16,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
loc_8221FC08:
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_8221FC0C:
	// lwz r11,13076(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13076);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8221fc24
	if (!ctx.cr6.eq) goto loc_8221FC24;
	// rlwinm r11,r17,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x8;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8221fc30
	if (ctx.cr6.eq) goto loc_8221FC30;
loc_8221FC24:
	// stw r29,13076(r31)
	REX_STORE_U32(r31.u32 + 13076, r29.u32);
	// ori r17,r17,8
	r17.u64 = r17.u64 | 8;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
loc_8221FC30:
	// rlwinm r10,r19,0,1,3
	ctx.r10.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0x70000000;
	// lbz r9,11071(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 11071);
	// lbz r11,11070(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11070);
	// subfc r10,r10,r21
	ctx.xer.ca = r21.u32 >= ctx.r10.u32;
	ctx.r10.u64 = r21.u64 - ctx.r10.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm. r7,r11,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwimi r10,r9,0,24,30
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF01);
	// stb r10,11071(r31)
	REX_STORE_U8(r31.u32 + 11071, ctx.r10.u8);
	// bne 0x8221fd8c
	if (!ctx.cr0.eq) goto loc_8221FD8C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8221fd8c
	if (!ctx.cr6.eq) goto loc_8221FD8C;
	// rlwinm r11,r17,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x80000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8221fdd4
	if (ctx.cr6.eq) goto loc_8221FDD4;
	// addi r28,r30,872
	r28.s64 = r30.s64 + 872;
	// lwz r5,32(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8221f678
	ctx.lr = 0x8221FC88;
	sub_8221F678(ctx, base);
	// lbz r11,11070(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11070);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// andi. r10,r11,191
	ctx.r10.u64 = ctx.r11.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,11070(r31)
	REX_STORE_U8(r31.u32 + 11070, ctx.r10.u8);
	// beq cr6,0x8221fd50
	if (ctx.cr6.eq) goto loc_8221FD50;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221fd50
	if (!ctx.cr0.eq) goto loc_8221FD50;
	// lbz r11,11068(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221fcc0
	if (ctx.cr0.eq) goto loc_8221FCC0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8221fdb8
	goto loc_8221FDB8;
loc_8221FCC0:
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8221f728
	ctx.lr = 0x8221FCD0;
	sub_8221F728(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8221fce0
	if (ctx.cr0.eq) goto loc_8221FCE0;
	// mr r15,r23
	r15.u64 = r23.u64;
	// b 0x8221fd04
	goto loc_8221FD04;
loc_8221FCE0:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221f520
	ctx.lr = 0x8221FD04;
	sub_8221F520(ctx, base);
loc_8221FD04:
	// xor r11,r29,r26
	ctx.r11.u64 = r29.u64 ^ r26.u64;
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221fdd4
	if (ctx.cr0.eq) goto loc_8221FDD4;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221fdd4
	if (ctx.cr0.eq) goto loc_8221FDD4;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221f728
	ctx.lr = 0x8221FD30;
	sub_8221F728(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8221fdd4
	if (ctx.cr0.eq) goto loc_8221FDD4;
	// lbz r11,11070(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11070);
loc_8221FD3C:
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stb r11,11070(r31)
	REX_STORE_U8(r31.u32 + 11070, ctx.r11.u8);
	// b 0x8221fdd4
	goto loc_8221FDD4;
loc_8221FD50:
	// mulli r11,r23,416
	ctx.r11.s64 = static_cast<int64_t>(r23.u64 * static_cast<uint64_t>(416));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// xor r9,r29,r26
	ctx.r9.u64 = r29.u64 ^ r26.u64;
	// mr r15,r23
	r15.u64 = r23.u64;
	// clrlwi. r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ld r8,48(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// std r8,12264(r31)
	REX_STORE_U64(r31.u32 + 12264, ctx.r8.u64);
	// ld r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// std r11,12272(r31)
	REX_STORE_U64(r31.u32 + 12272, ctx.r11.u64);
	// beq 0x8221fdd4
	if (ctx.cr0.eq) goto loc_8221FDD4;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221fdd4
	if (ctx.cr0.eq) goto loc_8221FDD4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8221fd3c
	goto loc_8221FD3C;
loc_8221FD8C:
	// rlwinm r10,r17,0,11,12
	ctx.r10.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x180000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8221fdd4
	if (ctx.cr6.eq) goto loc_8221FDD4;
	// andi. r11,r11,191
	ctx.r11.u64 = ctx.r11.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,11070(r31)
	REX_STORE_U8(r31.u32 + 11070, ctx.r11.u8);
	// addi r4,r30,872
	ctx.r4.s64 = r30.s64 + 872;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,32(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 32);
	// bl 0x8221f678
	ctx.lr = 0x8221FDB0;
	sub_8221F678(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8221FDB8:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8221f520
	ctx.lr = 0x8221FDD4;
	sub_8221F520(ctx, base);
loc_8221FDD4:
	// rlwinm r11,r17,0,11,12
	ctx.r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x180000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8221fe48
	if (ctx.cr6.eq) goto loc_8221FE48;
	// or r9,r24,r16
	ctx.r9.u64 = r24.u64 | r16.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,11070(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 11070);
	// oris r17,r17,1
	r17.u64 = r17.u64 | 65536;
	// stw r9,10532(r31)
	REX_STORE_U32(r31.u32 + 10532, ctx.r9.u32);
	// or r9,r11,r18
	ctx.r9.u64 = ctx.r11.u64 | r18.u64;
	// ori r17,r17,32768
	r17.u64 = r17.u64 | 32768;
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,10528(r31)
	REX_STORE_U32(r31.u32 + 10528, ctx.r9.u32);
	// beq 0x8221fe30
	if (ctx.cr0.eq) goto loc_8221FE30;
	// lwz r11,904(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 904);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r10,r11,872
	ctx.r10.s64 = ctx.r11.s64 + 872;
	// lwz r10,880(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 880);
	// lwz r11,884(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 884);
	// or r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 | r19.u64;
	// or r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 | r16.u64;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x8221fe48
	goto loc_8221FE48;
loc_8221FE30:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// bne cr6,0x8221fe48
	if (!ctx.cr6.eq) goto loc_8221FE48;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8221fe48
	if (ctx.cr6.eq) goto loc_8221FE48;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r24.u32);
loc_8221FE48:
	// lbz r11,11068(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222015c
	if (ctx.cr0.eq) goto loc_8222015C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8221fe6c
	if (!ctx.cr6.gt) goto loc_8221FE6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x8221FE6C;
	sub_82215008(ctx, base);
loc_8221FE6C:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// ori r7,r11,24576
	ctx.r7.u64 = ctx.r11.u64 | 24576;
	// ori r11,r10,21845
	ctx.r11.u64 = ctx.r10.u64 | 21845;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// ori r9,r9,24832
	ctx.r9.u64 = ctx.r9.u64 | 24832;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r17,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x8;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// beq cr6,0x8221fec4
	if (ctx.cr6.eq) goto loc_8221FEC4;
	// li r10,8712
	ctx.r10.s64 = 8712;
	// li r12,-9
	ctx.r12.s64 = -9;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,10580(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10580);
	// and r17,r17,r12
	r17.u64 = r17.u64 & ctx.r12.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
loc_8221FEC4:
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8221fee4
	if (ctx.cr6.eq) goto loc_8221FEE4;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,9729
	ctx.r10.u64 = ctx.r10.u64 | 9729;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
loc_8221FEE4:
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8221ff08
	if (ctx.cr6.eq) goto loc_8221FF08;
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// li r8,8712
	ctx.r8.s64 = 8712;
	// ori r9,r9,21761
	ctx.r9.u64 = ctx.r9.u64 | 21761;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
loc_8221FF08:
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r17,r12
	ctx.r10.u64 = r17.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8221ff38
	if (ctx.cr6.eq) goto loc_8221FF38;
	// li r10,8193
	ctx.r10.s64 = 8193;
	// li r12,-2
	ctx.r12.s64 = -2;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,10372(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10372);
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r17,r17,r12
	r17.u64 = r17.u64 & ctx.r12.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
loc_8221FF38:
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8221ff5c
	if (ctx.cr6.eq) goto loc_8221FF5C;
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// li r8,8193
	ctx.r8.s64 = 8193;
	// ori r9,r9,21761
	ctx.r9.u64 = ctx.r9.u64 | 21761;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
loc_8221FF5C:
	// rlwinm r10,r17,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x10000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8221ff90
	if (ctx.cr6.eq) goto loc_8221FF90;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r12,-2
	ctx.r12.s64 = -131072;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r12,r12,32767
	ctx.r12.u64 = ctx.r12.u64 | 32767;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,10528(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10528);
	// and r17,r17,r12
	r17.u64 = r17.u64 & ctx.r12.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,10532(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10532);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
loc_8221FF90:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8221ffbc
	if (ctx.cr6.eq) goto loc_8221FFBC;
	// lis r8,-16382
	ctx.r8.s64 = -1073610752;
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,8576
	ctx.r6.s64 = 8576;
	// ori r8,r8,21761
	ctx.r8.u64 = ctx.r8.u64 | 21761;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
loc_8221FFBC:
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x822200c4
	if (ctx.cr6.eq) goto loc_822200C4;
	// addi r10,r9,112
	ctx.r10.s64 = ctx.r9.s64 + 112;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lis r11,-16383
	ctx.r11.s64 = -1073676288;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r11,r11,9985
	ctx.r11.u64 = ctx.r11.u64 | 9985;
	// mulli r9,r9,416
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(416));
	// stwu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r6.u32 = ea;
	// lwz r8,32(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwzx r11,r10,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + r30.u64;
	// cmpwi cr6,r15,-1
	ctx.cr6.compare<int32_t>(r15.s32, -1, ctx.xer);
	// lwz r11,872(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 872);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r6.u32 = ea;
	// lwzx r11,r10,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,876(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 876);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// lwz r9,11036(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 11036);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r9,64(r5)
	REX_STORE_U32(ctx.r5.u32 + 64, ctx.r9.u32);
	// beq cr6,0x82220134
	if (ctx.cr6.eq) goto loc_82220134;
	// addi r8,r15,112
	ctx.r8.s64 = r15.s64 + 112;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lis r9,10922
	ctx.r9.s64 = 715784192;
	// lis r6,-16383
	ctx.r6.s64 = -1073676288;
	// ori r9,r9,43690
	ctx.r9.u64 = ctx.r9.u64 | 43690;
	// mulli r11,r15,416
	ctx.r11.s64 = static_cast<int64_t>(r15.u64 * static_cast<uint64_t>(416));
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// ori r9,r6,9985
	ctx.r9.u64 = ctx.r6.u64 | 9985;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + r30.u64;
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// lwzx r11,r10,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwz r9,32(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,872(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 872);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// lwzx r11,r10,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,876(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 876);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// lwz r9,11036(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 11036);
	// stw r9,64(r6)
	REX_STORE_U32(ctx.r6.u32 + 64, ctx.r9.u32);
	// b 0x82220130
	goto loc_82220130;
loc_822200C4:
	// cmpwi cr6,r15,-1
	ctx.cr6.compare<int32_t>(r15.s32, -1, ctx.xer);
	// beq cr6,0x82220134
	if (ctx.cr6.eq) goto loc_82220134;
	// addi r10,r15,112
	ctx.r10.s64 = r15.s64 + 112;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r9,r15,416
	ctx.r9.s64 = static_cast<int64_t>(r15.u64 * static_cast<uint64_t>(416));
	// stwu r14,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, r14.u32);
	ctx.r6.u32 = ea;
	// lwzx r11,r10,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwz r8,32(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + r30.u64;
	// lwz r11,872(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 872);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r6.u32 = ea;
	// lwzx r11,r10,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,876(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 876);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// lwz r9,11036(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 11036);
	// stw r9,64(r5)
	REX_STORE_U32(ctx.r5.u32 + 64, ctx.r9.u32);
loc_82220130:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82220134:
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r9,13084(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 13084);
	// ori r10,r10,24832
	ctx.r10.u64 = ctx.r10.u64 | 24832;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,13088(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13088);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// b 0x822201dc
	goto loc_822201DC;
loc_8222015C:
	// cmpwi cr6,r15,-1
	ctx.cr6.compare<int32_t>(r15.s32, -1, ctx.xer);
	// beq cr6,0x822201dc
	if (ctx.cr6.eq) goto loc_822201DC;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8222017c
	if (!ctx.cr6.gt) goto loc_8222017C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x8222017C;
	sub_82215008(ctx, base);
loc_8222017C:
	// addi r11,r15,112
	ctx.r11.s64 = r15.s64 + 112;
	// stwu r14,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r14.u32);
	ctx.r3.u32 = ea;
	// lwz r8,32(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 32);
	// mulli r9,r15,416
	ctx.r9.s64 = static_cast<int64_t>(r15.u64 * static_cast<uint64_t>(416));
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + r30.u64;
	// lwzx r11,r10,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,872(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 872);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwzx r11,r10,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,876(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 876);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,11036(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11036);
	// stw r11,64(r7)
	REX_STORE_U32(ctx.r7.u32 + 64, ctx.r11.u32);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_822201DC:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8224B208) {
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
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r31,r11,25236
	r31.s64 = ctx.r11.s64 + 25236;
	// lwz r11,25256(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 25256);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224b24c
	if (!ctx.cr0.eq) goto loc_8224B24C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,25256(r10)
	REX_STORE_U32(ctx.r10.u32 + 25256, ctx.r11.u32);
	// bl 0x8227acf8
	ctx.lr = 0x8224B240;
	sub_8227ACF8(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15032
	ctx.r3.s64 = ctx.r11.s64 + 15032;
	// bl 0x822d5848
	ctx.lr = 0x8224B24C;
	sub_822D5848(ctx, base);
loc_8224B24C:
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_8224CAD0) {
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
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r31,r11,26252
	r31.s64 = ctx.r11.s64 + 26252;
	// lwz r11,26272(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 26272);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224cb14
	if (!ctx.cr0.eq) goto loc_8224CB14;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,26272(r10)
	REX_STORE_U32(ctx.r10.u32 + 26272, ctx.r11.u32);
	// bl 0x8227acf8
	ctx.lr = 0x8224CB08;
	sub_8227ACF8(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15384
	ctx.r3.s64 = ctx.r11.s64 + 15384;
	// bl 0x822d5848
	ctx.lr = 0x8224CB14;
	sub_822D5848(ctx, base);
loc_8224CB14:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x8227adf8
	ctx.lr = 0x8224CB20;
	sub_8227ADF8(ctx, base);
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

DEFINE_REX_FUNC(sub_8224E258) {
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
	// beq cr6,0x8224e280
	if (ctx.cr6.eq) goto loc_8224E280;
	// bl 0x822485d0
	ctx.lr = 0x8224E278;
	sub_822485D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8224E280;
	sub_82255B70(ctx, base);
loc_8224E280:
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

DEFINE_REX_FUNC(sub_8224EDE0) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8224ee04
	if (ctx.cr6.eq) goto loc_8224EE04;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8224ee14
	goto loc_8224EE14;
loc_8224EE04:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x822469c0
	ctx.lr = 0x8224EE10;
	sub_822469C0(ctx, base);
	// bl 0x8225e9f8
	ctx.lr = 0x8224EE14;
	sub_8225E9F8(ctx, base);
loc_8224EE14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822518B0) {
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
	// bl 0x8225c1e0
	ctx.lr = 0x822518C0;
	sub_8225C1E0(ctx, base);
	// bl 0x82251550
	ctx.lr = 0x822518C4;
	sub_82251550(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82251E00) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r10,-5632
	ctx.r10.s64 = ctx.r10.s64 + -5632;
	// std r31,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r31.u64);
	// addi r9,r9,-5840
	ctx.r9.s64 = ctx.r9.s64 + -5840;
	// std r31,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, r31.u64);
	// std r31,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82246ca8
	ctx.lr = 0x82251E48;
	sub_82246CA8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,-8208
	ctx.r11.s64 = ctx.r11.s64 + -8208;
	// addi r10,r10,27712
	ctx.r10.s64 = ctx.r10.s64 + 27712;
	// addi r9,r9,27584
	ctx.r9.s64 = ctx.r9.s64 + 27584;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x82245d10
	ctx.lr = 0x82251E78;
	sub_82245D10(ctx, base);
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23580
	ctx.r4.s64 = ctx.r11.s64 + 23580;
	// bl 0x822512d8
	ctx.lr = 0x82251E90;
	sub_822512D8(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
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

DEFINE_REX_FUNC(sub_82253388) {
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
	// li r3,184
	ctx.r3.s64 = 184;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82255b48
	ctx.lr = 0x822533AC;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822533c0
	if (ctx.cr0.eq) goto loc_822533C0;
	// bl 0x8224d718
	ctx.lr = 0x822533B8;
	sub_8224D718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822533c4
	goto loc_822533C4;
loc_822533C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822533C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822533d8
	if (!ctx.cr6.eq) goto loc_822533D8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x822533e4
	goto loc_822533E4;
loc_822533D8:
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_822533E4:
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

DEFINE_REX_FUNC(sub_822554F0) {
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
	ctx.lr = 0x822554F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r30,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r30.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x82255b48
	ctx.lr = 0x82255514;
	sub_82255B48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82255528
	if (!ctx.cr0.eq) goto loc_82255528;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8225558c
	goto loc_8225558C;
loc_82255528:
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x82246a38
	ctx.lr = 0x82255548;
	sub_82246A38(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8225558c
	if (ctx.cr0.lt) goto loc_8225558C;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x82246a38
	ctx.lr = 0x8225555C;
	sub_82246A38(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8225558c
	if (ctx.cr0.lt) goto loc_8225558C;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x82246a38
	ctx.lr = 0x82255570;
	sub_82246A38(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8225558c
	if (ctx.cr0.lt) goto loc_8225558C;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// lwz r4,16(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 16);
	// bl 0x82246a38
	ctx.lr = 0x82255584;
	sub_82246A38(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8225559c
	if (!ctx.cr0.lt) goto loc_8225559C;
loc_8225558C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822552c0
	ctx.lr = 0x82255594;
	sub_822552C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x822555ac
	goto loc_822555AC;
loc_8225559C:
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
loc_822555AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82257670) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x8225c320
	sub_8225C320(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82257748) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x8225da70
	ctx.lr = 0x82257764;
	sub_8225DA70(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x82257770;
	sub_8227C2B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82258510) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8225853c
	if (!ctx.cr6.eq) goto loc_8225853C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82258578
	goto loc_82258578;
loc_8225853C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822469c0
	ctx.lr = 0x82258548;
	sub_822469C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82257748
	ctx.lr = 0x82258558;
	sub_82257748(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8224da00
	ctx.lr = 0x82258564;
	sub_8224DA00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82258578
	if (ctx.cr0.lt) goto loc_82258578;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82258578:
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

DEFINE_REX_FUNC(sub_8225B5F8) {
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
	ctx.lr = 0x8225B600;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r30,r6,24
	r30.u64 = ctx.r6.u32 & 0xFF;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x8225b634
	if (ctx.cr6.lt) goto loc_8225B634;
	// cmplwi cr6,r30,255
	ctx.cr6.compare<uint32_t>(r30.u32, 255, ctx.xer);
	// beq cr6,0x8225b634
	if (ctx.cr6.eq) goto loc_8225B634;
	// cmplwi cr6,r30,254
	ctx.cr6.compare<uint32_t>(r30.u32, 254, ctx.xer);
	// beq cr6,0x8225b634
	if (ctx.cr6.eq) goto loc_8225B634;
	// cmplwi cr6,r30,253
	ctx.cr6.compare<uint32_t>(r30.u32, 253, ctx.xer);
	// bne cr6,0x8225b7d4
	if (!ctx.cr6.eq) goto loc_8225B7D4;
loc_8225B634:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225b7d4
	if (ctx.cr6.eq) goto loc_8225B7D4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8225b7d4
	if (ctx.cr6.eq) goto loc_8225B7D4;
	// bl 0x822469c0
	ctx.lr = 0x8225B648;
	sub_822469C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822469c0
	ctx.lr = 0x8225B654;
	sub_822469C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,253
	ctx.cr6.compare<uint32_t>(r30.u32, 253, ctx.xer);
	// bne cr6,0x8225b680
	if (!ctx.cr6.eq) goto loc_8225B680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r30,255
	r30.s64 = 255;
	// bl 0x82258638
	ctx.lr = 0x8225B66C;
	sub_82258638(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225b67c
	if (ctx.cr0.eq) goto loc_8225B67C;
	// bl 0x822560a0
	ctx.lr = 0x8225B678;
	sub_822560A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8225B67C:
	// mr r28,r30
	r28.u64 = r30.u64;
loc_8225B680:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82257980
	ctx.lr = 0x8225B690;
	sub_82257980(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x8225B69C;
	sub_8224DA00(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bne cr6,0x8225b6b4
	if (!ctx.cr6.eq) goto loc_8225B6B4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8225b7dc
	goto loc_8225B7DC;
loc_8225B6B4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82257d60
	ctx.lr = 0x8225B6BC;
	sub_82257D60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225b6d0
	if (ctx.cr0.eq) goto loc_8225B6D0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x8225b7dc
	goto loc_8225B7DC;
loc_8225B6D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82258aa0
	ctx.lr = 0x8225B6D8;
	sub_82258AA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82256918
	ctx.lr = 0x8225B6EC;
	sub_82256918(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225b744
	if (!ctx.cr6.eq) goto loc_8225B744;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82256918
	ctx.lr = 0x8225B704;
	sub_82256918(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8225b71c
	if (!ctx.cr6.eq) goto loc_8225B71C;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// b 0x8225b7dc
	goto loc_8225B7DC;
loc_8225B71C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82256a80
	ctx.lr = 0x8225B728;
	sub_82256A80(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82256b70
	ctx.lr = 0x8225B73C;
	sub_82256B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225b7dc
	if (ctx.cr0.lt) goto loc_8225B7DC;
loc_8225B744:
	// li r4,41
	ctx.r4.s64 = 41;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8225da70
	ctx.lr = 0x8225B750;
	sub_8225DA70(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822517a0
	ctx.lr = 0x8225B75C;
	sub_822517A0(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,254
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 254, ctx.xer);
	// beq cr6,0x8225b778
	if (ctx.cr6.eq) goto loc_8225B778;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8225ae58
	ctx.lr = 0x8225B778;
	sub_8225AE58(ctx, base);
loc_8225B778:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822567e0
	ctx.lr = 0x8225B784;
	sub_822567E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822567e0
	ctx.lr = 0x8225B790;
	sub_822567E0(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,23564(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23564);
	// bl 0x82255c88
	ctx.lr = 0x8225B7A0;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225b7ac
	if (ctx.cr0.eq) goto loc_8225B7AC;
	// stw r30,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r30.u32);
loc_8225B7AC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x8225b7c0
	if (!ctx.cr6.eq) goto loc_8225B7C0;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8225B7C0:
	// bl 0x8225b408
	ctx.lr = 0x8225B7C4;
	sub_8225B408(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8225b3b0
	ctx.lr = 0x8225B7CC;
	sub_8225B3B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225b7dc
	goto loc_8225B7DC;
loc_8225B7D4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8225B7DC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82264750) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82264758;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32720
	r30.s64 = -2144337920;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r30,r30,7
	r30.u64 = r30.u64 | 7;
loc_82264770:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82264780
	if (ctx.cr6.eq) goto loc_82264780;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_82264780:
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822647ec
	if (!ctx.cr6.lt) goto loc_822647EC;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,8
	r31.s64 = ctx.r11.s64 + 8;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822647b0
	if (ctx.cr6.eq) goto loc_822647B0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822647b8
	if (ctx.cr6.eq) goto loc_822647B8;
loc_822647B0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x82264770
	goto loc_82264770;
loc_822647B8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8227acf8
	ctx.lr = 0x822647C0;
	sub_8227ACF8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227cdd8
	ctx.lr = 0x822647CC;
	sub_8227CDD8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8227b0e0
	ctx.lr = 0x822647D8;
	sub_8227B0E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8227b2c8
	ctx.lr = 0x822647EC;
	sub_8227B2C8(ctx, base);
loc_822647EC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822662C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822662C8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// beq 0x82266360
	if (ctx.cr0.eq) goto loc_82266360;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82266360
	if (!ctx.cr6.gt) goto loc_82266360;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r11,664
	r28.s64 = ctx.r11.s64 + 664;
loc_82266304:
	// addi r31,r29,1
	r31.s64 = r29.s64 + 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824d4a0c
	ctx.lr = 0x82266318;
	__imp__swprintf(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82256ea0
	ctx.lr = 0x82266330;
	sub_82256EA0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82266350
	if (ctx.cr6.eq) goto loc_82266350;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82266350
	if (ctx.cr6.eq) goto loc_82266350;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8225e9f8
	ctx.lr = 0x82266350;
	sub_8225E9F8(ctx, base);
loc_82266350:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r29,r31
	r29.u64 = r31.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82266304
	if (ctx.cr6.lt) goto loc_82266304;
loc_82266360:
	// lwz r3,148(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x822d7b58
	ctx.lr = 0x82266368;
	sub_822D7B58(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82269F00) {
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
	// bl 0x822d4e8c
	ctx.lr = 0x82269F08;
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,132(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,232(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// lfs f13,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,124(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lwz r6,228(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r7,-2144(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + -2144);
	// andc r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ~ctx.r11.u64;
	// andc r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 & ~ctx.r10.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// divw r30,r9,r6
	r30.u64 = uint32_t((ctx.r6.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r9.s32 / ctx.r6.s32 : 0);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// fneg f31,f0
	f31.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// divw r29,r8,r6
	r29.u64 = uint32_t((ctx.r6.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r8.s32 / ctx.r6.s32 : 0);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x82268e00
	ctx.lr = 0x82269F78;
	sub_82268E00(ctx, base);
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82269fac
	if (!ctx.cr6.eq) goto loc_82269FAC;
	// lwz r8,228(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 228);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r10,r3,r8
	ctx.r10.u64 = uint32_t((ctx.r8.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r3.s32 / ctx.r8.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// andc r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bge cr6,0x82269fbc
	if (!ctx.cr6.lt) goto loc_82269FBC;
loc_82269FAC:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8226a0d0
	if (!ctx.cr6.eq) goto loc_8226A0D0;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// ble cr6,0x8226a0d0
	if (!ctx.cr6.gt) goto loc_8226A0D0;
loc_82269FBC:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82256c10
	ctx.lr = 0x82269FCC;
	sub_82256C10(ctx, base);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// lfs f13,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8226a0d0
	if (!ctx.cr6.lt) goto loc_8226A0D0;
loc_82269FE0:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8225e988
	ctx.lr = 0x82269FF4;
	sub_8225E988(ctx, base);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 228);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// bl 0x8225ed40
	ctx.lr = 0x8226A018;
	sub_8225ED40(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82256c10
	ctx.lr = 0x8226A028;
	sub_82256C10(ctx, base);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,232(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 232);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// lwz r9,228(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 228);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lfs f13,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// divw r30,r10,r9
	r30.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82269fe0
	if (ctx.cr6.lt) goto loc_82269FE0;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8226a0d0
	if (!ctx.cr6.eq) goto loc_8226A0D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82268e00
	ctx.lr = 0x8226A070;
	sub_82268E00(ctx, base);
	// lwz r9,228(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 228);
	// lwz r8,236(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 236);
	// divw r11,r3,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r3.s32 / ctx.r9.s32 : 0);
	// divw r7,r8,r9
	ctx.r7.u64 = uint32_t((ctx.r9.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r8.s32 / ctx.r9.s32 : 0);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// mullw r11,r6,r9
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// subf r10,r7,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r7.u64;
	// andc r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r5.u64;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r4.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8226a0d0
	if (ctx.cr6.eq) goto loc_8226A0D0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8225eb40
	ctx.lr = 0x8226A0D0;
	sub_8225EB40(ctx, base);
loc_8226A0D0:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82256c10
	ctx.lr = 0x8226A0E0;
	sub_82256C10(ctx, base);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// lfs f13,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8226a168
	if (!ctx.cr6.lt) goto loc_8226A168;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8226a10c
	if (!ctx.cr6.eq) goto loc_8226A10C;
	// lwz r4,124(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8225eb40
	ctx.lr = 0x8226A10C;
	sub_8225EB40(ctx, base);
loc_8226A10C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 228);
	// li r9,0
	ctx.r9.s64 = 0;
	// fsubs f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// li r29,0
	r29.s64 = 0;
	// stw r9,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// ble cr6,0x8226a258
	if (!ctx.cr6.gt) goto loc_8226A258;
	// li r30,0
	r30.s64 = 0;
loc_8226A140:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x8225e9f8
	ctx.lr = 0x8226A150;
	sub_8225E9F8(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8226a140
	if (ctx.cr6.lt) goto loc_8226A140;
	// b 0x8226a258
	goto loc_8226A258;
loc_8226A168:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8226a258
	if (!ctx.cr6.gt) goto loc_8226A258;
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8226a188
	if (!ctx.cr6.eq) goto loc_8226A188;
	// lfs f29,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	f29.f64 = double(temp.f32);
	// b 0x8226a18c
	goto loc_8226A18C;
loc_8226A188:
	// lfs f29,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f29.f64 = double(temp.f32);
loc_8226A18C:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lfs f30,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f30.f64 = double(temp.f32);
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8226a1b8
	if (ctx.cr6.eq) goto loc_8226A1B8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82264b58
	ctx.lr = 0x8226A1B4;
	sub_82264B58(ctx, base);
	// lfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f30.f64 = double(temp.f32);
loc_8226A1B8:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8226a258
	if (!ctx.cr6.gt) goto loc_8226A258;
	// li r30,0
	r30.s64 = 0;
loc_8226A1CC:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x8225e9f8
	ctx.lr = 0x8226A1DC;
	sub_8225E9F8(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x82256c10
	ctx.lr = 0x8226A1EC;
	sub_82256C10(ctx, base);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f13,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x82256c60
	ctx.lr = 0x8226A214;
	sub_82256C60(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x82258b88
	ctx.lr = 0x8226A228;
	sub_82258B88(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// lwz r9,184(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r10,232(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 232);
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r3,r30,r9
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// bl 0x822562f8
	ctx.lr = 0x8226A244;
	sub_822562F8(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8226a1cc
	if (ctx.cr6.lt) goto loc_8226A1CC;
loc_8226A258:
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x822d7b58
	ctx.lr = 0x8226A260;
	sub_822D7B58(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-56(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8227BAA8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82255b70
	sub_82255B70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8227C028) {
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
	ctx.lr = 0x8227C030;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8227c09c
	if (ctx.cr0.lt) goto loc_8227C09C;
loc_8227C050:
	// subf r11,r31,r29
	ctx.r11.u64 = r29.u64 - r31.u64;
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r30,r11,r31
	r30.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r28,r30,2,0,29
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r10
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822d7938
	ctx.lr = 0x8227C078;
	sub_822D7938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8227c0b8
	if (ctx.cr0.eq) goto loc_8227C0B8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8227c090
	if (!ctx.cr6.lt) goto loc_8227C090;
	// addi r29,r30,-1
	r29.s64 = r30.s64 + -1;
	// b 0x8227c094
	goto loc_8227C094;
loc_8227C090:
	// addi r31,r30,1
	r31.s64 = r30.s64 + 1;
loc_8227C094:
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(r31.s32, r29.s32, ctx.xer);
	// ble cr6,0x8227c050
	if (!ctx.cr6.gt) goto loc_8227C050;
loc_8227C09C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8227c0ac
	if (ctx.cr6.eq) goto loc_8227C0AC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
loc_8227C0AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227C0B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_8227C0B8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8227c0c4
	if (ctx.cr6.eq) goto loc_8227C0C4;
	// stw r30,0(r25)
	REX_STORE_U32(r25.u32 + 0, r30.u32);
loc_8227C0C4:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8227c0b0
	goto loc_8227C0B0;
}

DEFINE_REX_FUNC(sub_8227DEB8) {
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
	ctx.lr = 0x8227DEC0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r24,0
	r24.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r25,r3,4
	r25.s64 = ctx.r3.s64 + 4;
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r23,r24
	r23.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227def4
	if (ctx.cr6.eq) goto loc_8227DEF4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x8227e1d8
	goto loc_8227E1D8;
loc_8227DEF4:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82255b48
	ctx.lr = 0x8227DEFC;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8227df1c
	if (ctx.cr0.eq) goto loc_8227DF1C;
	// stw r24,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r24,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r24.u32);
	// stw r24,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r24.u32);
	// stw r24,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r24.u32);
	// b 0x8227df20
	goto loc_8227DF20;
loc_8227DF1C:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_8227DF20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r11.u32);
	// bne cr6,0x8227df38
	if (!ctx.cr6.eq) goto loc_8227DF38;
loc_8227DF2C:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8227e22c
	goto loc_8227E22C;
loc_8227DF38:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227DF50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8227e22c
	if (ctx.cr0.lt) goto loc_8227E22C;
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227DF74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8227e22c
	if (ctx.cr0.lt) goto loc_8227E22C;
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227DF9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8227e20c
	if (ctx.cr0.lt) goto loc_8227E20C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bne cr6,0x8227e20c
	if (!ctx.cr6.eq) goto loc_8227E20C;
	// lis r11,22613
	ctx.r11.s64 = 1481965568;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// ori r11,r11,18778
	ctx.r11.u64 = ctx.r11.u64 | 18778;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8227e200
	if (!ctx.cr6.eq) goto loc_8227E200;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8227e200
	if (!ctx.cr6.eq) goto loc_8227E200;
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r31,120(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227DFE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8227e200
	if (!ctx.cr6.eq) goto loc_8227E200;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lhz r26,132(r1)
	r26.u64 = REX_LOAD_U16(ctx.r1.u32 + 132);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// bl 0x82255b48
	ctx.lr = 0x8227E004;
	sub_82255B48(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq 0x8227df2c
	if (ctx.cr0.eq) goto loc_8227DF2C;
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227E02C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8227e200
	if (ctx.cr0.lt) goto loc_8227E200;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8227e200
	if (!ctx.cr6.eq) goto loc_8227E200;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r3,12(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 12);
	// addi r10,r10,22
	ctx.r10.s64 = ctx.r10.s64 + 22;
	// stw r11,32(r28)
	REX_STORE_U32(r28.u32 + 32, ctx.r11.u32);
	// stw r10,20(r28)
	REX_STORE_U32(r28.u32 + 20, ctx.r10.u32);
	// bl 0x8227dad0
	ctx.lr = 0x8227E064;
	sub_8227DAD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8227df2c
	if (ctx.cr0.eq) goto loc_8227DF2C;
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// mr r27,r24
	r27.u64 = r24.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8227e1b8
	if (ctx.cr6.eq) goto loc_8227E1B8;
loc_8227E07C:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82255b48
	ctx.lr = 0x8227E084;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8227e0a8
	if (ctx.cr0.eq) goto loc_8227E0A8;
	// stw r24,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r24,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r24.u32);
	// stw r24,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r24.u32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r24,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r24.u32);
	// b 0x8227e0b0
	goto loc_8227E0B0;
loc_8227E0A8:
	// mr r30,r24
	r30.u64 = r24.u64;
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
loc_8227E0B0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8227df2c
	if (ctx.cr6.eq) goto loc_8227DF2C;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8227d4d0
	ctx.lr = 0x8227E0D0;
	sub_8227D4D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8227e214
	if (ctx.cr0.lt) goto loc_8227E214;
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8227e178
	if (ctx.cr6.eq) goto loc_8227E178;
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227E110;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8227e1e0
	if (ctx.cr0.lt) goto loc_8227E1E0;
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227E138;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8227e1e0
	if (ctx.cr0.lt) goto loc_8227E1E0;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227E168;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8227e1e0
	if (ctx.cr0.lt) goto loc_8227E1E0;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
loc_8227E178:
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8227d680
	ctx.lr = 0x8227E184;
	sub_8227D680(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8227e1ec
	if (ctx.cr0.lt) goto loc_8227E1EC;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,12(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822558b0
	ctx.lr = 0x8227E19C;
	sub_822558B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq 0x8227e1f4
	if (ctx.cr0.eq) goto loc_8227E1F4;
	// bl 0x82246088
	ctx.lr = 0x8227E1AC;
	sub_82246088(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
	// blt cr6,0x8227e07c
	if (ctx.cr6.lt) goto loc_8227E07C;
loc_8227E1B8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8227e1c8
	if (ctx.cr6.eq) goto loc_8227E1C8;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82255b70
	ctx.lr = 0x8227E1C8;
	sub_82255B70(ctx, base);
loc_8227E1C8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r24,24(r28)
	REX_STORE_U32(r28.u32 + 24, r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28(r28)
	REX_STORE_U32(r28.u32 + 28, ctx.r11.u32);
loc_8227E1D8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ec4
	return;
loc_8227E1E0:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8227E1E4:
	// bl 0x82246088
	ctx.lr = 0x8227E1E8;
	sub_82246088(ctx, base);
	// b 0x8227e214
	goto loc_8227E214;
loc_8227E1EC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8227e1e4
	goto loc_8227E1E4;
loc_8227E1F4:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8227e1e4
	goto loc_8227E1E4;
loc_8227E200:
	// lis r31,-32720
	r31.s64 = -2144337920;
	// ori r31,r31,28
	r31.u64 = r31.u64 | 28;
	// b 0x8227e22c
	goto loc_8227E22C;
loc_8227E20C:
	// lis r31,-32720
	r31.s64 = -2144337920;
	// ori r31,r31,28
	r31.u64 = r31.u64 | 28;
loc_8227E214:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8227e224
	if (ctx.cr6.eq) goto loc_8227E224;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b70
	ctx.lr = 0x8227E224;
	sub_82255B70(ctx, base);
loc_8227E224:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x8227e1b8
	if (!ctx.cr6.lt) goto loc_8227E1B8;
loc_8227E22C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82255b70
	ctx.lr = 0x8227E234;
	sub_82255B70(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227e2a4
	if (ctx.cr6.eq) goto loc_8227E2A4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8227e27c
	if (!ctx.cr6.gt) goto loc_8227E27C;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8227E254:
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x82255b70
	ctx.lr = 0x8227E264;
	sub_82255B70(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227e254
	if (ctx.cr6.lt) goto loc_8227E254;
loc_8227E27C:
	// lwz r3,12(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x8227ac70
	ctx.lr = 0x8227E284;
	sub_8227AC70(ctx, base);
	// lwz r30,12(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8227e2a0
	if (ctx.cr6.eq) goto loc_8227E2A0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227ac70
	ctx.lr = 0x8227E298;
	sub_8227AC70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b70
	ctx.lr = 0x8227E2A0;
	sub_82255B70(ctx, base);
loc_8227E2A0:
	// stw r24,12(r28)
	REX_STORE_U32(r28.u32 + 12, r24.u32);
loc_8227E2A4:
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227e2c4
	if (ctx.cr6.eq) goto loc_8227E2C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227E2C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r24,0(r25)
	REX_STORE_U32(r25.u32 + 0, r24.u32);
loc_8227E2C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8227e1d8
	goto loc_8227E1D8;
}

DEFINE_REX_FUNC(sub_8228C498) {
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
	// addi r11,r3,128
	ctx.r11.s64 = ctx.r3.s64 + 128;
loc_8228C4B4:
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
	// bne 0x8228c4b4
	if (!ctx.cr0.eq) goto loc_8228C4B4;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8228c4f4
	if (!ctx.cr6.eq) goto loc_8228C4F4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8228c4f4
	if (ctx.cr6.eq) goto loc_8228C4F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228b6c0
	ctx.lr = 0x8228C4EC;
	sub_8228B6C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8228C4F4;
	sub_82255B70(ctx, base);
loc_8228C4F4:
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

DEFINE_REX_FUNC(sub_8228FC10) {
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
	// lwz r3,168(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228fc40
	if (ctx.cr6.eq) goto loc_8228FC40;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82289098
	ctx.lr = 0x8228FC38;
	sub_82289098(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
loc_8228FC40:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228fa28
	ctx.lr = 0x8228FC48;
	sub_8228FA28(ctx, base);
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

DEFINE_REX_FUNC(sub_82291088) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// li r10,8
	ctx.r10.s64 = 8;
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx128 v62,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,32
	ctx.r9.s64 = 32;
	// vspltisw128 v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_set1_epi32(int(0x0)));
	// li r8,64
	ctx.r8.s64 = 64;
	// li r7,48
	ctx.r7.s64 = 48;
	// lvrx128 v60,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r10,4
	ctx.r10.s64 = 4;
	// lvlx128 v59,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
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
	// vsldoi128 v60,v60,v60,8
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 8));
	// lvrx128 v58,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v0,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvrx128 v57,r8,r5
	temp.u32 = ctx.r8.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v59,r7,r5
	temp.u32 = ctx.r7.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v13,v59,v57
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// lvrx128 v59,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v63,v63,v60
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vspltw128 v9,v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x0));
	// vor128 v12,v62,v59
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vspltw128 v11,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v10,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vmaddfp v0,v0,v11,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v10,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vor128 v63,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vspltw128 v10,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vrefp v0,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v10.f32)));
	// vnmsubfp v8,v10,v0,v9
	simde_mm_store_ps(ctx.v8.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmaddfp v0,v0,v8,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v9,v10,v0,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v11,v0,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v9,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v12,v13,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v63,v63,v12
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// stvewx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82298008) {
	REX_FUNC_PROLOGUE();
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82297bc0
	sub_82297BC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82298440) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82298448;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822984dc
	if (!ctx.cr6.gt) goto loc_822984DC;
	// lwz r29,16(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82298478
	if (ctx.cr6.eq) goto loc_82298478;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x822984c8
	goto loc_822984C8;
loc_82298478:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82255b48
	ctx.lr = 0x82298480;
	sub_82255B48(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82298490
	if (!ctx.cr0.eq) goto loc_82298490;
loc_82298488:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822984f4
	goto loc_822984F4;
loc_82298490:
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x822984a8
	goto loc_822984A8;
loc_82298498:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x822984fc
	if (ctx.cr6.eq) goto loc_822984FC;
	// srawi r30,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r30.s64 = r30.s32 >> 1;
loc_822984A8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b48
	ctx.lr = 0x822984B0;
	sub_82255B48(ctx, base);
	// stw r3,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82298498
	if (ctx.cr0.eq) goto loc_82298498;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_822984C8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_822984DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822984F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_822984FC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82255b70
	ctx.lr = 0x82298504;
	sub_82255B70(ctx, base);
	// b 0x82298488
	goto loc_82298488;
}

DEFINE_REX_FUNC(sub_8229DB70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8229DB78;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x822c80d0
	ctx.lr = 0x8229DB90;
	sub_822C80D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
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
	// bl 0x82405090
	ctx.lr = 0x8229DBC4;
	sub_82405090(ctx, base);
	// lis r11,-17408
	ctx.r11.s64 = -1140850688;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r5,-17408
	ctx.r5.s64 = -1140850688;
	// lwz r3,31492(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 31492);
	// bl 0x822a98e0
	ctx.lr = 0x8229DBE0;
	sub_822A98E0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r4.u32);
	// bne 0x8229dbf4
	if (!ctx.cr0.eq) goto loc_8229DBF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8229dc20
	goto loc_8229DC20;
loc_8229DBF4:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82404e00
	ctx.lr = 0x8229DBFC;
	sub_82404E00(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82404fc8
	ctx.lr = 0x8229DC18;
	sub_82404FC8(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_8229DC20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8229F270) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r6,r5,32
	ctx.r6.s64 = ctx.r5.s64 + 32;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
loc_8229F290:
	// li r8,4
	ctx.r8.s64 = 4;
	// lfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r6,12
	ctx.r10.s64 = ctx.r6.s64 + 12;
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8229F2B0:
	// lfs f9,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lfs f8,-44(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -44);
	ctx.f8.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f7,-28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -28);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmadds f0,f9,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f0.f64)));
	// fmadds f0,f7,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f0.f64)));
	// fmadds f0,f8,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfsx f0,r8,r5
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// bdnz 0x8229f2b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229F2B0;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// blt cr6,0x8229f290
	if (ctx.cr6.lt) goto loc_8229F290;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f3f40
	ctx.lr = 0x8229F304;
	sub_821F3F40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_822A14A8) {
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
	// lwz r11,408(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 408);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x822a14d4
	if (!ctx.cr6.eq) goto loc_822A14D4;
	// lfs f0,412(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 412);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x822a1514
	if (ctx.cr6.eq) goto loc_822A1514;
loc_822A14D4:
	// lbz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 228);
	// stfs f1,412(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 412, temp.u32);
	// stw r4,408(r31)
	REX_STORE_U32(r31.u32 + 408, ctx.r4.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a1514
	if (ctx.cr0.eq) goto loc_822A1514;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x822106e0
	ctx.lr = 0x822A14F0;
	sub_822106E0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,412(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 412);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lfs f0,2028(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2028);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lbz r4,87(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// bl 0x82210680
	ctx.lr = 0x822A1514;
	sub_82210680(ctx, base);
loc_822A1514:
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

DEFINE_REX_FUNC(sub_822A3E74) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A3EF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822A3F00;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,288(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a3f84
	if (ctx.cr6.eq) goto loc_822A3F84;
	// lwz r11,292(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a3f84
	if (ctx.cr6.eq) goto loc_822A3F84;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// bl 0x822abb70
	ctx.lr = 0x822A3F30;
	sub_822ABB70(ctx, base);
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r29,31464(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 31464);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822a0800
	ctx.lr = 0x822A3F50;
	sub_822A0800(ctx, base);
	// stw r3,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822a3f90
	if (ctx.cr0.eq) goto loc_822A3F90;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822a0800
	ctx.lr = 0x822A3F74;
	sub_822A0800(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r3.u32);
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x822a3f90
	goto loc_822A3F90;
loc_822A3F84:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822abdc0
	ctx.lr = 0x822A3F90;
	sub_822ABDC0(ctx, base);
loc_822A3F90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822A7D58) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A7D60) {
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
	ctx.lr = 0x822A7D68;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r5,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// srawi. r25,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	r25.s64 = ctx.r11.s32 >> 4;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x822a7fa0
	if (ctx.cr0.eq) goto loc_822A7FA0;
	// lis r9,4095
	ctx.r9.s64 = 268369920;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// ori r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 65535;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmplw cr6,r7,r25
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r25.u32, ctx.xer);
	// bge cr6,0x822a7db8
	if (!ctx.cr6.lt) goto loc_822A7DB8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-4224
	ctx.r3.s64 = ctx.r11.s64 + -4224;
	// bl 0x822d4588
	ctx.lr = 0x822A7DB8;
	sub_822D4588(ctx, base);
loc_822A7DB8:
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + r25.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822a7f2c
	if (!ctx.cr6.lt) goto loc_822A7F2C;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r26,0
	r26.s64 = 0;
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822a7de8
	if (ctx.cr6.lt) goto loc_822A7DE8;
	// add r26,r10,r11
	r26.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822A7DE8:
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822a7df4
	if (!ctx.cr6.lt) goto loc_822A7DF4;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
loc_822A7DF4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822a59a8
	ctx.lr = 0x822A7E00;
	sub_822A59A8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822a7e38
	goto loc_822A7E38;
loc_822A7E10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a7e30
	if (ctx.cr6.eq) goto loc_822A7E30;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_822A7E30:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_822A7E38:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x822a7e10
	if (!ctx.cr6.eq) goto loc_822A7E10;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// beq cr6,0x822a7e88
	if (ctx.cr6.eq) goto loc_822A7E88;
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
loc_822A7E54:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a7e74
	if (ctx.cr6.eq) goto loc_822A7E74;
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f0,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
loc_822A7E74:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r27.u32, ctx.xer);
	// bne cr6,0x822a7e54
	if (!ctx.cr6.eq) goto loc_822A7E54;
loc_822A7E88:
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822a7ed4
	if (ctx.cr6.eq) goto loc_822A7ED4;
	// addi r11,r29,8
	ctx.r11.s64 = r29.s64 + 8;
	// subf r9,r29,r9
	ctx.r9.u64 = ctx.r9.u64 - r29.u64;
loc_822A7EA0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a7ec0
	if (ctx.cr6.eq) goto loc_822A7EC0;
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
loc_822A7EC0:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822a7ea0
	if (!ctx.cr6.eq) goto loc_822A7EA0;
loc_822A7ED4:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r10,r3,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r3.u64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// add r30,r10,r25
	r30.u64 = ctx.r10.u64 + r25.u64;
	// beq cr6,0x822a7f10
	if (ctx.cr6.eq) goto loc_822A7F10;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822a7f0c
	if (ctx.cr6.eq) goto loc_822A7F0C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_822A7F00:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822a7f00
	if (!ctx.cr6.eq) goto loc_822A7F00;
loc_822A7F0C:
	// bl 0x822c80a8
	ctx.lr = 0x822A7F10;
	sub_822C80A8(ctx, base);
loc_822A7F10:
	// rlwinm r10,r26,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// b 0x822a7f9c
	goto loc_822A7F9C;
loc_822A7F2C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// beq cr6,0x822a7f68
	if (ctx.cr6.eq) goto loc_822A7F68;
loc_822A7F38:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a7f58
	if (ctx.cr6.eq) goto loc_822A7F58;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_822A7F58:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x822a7f38
	if (!ctx.cr6.eq) goto loc_822A7F38;
loc_822A7F68:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r30,r25,4,0,27
	r30.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r30,r4
	ctx.r5.u64 = r30.u64 + ctx.r4.u64;
	// cmplw cr6,r29,r4
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822a7f94
	if (ctx.cr6.eq) goto loc_822A7F94;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x822a7f94
	if (ctx.cr6.eq) goto loc_822A7F94;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822a7a28
	ctx.lr = 0x822A7F94;
	sub_822A7A28(ctx, base);
loc_822A7F94:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
loc_822A7F9C:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_822A7FA0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_822B1DE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822B1DF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x822d6450
	ctx.lr = 0x822B1E10;
	sub_822D6450(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,64
	ctx.r11.s64 = r31.s64 + 64;
	// stb r10,63(r31)
	REX_STORE_U8(r31.u32 + 63, ctx.r10.u8);
	// addi r11,r31,80
	ctx.r11.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r8,72(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 72);
	// stw r8,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r11,544(r31)
	REX_STORE_U32(r31.u32 + 544, ctx.r11.u32);
	// stw r10,548(r31)
	REX_STORE_U32(r31.u32 + 548, ctx.r10.u32);
	// stw r9,552(r31)
	REX_STORE_U32(r31.u32 + 552, ctx.r9.u32);
	// stw r8,556(r31)
	REX_STORE_U32(r31.u32 + 556, ctx.r8.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// lfs f0,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// lfs f0,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r8,88(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 88);
	// stw r8,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r11,560(r31)
	REX_STORE_U32(r31.u32 + 560, ctx.r11.u32);
	// stw r10,564(r31)
	REX_STORE_U32(r31.u32 + 564, ctx.r10.u32);
	// stw r9,568(r31)
	REX_STORE_U32(r31.u32 + 568, ctx.r9.u32);
	// stw r8,572(r31)
	REX_STORE_U32(r31.u32 + 572, ctx.r8.u32);
	// bl 0x822b0c78
	ctx.lr = 0x822B1ECC;
	sub_822B0C78(ctx, base);
	// addi r11,r31,112
	ctx.r11.s64 = r31.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 96);
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// lwz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 100);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r9,120(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r8,104(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 104);
	// stw r8,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r11,576(r31)
	REX_STORE_U32(r31.u32 + 576, ctx.r11.u32);
	// stw r10,580(r31)
	REX_STORE_U32(r31.u32 + 580, ctx.r10.u32);
	// stw r9,584(r31)
	REX_STORE_U32(r31.u32 + 584, ctx.r9.u32);
	// stw r8,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r8.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
	// stw r11,608(r31)
	REX_STORE_U32(r31.u32 + 608, ctx.r11.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 128);
	// stw r11,612(r31)
	REX_STORE_U32(r31.u32 + 612, ctx.r11.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 132);
	// stw r11,616(r31)
	REX_STORE_U32(r31.u32 + 616, ctx.r11.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// stw r11,620(r31)
	REX_STORE_U32(r31.u32 + 620, ctx.r11.u32);
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// stw r11,624(r31)
	REX_STORE_U32(r31.u32 + 624, ctx.r11.u32);
	// lwz r11,144(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 144);
	// stw r11,628(r31)
	REX_STORE_U32(r31.u32 + 628, ctx.r11.u32);
	// lwz r11,148(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 148);
	// stw r11,632(r31)
	REX_STORE_U32(r31.u32 + 632, ctx.r11.u32);
	// lwz r11,152(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 152);
	// stw r11,636(r31)
	REX_STORE_U32(r31.u32 + 636, ctx.r11.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 156);
	// stw r11,640(r31)
	REX_STORE_U32(r31.u32 + 640, ctx.r11.u32);
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// stw r11,644(r31)
	REX_STORE_U32(r31.u32 + 644, ctx.r11.u32);
	// lwz r11,164(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 164);
	// stw r11,648(r31)
	REX_STORE_U32(r31.u32 + 648, ctx.r11.u32);
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
	// stw r11,652(r31)
	REX_STORE_U32(r31.u32 + 652, ctx.r11.u32);
	// lwz r11,172(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 172);
	// stw r11,656(r31)
	REX_STORE_U32(r31.u32 + 656, ctx.r11.u32);
	// lwz r11,176(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 176);
	// stw r11,660(r31)
	REX_STORE_U32(r31.u32 + 660, ctx.r11.u32);
	// lwz r11,180(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 180);
	// stw r11,664(r31)
	REX_STORE_U32(r31.u32 + 664, ctx.r11.u32);
	// lwz r11,184(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 184);
	// stw r11,668(r31)
	REX_STORE_U32(r31.u32 + 668, ctx.r11.u32);
	// lfs f13,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,116(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,112(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0eb0
	ctx.lr = 0x822B1FBC;
	sub_822B0EB0(ctx, base);
	// lfs f0,188(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,196(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,200(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822b0e48
	ctx.lr = 0x822B1FE4;
	sub_822B0E48(ctx, base);
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// addi r4,r30,204
	ctx.r4.s64 = r30.s64 + 204;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822d4fa0
	ctx.lr = 0x822B1FF4;
	sub_822D4FA0(ctx, base);
	// lwz r11,272(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 272);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// bl 0x822b8668
	ctx.lr = 0x822B2010;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b2020
	if (ctx.cr0.eq) goto loc_822B2020;
	// lfs f0,276(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,816(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 816, temp.u32);
loc_822B2020:
	// lwz r11,268(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 268);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x822b1128
	ctx.lr = 0x822B2034;
	sub_822B1128(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// ori r10,r11,61440
	ctx.r10.u64 = ctx.r11.u64 | 61440;
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// stw r11,592(r31)
	REX_STORE_U32(r31.u32 + 592, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822BEC78) {
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
	// bl 0x822d4e84
	ctx.lr = 0x822BEC80;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822bef18
	if (ctx.cr6.eq) goto loc_822BEF18;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822bee70
	if (ctx.cr6.eq) goto loc_822BEE70;
	// ble cr6,0x822bef3c
	if (!ctx.cr6.gt) goto loc_822BEF3C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x822becc4
	if (!ctx.cr6.gt) goto loc_822BECC4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822becdc
	if (ctx.cr6.eq) goto loc_822BECDC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822bee70
	if (ctx.cr6.eq) goto loc_822BEE70;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x822bef3c
	if (!ctx.cr6.eq) goto loc_822BEF3C;
loc_822BECC4:
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822bee44
	if (!ctx.cr6.gt) goto loc_822BEE44;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x822bee48
	goto loc_822BEE48;
loc_822BECDC:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bed54
	if (ctx.cr6.eq) goto loc_822BED54;
	// lfs f0,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,84(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,76(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// li r5,32
	ctx.r5.s64 = 32;
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f0,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,140(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,144(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// fmadds f0,f12,f12,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f10.f64)));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x822BED50;
	sub_822D4FA0(ctx, base);
	// b 0x822bef3c
	goto loc_822BEF3C;
loc_822BED54:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bef3c
	if (ctx.cr6.eq) goto loc_822BEF3C;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x822b3b28
	ctx.lr = 0x822BED68;
	sub_822B3B28(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x822b3b38
	ctx.lr = 0x822BED78;
	sub_822B3B38(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r9,124(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r8,120(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lfs f31,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// subf r10,r8,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r8.u64;
	// srawi. r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r28,40(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// beq 0x822bee2c
	if (ctx.cr0.eq) goto loc_822BEE2C;
loc_822BEDA8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x822b41b0
	ctx.lr = 0x822BEDB4;
	sub_822B41B0(ctx, base);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x822bee0c
	if (!ctx.cr6.lt) goto loc_822BEE0C;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + r27.u64;
loc_822BEDCC:
	// lhz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x822bedfc
	if (!ctx.cr6.lt) goto loc_822BEDFC;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
loc_822BEDFC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822bedcc
	if (ctx.cr6.lt) goto loc_822BEDCC;
loc_822BEE0C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822beda8
	if (ctx.cr6.lt) goto loc_822BEDA8;
loc_822BEE2C:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x822b3b30
	ctx.lr = 0x822BEE34;
	sub_822B3B30(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x822b3b40
	ctx.lr = 0x822BEE3C;
	sub_822B3B40(ctx, base);
	// fsqrts f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(f31.f64)));
	// b 0x822bef38
	goto loc_822BEF38;
loc_822BEE44:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_822BEE48:
	// stfs f12,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f11,164(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f11,156(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// stfs f12,160(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
	// stfs f13,176(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// b 0x822bef3c
	goto loc_822BEF3C;
loc_822BEE70:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f10,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f11,2024(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,12(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r11.u32);
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r8,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r8.u32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r5,12(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r7.u32);
	// stw r10,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r10.u32);
	// stw r8,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r8.u32);
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f13.f64)));
	// stw r6,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r6.u32);
	// stw r5,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r5.u32);
	// stw r9,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r9.u32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// b 0x822bef38
	goto loc_822BEF38;
loc_822BEF18:
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f13,160(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
loc_822BEF38:
	// stfs f0,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
loc_822BEF3C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822CBBD8) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,25964
	ctx.r10.s64 = ctx.r10.s64 + 25964;
	// stb r11,12(r3)
	REX_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r5,104
	ctx.r5.s64 = 104;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
	// std r11,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r11.u64);
	// bl 0x822d5870
	ctx.lr = 0x822CBC38;
	sub_822D5870(ctx, base);
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

DEFINE_REX_FUNC(sub_822CD8D8) {
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
	// addi r30,r3,24
	r30.s64 = ctx.r3.s64 + 24;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CD908;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r31,r10,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CD928;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_822CE848) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822ce858
	if (!ctx.cr6.eq) goto loc_822CE858;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822CE858:
	// stw r4,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CF738) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cf78c
	if (ctx.cr6.eq) goto loc_822CF78C;
	// lwz r5,4(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm. r11,r5,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cf768
	if (ctx.cr0.eq) goto loc_822CF768;
	// clrlwi r5,r5,1
	ctx.r5.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822cf76c
	goto loc_822CF76C;
loc_822CF768:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822CF76C:
	// bl 0x822d2318
	ctx.lr = 0x822CF770;
	sub_822D2318(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cf78c
	if (ctx.cr6.eq) goto loc_822CF78C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f2,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x822d3be0
	ctx.lr = 0x822CF78C;
	sub_822D3BE0(ctx, base);
loc_822CF78C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D12C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822D12D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// bl 0x822d1268
	ctx.lr = 0x822D12E0;
	sub_822D1268(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r30,r31,112
	r30.s64 = r31.s64 + 112;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D12FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d131c
	if (ctx.cr6.eq) goto loc_822D131C;
	// clrlwi r11,r28,16
	ctx.r11.u64 = r28.u32 & 0xFFFF;
	// addi r29,r31,56
	r29.s64 = r31.s64 + 56;
	// cmplwi cr6,r11,358
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 358, ctx.xer);
	// beq cr6,0x822d131c
	if (ctx.cr6.eq) goto loc_822D131C;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
loc_822D131C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1330;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822D2298) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822D22A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822d22c8
	if (ctx.cr6.lt) goto loc_822D22C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d230c
	goto loc_822D230C;
loc_822D22C8:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r30,r31,36
	r30.s64 = r31.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D22E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r29,5
	ctx.r11.s64 = r29.s64 + 5;
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mulli r10,r28,108
	ctx.r10.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(108));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D2308;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822D230C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822D4088) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822D4090;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,32
	ctx.r10.s64 = 32;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// li r28,0
	r28.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822D40A8:
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// stwu r28,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822d40a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D40A8;
	// addi r29,r31,256
	r29.s64 = r31.s64 + 256;
	// li r30,15
	r30.s64 = 15;
loc_822D40BC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d09c8
	ctx.lr = 0x822D40C4;
	sub_822D09C8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,264
	r29.s64 = r29.s64 + 264;
	// bge 0x822d40bc
	if (!ctx.cr0.lt) goto loc_822D40BC;
	// addi r29,r31,4480
	r29.s64 = r31.s64 + 4480;
	// li r30,3
	r30.s64 = 3;
loc_822D40D8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d37b0
	ctx.lr = 0x822D40E8;
	sub_822D37B0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// bge 0x822d40d8
	if (!ctx.cr0.lt) goto loc_822D40D8;
	// stb r28,4592(r31)
	REX_STORE_U8(r31.u32 + 4592, r28.u8);
	// addi r3,r31,4600
	ctx.r3.s64 = r31.s64 + 4600;
	// stb r28,4593(r31)
	REX_STORE_U8(r31.u32 + 4593, r28.u8);
	// stw r28,4596(r31)
	REX_STORE_U32(r31.u32 + 4596, r28.u32);
	// bl 0x822c88c0
	ctx.lr = 0x822D4108;
	sub_822C88C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(__savefpr_21) {
	REX_FUNC_PROLOGUE();
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
	// stfd f21,-88(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -88, f21.u64);
	// stfd f22,-80(r12)
	REX_STORE_U64(ctx.r12.u32 + -80, f22.u64);
	// stfd f23,-72(r12)
	REX_STORE_U64(ctx.r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	REX_STORE_U64(ctx.r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	REX_STORE_U64(ctx.r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	REX_STORE_U64(ctx.r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	REX_STORE_U64(ctx.r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	REX_STORE_U64(ctx.r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	REX_STORE_U64(ctx.r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	REX_STORE_U64(ctx.r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	REX_STORE_U64(ctx.r12.u32 + -8, f31.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D6030) {
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
	// bl 0x822d6ff8
	ctx.lr = 0x822D6048;
	sub_822D6FF8(ctx, base);
	// stw r31,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r31.u32);
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

DEFINE_REX_FUNC(sub_822D6E70) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// lwz r10,31848(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 31848);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D7B58) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x822de6f8
	sub_822DE6F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D8058) {
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
	ctx.lr = 0x822D8060;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822d8080
	if (ctx.cr6.eq) goto loc_822D8080;
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
loc_822D8080:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x822d80a0
	if (!ctx.cr6.eq) goto loc_822D80A0;
loc_822D8088:
	// bl 0x822db6c0
	ctx.lr = 0x822D808C;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D8098;
	sub_822D6910(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d82cc
	goto loc_822D82CC;
loc_822D80A0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x822d80b8
	if (ctx.cr6.eq) goto loc_822D80B8;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// blt cr6,0x822d8088
	if (ctx.cr6.lt) goto loc_822D8088;
	// cmpwi cr6,r28,36
	ctx.cr6.compare<int32_t>(r28.s32, 36, ctx.xer);
	// bgt cr6,0x822d8088
	if (ctx.cr6.gt) goto loc_822D8088;
loc_822D80B8:
	// lhz r31,0(r25)
	r31.u64 = REX_LOAD_U16(r25.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// addi r30,r25,2
	r30.s64 = r25.s64 + 2;
	// b 0x822d80d0
	goto loc_822D80D0;
loc_822D80C8:
	// lhz r31,0(r30)
	r31.u64 = REX_LOAD_U16(r30.u32 + 0);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
loc_822D80D0:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822de878
	ctx.lr = 0x822D80DC;
	sub_822DE878(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822d80c8
	if (!ctx.cr0.eq) goto loc_822D80C8;
	// clrlwi r11,r31,16
	ctx.r11.u64 = r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x822d80f8
	if (!ctx.cr6.eq) goto loc_822D80F8;
	// ori r24,r24,2
	r24.u64 = r24.u64 | 2;
	// b 0x822d8100
	goto loc_822D8100;
loc_822D80F8:
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// bne cr6,0x822d8108
	if (!ctx.cr6.eq) goto loc_822D8108;
loc_822D8100:
	// lhz r31,0(r30)
	r31.u64 = REX_LOAD_U16(r30.u32 + 0);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
loc_822D8108:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x822d8148
	if (!ctx.cr6.eq) goto loc_822D8148;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822de8b0
	ctx.lr = 0x822D8118;
	sub_822DE8B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822d8128
	if (ctx.cr0.eq) goto loc_822D8128;
	// li r28,10
	r28.s64 = 10;
	// b 0x822d817c
	goto loc_822D817C;
loc_822D8128:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// beq cr6,0x822d8144
	if (ctx.cr6.eq) goto loc_822D8144;
	// cmplwi cr6,r11,88
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 88, ctx.xer);
	// beq cr6,0x822d8144
	if (ctx.cr6.eq) goto loc_822D8144;
	// li r28,8
	r28.s64 = 8;
	// b 0x822d817c
	goto loc_822D817C;
loc_822D8144:
	// li r28,16
	r28.s64 = 16;
loc_822D8148:
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(r28.s32, 16, ctx.xer);
	// bne cr6,0x822d817c
	if (!ctx.cr6.eq) goto loc_822D817C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822de8b0
	ctx.lr = 0x822D8158;
	sub_822DE8B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822d817c
	if (!ctx.cr0.eq) goto loc_822D817C;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// beq cr6,0x822d8174
	if (ctx.cr6.eq) goto loc_822D8174;
	// cmplwi cr6,r11,88
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 88, ctx.xer);
	// bne cr6,0x822d817c
	if (!ctx.cr6.eq) goto loc_822D817C;
loc_822D8174:
	// lhzu r31,2(r30)
	ea = 2 + r30.u32;
	r31.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
loc_822D817C:
	// li r26,-1
	r26.s64 = -1;
	// twllei r28,0
	if (r28.s32 == 0 || r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r29,r26,r28
	r29.u64 = uint32_t(r28.u32 ? r26.u32 / r28.u32 : 0);
loc_822D8188:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822de8b0
	ctx.lr = 0x822D8190;
	sub_822DE8B0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822d81d4
	if (!ctx.cr6.eq) goto loc_822D81D4;
	// clrlwi r11,r31,16
	ctx.r11.u64 = r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x822d81ac
	if (ctx.cr6.lt) goto loc_822D81AC;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// ble cr6,0x822d81bc
	if (!ctx.cr6.gt) goto loc_822D81BC;
loc_822D81AC:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x822d8214
	if (ctx.cr6.lt) goto loc_822D8214;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgt cr6,0x822d8214
	if (ctx.cr6.gt) goto loc_822D8214;
loc_822D81BC:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x822d81d0
	if (ctx.cr6.lt) goto loc_822D81D0;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgt cr6,0x822d81d0
	if (ctx.cr6.gt) goto loc_822D81D0;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_822D81D0:
	// addi r3,r11,-55
	ctx.r3.s64 = ctx.r11.s64 + -55;
loc_822D81D4:
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, ctx.xer);
	// bge cr6,0x822d8214
	if (!ctx.cr6.lt) goto loc_822D8214;
	// ori r24,r24,8
	r24.u64 = r24.u64 | 8;
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(r27.u32, r29.u32, ctx.xer);
	// blt cr6,0x822d8234
	if (ctx.cr6.lt) goto loc_822D8234;
	// bne cr6,0x822d8208
	if (!ctx.cr6.eq) goto loc_822D8208;
	// divwu r10,r26,r28
	ctx.r10.u64 = uint32_t(r28.u32 ? r26.u32 / r28.u32 : 0);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// twllei r28,0
	if (r28.s32 == 0 || r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822d8234
	if (!ctx.cr6.gt) goto loc_822D8234;
loc_822D8208:
	// ori r24,r24,4
	r24.u64 = r24.u64 | 4;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x822d823c
	if (!ctx.cr6.eq) goto loc_822D823C;
loc_822D8214:
	// rlwinm. r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r30,r30,-2
	r30.s64 = r30.s64 + -2;
	// bne 0x822d8248
	if (!ctx.cr0.eq) goto loc_822D8248;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x822d822c
	if (ctx.cr6.eq) goto loc_822D822C;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_822D822C:
	// li r27,0
	r27.s64 = 0;
	// b 0x822d82b0
	goto loc_822D82B0;
loc_822D8234:
	// mullw r11,r27,r28
	ctx.r11.s64 = int64_t(r27.s32) * int64_t(r28.s32);
	// add r27,r11,r3
	r27.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_822D823C:
	// lhz r31,0(r30)
	r31.u64 = REX_LOAD_U16(r30.u32 + 0);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// b 0x822d8188
	goto loc_822D8188;
loc_822D8248:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r31,r10,65535
	r31.u64 = ctx.r10.u64 | 65535;
	// bne 0x822d8284
	if (!ctx.cr0.eq) goto loc_822D8284;
	// clrlwi. r11,r24,31
	ctx.r11.u64 = r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d82b0
	if (!ctx.cr0.eq) goto loc_822D82B0;
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d8274
	if (ctx.cr0.eq) goto loc_822D8274;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822d8284
	if (ctx.cr6.gt) goto loc_822D8284;
loc_822D8274:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d82b0
	if (!ctx.cr6.eq) goto loc_822D82B0;
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(r27.u32, r31.u32, ctx.xer);
	// ble cr6,0x822d82b0
	if (!ctx.cr6.gt) goto loc_822D82B0;
loc_822D8284:
	// bl 0x822db6c0
	ctx.lr = 0x822D8288;
	sub_822DB6C0(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// clrlwi. r10,r24,31
	ctx.r10.u64 = r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x822d82a0
	if (ctx.cr0.eq) goto loc_822D82A0;
	// mr r27,r26
	r27.u64 = r26.u64;
	// b 0x822d82b0
	goto loc_822D82B0;
loc_822D82A0:
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r27,-32768
	r27.s64 = -2147483648;
	// bne 0x822d82b0
	if (!ctx.cr0.eq) goto loc_822D82B0;
	// mr r27,r31
	r27.u64 = r31.u64;
loc_822D82B0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x822d82bc
	if (ctx.cr6.eq) goto loc_822D82BC;
	// stw r30,0(r23)
	REX_STORE_U32(r23.u32 + 0, r30.u32);
loc_822D82BC:
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d82c8
	if (ctx.cr0.eq) goto loc_822D82C8;
	// neg r27,r27
	r27.s64 = static_cast<int64_t>(-r27.u64);
loc_822D82C8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_822D82CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
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

DEFINE_REX_FUNC(__restvmx_66) {
	REX_FUNC_PROLOGUE();
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
	// li r11,-992
	ctx.r11.s64 = -992;
	// lvx128 v66,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v66.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-976
	ctx.r11.s64 = -976;
	// lvx128 v67,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v67.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-960
	ctx.r11.s64 = -960;
	// lvx128 v68,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v68.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-944
	ctx.r11.s64 = -944;
	// lvx128 v69,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v69.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(sub_822E6468) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e654c
	if (!ctx.cr0.eq) goto loc_822E654C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822e15a8
	ctx.lr = 0x822E6498;
	sub_822E15A8(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r11,r11,-11584
	ctx.r11.s64 = ctx.r11.s64 + -11584;
	// addi r8,r10,104
	ctx.r8.s64 = ctx.r10.s64 + 104;
	// beq cr6,0x822e64d4
	if (ctx.cr6.eq) goto loc_822E64D4;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x822e64d4
	if (ctx.cr6.eq) goto loc_822E64D4;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r9,r9,72
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x822e64d8
	goto loc_822E64D8;
loc_822E64D4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_822E64D8:
	// lbz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 40);
	// rlwinm. r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822e6520
	if (!ctx.cr0.eq) goto loc_822E6520;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822e6510
	if (ctx.cr6.eq) goto loc_822E6510;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x822e6510
	if (ctx.cr6.eq) goto loc_822E6510;
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
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x822e6514
	goto loc_822E6514;
loc_822E6510:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822E6514:
	// lbz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e654c
	if (ctx.cr0.eq) goto loc_822E654C;
loc_822E6520:
	// bl 0x822db6c0
	ctx.lr = 0x822E6524;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822E6530;
	sub_822D6910(ctx, base);
loc_822E6530:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822E6534:
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
loc_822E654C:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(r30.s32, -1, ctx.xer);
	// beq cr6,0x822e6530
	if (ctx.cr6.eq) goto loc_822E6530;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822e6570
	if (!ctx.cr0.eq) goto loc_822E6570;
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e6530
	if (ctx.cr0.eq) goto loc_822E6530;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e6530
	if (!ctx.cr0.eq) goto loc_822E6530;
loc_822E6570:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e6584
	if (!ctx.cr6.eq) goto loc_822E6584;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e1520
	ctx.lr = 0x822E6584;
	sub_822E1520(ctx, base);
loc_822E6584:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822e65a8
	if (!ctx.cr6.eq) goto loc_822E65A8;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822e6530
	if (!ctx.cr6.eq) goto loc_822E6530;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_822E65A8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x822e65e0
	if (ctx.cr0.eq) goto loc_822E65E0;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r30
	ctx.r10.s64 = r30.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822e65e4
	if (ctx.cr6.eq) goto loc_822E65E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x822e6530
	goto loc_822E6530;
loc_822E65E0:
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r30.u8);
loc_822E65E4:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi r3,r30,24
	ctx.r3.u64 = r30.u32 & 0xFF;
	// rlwimi r10,r9,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r10,r9,0,27,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFEF);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// b 0x822e6534
	goto loc_822E6534;
}

DEFINE_REX_FUNC(sub_822ED788) {
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
	// bl 0x822eeca0
	ctx.lr = 0x822ED7A0;
	sub_822EECA0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-27352
	ctx.r9.s64 = ctx.r10.s64 + -27352;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822EF0F0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r4,500(r3)
	REX_STORE_U32(ctx.r3.u32 + 500, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,504(r11)
	REX_STORE_U32(ctx.r11.u32 + 504, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F04B8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,13
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 13, ctx.xer);
	// bgt cr6,0x822f0580
	if (ctx.cr6.gt) goto loc_822F0580;
	// lis r12,-32209
	ctx.r12.s64 = -2110849024;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,1240
	ctx.r12.s64 = ctx.r12.s64 + 1240;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_822F0510;
	case 1:
		goto loc_822F0518;
	case 2:
		goto loc_822F0520;
	case 3:
		goto loc_822F0528;
	case 4:
		goto loc_822F0530;
	case 5:
		goto loc_822F0538;
	case 6:
		goto loc_822F0540;
	case 7:
		goto loc_822F0548;
	case 8:
		goto loc_822F0550;
	case 9:
		goto loc_822F0558;
	case 10:
		goto loc_822F0560;
	case 11:
		goto loc_822F0568;
	case 12:
		goto loc_822F0570;
	case 13:
		goto loc_822F0578;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_822F0510:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822F0518:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_822F0520:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_822F0528:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_822F0530:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_822F0538:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_822F0540:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_822F0548:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_822F0550:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_822F0558:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_822F0560:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_822F0568:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_822F0570:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_822F0578:
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
loc_822F0580:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F2850) {
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
	ctx.lr = 0x822F2858;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f2ad8
	if (ctx.cr6.eq) goto loc_822F2AD8;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822f2ad8
	if (ctx.cr6.eq) goto loc_822F2AD8;
	// lwz r3,584(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 584);
	// bl 0x822ff770
	ctx.lr = 0x822F287C;
	sub_822FF770(ctx, base);
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r28,0
	r28.s64 = 0;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// stw r28,584(r31)
	REX_STORE_U32(r31.u32 + 584, r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r27,r11,32768
	r27.u64 = ctx.r11.u64 | 32768;
	// beq cr6,0x822f28a4
	if (ctx.cr6.eq) goto loc_822F28A4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823cd250
	ctx.lr = 0x822F28A0;
	sub_823CD250(ctx, base);
	// stw r28,224(r31)
	REX_STORE_U32(r31.u32 + 224, r28.u32);
loc_822F28A4:
	// lwz r30,204(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822f28fc
	if (ctx.cr6.eq) goto loc_822F28FC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x823cd250
	ctx.lr = 0x822F28BC;
	sub_823CD250(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// bl 0x823cd250
	ctx.lr = 0x822F28C8;
	sub_823CD250(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x823cd250
	ctx.lr = 0x822F28D4;
	sub_823CD250(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24);
	// bl 0x823cd250
	ctx.lr = 0x822F28E0;
	sub_823CD250(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 28);
	// bl 0x823cd250
	ctx.lr = 0x822F28EC;
	sub_823CD250(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cd250
	ctx.lr = 0x822F28F8;
	sub_823CD250(ctx, base);
	// stw r28,204(r31)
	REX_STORE_U32(r31.u32 + 204, r28.u32);
loc_822F28FC:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f29ac
	if (ctx.cr6.eq) goto loc_822F29AC;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f299c
	if (ctx.cr6.eq) goto loc_822F299C;
	// mr r29,r28
	r29.u64 = r28.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_822F291C:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// lwz r3,12(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x823cd250
	ctx.lr = 0x822F2934;
	sub_823CD250(ctx, base);
	// lwz r9,208(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + r30.u64;
	// lwz r3,4(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x823cd250
	ctx.lr = 0x822F294C;
	sub_823CD250(ctx, base);
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + r30.u64;
	// stw r28,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, r28.u32);
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// stw r28,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, r28.u32);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822f291c
	if (ctx.cr6.lt) goto loc_822F291C;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x823cd250
	ctx.lr = 0x822F2994;
	sub_823CD250(ctx, base);
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// stw r28,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r28.u32);
loc_822F299C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 208);
	// bl 0x823cd250
	ctx.lr = 0x822F29A8;
	sub_823CD250(ctx, base);
	// stw r28,208(r31)
	REX_STORE_U32(r31.u32 + 208, r28.u32);
loc_822F29AC:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f2a74
	if (ctx.cr6.eq) goto loc_822F2A74;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f2a64
	if (ctx.cr6.eq) goto loc_822F2A64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_822F29CC:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f2a34
	if (ctx.cr6.eq) goto loc_822F2A34;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f29f4
	if (ctx.cr6.eq) goto loc_822F29F4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823cd250
	ctx.lr = 0x822F29F4;
	sub_823CD250(ctx, base);
loc_822F29F4:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// stw r28,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r28.u32);
	// lwz r9,232(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 232);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + r30.u64;
	// lwz r3,16(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f2a24
	if (ctx.cr6.eq) goto loc_822F2A24;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823cd250
	ctx.lr = 0x822F2A24;
	sub_823CD250(ctx, base);
loc_822F2A24:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// stw r28,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, r28.u32);
loc_822F2A34:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822f29cc
	if (ctx.cr6.lt) goto loc_822F29CC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x823cd250
	ctx.lr = 0x822F2A5C;
	sub_823CD250(ctx, base);
	// lwz r10,232(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 232);
	// stw r28,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r28.u32);
loc_822F2A64:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,232(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 232);
	// bl 0x823cd250
	ctx.lr = 0x822F2A70;
	sub_823CD250(ctx, base);
	// stw r28,232(r31)
	REX_STORE_U32(r31.u32 + 232, r28.u32);
loc_822F2A74:
	// lwz r3,612(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 612);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f2a88
	if (ctx.cr6.eq) goto loc_822F2A88;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823cd250
	ctx.lr = 0x822F2A88;
	sub_823CD250(ctx, base);
loc_822F2A88:
	// lwz r30,616(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 616);
	// stw r28,612(r31)
	REX_STORE_U32(r31.u32 + 612, r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822f2ab8
	if (ctx.cr6.eq) goto loc_822F2AB8;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f2aac
	if (ctx.cr6.eq) goto loc_822F2AAC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823cd250
	ctx.lr = 0x822F2AAC;
	sub_823CD250(ctx, base);
loc_822F2AAC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cd250
	ctx.lr = 0x822F2AB8;
	sub_823CD250(ctx, base);
loc_822F2AB8:
	// stw r28,616(r31)
	REX_STORE_U32(r31.u32 + 616, r28.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cd250
	ctx.lr = 0x822F2AC8;
	sub_823CD250(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,0(r26)
	REX_STORE_U32(r26.u32 + 0, r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_822F2AD8:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_823013A8) {
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
	// bl 0x822d4e64
	ctx.lr = 0x823013B0;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x822d4f34
	ctx.lr = 0x823013B8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,352(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 352);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r19,360(r3)
	r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r31,384(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 384);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r20,34(r11)
	r20.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// beq cr6,0x823019e4
	if (ctx.cr6.eq) goto loc_823019E4;
	// lwz r11,424(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823013f4
	if (ctx.cr6.eq) goto loc_823013F4;
	// li r19,6
	r19.s64 = 6;
loc_823013F4:
	// cmpwi cr6,r20,6
	ctx.cr6.compare<int32_t>(r20.s32, 6, ctx.xer);
	// bne cr6,0x82301624
	if (!ctx.cr6.eq) goto loc_82301624;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(r19.s32, 2, ctx.xer);
	// bne cr6,0x82301624
	if (!ctx.cr6.eq) goto loc_82301624;
	// lwz r10,372(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 372);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// blt cr6,0x823015a4
	if (ctx.cr6.lt) goto loc_823015A4;
	// addi r10,r5,-3
	ctx.r10.s64 = ctx.r5.s64 + -3;
loc_82301450:
	// lfs f2,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// lfs f31,20(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 20);
	f31.f64 = double(temp.f32);
	// fmuls f2,f2,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// lfs f30,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	f30.f64 = double(temp.f32);
	// lfs f29,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	f29.f64 = double(temp.f32);
	// lfs f28,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	f28.f64 = double(temp.f32);
	// lfs f27,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	f27.f64 = double(temp.f32);
	// fmadds f1,f31,f9,f1
	ctx.f1.f64 = double(float(std::fma(f31.f64, ctx.f9.f64, ctx.f1.f64)));
	// fmadds f2,f31,f3,f2
	ctx.f2.f64 = double(float(std::fma(f31.f64, ctx.f3.f64, ctx.f2.f64)));
	// fmadds f1,f30,f11,f1
	ctx.f1.f64 = double(float(std::fma(f30.f64, ctx.f11.f64, ctx.f1.f64)));
	// fmadds f2,f30,f5,f2
	ctx.f2.f64 = double(float(std::fma(f30.f64, ctx.f5.f64, ctx.f2.f64)));
	// fmadds f1,f29,f12,f1
	ctx.f1.f64 = double(float(std::fma(f29.f64, ctx.f12.f64, ctx.f1.f64)));
	// fmadds f2,f29,f6,f2
	ctx.f2.f64 = double(float(std::fma(f29.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmadds f1,f28,f13,f1
	ctx.f1.f64 = double(float(std::fma(f28.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f2,f28,f7,f2
	ctx.f2.f64 = double(float(std::fma(f28.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f1,f27,f0,f1
	ctx.f1.f64 = double(float(std::fma(f27.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,0(r27)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
	// fmadds f2,f27,f8,f2
	ctx.f2.f64 = double(float(std::fma(f27.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f2,4(r27)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r27.u32 + 4, temp.u32);
	// lfs f1,44(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,36(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,32(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 32);
	f31.f64 = double(temp.f32);
	// lfs f30,40(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 40);
	f30.f64 = double(temp.f32);
	// fmuls f29,f30,f10
	f29.f64 = double(float(f30.f64 * ctx.f10.f64));
	// fmuls f30,f30,f4
	f30.f64 = double(float(f30.f64 * ctx.f4.f64));
	// lfs f28,24(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	f28.f64 = double(temp.f32);
	// fmadds f29,f1,f9,f29
	f29.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, f29.f64)));
	// lfs f27,28(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 28);
	f27.f64 = double(temp.f32);
	// fmadds f1,f1,f3,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f3.f64, f30.f64)));
	// fmadds f30,f2,f11,f29
	f30.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, f29.f64)));
	// fmadds f2,f2,f5,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f5.f64, ctx.f1.f64)));
	// fmadds f1,f31,f12,f30
	ctx.f1.f64 = double(float(std::fma(f31.f64, ctx.f12.f64, f30.f64)));
	// fmadds f2,f31,f6,f2
	ctx.f2.f64 = double(float(std::fma(f31.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmadds f1,f27,f13,f1
	ctx.f1.f64 = double(float(std::fma(f27.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f2,f27,f7,f2
	ctx.f2.f64 = double(float(std::fma(f27.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f1,f28,f0,f1
	ctx.f1.f64 = double(float(std::fma(f28.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,8(r27)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r27.u32 + 8, temp.u32);
	// fmadds f2,f28,f8,f2
	ctx.f2.f64 = double(float(std::fma(f28.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f2,12(r27)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r27.u32 + 12, temp.u32);
	// lfs f1,68(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,60(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,56(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 56);
	f31.f64 = double(temp.f32);
	// lfs f30,64(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 64);
	f30.f64 = double(temp.f32);
	// fmuls f29,f30,f10
	f29.f64 = double(float(f30.f64 * ctx.f10.f64));
	// fmuls f30,f30,f4
	f30.f64 = double(float(f30.f64 * ctx.f4.f64));
	// lfs f28,48(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	f28.f64 = double(temp.f32);
	// fmadds f29,f1,f9,f29
	f29.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, f29.f64)));
	// lfs f27,52(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	f27.f64 = double(temp.f32);
	// fmadds f1,f1,f3,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f3.f64, f30.f64)));
	// fmadds f30,f2,f11,f29
	f30.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, f29.f64)));
	// fmadds f2,f2,f5,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f5.f64, ctx.f1.f64)));
	// fmadds f1,f31,f12,f30
	ctx.f1.f64 = double(float(std::fma(f31.f64, ctx.f12.f64, f30.f64)));
	// fmadds f2,f31,f6,f2
	ctx.f2.f64 = double(float(std::fma(f31.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmadds f1,f27,f13,f1
	ctx.f1.f64 = double(float(std::fma(f27.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f2,f27,f7,f2
	ctx.f2.f64 = double(float(std::fma(f27.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f1,f28,f0,f1
	ctx.f1.f64 = double(float(std::fma(f28.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,16(r27)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r27.u32 + 16, temp.u32);
	// fmadds f2,f28,f8,f2
	ctx.f2.f64 = double(float(std::fma(f28.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f2,20(r27)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r27.u32 + 20, temp.u32);
	// lfs f1,92(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,84(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,80(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 80);
	f31.f64 = double(temp.f32);
	// lfs f30,88(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 88);
	f30.f64 = double(temp.f32);
	// fmuls f29,f30,f10
	f29.f64 = double(float(f30.f64 * ctx.f10.f64));
	// fmuls f30,f30,f4
	f30.f64 = double(float(f30.f64 * ctx.f4.f64));
	// lfs f28,72(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 72);
	f28.f64 = double(temp.f32);
	// fmadds f29,f1,f9,f29
	f29.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, f29.f64)));
	// lfs f27,76(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 76);
	f27.f64 = double(temp.f32);
	// addi r29,r29,96
	r29.s64 = r29.s64 + 96;
	// fmadds f1,f1,f3,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f3.f64, f30.f64)));
	// fmadds f30,f2,f11,f29
	f30.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, f29.f64)));
	// fmadds f2,f2,f5,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f5.f64, ctx.f1.f64)));
	// fmadds f1,f31,f12,f30
	ctx.f1.f64 = double(float(std::fma(f31.f64, ctx.f12.f64, f30.f64)));
	// fmadds f2,f31,f6,f2
	ctx.f2.f64 = double(float(std::fma(f31.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmadds f1,f27,f13,f1
	ctx.f1.f64 = double(float(std::fma(f27.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f2,f27,f7,f2
	ctx.f2.f64 = double(float(std::fma(f27.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f1,f28,f0,f1
	ctx.f1.f64 = double(float(std::fma(f28.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,24(r27)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r27.u32 + 24, temp.u32);
	// fmadds f2,f28,f8,f2
	ctx.f2.f64 = double(float(std::fma(f28.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f2,28(r27)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r27.u32 + 28, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r27,r27,32
	r27.s64 = r27.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82301450
	if (ctx.cr6.lt) goto loc_82301450;
loc_823015A4:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x823019e4
	if (!ctx.cr6.lt) goto loc_823019E4;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// addi r10,r27,-4
	ctx.r10.s64 = r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823015BC:
	// lfs f2,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// lfs f31,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f31.f64 = double(temp.f32);
	// fmuls f30,f2,f4
	f30.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// lfs f29,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f29.f64 = double(temp.f32);
	// lfs f28,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f28.f64 = double(temp.f32);
	// lfs f27,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	f27.f64 = double(temp.f32);
	// lfsu f2,24(r11)
	ea = 24 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f2.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f1,f2,f9,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f9.f64, ctx.f1.f64)));
	// fmadds f2,f2,f3,f30
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f3.f64, f30.f64)));
	// fmadds f1,f27,f11,f1
	ctx.f1.f64 = double(float(std::fma(f27.f64, ctx.f11.f64, ctx.f1.f64)));
	// fmadds f2,f27,f5,f2
	ctx.f2.f64 = double(float(std::fma(f27.f64, ctx.f5.f64, ctx.f2.f64)));
	// fmadds f1,f28,f12,f1
	ctx.f1.f64 = double(float(std::fma(f28.f64, ctx.f12.f64, ctx.f1.f64)));
	// fmadds f2,f28,f6,f2
	ctx.f2.f64 = double(float(std::fma(f28.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmadds f1,f29,f13,f1
	ctx.f1.f64 = double(float(std::fma(f29.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f2,f29,f7,f2
	ctx.f2.f64 = double(float(std::fma(f29.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f1,f31,f0,f1
	ctx.f1.f64 = double(float(std::fma(f31.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,4(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmadds f2,f31,f8,f2
	ctx.f2.f64 = double(float(std::fma(f31.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfsu f2,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823015bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823015BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x822d4f80
	ctx.lr = 0x82301620;
	// b 0x822d4eb4
	return;
loc_82301624:
	// cmpw cr6,r20,r19
	ctx.cr6.compare<int32_t>(r20.s32, r19.s32, ctx.xer);
	// blt cr6,0x82301804
	if (ctx.cr6.lt) goto loc_82301804;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823019e4
	if (!ctx.cr6.gt) goto loc_823019E4;
	// neg r11,r19
	ctx.r11.s64 = static_cast<int64_t>(-r19.u64);
	// neg r10,r20
	ctx.r10.s64 = static_cast<int64_t>(-r20.u64);
	// rlwinm r23,r20,2,0,29
	r23.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r19,2,0,29
	r24.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r11,2,0,29
	r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r10,2,0,29
	r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r26,r6,r31
	r26.u64 = r31.u64 - ctx.r6.u64;
	// subfic r28,r4,-8
	ctx.xer.ca = ctx.r4.u32 <= 4294967288;
	r28.u64 = static_cast<uint64_t>(-8) - ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
loc_82301658:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x82301668;
	sub_822D5870(ctx, base);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x82301768
	if (!ctx.cr6.gt) goto loc_82301768;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_82301678:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r20,4
	ctx.cr6.compare<int32_t>(r20.s32, 4, ctx.xer);
	// blt cr6,0x82301724
	if (ctx.cr6.lt) goto loc_82301724;
	// addi r5,r20,-3
	ctx.r5.s64 = r20.s64 + -3;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r29,8
	ctx.r10.s64 = r29.s64 + 8;
	// addi r4,r28,12
	ctx.r4.s64 = r28.s64 + 12;
loc_82301694:
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 372);
	// add r7,r28,r10
	ctx.r7.u64 = r28.u64 + ctx.r10.u64;
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfsx f13,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lfsx f12,r6,r7
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsx f11,r11,r31
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 372);
	// lfs f10,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lfs f8,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f8,f10,f11
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f11.f64)));
	// stfsx f7,r11,r31
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 372);
	// lfs f6,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// lwzx r7,r6,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lfsx f4,r7,r9
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f6,f7
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f6.f64, ctx.f7.f64)));
	// stfsx f3,r11,r31
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 372);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// lfs f2,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lwzx r7,r6,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfsx f0,r7,r4
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f2,f3
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f2.f64, ctx.f3.f64)));
	// stfsx f13,r11,r31
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// blt cr6,0x82301694
	if (ctx.cr6.lt) goto loc_82301694;
loc_82301724:
	// cmpw cr6,r8,r20
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r20.s32, ctx.xer);
	// bge cr6,0x8230175c
	if (!ctx.cr6.lt) goto loc_8230175C;
	// subf r9,r8,r20
	ctx.r9.u64 = r20.u64 - ctx.r8.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82301738:
	// lwz r9,372(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 372);
	// lfsx f0,r10,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lfsx f12,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsx f11,r11,r31
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// bdnz 0x82301738
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82301738;
loc_8230175C:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82301678
	if (!ctx.cr0.eq) goto loc_82301678;
loc_82301768:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(r19.s32, 4, ctx.xer);
	// blt cr6,0x823017b0
	if (ctx.cr6.lt) goto loc_823017B0;
	// addi r8,r19,-3
	ctx.r8.s64 = r19.s64 + -3;
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
	// addi r11,r27,4
	ctx.r11.s64 = r27.s64 + 4;
loc_82301780:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r26,r11
	temp.u32 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x82301780
	if (ctx.cr6.lt) goto loc_82301780;
loc_823017B0:
	// cmpw cr6,r9,r19
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r19.s32, ctx.xer);
	// bge cr6,0x823017d8
	if (!ctx.cr6.lt) goto loc_823017D8;
	// subf r10,r9,r19
	ctx.r10.u64 = r19.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823017C8:
	// lfsx f0,r26,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823017c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823017C8;
loc_823017D8:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// add r29,r23,r29
	r29.u64 = r23.u64 + r29.u64;
	// add r28,r28,r21
	r28.u64 = r28.u64 + r21.u64;
	// add r27,r24,r27
	r27.u64 = r24.u64 + r27.u64;
	// add r26,r26,r22
	r26.u64 = r26.u64 + r22.u64;
	// bne 0x82301658
	if (!ctx.cr0.eq) goto loc_82301658;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x822d4f80
	ctx.lr = 0x82301800;
	// b 0x822d4eb4
	return;
loc_82301804:
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// mullw r10,r11,r20
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r20.s32);
	// mullw r9,r11,r19
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r19.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r4
	r28.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r26,r9,r6
	r26.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823019e4
	if (ctx.cr6.lt) goto loc_823019E4;
	// neg r11,r19
	ctx.r11.s64 = static_cast<int64_t>(-r19.u64);
	// neg r10,r20
	ctx.r10.s64 = static_cast<int64_t>(-r20.u64);
	// rlwinm r23,r20,2,0,29
	r23.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r19,2,0,29
	r24.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r11,2,0,29
	r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r10,2,0,29
	r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r27,r26,r31
	r27.u64 = r31.u64 - r26.u64;
	// subfic r29,r28,-8
	ctx.xer.ca = r28.u32 <= 4294967288;
	r29.u64 = static_cast<uint64_t>(-8) - r28.u64;
loc_8230184C:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x8230185C;
	sub_822D5870(ctx, base);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x8230195c
	if (!ctx.cr6.gt) goto loc_8230195C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_8230186C:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r20,4
	ctx.cr6.compare<int32_t>(r20.s32, 4, ctx.xer);
	// blt cr6,0x82301918
	if (ctx.cr6.lt) goto loc_82301918;
	// addi r5,r20,-3
	ctx.r5.s64 = r20.s64 + -3;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r28,8
	ctx.r10.s64 = r28.s64 + 8;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
loc_82301888:
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 372);
	// add r7,r29,r10
	ctx.r7.u64 = r29.u64 + ctx.r10.u64;
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfsx f13,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lfsx f12,r6,r7
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsx f11,r11,r31
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 372);
	// lfs f10,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lfs f8,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f8,f10,f11
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f11.f64)));
	// stfsx f7,r11,r31
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 372);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// lfs f6,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lwzx r7,r6,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lfsx f4,r7,r9
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f6,f7
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f6.f64, ctx.f7.f64)));
	// stfsx f3,r11,r31
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 372);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// lfs f1,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r7,r6,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lfsx f0,r7,r10
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f1,f3
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, ctx.f3.f64)));
	// stfsx f13,r11,r31
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// blt cr6,0x82301888
	if (ctx.cr6.lt) goto loc_82301888;
loc_82301918:
	// cmpw cr6,r8,r20
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r20.s32, ctx.xer);
	// bge cr6,0x82301950
	if (!ctx.cr6.lt) goto loc_82301950;
	// subf r9,r8,r20
	ctx.r9.u64 = r20.u64 - ctx.r8.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8230192C:
	// lwz r9,372(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 372);
	// lfsx f0,r10,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lfsx f12,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsx f11,r11,r31
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// bdnz 0x8230192c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230192C;
loc_82301950:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8230186c
	if (!ctx.cr0.eq) goto loc_8230186C;
loc_8230195C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(r19.s32, 4, ctx.xer);
	// blt cr6,0x823019a4
	if (ctx.cr6.lt) goto loc_823019A4;
	// addi r8,r19,-3
	ctx.r8.s64 = r19.s64 + -3;
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
	// addi r11,r26,4
	ctx.r11.s64 = r26.s64 + 4;
loc_82301974:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r27,r11
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x82301974
	if (ctx.cr6.lt) goto loc_82301974;
loc_823019A4:
	// cmpw cr6,r9,r19
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r19.s32, ctx.xer);
	// bge cr6,0x823019cc
	if (!ctx.cr6.lt) goto loc_823019CC;
	// subf r10,r9,r19
	ctx.r10.u64 = r19.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823019BC:
	// lfsx f0,r27,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823019bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823019BC;
loc_823019CC:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// subf r28,r23,r28
	r28.u64 = r28.u64 - r23.u64;
	// subf r29,r21,r29
	r29.u64 = r29.u64 - r21.u64;
	// subf r26,r24,r26
	r26.u64 = r26.u64 - r24.u64;
	// subf r27,r22,r27
	r27.u64 = r27.u64 - r22.u64;
	// bge 0x8230184c
	if (!ctx.cr0.lt) goto loc_8230184C;
loc_823019E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x822d4f80
	ctx.lr = 0x823019F4;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_82326400) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82326408;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,68(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82333748
	ctx.lr = 0x82326420;
	sub_82333748(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// addi r5,r11,84
	ctx.r5.s64 = ctx.r11.s64 + 84;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82326448
	if (ctx.cr6.eq) goto loc_82326448;
	// li r4,25
	ctx.r4.s64 = 25;
	// lwz r3,4228(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4228);
	// bl 0x822f94e8
	ctx.lr = 0x82326444;
	sub_822F94E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82326448:
	// li r30,0
	r30.s64 = 0;
	// stw r30,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, r30.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,4228(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4228);
	// lwz r4,4232(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4232);
	// bl 0x822f9080
	ctx.lr = 0x82326460;
	sub_822F9080(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232647c
	if (ctx.cr6.eq) goto loc_8232647C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4228(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4228);
	// li r4,25
	ctx.r4.s64 = 25;
	// bl 0x822f94e8
	ctx.lr = 0x8232647C;
	sub_822F94E8(ctx, base);
loc_8232647C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82326008
	ctx.lr = 0x82326484;
	sub_82326008(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823264a8
	if (ctx.cr6.lt) goto loc_823264A8;
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
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
loc_823264A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82328CC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// li r8,1
	ctx.r8.s64 = 1;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r8,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// std r7,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f11,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	ctx.f11.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f0,396(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// bne cr6,0x82328e70
	if (!ctx.cr6.eq) goto loc_82328E70;
	// cmpwi cr6,r11,22050
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22050, ctx.xer);
	// bne cr6,0x82328d60
	if (!ctx.cr6.eq) goto loc_82328D60;
loc_82328D0C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-24576(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24576);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82328eac
	if (!ctx.cr6.lt) goto loc_82328EAC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f12,-24572(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24572);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82328d48
	if (ctx.cr6.lt) goto loc_82328D48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2356(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2356);
	ctx.f13.f64 = double(temp.f32);
loc_82328D38:
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,396(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82328D48:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16628);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,396(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82328D60:
	// cmplwi cr6,r11,44100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44100, ctx.xer);
	// bne cr6,0x82328d94
	if (!ctx.cr6.eq) goto loc_82328D94;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-24920(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24920);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82328eac
	if (!ctx.cr6.lt) goto loc_82328EAC;
loc_82328D7C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16272);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,396(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82328D94:
	// cmpwi cr6,r11,16000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16000, ctx.xer);
	// bne cr6,0x82328dd8
	if (!ctx.cr6.eq) goto loc_82328DD8;
loc_82328D9C:
	// lfs f13,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x82328dc0
	if (ctx.cr6.gt) goto loc_82328DC0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2352);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,396(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82328DC0:
	// li r11,3
	ctx.r11.s64 = 3;
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,396(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// stw r11,408(r3)
	REX_STORE_U32(ctx.r3.u32 + 408, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82328DD8:
	// cmpwi cr6,r11,11025
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11025, ctx.xer);
	// beq cr6,0x82328ed4
	if (ctx.cr6.eq) goto loc_82328ED4;
	// cmpwi cr6,r11,8000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8000, ctx.xer);
	// bne cr6,0x82328e24
	if (!ctx.cr6.eq) goto loc_82328E24;
loc_82328DE8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-7404(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -7404);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82328f34
	if (!ctx.cr6.gt) goto loc_82328F34;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,17064(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17064);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82328eac
	if (ctx.cr6.gt) goto loc_82328EAC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,17220(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17220);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,396(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82328E24:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16232(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82328e50
	if (ctx.cr6.lt) goto loc_82328E50;
loc_82328E38:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,17064(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17064);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,396(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82328E50:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16628);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82328f34
	if (ctx.cr6.lt) goto loc_82328F34;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,396(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82328E70:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x82328eac
	if (ctx.cr6.gt) goto loc_82328EAC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,48000
	ctx.r9.u64 = ctx.r10.u64 | 48000;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82328eac
	if (ctx.cr6.gt) goto loc_82328EAC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,44100
	ctx.r9.u64 = ctx.r10.u64 | 44100;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82328ebc
	if (ctx.cr6.lt) goto loc_82328EBC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-24920(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24920);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82328d7c
	if (ctx.cr6.lt) goto loc_82328D7C;
loc_82328EAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82328EBC:
	// cmpwi cr6,r11,22050
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22050, ctx.xer);
	// bge cr6,0x82328d0c
	if (!ctx.cr6.lt) goto loc_82328D0C;
	// cmpwi cr6,r11,16000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16000, ctx.xer);
	// bge cr6,0x82328d9c
	if (!ctx.cr6.lt) goto loc_82328D9C;
	// cmpwi cr6,r11,11025
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11025, ctx.xer);
	// blt cr6,0x82328f08
	if (ctx.cr6.lt) goto loc_82328F08;
loc_82328ED4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2356(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2356);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16688(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16688);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f10,396(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x82328f3c
	if (ctx.cr6.lt) goto loc_82328F3C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,408(r3)
	REX_STORE_U32(ctx.r3.u32 + 408, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82328F08:
	// cmpwi cr6,r11,8000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8000, ctx.xer);
	// bge cr6,0x82328de8
	if (!ctx.cr6.lt) goto loc_82328DE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16232(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82328e38
	if (!ctx.cr6.lt) goto loc_82328E38;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16628(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16628);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82328d38
	if (!ctx.cr6.lt) goto loc_82328D38;
loc_82328F34:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,396(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 396, temp.u32);
loc_82328F3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233A290) {
	REX_FUNC_PROLOGUE();
	// lwz r9,3980(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3980);
	// addi r8,r4,15
	ctx.r8.s64 = ctx.r4.s64 + 15;
	// addi r7,r5,15
	ctx.r7.s64 = ctx.r5.s64 + 15;
	// rlwinm r10,r8,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r11,r7,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8233a2b8
	if (ctx.cr6.eq) goto loc_8233A2B8;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x8233a2c0
	goto loc_8233A2C0;
loc_8233A2B8:
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
loc_8233A2C0:
	// lwz r7,15536(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// cmpwi cr6,r7,7
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 7, ctx.xer);
	// bne cr6,0x8233a2d8
	if (!ctx.cr6.eq) goto loc_8233A2D8;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
loc_8233A2D8:
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r8,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r8.u32);
	// stw r9,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r7,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r7.u32);
	// stw r5,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233CE58) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// lwz r10,3980(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3980);
	// lis r9,-32202
	ctx.r9.s64 = -2110390272;
	// lis r8,-32202
	ctx.r8.s64 = -2110390272;
	// lis r7,-32202
	ctx.r7.s64 = -2110390272;
	// addi r4,r11,16048
	ctx.r4.s64 = ctx.r11.s64 + 16048;
	// lis r6,-32202
	ctx.r6.s64 = -2110390272;
	// addi r11,r9,18040
	ctx.r11.s64 = ctx.r9.s64 + 18040;
	// stw r4,3196(r3)
	REX_STORE_U32(ctx.r3.u32 + 3196, ctx.r4.u32);
	// addi r9,r8,17080
	ctx.r9.s64 = ctx.r8.s64 + 17080;
	// lis r5,-32202
	ctx.r5.s64 = -2110390272;
	// stw r11,3200(r3)
	REX_STORE_U32(ctx.r3.u32 + 3200, ctx.r11.u32);
	// addi r8,r7,18912
	ctx.r8.s64 = ctx.r7.s64 + 18912;
	// stw r9,3216(r3)
	REX_STORE_U32(ctx.r3.u32 + 3216, ctx.r9.u32);
	// addi r7,r6,19416
	ctx.r7.s64 = ctx.r6.s64 + 19416;
	// addi r6,r5,21208
	ctx.r6.s64 = ctx.r5.s64 + 21208;
	// stw r8,3204(r3)
	REX_STORE_U32(ctx.r3.u32 + 3204, ctx.r8.u32);
	// stw r7,3208(r3)
	REX_STORE_U32(ctx.r3.u32 + 3208, ctx.r7.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r6,3212(r3)
	REX_STORE_U32(ctx.r3.u32 + 3212, ctx.r6.u32);
	// beq cr6,0x8233ced0
	if (ctx.cr6.eq) goto loc_8233CED0;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// lis r9,-32202
	ctx.r9.s64 = -2110390272;
	// addi r8,r11,17080
	ctx.r8.s64 = ctx.r11.s64 + 17080;
	// addi r7,r10,19976
	ctx.r7.s64 = ctx.r10.s64 + 19976;
	// addi r6,r9,20560
	ctx.r6.s64 = ctx.r9.s64 + 20560;
	// stw r8,3200(r3)
	REX_STORE_U32(ctx.r3.u32 + 3200, ctx.r8.u32);
	// stw r7,3204(r3)
	REX_STORE_U32(ctx.r3.u32 + 3204, ctx.r7.u32);
	// stw r6,3208(r3)
	REX_STORE_U32(ctx.r3.u32 + 3208, ctx.r6.u32);
loc_8233CED0:
	// lwz r11,1792(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233cf2c
	if (ctx.cr6.eq) goto loc_8233CF2C;
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// lis r9,-32198
	ctx.r9.s64 = -2110128128;
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// addi r4,r11,-31928
	ctx.r4.s64 = ctx.r11.s64 + -31928;
	// lis r7,-32198
	ctx.r7.s64 = -2110128128;
	// addi r11,r10,32680
	ctx.r11.s64 = ctx.r10.s64 + 32680;
	// stw r4,3196(r3)
	REX_STORE_U32(ctx.r3.u32 + 3196, ctx.r4.u32);
	// addi r10,r9,-30824
	ctx.r10.s64 = ctx.r9.s64 + -30824;
	// lis r6,-32199
	ctx.r6.s64 = -2110193664;
	// stw r11,3200(r3)
	REX_STORE_U32(ctx.r3.u32 + 3200, ctx.r11.u32);
	// addi r9,r8,-29920
	ctx.r9.s64 = ctx.r8.s64 + -29920;
	// stw r10,3204(r3)
	REX_STORE_U32(ctx.r3.u32 + 3204, ctx.r10.u32);
	// addi r8,r7,-29080
	ctx.r8.s64 = ctx.r7.s64 + -29080;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,3208(r3)
	REX_STORE_U32(ctx.r3.u32 + 3208, ctx.r9.u32);
	// addi r7,r6,32680
	ctx.r7.s64 = ctx.r6.s64 + 32680;
	// stw r8,3212(r3)
	REX_STORE_U32(ctx.r3.u32 + 3212, ctx.r8.u32);
	// stw r5,1800(r3)
	REX_STORE_U32(ctx.r3.u32 + 1800, ctx.r5.u32);
	// stw r7,3216(r3)
	REX_STORE_U32(ctx.r3.u32 + 3216, ctx.r7.u32);
loc_8233CF2C:
	// lwz r11,1800(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1800);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,3
	ctx.r9.s64 = 3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8233cf58
	if (ctx.cr6.eq) goto loc_8233CF58;
	// stw r11,1920(r3)
	REX_STORE_U32(ctx.r3.u32 + 1920, ctx.r11.u32);
	// stw r10,1924(r3)
	REX_STORE_U32(ctx.r3.u32 + 1924, ctx.r10.u32);
	// stw r11,1928(r3)
	REX_STORE_U32(ctx.r3.u32 + 1928, ctx.r11.u32);
	// stw r9,1932(r3)
	REX_STORE_U32(ctx.r3.u32 + 1932, ctx.r9.u32);
	// blr 
	return;
loc_8233CF58:
	// stw r11,1924(r3)
	REX_STORE_U32(ctx.r3.u32 + 1924, ctx.r11.u32);
	// stw r10,1920(r3)
	REX_STORE_U32(ctx.r3.u32 + 1920, ctx.r10.u32);
	// stw r9,1928(r3)
	REX_STORE_U32(ctx.r3.u32 + 1928, ctx.r9.u32);
	// stw r11,1932(r3)
	REX_STORE_U32(ctx.r3.u32 + 1932, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82342AF8) {
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
	// addi r30,r3,3764
	r30.s64 = ctx.r3.s64 + 3764;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,3760
	ctx.r3.s64 = ctx.r3.s64 + 3760;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823530d0
	ctx.lr = 0x82342B20;
	sub_823530D0(ctx, base);
	// lwz r11,3760(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342b44
	if (ctx.cr6.eq) goto loc_82342B44;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,3832(r31)
	REX_STORE_U32(r31.u32 + 3832, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,3836(r31)
	REX_STORE_U32(r31.u32 + 3836, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,3840(r31)
	REX_STORE_U32(r31.u32 + 3840, ctx.r8.u32);
loc_82342B44:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342b68
	if (ctx.cr6.eq) goto loc_82342B68;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,3844(r31)
	REX_STORE_U32(r31.u32 + 3844, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,3848(r31)
	REX_STORE_U32(r31.u32 + 3848, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,3852(r31)
	REX_STORE_U32(r31.u32 + 3852, ctx.r8.u32);
loc_82342B68:
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

DEFINE_REX_FUNC(sub_823494B8) {
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
	// lwz r11,3720(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3720);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234957c
	if (!ctx.cr6.eq) goto loc_8234957C;
	// lwz r11,15536(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x82349514
	if (ctx.cr6.lt) goto loc_82349514;
	// bl 0x82347c68
	ctx.lr = 0x823494E8;
	sub_82347C68(ctx, base);
	// lwz r11,15536(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82349550
	if (!ctx.cr6.eq) goto loc_82349550;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82349538
	if (!ctx.cr6.eq) goto loc_82349538;
loc_823494FC:
	// li r3,-3
	ctx.r3.s64 = -3;
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
loc_82349514:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82349548
	if (ctx.cr6.eq) goto loc_82349548;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8234952c
	if (!ctx.cr6.eq) goto loc_8234952C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82347c68
	ctx.lr = 0x8234952C;
	sub_82347C68(ctx, base);
loc_8234952C:
	// cmpwi cr6,r4,22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 22, ctx.xer);
	// ble cr6,0x823494fc
	if (!ctx.cr6.gt) goto loc_823494FC;
	// addi r4,r4,-22
	ctx.r4.s64 = ctx.r4.s64 + -22;
loc_82349538:
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 140);
	// bl 0x823904d0
	ctx.lr = 0x82349540;
	sub_823904D0(ctx, base);
	// stw r3,15532(r31)
	REX_STORE_U32(r31.u32 + 15532, ctx.r3.u32);
	// b 0x82349550
	goto loc_82349550;
loc_82349548:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// stw r11,15532(r31)
	REX_STORE_U32(r31.u32 + 15532, ctx.r11.u32);
loc_82349550:
	// lwz r11,15572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234956c
	if (!ctx.cr6.eq) goto loc_8234956C;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82349570
	if (!ctx.cr6.eq) goto loc_82349570;
loc_8234956C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82349570:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,15540(r31)
	REX_STORE_U32(r31.u32 + 15540, ctx.r11.u32);
	// stw r10,3720(r31)
	REX_STORE_U32(r31.u32 + 3720, ctx.r10.u32);
loc_8234957C:
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

DEFINE_REX_FUNC(sub_823501F8) {
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
	ctx.lr = 0x82350200;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// lwz r17,316(r3)
	r17.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// lwz r16,320(r3)
	r16.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// li r20,1
	r20.s64 = 1;
	// lwz r28,40(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r7,20(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r6,24(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r24,0(r10)
	r24.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r19,28(r10)
	r19.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// addi r23,r11,1
	r23.s64 = ctx.r11.s64 + 1;
	// lwz r22,32(r10)
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r15,4(r10)
	r15.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// beq cr6,0x82350ad8
	if (ctx.cr6.eq) goto loc_82350AD8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r14,3
	r14.s64 = 3;
	// ori r26,r11,32768
	r26.u64 = ctx.r11.u64 | 32768;
loc_82350278:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x82350290
	if (!ctx.cr6.eq) goto loc_82350290;
	// li r30,0
	r30.s64 = 0;
	// stw r14,20(r31)
	REX_STORE_U32(r31.u32 + 20, r14.u32);
	// b 0x823503b4
	goto loc_823503B4;
loc_82350290:
	// lbz r4,8(r24)
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 0);
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
	// blt cr6,0x8235037c
	if (ctx.cr6.lt) goto loc_8235037C;
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
	// bge cr6,0x82350374
	if (!ctx.cr6.lt) goto loc_82350374;
loc_823502DC:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82350308
	if (ctx.cr6.lt) goto loc_82350308;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x823502F8;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823502dc
	if (ctx.cr6.eq) goto loc_823502DC;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x823503b4
	goto loc_823503B4;
loc_82350308:
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
loc_82350374:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x823503b4
	goto loc_823503B4;
loc_8235037C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x82350384;
	sub_82337F50(ctx, base);
loc_82350384:
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
	// bl 0x82337f50
	ctx.lr = 0x8235039C;
	sub_82337F50(ctx, base);
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
	// blt cr6,0x82350384
	if (ctx.cr6.lt) goto loc_82350384;
loc_823503B4:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82350acc
	if (!ctx.cr6.eq) goto loc_82350ACC;
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r31,r15
	ctx.cr6.compare<int32_t>(r31.s32, r15.s32, ctx.xer);
	// bgt cr6,0x82350acc
	if (ctx.cr6.gt) goto loc_82350ACC;
	// beq cr6,0x82350434
	if (ctx.cr6.eq) goto loc_82350434;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// bge cr6,0x82350acc
	if (!ctx.cr6.lt) goto loc_82350ACC;
	// subfc r11,r23,r31
	ctx.xer.ca = r31.u32 >= r23.u32;
	ctx.r11.u64 = r31.u64 - r23.u64;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r7,r10,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// lbzx r28,r31,r22
	r28.u64 = REX_LOAD_U8(r31.u32 + r22.u32);
	// subfze r25,r9
	temp.u8 = ~ctx.r9.u32 + ctx.xer.ca < ~ctx.r9.u32;
	r25.u64 = ~ctx.r9.u64 + ctx.xer.ca;
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
	// bge 0x82350414
	if (!ctx.cr0.lt) goto loc_82350414;
	// bl 0x823380c8
	ctx.lr = 0x82350414;
	sub_823380C8(ctx, base);
loc_82350414:
	// lbzx r11,r31,r19
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + r19.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8235042c
	if (ctx.cr6.eq) goto loc_8235042C;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// neg r31,r10
	r31.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// b 0x82350a18
	goto loc_82350A18;
loc_8235042C:
	// extsb r31,r11
	r31.s64 = ctx.r11.s8;
	// b 0x82350a18
	goto loc_82350A18;
loc_82350434:
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
	// bge 0x82350458
	if (!ctx.cr0.lt) goto loc_82350458;
	// bl 0x823380c8
	ctx.lr = 0x82350458;
	sub_823380C8(ctx, base);
loc_82350458:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82350634
	if (!ctx.cr6.eq) goto loc_82350634;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82350acc
	if (!ctx.cr6.eq) goto loc_82350ACC;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x82350484
	if (!ctx.cr6.eq) goto loc_82350484;
	// li r30,0
	r30.s64 = 0;
	// stw r14,20(r31)
	REX_STORE_U32(r31.u32 + 20, r14.u32);
	// b 0x823505a8
	goto loc_823505A8;
loc_82350484:
	// lbz r4,8(r24)
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 0);
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
	// blt cr6,0x82350570
	if (ctx.cr6.lt) goto loc_82350570;
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
	// bge cr6,0x82350568
	if (!ctx.cr6.lt) goto loc_82350568;
loc_823504D0:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823504fc
	if (ctx.cr6.lt) goto loc_823504FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x823504EC;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823504d0
	if (ctx.cr6.eq) goto loc_823504D0;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x823505a8
	goto loc_823505A8;
loc_823504FC:
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
loc_82350568:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x823505a8
	goto loc_823505A8;
loc_82350570:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x82350578;
	sub_82337F50(ctx, base);
loc_82350578:
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
	// bl 0x82337f50
	ctx.lr = 0x82350590;
	sub_82337F50(ctx, base);
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
	// blt cr6,0x82350578
	if (ctx.cr6.lt) goto loc_82350578;
loc_823505A8:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82350acc
	if (!ctx.cr6.eq) goto loc_82350ACC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r15.s32, ctx.xer);
	// beq cr6,0x82350acc
	if (ctx.cr6.eq) goto loc_82350ACC;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bge cr6,0x82350acc
	if (!ctx.cr6.lt) goto loc_82350ACC;
	// lbzx r10,r11,r19
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r19.u32);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// lbzx r28,r11,r22
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + r22.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// blt cr6,0x823505f0
	if (ctx.cr6.lt) goto loc_823505F0;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r25,1
	r25.s64 = 1;
	// b 0x823505f4
	goto loc_823505F4;
loc_823505F0:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_823505F4:
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
	// bge 0x82350624
	if (!ctx.cr0.lt) goto loc_82350624;
	// bl 0x823380c8
	ctx.lr = 0x82350624;
	sub_823380C8(ctx, base);
loc_82350624:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82350a18
	if (ctx.cr6.eq) goto loc_82350A18;
	// neg r31,r31
	r31.s64 = static_cast<int64_t>(-r31.u64);
	// b 0x82350a18
	goto loc_82350A18;
loc_82350634:
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
	// bge 0x8235065c
	if (!ctx.cr0.lt) goto loc_8235065C;
	// bl 0x823380c8
	ctx.lr = 0x8235065C;
	sub_823380C8(ctx, base);
loc_8235065C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82350838
	if (!ctx.cr6.eq) goto loc_82350838;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82350acc
	if (!ctx.cr6.eq) goto loc_82350ACC;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x82350688
	if (!ctx.cr6.eq) goto loc_82350688;
	// li r30,0
	r30.s64 = 0;
	// stw r14,20(r31)
	REX_STORE_U32(r31.u32 + 20, r14.u32);
	// b 0x823507ac
	goto loc_823507AC;
loc_82350688:
	// lbz r4,8(r24)
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 0);
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
	// blt cr6,0x82350774
	if (ctx.cr6.lt) goto loc_82350774;
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
	// bge cr6,0x8235076c
	if (!ctx.cr6.lt) goto loc_8235076C;
loc_823506D4:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82350700
	if (ctx.cr6.lt) goto loc_82350700;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x823506F0;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823506d4
	if (ctx.cr6.eq) goto loc_823506D4;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x823507ac
	goto loc_823507AC;
loc_82350700:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// neg r4,r10
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r5.u64);
loc_8235076C:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x823507ac
	goto loc_823507AC;
loc_82350774:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x8235077C;
	sub_82337F50(ctx, base);
loc_8235077C:
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
	// bl 0x82337f50
	ctx.lr = 0x82350794;
	sub_82337F50(ctx, base);
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
	// blt cr6,0x8235077c
	if (ctx.cr6.lt) goto loc_8235077C;
loc_823507AC:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82350acc
	if (!ctx.cr6.eq) goto loc_82350ACC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r15.s32, ctx.xer);
	// beq cr6,0x82350acc
	if (ctx.cr6.eq) goto loc_82350ACC;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bge cr6,0x82350acc
	if (!ctx.cr6.lt) goto loc_82350ACC;
	// lbzx r10,r11,r19
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r19.u32);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// lbzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r22.u32);
	// extsb r31,r10
	r31.s64 = ctx.r10.s8;
	// blt cr6,0x823507f4
	if (ctx.cr6.lt) goto loc_823507F4;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r25,1
	r25.s64 = 1;
	// b 0x823507f8
	goto loc_823507F8;
loc_823507F4:
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_823507F8:
	// lbzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82350828
	if (!ctx.cr0.lt) goto loc_82350828;
	// bl 0x823380c8
	ctx.lr = 0x82350828;
	sub_823380C8(ctx, base);
loc_82350828:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82350a18
	if (ctx.cr6.eq) goto loc_82350A18;
	// neg r31,r31
	r31.s64 = static_cast<int64_t>(-r31.u64);
	// b 0x82350a18
	goto loc_82350A18;
loc_82350838:
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
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82350860
	if (!ctx.cr0.lt) goto loc_82350860;
	// bl 0x823380c8
	ctx.lr = 0x82350860;
	sub_823380C8(ctx, base);
loc_82350860:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r25,r30
	r25.u64 = r30.u64;
	// li r30,6
	r30.s64 = 6;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x823508d8
	if (!ctx.cr6.lt) goto loc_823508D8;
loc_82350880:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823508d8
	if (ctx.cr6.eq) goto loc_823508D8;
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
	// bge 0x823508c8
	if (!ctx.cr0.lt) goto loc_823508C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823508C8;
	sub_823380C8(ctx, base);
loc_823508C8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82350880
	if (ctx.cr6.gt) goto loc_82350880;
loc_823508D8:
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
	// bge 0x82350910
	if (!ctx.cr0.lt) goto loc_82350910;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82350910;
	sub_823380C8(ctx, base);
loc_82350910:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r28,r30
	r28.u64 = r30.u64;
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
	// bge 0x82350938
	if (!ctx.cr0.lt) goto loc_82350938;
	// bl 0x823380c8
	ctx.lr = 0x82350938;
	sub_823380C8(ctx, base);
loc_82350938:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,12
	r30.s64 = 12;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bge cr6,0x823509ac
	if (!ctx.cr6.lt) goto loc_823509AC;
loc_82350954:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823509ac
	if (ctx.cr6.eq) goto loc_823509AC;
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
	// bge 0x8235099c
	if (!ctx.cr0.lt) goto loc_8235099C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8235099C;
	sub_823380C8(ctx, base);
loc_8235099C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82350954
	if (ctx.cr6.gt) goto loc_82350954;
loc_823509AC:
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
	// bge 0x823509e4
	if (!ctx.cr0.lt) goto loc_823509E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823509E4;
	sub_823380C8(ctx, base);
loc_823509E4:
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmpwi cr6,r30,2047
	ctx.cr6.compare<int32_t>(r30.s32, 2047, ctx.xer);
	// ble cr6,0x823509f4
	if (!ctx.cr6.gt) goto loc_823509F4;
	// addi r31,r30,-4096
	r31.s64 = r30.s64 + -4096;
loc_823509F4:
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
	// bge 0x82350a18
	if (!ctx.cr0.lt) goto loc_82350A18;
	// bl 0x823380c8
	ctx.lr = 0x82350A18;
	sub_823380C8(ctx, base);
loc_82350A18:
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82350acc
	if (!ctx.cr6.eq) goto loc_82350ACC;
	// add r9,r28,r20
	ctx.r9.u64 = r28.u64 + r20.u64;
	// cmplwi cr6,r9,64
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 64, ctx.xer);
	// bge cr6,0x82350acc
	if (!ctx.cr6.lt) goto loc_82350ACC;
	// lbzx r11,r9,r18
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + r18.u32);
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82350a5c
	if (!ctx.cr6.eq) goto loc_82350A5C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r10,r11,r21
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r21.u32);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + r31.u64;
	// sthx r8,r11,r21
	REX_STORE_U16(ctx.r11.u32 + r21.u32, ctx.r8.u16);
	// b 0x82350ab8
	goto loc_82350AB8;
loc_82350A5C:
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82350a88
	if (!ctx.cr6.eq) goto loc_82350A88;
	// lbzx r11,r9,r18
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + r18.u32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r21
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r21.u32);
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// sthx r7,r11,r21
	REX_STORE_U16(ctx.r11.u32 + r21.u32, ctx.r7.u16);
	// b 0x82350ab8
	goto loc_82350AB8;
loc_82350A88:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82350aa8
	if (!ctx.cr6.gt) goto loc_82350AA8;
	// lwz r8,1764(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 1764);
	// mullw r10,r31,r17
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(r17.s32);
	// add r6,r10,r16
	ctx.r6.u64 = ctx.r10.u64 + r16.u64;
	// stwx r6,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r6.u32);
	// b 0x82350ab8
	goto loc_82350AB8;
loc_82350AA8:
	// lwz r10,1764(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 1764);
	// mullw r8,r31,r17
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(r17.s32);
	// subf r6,r16,r8
	ctx.r6.u64 = ctx.r8.u64 - r16.u64;
	// stwx r6,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r6.u32);
loc_82350AB8:
	// addi r20,r9,1
	r20.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x82350ad8
	if (!ctx.cr6.eq) goto loc_82350AD8;
	// lwz r28,96(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x82350278
	goto loc_82350278;
loc_82350ACC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea0
	return;
loc_82350AD8:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r8,r21,2
	ctx.r8.s64 = r21.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82350AF0:
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82350b0c
	if (!ctx.cr6.eq) goto loc_82350B0C;
	// lwz r11,1764(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1764);
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// b 0x82350b30
	goto loc_82350B30;
loc_82350B0C:
	// lwz r6,1764(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 1764);
	// ble cr6,0x82350b24
	if (!ctx.cr6.gt) goto loc_82350B24;
	// mullw r11,r11,r17
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r17.s32);
	// add r5,r11,r16
	ctx.r5.u64 = ctx.r11.u64 + r16.u64;
	// stwx r5,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r5.u32);
	// b 0x82350b30
	goto loc_82350B30;
loc_82350B24:
	// mullw r5,r11,r17
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(r17.s32);
	// subf r4,r16,r5
	ctx.r4.u64 = ctx.r5.u64 - r16.u64;
	// stwx r4,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r4.u32);
loc_82350B30:
	// lhz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82350b4c
	if (!ctx.cr6.eq) goto loc_82350B4C;
	// lwz r11,1764(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1764);
	// stwx r7,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// b 0x82350b70
	goto loc_82350B70;
loc_82350B4C:
	// lwz r6,1764(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 1764);
	// ble cr6,0x82350b64
	if (!ctx.cr6.gt) goto loc_82350B64;
	// mullw r11,r11,r17
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r17.s32);
	// add r5,r11,r16
	ctx.r5.u64 = ctx.r11.u64 + r16.u64;
	// stwx r5,r9,r6
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r5.u32);
	// b 0x82350b70
	goto loc_82350B70;
loc_82350B64:
	// mullw r5,r11,r17
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(r17.s32);
	// subf r4,r16,r5
	ctx.r4.u64 = ctx.r5.u64 - r16.u64;
	// stwx r4,r9,r6
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r4.u32);
loc_82350B70:
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// bdnz 0x82350af0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82350AF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82378C08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// vspltisb v0,15
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0xF)));
	// srawi. r9,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vslb v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// blelr 
	if (!ctx.cr0.gt) return;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r8,-32
	ctx.r8.s64 = -32;
	// li r7,-16
	ctx.r7.s64 = -16;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// subf r10,r5,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r5.u64;
	// li r9,16
	ctx.r9.s64 = 16;
loc_82378C30:
	// lvx128 v63,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v13,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v12,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v60,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v11,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v59,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v8,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v58,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v10,v59,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vxor128 v9,v58,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddsbs v13,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.s8), simde_mm_load_si128((simde__m128i*)ctx.v13.s8)));
	// vaddsbs v12,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.s8), simde_mm_load_si128((simde__m128i*)ctx.v12.s8)));
	// vaddsbs v11,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.s8), simde_mm_load_si128((simde__m128i*)ctx.v11.s8)));
	// vaddsbs v8,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.s8), simde_mm_load_si128((simde__m128i*)ctx.v8.s8)));
	// vaddsbs v7,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.s8), simde_mm_load_si128((simde__m128i*)ctx.v10.s8)));
	// vaddsbs v6,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.s8), simde_mm_load_si128((simde__m128i*)ctx.v9.s8)));
	// vxor128 v57,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vxor128 v56,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vxor128 v55,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vxor128 v54,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vxor128 v53,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v57,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v52,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v56,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stvx128 v53,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// bdnz 0x82378c30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82378C30;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8237E5D0) {
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
	// bl 0x822d4e60
	ctx.lr = 0x8237E5D8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r23,1
	r23.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8237e658
	if (ctx.cr6.eq) goto loc_8237E658;
	// lwz r31,21968(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 21968);
	// rlwinm r30,r7,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r30
	r31.u64 = REX_LOAD_U32(r31.u32 + r30.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x8237e658
	if (!ctx.cr6.eq) goto loc_8237E658;
	// lwz r31,136(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// addi r30,r7,-1
	r30.s64 = ctx.r7.s64 + -1;
	// lwz r28,1784(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 1784);
	// mullw r30,r30,r31
	r30.s64 = int64_t(r30.s32) * int64_t(r31.s32);
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// rlwinm r30,r30,1,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r30,r28
	r30.u64 = REX_LOAD_U16(r30.u32 + r28.u32);
	// cmplwi cr6,r30,16384
	ctx.cr6.compare<uint32_t>(r30.u32, 16384, ctx.xer);
	// beq cr6,0x8237e648
	if (ctx.cr6.eq) goto loc_8237E648;
	// lwz r30,288(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8237e648
	if (ctx.cr6.eq) goto loc_8237E648;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// bne cr6,0x8237e658
	if (!ctx.cr6.eq) goto loc_8237E658;
loc_8237E648:
	// rlwinm r6,r31,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r22,1932(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 1932);
	// subf r25,r6,r5
	r25.u64 = ctx.r5.u64 - ctx.r6.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
loc_8237E658:
	// lis r30,-32252
	r30.s64 = -2113667072;
	// lis r31,2
	r31.s64 = 131072;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,-22200
	r30.s64 = r30.s64 + -22200;
	// beq cr6,0x8237e804
	if (ctx.cr6.eq) goto loc_8237E804;
	// lwz r24,136(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r27,1784(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1784);
	// mullw r28,r24,r7
	r28.s64 = int64_t(r24.s32) * int64_t(ctx.r7.s32);
	// add r28,r28,r29
	r28.u64 = r28.u64 + r29.u64;
	// rlwinm r28,r28,1,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r28,r27
	r28.u64 = r28.u64 + r27.u64;
	// lhz r28,-2(r28)
	r28.u64 = REX_LOAD_U16(r28.u32 + -2);
	// cmplwi cr6,r28,16384
	ctx.cr6.compare<uint32_t>(r28.u32, 16384, ctx.xer);
	// beq cr6,0x8237e6a4
	if (ctx.cr6.eq) goto loc_8237E6A4;
	// lwz r28,288(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8237e6a4
	if (ctx.cr6.eq) goto loc_8237E6A4;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// bne cr6,0x8237e804
	if (!ctx.cr6.eq) goto loc_8237E804;
loc_8237E6A4:
	// lwz r22,1928(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 1928);
	// addic. r6,r5,-32
	ctx.xer.ca = ctx.r5.u32 > 31;
	ctx.r6.s64 = ctx.r5.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8237eb44
	if (ctx.cr0.eq) goto loc_8237EB44;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8237e804
	if (ctx.cr6.eq) goto loc_8237E804;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// li r26,0
	r26.s64 = 0;
	// mullw r7,r7,r24
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r24.s32);
	// add r5,r7,r29
	ctx.r5.u64 = ctx.r7.u64 + r29.u64;
	// rlwinm r7,r5,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 + r27.u64;
	// lhz r5,-2(r7)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + -2);
	// cmplwi cr6,r5,16384
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16384, ctx.xer);
	// beq cr6,0x8237e6f0
	if (ctx.cr6.eq) goto loc_8237E6F0;
	// lwz r7,288(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8237e6f0
	if (ctx.cr6.eq) goto loc_8237E6F0;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x8237e704
	if (!ctx.cr6.eq) goto loc_8237E704;
loc_8237E6F0:
	// lwz r7,1924(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 1924);
	// addi r7,r7,-16
	ctx.r7.s64 = ctx.r7.s64 + -16;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r5,r25
	ctx.r7.u64 = REX_LOAD_U16(ctx.r5.u32 + r25.u32);
	// extsh r26,r7
	r26.s64 = ctx.r7.s16;
loc_8237E704:
	// lwz r5,136(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// lbz r29,4(r4)
	r29.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// rlwinm r28,r5,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,6608(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 6608);
	// rotlwi r27,r29,2
	r27.u64 = __builtin_rotateleft32(r29.u32, 2);
	// lwz r24,1924(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 1924);
	// add r28,r5,r28
	r28.u64 = ctx.r5.u64 + r28.u64;
	// lbz r5,-20(r4)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + -20);
	// add r29,r29,r27
	r29.u64 = r29.u64 + r27.u64;
	// lwz r27,1920(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1920);
	// rlwinm r28,r28,3,0,28
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r21,r28,r4
	r21.u64 = ctx.r4.u64 - r28.u64;
	// rotlwi r28,r5,2
	r28.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// add r20,r29,r7
	r20.u64 = r29.u64 + ctx.r7.u64;
	// add r19,r5,r28
	r19.u64 = ctx.r5.u64 + r28.u64;
	// rlwinm r18,r27,1,0,30
	r18.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r29,-20(r21)
	r29.u64 = REX_LOAD_U8(r21.u32 + -20);
	// rlwinm r24,r24,1,0,30
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r5,4(r21)
	ctx.r5.u64 = REX_LOAD_U8(r21.u32 + 4);
	// rotlwi r28,r29,2
	r28.u64 = __builtin_rotateleft32(r29.u32, 2);
	// lwz r21,16(r20)
	r21.u64 = REX_LOAD_U32(r20.u32 + 16);
	// rotlwi r27,r5,2
	r27.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r27,r5,r27
	r27.u64 = ctx.r5.u64 + r27.u64;
	// lhzx r28,r24,r25
	r28.u64 = REX_LOAD_U16(r24.u32 + r25.u32);
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r24,r18,r6
	r24.u64 = REX_LOAD_U16(r18.u32 + ctx.r6.u32);
	// rlwinm r29,r27,2,0,29
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r5,r7
	r27.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r21,r21,2,24,29
	r21.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFC;
	// add r29,r29,r7
	r29.u64 = r29.u64 + ctx.r7.u64;
	// rlwinm r5,r19,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r28,r28
	r28.s64 = r28.s16;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lwz r27,16(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwzx r5,r21,r30
	ctx.r5.u64 = REX_LOAD_U32(r21.u32 + r30.u32);
	// extsh r24,r24
	r24.s64 = r24.s16;
	// lwz r29,16(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mullw r27,r27,r5
	r27.s64 = int64_t(r27.s32) * int64_t(ctx.r5.s32);
	// lwz r7,16(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// mullw r29,r29,r28
	r29.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// mullw r28,r27,r26
	r28.s64 = int64_t(r27.s32) * int64_t(r26.s32);
	// mullw r29,r29,r5
	r29.s64 = int64_t(r29.s32) * int64_t(ctx.r5.s32);
	// add r28,r28,r31
	r28.u64 = r28.u64 + r31.u64;
	// add r29,r29,r31
	r29.u64 = r29.u64 + r31.u64;
	// mullw r27,r7,r24
	r27.s64 = int64_t(ctx.r7.s32) * int64_t(r24.s32);
	// srawi r7,r28,18
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3FFFF) != 0);
	ctx.r7.s64 = r28.s32 >> 18;
	// srawi r29,r29,18
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3FFFF) != 0);
	r29.s64 = r29.s32 >> 18;
	// mullw r5,r27,r5
	ctx.r5.s64 = int64_t(r27.s32) * int64_t(ctx.r5.s32);
	// subf r29,r29,r7
	r29.u64 = ctx.r7.u64 - r29.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// srawi r28,r29,31
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FFFFFFF) != 0);
	r28.s64 = r29.s32 >> 31;
	// srawi r5,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 18;
	// xor r29,r29,r28
	r29.u64 = r29.u64 ^ r28.u64;
	// subf r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	// subf r5,r28,r29
	ctx.r5.u64 = r29.u64 - r28.u64;
	// srawi r29,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	r29.s64 = ctx.r7.s32 >> 31;
	// xor r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 ^ r29.u64;
	// subf r7,r29,r7
	ctx.r7.u64 = ctx.r7.u64 - r29.u64;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8237e804
	if (!ctx.cr6.lt) goto loc_8237E804;
	// lwz r22,1932(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 1932);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
loc_8237E804:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8237eb44
	if (ctx.cr6.eq) goto loc_8237EB44;
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r27,3
	r27.s64 = 3;
	// lwz r5,1928(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 1928);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r7,r7,0,27,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x18;
	// cmpw cr6,r22,r5
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r5.s32, ctx.xer);
	// subfic r5,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r7.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// and r24,r5,r23
	r24.u64 = ctx.r5.u64 & r23.u64;
	// lbz r5,4(r4)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lhz r23,0(r6)
	r23.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// rotlwi r26,r5,2
	r26.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + r26.u64;
	// bne cr6,0x8237e984
	if (!ctx.cr6.eq) goto loc_8237E984;
	// lbz r29,-20(r4)
	r29.u64 = REX_LOAD_U8(ctx.r4.u32 + -20);
	// extsh r27,r23
	r27.s64 = r23.s16;
	// lwz r28,6608(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 6608);
	// rotlwi r25,r29,2
	r25.u64 = __builtin_rotateleft32(r29.u32, 2);
	// add r26,r29,r25
	r26.u64 = r29.u64 + r25.u64;
	// rlwinm r29,r5,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r28,r5,r28
	r28.u64 = ctx.r5.u64 + r28.u64;
	// subf r5,r10,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r10.u64;
	// lwz r29,16(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r28,16(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 16);
	// rlwinm r29,r29,2,24,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFC;
	// lwzx r29,r29,r30
	r29.u64 = REX_LOAD_U32(r29.u32 + r30.u32);
	// mullw r29,r29,r28
	r29.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// mullw r29,r29,r27
	r29.s64 = int64_t(r29.s32) * int64_t(r27.s32);
	// add r29,r29,r31
	r29.u64 = r29.u64 + r31.u64;
	// srawi r29,r29,18
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3FFFF) != 0);
	r29.s64 = r29.s32 >> 18;
	// sth r29,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, r29.u16);
loc_8237E898:
	// lbz r29,4(r4)
	r29.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lhz r28,2(r6)
	r28.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// rlwinm r29,r29,2,24,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFC;
	// lbz r27,-20(r4)
	r27.u64 = REX_LOAD_U8(ctx.r4.u32 + -20);
	// extsh r28,r28
	r28.s64 = r28.s16;
	// lwzx r29,r29,r30
	r29.u64 = REX_LOAD_U32(r29.u32 + r30.u32);
	// mullw r29,r29,r27
	r29.s64 = int64_t(r29.s32) * int64_t(r27.s32);
	// mullw r29,r29,r28
	r29.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// add r29,r29,r31
	r29.u64 = r29.u64 + r31.u64;
	// srawi r29,r29,18
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3FFFF) != 0);
	r29.s64 = r29.s32 >> 18;
	// sth r29,-2(r7)
	REX_STORE_U16(ctx.r7.u32 + -2, r29.u16);
	// lhzx r29,r5,r7
	r29.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// lbz r28,-20(r4)
	r28.u64 = REX_LOAD_U8(ctx.r4.u32 + -20);
	// lbz r27,4(r4)
	r27.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// rlwinm r27,r27,2,24,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFC;
	// extsh r29,r29
	r29.s64 = r29.s16;
	// lwzx r27,r27,r30
	r27.u64 = REX_LOAD_U32(r27.u32 + r30.u32);
	// mullw r29,r27,r29
	r29.s64 = int64_t(r27.s32) * int64_t(r29.s32);
	// mullw r29,r29,r28
	r29.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// add r29,r29,r31
	r29.u64 = r29.u64 + r31.u64;
	// srawi r29,r29,18
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3FFFF) != 0);
	r29.s64 = r29.s32 >> 18;
	// sth r29,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, r29.u16);
	// lhz r29,6(r6)
	r29.u64 = REX_LOAD_U16(ctx.r6.u32 + 6);
	// lbz r28,-20(r4)
	r28.u64 = REX_LOAD_U8(ctx.r4.u32 + -20);
	// lbz r27,4(r4)
	r27.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// rlwinm r27,r27,2,24,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFC;
	// lwzx r27,r27,r30
	r27.u64 = REX_LOAD_U32(r27.u32 + r30.u32);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// mullw r28,r27,r28
	r28.s64 = int64_t(r27.s32) * int64_t(r28.s32);
	// mullw r29,r28,r29
	r29.s64 = int64_t(r28.s32) * int64_t(r29.s32);
	// add r29,r29,r31
	r29.u64 = r29.u64 + r31.u64;
	// srawi r29,r29,18
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3FFFF) != 0);
	r29.s64 = r29.s32 >> 18;
	// sth r29,2(r7)
	REX_STORE_U16(ctx.r7.u32 + 2, r29.u16);
	// lhz r29,8(r6)
	r29.u64 = REX_LOAD_U16(ctx.r6.u32 + 8);
	// lbz r28,-20(r4)
	r28.u64 = REX_LOAD_U8(ctx.r4.u32 + -20);
	// lbz r27,4(r4)
	r27.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// rlwinm r27,r27,2,24,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFC;
	// lwzx r27,r27,r30
	r27.u64 = REX_LOAD_U32(r27.u32 + r30.u32);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// mullw r28,r27,r28
	r28.s64 = int64_t(r27.s32) * int64_t(r28.s32);
	// mullw r29,r28,r29
	r29.s64 = int64_t(r28.s32) * int64_t(r29.s32);
	// add r29,r29,r31
	r29.u64 = r29.u64 + r31.u64;
	// srawi r29,r29,18
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3FFFF) != 0);
	r29.s64 = r29.s32 >> 18;
	// sth r29,4(r7)
	REX_STORE_U16(ctx.r7.u32 + 4, r29.u16);
	// lbz r28,-20(r4)
	r28.u64 = REX_LOAD_U8(ctx.r4.u32 + -20);
	// lhzu r29,10(r6)
	ea = 10 + ctx.r6.u32;
	r29.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// lbz r27,4(r4)
	r27.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// rlwinm r27,r27,2,24,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFC;
	// lwzx r27,r27,r30
	r27.u64 = REX_LOAD_U32(r27.u32 + r30.u32);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// mullw r28,r27,r28
	r28.s64 = int64_t(r27.s32) * int64_t(r28.s32);
	// mullw r29,r28,r29
	r29.s64 = int64_t(r28.s32) * int64_t(r29.s32);
	// add r29,r29,r31
	r29.u64 = r29.u64 + r31.u64;
	// srawi r29,r29,18
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3FFFF) != 0);
	r29.s64 = r29.s32 >> 18;
	// extsh r29,r29
	r29.s64 = r29.s16;
	// sth r29,6(r7)
	REX_STORE_U16(ctx.r7.u32 + 6, r29.u16);
	// addi r7,r7,10
	ctx.r7.s64 = ctx.r7.s64 + 10;
	// bdnz 0x8237e898
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237E898;
	// b 0x8237eb30
	goto loc_8237EB30;
loc_8237E984:
	// lwz r28,136(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,6608(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 6608);
	// subf r27,r10,r6
	r27.u64 = ctx.r6.u64 - ctx.r10.u64;
	// rlwinm r25,r28,1,0,30
	r25.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r26,r5,r29
	r26.u64 = ctx.r5.u64 + r29.u64;
	// add r28,r28,r25
	r28.u64 = r28.u64 + r25.u64;
	// extsh r25,r23
	r25.s64 = r23.s16;
	// rlwinm r28,r28,3,0,28
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r28,r28,r4
	r28.u64 = ctx.r4.u64 - r28.u64;
	// lwz r26,16(r26)
	r26.u64 = REX_LOAD_U32(r26.u32 + 16);
	// rlwinm r26,r26,2,24,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFC;
	// lbz r5,4(r28)
	ctx.r5.u64 = REX_LOAD_U8(r28.u32 + 4);
	// rotlwi r28,r5,2
	r28.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + r28.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + r29.u64;
	// lwzx r29,r26,r30
	r29.u64 = REX_LOAD_U32(r26.u32 + r30.u32);
	// lwz r5,16(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// mullw r5,r5,r29
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r29.s32);
	// mullw r5,r5,r25
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r25.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// srawi r5,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 18;
	// sth r5,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r5.u16);
loc_8237E9E4:
	// lwz r5,136(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// lbz r28,4(r4)
	r28.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// rlwinm r29,r5,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r26,2(r6)
	r26.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// rlwinm r28,r28,2,24,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFC;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + r29.u64;
	// extsh r29,r26
	r29.s64 = r26.s16;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lwzx r28,r28,r30
	r28.u64 = REX_LOAD_U32(r28.u32 + r30.u32);
	// lbz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// mullw r5,r5,r28
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r28.s32);
	// mullw r5,r5,r29
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r29.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// srawi r5,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 18;
	// sth r5,-2(r7)
	REX_STORE_U16(ctx.r7.u32 + -2, ctx.r5.u16);
	// lbz r28,4(r4)
	r28.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lhzx r26,r27,r7
	r26.u64 = REX_LOAD_U16(r27.u32 + ctx.r7.u32);
	// lwz r5,136(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm r29,r5,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + r29.u64;
	// rlwinm r29,r28,2,24,29
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFC;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r28,r26
	r28.s64 = r26.s16;
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lwzx r29,r29,r30
	r29.u64 = REX_LOAD_U32(r29.u32 + r30.u32);
	// lbz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// mullw r5,r5,r29
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r29.s32);
	// mullw r5,r5,r28
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r28.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// srawi r5,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 18;
	// sth r5,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r5.u16);
	// lbz r28,4(r4)
	r28.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lhz r26,6(r6)
	r26.u64 = REX_LOAD_U16(ctx.r6.u32 + 6);
	// lwz r5,136(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm r29,r5,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + r29.u64;
	// rlwinm r29,r28,2,24,29
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFC;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r28,r26
	r28.s64 = r26.s16;
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lwzx r29,r29,r30
	r29.u64 = REX_LOAD_U32(r29.u32 + r30.u32);
	// lbz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// mullw r5,r5,r29
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r29.s32);
	// mullw r5,r5,r28
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r28.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// srawi r5,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 18;
	// sth r5,2(r7)
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r5.u16);
	// lbz r28,4(r4)
	r28.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lhz r26,8(r6)
	r26.u64 = REX_LOAD_U16(ctx.r6.u32 + 8);
	// lwz r5,136(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm r29,r5,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + r29.u64;
	// rlwinm r28,r28,2,24,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFC;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r29,r26
	r29.s64 = r26.s16;
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lwzx r28,r28,r30
	r28.u64 = REX_LOAD_U32(r28.u32 + r30.u32);
	// lbz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// mullw r5,r5,r28
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r28.s32);
	// mullw r5,r5,r29
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r29.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// srawi r5,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 18;
	// sth r5,4(r7)
	REX_STORE_U16(ctx.r7.u32 + 4, ctx.r5.u16);
	// lbz r26,4(r4)
	r26.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lhzu r29,10(r6)
	ea = 10 + ctx.r6.u32;
	r29.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// lwz r5,136(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm r28,r5,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + r28.u64;
	// rlwinm r28,r26,2,24,29
	r28.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFC;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r29,r29
	r29.s64 = r29.s16;
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lwzx r28,r28,r30
	r28.u64 = REX_LOAD_U32(r28.u32 + r30.u32);
	// lbz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// mullw r5,r5,r28
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r28.s32);
	// mullw r5,r5,r29
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r29.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// srawi r5,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 18;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// sth r5,6(r7)
	REX_STORE_U16(ctx.r7.u32 + 6, ctx.r5.u16);
	// addi r7,r7,10
	ctx.r7.s64 = ctx.r7.s64 + 10;
	// bdnz 0x8237e9e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237E9E4;
loc_8237EB30:
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// sth r7,16(r10)
	REX_STORE_U16(ctx.r10.u32 + 16, ctx.r7.u16);
	// bne cr6,0x8237eb44
	if (!ctx.cr6.eq) goto loc_8237EB44;
	// li r22,-1
	r22.s64 = -1;
loc_8237EB44:
	// lwz r11,1932(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1932);
	// subf r10,r22,r11
	ctx.r10.u64 = ctx.r11.u64 - r22.u64;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r22,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r22.u32);
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_82394AD8) {
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
	ctx.lr = 0x82394AE0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// lwz r31,340(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r4,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// stw r5,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// stw r9,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// mr r14,r10
	r14.u64 = ctx.r10.u64;
	// li r15,0
	r15.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82394de4
	if (!ctx.cr6.gt) goto loc_82394DE4;
	// addi r8,r7,-3
	ctx.r8.s64 = ctx.r7.s64 + -3;
	// lwz r9,324(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r29,r7,-4
	r29.s64 = ctx.r7.s64 + -4;
	// addi r23,r7,-2
	r23.s64 = ctx.r7.s64 + -2;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r18,r8,2,0,29
	r18.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r19,r29,2,0,29
	r19.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r17,r23,2,0,29
	r17.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r21,r10,r31
	r21.u64 = ctx.r10.u64 + r31.u64;
	// addi r20,r7,-8
	r20.s64 = ctx.r7.s64 + -8;
	// addi r22,r7,-6
	r22.s64 = ctx.r7.s64 + -6;
	// mullw r4,r16,r9
	ctx.r4.s64 = int64_t(r16.s32) * int64_t(ctx.r9.s32);
	// li r8,255
	ctx.r8.s64 = 255;
loc_82394B48:
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lbz r30,0(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// subfic r3,r10,5
	ctx.xer.ca = ctx.r10.u32 <= 5;
	ctx.r3.u64 = static_cast<uint64_t>(5) - ctx.r10.u64;
	// lbz r27,4(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// mulli r28,r30,34
	r28.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(34));
	// rlwinm r30,r3,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,4
	ctx.r10.s64 = 4;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + r28.u64;
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + r27.u64;
	// srawi r3,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 5;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r28,2(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r27,r28,3
	r27.u64 = __builtin_rotateleft32(r28.u32, 3);
	// mulli r30,r3,25
	r30.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(25));
	// subf r3,r28,r27
	ctx.r3.u64 = r27.u64 - r28.u64;
	// add r3,r30,r3
	ctx.r3.u64 = r30.u64 + ctx.r3.u64;
	// addi r3,r3,15
	ctx.r3.s64 = ctx.r3.s64 + 15;
	// srawi r3,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 5;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lbz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r28,2(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r30,6(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r27,0(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r27,r27,1
	r27.u64 = __builtin_rotateleft32(r27.u32, 1);
	// subf r3,r3,r27
	ctx.r3.u64 = r27.u64 - ctx.r3.u64;
	// rotlwi r27,r28,3
	r27.u64 = __builtin_rotateleft32(r28.u32, 3);
	// addi r3,r3,5
	ctx.r3.s64 = ctx.r3.s64 + 5;
	// subf r27,r28,r27
	r27.u64 = r27.u64 - r28.u64;
	// rlwinm r28,r3,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r27,2,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + r28.u64;
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + r27.u64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
	// srawi r3,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 5;
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lbz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r27,0(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r30,2(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r25,r30,3
	r25.u64 = __builtin_rotateleft32(r30.u32, 3);
	// rotlwi r28,r3,1
	r28.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// subf r30,r30,r25
	r30.u64 = r25.u64 - r30.u64;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + r28.u64;
	// rlwinm r30,r30,1,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r30,r3
	ctx.r3.u64 = r30.u64 + ctx.r3.u64;
	// subf r3,r27,r3
	ctx.r3.u64 = ctx.r3.u64 - r27.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r3,15
	ctx.r3.s64 = ctx.r3.s64 + 15;
	// srawi r3,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 5;
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// ble cr6,0x82394ccc
	if (!ctx.cr6.gt) goto loc_82394CCC;
	// addi r3,r29,-5
	ctx.r3.s64 = r29.s64 + -5;
	// addi r28,r11,-2
	r28.s64 = ctx.r11.s64 + -2;
	// rlwinm r3,r3,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r24,r11,-4
	r24.s64 = ctx.r11.s64 + -4;
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82394C40:
	// lbzx r30,r28,r10
	r30.u64 = REX_LOAD_U8(r28.u32 + ctx.r10.u32);
	// lbzx r27,r9,r10
	r27.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// rotlwi r30,r30,1
	r30.u64 = __builtin_rotateleft32(r30.u32, 1);
	// lbzx r25,r10,r11
	r25.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r26,r5,r10
	r26.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// subf r30,r27,r30
	r30.u64 = r30.u64 - r27.u64;
	// rotlwi r27,r25,3
	r27.u64 = __builtin_rotateleft32(r25.u32, 3);
	// addi r30,r30,5
	r30.s64 = r30.s64 + 5;
	// subf r27,r25,r27
	r27.u64 = r27.u64 - r25.u64;
	// rlwinm r25,r30,1,0,30
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r27,2,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r30,r25
	r30.u64 = r30.u64 + r25.u64;
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// srawi r30,r30,5
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1F) != 0);
	r30.s64 = r30.s32 >> 5;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lbzx r30,r28,r10
	r30.u64 = REX_LOAD_U8(r28.u32 + ctx.r10.u32);
	// lbzx r27,r10,r11
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r26,r24,r10
	r26.u64 = REX_LOAD_U8(r24.u32 + ctx.r10.u32);
	// lbzx r25,r9,r10
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// rotlwi r25,r25,1
	r25.u64 = __builtin_rotateleft32(r25.u32, 1);
	// subf r30,r30,r25
	r30.u64 = r25.u64 - r30.u64;
	// rotlwi r25,r27,3
	r25.u64 = __builtin_rotateleft32(r27.u32, 3);
	// addi r30,r30,5
	r30.s64 = r30.s64 + 5;
	// subf r27,r27,r25
	r27.u64 = r25.u64 - r27.u64;
	// rlwinm r25,r30,1,0,30
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r27,2,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r30,r25
	r30.u64 = r30.u64 + r25.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// srawi r30,r30,5
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1F) != 0);
	r30.s64 = r30.s32 >> 5;
	// stwu r30,8(r3)
	ea = 8 + ctx.r3.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// bdnz 0x82394c40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82394C40;
	// lwz r26,308(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_82394CCC:
	// lbzx r5,r29,r11
	ctx.r5.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// li r30,0
	r30.s64 = 0;
	// lbzx r10,r22,r11
	ctx.r10.u64 = REX_LOAD_U8(r22.u32 + ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rotlwi r3,r5,3
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// lbzx r28,r23,r11
	r28.u64 = REX_LOAD_U8(r23.u32 + ctx.r11.u32);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// subf r5,r5,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r5.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - r28.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r10,15
	ctx.r9.s64 = ctx.r10.s64 + 15;
	// srawi r5,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 5;
	// stwx r5,r19,r31
	REX_STORE_U32(r19.u32 + r31.u32, ctx.r5.u32);
	// lbzx r10,r22,r11
	ctx.r10.u64 = REX_LOAD_U8(r22.u32 + ctx.r11.u32);
	// lbzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// lbzx r5,r20,r11
	ctx.r5.u64 = REX_LOAD_U8(r20.u32 + ctx.r11.u32);
	// lbzx r9,r23,r11
	ctx.r9.u64 = REX_LOAD_U8(r23.u32 + ctx.r11.u32);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rotlwi r28,r3,3
	r28.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// subf r3,r3,r28
	ctx.r3.u64 = r28.u64 - ctx.r3.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// stwx r9,r18,r31
	REX_STORE_U32(r18.u32 + r31.u32, ctx.r9.u32);
	// lbzx r5,r23,r11
	ctx.r5.u64 = REX_LOAD_U8(r23.u32 + ctx.r11.u32);
	// lbzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// rotlwi r10,r3,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// subf r9,r3,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r3.u64;
	// mulli r10,r5,25
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(25));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,15
	ctx.r9.s64 = ctx.r10.s64 + 15;
	// srawi r5,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 5;
	// stwx r5,r17,r31
	REX_STORE_U32(r17.u32 + r31.u32, ctx.r5.u32);
	// lbzx r5,r23,r11
	ctx.r5.u64 = REX_LOAD_U8(r23.u32 + ctx.r11.u32);
	// lbzx r9,r22,r11
	ctx.r9.u64 = REX_LOAD_U8(r22.u32 + ctx.r11.u32);
	// lbzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// subfic r10,r3,5
	ctx.xer.ca = ctx.r3.u32 <= 5;
	ctx.r10.u64 = static_cast<uint64_t>(5) - ctx.r3.u64;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r5,r5,34
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(34));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// stw r9,-4(r21)
	REX_STORE_U32(r21.u32 + -4, ctx.r9.u32);
	// ble cr6,0x82394dd4
	if (!ctx.cr6.gt) goto loc_82394DD4;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82394DA8:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// ble cr6,0x82394dc0
	if (!ctx.cr6.gt) goto loc_82394DC0;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
loc_82394DC0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stbx r10,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bdnz 0x82394da8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82394DA8;
loc_82394DD4:
	// add r15,r15,r16
	r15.u64 = r15.u64 + r16.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmpw cr6,r15,r6
	ctx.cr6.compare<int32_t>(r15.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82394b48
	if (ctx.cr6.lt) goto loc_82394B48;
loc_82394DE4:
	// lwz r28,332(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// li r30,0
	r30.s64 = 0;
	// lwz r3,268(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// ble cr6,0x82394e1c
	if (!ctx.cr6.gt) goto loc_82394E1C;
	// mullw r29,r16,r28
	r29.s64 = int64_t(r16.s32) * int64_t(r28.s32);
loc_82394DFC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82394820
	ctx.lr = 0x82394E0C;
	sub_82394820(ctx, base);
	// add r30,r30,r16
	r30.u64 = r30.u64 + r16.u64;
	// add r3,r29,r3
	ctx.r3.u64 = r29.u64 + ctx.r3.u64;
	// cmpw cr6,r30,r14
	ctx.cr6.compare<int32_t>(r30.s32, r14.s32, ctx.xer);
	// blt cr6,0x82394dfc
	if (ctx.cr6.lt) goto loc_82394DFC;
loc_82394E1C:
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// ble cr6,0x82394e50
	if (!ctx.cr6.gt) goto loc_82394E50;
	// mullw r29,r16,r28
	r29.s64 = int64_t(r16.s32) * int64_t(r28.s32);
loc_82394E30:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82394820
	ctx.lr = 0x82394E40;
	sub_82394820(ctx, base);
	// add r30,r30,r16
	r30.u64 = r30.u64 + r16.u64;
	// add r3,r29,r3
	ctx.r3.u64 = r29.u64 + ctx.r3.u64;
	// cmpw cr6,r30,r14
	ctx.cr6.compare<int32_t>(r30.s32, r14.s32, ctx.xer);
	// blt cr6,0x82394e30
	if (ctx.cr6.lt) goto loc_82394E30;
loc_82394E50:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823A5D70) {
	REX_FUNC_PROLOGUE();
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// li r3,255
	ctx.r3.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823A5D84:
	// lhz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r8,-2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// addi r5,r8,128
	ctx.r5.s64 = ctx.r8.s64 + 128;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// addi r8,r4,128
	ctx.r8.s64 = ctx.r4.s64 + 128;
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// ble cr6,0x823a5dc8
	if (!ctx.cr6.gt) goto loc_823A5DC8;
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 & ctx.r3.u64;
loc_823A5DC8:
	// cmplwi cr6,r5,255
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 255, ctx.xer);
	// ble cr6,0x823a5ddc
	if (!ctx.cr6.gt) goto loc_823A5DDC;
	// rlwinm r5,r5,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// and r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 & ctx.r3.u64;
loc_823A5DDC:
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// ble cr6,0x823a5df0
	if (!ctx.cr6.gt) goto loc_823A5DF0;
	// rlwinm r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
loc_823A5DF0:
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x823a5e04
	if (!ctx.cr6.gt) goto loc_823A5E04;
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_823A5E04:
	// stb r9,-2(r10)
	REX_STORE_U8(ctx.r10.u32 + -2, ctx.r9.u8);
	// stb r7,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// stb r8,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r5,-1(r10)
	REX_STORE_U8(ctx.r10.u32 + -1, ctx.r5.u8);
	// lhz r8,6(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r5,10(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lhz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// addi r4,r8,128
	ctx.r4.s64 = ctx.r8.s64 + 128;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// addi r8,r5,128
	ctx.r8.s64 = ctx.r5.s64 + 128;
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// ble cr6,0x823a5e58
	if (!ctx.cr6.gt) goto loc_823A5E58;
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 & ctx.r3.u64;
loc_823A5E58:
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// ble cr6,0x823a5e6c
	if (!ctx.cr6.gt) goto loc_823A5E6C;
	// rlwinm r5,r4,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// and r4,r5,r3
	ctx.r4.u64 = ctx.r5.u64 & ctx.r3.u64;
loc_823A5E6C:
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// ble cr6,0x823a5e80
	if (!ctx.cr6.gt) goto loc_823A5E80;
	// rlwinm r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
loc_823A5E80:
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x823a5e94
	if (!ctx.cr6.gt) goto loc_823A5E94;
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_823A5E94:
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// stb r9,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// stb r5,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
	// stb r4,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r4.u8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stb r9,5(r10)
	REX_STORE_U8(ctx.r10.u32 + 5, ctx.r9.u8);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// bdnz 0x823a5d84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A5D84;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823AC200) {
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
	// bl 0x822d4e50
	ctx.lr = 0x823AC208;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f2c
	ctx.lr = 0x823AC210;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,420(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// mr r14,r9
	r14.u64 = ctx.r9.u64;
	// stw r10,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r10.u32);
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// lwz r10,412(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// fcfid f25,f0
	f25.f64 = double(ctx.f0.s64);
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// fcfid f30,f13
	f30.f64 = double(ctx.f13.s64);
	// srawi r29,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r29.s64 = ctx.r3.s32 >> 1;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823ac41c
	if (!ctx.cr6.gt) goto loc_823AC41C;
	// lwz r11,388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r24,404(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// lwz r23,396(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// subf r18,r11,r8
	r18.u64 = ctx.r8.u64 - ctx.r11.u64;
	// lwz r21,80(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r22,80(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfd f28,-9416(r10)
	f28.u64 = REX_LOAD_U64(ctx.r10.u32 + -9416);
	// fneg f26,f30
	f26.u64 = f30.u64 ^ 0x8000000000000000;
	// lfd f29,4000(r9)
	f29.u64 = REX_LOAD_U64(ctx.r9.u32 + 4000);
	// li r25,0
	r25.s64 = 0;
	// subf r15,r8,r5
	r15.u64 = ctx.r5.u64 - ctx.r8.u64;
	// lfd f27,31912(r11)
	f27.u64 = REX_LOAD_U64(ctx.r11.u32 + 31912);
loc_823AC2A8:
	// extsw r11,r26
	ctx.r11.s64 = r26.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f31,f25,f13
	f31.f64 = f25.f64 - ctx.f13.f64;
	// fcmpu cr6,f31,f26
	ctx.cr6.compare(f31.f64, f26.f64);
	// bge cr6,0x823ac2d4
	if (!ctx.cr6.lt) goto loc_823AC2D4;
loc_823AC2C4:
	// add r11,r18,r15
	ctx.r11.u64 = r18.u64 + r15.u64;
	// li r30,0
	r30.s64 = 0;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + r27.u64;
	// b 0x823ac2e4
	goto loc_823AC2E4;
loc_823AC2D4:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// ble cr6,0x823ac338
	if (!ctx.cr6.gt) goto loc_823AC338;
loc_823AC2DC:
	// li r30,2
	r30.s64 = 2;
	// add r4,r18,r27
	ctx.r4.u64 = r18.u64 + r27.u64;
loc_823AC2E4:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AC2F0;
	sub_822D4FA0(ctx, base);
	// clrlwi r11,r26,31
	ctx.r11.u64 = r26.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823ac408
	if (!ctx.cr6.eq) goto loc_823AC408;
	// srawi r11,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	ctx.r11.s64 = r26.s32 >> 1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// mullw r31,r11,r29
	r31.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// bne cr6,0x823ac3bc
	if (!ctx.cr6.eq) goto loc_823AC3BC;
	// add. r11,r22,r26
	ctx.r11.u64 = r22.u64 + r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823ac3b4
	if (ctx.cr0.lt) goto loc_823AC3B4;
	// srawi r11,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	ctx.r11.s64 = r22.s32 >> 1;
loc_823AC318:
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// add r30,r11,r31
	r30.u64 = ctx.r11.u64 + r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r30,r20
	ctx.r4.u64 = r30.u64 + r20.u64;
	// add r3,r31,r23
	ctx.r3.u64 = r31.u64 + r23.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AC330;
	sub_822D4FA0(ctx, base);
	// add r4,r30,r19
	ctx.r4.u64 = r30.u64 + r19.u64;
	// b 0x823ac3fc
	goto loc_823AC3FC;
loc_823AC338:
	// fdiv f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64 / f30.f64;
	// bl 0x822d6768
	ctx.lr = 0x823AC340;
	sub_822D6768(ctx, base);
	// fsub f0,f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f28.f64 - ctx.f1.f64;
	// fmsub f13,f1,f30,f31
	ctx.f13.f64 = std::fma(ctx.f1.f64, f30.f64, -f31.f64);
	// fmsub f12,f0,f30,f31
	ctx.f12.f64 = std::fma(ctx.f0.f64, f30.f64, -f31.f64);
	// fadd f11,f13,f29
	ctx.f11.f64 = ctx.f13.f64 + f29.f64;
	// fadd f10,f12,f29
	ctx.f10.f64 = ctx.f12.f64 + f29.f64;
	// fctiwz f9,f11
	ctx.f9.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// neg r21,r11
	r21.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// fctiwz f8,f10
	ctx.f8.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// neg r22,r10
	r22.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add. r9,r22,r26
	ctx.r9.u64 = r22.u64 + r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x823ac390
	if (ctx.cr0.lt) goto loc_823AC390;
	// mullw r11,r22,r28
	ctx.r11.s64 = int64_t(r22.s32) * int64_t(r28.s32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// li r30,1
	r30.s64 = 1;
	// add r4,r11,r17
	ctx.r4.u64 = ctx.r11.u64 + r17.u64;
	// b 0x823ac2e4
	goto loc_823AC2E4;
loc_823AC390:
	// add. r11,r21,r26
	ctx.r11.u64 = r21.u64 + r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823ac2dc
	if (ctx.cr0.lt) goto loc_823AC2DC;
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f27.f64);
	// ble cr6,0x823ac2c4
	if (!ctx.cr6.gt) goto loc_823AC2C4;
	// mullw r11,r21,r28
	ctx.r11.s64 = int64_t(r21.s32) * int64_t(r28.s32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// li r30,1
	r30.s64 = 1;
	// add r4,r11,r17
	ctx.r4.u64 = ctx.r11.u64 + r17.u64;
	// b 0x823ac2e4
	goto loc_823AC2E4;
loc_823AC3B4:
	// srawi r11,r21,1
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1) != 0);
	ctx.r11.s64 = r21.s32 >> 1;
	// b 0x823ac318
	goto loc_823AC318;
loc_823AC3BC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x823ac3dc
	if (!ctx.cr6.eq) goto loc_823AC3DC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r31,r20
	ctx.r4.u64 = r31.u64 + r20.u64;
	// add r3,r31,r23
	ctx.r3.u64 = r31.u64 + r23.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AC3D4;
	sub_822D4FA0(ctx, base);
	// add r4,r31,r19
	ctx.r4.u64 = r31.u64 + r19.u64;
	// b 0x823ac3fc
	goto loc_823AC3FC;
loc_823AC3DC:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// bne cr6,0x823ac408
	if (!ctx.cr6.eq) goto loc_823AC408;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r31,r14
	ctx.r4.u64 = r31.u64 + r14.u64;
	// add r3,r31,r23
	ctx.r3.u64 = r31.u64 + r23.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AC3F4;
	sub_822D4FA0(ctx, base);
	// lwz r11,380(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// add r4,r31,r11
	ctx.r4.u64 = r31.u64 + ctx.r11.u64;
loc_823AC3FC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r3,r31,r24
	ctx.r3.u64 = r31.u64 + r24.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AC408;
	sub_822D4FA0(ctx, base);
loc_823AC408:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// add r25,r25,r28
	r25.u64 = r25.u64 + r28.u64;
	// add r27,r27,r28
	r27.u64 = r27.u64 + r28.u64;
	// cmpw cr6,r26,r16
	ctx.cr6.compare<int32_t>(r26.s32, r16.s32, ctx.xer);
	// blt cr6,0x823ac2a8
	if (ctx.cr6.lt) goto loc_823AC2A8;
loc_823AC41C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f78
	ctx.lr = 0x823AC428;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823B56D8) {
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
	ctx.lr = 0x823B56E0;
	// lwz r10,92(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, r30.u32);
	// ble cr6,0x823b64a8
	if (!ctx.cr6.gt) goto loc_823B64A8;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fsub f8,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f2.f64 - ctx.f1.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lfd f12,-28728(r10)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + -28728);
	// lfd f7,31912(r9)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r9.u32 + 31912);
	// stw r11,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
	// lfd f9,4000(r8)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r8.u32 + 4000);
	// lfd f10,26664(r7)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r7.u32 + 26664);
loc_823B572C:
	// extsw r10,r29
	ctx.r10.s64 = r29.s32;
	// lwz r9,96(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// fmr f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f8.f64;
	// std r10,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r10.u64);
	// lfd f13,-176(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fmadd f11,f11,f3,f4
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f3.f64, ctx.f4.f64);
	// beq cr6,0x823b575c
	if (ctx.cr6.eq) goto loc_823B575C;
	// fsub f13,f3,f10
	ctx.f13.f64 = ctx.f3.f64 - ctx.f10.f64;
	// fmul f13,f13,f9
	ctx.f13.f64 = ctx.f13.f64 * ctx.f9.f64;
	// b 0x823b5760
	goto loc_823B5760;
loc_823B575C:
	// fmr f13,f7
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f7.f64;
loc_823B5760:
	// fadd f13,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 + ctx.f11.f64;
	// lis r7,-32162
	ctx.r7.s64 = -2107768832;
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r8,100(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,-248(r1)
	REX_STORE_U64(ctx.r1.u32 + -248, ctx.f11.u64);
	// lwz r10,-244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// stw r9,-10300(r7)
	REX_STORE_U32(ctx.r7.u32 + -10300, ctx.r9.u32);
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// std r5,-232(r1)
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.r5.u64);
	// lfd f6,-232(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -232);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// fmsub f2,f13,f12,f5
	ctx.f2.f64 = std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f5.f64);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r7,-248(r1)
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r7.u32);
	// fctiwz f13,f2
	ctx.f13.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f13,-256(r1)
	REX_STORE_U64(ctx.r1.u32 + -256, ctx.f13.u64);
	// lwz r25,-252(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// mullw r9,r25,r25
	ctx.r9.s64 = int64_t(r25.s32) * int64_t(r25.s32);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// mullw r8,r9,r25
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// stw r9,-240(r1)
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r9.u32);
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// stw r6,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r6.u32);
	// ble cr6,0x823b5ff8
	if (!ctx.cr6.gt) goto loc_823B5FF8;
	// lwz r9,84(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b5ff4
	if (!ctx.cr6.lt) goto loc_823B5FF4;
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r30
	r31.u64 = r30.u64;
	// stw r30,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, r30.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b6494
	if (!ctx.cr6.gt) goto loc_823B6494;
loc_823B57F8:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-280(r1)
	REX_STORE_U64(ctx.r1.u32 + -280, ctx.f13.u64);
	// lwz r10,-276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b5d28
	if (!ctx.cr6.gt) goto loc_823B5D28;
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b5d24
	if (!ctx.cr6.lt) goto loc_823B5D24;
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lis r8,-32162
	ctx.r8.s64 = -2107768832;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// li r9,4
	ctx.r9.s64 = 4;
	// std r6,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r6.u64);
	// lfd f13,-192(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fmsub f6,f0,f12,f11
	ctx.f6.f64 = std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f11.f64);
	// stw r11,-10300(r8)
	REX_STORE_U32(ctx.r8.u32 + -10300, ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r31,r11,r7
	r31.u64 = ctx.r11.u64 + ctx.r7.u64;
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-280(r1)
	REX_STORE_U64(ctx.r1.u32 + -280, ctx.f5.u64);
	// lwz r21,-276(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// mullw r5,r21,r21
	ctx.r5.s64 = int64_t(r21.s32) * int64_t(r21.s32);
	// srawi r20,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	r20.s64 = ctx.r5.s32 >> 8;
	// mullw r4,r20,r21
	ctx.r4.s64 = int64_t(r20.s32) * int64_t(r21.s32);
	// stw r20,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, r20.u32);
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// stw r11,-236(r1)
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r11.u32);
loc_823B5874:
	// lwz r7,80(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,-4(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + -4);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 8);
	// subf r26,r8,r31
	r26.u64 = r31.u64 - ctx.r8.u64;
	// lbz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 4);
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// std r31,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, r31.u64);
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + r31.u64;
	// std r25,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, r25.u64);
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// add r24,r6,r31
	r24.u64 = ctx.r6.u64 + r31.u64;
	// lbz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U8(r26.u32 + 0);
	// rlwinm r22,r7,2,0,29
	r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r28,4(r26)
	r28.u64 = REX_LOAD_U8(r26.u32 + 4);
	// rotlwi r27,r11,1
	r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r29,-4(r3)
	r29.u64 = REX_LOAD_U8(ctx.r3.u32 + -4);
	// add r17,r9,r10
	r17.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r7,r28,r10
	ctx.r7.u64 = ctx.r10.u64 - r28.u64;
	// lbz r30,4(r3)
	r30.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r4,0(r24)
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + 0);
	// subf r15,r11,r8
	r15.u64 = ctx.r8.u64 - ctx.r11.u64;
	// rlwinm r23,r7,1,0,30
	r23.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// add r3,r27,r29
	ctx.r3.u64 = r27.u64 + r29.u64;
	// lbz r6,-4(r26)
	ctx.r6.u64 = REX_LOAD_U8(r26.u32 + -4);
	// subf r19,r4,r23
	r19.u64 = r23.u64 - ctx.r4.u64;
	// lbz r23,4(r24)
	r23.u64 = REX_LOAD_U8(r24.u32 + 4);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + r28.u64;
	// lbzx r22,r22,r31
	r22.u64 = REX_LOAD_U8(r22.u32 + r31.u32);
	// subf r19,r6,r19
	r19.u64 = r19.u64 - ctx.r6.u64;
	// lbz r27,8(r26)
	r27.u64 = REX_LOAD_U8(r26.u32 + 8);
	// rlwinm r18,r3,1,0,30
	r18.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r26,-4(r24)
	r26.u64 = REX_LOAD_U8(r24.u32 + -4);
	// add r3,r19,r23
	ctx.r3.u64 = r19.u64 + r23.u64;
	// lbz r24,8(r24)
	r24.u64 = REX_LOAD_U8(r24.u32 + 8);
	// subf r19,r23,r18
	r19.u64 = r18.u64 - r23.u64;
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + r27.u64;
	// subf r18,r22,r19
	r18.u64 = r19.u64 - r22.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r18,2,0,29
	r19.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r24,r3
	ctx.r3.u64 = ctx.r3.u64 - r24.u64;
	// stw r3,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r3.u32);
	// stw r19,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, r19.u32);
	// add r19,r30,r6
	r19.u64 = r30.u64 + ctx.r6.u64;
	// rlwinm r3,r17,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r17,r19,1,0,30
	r17.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r19,r3,r4
	r19.u64 = ctx.r4.u64 - ctx.r3.u64;
	// subf r17,r26,r17
	r17.u64 = r17.u64 - r26.u64;
	// add r3,r19,r5
	ctx.r3.u64 = r19.u64 + ctx.r5.u64;
	// subf r19,r27,r17
	r19.u64 = r17.u64 - r27.u64;
	// subf r16,r30,r7
	r16.u64 = ctx.r7.u64 - r30.u64;
	// rlwinm r17,r19,1,0,30
	r17.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r14,r3,3,0,28
	r14.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r19,r17,r24
	r19.u64 = r17.u64 + r24.u64;
	// subf r17,r3,r14
	r17.u64 = r14.u64 - ctx.r3.u64;
	// stw r19,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, r19.u32);
	// subf r19,r5,r16
	r19.u64 = r16.u64 - ctx.r5.u64;
	// lwz r16,-296(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// rlwinm r3,r16,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r19,r9
	r19.u64 = r19.u64 + ctx.r9.u64;
	// lwz r31,-304(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// add r17,r17,r3
	r17.u64 = r17.u64 + ctx.r3.u64;
	// rlwinm r16,r19,3,0,28
	r16.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r3,r29,r22
	ctx.r3.u64 = r22.u64 - r29.u64;
	// subf r19,r19,r16
	r19.u64 = r16.u64 - r19.u64;
	// lwz r16,-300(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// add r31,r31,r26
	r31.u64 = r31.u64 + r26.u64;
	// add r14,r7,r8
	r14.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r14,r14,13
	r14.s64 = static_cast<int64_t>(r14.u64 * static_cast<uint64_t>(13));
	// stw r16,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, r16.u32);
	// lwz r25,-300(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// stw r31,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, r31.u32);
	// add r18,r18,r25
	r18.u64 = r18.u64 + r25.u64;
	// rlwinm r16,r3,2,0,29
	r16.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r18,r17,r18
	r18.u64 = r17.u64 + r18.u64;
	// add r3,r3,r16
	ctx.r3.u64 = ctx.r3.u64 + r16.u64;
	// rotlwi r17,r31,0
	r17.u64 = __builtin_rotateleft32(r31.u32, 0);
	// add r19,r17,r19
	r19.u64 = r17.u64 + r19.u64;
	// subf r17,r29,r9
	r17.u64 = ctx.r9.u64 - r29.u64;
	// add r19,r19,r3
	r19.u64 = r19.u64 + ctx.r3.u64;
	// subf r18,r14,r18
	r18.u64 = r18.u64 - r14.u64;
	// mulli r3,r15,11
	ctx.r3.s64 = static_cast<int64_t>(r15.u64 * static_cast<uint64_t>(11));
	// rlwinm r17,r17,1,0,30
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r15,r11,r10
	r15.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r14,r23,r4
	r14.u64 = ctx.r4.u64 - r23.u64;
	// add r3,r19,r3
	ctx.r3.u64 = r19.u64 + ctx.r3.u64;
	// srawi r16,r18,1
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x1) != 0);
	r16.s64 = r18.s32 >> 1;
	// subf r17,r5,r17
	r17.u64 = r17.u64 - ctx.r5.u64;
	// stw r3,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r3.u32);
	// subf r15,r6,r15
	r15.u64 = r15.u64 - ctx.r6.u64;
	// rotlwi r18,r11,2
	r18.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// subf r14,r22,r14
	r14.u64 = r14.u64 - r22.u64;
	// subf r3,r6,r17
	ctx.r3.u64 = r17.u64 - ctx.r6.u64;
	// add r18,r11,r18
	r18.u64 = ctx.r11.u64 + r18.u64;
	// rlwinm r19,r15,1,0,30
	r19.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r15,r9,r14
	r15.u64 = r14.u64 - ctx.r9.u64;
	// stw r18,-264(r1)
	REX_STORE_U32(ctx.r1.u32 + -264, r18.u32);
	// add r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 + r26.u64;
	// subf r18,r10,r15
	r18.u64 = r15.u64 - ctx.r10.u64;
	// add r15,r3,r22
	r15.u64 = ctx.r3.u64 + r22.u64;
	// add r22,r18,r29
	r22.u64 = r18.u64 + r29.u64;
	// subf r19,r4,r19
	r19.u64 = r19.u64 - ctx.r4.u64;
	// add r22,r22,r5
	r22.u64 = r22.u64 + ctx.r5.u64;
	// subf r17,r7,r30
	r17.u64 = r30.u64 - ctx.r7.u64;
	// add r22,r22,r28
	r22.u64 = r22.u64 + r28.u64;
	// add r19,r19,r26
	r19.u64 = r19.u64 + r26.u64;
	// rlwinm r22,r22,1,0,30
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r14,r4,r8
	r14.u64 = ctx.r8.u64 - ctx.r4.u64;
	// stw r22,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, r22.u32);
	// subf r3,r8,r17
	ctx.r3.u64 = r17.u64 - ctx.r8.u64;
	// lwz r31,-300(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// add r17,r19,r7
	r17.u64 = r19.u64 + ctx.r7.u64;
	// subf r19,r30,r14
	r19.u64 = r14.u64 - r30.u64;
	// mullw r20,r16,r20
	r20.s64 = int64_t(r16.s32) * int64_t(r20.s32);
	// stw r20,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, r20.u32);
	// add r19,r19,r10
	r19.u64 = r19.u64 + ctx.r10.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r19,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, r19.u32);
	// subf r20,r8,r30
	r20.u64 = r30.u64 - ctx.r8.u64;
	// rlwinm r18,r3,1,0,30
	r18.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r15,1,0,30
	r22.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r18,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, r18.u32);
	// rlwinm r18,r20,1,0,30
	r18.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r24,r22
	r16.u64 = r22.u64 - r24.u64;
	// rlwinm r19,r17,1,0,30
	r19.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r20,r20,r18
	r20.u64 = r20.u64 + r18.u64;
	// rotlwi r18,r29,2
	r18.u64 = __builtin_rotateleft32(r29.u32, 2);
	// add r20,r19,r20
	r20.u64 = r19.u64 + r20.u64;
	// add r25,r16,r27
	r25.u64 = r16.u64 + r27.u64;
	// lwz r16,-264(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// add r19,r29,r18
	r19.u64 = r29.u64 + r18.u64;
	// std r8,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, ctx.r8.u64);
	// rotlwi r17,r7,1
	r17.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lwz r18,-304(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// rotlwi r14,r9,3
	r14.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// lwz r8,-292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// subf r20,r19,r20
	r20.u64 = r20.u64 - r19.u64;
	// add r3,r3,r18
	ctx.r3.u64 = ctx.r3.u64 + r18.u64;
	// lwz r22,-296(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// add r17,r17,r10
	r17.u64 = r17.u64 + ctx.r10.u64;
	// rlwinm r18,r25,1,0,30
	r18.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r25,-288(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// mr r15,r22
	r15.u64 = r22.u64;
	// rlwinm r22,r22,3,0,28
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r17,r17,1,0,30
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r22,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, r22.u32);
	// subf r22,r9,r14
	r22.u64 = r14.u64 - ctx.r9.u64;
	// lwz r19,-292(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// subf r19,r15,r19
	r19.u64 = r19.u64 - r15.u64;
	// add r15,r31,r3
	r15.u64 = r31.u64 + ctx.r3.u64;
	// lwz r3,-236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// subf r23,r28,r23
	r23.u64 = r23.u64 - r28.u64;
	// add r31,r20,r22
	r31.u64 = r20.u64 + r22.u64;
	// add r20,r18,r19
	r20.u64 = r18.u64 + r19.u64;
	// subf r14,r11,r7
	r14.u64 = ctx.r7.u64 - ctx.r11.u64;
	// srawi r25,r25,1
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x1) != 0);
	r25.s64 = r25.s32 >> 1;
	// subf r17,r16,r17
	r17.u64 = r17.u64 - r16.u64;
	// rlwinm r19,r23,2,0,29
	r19.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r22,r14,11
	r22.s64 = static_cast<int64_t>(r14.u64 * static_cast<uint64_t>(11));
	// subf r15,r26,r15
	r15.u64 = r15.u64 - r26.u64;
	// add r22,r20,r22
	r22.u64 = r20.u64 + r22.u64;
	// srawi r14,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r14.s64 = r31.s32 >> 1;
	// subf r17,r4,r17
	r17.u64 = r17.u64 - ctx.r4.u64;
	// mullw r18,r25,r3
	r18.s64 = int64_t(r25.s32) * int64_t(ctx.r3.s32);
	// add r23,r23,r19
	r23.u64 = r23.u64 + r19.u64;
	// subf r20,r27,r15
	r20.u64 = r15.u64 - r27.u64;
	// lwz r15,-240(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// add r18,r8,r18
	r18.u64 = ctx.r8.u64 + r18.u64;
	// mullw r19,r14,r21
	r19.s64 = int64_t(r14.s32) * int64_t(r21.s32);
	// srawi r17,r17,1
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0x1) != 0);
	r17.s64 = r17.s32 >> 1;
	// add r24,r20,r24
	r24.u64 = r20.u64 + r24.u64;
	// lwz r20,-280(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r22,r22,r23
	r22.u64 = r22.u64 + r23.u64;
	// subf r14,r9,r29
	r14.u64 = r29.u64 - ctx.r9.u64;
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r23,r18,r19
	r23.u64 = r18.u64 + r19.u64;
	// rlwinm r29,r17,8,0,23
	r29.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 8) & 0xFFFFFF00;
	// add r24,r24,r6
	r24.u64 = r24.u64 + ctx.r6.u64;
	// srawi r22,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	r22.s64 = r22.s32 >> 1;
	// subf r19,r6,r8
	r19.u64 = ctx.r8.u64 - ctx.r6.u64;
	// add r8,r23,r29
	ctx.r8.u64 = r23.u64 + r29.u64;
	// mullw r29,r24,r3
	r29.s64 = int64_t(r24.s32) * int64_t(ctx.r3.s32);
	// stw r8,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r8.u32);
	// ld r8,-264(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + -264);
	// mullw r23,r22,r20
	r23.s64 = int64_t(r22.s32) * int64_t(r20.s32);
	// rlwinm r24,r19,1,0,30
	r24.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// add r23,r23,r29
	r23.u64 = r23.u64 + r29.u64;
	// rlwinm r22,r14,1,0,30
	r22.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r5,r24
	r29.u64 = r24.u64 - ctx.r5.u64;
	// subf r24,r10,r28
	r24.u64 = r28.u64 - ctx.r10.u64;
	// subf r18,r26,r22
	r18.u64 = r22.u64 - r26.u64;
	// subf r26,r7,r30
	r26.u64 = r30.u64 - ctx.r7.u64;
	// add r29,r29,r8
	r29.u64 = r29.u64 + ctx.r8.u64;
	// rlwinm r24,r24,1,0,30
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r14,r29,r27
	r14.u64 = r29.u64 + r27.u64;
	// rlwinm r22,r26,1,0,30
	r22.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r24,r30,r24
	r24.u64 = r24.u64 - r30.u64;
	// subf r30,r30,r18
	r30.u64 = r18.u64 - r30.u64;
	// subf r29,r8,r11
	r29.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r19,r8,1,0,30
	r19.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r22,r26,r22
	r22.u64 = r26.u64 + r22.u64;
	// rotlwi r17,r28,2
	r17.u64 = __builtin_rotateleft32(r28.u32, 2);
	// rlwinm r18,r14,1,0,30
	r18.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r24,r8,r24
	r24.u64 = r24.u64 - ctx.r8.u64;
	// rlwinm r26,r29,1,0,30
	r26.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r19,r9
	r19.u64 = r19.u64 + ctx.r9.u64;
	// subf r14,r7,r30
	r14.u64 = r30.u64 - ctx.r7.u64;
	// add r28,r28,r17
	r28.u64 = r28.u64 + r17.u64;
	// add r18,r18,r22
	r18.u64 = r18.u64 + r22.u64;
	// subf r24,r9,r24
	r24.u64 = r24.u64 - ctx.r9.u64;
	// subf r30,r7,r11
	r30.u64 = ctx.r11.u64 - ctx.r7.u64;
	// rotlwi r17,r10,3
	r17.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r29,r29,r26
	r29.u64 = r29.u64 + r26.u64;
	// rlwinm r31,r19,1,0,30
	r31.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r28,r28,r18
	r28.u64 = r18.u64 - r28.u64;
	// subf r19,r10,r14
	r19.u64 = r14.u64 - ctx.r10.u64;
	// subf r18,r27,r24
	r18.u64 = r24.u64 - r27.u64;
	// rlwinm r22,r30,1,0,30
	r22.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r26,r10,r17
	r26.u64 = r17.u64 - ctx.r10.u64;
	// subf r29,r9,r29
	r29.u64 = r29.u64 - ctx.r9.u64;
	// subf r24,r16,r31
	r24.u64 = r31.u64 - r16.u64;
	// add r27,r19,r4
	r27.u64 = r19.u64 + ctx.r4.u64;
	// add r26,r28,r26
	r26.u64 = r28.u64 + r26.u64;
	// add r30,r30,r22
	r30.u64 = r30.u64 + r22.u64;
	// add r22,r29,r5
	r22.u64 = r29.u64 + ctx.r5.u64;
	// subf r24,r5,r24
	r24.u64 = r24.u64 - ctx.r5.u64;
	// add r28,r18,r7
	r28.u64 = r18.u64 + ctx.r7.u64;
	// add r29,r27,r8
	r29.u64 = r27.u64 + ctx.r8.u64;
	// srawi r27,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r27.s64 = r26.s32 >> 1;
	// add r5,r28,r5
	ctx.r5.u64 = r28.u64 + ctx.r5.u64;
	// subf r30,r10,r30
	r30.u64 = r30.u64 - ctx.r10.u64;
	// srawi r26,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	r26.s64 = r24.s32 >> 1;
	// srawi r28,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	r28.s64 = r22.s32 >> 1;
	// add r29,r29,r11
	r29.u64 = r29.u64 + ctx.r11.u64;
	// add r24,r30,r4
	r24.u64 = r30.u64 + ctx.r4.u64;
	// mullw r4,r28,r3
	ctx.r4.s64 = int64_t(r28.s32) * int64_t(ctx.r3.s32);
	// add r30,r5,r11
	r30.u64 = ctx.r5.u64 + ctx.r11.u64;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r28,r29,r6
	r28.u64 = r29.u64 + ctx.r6.u64;
	// mullw r5,r26,r20
	ctx.r5.s64 = int64_t(r26.s32) * int64_t(r20.s32);
	// lwz r29,-256(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// ld r25,-208(r1)
	r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// ld r31,-312(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -312);
	// srawi r26,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	r26.s64 = r24.s32 >> 1;
	// lwz r24,-288(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// subf r22,r9,r11
	r22.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r19,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r19.s64 = ctx.r8.s32 >> 1;
	// add r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 + ctx.r4.u64;
	// mullw r8,r26,r29
	ctx.r8.s64 = int64_t(r26.s32) * int64_t(r29.s32);
	// subf r7,r10,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r10.u64;
	// add r18,r30,r6
	r18.u64 = r30.u64 + ctx.r6.u64;
	// subf r30,r10,r22
	r30.u64 = r22.u64 - ctx.r10.u64;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r4,r28,r21
	ctx.r4.s64 = int64_t(r28.s32) * int64_t(r21.s32);
	// srawi r28,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	r28.s64 = ctx.r7.s32 >> 1;
	// mullw r9,r19,r21
	ctx.r9.s64 = int64_t(r19.s32) * int64_t(r21.s32);
	// mullw r5,r18,r3
	ctx.r5.s64 = int64_t(r18.s32) * int64_t(ctx.r3.s32);
	// mullw r7,r27,r20
	ctx.r7.s64 = int64_t(r27.s32) * int64_t(r20.s32);
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r23,r4
	ctx.r4.u64 = r23.u64 + ctx.r4.u64;
	// mullw r9,r28,r25
	ctx.r9.s64 = int64_t(r28.s32) * int64_t(r25.s32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// mullw r6,r6,r21
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(r21.s32);
	// mullw r8,r4,r29
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(r29.s32);
	// mullw r24,r24,r15
	r24.s64 = int64_t(r24.s32) * int64_t(r15.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r9,r24,r8
	ctx.r9.u64 = r24.u64 + ctx.r8.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r8,r3,r25
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(r25.s32);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x823b5ce4
	if (!ctx.cr6.gt) goto loc_823B5CE4;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x823b5cf0
	goto loc_823B5CF0;
loc_823B5CE4:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_823B5CF0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,-320(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
	// bdnz 0x823b5874
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B5874;
	// lwz r31,-272(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// li r30,0
	r30.s64 = 0;
	// lwz r7,-248(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// lwz r29,-268(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// b 0x823b5fdc
	goto loc_823B5FDC;
loc_823B5D24:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_823B5D28:
	// blt cr6,0x823b5ed0
	if (ctx.cr6.lt) goto loc_823B5ED0;
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b5ed0
	if (!ctx.cr6.lt) goto loc_823B5ED0;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// std r5,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r5.u64);
	// lfd f13,-224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// stw r9,-10300(r10)
	REX_STORE_U32(ctx.r10.u32 + -10300, ctx.r9.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fmsub f6,f0,f12,f11
	ctx.f6.f64 = std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f11.f64);
	// lbzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// mullw r6,r5,r25
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(r25.s32);
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f5.u64);
	// lwz r28,-308(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// subf r5,r5,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r9,r4,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r4.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r5,r9,r28
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(r28.s32);
	// subfic r9,r28,256
	ctx.xer.ca = r28.u32 <= 256;
	ctx.r9.u64 = static_cast<uint64_t>(256) - r28.u64;
	// mullw r27,r5,r25
	r27.s64 = int64_t(ctx.r5.s32) * int64_t(r25.s32);
	// subf r26,r25,r9
	r26.u64 = ctx.r9.u64 - r25.u64;
	// mullw r5,r4,r28
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(r28.s32);
	// srawi r9,r27,8
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xFF) != 0);
	ctx.r9.s64 = r27.s32 >> 8;
	// mullw r8,r26,r8
	ctx.r8.s64 = int64_t(r26.s32) * int64_t(ctx.r8.s32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// stb r6,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// lwz r4,80(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r5,5(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r8,1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r4,5(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 5);
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// mullw r6,r9,r25
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// subf r9,r9,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r9.u64;
	// mullw r4,r5,r28
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(r28.s32);
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// mullw r5,r26,r8
	ctx.r5.s64 = int64_t(r26.s32) * int64_t(ctx.r8.s32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r9,r8,r28
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// mullw r8,r9,r25
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stb r5,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r5.u8);
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r5,6(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r4,6(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 6);
	// lbz r9,2(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// mullw r6,r9,r25
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// subf r9,r9,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r9.u64;
	// mullw r4,r5,r28
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(r28.s32);
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// mullw r5,r26,r8
	ctx.r5.s64 = int64_t(r26.s32) * int64_t(ctx.r8.s32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r9,r8,r28
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// mullw r8,r9,r25
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stb r5,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r5.u8);
	// lwz r8,80(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,3(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,7(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r6,r26,r9
	ctx.r6.s64 = int64_t(r26.s32) * int64_t(ctx.r9.s32);
	// lbz r4,3(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r10,7(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// subf r8,r4,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r4.u64;
	// subf r10,r5,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r5.u64;
	// mullw r8,r4,r25
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(r25.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r5,r5,r28
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r28.s32);
	// mullw r9,r10,r28
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// mullw r4,r9,r25
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// b 0x823b5fd4
	goto loc_823B5FD4;
loc_823B5ED0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b5fd0
	if (!ctx.cr6.gt) goto loc_823B5FD0;
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823b5fd0
	if (!ctx.cr6.lt) goto loc_823B5FD0;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// std r5,-216(r1)
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r5.u64);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// stw r9,-10300(r10)
	REX_STORE_U32(ctx.r10.u32 + -10300, ctx.r9.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r4,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// mullw r6,r4,r25
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(r25.s32);
	// lfd f13,-216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fmsub f6,f0,f12,f11
	ctx.f6.f64 = std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f11.f64);
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f5.u64);
	// lwz r9,-308(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// subfic r8,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r8.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// subf r8,r25,r8
	ctx.r8.u64 = ctx.r8.u64 - r25.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r28,r8,r9
	r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r5,r4,r5
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stb r4,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// lbz r8,1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lwz r4,80(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r8,r28,r8
	ctx.r8.s64 = int64_t(r28.s32) * int64_t(ctx.r8.s32);
	// lbz r4,1(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// mullw r9,r4,r25
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(r25.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stb r8,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lwz r4,80(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r8,r5,r8
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// lbz r5,2(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// mullw r9,r5,r25
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(r25.s32);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// stb r9,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r9.u8);
	// lbz r5,3(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lwz r4,80(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r9,r6,r5
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lbz r8,3(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// mullw r10,r8,r25
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(r25.s32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// stb r4,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r4.u8);
	// b 0x823b5fd4
	goto loc_823B5FD4;
loc_823B5FD0:
	// stb r30,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r30.u8);
loc_823B5FD4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
loc_823B5FDC:
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r31,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, r31.u32);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823b57f8
	if (ctx.cr6.lt) goto loc_823B57F8;
	// b 0x823b6494
	goto loc_823B6494;
loc_823B5FF4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_823B5FF8:
	// blt cr6,0x823b62f4
	if (ctx.cr6.lt) goto loc_823B62F4;
	// lwz r9,84(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b62f4
	if (!ctx.cr6.lt) goto loc_823B62F4;
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b6494
	if (!ctx.cr6.gt) goto loc_823B6494;
loc_823B601C:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f13.u64);
	// lwz r10,-308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823b62d8
	if (ctx.cr6.lt) goto loc_823B62D8;
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b61d8
	if (!ctx.cr6.lt) goto loc_823B61D8;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// std r5,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r5.u64);
	// lfd f13,-200(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// stw r9,-10300(r10)
	REX_STORE_U32(ctx.r10.u32 + -10300, ctx.r9.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fmsub f6,f0,f12,f11
	ctx.f6.f64 = std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f11.f64);
	// lbzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// mullw r6,r5,r25
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(r25.s32);
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f5.u64);
	// lwz r28,-308(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// subf r5,r5,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subfic r27,r28,256
	ctx.xer.ca = r28.u32 <= 256;
	r27.u64 = static_cast<uint64_t>(256) - r28.u64;
	// subf r9,r4,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r4.u64;
	// mullw r5,r4,r28
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(r28.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r27,r25,r27
	r27.u64 = r27.u64 - r25.u64;
	// mullw r4,r9,r28
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(r28.s32);
	// mullw r9,r4,r25
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(r25.s32);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// mullw r8,r27,r8
	ctx.r8.s64 = int64_t(r27.s32) * int64_t(ctx.r8.s32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// stb r6,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// lwz r4,80(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r26,5(r10)
	r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r8,1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r4,5(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 5);
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// mullw r6,r9,r25
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// subf r9,r9,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r9.u64;
	// mullw r5,r27,r8
	ctx.r5.s64 = int64_t(r27.s32) * int64_t(ctx.r8.s32);
	// subf r9,r26,r9
	ctx.r9.u64 = ctx.r9.u64 - r26.u64;
	// mullw r4,r26,r28
	ctx.r4.s64 = int64_t(r26.s32) * int64_t(r28.s32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r9,r8,r28
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// mullw r8,r9,r25
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stb r5,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r5.u8);
	// lbz r6,6(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lwz r5,80(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r4,r6,r28
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(r28.s32);
	// lbz r5,6(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 6);
	// lbz r26,2(r9)
	r26.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// subf r9,r26,r5
	ctx.r9.u64 = ctx.r5.u64 - r26.u64;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// mullw r5,r27,r8
	ctx.r5.s64 = int64_t(r27.s32) * int64_t(ctx.r8.s32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r6,r26,r25
	ctx.r6.s64 = int64_t(r26.s32) * int64_t(r25.s32);
	// mullw r9,r8,r28
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// mullw r8,r9,r25
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stb r5,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r5.u8);
	// lbz r9,3(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// mullw r6,r27,r9
	ctx.r6.s64 = int64_t(r27.s32) * int64_t(ctx.r9.s32);
	// lwz r8,80(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r4,7(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r5,r4,r28
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(r28.s32);
	// lbz r27,7(r10)
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// mullw r8,r10,r25
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(r25.s32);
	// subf r10,r10,r27
	ctx.r10.u64 = r27.u64 - ctx.r10.u64;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r4,r9,r28
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(r28.s32);
	// mullw r10,r4,r25
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(r25.s32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stb r6,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r6.u8);
	// b 0x823b62dc
	goto loc_823B62DC;
loc_823B61D8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b62d8
	if (!ctx.cr6.gt) goto loc_823B62D8;
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823b62d8
	if (!ctx.cr6.lt) goto loc_823B62D8;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// std r5,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r5.u64);
	// lfd f13,-184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fmsub f6,f0,f12,f11
	ctx.f6.f64 = std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f11.f64);
	// stw r9,-10300(r10)
	REX_STORE_U32(ctx.r10.u32 + -10300, ctx.r9.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// lbzx r4,r4,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// mullw r6,r4,r25
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(r25.s32);
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f5.u64);
	// lwz r9,-308(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// subfic r8,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r8.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// subf r8,r25,r8
	ctx.r8.u64 = ctx.r8.u64 - r25.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r28,r8,r9
	r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r5,r4,r5
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stb r4,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// lbz r8,1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lwz r4,80(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r8,r28,r8
	ctx.r8.s64 = int64_t(r28.s32) * int64_t(ctx.r8.s32);
	// lbz r4,1(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// mullw r9,r4,r25
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(r25.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stb r8,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// mullw r8,r5,r9
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// lwz r5,80(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,2(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// mullw r9,r9,r25
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r5,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 8;
	// stb r5,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r5.u8);
	// lbz r8,3(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lwz r5,80(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r9,r6,r8
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// lbz r10,3(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// mullw r10,r10,r25
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r25.s32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stb r6,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r6.u8);
	// b 0x823b62dc
	goto loc_823B62DC;
loc_823B62D8:
	// stb r30,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r30.u8);
loc_823B62DC:
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823b601c
	if (ctx.cr6.lt) goto loc_823B601C;
	// b 0x823b6490
	goto loc_823B6490;
loc_823B62F4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b646c
	if (!ctx.cr6.gt) goto loc_823B646C;
	// lwz r9,84(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b646c
	if (!ctx.cr6.lt) goto loc_823B646C;
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b6494
	if (!ctx.cr6.gt) goto loc_823B6494;
loc_823B6318:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f13.u64);
	// lwz r10,-308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823b6450
	if (ctx.cr6.lt) goto loc_823B6450;
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b6404
	if (!ctx.cr6.lt) goto loc_823B6404;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// std r6,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r6.u64);
	// lbzx r4,r8,r7
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// stw r9,-10300(r10)
	REX_STORE_U32(ctx.r10.u32 + -10300, ctx.r9.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lfd f13,-168(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fmsub f6,f0,f12,f11
	ctx.f6.f64 = std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f11.f64);
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f5.u64);
	// lwz r31,-308(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// subfic r6,r31,256
	ctx.xer.ca = r31.u32 <= 256;
	ctx.r6.u64 = static_cast<uint64_t>(256) - r31.u64;
	// subf r9,r25,r6
	ctx.r9.u64 = ctx.r6.u64 - r25.u64;
	// mullw r6,r8,r31
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(r31.s32);
	// add r8,r9,r25
	ctx.r8.u64 = ctx.r9.u64 + r25.u64;
	// add r28,r9,r25
	r28.u64 = ctx.r9.u64 + r25.u64;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r4,r9,r25
	ctx.r4.u64 = ctx.r9.u64 + r25.u64;
	// srawi r8,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 8;
	// add r6,r9,r25
	ctx.r6.u64 = ctx.r9.u64 + r25.u64;
	// stb r8,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r8,5(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r9,1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// mullw r9,r28,r9
	ctx.r9.s64 = int64_t(r28.s32) * int64_t(ctx.r9.s32);
	// mullw r8,r8,r31
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r31.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stb r8,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r8,6(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r8,r8,r31
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r31.s32);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r9,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 8;
	// stb r9,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r9.u8);
	// lbz r6,7(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// mullw r9,r6,r31
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(r31.s32);
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// mullw r10,r4,r10
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stb r6,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r6.u8);
	// b 0x823b6454
	goto loc_823B6454;
loc_823B6404:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b6450
	if (!ctx.cr6.gt) goto loc_823B6450;
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b6450
	if (!ctx.cr6.lt) goto loc_823B6450;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lis r8,-32162
	ctx.r8.s64 = -2107768832;
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,-10300(r8)
	REX_STORE_U32(ctx.r8.u32 + -10300, ctx.r9.u32);
	// stb r6,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// lbz r4,1(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stb r4,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r4.u8);
	// lbz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// stb r9,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r9.u8);
	// lbz r8,3(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r8,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// b 0x823b6454
	goto loc_823B6454;
loc_823B6450:
	// stb r30,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r30.u8);
loc_823B6454:
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823b6318
	if (ctx.cr6.lt) goto loc_823B6318;
	// b 0x823b6490
	goto loc_823B6490;
loc_823B646C:
	// lwz r9,88(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823b6494
	if (!ctx.cr6.gt) goto loc_823B6494;
loc_823B647C:
	// stbu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U8(ea, r30.u8);
	ctx.r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,88(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823b647c
	if (ctx.cr6.lt) goto loc_823B647C;
loc_823B6490:
	// stw r11,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
loc_823B6494:
	// lwz r10,92(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r29,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, r29.u32);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823b572c
	if (ctx.cr6.lt) goto loc_823B572C;
loc_823B64A8:
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823E3D68) {
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
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823e3dfc
	if (!ctx.cr6.lt) goto loc_823E3DFC;
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
	// lfs f0,-30028(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -30028);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
loc_823E3DCC:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// stfs f13,12(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x823e3dcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E3DCC;
loc_823E3DFC:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e3e18
	if (ctx.cr6.eq) goto loc_823E3E18;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x823E3E18;
	sub_82413D40(ctx, base);
loc_823E3E18:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e3e34
	if (ctx.cr6.eq) goto loc_823E3E34;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x823dc3f0
	ctx.lr = 0x823E3E34;
	sub_823DC3F0(ctx, base);
loc_823E3E34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E64E8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,6690
	ctx.r10.s64 = 438435840;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r10,r10,43552
	ctx.r10.u64 = ctx.r10.u64 | 43552;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823e6a18
	if (ctx.cr6.gt) goto loc_823E6A18;
	// beq cr6,0x823e69e4
	if (ctx.cr6.eq) goto loc_823E69E4;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823e67c4
	if (ctx.cr6.gt) goto loc_823E67C4;
	// beq cr6,0x823e6798
	if (ctx.cr6.eq) goto loc_823E6798;
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823e66a8
	if (ctx.cr6.gt) goto loc_823E66A8;
	// beq cr6,0x823e667c
	if (ctx.cr6.eq) goto loc_823E667C;
	// lis r10,1168
	ctx.r10.s64 = 76546048;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823e6648
	if (ctx.cr6.eq) goto loc_823E6648;
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// ori r10,r10,10
	ctx.r10.u64 = ctx.r10.u64 | 10;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823e6614
	if (ctx.cr6.eq) goto loc_823E6614;
	// addis r11,r11,-6184
	ctx.r11.s64 = ctx.r11.s64 + -405274624;
	// addic. r11,r11,-3
	ctx.xer.ca = ctx.r11.u32 > 2;
	ctx.r11.s64 = ctx.r11.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e65e0
	if (ctx.cr0.eq) goto loc_823E65E0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823e65ac
	if (ctx.cr6.eq) goto loc_823E65AC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x823e6ef0
	if (!ctx.cr6.eq) goto loc_823E6EF0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x823cd118
	ctx.lr = 0x823E658C;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e4e20
	ctx.lr = 0x823E65A0;
	sub_823E4E20(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6624
	ctx.r11.s64 = ctx.r11.s64 + -6624;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E65AC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E65B8;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E65D4;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7152
	ctx.r11.s64 = ctx.r11.s64 + -7152;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E65E0:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E65EC;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6608;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7088
	ctx.r11.s64 = ctx.r11.s64 + -7088;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6614:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6620;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E663C;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6912
	ctx.r11.s64 = ctx.r11.s64 + -6912;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6648:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6654;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6670;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7056
	ctx.r11.s64 = ctx.r11.s64 + -7056;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E667C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x823cd118
	ctx.lr = 0x823E6688;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e4e20
	ctx.lr = 0x823E669C;
	sub_823E4E20(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6624
	ctx.r11.s64 = ctx.r11.s64 + -6624;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E66A8:
	// addis r11,r11,-6184
	ctx.r11.s64 = ctx.r11.s64 + -405274624;
	// addic. r11,r11,-15
	ctx.xer.ca = ctx.r11.u32 > 14;
	ctx.r11.s64 = ctx.r11.s64 + -15;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e6764
	if (ctx.cr0.eq) goto loc_823E6764;
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// beq cr6,0x823e6730
	if (ctx.cr6.eq) goto loc_823E6730;
	// addis r11,r11,-504
	ctx.r11.s64 = ctx.r11.s64 + -33030144;
	// addic. r11,r11,9
	ctx.xer.ca = ctx.r11.u32 > 4294967286;
	ctx.r11.s64 = ctx.r11.s64 + 9;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e66fc
	if (ctx.cr0.eq) goto loc_823E66FC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x823e6ef0
	if (!ctx.cr6.eq) goto loc_823E6EF0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x823cd118
	ctx.lr = 0x823E66DC;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e4e20
	ctx.lr = 0x823E66F0;
	sub_823E4E20(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6624
	ctx.r11.s64 = ctx.r11.s64 + -6624;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E66FC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6708;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6724;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7008
	ctx.r11.s64 = ctx.r11.s64 + -7008;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6730:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E673C;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6758;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6960
	ctx.r11.s64 = ctx.r11.s64 + -6960;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6764:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6770;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E678C;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6798:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x823cd118
	ctx.lr = 0x823E67A4;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e4e20
	ctx.lr = 0x823E67B8;
	sub_823E4E20(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6624
	ctx.r11.s64 = ctx.r11.s64 + -6624;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E67C4:
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,54
	ctx.r10.u64 = ctx.r10.u64 | 54;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823e68e8
	if (ctx.cr6.gt) goto loc_823E68E8;
	// beq cr6,0x823e68b4
	if (ctx.cr6.eq) goto loc_823E68B4;
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addic. r11,r11,-18
	ctx.xer.ca = ctx.r11.u32 > 17;
	ctx.r11.s64 = ctx.r11.s64 + -18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e6888
	if (ctx.cr0.eq) goto loc_823E6888;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823e685c
	if (ctx.cr6.eq) goto loc_823E685C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x823e6830
	if (ctx.cr6.eq) goto loc_823E6830;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x823e6ef0
	if (!ctx.cr6.eq) goto loc_823E6EF0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6808;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6824;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6944
	ctx.r11.s64 = ctx.r11.s64 + -6944;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6830:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x823cd118
	ctx.lr = 0x823E683C;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e5800
	ctx.lr = 0x823E6850;
	sub_823E5800(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6640
	ctx.r11.s64 = ctx.r11.s64 + -6640;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E685C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x823cd118
	ctx.lr = 0x823E6868;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e5800
	ctx.lr = 0x823E687C;
	sub_823E5800(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6640
	ctx.r11.s64 = ctx.r11.s64 + -6640;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6888:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x823cd118
	ctx.lr = 0x823E6894;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e5800
	ctx.lr = 0x823E68A8;
	sub_823E5800(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6640
	ctx.r11.s64 = ctx.r11.s64 + -6640;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E68B4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E68C0;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E68DC;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7024
	ctx.r11.s64 = ctx.r11.s64 + -7024;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E68E8:
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addic. r11,r11,-10806
	ctx.xer.ca = ctx.r11.u32 > 10805;
	ctx.r11.s64 = ctx.r11.s64 + -10806;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e69b0
	if (ctx.cr0.eq) goto loc_823E69B0;
	// cmplwi cr6,r11,32720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32720, ctx.xer);
	// beq cr6,0x823e697c
	if (ctx.cr6.eq) goto loc_823E697C;
	// cmplwi cr6,r11,32740
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32740, ctx.xer);
	// beq cr6,0x823e6948
	if (ctx.cr6.eq) goto loc_823E6948;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,54754
	ctx.r10.u64 = ctx.r10.u64 | 54754;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823e6ef0
	if (!ctx.cr6.eq) goto loc_823E6EF0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6920;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E693C;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6784
	ctx.r11.s64 = ctx.r11.s64 + -6784;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6948:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6954;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6970;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6800
	ctx.r11.s64 = ctx.r11.s64 + -6800;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E697C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6988;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E69A4;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6848
	ctx.r11.s64 = ctx.r11.s64 + -6848;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E69B0:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E69BC;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E69D8;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6816
	ctx.r11.s64 = ctx.r11.s64 + -6816;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E69E4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E69F0;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6A0C;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6736
	ctx.r11.s64 = ctx.r11.s64 + -6736;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6A18:
	// lis r10,10784
	ctx.r10.s64 = 706740224;
	// ori r10,r10,2566
	ctx.r10.u64 = ctx.r10.u64 | 2566;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823e6ca4
	if (ctx.cr6.gt) goto loc_823E6CA4;
	// beq cr6,0x823e6c70
	if (ctx.cr6.eq) goto loc_823E6C70;
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823e6b78
	if (ctx.cr6.gt) goto loc_823E6B78;
	// beq cr6,0x823e6b44
	if (ctx.cr6.eq) goto loc_823E6B44;
	// lis r10,6690
	ctx.r10.s64 = 438435840;
	// ori r10,r10,43558
	ctx.r10.u64 = ctx.r10.u64 | 43558;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823e6b10
	if (ctx.cr6.eq) goto loc_823E6B10;
	// addis r11,r11,-10240
	ctx.r11.s64 = ctx.r11.s64 + -671088640;
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e6adc
	if (ctx.cr0.eq) goto loc_823E6ADC;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x823e6aa8
	if (ctx.cr6.eq) goto loc_823E6AA8;
	// lis r10,40
	ctx.r10.s64 = 2621440;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823e6ef0
	if (!ctx.cr6.eq) goto loc_823E6EF0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6A80;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6A9C;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7104
	ctx.r11.s64 = ctx.r11.s64 + -7104;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6AA8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6AB4;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6AD0;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6784
	ctx.r11.s64 = ctx.r11.s64 + -6784;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6ADC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6AE8;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6B04;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6928
	ctx.r11.s64 = ctx.r11.s64 + -6928;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6B10:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6B1C;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6B38;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -6688;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6B44:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6B50;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6B6C;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7120
	ctx.r11.s64 = ctx.r11.s64 + -7120;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6B78:
	// addis r11,r11,-10280
	ctx.r11.s64 = ctx.r11.s64 + -673710080;
	// addic. r11,r11,-6
	ctx.xer.ca = ctx.r11.u32 > 5;
	ctx.r11.s64 = ctx.r11.s64 + -6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e6c3c
	if (ctx.cr0.eq) goto loc_823E6C3C;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x823e6c08
	if (ctx.cr6.eq) goto loc_823E6C08;
	// addis r11,r11,-504
	ctx.r11.s64 = ctx.r11.s64 + -33030144;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823e6bd4
	if (ctx.cr0.eq) goto loc_823E6BD4;
	// cmplwi cr6,r11,2559
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2559, ctx.xer);
	// bne cr6,0x823e6ef0
	if (!ctx.cr6.eq) goto loc_823E6EF0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6BAC;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6BC8;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6880
	ctx.r11.s64 = ctx.r11.s64 + -6880;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6BD4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6BE0;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6BFC;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6992
	ctx.r11.s64 = ctx.r11.s64 + -6992;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6C08:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6C14;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6C30;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6C3C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6C48;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6C64;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-7136
	ctx.r11.s64 = ctx.r11.s64 + -7136;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6C70:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6C7C;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6C98;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6864
	ctx.r11.s64 = ctx.r11.s64 + -6864;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6CA4:
	// lis r10,11554
	ctx.r10.s64 = 757202944;
	// ori r10,r10,43557
	ctx.r10.u64 = ctx.r10.u64 | 43557;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823e6de8
	if (ctx.cr6.gt) goto loc_823E6DE8;
	// beq cr6,0x823e6db4
	if (ctx.cr6.eq) goto loc_823E6DB4;
	// addis r11,r11,-11552
	ctx.r11.s64 = ctx.r11.s64 + -757071872;
	// addic. r11,r11,-25
	ctx.xer.ca = ctx.r11.u32 > 24;
	ctx.r11.s64 = ctx.r11.s64 + -25;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e6d80
	if (ctx.cr0.eq) goto loc_823E6D80;
	// cmplwi cr6,r11,43505
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43505, ctx.xer);
	// beq cr6,0x823e6d4c
	if (ctx.cr6.eq) goto loc_823E6D4C;
	// cmplwi cr6,r11,43520
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43520, ctx.xer);
	// beq cr6,0x823e6d18
	if (ctx.cr6.eq) goto loc_823E6D18;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,43526
	ctx.r10.u64 = ctx.r10.u64 | 43526;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823e6ef0
	if (!ctx.cr6.eq) goto loc_823E6EF0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6CF0;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6D0C;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6752
	ctx.r11.s64 = ctx.r11.s64 + -6752;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6D18:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6D24;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6D40;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6832
	ctx.r11.s64 = ctx.r11.s64 + -6832;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6D4C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6D58;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6D74;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6896
	ctx.r11.s64 = ctx.r11.s64 + -6896;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6D80:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6D8C;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6DA8;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6976
	ctx.r11.s64 = ctx.r11.s64 + -6976;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6DB4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6DC0;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6DDC;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6704
	ctx.r11.s64 = ctx.r11.s64 + -6704;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6DE8:
	// addis r11,r11,-11683
	ctx.r11.s64 = ctx.r11.s64 + -765657088;
	// addic. r11,r11,21986
	ctx.xer.ca = ctx.r11.u32 > 4294945309;
	ctx.r11.s64 = ctx.r11.s64 + 21986;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e6eac
	if (ctx.cr0.eq) goto loc_823E6EAC;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x823e6e78
	if (ctx.cr6.eq) goto loc_823E6E78;
	// addis r11,r11,-2191
	ctx.r11.s64 = ctx.r11.s64 + -143589376;
	// addic. r11,r11,24029
	ctx.xer.ca = ctx.r11.u32 > 4294943266;
	ctx.r11.s64 = ctx.r11.s64 + 24029;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e6e44
	if (ctx.cr0.eq) goto loc_823E6E44;
	// cmplwi cr6,r11,1503
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1503, ctx.xer);
	// bne cr6,0x823e6ef0
	if (!ctx.cr6.eq) goto loc_823E6EF0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6E1C;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6E38;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6656
	ctx.r11.s64 = ctx.r11.s64 + -6656;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6E44:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6E50;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6E6C;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6672
	ctx.r11.s64 = ctx.r11.s64 + -6672;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6E78:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6E84;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6EA0;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6720
	ctx.r11.s64 = ctx.r11.s64 + -6720;
	// b 0x823e6edc
	goto loc_823E6EDC;
loc_823E6EAC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823cd118
	ctx.lr = 0x823E6EB8;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823e6ee4
	if (ctx.cr0.eq) goto loc_823E6EE4;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbac8
	ctx.lr = 0x823E6ED4;
	sub_823DBAC8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-6768
	ctx.r11.s64 = ctx.r11.s64 + -6768;
loc_823E6EDC:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x823e6ee8
	goto loc_823E6EE8;
loc_823E6EE4:
	// li r31,0
	r31.s64 = 0;
loc_823E6EE8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x823e6ef8
	if (!ctx.cr6.eq) goto loc_823E6EF8;
loc_823E6EF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823e6f58
	goto loc_823E6F58;
loc_823E6EF8:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e6f34
	if (ctx.cr6.eq) goto loc_823E6F34;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dbe48
	ctx.lr = 0x823E6F10;
	sub_823DBE48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823e6f34
	if (!ctx.cr0.lt) goto loc_823E6F34;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E6F30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823e6ef0
	goto loc_823E6EF0;
loc_823E6F34:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e6f54
	if (ctx.cr6.eq) goto loc_823E6F54;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E6F54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E6F54:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823E6F58:
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

DEFINE_REX_FUNC(sub_82406BC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// addi r8,r1,-80
	ctx.r8.s64 = ctx.r1.s64 + -80;
	// lbz r7,1(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// stw r10,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r10,-68(r1)
	REX_STORE_U32(ctx.r1.u32 + -68, ctx.r10.u32);
	// addi r6,r6,16320
	ctx.r6.s64 = ctx.r6.s64 + 16320;
	// stw r9,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r9.u32);
	// stw r7,-76(r1)
	REX_STORE_U32(ctx.r1.u32 + -76, ctx.r7.u32);
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcuxwfp128 v62,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v62.f32, rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v62,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v0,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vcmpgtfp128. v62,v0,v63
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v63.f32)));
	ctx.cr6.setFromMask(simde_mm_load_ps(ctx.v62.f32), 0xF);
	// bge cr6,0x82406c74
	if (!ctx.cr6.lt) goto loc_82406C74;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// addi r9,r9,16656
	ctx.r9.s64 = ctx.r9.s64 + 16656;
	// addi r8,r8,16640
	ctx.r8.s64 = ctx.r8.s64 + 16640;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// addi r7,r7,16624
	ctx.r7.s64 = ctx.r7.s64 + 16624;
	// lvx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// lvx128 v61,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v13,v63,v62
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v12,v63,v61
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32)));
	// addi r8,r6,16608
	ctx.r8.s64 = ctx.r6.s64 + 16608;
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// lvx128 v11,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,-48
	ctx.r7.s64 = ctx.r1.s64 + -48;
	// addi r4,r1,-32
	ctx.r4.s64 = ctx.r1.s64 + -32;
	// lvx128 v10,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v0,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v0,v10,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v12,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82406ce8
	goto loc_82406CE8;
loc_82406C74:
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// addi r9,r9,16592
	ctx.r9.s64 = ctx.r9.s64 + 16592;
	// addi r8,r8,16576
	ctx.r8.s64 = ctx.r8.s64 + 16576;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// addi r4,r1,-48
	ctx.r4.s64 = ctx.r1.s64 + -48;
	// lvx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,16544
	ctx.r7.s64 = ctx.r7.s64 + 16544;
	// vmulfp128 v13,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// lvx128 v62,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v12,v63,v62
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// addi r8,r6,16560
	ctx.r8.s64 = ctx.r6.s64 + 16560;
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lvx128 v11,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// addi r6,r6,1992
	ctx.r6.s64 = ctx.r6.s64 + 1992;
	// lvx128 v10,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v0,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vor128 v63,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// stvx128 v12,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp128 v63,v0,v10,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v13,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v62,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v63,v62,1,1
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 147), 1));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82406CE8:
	// lbz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// li r9,16
	ctx.r9.s64 = 16;
	// lbz r7,7(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 7);
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,3(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r4,6(r3)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 6);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// lbz r5,2(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lbz r4,5(r3)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// stw r8,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r8.u32);
	// stw r9,-76(r1)
	REX_STORE_U32(ctx.r1.u32 + -76, ctx.r9.u32);
loc_82406D38:
	// rlwinm r8,r10,31,1,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFC;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,-80
	ctx.r9.s64 = ctx.r1.s64 + -80;
	// addi r5,r1,-64
	ctx.r5.s64 = ctx.r1.s64 + -64;
	// addi r3,r1,-64
	ctx.r3.s64 = ctx.r1.s64 + -64;
	// addi r4,r1,-48
	ctx.r4.s64 = ctx.r1.s64 + -48;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r31,r8,r9
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r5,r31,2,27,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0x1C;
	// rlwinm r31,r31,29,3,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 29) & 0x1FFFFFFF;
	// stwx r31,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, r31.u32);
	// lfsx f0,r5,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r6,r7
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r7.u32, temp.u32);
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82406d38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82406D38;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82414BC0) {
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
	// bl 0x822d4e78
	ctx.lr = 0x82414BC8;
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
	// beq cr6,0x82414c00
	if (ctx.cr6.eq) goto loc_82414C00;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x82414BFC;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82414C00:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82414c1c
	if (ctx.cr6.eq) goto loc_82414C1C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413dd0
	ctx.lr = 0x82414C18;
	sub_82413DD0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82414C1C:
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
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r29,30
	ctx.r8.u64 = r29.u32 & 0x3;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// mullw r10,r3,r29
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(r29.s32);
	// lfs f31,1996(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 1996);
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
	// bne 0x82414c88
	if (!ctx.cr0.eq) goto loc_82414C88;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x82414c90
	goto loc_82414C90;
loc_82414C88:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_82414C90:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82414ca8
	if (ctx.cr6.eq) goto loc_82414CA8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x82414CA8;
	sub_823DC658(ctx, base);
loc_82414CA8:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82414f80
	if (!ctx.cr6.gt) goto loc_82414F80;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// rlwinm r25,r30,1,0,30
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfd f11,-9120(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r7.u32 + -9120);
	// subf r30,r25,r28
	r30.u64 = r28.u64 - r25.u64;
	// lfs f5,-7220(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -7220);
	ctx.f5.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r28,-32255
	r28.s64 = -2113863680;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f12,16288(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16288);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,-7224(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -7224);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,17176(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 17176);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f7,9952(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 9952);
	ctx.f7.f64 = double(temp.f32);
	// addi r29,r27,8
	r29.s64 = r27.s64 + 8;
	// lfs f4,25732(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 25732);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,32280(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 32280);
	ctx.f6.f64 = double(temp.f32);
loc_82414D1C:
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
	// lfs f9,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 + f31.f64));
	// fadds f8,f8,f30
	ctx.f8.f64 = double(float(ctx.f8.f64 + f30.f64));
	// lfsx f3,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
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
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f2,f1
	ctx.f2.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f2,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// fctiwz f3,f3
	ctx.f3.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f3.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x82414ecc
	if (ctx.cr6.eq) goto loc_82414ECC;
	// extsw r28,r6
	r28.s64 = ctx.r6.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r7,r4
	ctx.r7.s64 = ctx.r4.s32;
	// std r28,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r28.u64);
	// extsw r28,r5
	r28.s64 = ctx.r5.s32;
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
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
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
	// fmuls f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
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
	// lfs f9,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f9,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// frsp f31,f3
	f31.f64 = double(float(ctx.f3.f64));
	// fmadds f9,f10,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmul f3,f10,f11
	ctx.f3.f64 = ctx.f10.f64 * ctx.f11.f64;
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f9,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f10,f10,f12,f9
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f10,24(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// frsp f29,f3
	f29.f64 = double(float(ctx.f3.f64));
loc_82414ECC:
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x82414edc
	if (ctx.cr6.lt) goto loc_82414EDC;
	// li r11,31
	ctx.r11.s64 = 31;
loc_82414EDC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82414ef4
	if (!ctx.cr6.gt) goto loc_82414EF4;
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// blt cr6,0x82414ef8
	if (ctx.cr6.lt) goto loc_82414EF8;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x82414ef8
	goto loc_82414EF8;
loc_82414EF4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82414EF8:
	// cmpwi cr6,r5,63
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 63, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x82414f08
	if (ctx.cr6.lt) goto loc_82414F08;
	// li r11,63
	ctx.r11.s64 = 63;
loc_82414F08:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82414f20
	if (!ctx.cr6.gt) goto loc_82414F20;
	// cmpwi cr6,r5,63
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 63, ctx.xer);
	// blt cr6,0x82414f24
	if (ctx.cr6.lt) goto loc_82414F24;
	// li r5,63
	ctx.r5.s64 = 63;
	// b 0x82414f24
	goto loc_82414F24;
loc_82414F20:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82414F24:
	// cmpwi cr6,r6,31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 31, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x82414f34
	if (ctx.cr6.lt) goto loc_82414F34;
	// li r11,31
	ctx.r11.s64 = 31;
loc_82414F34:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82414f4c
	if (!ctx.cr6.gt) goto loc_82414F4C;
	// cmpwi cr6,r6,31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 31, ctx.xer);
	// blt cr6,0x82414f50
	if (ctx.cr6.lt) goto loc_82414F50;
	// li r6,31
	ctx.r6.s64 = 31;
	// b 0x82414f50
	goto loc_82414F50;
loc_82414F4C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82414F50:
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// sthux r11,r30,r25
	ea = r30.u32 + r25.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	r30.u32 = ea;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82414d1c
	if (ctx.cr6.lt) goto loc_82414D1C;
loc_82414F80:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_824207D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x824207E0;
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
	// bne cr6,0x8242081c
	if (!ctx.cr6.eq) goto loc_8242081C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-18872
	ctx.r6.s64 = ctx.r11.s64 + -18872;
	// addi r5,r10,16968
	ctx.r5.s64 = ctx.r10.s64 + 16968;
	// addi r4,r9,16880
	ctx.r4.s64 = ctx.r9.s64 + 16880;
	// li r7,2527
	ctx.r7.s64 = 2527;
	// bl 0x8240e308
	ctx.lr = 0x8242081C;
	sub_8240E308(ctx, base);
loc_8242081C:
	// li r4,926
	ctx.r4.s64 = 926;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e810
	ctx.lr = 0x82420828;
	sub_8240E810(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8242088c
	if (!ctx.cr6.eq) goto loc_8242088C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242084c
	if (ctx.cr6.eq) goto loc_8242084C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240e930
	ctx.lr = 0x8242084C;
	sub_8240E930(ctx, base);
loc_8242084C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82420884
	if (ctx.cr6.eq) goto loc_82420884;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82420884
	if (ctx.cr6.eq) goto loc_82420884;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18888
	ctx.r4.s64 = ctx.r10.s64 + -18888;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,144(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// bctrl 
	ctx.lr = 0x82420884;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82420884:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824208e4
	goto loc_824208E4;
loc_8242088C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824208a8
	if (ctx.cr6.eq) goto loc_824208A8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240e930
	ctx.lr = 0x824208A8;
	sub_8240E930(ctx, base);
loc_824208A8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824208e0
	if (ctx.cr6.eq) goto loc_824208E0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824208e0
	if (ctx.cr6.eq) goto loc_824208E0;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18888
	ctx.r4.s64 = ctx.r10.s64 + -18888;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,144(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// bctrl 
	ctx.lr = 0x824208E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824208E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824208E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82424880) {
	REX_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82424890) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-6664
	ctx.r3.s64 = ctx.r11.s64 + -6664;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82424978) {
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
	ctx.lr = 0x82424980;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r9,1873(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 1873);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r29,r11,16880
	r29.s64 = ctx.r11.s64 + 16880;
	// addi r28,r10,-15344
	r28.s64 = ctx.r10.s64 + -15344;
	// beq 0x824249cc
	if (ctx.cr0.eq) goto loc_824249CC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-15252
	ctx.r5.s64 = ctx.r11.s64 + -15252;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,482
	ctx.r7.s64 = 482;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x824249CC;
	sub_8240E308(ctx, base);
loc_824249CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r31,912
	ctx.r11.s64 = r31.s64 + 912;
loc_824249D4:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82424a18
	if (ctx.cr6.eq) goto loc_82424A18;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// blt cr6,0x824249d4
	if (ctx.cr6.lt) goto loc_824249D4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,8424
	ctx.r5.s64 = ctx.r11.s64 + 8424;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,499
	ctx.r7.s64 = 499;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82424A0C;
	sub_8240E308(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82424A10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_82424A18:
	// addi r11,r3,244
	ctx.r11.s64 = ctx.r3.s64 + 244;
	// addi r10,r3,260
	ctx.r10.s64 = ctx.r3.s64 + 260;
	// addi r9,r3,228
	ctx.r9.s64 = ctx.r3.s64 + 228;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r30,33
	ctx.cr6.compare<int32_t>(r30.s32, 33, ctx.xer);
	// stwx r30,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r30.u32);
	// stwx r27,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, r27.u32);
	// stwx r26,r9,r31
	REX_STORE_U32(ctx.r9.u32 + r31.u32, r26.u32);
	// beq cr6,0x82424a10
	if (ctx.cr6.eq) goto loc_82424A10;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r3,69
	ctx.r9.s64 = ctx.r3.s64 + 69;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82424A58:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r8.u32);
	// bdnz 0x82424a58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82424A58;
	// b 0x82424a10
	goto loc_82424A10;
}

DEFINE_REX_FUNC(sub_82428CD0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,-32152
	ctx.r3.s64 = ctx.r11.s64 + -32152;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82428D50) {
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
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82428a88
	ctx.lr = 0x82428D74;
	sub_82428A88(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-3392
	ctx.r9.s64 = ctx.r11.s64 + -3392;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r9,32(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r9,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// stw r30,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r30.u32);
	// stb r11,28(r30)
	REX_STORE_U8(r30.u32 + 28, ctx.r11.u8);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_82429B08) {
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
	// bl 0x82428a88
	ctx.lr = 0x82429B20;
	sub_82428A88(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-1408
	ctx.r10.s64 = ctx.r10.s64 + -1408;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,-4204(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -4204);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_8242B598) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-30569
	ctx.r9.s64 = -2003369984;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// lwz r11,1048(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1048);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242b5dc
	if (ctx.cr0.eq) goto loc_8242B5DC;
	// lhz r11,2(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// lhz r8,2(r5)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8242b5dc
	if (ctx.cr6.eq) goto loc_8242B5DC;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8242b5dc
	if (ctx.cr6.eq) goto loc_8242B5DC;
	// sth r11,2(r5)
	REX_STORE_U16(ctx.r5.u32 + 2, ctx.r11.u16);
loc_8242B5DC:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,1048(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1048);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242b60c
	if (ctx.cr0.eq) goto loc_8242B60C;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8242b60c
	if (ctx.cr6.eq) goto loc_8242B60C;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8242b60c
	if (ctx.cr6.eq) goto loc_8242B60C;
	// stw r11,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
loc_8242B60C:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,1048(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1048);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lhz r11,14(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 14);
	// lhz r10,14(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 14);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8242b640
	if (ctx.cr6.eq) goto loc_8242B640;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8242b640
	if (ctx.cr6.eq) goto loc_8242B640;
	// sth r11,14(r5)
	REX_STORE_U16(ctx.r5.u32 + 14, ctx.r11.u16);
loc_8242B640:
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// lhz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// bne cr6,0x8242b678
	if (!ctx.cr6.eq) goto loc_8242B678;
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bne cr6,0x8242b660
	if (!ctx.cr6.eq) goto loc_8242B660;
	// lhz r11,18(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 18);
	// b 0x8242b684
	goto loc_8242B684;
loc_8242B660:
	// lhz r11,18(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 18);
	// lhz r10,14(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 14);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
loc_8242B678:
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r11,14(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 14);
loc_8242B684:
	// lhz r10,18(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 18);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// sth r11,18(r5)
	REX_STORE_U16(ctx.r5.u32 + 18, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82432148) {
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
	// bl 0x822d4f00
	ctx.lr = 0x82432158;
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
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
	// lfs f0,21052(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 21052);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,32(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f13,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,16(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,20(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,24(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f6,28(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f5,32(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,36(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f3,40(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f2,44(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// bne cr6,0x82432318
	if (!ctx.cr6.eq) goto loc_82432318;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824324cc
	if (ctx.cr6.eq) goto loc_824324CC;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// li r8,6
	ctx.r8.s64 = 6;
	// divwu r9,r9,r8
	ctx.r9.u64 = uint32_t(ctx.r8.u32 ? ctx.r9.u32 / ctx.r8.u32 : 0);
	// li r8,48
	ctx.r8.s64 = 48;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,72
	ctx.r9.s64 = 72;
loc_82432204:
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhzu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// std r6,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r6.u64);
	// lfd f1,-200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// std r5,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r5.u64);
	// lfd f0,-208(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// lhzu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// fcfid f31,f1
	f31.f64 = double(ctx.f1.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lhzu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// std r5,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r5.u64);
	// lfd f1,-192(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f30,f1
	f30.f64 = double(ctx.f1.s64);
	// std r6,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r6.u64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// lhzu r3,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// lfd f0,-184(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// fcfid f29,f0
	f29.f64 = double(ctx.f0.s64);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhzu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// frsp f0,f31
	ctx.f0.f64 = double(float(f31.f64));
	// std r3,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r3.u64);
	// lfd f31,-176(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// fcfid f28,f31
	f28.f64 = double(f31.s64);
	// frsp f31,f30
	f31.f64 = double(float(f30.f64));
	// std r5,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r5.u64);
	// frsp f30,f29
	f30.f64 = double(float(f29.f64));
	// lfd f29,-168(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f27,f29
	f27.f64 = double(f29.s64);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// frsp f29,f28
	f29.f64 = double(float(f28.f64));
	// frsp f28,f27
	f28.f64 = double(float(f27.f64));
	// dcbt r11,r8
	// dcbt r10,r9
	// fmuls f27,f29,f9
	f27.f64 = double(float(f29.f64 * ctx.f9.f64));
	// fmuls f29,f29,f3
	f29.f64 = double(float(f29.f64 * ctx.f3.f64));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmadds f27,f28,f8,f27
	f27.f64 = double(float(std::fma(f28.f64, ctx.f8.f64, f27.f64)));
	// fmadds f29,f28,f2,f29
	f29.f64 = double(float(std::fma(f28.f64, ctx.f2.f64, f29.f64)));
	// fmadds f28,f30,f10,f27
	f28.f64 = double(float(std::fma(f30.f64, ctx.f10.f64, f27.f64)));
	// fmadds f30,f30,f4,f29
	f30.f64 = double(float(std::fma(f30.f64, ctx.f4.f64, f29.f64)));
	// fmadds f29,f31,f11,f28
	f29.f64 = double(float(std::fma(f31.f64, ctx.f11.f64, f28.f64)));
	// fmadds f31,f31,f5,f30
	f31.f64 = double(float(std::fma(f31.f64, ctx.f5.f64, f30.f64)));
	// fmadds f30,f1,f12,f29
	f30.f64 = double(float(std::fma(ctx.f1.f64, ctx.f12.f64, f29.f64)));
	// fmadds f1,f1,f6,f31
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f6.f64, f31.f64)));
	// fmadds f31,f0,f13,f30
	f31.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, f30.f64)));
	// fmadds f0,f0,f7,f1
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, ctx.f1.f64)));
	// beq cr6,0x824322f4
	if (ctx.cr6.eq) goto loc_824322F4;
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
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x824322fc
	goto loc_824322FC;
loc_824322F4:
	// stfs f31,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
loc_824322FC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82432204
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82432204;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x822d4f4c
	ctx.lr = 0x8243230C;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82432318:
	// lfs f1,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f31,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	f31.f64 = double(temp.f32);
	// fmuls f27,f1,f0
	f27.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f26,f31,f0
	f26.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f1,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	f31.f64 = double(temp.f32);
	// fmuls f25,f1,f0
	f25.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f24,f31,f0
	f24.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f1,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	f31.f64 = double(temp.f32);
	// fmuls f23,f1,f0
	f23.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f22,f31,f0
	f22.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f1,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,28(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28);
	f31.f64 = double(temp.f32);
	// fmuls f21,f1,f0
	f21.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f20,f31,f0
	f20.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f1,32(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,36(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 36);
	f31.f64 = double(temp.f32);
	// fmuls f19,f1,f0
	f19.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f18,f31,f0
	f18.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f1,40(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,44(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	f31.f64 = double(temp.f32);
	// fmuls f17,f1,f0
	f17.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f16,f31,f0
	f16.f64 = double(float(f31.f64 * ctx.f0.f64));
	// beq cr6,0x824324cc
	if (ctx.cr6.eq) goto loc_824324CC;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// li r8,6
	ctx.r8.s64 = 6;
	// divwu r9,r9,r8
	ctx.r9.u64 = uint32_t(ctx.r8.u32 ? ctx.r9.u32 / ctx.r8.u32 : 0);
	// li r8,48
	ctx.r8.s64 = 48;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,72
	ctx.r9.s64 = 72;
loc_8243239C:
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhzu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// std r6,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r6.u64);
	// std r5,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r5.u64);
	// lfd f31,-176(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lhzu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// fcfid f31,f31
	f31.f64 = double(f31.s64);
	// lfd f0,-168(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// lhzu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// std r5,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r5.u64);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// std r3,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r3.u64);
	// lfd f29,-200(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// lhzu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// fcfid f28,f29
	f28.f64 = double(f29.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfd f1,-184(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// fcfid f30,f1
	f30.f64 = double(ctx.f1.s64);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// frsp f1,f31
	ctx.f1.f64 = double(float(f31.f64));
	// std r4,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r4.u64);
	// frsp f31,f30
	f31.f64 = double(float(f30.f64));
	// lfd f30,-192(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f30,f30
	f30.f64 = double(f30.s64);
	// lhzu r3,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// frsp f29,f30
	f29.f64 = double(float(f30.f64));
	// frsp f30,f28
	f30.f64 = double(float(f28.f64));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// std r5,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r5.u64);
	// lfd f28,-208(r1)
	f28.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// fcfid f28,f28
	f28.f64 = double(f28.s64);
	// frsp f28,f28
	f28.f64 = double(float(f28.f64));
	// dcbt r11,r8
	// dcbt r10,r9
	// fmuls f15,f29,f9
	f15.f64 = double(float(f29.f64 * ctx.f9.f64));
	// fmuls f29,f29,f3
	f29.f64 = double(float(f29.f64 * ctx.f3.f64));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmadds f15,f28,f8,f15
	f15.f64 = double(float(std::fma(f28.f64, ctx.f8.f64, f15.f64)));
	// fmadds f29,f28,f2,f29
	f29.f64 = double(float(std::fma(f28.f64, ctx.f2.f64, f29.f64)));
	// fmadds f28,f30,f10,f15
	f28.f64 = double(float(std::fma(f30.f64, ctx.f10.f64, f15.f64)));
	// fmadds f30,f30,f4,f29
	f30.f64 = double(float(std::fma(f30.f64, ctx.f4.f64, f29.f64)));
	// fmadds f29,f31,f11,f28
	f29.f64 = double(float(std::fma(f31.f64, ctx.f11.f64, f28.f64)));
	// fmadds f31,f31,f5,f30
	f31.f64 = double(float(std::fma(f31.f64, ctx.f5.f64, f30.f64)));
	// fmadds f30,f1,f12,f29
	f30.f64 = double(float(std::fma(ctx.f1.f64, ctx.f12.f64, f29.f64)));
	// fmadds f1,f1,f6,f31
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f6.f64, f31.f64)));
	// fmadds f31,f0,f13,f30
	f31.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, f30.f64)));
	// fmadds f0,f0,f7,f1
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, ctx.f1.f64)));
	// beq cr6,0x8243248c
	if (ctx.cr6.eq) goto loc_8243248C;
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
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x82432494
	goto loc_82432494;
loc_8243248C:
	// stfs f31,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
loc_82432494:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fadds f13,f27,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f27.f64 + ctx.f13.f64));
	// fadds f12,f26,f12
	ctx.f12.f64 = double(float(f26.f64 + ctx.f12.f64));
	// fadds f11,f25,f11
	ctx.f11.f64 = double(float(f25.f64 + ctx.f11.f64));
	// fadds f10,f24,f10
	ctx.f10.f64 = double(float(f24.f64 + ctx.f10.f64));
	// fadds f9,f23,f9
	ctx.f9.f64 = double(float(f23.f64 + ctx.f9.f64));
	// fadds f8,f22,f8
	ctx.f8.f64 = double(float(f22.f64 + ctx.f8.f64));
	// fadds f7,f21,f7
	ctx.f7.f64 = double(float(f21.f64 + ctx.f7.f64));
	// fadds f6,f20,f6
	ctx.f6.f64 = double(float(f20.f64 + ctx.f6.f64));
	// fadds f5,f19,f5
	ctx.f5.f64 = double(float(f19.f64 + ctx.f5.f64));
	// fadds f4,f18,f4
	ctx.f4.f64 = double(float(f18.f64 + ctx.f4.f64));
	// fadds f3,f17,f3
	ctx.f3.f64 = double(float(f17.f64 + ctx.f3.f64));
	// fadds f2,f16,f2
	ctx.f2.f64 = double(float(f16.f64 + ctx.f2.f64));
	// bdnz 0x8243239c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243239C;
loc_824324CC:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x822d4f4c
	ctx.lr = 0x824324D4;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82440210) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,11408
	ctx.r11.s64 = ctx.r11.s64 + 11408;
	// addi r10,r10,11388
	ctx.r10.s64 = ctx.r10.s64 + 11388;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// beq cr6,0x82440254
	if (ctx.cr6.eq) goto loc_82440254;
	// bl 0x82473600
	ctx.lr = 0x8244024C;
	sub_82473600(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
loc_82440254:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242a358
	ctx.lr = 0x8244025C;
	sub_8242A358(ctx, base);
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

DEFINE_REX_FUNC(sub_82441568) {
	REX_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82441950) {
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
	ctx.lr = 0x82441958;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r30,r3,28
	r30.s64 = ctx.r3.s64 + 28;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82441980;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,380(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 380);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x824419a4
	if (!ctx.cr6.eq) goto loc_824419A4;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82441630
	ctx.lr = 0x824419A0;
	sub_82441630(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_824419A4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824419B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82442AA0) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82442ae0
	if (!ctx.cr6.lt) goto loc_82442AE0;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82442ad8
	if (ctx.cr6.eq) goto loc_82442AD8;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_82442AD0:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bdnz 0x82442ad0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82442AD0;
loc_82442AD8:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82442ae4
	goto loc_82442AE4;
loc_82442AE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82442AE4:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82442AFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_82444180) {
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
	ctx.lr = 0x82444188;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,5
	ctx.r5.u64 = ctx.r5.u64 | 5;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x824441C0;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824441dc
	if (ctx.cr0.eq) goto loc_824441DC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,100(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82460c80
	ctx.lr = 0x824441D8;
	sub_82460C80(ctx, base);
	// b 0x824441e0
	goto loc_824441E0;
loc_824441DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824441E0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// bne cr6,0x824441f8
	if (!ctx.cr6.eq) goto loc_824441F8;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x82444230
	goto loc_82444230;
loc_824441F8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82460ca8
	ctx.lr = 0x82444204;
	sub_82460CA8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x82444230
	if (!ctx.cr0.lt) goto loc_82444230;
	// lwz r31,8(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82444230
	if (ctx.cr6.eq) goto loc_82444230;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82460e60
	ctx.lr = 0x82444220;
	sub_82460E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x82444228;
	sub_82473600(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_82444230:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8244B800) {
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
	ctx.lr = 0x8244B808;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// bne cr6,0x8244b834
	if (!ctx.cr6.eq) goto loc_8244B834;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_8244B834:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8246e320
	ctx.lr = 0x8244B848;
	sub_8246E320(ctx, base);
	// mullw r11,r3,r28
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(r28.s32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r9,r31,32
	ctx.r9.u64 = r31.u64 & 0xFFFFFFFF;
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// mulld r9,r9,r11
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r11.u64);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// divd r7,r8,r10
	ctx.r7.s64 = (ctx.r10.s64 && !(ctx.r8.s64 == INT64_MIN && ctx.r10.s64 == -1)) ? ctx.r8.s64 / ctx.r10.s64 : 0;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r6,r10,7
	ctx.r6.s64 = ctx.r10.s64 + 7;
	// rlwinm r9,r6,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// bne cr6,0x8244b8f4
	if (!ctx.cr6.eq) goto loc_8244B8F4;
	// cmplwi cr6,r30,44100
	ctx.cr6.compare<uint32_t>(r30.u32, 44100, ctx.xer);
	// bne cr6,0x8244b8f4
	if (!ctx.cr6.eq) goto loc_8244B8F4;
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(r27.u32, 2, ctx.xer);
	// bne cr6,0x8244b8f4
	if (!ctx.cr6.eq) goto loc_8244B8F4;
	// cmplwi cr6,r31,32000
	ctx.cr6.compare<uint32_t>(r31.u32, 32000, ctx.xer);
	// bne cr6,0x8244b8f4
	if (!ctx.cr6.eq) goto loc_8244B8F4;
	// lis r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r8,r8,44100
	ctx.r8.u64 = ctx.r8.u64 | 44100;
	// mulld r7,r10,r8
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r8.u64);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// divd r6,r7,r11
	ctx.r6.s64 = (ctx.r11.s64 && !(ctx.r7.s64 == INT64_MIN && ctx.r11.s64 == -1)) ? ctx.r7.s64 / ctx.r11.s64 : 0;
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// addi r5,r7,7
	ctx.r5.s64 = ctx.r7.s64 + 7;
	// rlwinm r4,r5,0,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r4,32000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32000, ctx.xer);
	// blt cr6,0x8244b8f4
	if (ctx.cr6.lt) goto loc_8244B8F4;
loc_8244B8C4:
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// mulld r7,r7,r8
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r8.u64);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// divd r5,r6,r11
	ctx.r5.s64 = (ctx.r11.s64 && !(ctx.r6.s64 == INT64_MIN && ctx.r11.s64 == -1)) ? ctx.r6.s64 / ctx.r11.s64 : 0;
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// addi r4,r7,7
	ctx.r4.s64 = ctx.r7.s64 + 7;
	// rlwinm r3,r4,0,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r3,32000
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32000, ctx.xer);
	// bge cr6,0x8244b8c4
	if (!ctx.cr6.lt) goto loc_8244B8C4;
loc_8244B8F4:
	// clrlwi r3,r9,16
	ctx.r3.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824522B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r5,12(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f8,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,-16(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f11,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f10,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f9,-16(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f9.f64 = double(temp.f32);
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// bgt cr6,0x824525d4
	if (ctx.cr6.gt) goto loc_824525D4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82452418
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82452418;
	// bdzf 4*cr6+eq,0x824523a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824523A0;
	// bdzf 4*cr6+eq,0x82452490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82452490;
	// bdzf 4*cr6+eq,0x82452510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82452510;
	// bne cr6,0x82452578
	if (!ctx.cr6.eq) goto loc_82452578;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824525d4
	if (ctx.cr6.eq) goto loc_824525D4;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// li r11,12
	ctx.r11.s64 = 12;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82452350:
	// lfsu f8,8(r8)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f8.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// lfsx f7,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fnmsubs f4,f9,f11,f6
	ctx.f4.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f6.f64)));
	// fnmsubs f3,f9,f10,f5
	ctx.f3.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f10.f64, -ctx.f5.f64)));
	// fmadds f11,f4,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f10,f3,f0,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f10.f64)));
	// fmadds f13,f11,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f12,f10,f0,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f12.f64)));
	// dcbt r9,r11
	// stfs f13,-4(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82452350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82452350;
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f10,4(r5)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
loc_824523A0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824525d4
	if (ctx.cr6.eq) goto loc_824525D4;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// li r11,12
	ctx.r11.s64 = 12;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_824523C8:
	// lfsu f8,8(r8)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f8.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// lfsx f7,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fnmsubs f4,f9,f11,f6
	ctx.f4.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f6.f64)));
	// fnmsubs f3,f9,f10,f5
	ctx.f3.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f10.f64, -ctx.f5.f64)));
	// fmadds f11,f4,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f10,f3,f0,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f10.f64)));
	// dcbt r9,r11
	// stfs f4,-4(r9)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// fmadds f13,f11,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f3,0(r9)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// fmadds f12,f10,f0,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f12.f64)));
	// bdnz 0x824523c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824523C8;
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f10,4(r5)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
loc_82452418:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824525d4
	if (ctx.cr6.eq) goto loc_824525D4;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// li r11,12
	ctx.r11.s64 = 12;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82452440:
	// lfsu f8,8(r8)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f8.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// lfsx f7,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fnmsubs f4,f9,f11,f6
	ctx.f4.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f6.f64)));
	// fnmsubs f3,f9,f10,f5
	ctx.f3.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f10.f64, -ctx.f5.f64)));
	// fmadds f11,f4,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f10,f3,f0,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f10.f64)));
	// dcbt r9,r11
	// stfs f11,-4(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// fmadds f13,f11,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// fmadds f12,f10,f0,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f12.f64)));
	// bdnz 0x82452440
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82452440;
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f10,4(r5)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
loc_82452490:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824525d4
	if (ctx.cr6.eq) goto loc_824525D4;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// li r11,12
	ctx.r11.s64 = 12;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_824524B8:
	// lfsu f8,8(r8)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f8.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// lfsx f7,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fnmsubs f4,f9,f11,f6
	ctx.f4.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f6.f64)));
	// fnmsubs f3,f9,f10,f5
	ctx.f3.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f10.f64, -ctx.f5.f64)));
	// fmadds f11,f4,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f10,f3,f0,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f10.f64)));
	// fmadds f13,f11,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f12,f10,f0,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f12.f64)));
	// dcbt r9,r11
	// fadds f2,f13,f4
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f2,-4(r9)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// fadds f1,f12,f3
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// stfs f1,0(r9)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x824524b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824524B8;
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f10,4(r5)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
loc_82452510:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824525d4
	if (ctx.cr6.eq) goto loc_824525D4;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// li r11,12
	ctx.r11.s64 = 12;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82452538:
	// fmuls f9,f8,f13
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfsu f13,8(r8)
	ea = 8 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfsx f6,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f9.f64)));
	// fmadds f12,f6,f0,f7
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f7.f64)));
	// dcbt r9,r11
	// stfs f13,-4(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82452538
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82452538;
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f10,4(r5)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
loc_82452578:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824525d4
	if (ctx.cr6.eq) goto loc_824525D4;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// li r11,12
	ctx.r11.s64 = 12;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_824525A0:
	// fmuls f13,f8,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfsu f9,8(r8)
	ea = 8 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f9.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfsx f7,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f13,f9,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f12,f7,f0,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f12.f64)));
	// dcbt r9,r11
	// fsubs f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// stfs f6,-4(r9)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// fsubs f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// stfs f5,0(r9)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x824525a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824525A0;
loc_824525D4:
	// stfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f10,4(r5)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245FEC0) {
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
	// bl 0x8245fbc0
	ctx.lr = 0x8245FED8;
	sub_8245FBC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245fee8
	if (ctx.cr0.lt) goto loc_8245FEE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fd40
	ctx.lr = 0x8245FEE8;
	sub_8245FD40(ctx, base);
loc_8245FEE8:
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

DEFINE_REX_FUNC(sub_824602B8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82460518) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82460520;
	// stwu r1,-1920(r1)
	ea = -1920 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 88);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r3,88
	r29.s64 = ctx.r3.s64 + 88;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// ble cr6,0x82460548
	if (!ctx.cr6.gt) goto loc_82460548;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,76(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824d445c
	ctx.lr = 0x82460548;
	__imp__KeSetEvent(ctx, base);
loc_82460548:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,80(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x824d4bdc
	ctx.lr = 0x82460594;
	__imp__KeWaitForMultipleObjects(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82460618
	if (!ctx.cr6.eq) goto loc_82460618;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r30,r11,9184
	r30.s64 = ctx.r11.s64 + 9184;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_824605B0:
	// lwz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 60);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r7,r10,-1024
	ctx.r7.s64 = ctx.r10.s64 + -1024;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824605C8:
	// lfsu f0,4(r8)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// stfsu f0,1024(r7)
	ea = 1024 + ctx.r7.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x824605c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824605C8;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x824605b0
	if (!ctx.cr0.eq) goto loc_824605B0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824602d0
	ctx.lr = 0x824605F0;
	sub_824602D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// bl 0x824d4bec
	ctx.lr = 0x824605FC;
	__imp__XAudioSubmitRenderDriverFrame(ctx, base);
loc_824605FC:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r11,0,r29
	ea = r29.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap64(ctx.reserved.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stdcx. r11,0,r29
	ea = r29.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r11.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x824605fc
	if (!ctx.cr0.eq) goto loc_824605FC;
loc_82460618:
	// addi r1,r1,1920
	ctx.r1.s64 = ctx.r1.s64 + 1920;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824655B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r7,60(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bgt cr6,0x824655f4
	if (ctx.cr6.gt) goto loc_824655F4;
	// lwz r9,212(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 212);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824655ec
	if (ctx.cr6.eq) goto loc_824655EC;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// b 0x82465610
	goto loc_82465610;
loc_824655EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82465614
	goto loc_82465614;
loc_824655F4:
	// lwz r9,604(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 604);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8246560c
	if (ctx.cr6.eq) goto loc_8246560C;
	// addi r10,r10,17
	ctx.r10.s64 = ctx.r10.s64 + 17;
	// b 0x82465610
	goto loc_82465610;
loc_8246560C:
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_82465610:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_82465614:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// subf. r6,r7,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// add r11,r6,r3
	ctx.r11.u64 = ctx.r6.u64 + ctx.r3.u64;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8246AFF0) {
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
	// bl 0x822d4e64
	ctx.lr = 0x8246AFF8;
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f29.u64);
	// stfd f30,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f30.u64);
	// stfd f31,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,284(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r19,0
	r19.s64 = 0;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x8246b528
	if (ctx.cr6.lt) goto loc_8246B528;
	// beq cr6,0x8246b050
	if (ctx.cr6.eq) goto loc_8246B050;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// blt cr6,0x8246b048
	if (ctx.cr6.lt) goto loc_8246B048;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f29,-136(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x822d4eb4
	return;
loc_8246B048:
	// li r20,1
	r20.s64 = 1;
	// b 0x8246b054
	goto loc_8246B054;
loc_8246B050:
	// li r20,0
	r20.s64 = 0;
loc_8246B054:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8246b06c
	if (!ctx.cr6.eq) goto loc_8246B06C;
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246b528
	if (ctx.cr6.eq) goto loc_8246B528;
loc_8246B06C:
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8246b080
	if (!ctx.cr6.eq) goto loc_8246B080;
	// lis r22,16
	r22.s64 = 1048576;
	// b 0x8246b090
	goto loc_8246B090;
loc_8246B080:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// rlwinm r10,r5,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FC;
	// addi r9,r11,15504
	ctx.r9.s64 = ctx.r11.s64 + 15504;
	// lwzx r22,r10,r9
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_8246B090:
	// lwz r24,120(r27)
	r24.u64 = REX_LOAD_U32(r27.u32 + 120);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x8246b0c8
	if (!ctx.cr6.gt) goto loc_8246B0C8;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8246B0A8:
	// lwz r9,320(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// lwz r6,392(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 392);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// lwz r4,60(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// stwx r4,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8246b0a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246B0A8;
loc_8246B0C8:
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bge cr6,0x8246b0e0
	if (!ctx.cr6.lt) goto loc_8246B0E0;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x8246b0ec
	goto loc_8246B0EC;
loc_8246B0E0:
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// ble cr6,0x8246b0ec
	if (!ctx.cr6.gt) goto loc_8246B0EC;
	// li r10,16
	ctx.r10.s64 = 16;
loc_8246B0EC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8246b528
	if (ctx.cr6.lt) goto loc_8246B528;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8246B104:
	// divw r8,r11,r10
	ctx.r8.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8246b104
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246B104;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8246b528
	if (!ctx.cr6.gt) goto loc_8246B528;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,127
	ctx.r8.s64 = 8323072;
	// addi r26,r1,148
	r26.s64 = ctx.r1.s64 + 148;
	// lfs f31,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f31.f64 = double(temp.f32);
	// ori r21,r8,65535
	r21.u64 = ctx.r8.u64 | 65535;
	// lfs f30,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
	// lfs f29,-25476(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -25476);
	f29.f64 = double(temp.f32);
loc_8246B144:
	// lwz r29,-4(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + -4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r28,0(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x8246b1bc
	if (!ctx.cr6.gt) goto loc_8246B1BC;
	// lwz r8,392(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 392);
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
loc_8246B164:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bge cr6,0x8246b1a4
	if (!ctx.cr6.lt) goto loc_8246B1A4;
	// subf r11,r29,r28
	ctx.r11.u64 = r28.u64 - r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8246B180:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8246b190
	if (ctx.cr6.gt) goto loc_8246B190;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8246B190:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8246b19c
	if (!ctx.cr6.gt) goto loc_8246B19C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8246B19C:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8246b180
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246B180;
loc_8246B1A4:
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x8246b1b0
	if (!ctx.cr6.gt) goto loc_8246B1B0;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_8246B1B0:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x8246b164
	if (!ctx.cr0.eq) goto loc_8246B164;
loc_8246B1BC:
	// lwz r11,124(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8246b1d0
	if (!ctx.cr6.gt) goto loc_8246B1D0;
	// slw r5,r5,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x8246b1dc
	goto loc_8246B1DC;
loc_8246B1D0:
	// bge cr6,0x8246b1dc
	if (!ctx.cr6.lt) goto loc_8246B1DC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// sraw r5,r5,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r5.s64 = ctx.r5.s32 >> temp.u32;
loc_8246B1DC:
	// cmpw cr6,r5,r21
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r21.s32, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x8246b1ec
	if (ctx.cr6.lt) goto loc_8246B1EC;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_8246B1EC:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246b298
	if (ctx.cr6.eq) goto loc_8246B298;
	// lwz r9,196(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 196);
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// extsw r9,r22
	ctx.r9.s64 = r22.s32;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8246b274
	if (ctx.cr6.eq) goto loc_8246B274;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r6,260(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 260);
	// lwz r10,280(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 280);
	// mulld r3,r7,r9
	ctx.r3.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r9.u64);
	// lwz r8,264(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 264);
	// lwz r4,296(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 296);
	// lwzx r7,r6,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// sradi r3,r3,20
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0xFFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s64 >> 20;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// srawi r11,r10,13
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 13;
	// clrlwi r3,r10,19
	ctx.r3.u64 = ctx.r10.u32 & 0x1FFF;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r11,r7,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// mullw r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// sraw r10,r8,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// mulld r3,r4,r9
	ctx.r3.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r9.u64);
	// sradi r11,r3,20
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s64 >> 20;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// b 0x8246b2a4
	goto loc_8246B2A4;
loc_8246B274:
	// lwz r10,192(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 192);
	// lwz r8,280(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 280);
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// mulld r3,r4,r9
	ctx.r3.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r9.u64);
	// sradi r11,r3,20
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s64 >> 20;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// b 0x8246b2a4
	goto loc_8246B2A4;
loc_8246B298:
	// lis r6,127
	ctx.r6.s64 = 8323072;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// ori r6,r6,65534
	ctx.r6.u64 = ctx.r6.u64 | 65534;
loc_8246B2A4:
	// subf r30,r29,r28
	r30.u64 = r28.u64 - r29.u64;
	// lwz r31,172(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 172);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8246af18
	ctx.lr = 0x8246B2B8;
	sub_8246AF18(ctx, base);
	// srawi. r11,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r11.s64 = r30.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8246b2dc
	if (ctx.cr0.eq) goto loc_8246B2DC;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8246b2dc
	if (!ctx.cr6.gt) goto loc_8246B2DC;
loc_8246B2CC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8246b2cc
	if (ctx.cr6.gt) goto loc_8246B2CC;
loc_8246B2DC:
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r31.s32, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bgt cr6,0x8246b2ec
	if (ctx.cr6.gt) goto loc_8246B2EC;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_8246B2EC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8246b2f8
	if (ctx.cr6.gt) goto loc_8246B2F8;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8246B2F8:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8246b318
	if (!ctx.cr6.gt) goto loc_8246B318;
loc_8246B308:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8246b308
	if (ctx.cr6.gt) goto loc_8246B308;
loc_8246B318:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f12,f29
	ctx.f13.f64 = double(float(ctx.f12.f64 * f29.f64));
	// ble cr6,0x8246b518
	if (!ctx.cr6.gt) goto loc_8246B518;
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
loc_8246B344:
	// lwz r11,392(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 392);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bge cr6,0x8246b50c
	if (!ctx.cr6.lt) goto loc_8246B50C;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x8246b4a8
	if (ctx.cr6.lt) goto loc_8246B4A8;
	// addi r8,r28,-3
	ctx.r8.s64 = r28.s64 + -3;
loc_8246B368:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// std r4,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8246b3a0
	if (!ctx.cr6.lt) goto loc_8246B3A0;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8246b3b0
	goto loc_8246B3B0;
loc_8246B3A0:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8246B3B0:
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8246b3ec
	if (!ctx.cr6.lt) goto loc_8246B3EC;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8246b3fc
	goto loc_8246B3FC;
loc_8246B3EC:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8246B3FC:
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8246b438
	if (!ctx.cr6.lt) goto loc_8246B438;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8246b448
	goto loc_8246B448;
loc_8246B438:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8246B448:
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8246b484
	if (!ctx.cr6.lt) goto loc_8246B484;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8246b494
	goto loc_8246B494;
loc_8246B484:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8246B494:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8246b368
	if (ctx.cr6.lt) goto loc_8246B368;
loc_8246B4A8:
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r28.s32, ctx.xer);
	// bge cr6,0x8246b50c
	if (!ctx.cr6.lt) goto loc_8246B50C;
	// subf r10,r9,r28
	ctx.r10.u64 = r28.u64 - ctx.r9.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8246B4BC:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8246b4f4
	if (!ctx.cr6.lt) goto loc_8246B4F4;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8246b504
	goto loc_8246B504;
loc_8246B4F4:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8246B504:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8246b4bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246B4BC;
loc_8246B50C:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x8246b344
	if (!ctx.cr0.eq) goto loc_8246B344;
loc_8246B518:
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// stw r3,172(r27)
	REX_STORE_U32(r27.u32 + 172, ctx.r3.u32);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bne 0x8246b144
	if (!ctx.cr0.eq) goto loc_8246B144;
loc_8246B528:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_82489D38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82489D40;
	// stwu r1,-1664(r1)
	ea = -1664 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,15984
	r30.s64 = ctx.r3.s64 + 15984;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82487410
	ctx.lr = 0x82489D54;
	sub_82487410(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r28,r31,22432
	r28.s64 = r31.s64 + 22432;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,5108(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 5108);
	// bl 0x8248a7b8
	ctx.lr = 0x82489D68;
	sub_8248A7B8(ctx, base);
	// lhz r10,16036(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 16036);
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
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x82487490
	ctx.lr = 0x82489D8C;
	sub_82487490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82489e4c
	if (!ctx.cr6.eq) goto loc_82489E4C;
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
	// bl 0x824899c0
	ctx.lr = 0x82489DB4;
	sub_824899C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82489e4c
	if (!ctx.cr6.eq) goto loc_82489E4C;
	// lwz r11,3948(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82489e2c
	if (ctx.cr6.eq) goto loc_82489E2C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,272(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 272);
	// bl 0x824b9320
	ctx.lr = 0x82489DD4;
	sub_824B9320(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r9,3784(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,3780(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,3776(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 220);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x824b94d8
	ctx.lr = 0x82489E00;
	sub_824B94D8(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r9,3784(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,3780(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,3776(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 220);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x824b94d8
	ctx.lr = 0x82489E2C;
	sub_824B94D8(ctx, base);
loc_82489E2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,15600(r31)
	REX_STORE_U32(r31.u32 + 15600, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,15592(r31)
	REX_STORE_U32(r31.u32 + 15592, ctx.r11.u32);
	// stw r11,15628(r31)
	REX_STORE_U32(r31.u32 + 15628, ctx.r11.u32);
	// bl 0x8248ab00
	ctx.lr = 0x82489E48;
	sub_8248AB00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82489E4C:
	// addi r1,r1,1664
	ctx.r1.s64 = ctx.r1.s64 + 1664;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82493930) {
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
	// bl 0x822d4e68
	ctx.lr = 0x82493938;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82493984
	if (ctx.cr6.eq) goto loc_82493984;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stb r11,5(r4)
	REX_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82491828
	ctx.lr = 0x82493978;
	sub_82491828(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
loc_82493984:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r20,3
	r20.s64 = 3;
	// ori r21,r11,32768
	r21.u64 = ctx.r11.u64 | 32768;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82493af8
	if (ctx.cr6.eq) goto loc_82493AF8;
	// lwz r11,1240(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1240);
	// lwz r31,0(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824939b4
	if (!ctx.cr6.eq) goto loc_824939B4;
	// li r30,0
	r30.s64 = 0;
	// stw r20,20(r31)
	REX_STORE_U32(r31.u32 + 20, r20.u32);
	// b 0x82493ad8
	goto loc_82493AD8;
loc_824939B4:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + r29.u32);
	// extsh r30,r5
	r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82493aa0
	if (ctx.cr6.lt) goto loc_82493AA0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x82493a98
	if (!ctx.cr6.lt) goto loc_82493A98;
loc_82493A00:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82493a2c
	if (ctx.cr6.lt) goto loc_82493A2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x82493A1C;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82493a00
	if (ctx.cr6.eq) goto loc_82493A00;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82493ad8
	goto loc_82493AD8;
loc_82493A2C:
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
loc_82493A98:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82493ad8
	goto loc_82493AD8;
loc_82493AA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x82493AA8;
	sub_82337F50(ctx, base);
loc_82493AA8:
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
	// bl 0x82337f50
	ctx.lr = 0x82493AC0;
	sub_82337F50(ctx, base);
	// add r10,r30,r21
	ctx.r10.u64 = r30.u64 + r21.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82493aa8
	if (ctx.cr6.lt) goto loc_82493AA8;
loc_82493AD8:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82493afc
	if (ctx.cr6.eq) goto loc_82493AFC;
loc_82493AEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
loc_82493AF8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82493AFC:
	// lwz r9,1264(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 1264);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r8,0(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// rlwinm r11,r8,24,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x7;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lbzx r22,r9,r10
	r22.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r22,5(r23)
	REX_STORE_U8(r23.u32 + 5, r22.u8);
	// bne cr6,0x82493b38
	if (!ctx.cr6.eq) goto loc_82493B38;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// bl 0x82491828
	ctx.lr = 0x82493B34;
	sub_82491828(ctx, base);
	// b 0x82493b60
	goto loc_82493B60;
loc_82493B38:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// bne cr6,0x82493b4c
	if (!ctx.cr6.eq) goto loc_82493B4C;
	// bl 0x82491c10
	ctx.lr = 0x82493B48;
	sub_82491C10(ctx, base);
	// b 0x82493b60
	goto loc_82493B60;
loc_82493B4C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82493b5c
	if (!ctx.cr6.eq) goto loc_82493B5C;
	// bl 0x82492688
	ctx.lr = 0x82493B58;
	sub_82492688(ctx, base);
	// b 0x82493b60
	goto loc_82493B60;
loc_82493B5C:
	// bl 0x82492d88
	ctx.lr = 0x82493B60;
	sub_82492D88(ctx, base);
loc_82493B60:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82494000
	if (!ctx.cr6.eq) goto loc_82494000;
	// lbz r11,27(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 27);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82493e40
	if (ctx.cr6.eq) goto loc_82493E40;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x82493e40
	if (ctx.cr6.eq) goto loc_82493E40;
	// lbz r11,1245(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 1245);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82493bd0
	if (ctx.cr6.eq) goto loc_82493BD0;
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// rlwinm r9,r10,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// clrlwi r7,r8,28
	ctx.r7.u64 = ctx.r8.u32 & 0xF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82493bb4
	if (ctx.cr6.eq) goto loc_82493BB4;
	// lbz r11,1246(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 1246);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// stb r10,4(r23)
	REX_STORE_U8(r23.u32 + 4, ctx.r10.u8);
	// b 0x82493e2c
	goto loc_82493E2C;
loc_82493BB4:
	// lbz r10,1244(r24)
	ctx.r10.u64 = REX_LOAD_U8(r24.u32 + 1244);
	// lbz r11,1249(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 1249);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// stb r9,4(r23)
	REX_STORE_U8(r23.u32 + 4, ctx.r9.u8);
	// b 0x82493e2c
	goto loc_82493E2C;
loc_82493BD0:
	// lwz r31,0(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// lbz r11,1250(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 1250);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x82493cc0
	if (ctx.cr6.eq) goto loc_82493CC0;
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82493c50
	if (!ctx.cr6.lt) goto loc_82493C50;
loc_82493BF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82493c50
	if (ctx.cr6.eq) goto loc_82493C50;
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
	// bge 0x82493c40
	if (!ctx.cr0.lt) goto loc_82493C40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82493C40;
	sub_823380C8(ctx, base);
loc_82493C40:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82493bf8
	if (ctx.cr6.gt) goto loc_82493BF8;
loc_82493C50:
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
	// bge 0x82493c88
	if (!ctx.cr0.lt) goto loc_82493C88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82493C88;
	sub_823380C8(ctx, base);
loc_82493C88:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82493ca4
	if (ctx.cr6.eq) goto loc_82493CA4;
	// lbz r11,1246(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 1246);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,4(r23)
	REX_STORE_U8(r23.u32 + 4, ctx.r11.u8);
	// b 0x82493e2c
	goto loc_82493E2C;
loc_82493CA4:
	// lbz r11,1244(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 1244);
	// lbz r10,1249(r24)
	ctx.r10.u64 = REX_LOAD_U8(r24.u32 + 1249);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,4(r23)
	REX_STORE_U8(r23.u32 + 4, ctx.r11.u8);
	// b 0x82493e2c
	goto loc_82493E2C;
loc_82493CC0:
	// mr r30,r20
	r30.u64 = r20.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82493d24
	if (!ctx.cr6.lt) goto loc_82493D24;
loc_82493CCC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82493d24
	if (ctx.cr6.eq) goto loc_82493D24;
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
	// bge 0x82493d14
	if (!ctx.cr0.lt) goto loc_82493D14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82493D14;
	sub_823380C8(ctx, base);
loc_82493D14:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82493ccc
	if (ctx.cr6.gt) goto loc_82493CCC;
loc_82493D24:
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
	// bge 0x82493d5c
	if (!ctx.cr0.lt) goto loc_82493D5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82493D5C;
	sub_823380C8(ctx, base);
loc_82493D5C:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(r30.s32, 7, ctx.xer);
	// bne cr6,0x82493e18
	if (!ctx.cr6.eq) goto loc_82493E18;
	// lwz r31,0(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 0);
	// li r30,5
	r30.s64 = 5;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x82493dd8
	if (!ctx.cr6.lt) goto loc_82493DD8;
loc_82493D80:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82493dd8
	if (ctx.cr6.eq) goto loc_82493DD8;
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
	// bge 0x82493dc8
	if (!ctx.cr0.lt) goto loc_82493DC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82493DC8;
	sub_823380C8(ctx, base);
loc_82493DC8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82493d80
	if (ctx.cr6.gt) goto loc_82493D80;
loc_82493DD8:
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
	// bge 0x82493e10
	if (!ctx.cr0.lt) goto loc_82493E10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82493E10;
	sub_823380C8(ctx, base);
loc_82493E10:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// b 0x82493e20
	goto loc_82493E20;
loc_82493E18:
	// lbz r11,1244(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 1244);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
loc_82493E20:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,4(r23)
	REX_STORE_U8(r23.u32 + 4, ctx.r11.u8);
loc_82493E2C:
	// lbz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82493aec
	if (ctx.cr6.lt) goto loc_82493AEC;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bgt cr6,0x82493aec
	if (ctx.cr6.gt) goto loc_82493AEC;
loc_82493E40:
	// lbz r11,29(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 29);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82493ffc
	if (ctx.cr6.eq) goto loc_82493FFC;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x82493ffc
	if (ctx.cr6.eq) goto loc_82493FFC;
	// lwz r11,360(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 360);
	// lwz r31,0(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82493e70
	if (!ctx.cr6.eq) goto loc_82493E70;
	// li r30,0
	r30.s64 = 0;
	// stw r20,20(r31)
	REX_STORE_U32(r31.u32 + 20, r20.u32);
	// b 0x82493f94
	goto loc_82493F94;
loc_82493E70:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + r29.u32);
	// extsh r30,r5
	r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82493f5c
	if (ctx.cr6.lt) goto loc_82493F5C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x82493f54
	if (!ctx.cr6.lt) goto loc_82493F54;
loc_82493EBC:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82493ee8
	if (ctx.cr6.lt) goto loc_82493EE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x82493ED8;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82493ebc
	if (ctx.cr6.eq) goto loc_82493EBC;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82493f94
	goto loc_82493F94;
loc_82493EE8:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// neg r4,r10
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r5.u64);
loc_82493F54:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82493f94
	goto loc_82493F94;
loc_82493F5C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x82493F64;
	sub_82337F50(ctx, base);
loc_82493F64:
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
	// bl 0x82337f50
	ctx.lr = 0x82493F7C;
	sub_82337F50(ctx, base);
	// add r10,r30,r21
	ctx.r10.u64 = r30.u64 + r21.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82493f64
	if (ctx.cr6.lt) goto loc_82493F64;
loc_82493F94:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82493aec
	if (!ctx.cr6.eq) goto loc_82493AEC;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// subfc r8,r11,r30
	ctx.xer.ca = r30.u32 >= ctx.r11.u32;
	ctx.r8.u64 = r30.u64 - ctx.r11.u64;
	// eqv r7,r11,r30
	ctx.r7.u64 = ~(ctx.r11.u64 ^ r30.u64);
	// addi r11,r9,-23128
	ctx.r11.s64 = ctx.r9.s64 + -23128;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// addi r3,r11,-88
	ctx.r3.s64 = ctx.r11.s64 + -88;
	// clrlwi r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	// rlwimi r10,r9,28,3,3
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x10000000) | (ctx.r10.u64 & 0xFFFFFFFFEFFFFFFF);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r10,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r10.u32);
	// lwzx r7,r5,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// rlwimi r8,r7,24,5,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0x7000000) | (ctx.r8.u64 & 0xFFFFFFFFF8FFFFFF);
	// stw r8,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r8.u32);
	// lwzx r6,r5,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwimi r5,r6,20,10,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0x300000) | (ctx.r5.u64 & 0xFFFFFFFFFFCFFFFF);
	// rlwinm r4,r5,0,5,3
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r4,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r4.u32);
loc_82493FFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82494000:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_824B0010) {
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
	ctx.lr = 0x824B0018;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r3,r4
	r31.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vsrah v11,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// add r30,r10,r4
	r30.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,-96
	r29.s64 = ctx.r1.s64 + -96;
	// lvx128 v60,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,-80
	r28.s64 = ctx.r1.s64 + -80;
	// lvx128 v59,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// lvsl v6,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r5,r6
	r31.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v58,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v63,v59,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v57,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v61,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v56,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v2,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v1,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v9,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v31,v58,v57,v2
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v54,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v55,v56,v1
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// rlwinm r30,r6,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v29,v62,v54,v7
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v28,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r10,r30,r5
	ctx.r10.u64 = r30.u64 + ctx.r5.u64;
	// vmrghb v8,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vaddshs v25,v28,v10
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vmrghb v26,v0,v29
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v24,v27,v9
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v23,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v21,v25,v26
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vaddshs v20,v24,v10
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v19,v23,v8
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v18,v22,v7
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v17,v21,v11
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v16,v20,v11
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v15,v19,v9
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v14,v18,v8
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsrah v10,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v9,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v8,v15,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v6,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vpkshus128 v53,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsrah v5,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v4,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v52,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v53,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r29,-88(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -88);
	// lwz r27,-96(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// stw r27,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r27.u32);
	// stvx128 v52,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r28,-72(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r27,-80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// stwx r29,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, r29.u32);
	// stwx r27,r30,r5
	REX_STORE_U32(r30.u32 + ctx.r5.u32, r27.u32);
	// stwx r28,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, r28.u32);
	// bne cr6,0x824b0168
	if (!ctx.cr6.eq) goto loc_824B0168;
	// lwz r29,-92(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// lwz r28,-84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// lwz r27,-76(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r26,-68(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// stw r29,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, r29.u32);
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r27.u32);
	// stw r26,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, r26.u32);
loc_824B0168:
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x824b0288
	if (!ctx.cr6.eq) goto loc_824B0288;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v51,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r7,r4,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r31,r9,r4
	r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v50,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,-80
	ctx.r3.s64 = ctx.r1.s64 + -80;
	// lvx128 v49,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,-80
	r29.s64 = ctx.r1.s64 + -80;
	// lvx128 v48,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v47,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v51,v50,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v46,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v49,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v2,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v45,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v44,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v46,v47,v2
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvsl v1,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v30,v44,v45,v1
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v8,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v28,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v0,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v25,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v28,v10
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v27,v29,v9
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v24,v0,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v21,v25,v8
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v22,v26,v7
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v23,v27,v10
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v20,v24,v0
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v17,v21,v9
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v18,v22,v11
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v19,v23,v11
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v16,v20,v8
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v0,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v14,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v12,v16,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v11,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v43,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vsrah v10,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v42,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v43,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,-76(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r3,-80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r7,-72(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r4,-68(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// stwux r3,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r5.u32 = ea;
	// stvx128 v42,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,-76(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r31,-72(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r30,-68(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// stw r8,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// lwz r8,-80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// stwx r7,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u32);
	// stw r4,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// stwux r8,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stwx r31,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, r31.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
loc_824B0288:
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_824BCA68) {
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
	ctx.lr = 0x824BCA70;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,3776(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r10,220(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// stw r8,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// lwz r6,3780(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3780);
	// lwz r5,3784(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3784);
	// lwz r10,3792(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3792);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r9,3796(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3796);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r29,3788(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 3788);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,272(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// add r31,r9,r11
	r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r30,3812(r22)
	r30.u64 = REX_LOAD_U32(r22.u32 + 3812);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824bcad8
	if (ctx.cr6.eq) goto loc_824BCAD8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824bcad8
	if (ctx.cr6.eq) goto loc_824BCAD8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824bcae4
	if (!ctx.cr6.eq) goto loc_824BCAE4;
loc_824BCAD8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
loc_824BCAE4:
	// lhz r11,50(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 50);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lhz r10,74(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 74);
	// cmplw cr6,r7,r26
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r26.u32, ctx.xer);
	// rlwinm r15,r11,31,1,31
	r15.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r9,76(r27)
	ctx.r9.u64 = REX_LOAD_U16(r27.u32 + 76);
	// rotlwi r29,r10,4
	r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// mullw r11,r15,r7
	ctx.r11.s64 = int64_t(r15.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r9,r9,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r25,r11,r10
	r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r11,r9,r7
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mullw r10,r29,r7
	ctx.r10.s64 = int64_t(r29.s32) * int64_t(ctx.r7.s32);
	// rlwinm r9,r25,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r20,r10,r8
	r20.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r14,r9,r3
	r14.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r21,r11,r6
	r21.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r19,r11,r5
	r19.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r18,r10,r30
	r18.u64 = ctx.r10.u64 + r30.u64;
	// add r17,r11,r4
	r17.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r16,r11,r31
	r16.u64 = ctx.r11.u64 + r31.u64;
	// bge cr6,0x824bcc24
	if (!ctx.cr6.lt) goto loc_824BCC24;
loc_824BCB3C:
	// mr r30,r20
	r30.u64 = r20.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x824bcbf8
	if (ctx.cr6.eq) goto loc_824BCBF8;
	// mr r31,r21
	r31.u64 = r21.u64;
	// subf r26,r21,r19
	r26.u64 = r19.u64 - r21.u64;
	// subf r25,r21,r16
	r25.u64 = r16.u64 - r21.u64;
	// subf r24,r21,r17
	r24.u64 = r17.u64 - r21.u64;
	// subf r23,r20,r18
	r23.u64 = r18.u64 - r20.u64;
loc_824BCB60:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// rlwinm r11,r11,24,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x824bcbdc
	if (ctx.cr6.eq) goto loc_824BCBDC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// add r8,r25,r31
	ctx.r8.u64 = r25.u64 + r31.u64;
	// add r7,r24,r31
	ctx.r7.u64 = r24.u64 + r31.u64;
	// add r6,r23,r30
	ctx.r6.u64 = r23.u64 + r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// blt cr6,0x824bcbd0
	if (ctx.cr6.lt) goto loc_824BCBD0;
	// beq cr6,0x824bcbc0
	if (ctx.cr6.eq) goto loc_824BCBC0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// add r11,r26,r31
	ctx.r11.u64 = r26.u64 + r31.u64;
	// blt cr6,0x824bcbb4
	if (ctx.cr6.lt) goto loc_824BCBB4;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x824bba50
	ctx.lr = 0x824BCBB0;
	sub_824BBA50(ctx, base);
	// b 0x824bcbdc
	goto loc_824BCBDC;
loc_824BCBB4:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x824ba228
	ctx.lr = 0x824BCBBC;
	sub_824BA228(ctx, base);
	// b 0x824bcbdc
	goto loc_824BCBDC;
loc_824BCBC0:
	// add r11,r26,r31
	ctx.r11.u64 = r26.u64 + r31.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x824baa60
	ctx.lr = 0x824BCBCC;
	sub_824BAA60(ctx, base);
	// b 0x824bcbdc
	goto loc_824BCBDC;
loc_824BCBD0:
	// add r11,r26,r31
	ctx.r11.u64 = r26.u64 + r31.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x824b9d88
	ctx.lr = 0x824BCBDC;
	sub_824B9D88(ctx, base);
loc_824BCBDC:
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
	// blt cr6,0x824bcb60
	if (ctx.cr6.lt) goto loc_824BCB60;
	// lwz r26,300(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
loc_824BCBF8:
	// lwz r11,232(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 232);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,228(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 228);
	// add r21,r11,r21
	r21.u64 = ctx.r11.u64 + r21.u64;
	// add r20,r10,r20
	r20.u64 = ctx.r10.u64 + r20.u64;
	// add r19,r11,r19
	r19.u64 = ctx.r11.u64 + r19.u64;
	// add r18,r10,r18
	r18.u64 = ctx.r10.u64 + r18.u64;
	// add r17,r11,r17
	r17.u64 = ctx.r11.u64 + r17.u64;
	// add r16,r11,r16
	r16.u64 = ctx.r11.u64 + r16.u64;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(r28.u32, r26.u32, ctx.xer);
	// blt cr6,0x824bcb3c
	if (ctx.cr6.lt) goto loc_824BCB3C;
loc_824BCC24:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_824D20D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r10,r10,-21464
	ctx.r10.s64 = ctx.r10.s64 + -21464;
	// lwz r11,-26800(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -26800);
	// stw r11,172(r10)
	REX_STORE_U32(ctx.r10.u32 + 172, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D23A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,20232
	ctx.r11.s64 = ctx.r11.s64 + 20232;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-29256
	ctx.r10.s64 = ctx.r10.s64 + -29256;
loc_824D23C4:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stwu r8,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824d23c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D23C4;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,14280
	ctx.r3.s64 = ctx.r11.s64 + 14280;
	// b 0x822d5848
	sub_822D5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D2A40) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// addi r6,r11,-3864
	ctx.r6.s64 = ctx.r11.s64 + -3864;
	// lis r4,-32173
	ctx.r4.s64 = -2108489728;
	// lwz r5,-3864(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -3864);
	// addi r3,r4,-432
	ctx.r3.s64 = ctx.r4.s64 + -432;
	// lwz r11,26112(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 26112);
	// lwz r10,-12(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + -12);
	// lwz r9,-16(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + -16);
	// lwz r8,-20(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + -20);
	// lwz r7,-8(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + -8);
	// lwz r6,-4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + -4);
	// stw r11,-432(r4)
	REX_STORE_U32(ctx.r4.u32 + -432, ctx.r11.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r9,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r8,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r7,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r6,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r6.u32);
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r5,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D32B8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,16016
	ctx.r3.s64 = ctx.r11.s64 + 16016;
	// b 0x822d5848
	sub_822D5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D33C8) {
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
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r5,502
	ctx.r5.s64 = 502;
	// addi r31,r11,22376
	r31.s64 = ctx.r11.s64 + 22376;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,26
	ctx.r3.s64 = r31.s64 + 26;
	// bl 0x822d5870
	ctx.lr = 0x824D33F0;
	sub_822D5870(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,528
	ctx.r3.s64 = r31.s64 + 528;
	// addi r4,r11,-6448
	ctx.r4.s64 = ctx.r11.s64 + -6448;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x822d4fa0
	ctx.lr = 0x824D3404;
	sub_822D4FA0(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = r31.s64 + 600;
	// bl 0x822d5870
	ctx.lr = 0x824D3414;
	sub_822D5870(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1040(r31)
	REX_STORE_U32(r31.u32 + 1040, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,1048(r31)
	REX_STORE_U32(r31.u32 + 1048, ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,1044(r31)
	REX_STORE_U32(r31.u32 + 1044, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_824D3C68) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,26468
	ctx.r3.s64 = ctx.r11.s64 + 26468;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3DC0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,29636
	ctx.r3.s64 = ctx.r11.s64 + 29636;
	// b 0x8227ac70
	sub_8227AC70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3F20) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000282
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4070) {
	REX_FUNC_PROLOGUE();
	// .long 0x20004b7
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D41D0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010140
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4350) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010081
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D44D0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100be
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4650) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101d5
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D47D0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000001
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4950) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010350
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4AD0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100f6
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

