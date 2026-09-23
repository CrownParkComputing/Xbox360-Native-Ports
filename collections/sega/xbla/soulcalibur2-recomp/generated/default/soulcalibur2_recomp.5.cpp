#include "soulcalibur2_funcs.5.h"

DEFINE_REX_FUNC(sub_820E0130) {
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
	// bl 0x822d48b8
	ctx.lr = 0x820E0140;
	sub_822D48B8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1988(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1988);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E6878) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x820e6890
	if (ctx.cr6.lt) goto loc_820E6890;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bgt cr6,0x820e6890
	if (ctx.cr6.gt) goto loc_820E6890;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820e689c
	goto loc_820E689C;
loc_820E6890:
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// bne cr6,0x820e689c
	if (!ctx.cr6.eq) goto loc_820E689C;
	// li r3,11
	ctx.r3.s64 = 11;
loc_820E689C:
	// mulli r11,r3,9
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(9));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-696
	ctx.r10.s64 = ctx.r10.s64 + -696;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E76B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x820E76B8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r5,r10,-14576
	ctx.r5.s64 = ctx.r10.s64 + -14576;
	// lwz r11,-32032(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32032);
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8228a9a0
	ctx.lr = 0x820E76DC;
	sub_8228A9A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x820e76ec
	if (!ctx.cr0.lt) goto loc_820E76EC;
loc_820E76E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820e77a4
	goto loc_820E77A4;
loc_820E76EC:
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// bl 0x82288b38
	ctx.lr = 0x820E76F4;
	sub_82288B38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x820e76e4
	if (ctx.cr0.lt) goto loc_820E76E4;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// li r31,0
	r31.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// std r31,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r31.u64);
	// stw r31,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r31.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82254f68
	ctx.lr = 0x820E772C;
	sub_82254F68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x820e76e4
	if (ctx.cr0.lt) goto loc_820E76E4;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r30,r11,16116
	r30.s64 = ctx.r11.s64 + 16116;
	// addi r11,r9,16048
	ctx.r11.s64 = ctx.r9.s64 + 16048;
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r31.u32);
	// stw r31,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r31.u32);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x822559b0
	ctx.lr = 0x820E776C;
	sub_822559B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x820e76e4
	if (ctx.cr0.lt) goto loc_820E76E4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r7,r29,8
	ctx.r7.s64 = r29.s64 + 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,16028(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16028);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822830c0
	ctx.lr = 0x820E7790;
	sub_822830C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x820e76e4
	if (ctx.cr0.lt) goto loc_820E76E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,12(r29)
	REX_STORE_U8(r29.u32 + 12, ctx.r11.u8);
loc_820E77A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_820EEEB8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// stw r4,6256(r3)
	REX_STORE_U32(ctx.r3.u32 + 6256, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,32336
	ctx.r11.s64 = ctx.r11.s64 + 32336;
	// lwz r11,4892(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4892);
	// stw r10,156(r11)
	REX_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EFAD8) {
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
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r30,r11,32336
	r30.s64 = ctx.r11.s64 + 32336;
	// lwz r31,4872(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4872);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820ea9c0
	ctx.lr = 0x820EFB00;
	sub_820EA9C0(ctx, base);
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r8,r31,60
	ctx.r8.s64 = r31.s64 + 60;
	// stw r11,-28252(r9)
	REX_STORE_U32(ctx.r9.u32 + -28252, ctx.r11.u32);
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// addi r9,r11,10484
	ctx.r9.s64 = ctx.r11.s64 + 10484;
	// lwz r9,10484(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 10484);
	// stw r9,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// lwz r9,10488(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 10488);
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// lwz r9,10492(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 10492);
	// stw r9,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r9.u32);
	// lwz r9,10496(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 10496);
	// stw r9,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r9.u32);
	// lfs f0,10312(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10312);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lwz r11,4892(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4892);
	// stw r10,152(r11)
	REX_STORE_U32(ctx.r11.u32 + 152, ctx.r10.u32);
	// lwz r11,4892(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4892);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_820F2890) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,18116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 18116);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x820f28a8
	if (ctx.cr6.gt) goto loc_820F28A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820f28e0
	goto loc_820F28E0;
loc_820F28A8:
	// lfs f0,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f1
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f2,132(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r9,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r9.u32);
	// lfs f0,17064(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 17064);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 88, temp.u32);
loc_820F28E0:
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F4AF8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r11,10532
	ctx.r9.s64 = ctx.r11.s64 + 10532;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,8420(r31)
	REX_STORE_U32(r31.u32 + 8420, r30.u32);
	// lwz r9,10532(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 10532);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,10536(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 10536);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,10540(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 10540);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r11,10544(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 10544);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x8211ac68
	ctx.lr = 0x820F4B4C;
	sub_8211AC68(ctx, base);
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820f4b70
	if (!ctx.cr6.gt) goto loc_820F4B70;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8424(r31)
	REX_STORE_U32(r31.u32 + 8424, ctx.r11.u32);
	// b 0x820f4b78
	goto loc_820F4B78;
loc_820F4B70:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,8424(r31)
	REX_STORE_U32(r31.u32 + 8424, r30.u32);
loc_820F4B78:
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

DEFINE_REX_FUNC(sub_820F9A10) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lhz r11,2076(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2076);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820f9a48
	if (!ctx.cr6.gt) goto loc_820F9A48;
	// addi r11,r3,1038
	ctx.r11.s64 = ctx.r3.s64 + 1038;
loc_820F9A30:
	// lhz r9,-990(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -990);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// lhz r9,2076(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 2076);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820f9a30
	if (ctx.cr6.lt) goto loc_820F9A30;
loc_820F9A48:
	// lhz r11,2076(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2076);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f9ac8
	if (ctx.cr0.eq) goto loc_820F9AC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 + 48;
	// lfs f0,2388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2388);
	ctx.f0.f64 = double(temp.f32);
loc_820F9A64:
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mulli r9,r9,48
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(48));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 40);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// ble cr6,0x820f9ab4
	if (!ctx.cr6.gt) goto loc_820F9AB4;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r9,r10,24
	ctx.r9.s64 = ctx.r10.s64 + 24;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// sthx r11,r9,r3
	REX_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u16);
loc_820F9AB4:
	// lhz r11,2076(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2076);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f9a64
	if (ctx.cr6.lt) goto loc_820F9A64;
loc_820F9AC8:
	// sth r6,2076(r3)
	REX_STORE_U16(ctx.r3.u32 + 2076, ctx.r6.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FCEC0) {
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
	// blt cr6,0x820fcf58
	if (ctx.cr6.lt) goto loc_820FCF58;
	// beq cr6,0x820fcf24
	if (ctx.cr6.eq) goto loc_820FCF24;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x820fcfac
	if (!ctx.cr6.lt) goto loc_820FCFAC;
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FCF04;
	sub_820F8D58(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x820f8db8
	ctx.lr = 0x820FCF14;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fcfac
	if (!ctx.cr0.eq) goto loc_820FCFAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820fcfa8
	goto loc_820FCFA8;
loc_820FCF24:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FCF38;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x820fcf8c
	if (ctx.cr0.eq) goto loc_820FCF8C;
	// bl 0x820f8d58
	ctx.lr = 0x820FCF50;
	sub_820F8D58(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x820fcfa8
	goto loc_820FCFA8;
loc_820FCF58:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FCF6C;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fcf94
	if (!ctx.cr0.eq) goto loc_820FCF94;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,586(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 586);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820fcf94
	if (ctx.cr0.eq) goto loc_820FCF94;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_820FCF8C:
	// bl 0x820f8d58
	ctx.lr = 0x820FCF90;
	sub_820F8D58(ctx, base);
	// b 0x820fcfac
	goto loc_820FCFAC;
loc_820FCF94:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FCFA4;
	sub_820F8D58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FCFA8:
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_820FCFAC:
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

DEFINE_REX_FUNC(sub_821003B0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r11,r11,22576
	ctx.r11.s64 = ctx.r11.s64 + 22576;
	// lwz r3,168(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82100994) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82100998) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r9,r11,22576
	ctx.r9.s64 = ctx.r11.s64 + 22576;
	// lwz r10,22576(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22576);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821019C8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e78
	ctx.lr = 0x821019D0;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f34
	ctx.lr = 0x821019D8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r7,120(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,116(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82101c00
	if (!ctx.cr6.gt) goto loc_82101C00;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lfs f28,16788(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16788);
	f28.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,2392(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2392);
	f31.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfd f27,26672(r6)
	f27.u64 = REX_LOAD_U64(ctx.r6.u32 + 26672);
	// lfd f29,26664(r5)
	f29.u64 = REX_LOAD_U64(ctx.r5.u32 + 26664);
	// li r29,0
	r29.s64 = 0;
	// addi r28,r11,432
	r28.s64 = ctx.r11.s64 + 432;
	// addi r27,r10,26656
	r27.s64 = ctx.r10.s64 + 26656;
	// addi r24,r9,26648
	r24.s64 = ctx.r9.s64 + 26648;
	// addi r26,r8,26640
	r26.s64 = ctx.r8.s64 + 26640;
loc_82101A4C:
	// lwz r11,136(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 136);
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82101a7c
	if (ctx.cr0.eq) goto loc_82101A7C;
	// stfd f29,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f29.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f29,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f29.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x821eacb0
	ctx.lr = 0x82101A78;
	sub_821EACB0(ctx, base);
	// b 0x82101ac8
	goto loc_82101AC8;
loc_82101A7C:
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82101aa8
	if (ctx.cr0.eq) goto loc_82101AA8;
	// stfd f29,24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 24, f29.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f29,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f29.u64);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x82101AA4;
	sub_821EACB0(ctx, base);
	// b 0x82101ac8
	goto loc_82101AC8;
loc_82101AA8:
	// stfd f27,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f27.u64);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stfd f27,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f27.u64);
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82101AC8;
	sub_821EACB0(ctx, base);
loc_82101AC8:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82101aec
	if (!ctx.cr0.eq) goto loc_82101AEC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82101af8
	goto loc_82101AF8;
loc_82101AEC:
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82101AF4;
	sub_820E68B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82101AF8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x82101c50
	if (ctx.cr6.eq) goto loc_82101C50;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// beq cr6,0x82101c30
	if (ctx.cr6.eq) goto loc_82101C30;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// beq cr6,0x82101b68
	if (ctx.cr6.eq) goto loc_82101B68;
	// cmplwi cr6,r30,12
	ctx.cr6.compare<uint32_t>(r30.u32, 12, ctx.xer);
	// bne cr6,0x82101bd8
	if (!ctx.cr6.eq) goto loc_82101BD8;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,80(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82101b44
	if (!ctx.cr6.eq) goto loc_82101B44;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82101b58
	if (!ctx.cr6.eq) goto loc_82101B58;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82101b50
	goto loc_82101B50;
loc_82101B44:
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82101B4C;
	sub_820E68B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82101B50:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82101bd8
	if (ctx.cr6.eq) goto loc_82101BD8;
loc_82101B58:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100038
	ctx.lr = 0x82101B60;
	sub_82100038(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x82101c78
	goto loc_82101C78;
loc_82101B68:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bne cr6,0x82101b9c
	if (!ctx.cr6.eq) goto loc_82101B9C;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82101bcc
	if (ctx.cr0.eq) goto loc_82101BCC;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82101B94;
	sub_820E68B8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82101bcc
	if (ctx.cr0.eq) goto loc_82101BCC;
loc_82101B9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100038
	ctx.lr = 0x82101BA4;
	sub_82100038(ctx, base);
	// lfs f0,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82101bc8
	if (!ctx.cr6.lt) goto loc_82101BC8;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x82101BC4;
	sub_821EB1A0(ctx, base);
	// b 0x82101bcc
	goto loc_82101BCC;
loc_82101BC8:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82101BCC:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
loc_82101BD4:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82101BD8:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// blt cr6,0x82101be8
	if (ctx.cr6.lt) goto loc_82101BE8;
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
loc_82101BE8:
	// lwz r7,120(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 120);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// lwz r11,116(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 116);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82101a4c
	if (ctx.cr6.lt) goto loc_82101A4C;
loc_82101C00:
	// lwz r11,136(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 136);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82101c14
	if (ctx.cr0.eq) goto loc_82101C14;
	// lfs f0,176(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fadds f30,f0,f30
	f30.f64 = double(float(ctx.f0.f64 + f30.f64));
loc_82101C14:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-8492(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8492);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 + ctx.f0.f64));
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f80
	ctx.lr = 0x82101C2C;
	// b 0x822d4ec8
	return;
loc_82101C30:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82100038
	ctx.lr = 0x82101C48;
	sub_82100038(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82101c6c
	goto loc_82101C6C;
loc_82101C50:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82100038
	ctx.lr = 0x82101C68;
	sub_82100038(ctx, base);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_82101C6C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bge cr6,0x82101bd4
	if (!ctx.cr6.lt) goto loc_82101BD4;
loc_82101C78:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x82101C88;
	sub_821EB1A0(ctx, base);
	// b 0x82101bd8
	goto loc_82101BD8;
}

DEFINE_REX_FUNC(sub_821131F8) {
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
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1840(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1840);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,30140(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 30140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8211328c
	if (!ctx.cr6.eq) goto loc_8211328C;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lwz r6,160(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,31432
	ctx.r11.s64 = ctx.r11.s64 + 31432;
	// addi r7,r3,188
	ctx.r7.s64 = ctx.r3.s64 + 188;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r5,201
	ctx.r5.s64 = 201;
	// lwz r3,152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821f7970
	ctx.lr = 0x82113288;
	sub_821F7970(ctx, base);
	// b 0x821132e8
	goto loc_821132E8;
loc_8211328C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,30136(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 30136);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821132fc
	if (!ctx.cr6.eq) goto loc_821132FC;
	// li r30,0
	r30.s64 = 0;
	// lwz r6,164(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,31432
	ctx.r11.s64 = ctx.r11.s64 + 31432;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r31,192
	ctx.r7.s64 = r31.s64 + 192;
	// li r5,202
	ctx.r5.s64 = 202;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// bl 0x821f7970
	ctx.lr = 0x821132E8;
	sub_821F7970(ctx, base);
loc_821132E8:
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,182(r31)
	REX_STORE_U16(r31.u32 + 182, ctx.r10.u16);
	// stb r30,23956(r11)
	REX_STORE_U8(ctx.r11.u32 + 23956, r30.u8);
	// b 0x82113334
	goto loc_82113334;
loc_821132FC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,30132(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 30132);
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
	// bne cr6,0x82113334
	if (!ctx.cr6.eq) goto loc_82113334;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,12
	ctx.r9.s64 = 12;
	// stb r11,23957(r10)
	REX_STORE_U8(ctx.r10.u32 + 23957, ctx.r11.u8);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// stb r9,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r9.u8);
loc_82113334:
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

DEFINE_REX_FUNC(sub_82117AD0) {
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
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r4,0
	ctx.r4.s64 = 0;
	// addi r6,r8,31964
	ctx.r6.s64 = ctx.r8.s64 + 31964;
	// addi r9,r11,-22768
	ctx.r9.s64 = ctx.r11.s64 + -22768;
	// addi r8,r10,19952
	ctx.r8.s64 = ctx.r10.s64 + 19952;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,32896
	ctx.r4.u64 = ctx.r4.u64 | 32896;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821f7d50
	ctx.lr = 0x82117B18;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82117b34
	if (ctx.cr0.eq) goto loc_82117B34;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82117b38
	goto loc_82117B38;
loc_82117B34:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82117B38:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82117b4c
	if (ctx.cr6.eq) goto loc_82117B4C;
	// li r10,64
	ctx.r10.s64 = 64;
	// sth r10,42(r11)
	REX_STORE_U16(ctx.r11.u32 + 42, ctx.r10.u16);
	// b 0x82117b84
	goto loc_82117B84;
loc_82117B4C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,31956
	ctx.r6.s64 = ctx.r11.s64 + 31956;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x82117B70;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82117b84
	if (ctx.cr0.eq) goto loc_82117B84;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,31868
	ctx.r11.s64 = ctx.r11.s64 + 31868;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82117B84:
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

DEFINE_REX_FUNC(sub_821198C0) {
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32176
	ctx.r8.s64 = -2108686336;
	// li r30,1
	r30.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r8,2488
	ctx.r8.s64 = ctx.r8.s64 + 2488;
	// stb r30,110(r3)
	REX_STORE_U8(ctx.r3.u32 + 110, r30.u8);
	// lfs f0,16304(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16304);
	ctx.f0.f64 = double(temp.f32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addic. r10,r3,128
	ctx.xer.ca = ctx.r3.u32 > 4294967167;
	ctx.r10.s64 = ctx.r3.s64 + 128;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r30,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, r30.u64);
	// sth r9,88(r3)
	REX_STORE_U16(ctx.r3.u32 + 88, ctx.r9.u16);
	// stb r30,90(r3)
	REX_STORE_U8(ctx.r3.u32 + 90, r30.u8);
	// stb r11,91(r3)
	REX_STORE_U8(ctx.r3.u32 + 91, ctx.r11.u8);
	// stw r8,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r8.u32);
	// beq 0x82119920
	if (ctx.cr0.eq) goto loc_82119920;
	// stw r10,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
loc_82119920:
	// stb r30,109(r31)
	REX_STORE_U8(r31.u32 + 109, r30.u8);
	// stb r11,105(r31)
	REX_STORE_U8(r31.u32 + 105, ctx.r11.u8);
	// stb r11,106(r31)
	REX_STORE_U8(r31.u32 + 106, ctx.r11.u8);
	// stb r11,107(r31)
	REX_STORE_U8(r31.u32 + 107, ctx.r11.u8);
	// bl 0x821fedc8
	ctx.lr = 0x82119934;
	sub_821FEDC8(ctx, base);
	// stfs f1,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 244, temp.u32);
	// bl 0x821fee08
	ctx.lr = 0x8211993C;
	sub_821FEE08(ctx, base);
	// stfs f1,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 248, temp.u32);
	// bl 0x821fee88
	ctx.lr = 0x82119944;
	sub_821FEE88(ctx, base);
	// stfs f1,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 252, temp.u32);
	// bl 0x821fee88
	ctx.lr = 0x8211994C;
	sub_821FEE88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f31,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f31.f64 = double(temp.f32);
	// fadds f13,f1,f31
	ctx.f13.f64 = double(float(ctx.f1.f64 + f31.f64));
	// lfs f0,-31140(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -31140);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,272(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 272, temp.u32);
	// bl 0x821fee08
	ctx.lr = 0x8211996C;
	sub_821FEE08(ctx, base);
	// fadds f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + f31.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-31144(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31144);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 276, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x82119984;
	sub_821FEDC8(ctx, base);
	// fadds f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + f31.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// addi r5,r31,208
	ctx.r5.s64 = r31.s64 + 208;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// lfs f0,-31148(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,280(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 280, temp.u32);
	// lwz r3,29428(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 29428);
	// bl 0x8211e968
	ctx.lr = 0x821199AC;
	sub_8211E968(ctx, base);
	// bl 0x821fef70
	ctx.lr = 0x821199B0;
	sub_821FEF70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lbz r7,63(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 63);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// lfs f0,2384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f12,-31152(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -31152);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-31156(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -31156);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r9.u32);
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 256, temp.u32);
	// stw r7,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r7.u32);
	// lfs f13,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,268(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 268, temp.u32);
	// fmuls f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 240, temp.u32);
	// bl 0x821fee88
	ctx.lr = 0x821199FC;
	sub_821FEE88(ctx, base);
	// lis r11,-4627
	ctx.r11.s64 = -303235072;
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// stfs f0,264(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 264, temp.u32);
	// ori r11,r11,60909
	ctx.r11.u64 = ctx.r11.u64 | 60909;
	// stb r30,61(r31)
	REX_STORE_U8(r31.u32 + 61, r30.u8);
	// stw r11,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8211F870) {
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
	ctx.lr = 0x8211F878;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,268
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 268, ctx.xer);
	// bne cr6,0x8211f8f8
	if (!ctx.cr6.eq) goto loc_8211F8F8;
	// lwz r11,10140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10140);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,21420(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 21420);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,21424(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 21424);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,21428(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 21428);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f13,21164(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 21164);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,21168(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 21168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f13,21172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 21172);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x820e2028
	ctx.lr = 0x8211F8F4;
	sub_820E2028(ctx, base);
	// b 0x8211fa20
	goto loc_8211FA20;
loc_8211F8F8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8211f908
	if (ctx.cr6.lt) goto loc_8211F908;
	// cmpwi cr6,r29,49
	ctx.cr6.compare<int32_t>(r29.s32, 49, ctx.xer);
	// ble cr6,0x8211f90c
	if (!ctx.cr6.gt) goto loc_8211F90C;
loc_8211F908:
	// li r29,0
	r29.s64 = 0;
loc_8211F90C:
	// cmpwi cr6,r29,45
	ctx.cr6.compare<int32_t>(r29.s32, 45, ctx.xer);
	// blt cr6,0x8211f97c
	if (ctx.cr6.lt) goto loc_8211F97C;
	// lwz r11,10140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10140);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,64
	ctx.r5.s64 = 64;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r4,r11,20028
	ctx.r4.s64 = ctx.r11.s64 + 20028;
	// bl 0x822d4fa0
	ctx.lr = 0x8211F930;
	sub_822D4FA0(ctx, base);
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r11,r29,-45
	ctx.r11.s64 = r29.s64 + -45;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// mulli r11,r11,3
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,11568
	ctx.r10.s64 = ctx.r10.s64 + 11568;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
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
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// b 0x8211fa14
	goto loc_8211FA14;
loc_8211F97C:
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(r29.s32, 32, ctx.xer);
	// bge cr6,0x8211f9c4
	if (!ctx.cr6.lt) goto loc_8211F9C4;
	// lwz r11,10140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10140);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r10,r11,20028
	ctx.r10.s64 = ctx.r11.s64 + 20028;
	// lfs f13,20076(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20076);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f13,20080(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20080);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f13,20084(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20084);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// b 0x8211fa20
	goto loc_8211FA20;
loc_8211F9C4:
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r11,r29,-32
	ctx.r11.s64 = r29.s64 + -32;
	// addi r28,r10,11024
	r28.s64 = ctx.r10.s64 + 11024;
	// rlwinm r29,r11,5,0,26
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r28,20
	ctx.r11.s64 = r28.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r5,r29,r28
	ctx.r5.u64 = r29.u64 + r28.u64;
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// addi r11,r11,3320
	ctx.r11.s64 = ctx.r11.s64 + 3320;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cc0
	ctx.lr = 0x8211F9F4;
	sub_820E1CC0(ctx, base);
	// addi r11,r28,16
	ctx.r11.s64 = r28.s64 + 16;
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r11,10140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10140);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r4,r11,20028
	ctx.r4.s64 = ctx.r11.s64 + 20028;
loc_8211FA14:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1df8
	ctx.lr = 0x8211FA20;
	sub_820E1DF8(ctx, base);
loc_8211FA20:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82126498) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821264A0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r10,320
	ctx.r10.s64 = ctx.r10.s64 + 320;
	// addi r9,r11,110
	ctx.r9.s64 = ctx.r11.s64 + 110;
	// rlwinm r29,r9,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r8,r10,27
	ctx.r8.u64 = ctx.r10.u32 & 0x1F;
	// lwzx r10,r29,r3
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82126830
	if (ctx.cr6.eq) goto loc_82126830;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// addi r10,r11,124
	ctx.r10.s64 = ctx.r11.s64 + 124;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r3
	r30.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// beq cr6,0x82126714
	if (ctx.cr6.eq) goto loc_82126714;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82126504
	if (ctx.cr6.eq) goto loc_82126504;
	// addi r10,r11,102
	ctx.r10.s64 = ctx.r11.s64 + 102;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
loc_82126504:
	// addi r10,r11,104
	ctx.r10.s64 = ctx.r11.s64 + 104;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82126618
	if (ctx.cr6.eq) goto loc_82126618;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8212695c
	if (!ctx.cr6.eq) goto loc_8212695C;
	// addi r10,r11,102
	ctx.r10.s64 = ctx.r11.s64 + 102;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821265b0
	if (!ctx.cr6.eq) goto loc_821265B0;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r7,r11,100
	ctx.r7.s64 = ctx.r11.s64 + 100;
	// addi r9,r10,12816
	ctx.r9.s64 = ctx.r10.s64 + 12816;
	// mulli r10,r8,36
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(36));
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,20
	ctx.r7.s64 = ctx.r9.s64 + 20;
	// addi r5,r9,28
	ctx.r5.s64 = ctx.r9.s64 + 28;
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// lfsx f0,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r10,r7
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfsx f12,r10,r5
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsx f13,r8,r31
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + r31.u32, temp.u32);
	// lfsx f0,r10,r4
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82126590
	if (ctx.cr6.lt) goto loc_82126590;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lfsx f0,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82126590
	if (ctx.cr6.gt) goto loc_82126590;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82126590:
	// stfsx f0,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + r31.u32, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfsx f13,r10,r7
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,2392(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// b 0x821266a8
	goto loc_821266A8;
loc_821265B0:
	// addi r10,r11,100
	ctx.r10.s64 = ctx.r11.s64 + 100;
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,12816
	ctx.r9.s64 = ctx.r9.s64 + 12816;
	// mulli r8,r8,36
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(36));
	// lfsx f0,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r8,r9
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r7,r9,32
	ctx.r7.s64 = ctx.r9.s64 + 32;
	// addi r6,r9,20
	ctx.r6.s64 = ctx.r9.s64 + 20;
	// lfsx f12,r8,r7
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsx f0,r10,r31
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + r31.u32, temp.u32);
	// lfsx f0,r8,r6
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82126610
	if (ctx.cr6.lt) goto loc_82126610;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lfsx f13,r8,r9
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82126610
	if (!ctx.cr6.gt) goto loc_82126610;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82126610:
	// stfsx f0,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + r31.u32, temp.u32);
	// b 0x8212695c
	goto loc_8212695C;
loc_82126618:
	// addi r10,r11,102
	ctx.r10.s64 = ctx.r11.s64 + 102;
	// addi r7,r11,100
	ctx.r7.s64 = ctx.r11.s64 + 100;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// bne cr6,0x821266b8
	if (!ctx.cr6.eq) goto loc_821266B8;
	// addi r9,r10,12816
	ctx.r9.s64 = ctx.r10.s64 + 12816;
	// mulli r10,r8,36
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(36));
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,12
	ctx.r7.s64 = ctx.r9.s64 + 12;
	// addi r5,r9,28
	ctx.r5.s64 = ctx.r9.s64 + 28;
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// lfsx f0,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r10,r7
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfsx f13,r10,r5
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r8,r31
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fadds f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfsx f13,r8,r31
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + r31.u32, temp.u32);
	// lfsx f0,r10,r4
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8212668c
	if (ctx.cr6.lt) goto loc_8212668C;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lfsx f0,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8212668c
	if (ctx.cr6.gt) goto loc_8212668C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8212668C:
	// stfsx f0,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + r31.u32, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfsx f13,r10,r7
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,2392(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2392);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
loc_821266A8:
	// bge cr6,0x8212695c
	if (!ctx.cr6.lt) goto loc_8212695C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r10,r6,r31
	REX_STORE_U32(ctx.r6.u32 + r31.u32, ctx.r10.u32);
	// b 0x8212695c
	goto loc_8212695C;
loc_821266B8:
	// mulli r9,r8,36
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(36));
	// addi r10,r10,12816
	ctx.r10.s64 = ctx.r10.s64 + 12816;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,32
	ctx.r6.s64 = ctx.r10.s64 + 32;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r7,r31
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfsx f12,r9,r6
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfsx f13,r7,r31
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r7.u32 + r31.u32, temp.u32);
	// lfsx f0,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8212670c
	if (ctx.cr6.lt) goto loc_8212670C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lfsx f13,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8212670c
	if (!ctx.cr6.gt) goto loc_8212670C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8212670C:
	// stfsx f0,r7,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + r31.u32, temp.u32);
	// b 0x8212695c
	goto loc_8212695C;
loc_82126714:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8212672c
	if (ctx.cr6.eq) goto loc_8212672C;
	// addi r10,r11,102
	ctx.r10.s64 = ctx.r11.s64 + 102;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r9.u32);
loc_8212672C:
	// addi r10,r11,102
	ctx.r10.s64 = ctx.r11.s64 + 102;
	// mulli r9,r8,36
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(36));
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r7,r10,12816
	ctx.r7.s64 = ctx.r10.s64 + 12816;
	// bne cr6,0x821267c8
	if (!ctx.cr6.eq) goto loc_821267C8;
	// addi r5,r11,100
	ctx.r5.s64 = ctx.r11.s64 + 100;
	// addi r8,r7,8
	ctx.r8.s64 = ctx.r7.s64 + 8;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r7,28
	ctx.r5.s64 = ctx.r7.s64 + 28;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfsx f13,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfsx f13,r9,r5
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fadds f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfsx f13,r10,r31
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + r31.u32, temp.u32);
	// lfsx f0,r9,r7
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8212679c
	if (ctx.cr6.lt) goto loc_8212679C;
	// lfsx f0,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8212679c
	if (ctx.cr6.gt) goto loc_8212679C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8212679C:
	// stfsx f0,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + r31.u32, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfsx f13,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f13,2392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2392);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8212681c
	if (!ctx.cr6.lt) goto loc_8212681C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r10,r6,r31
	REX_STORE_U32(ctx.r6.u32 + r31.u32, ctx.r10.u32);
	// b 0x8212681c
	goto loc_8212681C;
loc_821267C8:
	// addi r6,r11,100
	ctx.r6.s64 = ctx.r11.s64 + 100;
	// addi r8,r7,24
	ctx.r8.s64 = ctx.r7.s64 + 24;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r7,32
	ctx.r6.s64 = ctx.r7.s64 + 32;
	// lfsx f13,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfsx f13,r9,r6
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fadds f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfsx f13,r10,r31
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + r31.u32, temp.u32);
	// lfsx f0,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82126818
	if (ctx.cr6.lt) goto loc_82126818;
	// addi r8,r7,8
	ctx.r8.s64 = ctx.r7.s64 + 8;
	// lfsx f0,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82126818
	if (ctx.cr6.gt) goto loc_82126818;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82126818:
	// stfsx f0,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + r31.u32, temp.u32);
loc_8212681C:
	// addi r10,r11,104
	ctx.r10.s64 = ctx.r11.s64 + 104;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r9.u32);
	// b 0x8212695c
	goto loc_8212695C;
loc_82126830:
	// addi r10,r11,124
	ctx.r10.s64 = ctx.r11.s64 + 124;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r31
	r30.u64 = ctx.r10.u64 + r31.u64;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82126858
	if (ctx.cr6.eq) goto loc_82126858;
	// addi r10,r11,102
	ctx.r10.s64 = ctx.r11.s64 + 102;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r9.u32);
loc_82126858:
	// addi r10,r11,102
	ctx.r10.s64 = ctx.r11.s64 + 102;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r9,r8,36
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(36));
	// lwzx r10,r6,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r7,r10,12816
	ctx.r7.s64 = ctx.r10.s64 + 12816;
	// bne cr6,0x821268f4
	if (!ctx.cr6.eq) goto loc_821268F4;
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r7,28
	ctx.r4.s64 = ctx.r7.s64 + 28;
	// lfsx f13,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfsx f13,r9,r4
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fadds f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfsx f13,r10,r31
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + r31.u32, temp.u32);
	// lfsx f0,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x821268cc
	if (ctx.cr6.lt) goto loc_821268CC;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// lfsx f0,r9,r7
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821268cc
	if (ctx.cr6.gt) goto loc_821268CC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821268CC:
	// stfsx f0,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + r31.u32, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfsx f13,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,2392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2392);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82126950
	if (!ctx.cr6.lt) goto loc_82126950;
	// stwx r5,r6,r31
	REX_STORE_U32(ctx.r6.u32 + r31.u32, ctx.r5.u32);
	// b 0x82126950
	goto loc_82126950;
loc_821268F4:
	// addi r6,r11,100
	ctx.r6.s64 = ctx.r11.s64 + 100;
	// addi r8,r7,16
	ctx.r8.s64 = ctx.r7.s64 + 16;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r7,32
	ctx.r6.s64 = ctx.r7.s64 + 32;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfsx f13,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfsx f13,r9,r6
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfsx f0,r10,r31
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + r31.u32, temp.u32);
	// lfsx f0,r9,r7
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8212694c
	if (ctx.cr6.lt) goto loc_8212694C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// lfsx f13,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8212694c
	if (!ctx.cr6.gt) goto loc_8212694C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8212694C:
	// stfsx f0,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + r31.u32, temp.u32);
loc_82126950:
	// addi r10,r11,104
	ctx.r10.s64 = ctx.r11.s64 + 104;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r5.u32);
loc_8212695C:
	// addi r9,r11,100
	ctx.r9.s64 = ctx.r11.s64 + 100;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,504(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 504);
	// lfsx f1,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821fa8e8
	ctx.lr = 0x82126978;
	sub_821FA8E8(ctx, base);
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82141230) {
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
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// addi r3,r10,23912
	ctx.r3.s64 = ctx.r10.s64 + 23912;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lha r4,5454(r11)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 5454));
	// bl 0x82130450
	ctx.lr = 0x8214125C;
	sub_82130450(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214127c
	if (ctx.cr0.eq) goto loc_8214127C;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214127c
	if (ctx.cr0.eq) goto loc_8214127C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 216);
	// bl 0x82140ce8
	ctx.lr = 0x8214127C;
	sub_82140CE8(ctx, base);
loc_8214127C:
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

DEFINE_REX_FUNC(sub_821489E8) {
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
	// bl 0x822d4e54
	ctx.lr = 0x821489F0;
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -152, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// addi r6,r8,-23216
	ctx.r6.s64 = ctx.r8.s64 + -23216;
	// addi r9,r11,22128
	ctx.r9.s64 = ctx.r11.s64 + 22128;
	// addi r8,r10,-952
	ctx.r8.s64 = ctx.r10.s64 + -952;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x821366d8
	ctx.lr = 0x82148A2C;
	sub_821366D8(ctx, base);
	// mr. r15,r3
	r15.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r15.s32, 0, ctx.xer);
	// beq 0x82149228
	if (ctx.cr0.eq) goto loc_82149228;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r25,r11,23912
	r25.s64 = ctx.r11.s64 + 23912;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f7,2332(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2332);
	ctx.f7.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r28,24(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 24);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r30,20(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 20);
	// li r21,0
	r21.s64 = 0;
	// li r19,1
	r19.s64 = 1;
	// lwz r29,76(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + 76);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lfs f5,-24452(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24452);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-23220(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23220);
	ctx.f4.f64 = double(temp.f32);
	// addi r24,r15,80
	r24.s64 = r15.s64 + 80;
	// lfs f3,29340(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 29340);
	ctx.f3.f64 = double(temp.f32);
	// stw r19,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r19.u32);
	// lfs f2,-23224(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -23224);
	ctx.f2.f64 = double(temp.f32);
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// lfs f1,26932(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 26932);
	ctx.f1.f64 = double(temp.f32);
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// stw r30,80(r15)
	REX_STORE_U32(r15.u32 + 80, r30.u32);
	// mr r26,r21
	r26.u64 = r21.u64;
	// stw r28,84(r15)
	REX_STORE_U32(r15.u32 + 84, r28.u32);
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// bl 0x82104548
	ctx.lr = 0x82148AAC;
	sub_82104548(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r3,148(r15)
	REX_STORE_U32(r15.u32 + 148, ctx.r3.u32);
	// stw r10,92(r15)
	REX_STORE_U32(r15.u32 + 92, ctx.r10.u32);
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lwz r8,48(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 48);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// addi r20,r11,14448
	r20.s64 = ctx.r11.s64 + 14448;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// li r16,2
	r16.s64 = 2;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r22,r10,432
	r22.s64 = ctx.r10.s64 + 432;
	// addi r23,r9,23232
	r23.s64 = ctx.r9.s64 + 23232;
	// beq cr6,0x82148d8c
	if (ctx.cr6.eq) goto loc_82148D8C;
	// lwz r4,28(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r5,32(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 32);
	// blt cr6,0x82148c18
	if (ctx.cr6.lt) goto loc_82148C18;
	// bne cr6,0x82148ecc
	if (!ctx.cr6.eq) goto loc_82148ECC;
	// lwz r11,76(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 76);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r10,r10,22000
	ctx.r10.s64 = ctx.r10.s64 + 22000;
	// mulli r11,r11,324
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(324));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r10,r10,10
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(10));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mulli r10,r10,6
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(6));
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r10,14
	ctx.r10.s64 = ctx.r10.s64 + 14;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r10,r10,r9
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82148ba8
	if (ctx.cr6.eq) goto loc_82148BA8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82148ba8
	if (ctx.cr0.eq) goto loc_82148BA8;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82132d78
	ctx.lr = 0x82148B64;
	sub_82132D78(ctx, base);
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r11,r11,22984
	ctx.r11.s64 = ctx.r11.s64 + 22984;
	// lbzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r10,r11,58
	ctx.r10.s64 = ctx.r11.s64 + 58;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bne cr6,0x82148b98
	if (!ctx.cr6.eq) goto loc_82148B98;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// b 0x82148b9c
	goto loc_82148B9C;
loc_82148B98:
	// rlwinm r11,r11,20,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF;
loc_82148B9C:
	// lwz r8,48(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 48);
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// b 0x82148bac
	goto loc_82148BAC;
loc_82148BA8:
	// mr r26,r19
	r26.u64 = r19.u64;
loc_82148BAC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82148de8
	if (ctx.cr6.eq) goto loc_82148DE8;
	// lwz r7,20(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 20);
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// bne cr6,0x82148bf8
	if (!ctx.cr6.eq) goto loc_82148BF8;
	// lwz r11,80(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 80);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// stw r21,160(r22)
	REX_STORE_U32(r22.u32 + 160, r21.u32);
	// stw r21,164(r22)
	REX_STORE_U32(r22.u32 + 164, r21.u32);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// stw r21,172(r22)
	REX_STORE_U32(r22.u32 + 172, r21.u32);
	// stw r21,176(r22)
	REX_STORE_U32(r22.u32 + 176, r21.u32);
	// stw r21,184(r22)
	REX_STORE_U32(r22.u32 + 184, r21.u32);
	// stw r11,168(r22)
	REX_STORE_U32(r22.u32 + 168, ctx.r11.u32);
	// stw r21,180(r22)
	REX_STORE_U32(r22.u32 + 180, r21.u32);
	// stw r11,188(r22)
	REX_STORE_U32(r22.u32 + 188, ctx.r11.u32);
	// stw r21,192(r22)
	REX_STORE_U32(r22.u32 + 192, r21.u32);
	// stw r21,196(r22)
	REX_STORE_U32(r22.u32 + 196, r21.u32);
loc_82148BF8:
	// cmpwi cr6,r7,10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 10, ctx.xer);
	// beq cr6,0x82148c08
	if (ctx.cr6.eq) goto loc_82148C08;
	// cmpwi cr6,r7,13
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 13, ctx.xer);
	// bne cr6,0x82148de8
	if (!ctx.cr6.eq) goto loc_82148DE8;
loc_82148C08:
	// lwz r11,220(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 220);
	// lfs f0,84(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5468(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 5468, temp.u32);
	// b 0x82148de8
	goto loc_82148DE8;
loc_82148C18:
	// lwz r11,76(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 76);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r10,r10,22000
	ctx.r10.s64 = ctx.r10.s64 + 22000;
	// mulli r11,r11,324
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(324));
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82145468
	ctx.lr = 0x82148C34;
	sub_82145468(ctx, base);
	// addi r11,r4,17
	ctx.r11.s64 = ctx.r4.s64 + 17;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + r31.u32, ctx.r10.u16);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mulli r11,r11,10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r11,r10
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82148c94
	if (ctx.cr6.eq) goto loc_82148C94;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82148ca8
	if (!ctx.cr0.eq) goto loc_82148CA8;
loc_82148C94:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r26,r19
	r26.u64 = r19.u64;
	// stw r11,24(r24)
	REX_STORE_U32(r24.u32 + 24, ctx.r11.u32);
	// stw r11,0(r17)
	REX_STORE_U32(r17.u32 + 0, ctx.r11.u32);
	// b 0x82148d74
	goto loc_82148D74;
loc_82148CA8:
	// stw r21,24(r24)
	REX_STORE_U32(r24.u32 + 24, r21.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r21,0(r17)
	REX_STORE_U32(r17.u32 + 0, r21.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8213e490
	ctx.lr = 0x82148CC8;
	sub_8213E490(ctx, base);
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r11,22984
	r31.s64 = ctx.r11.s64 + 22984;
	// lbzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r31.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bne cr6,0x82148cf8
	if (!ctx.cr6.eq) goto loc_82148CF8;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// b 0x82148cfc
	goto loc_82148CFC;
loc_82148CF8:
	// rlwinm r11,r11,20,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF;
loc_82148CFC:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// bl 0x82145410
	ctx.lr = 0x82148D14;
	sub_82145410(ctx, base);
	// lbzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r31.u32);
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bne cr6,0x82148d3c
	if (!ctx.cr6.eq) goto loc_82148D3C;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// b 0x82148d40
	goto loc_82148D40;
loc_82148D3C:
	// rlwinm r11,r11,20,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF;
loc_82148D40:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82148d74
	if (!ctx.cr6.eq) goto loc_82148D74;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// bne cr6,0x82148d58
	if (!ctx.cr6.eq) goto loc_82148D58;
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// b 0x82148d64
	goto loc_82148D64;
loc_82148D58:
	// mulli r11,r30,24
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(24));
	// lwzx r11,r11,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82148D64:
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bne cr6,0x82148d74
	if (!ctx.cr6.eq) goto loc_82148D74;
	// stw r16,24(r24)
	REX_STORE_U32(r24.u32 + 24, r16.u32);
	// stw r16,0(r17)
	REX_STORE_U32(r17.u32 + 0, r16.u32);
loc_82148D74:
	// lwz r11,220(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 220);
	// lwz r10,168(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 168);
	// lfs f0,5468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r25)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r25.u32 + 84, temp.u32);
	// stw r10,80(r25)
	REX_STORE_U32(r25.u32 + 80, ctx.r10.u32);
	// b 0x82148ecc
	goto loc_82148ECC;
loc_82148D8C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82148df4
	if (ctx.cr6.lt) goto loc_82148DF4;
	// bne cr6,0x82148ecc
	if (!ctx.cr6.eq) goto loc_82148ECC;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82132d78
	ctx.lr = 0x82148DAC;
	sub_82132D78(ctx, base);
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r11,r11,22984
	ctx.r11.s64 = ctx.r11.s64 + 22984;
	// lbzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r10,r11,58
	ctx.r10.s64 = ctx.r11.s64 + 58;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bne cr6,0x82148de0
	if (!ctx.cr6.eq) goto loc_82148DE0;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// b 0x82148de4
	goto loc_82148DE4;
loc_82148DE0:
	// rlwinm r11,r11,20,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF;
loc_82148DE4:
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
loc_82148DE8:
	// stw r19,24(r24)
	REX_STORE_U32(r24.u32 + 24, r19.u32);
	// stw r19,0(r17)
	REX_STORE_U32(r17.u32 + 0, r19.u32);
	// b 0x82148ecc
	goto loc_82148ECC;
loc_82148DF4:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8213e490
	ctx.lr = 0x82148E0C;
	sub_8213E490(ctx, base);
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r27,r11,22984
	r27.s64 = ctx.r11.s64 + 22984;
	// lbzx r11,r30,r27
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r27.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r31,r11,20
	r31.u64 = ctx.r11.u32 & 0xFFF;
	// beq cr6,0x82148e3c
	if (ctx.cr6.eq) goto loc_82148E3C;
	// rlwinm r31,r11,20,20,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF;
loc_82148E3C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r26,r31
	r26.u64 = r31.u64;
	// bl 0x82145410
	ctx.lr = 0x82148E54;
	sub_82145410(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// bne cr6,0x82148e88
	if (!ctx.cr6.eq) goto loc_82148E88;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// bne cr6,0x82148e6c
	if (!ctx.cr6.eq) goto loc_82148E6C;
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// b 0x82148e78
	goto loc_82148E78;
loc_82148E6C:
	// mulli r11,r30,24
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(24));
	// lwzx r11,r11,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82148E78:
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bne cr6,0x82148e88
	if (!ctx.cr6.eq) goto loc_82148E88;
	// stw r16,24(r24)
	REX_STORE_U32(r24.u32 + 24, r16.u32);
	// stw r16,0(r17)
	REX_STORE_U32(r17.u32 + 0, r16.u32);
loc_82148E88:
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(r30.s32, 9, ctx.xer);
	// bne cr6,0x82148ecc
	if (!ctx.cr6.eq) goto loc_82148ECC;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// bne cr6,0x82148ecc
	if (!ctx.cr6.eq) goto loc_82148ECC;
	// lbz r11,9(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 9);
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82148ecc
	if (!ctx.cr6.eq) goto loc_82148ECC;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r10,520(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 520);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,520(r11)
	REX_STORE_U32(ctx.r11.u32 + 520, ctx.r10.u32);
loc_82148ECC:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,32(r24)
	REX_STORE_U32(r24.u32 + 32, ctx.r3.u32);
	// bne 0x82148eec
	if (!ctx.cr0.eq) goto loc_82148EEC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
loc_82148EEC:
	// addi r5,r26,-1
	ctx.r5.s64 = r26.s64 + -1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x821300e0
	ctx.lr = 0x82148EF8;
	sub_821300E0(ctx, base);
	// bl 0x82136340
	ctx.lr = 0x82148EFC;
	sub_82136340(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// li r31,100
	r31.s64 = 100;
	// lwz r3,32(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 32);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,99
	ctx.r11.s64 = ctx.r11.s64 + 99;
	// divw r11,r11,r31
	ctx.r11.u64 = uint32_t((r31.s32 && !(ctx.r11.s32 == INT32_MIN && r31.s32 == -1)) ? ctx.r11.s32 / r31.s32 : 0);
	// mulli r11,r11,100
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(100));
	// stw r11,40(r24)
	REX_STORE_U32(r24.u32 + 40, ctx.r11.u32);
	// bl 0x821300e0
	ctx.lr = 0x82148F40;
	sub_821300E0(ctx, base);
	// bl 0x821363f0
	ctx.lr = 0x82148F44;
	sub_821363F0(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r11,23240
	ctx.r11.s64 = ctx.r11.s64 + 23240;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r10,r10,99
	ctx.r10.s64 = ctx.r10.s64 + 99;
	// divw r10,r10,r31
	ctx.r10.u64 = uint32_t((r31.s32 && !(ctx.r10.s32 == INT32_MIN && r31.s32 == -1)) ? ctx.r10.s32 / r31.s32 : 0);
	// mulli r10,r10,100
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(100));
	// stw r10,44(r24)
	REX_STORE_U32(r24.u32 + 44, ctx.r10.u32);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82148fa4
	if (!ctx.cr0.eq) goto loc_82148FA4;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r8,360(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 360);
	// and. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82148fb8
	if (ctx.cr0.eq) goto loc_82148FB8;
loc_82148FA4:
	// addi r11,r18,99
	ctx.r11.s64 = r18.s64 + 99;
	// divw r11,r11,r31
	ctx.r11.u64 = uint32_t((r31.s32 && !(ctx.r11.s32 == INT32_MIN && r31.s32 == -1)) ? ctx.r11.s32 / r31.s32 : 0);
	// mulli r11,r11,100
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(100));
	// stw r11,44(r24)
	REX_STORE_U32(r24.u32 + 44, ctx.r11.u32);
	// b 0x8214901c
	goto loc_8214901C;
loc_82148FB8:
	// lwz r10,0(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8214901c
	if (ctx.cr6.eq) goto loc_8214901C;
	// lwz r10,220(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 220);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mulli r7,r8,284
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(284));
	// lwzx r11,r7,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214901c
	if (ctx.cr0.eq) goto loc_8214901C;
	// lha r10,5452(r10)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 5452));
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8214901c
	if (!ctx.cr6.gt) goto loc_8214901C;
loc_82148FFC:
	// lwz r10,44(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,44(r24)
	REX_STORE_U32(r24.u32 + 44, ctx.r10.u32);
	// lwz r10,220(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 220);
	// lha r10,5452(r10)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 5452));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82148ffc
	if (ctx.cr6.lt) goto loc_82148FFC;
loc_8214901C:
	// lwz r11,32(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,36(r24)
	REX_STORE_U32(r24.u32 + 36, ctx.r10.u32);
	// beq cr6,0x821490f0
	if (ctx.cr6.eq) goto loc_821490F0;
	// bl 0x82136290
	ctx.lr = 0x82149034;
	sub_82136290(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82149060
	if (ctx.cr0.lt) goto loc_82149060;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dce30
	ctx.lr = 0x82149048;
	sub_821DCE30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82149060
	if (!ctx.cr0.eq) goto loc_82149060;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dde50
	ctx.lr = 0x8214905C;
	sub_821DDE50(ctx, base);
	// stw r31,36(r24)
	REX_STORE_U32(r24.u32 + 36, r31.u32);
loc_82149060:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// lwz r29,4(r23)
	r29.u64 = REX_LOAD_U32(r23.u32 + 4);
	// mr r31,r19
	r31.u64 = r19.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r30,520(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 520);
loc_82149078:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82132dc8
	ctx.lr = 0x82149080;
	sub_82132DC8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// bgt cr6,0x82149090
	if (ctx.cr6.gt) goto loc_82149090;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_82149090:
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r5,24
	ctx.r5.s64 = ctx.r5.s64 + 24;
	// addi r9,r20,384
	ctx.r9.s64 = r20.s64 + 384;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// xoris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addc r11,r11,r10
	ctx.xer.ca = ctx.r11.u32 + ctx.r10.u32 < ctx.r11.u32;
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	r31.u64 = ctx.r11.u64 & r31.u64;
	// blt cr6,0x82149078
	if (ctx.cr6.lt) goto loc_82149078;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x821490f0
	if (ctx.cr6.eq) goto loc_821490F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821dce30
	ctx.lr = 0x821490D4;
	sub_821DCE30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821490f0
	if (!ctx.cr0.eq) goto loc_821490F0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821dde50
	ctx.lr = 0x821490E8;
	sub_821DDE50(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,36(r24)
	REX_STORE_U32(r24.u32 + 36, ctx.r11.u32);
loc_821490F0:
	// stw r21,28(r24)
	REX_STORE_U32(r24.u32 + 28, r21.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,48(r24)
	REX_STORE_U32(r24.u32 + 48, ctx.r11.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r11,516(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 516);
	// stw r11,52(r24)
	REX_STORE_U32(r24.u32 + 52, ctx.r11.u32);
	// lwz r4,40(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 40);
	// bl 0x821305a0
	ctx.lr = 0x82149118;
	sub_821305A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821491dc
	if (ctx.cr0.eq) goto loc_821491DC;
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// addi r10,r11,23000
	ctx.r10.s64 = ctx.r11.s64 + 23000;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwz r9,32(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
loc_82149138:
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8214915c
	if (ctx.cr6.lt) goto loc_8214915C;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r7,r10,804
	ctx.r7.s64 = ctx.r10.s64 + 804;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82149138
	if (!ctx.cr6.gt) goto loc_82149138;
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
loc_8214915C:
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821e2848
	ctx.lr = 0x82149168;
	sub_821E2848(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821e34e0
	ctx.lr = 0x82149174;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r11,r11,-25200
	ctx.r11.s64 = ctx.r11.s64 + -25200;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x82149188;
	sub_821E2FD0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821e28d0
	ctx.lr = 0x82149190;
	sub_821E28D0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821e34e0
	ctx.lr = 0x8214919C;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-25192
	ctx.r11.s64 = ctx.r11.s64 + -25192;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821491B0;
	sub_821E2FD0(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x821e2958
	ctx.lr = 0x821491B8;
	sub_821E2958(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x821e34e0
	ctx.lr = 0x821491C4;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r11,r11,-25184
	ctx.r11.s64 = ctx.r11.s64 + -25184;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821491D8;
	sub_821E2FD0(ctx, base);
	// stw r19,28(r24)
	REX_STORE_U32(r24.u32 + 28, r19.u32);
loc_821491DC:
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r11,44(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 44);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82149218
	if (ctx.cr6.eq) goto loc_82149218;
	// lwz r10,516(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 516);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82149200
	if (!ctx.cr0.lt) goto loc_82149200;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// b 0x82149214
	goto loc_82149214;
loc_82149200:
	// lis r10,1525
	ctx.r10.s64 = 99942400;
	// ori r10,r10,57500
	ctx.r10.u64 = ctx.r10.u64 | 57500;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82149214
	if (!ctx.cr6.gt) goto loc_82149214;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82149214:
	// stw r11,516(r9)
	REX_STORE_U32(ctx.r9.u32 + 516, ctx.r11.u32);
loc_82149218:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// stw r21,96(r25)
	REX_STORE_U32(r25.u32 + 96, r21.u32);
	// stw r11,92(r25)
	REX_STORE_U32(r25.u32 + 92, ctx.r11.u32);
loc_82149228:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x822d4ea4
	return;
}

DEFINE_REX_FUNC(sub_8216F788) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f38
	ctx.lr = 0x8216F7A0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	// lfs f12,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f8,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// lfsx f0,r10,r3
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f31,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	f31.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f7,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fadds f30,f12,f8
	f30.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// fadds f29,f7,f11
	f29.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f0,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmadds f13,f9,f31,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, f31.f64, ctx.f13.f64)));
	// fsubs f28,f13,f0
	f28.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x8216f660
	ctx.lr = 0x8216F820;
	sub_8216F660(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,26656
	ctx.r5.s64 = ctx.r11.s64 + 26656;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821eb1a0
	ctx.lr = 0x8216F838;
	sub_821EB1A0(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,212(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,35
	ctx.r11.s64 = r31.s64 + 35;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r10,-7568
	ctx.r3.s64 = ctx.r10.s64 + -7568;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fmadds f0,f0,f31,f28
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, f28.f64)));
	// lfsx f13,r11,r30
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + f30.f64));
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// fadds f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x8216F87C;
	sub_821EACB0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f84
	ctx.lr = 0x8216F888;
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

DEFINE_REX_FUNC(sub_82174010) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r11,r4,-5
	ctx.r11.s64 = ctx.r4.s64 + -5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8217401C:
	// lbz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
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
	// stb r10,14(r11)
	REX_STORE_U8(ctx.r11.u32 + 14, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,15(r11)
	REX_STORE_U8(ctx.r11.u32 + 15, ctx.r10.u8);
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
	// stb r10,17(r11)
	REX_STORE_U8(ctx.r11.u32 + 17, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,18(r11)
	REX_STORE_U8(ctx.r11.u32 + 18, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,19(r11)
	REX_STORE_U8(ctx.r11.u32 + 19, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,20(r11)
	REX_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,21(r11)
	REX_STORE_U8(ctx.r11.u32 + 21, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,22(r11)
	REX_STORE_U8(ctx.r11.u32 + 22, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,23(r11)
	REX_STORE_U8(ctx.r11.u32 + 23, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// stb r9,25(r11)
	REX_STORE_U8(ctx.r11.u32 + 25, ctx.r9.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,26(r11)
	REX_STORE_U8(ctx.r11.u32 + 26, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r10,27(r11)
	REX_STORE_U8(ctx.r11.u32 + 27, ctx.r10.u8);
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stbu r10,28(r11)
	ea = 28 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8217401c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217401C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82176080) {
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
	// bl 0x822d4e88
	ctx.lr = 0x82176088;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r8,196(r3)
	REX_STORE_U32(ctx.r3.u32 + 196, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, ctx.r9.u32);
	// addi r11,r11,-5944
	ctx.r11.s64 = ctx.r11.s64 + -5944;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821760c4
	if (ctx.cr6.eq) goto loc_821760C4;
	// stw r10,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, ctx.r10.u32);
	// b 0x821760d0
	goto loc_821760D0;
loc_821760C4:
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r11,r11,-29192
	ctx.r11.s64 = ctx.r11.s64 + -29192;
	// stw r11,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r11.u32);
loc_821760D0:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,192(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 192);
	// addic. r10,r31,112
	ctx.xer.ca = r31.u32 > 4294967183;
	ctx.r10.s64 = r31.s64 + 112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r30,0
	r30.s64 = 0;
	// std r11,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r11.u64);
	// sth r11,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r11.u16);
	// stb r11,90(r31)
	REX_STORE_U8(r31.u32 + 90, ctx.r11.u8);
	// beq 0x821760f8
	if (ctx.cr0.eq) goto loc_821760F8;
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// b 0x821760fc
	goto loc_821760FC;
loc_821760F8:
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
loc_821760FC:
	// stw r9,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82176110
	if (ctx.cr6.eq) goto loc_82176110;
	// stw r4,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r4.u32);
	// stb r5,104(r31)
	REX_STORE_U8(r31.u32 + 104, ctx.r5.u8);
loc_82176110:
	// stb r30,105(r31)
	REX_STORE_U8(r31.u32 + 105, r30.u8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r30,106(r31)
	REX_STORE_U8(r31.u32 + 106, r30.u8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r30,107(r31)
	REX_STORE_U8(r31.u32 + 107, r30.u8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stb r30,109(r31)
	REX_STORE_U8(r31.u32 + 109, r30.u8);
	// lfs f12,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lfs f30,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f30.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * f30.f64));
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x820e1b70
	ctx.lr = 0x82176168;
	sub_820E1B70(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lfs f11,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f5,f31
	ctx.f5.f64 = f31.f64;
	// addi r11,r11,-4224
	ctx.r11.s64 = ctx.r11.s64 + -4224;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// lfs f0,2392(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f13,26936(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 26936);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r11,112
	ctx.r8.s64 = ctx.r11.s64 + 112;
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// fmuls f2,f11,f30
	ctx.f2.f64 = double(float(ctx.f11.f64 * f30.f64));
	// lfs f13,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 * f30.f64));
	// bl 0x8210ded0
	ctx.lr = 0x821761C8;
	sub_8210DED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8217A038) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e8c
	ctx.lr = 0x8217A040;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f34
	ctx.lr = 0x8217A048;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r30,r10,-7072
	r30.s64 = ctx.r10.s64 + -7072;
	// addi r31,r11,7808
	r31.s64 = ctx.r11.s64 + 7808;
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r30,10484
	ctx.r5.s64 = r30.s64 + 10484;
	// addi r4,r11,14180
	ctx.r4.s64 = ctx.r11.s64 + 14180;
	// bl 0x820e1ba8
	ctx.lr = 0x8217A074;
	sub_820E1BA8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// stfs f31,4(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// bl 0x820e22e8
	ctx.lr = 0x8217A088;
	sub_820E22E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f29,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f29.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x820e1cc0
	ctx.lr = 0x8217A0A4;
	sub_820E1CC0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r30,10484
	ctx.r5.s64 = r30.s64 + 10484;
	// bl 0x820e1b28
	ctx.lr = 0x8217A0B4;
	sub_820E1B28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e2290
	ctx.lr = 0x8217A0C0;
	sub_820E2290(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f31,20(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// lfs f30,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
	// stfs f30,24(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f30,28(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// bl 0x820e1c28
	ctx.lr = 0x8217A0E4;
	sub_820E1C28(ctx, base);
	// bl 0x822d6830
	ctx.lr = 0x8217A0E8;
	sub_822D6830(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// lfs f0,1988(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1988);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f28,f13,f0
	f28.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e1c50
	ctx.lr = 0x8217A108;
	sub_820E1C50(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8217a118
	if (!ctx.cr6.lt) goto loc_8217A118;
	// fneg f28,f28
	f28.u64 = f28.u64 ^ 0x8000000000000000;
loc_8217A118:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x820e01b0
	ctx.lr = 0x8217A120;
	sub_820E01B0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x820e0778
	ctx.lr = 0x8217A12C;
	sub_820E0778(ctx, base);
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f31,8(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f30,12(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1ba8
	ctx.lr = 0x8217A14C;
	sub_820E1BA8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e01b0
	ctx.lr = 0x8217A154;
	sub_820E01B0(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f30,156(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x820e01b0
	ctx.lr = 0x8217A178;
	sub_820E01B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f0,16204(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16204);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f27,f29,f0
	ctx.f0.f64 = double(float(std::fma(f27.f64, f29.f64, ctx.f0.f64)));
	// lfs f1,-30672(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30672);
	ctx.f1.f64 = double(temp.f32);
	// fdivs f3,f30,f0
	ctx.f3.f64 = double(float(f30.f64 / ctx.f0.f64));
	// bl 0x820e0d78
	ctx.lr = 0x8217A1A0;
	sub_820E0D78(ctx, base);
	// addi r31,r29,84
	r31.s64 = r29.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x820e0368
	ctx.lr = 0x8217A1B4;
	sub_820E0368(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e0368
	ctx.lr = 0x8217A1C4;
	sub_820E0368(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f80
	ctx.lr = 0x8217A1D0;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8217FBE0) {
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
	ctx.lr = 0x8217FBE8;
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,76(r4)
	REX_STORE_U8(ctx.r4.u32 + 76, ctx.r11.u8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x821fec88
	ctx.lr = 0x8217FC10;
	sub_821FEC88(ctx, base);
	// lwz r11,248(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 248);
	// rlwinm r10,r3,4,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xF0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lfs f31,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lfs f30,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	f30.f64 = double(temp.f32);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// stfs f31,32(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 32, temp.u32);
	// stfs f31,36(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 36, temp.u32);
	// stfs f31,40(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 40, temp.u32);
	// stfs f30,44(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 44, temp.u32);
	// bl 0x821fec88
	ctx.lr = 0x8217FC60;
	sub_821FEC88(ctx, base);
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	// stw r11,76(r29)
	REX_STORE_U32(r29.u32 + 76, ctx.r11.u32);
	// bl 0x821fedc8
	ctx.lr = 0x8217FC6C;
	sub_821FEDC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,204(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,2384(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2384);
	f29.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f29
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, f29.f64)));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,52(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 52, temp.u32);
	// stfs f0,48(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 48, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x8217FC94;
	sub_821FEDC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f31,60(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 60, temp.u32);
	// stfs f31,64(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 64, temp.u32);
	// stfs f31,68(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 68, temp.u32);
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,56(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 56, temp.u32);
	// lfs f0,192(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f30,16(r29)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 16, temp.u32);
	// stfs f0,20(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 20, temp.u32);
	// stfs f30,24(r29)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 24, temp.u32);
	// stfs f31,28(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 28, temp.u32);
	// stfs f30,0(r29)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f30,4(r29)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// stfs f30,8(r29)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// stfs f31,12(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 12, temp.u32);
	// stfs f30,32(r29)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 32, temp.u32);
	// stfs f30,36(r29)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 36, temp.u32);
	// stfs f30,40(r29)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 40, temp.u32);
	// stfs f31,44(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 44, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82183B20) {
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
	ctx.lr = 0x82183B28;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82183b58
	if (ctx.cr6.eq) goto loc_82183B58;
	// lhz r11,18(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 18);
	// lhz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82183c68
	goto loc_82183C68;
loc_82183B58:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// ori r11,r11,4440
	ctx.r11.u64 = ctx.r11.u64 | 4440;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82183b78
	if (ctx.cr6.eq) goto loc_82183B78;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82183c68
	goto loc_82183C68;
loc_82183B78:
	// lbz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 20);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// li r26,1
	r26.s64 = 1;
	// ori r28,r10,2624
	r28.u64 = ctx.r10.u64 | 2624;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82183ba4
	if (!ctx.cr0.eq) goto loc_82183BA4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r31,r28
	ctx.r3.u64 = r31.u64 + r28.u64;
	// bl 0x82182a60
	ctx.lr = 0x82183BA0;
	sub_82182A60(ctx, base);
	// stb r26,20(r31)
	REX_STORE_U8(r31.u32 + 20, r26.u8);
loc_82183BA4:
	// addis r29,r31,4
	r29.s64 = r31.s64 + 262144;
	// addi r29,r29,4444
	r29.s64 = r29.s64 + 4444;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// bne 0x82183be8
	if (!ctx.cr0.eq) goto loc_82183BE8;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r11,r11,6012
	ctx.r11.u64 = ctx.r11.u64 | 6012;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 0);
	// sth r11,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r11.u16);
	// bl 0x82182db8
	ctx.lr = 0x82183BE4;
	sub_82182DB8(ctx, base);
	// b 0x82183c64
	goto loc_82183C64;
loc_82183BE8:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82183c38
	if (!ctx.cr6.lt) goto loc_82183C38;
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
	// bne 0x82183c10
	if (!ctx.cr0.eq) goto loc_82183C10;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82208828
	ctx.lr = 0x82183C10;
	sub_82208828(ctx, base);
loc_82183C10:
	// lfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r30.u32 + 0);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f12,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfd f0,31632(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 31632);
	// fdiv f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 / ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// bl 0x82181a30
	ctx.lr = 0x82183C38;
	sub_82181A30(ctx, base);
loc_82183C38:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// subfic r11,r11,5
	ctx.xer.ca = ctx.r11.u32 <= 5;
	ctx.r11.u64 = static_cast<uint64_t>(5) - ctx.r11.u64;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// add r3,r31,r28
	ctx.r3.u64 = r31.u64 + r28.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82182a60
	ctx.lr = 0x82183C5C;
	sub_82182A60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821836a0
	ctx.lr = 0x82183C64;
	sub_821836A0(ctx, base);
loc_82183C64:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82183C68:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82188388) {
	REX_FUNC_PROLOGUE();
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// std r10,96(r3)
	REX_STORE_U64(ctx.r3.u32 + 96, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821884C8) {
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
	// bl 0x82188318
	ctx.lr = 0x821884E8;
	sub_82188318(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821884f8
	if (!ctx.cr0.eq) goto loc_821884F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82188530
	goto loc_82188530;
loc_821884F8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x821850a0
	ctx.lr = 0x82188504;
	sub_821850A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82188524
	if (!ctx.cr0.eq) goto loc_82188524;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r10,96(r31)
	REX_STORE_U64(r31.u32 + 96, ctx.r10.u64);
	// b 0x82188530
	goto loc_82188530;
loc_82188524:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82188530:
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

DEFINE_REX_FUNC(sub_82189B58) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82189CD0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218A590) {
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
	// bgt cr6,0x8218a5a8
	if (ctx.cr6.gt) goto loc_8218A5A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
loc_8218A5A8:
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// stfs f2,12(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f1,36(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218C098) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// stw r4,-28732(r11)
	REX_STORE_U32(ctx.r11.u32 + -28732, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218C1A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,5780(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218c1d0
	if (ctx.cr6.eq) goto loc_8218C1D0;
	// lha r11,78(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 78));
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8218c1d0
	if (ctx.cr6.eq) goto loc_8218C1D0;
	// lbz r10,194(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 194);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8218c1d0
	if (!ctx.cr0.eq) goto loc_8218C1D0;
	// lbz r10,217(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 217);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8218c1d4
	if (ctx.cr0.eq) goto loc_8218C1D4;
loc_8218C1D0:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8218C1D4:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8218c204
	if (!ctx.cr0.eq) goto loc_8218C204;
	// lwz r10,5572(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5572);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8218c208
	if (ctx.cr6.eq) goto loc_8218C208;
loc_8218C204:
	// li r8,1
	ctx.r8.s64 = 1;
loc_8218C208:
	// clrlwi r9,r11,17
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFF;
	// li r10,8
	ctx.r10.s64 = 8;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// blt cr6,0x8218c21c
	if (ctx.cr6.lt) goto loc_8218C21C;
	// li r10,17
	ctx.r10.s64 = 17;
loc_8218C21C:
	// lhz r11,8122(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 8122);
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// beq cr6,0x8218c23c
	if (ctx.cr6.eq) goto loc_8218C23C;
	// lbz r11,187(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 187);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ctx.r8.u64;
loc_8218C23C:
	// lwz r11,5580(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5580);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8218c25c
	if (!ctx.cr6.gt) goto loc_8218C25C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8218C25C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8218c270
	if (ctx.cr6.eq) goto loc_8218C270;
	// li r10,-32768
	ctx.r10.s64 = -32768;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8218C270:
	// sth r11,5816(r3)
	REX_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218FD70) {
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
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r31,r11,80
	r31.s64 = ctx.r11.s64 + 80;
	// lwz r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218fda8
	if (ctx.cr6.eq) goto loc_8218FDA8;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
loc_8218FDA8:
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218fde8
	if (ctx.cr6.eq) goto loc_8218FDE8;
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218fde8
	if (ctx.cr6.eq) goto loc_8218FDE8;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// addi r11,r10,30796
	ctx.r11.s64 = ctx.r10.s64 + 30796;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, ctx.xer);
	// bne cr6,0x8218fde8
	if (!ctx.cr6.eq) goto loc_8218FDE8;
	// stwx r30,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r30.u32);
loc_8218FDE8:
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218fe0c
	if (!ctx.cr6.eq) goto loc_8218FE0C;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lwz r5,228(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 228);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,504(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 504);
	// bl 0x821fadc0
	ctx.lr = 0x8218FE0C;
	sub_821FADC0(ctx, base);
loc_8218FE0C:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8218fe28
	if (!ctx.cr6.eq) goto loc_8218FE28;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lwz r11,-28728(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -28728);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-28728(r10)
	REX_STORE_U32(ctx.r10.u32 + -28728, ctx.r11.u32);
loc_8218FE28:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218fe44
	if (ctx.cr6.eq) goto loc_8218FE44;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8218fe44
	if (!ctx.cr6.eq) goto loc_8218FE44;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
loc_8218FE44:
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

DEFINE_REX_FUNC(sub_82194F20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
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
	// bl 0x822d4e84
	ctx.lr = 0x82194F28;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f30
	ctx.lr = 0x82194F30;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,1
	r29.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821d9620
	ctx.lr = 0x82194F4C;
	sub_821D9620(ctx, base);
	// bl 0x821aff90
	ctx.lr = 0x82194F50;
	sub_821AFF90(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// bl 0x820e4bb0
	ctx.lr = 0x82194F58;
	sub_820E4BB0(ctx, base);
	// stw r3,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// li r3,101
	ctx.r3.s64 = 101;
	// bl 0x82191bb0
	ctx.lr = 0x82194F64;
	sub_82191BB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f1,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,-24948(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24948);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,112
	ctx.r11.s64 = r31.s64 + 112;
	// lfs f13,3904(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3904);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r8,-7088
	ctx.r6.s64 = ctx.r8.s64 + -7088;
	// lfs f31,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	f31.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f13,116(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,124(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// lwz r28,112(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r27,116(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 116);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,124(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r30,r31,128
	r30.s64 = r31.s64 + 128;
	// stw r10,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r10.u32);
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
	// stw r27,132(r31)
	REX_STORE_U32(r31.u32 + 132, r27.u32);
	// stw r28,128(r31)
	REX_STORE_U32(r31.u32 + 128, r28.u32);
	// bl 0x821f7d50
	ctx.lr = 0x82194FD8;
	sub_821F7D50(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82194ffc
	if (ctx.cr0.eq) goto loc_82194FFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,188(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 188);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82198320
	ctx.lr = 0x82194FF8;
	sub_82198320(ctx, base);
	// b 0x82195000
	goto loc_82195000;
loc_82194FFC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82195000:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stb r29,244(r11)
	REX_STORE_U8(ctx.r11.u32 + 244, r29.u8);
	// lwz r30,88(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 88);
	// bl 0x82187b58
	ctx.lr = 0x8219501C;
	sub_82187B58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82188318
	ctx.lr = 0x82195024;
	sub_82188318(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lfs f29,15632(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15632);
	f29.f64 = double(temp.f32);
	// lfs f0,15628(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15628);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lfs f13,16172(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16172);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lfs f12,16036(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16036);
	ctx.f12.f64 = double(temp.f32);
	// li r4,19
	ctx.r4.s64 = 19;
	// lfs f11,16032(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16032);
	ctx.f11.f64 = double(temp.f32);
	// lfs f30,1996(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1996);
	f30.f64 = double(temp.f32);
	// stfs f29,176(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x821918a0
	ctx.lr = 0x8219508C;
	sub_821918A0(ctx, base);
	// li r3,101
	ctx.r3.s64 = 101;
	// bl 0x82191bb0
	ctx.lr = 0x82195094;
	sub_82191BB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f29,112(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f0,3900(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3900);
	ctx.f0.f64 = double(temp.f32);
	// li r4,81
	ctx.r4.s64 = 81;
	// lfs f13,28344(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28344);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lfs f27,2344(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2344);
	f27.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f27,100(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x821918a0
	ctx.lr = 0x821950E8;
	sub_821918A0(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82191bb0
	ctx.lr = 0x821950F0;
	sub_82191BB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r30,-32165
	r30.s64 = -2107965440;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f28,-10576(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -10576);
	f28.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,3896(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3896);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f28,80(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-32480(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// bl 0x821f7d50
	ctx.lr = 0x82195134;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82195150
	if (ctx.cr0.eq) goto loc_82195150;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82195440
	ctx.lr = 0x8219514C;
	sub_82195440(ctx, base);
	// b 0x82195154
	goto loc_82195154;
loc_82195150:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82195154:
	// stw r3,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82199a88
	ctx.lr = 0x82195160;
	sub_82199A88(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82191bb0
	ctx.lr = 0x82195168;
	sub_82191BB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-32480(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// lfs f0,3892(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3892);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821951A0;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821951bc
	if (ctx.cr0.eq) goto loc_821951BC;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82195440
	ctx.lr = 0x821951B8;
	sub_82195440(ctx, base);
	// b 0x821951c0
	goto loc_821951C0;
loc_821951BC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_821951C0:
	// stw r3,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82199a88
	ctx.lr = 0x821951CC;
	sub_82199A88(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82191bb0
	ctx.lr = 0x821951D4;
	sub_82191BB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f27,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-32480(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// lfs f27,-24536(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24536);
	f27.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f27,84(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x8219520C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82195228
	if (ctx.cr0.eq) goto loc_82195228;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82195440
	ctx.lr = 0x82195224;
	sub_82195440(ctx, base);
	// b 0x8219522c
	goto loc_8219522C;
loc_82195228:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8219522C:
	// stw r3,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82199a88
	ctx.lr = 0x82195238;
	sub_82199A88(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82191bb0
	ctx.lr = 0x82195240;
	sub_82191BB0(ctx, base);
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f27,84(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-32480(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x82195270;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219528c
	if (ctx.cr0.eq) goto loc_8219528C;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82195440
	ctx.lr = 0x82195288;
	sub_82195440(ctx, base);
	// b 0x82195290
	goto loc_82195290;
loc_8219528C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82195290:
	// stw r3,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82199a88
	ctx.lr = 0x8219529C;
	sub_82199A88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r30,243
	r30.s64 = 243;
	// lfs f26,2384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	f26.f64 = double(temp.f32);
	// lfs f27,2332(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2332);
	f27.f64 = double(temp.f32);
	// lfs f28,28284(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28284);
	f28.f64 = double(temp.f32);
loc_821952B8:
	// li r3,101
	ctx.r3.s64 = 101;
	// bl 0x82191bb0
	ctx.lr = 0x821952C0;
	sub_82191BB0(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// stfs f1,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// std r11,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r11.u64);
	// stfs f29,128(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f28,160(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// li r4,84
	ctx.r4.s64 = 84;
	// stfs f27,164(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stfs f30,168(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lfd f0,224(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x821918a0
	ctx.lr = 0x8219530C;
	sub_821918A0(ctx, base);
	// addi r30,r30,37
	r30.s64 = r30.s64 + 37;
	// cmpwi cr6,r30,613
	ctx.cr6.compare<int32_t>(r30.s32, 613, ctx.xer);
	// blt cr6,0x821952b8
	if (ctx.cr6.lt) goto loc_821952B8;
	// li r3,101
	ctx.r3.s64 = 101;
	// bl 0x82191bb0
	ctx.lr = 0x82195320;
	sub_82191BB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f1.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f29,208(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// stfs f30,200(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lfs f0,3888(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3888);
	ctx.f0.f64 = double(temp.f32);
	// li r4,85
	ctx.r4.s64 = 85;
	// lfs f13,3884(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3884);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lfs f12,27596(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 27596);
	ctx.f12.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f12,196(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f11,216(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// bl 0x821918a0
	ctx.lr = 0x82195374;
	sub_821918A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stb r28,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, r28.u8);
	// bl 0x8212bc38
	ctx.lr = 0x82195390;
	sub_8212BC38(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,176(r31)
	REX_STORE_U32(r31.u32 + 176, r28.u32);
	// stw r11,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r11.u32);
	// bl 0x82187b58
	ctx.lr = 0x821953A0;
	sub_82187B58(ctx, base);
	// bl 0x82188800
	ctx.lr = 0x821953A4;
	sub_82188800(ctx, base);
	// addi r31,r31,80
	r31.s64 = r31.s64 + 80;
	// bl 0x82187b58
	ctx.lr = 0x821953AC;
	sub_82187B58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82188070
	ctx.lr = 0x821953B4;
	sub_82188070(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f7c
	ctx.lr = 0x821953C0;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821A7A20) {
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
	// li r31,-1
	r31.s64 = -1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x821a7a70
	if (!ctx.cr6.lt) goto loc_821A7A70;
	// subfic r31,r4,1
	ctx.xer.ca = ctx.r4.u32 <= 1;
	r31.u64 = static_cast<uint64_t>(1) - ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a7b94
	if (ctx.cr6.eq) goto loc_821A7B94;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r10,r11,5880
	ctx.r10.s64 = ctx.r11.s64 + 5880;
	// lwz r11,5880(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 5880);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x821a7ab0
	goto loc_821A7AB0;
loc_821A7A70:
	// cmpwi cr6,r4,256
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 256, ctx.xer);
	// blt cr6,0x821a7ab8
	if (ctx.cr6.lt) goto loc_821A7AB8;
	// addi r11,r4,-256
	ctx.r11.s64 = ctx.r4.s64 + -256;
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r9,5880
	ctx.r11.s64 = ctx.r9.s64 + 5880;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x821a7b94
	if (ctx.cr6.eq) goto loc_821A7B94;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_821A7AB0:
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x821a7b94
	goto loc_821A7B94;
loc_821A7AB8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a7ad4
	if (ctx.cr6.eq) goto loc_821A7AD4;
	// lfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// b 0x821a7af4
	goto loc_821A7AF4;
loc_821A7AD4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,7340(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 7340);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16204(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16204);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2008(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2008);
	ctx.f12.f64 = double(temp.f32);
loc_821A7AF4:
	// cmpwi cr6,r4,192
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 192, ctx.xer);
	// blt cr6,0x821a7b54
	if (ctx.cr6.lt) goto loc_821A7B54;
	// cmpwi cr6,r4,193
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 193, ctx.xer);
	// ble cr6,0x821a7b2c
	if (!ctx.cr6.gt) goto loc_821A7B2C;
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// bne cr6,0x821a7b54
	if (!ctx.cr6.eq) goto loc_821A7B54;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821a7b7c
	if (ctx.cr6.eq) goto loc_821A7B7C;
	// lha r11,88(r6)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r6.u32 + 88));
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// addi r10,r10,14256
	ctx.r10.s64 = ctx.r10.s64 + 14256;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821a7b7c
	goto loc_821A7B7C;
loc_821A7B2C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a7b4c
	if (ctx.cr6.eq) goto loc_821A7B4C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
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
loc_821A7B4C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x821a7b98
	goto loc_821A7B98;
loc_821A7B54:
	// cmpwi cr6,r4,193
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 193, ctx.xer);
	// bge cr6,0x821a7b7c
	if (!ctx.cr6.lt) goto loc_821A7B7C;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f11,16220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16220);
	ctx.f11.f64 = double(temp.f32);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f1,f10,f11
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
loc_821A7B7C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a7b94
	if (ctx.cr6.eq) goto loc_821A7B94;
	// fmr f4,f12
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f12.f64;
	// fmr f3,f13
	ctx.f3.f64 = ctx.f13.f64;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// bl 0x822028c8
	ctx.lr = 0x821A7B94;
	sub_822028C8(ctx, base);
loc_821A7B94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_821A7B98:
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

DEFINE_REX_FUNC(sub_821AFD98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-9960(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -9960);
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

DEFINE_REX_FUNC(sub_821B0738) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r30,-32480(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r31,r30,80
	r31.s64 = r30.s64 + 80;
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 132);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821b07c8
	if (ctx.cr6.lt) goto loc_821B07C8;
	// beq cr6,0x821b07e0
	if (ctx.cr6.eq) goto loc_821B07E0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821b07b0
	if (ctx.cr6.lt) goto loc_821B07B0;
	// bne cr6,0x821b0840
	if (!ctx.cr6.eq) goto loc_821B0840;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b0788
	if (ctx.cr6.eq) goto loc_821B0788;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B0788;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B0788:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x821b0660
	ctx.lr = 0x821B0794;
	sub_821B0660(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b07a8
	if (ctx.cr6.eq) goto loc_821B07A8;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821B07A8:
	// sth r10,40(r30)
	REX_STORE_U16(r30.u32 + 40, ctx.r10.u16);
	// b 0x821b0840
	goto loc_821B0840;
loc_821B07B0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821b0840
	if (!ctx.cr6.gt) goto loc_821B0840;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821b083c
	goto loc_821B083C;
loc_821B07C8:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b0840
	if (ctx.cr6.eq) goto loc_821B0840;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
loc_821B07E0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b0804
	if (ctx.cr6.eq) goto loc_821B0804;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821B0804:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,40(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x821f7aa0
	ctx.lr = 0x821B0838;
	sub_821F7AA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
loc_821B083C:
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
loc_821B0840:
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

DEFINE_REX_FUNC(sub_821B6B38) {
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
	ctx.lr = 0x821B6B40;
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
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r11,4369
	ctx.r11.s64 = 4369;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// stw r11,1768(r10)
	REX_STORE_U32(ctx.r10.u32 + 1768, ctx.r11.u32);
	// bl 0x821dbe10
	ctx.lr = 0x821B6B64;
	sub_821DBE10(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r27,0
	r27.s64 = 0;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lfs f29,-8488(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8488);
	f29.f64 = double(temp.f32);
	// lfs f30,9924(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 9924);
	f30.f64 = double(temp.f32);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// lfs f31,30140(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 30140);
	f31.f64 = double(temp.f32);
	// ori r29,r6,3696
	r29.u64 = ctx.r6.u64 | 3696;
	// addi r28,r10,-7072
	r28.s64 = ctx.r10.s64 + -7072;
loc_821B6B94:
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// add r31,r10,r28
	r31.u64 = ctx.r10.u64 + r28.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stbx r9,r10,r28
	REX_STORE_U8(ctx.r10.u32 + r28.u32, ctx.r9.u8);
	// stb r30,1(r31)
	REX_STORE_U8(r31.u32 + 1, r30.u8);
	// stb r9,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// bne cr6,0x821b6bc0
	if (!ctx.cr6.eq) goto loc_821B6BC0;
	// stfs f31,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// b 0x821b6bc4
	goto loc_821B6BC4;
loc_821B6BC0:
	// stfs f30,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
loc_821B6BC4:
	// stfs f29,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x821b6bdc
	if (ctx.cr6.gt) goto loc_821B6BDC;
	// subfic r11,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// stb r11,136(r31)
	REX_STORE_U8(r31.u32 + 136, ctx.r11.u8);
	// b 0x821b6be0
	goto loc_821B6BE0;
loc_821B6BDC:
	// stb r27,136(r31)
	REX_STORE_U8(r31.u32 + 136, r27.u8);
loc_821B6BE0:
	// lbz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 136);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x821c5168
	ctx.lr = 0x821B6C00;
	sub_821C5168(ctx, base);
	// addi r11,r31,20028
	ctx.r11.s64 = r31.s64 + 20028;
	// stw r3,872(r31)
	REX_STORE_U32(r31.u32 + 872, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,10152(r31)
	REX_STORE_U32(r31.u32 + 10152, ctx.r11.u32);
	// stw r27,10140(r31)
	REX_STORE_U32(r31.u32 + 10140, r27.u32);
	// stw r11,10148(r31)
	REX_STORE_U32(r31.u32 + 10148, ctx.r11.u32);
	// bl 0x821c7108
	ctx.lr = 0x821B6C1C;
	sub_821C7108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c7140
	ctx.lr = 0x821B6C24;
	sub_821C7140(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c78c0
	ctx.lr = 0x821B6C30;
	sub_821C78C0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// blt cr6,0x821b6b94
	if (ctx.cr6.lt) goto loc_821B6B94;
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

DEFINE_REX_FUNC(sub_821BF1E8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// beq cr6,0x821bf214
	if (ctx.cr6.eq) goto loc_821BF214;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ff870
	ctx.lr = 0x821BF214;
	sub_821FF870(ctx, base);
loc_821BF214:
	// ld r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BF388) {
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
	// mulli r11,r4,896
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(896));
	// fmr f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mulli r10,r4,328
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(328));
	// addi r8,r11,7224
	ctx.r8.s64 = ctx.r11.s64 + 7224;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r9,r11,9120
	ctx.r9.s64 = ctx.r11.s64 + 9120;
	// bl 0x821bee40
	ctx.lr = 0x821BF3BC;
	sub_821BEE40(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821bf3f4
	if (!ctx.cr6.eq) goto loc_821BF3F4;
	// lfs f0,16(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x821bf3f4
	if (ctx.cr6.gt) goto loc_821BF3F4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_821BF3F4:
	// addi r11,r9,138
	ctx.r11.s64 = ctx.r9.s64 + 138;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// li r6,2
	ctx.r6.s64 = 2;
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_821BF408:
	// sth r7,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// stfs f12,18(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 18, temp.u32);
	// stw r10,6(r11)
	REX_STORE_U32(ctx.r11.u32 + 6, ctx.r10.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// lfs f13,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,22(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 22, temp.u32);
	// blt cr6,0x821bf468
	if (ctx.cr6.lt) goto loc_821BF468;
	// beq cr6,0x821bf460
	if (ctx.cr6.eq) goto loc_821BF460;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x821bf440
	if (ctx.cr6.lt) goto loc_821BF440;
	// bne cr6,0x821bf46c
	if (!ctx.cr6.eq) goto loc_821BF46C;
	// stfs f2,14(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 14, temp.u32);
	// b 0x821bf46c
	goto loc_821BF46C;
loc_821BF440:
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// stfs f13,10(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 10, temp.u32);
	// b 0x821bf46c
	goto loc_821BF46C;
loc_821BF460:
	// stfs f12,2(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 2, temp.u32);
	// b 0x821bf46c
	goto loc_821BF46C;
loc_821BF468:
	// stfs f0,2(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 2, temp.u32);
loc_821BF46C:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r11,r11,164
	ctx.r11.s64 = ctx.r11.s64 + 164;
	// bne 0x821bf408
	if (!ctx.cr0.eq) goto loc_821BF408;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C2E38) {
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
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// li r6,4
	ctx.r6.s64 = 4;
	// sth r11,92(r3)
	REX_STORE_U16(ctx.r3.u32 + 92, ctx.r11.u16);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// sth r11,90(r3)
	REX_STORE_U16(ctx.r3.u32 + 90, ctx.r11.u16);
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821be318
	ctx.lr = 0x821C2E68;
	sub_821BE318(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821be318
	ctx.lr = 0x821C2E7C;
	sub_821BE318(ctx, base);
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

DEFINE_REX_FUNC(sub_821C3EE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r10,-9504
	ctx.r10.s64 = ctx.r10.s64 + -9504;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,163(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 163);
	// lfs f0,10596(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10596);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,10484(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10484);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f12,10484(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 10484, temp.u32);
	// lfs f13,10604(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10604);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,10492(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10492);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f11,10492(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 10492, temp.u32);
	// lfs f12,2336(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2336);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,10596(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10596, temp.u32);
	// fmuls f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f0,10604(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10604, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C5478) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x821c5420
	ctx.lr = 0x821C549C;
	sub_821C5420(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
loc_821C54A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// beq 0x821c54c4
	if (ctx.cr0.eq) goto loc_821C54C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821c54a0
	if (ctx.cr6.eq) goto loc_821C54A0;
loc_821C54C4:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
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

DEFINE_REX_FUNC(sub_821C5D70) {
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
	// lwz r11,6192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6192);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c5ddc
	if (ctx.cr6.eq) goto loc_821C5DDC;
	// lwz r11,6220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c5ddc
	if (ctx.cr6.eq) goto loc_821C5DDC;
	// ld r11,15896(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 15896);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r3,12320
	ctx.r3.s64 = ctx.r3.s64 + 12320;
	// clrldi r11,r11,63
	ctx.r11.u64 = ctx.r11.u64 & 0x1;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x821c5dc0
	if (ctx.cr6.eq) goto loc_821C5DC0;
	// lfs f13,3444(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 3444);
	ctx.f13.f64 = double(temp.f32);
	// b 0x821c5dc4
	goto loc_821C5DC4;
loc_821C5DC0:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_821C5DC4:
	// lfs f12,10172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10172);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f1,f13,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821c5de8
	if (!ctx.cr6.lt) goto loc_821C5DE8;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x821c5de8
	goto loc_821C5DE8;
loc_821C5DDC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,12320
	ctx.r3.s64 = r31.s64 + 12320;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
loc_821C5DE8:
	// bl 0x821c2598
	ctx.lr = 0x821C5DEC;
	sub_821C2598(ctx, base);
	// lwz r11,10152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10152);
	// stw r11,15904(r31)
	REX_STORE_U32(r31.u32 + 15904, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821C8138) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,19
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 19, ctx.xer);
	// beq cr6,0x821c814c
	if (ctx.cr6.eq) goto loc_821C814C;
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_821C814C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C87E8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,300(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c89cc
	if (ctx.cr6.eq) goto loc_821C89CC;
	// lha r11,14(r4)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r4.u32 + 14));
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r11,r10,-11856
	ctx.r11.s64 = ctx.r10.s64 + -11856;
	// lha r9,8(r4)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r4.u32 + 8));
	// lhz r8,52(r4)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// rlwinm r10,r8,3,25,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x78;
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821c8864
	if (!ctx.cr6.lt) goto loc_821C8864;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821C8864:
	// lha r11,38(r4)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r4.u32 + 38));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821c8884
	if (!ctx.cr6.lt) goto loc_821C8884;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821C8884:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,2344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2344);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,-8500(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8500);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821c88a4
	if (!ctx.cr6.lt) goto loc_821C88A4;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_821C88A4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lfs f0,-30112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,16264(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16264);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f31,f0
	f30.f64 = double(float(f31.f64 * ctx.f0.f64));
	// bl 0x821bf1e8
	ctx.lr = 0x821C88C4;
	sub_821BF1E8(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rlwinm. r10,r11,0,5,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821c88d8
	if (ctx.cr0.eq) goto loc_821C88D8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821c8940
	goto loc_821C8940;
loc_821C88D8:
	// andis. r10,r11,336
	ctx.r10.u64 = ctx.r11.u64 & 22020096;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821c88fc
	if (ctx.cr0.eq) goto loc_821C88FC;
	// rlwinm r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,23
	ctx.r11.s64 = ctx.r11.s64 + 23;
	// b 0x821c8940
	goto loc_821C8940;
loc_821C88FC:
	// lis r12,6
	ctx.r12.s64 = 393216;
	// ori r12,r12,61632
	ctx.r12.u64 = ctx.r12.u64 | 61632;
	// and. r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821c892c
	if (ctx.cr0.eq) goto loc_821C892C;
	// lis r12,2
	ctx.r12.s64 = 131072;
	// ori r12,r12,20544
	ctx.r12.u64 = ctx.r12.u64 | 20544;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 + 21;
	// b 0x821c8940
	goto loc_821C8940;
loc_821C892C:
	// andi. r11,r11,1296
	ctx.r11.u64 = ctx.r11.u64 & 1296;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
loc_821C8940:
	// lwz r10,10140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10140);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32170
	ctx.r8.s64 = -2108293120;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// li r4,2
	ctx.r4.s64 = 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r3,29428(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 29428);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r10,r11,20028
	ctx.r10.s64 = ctx.r11.s64 + 20028;
	// lfs f13,20076(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20076);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,20080(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20080);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,20084(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20084);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8211eba8
	ctx.lr = 0x821C898C;
	sub_8211EBA8(ctx, base);
	// lwz r11,5792(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5792);
	// lfs f0,10312(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10312);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmr f4,f30
	ctx.f4.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// fadds f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f5,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f5.f64 = double(temp.f32);
	// beq cr6,0x821c89c8
	if (ctx.cr6.eq) goto loc_821C89C8;
	// bl 0x8211e0c0
	ctx.lr = 0x821C89C4;
	sub_8211E0C0(ctx, base);
	// b 0x821c89cc
	goto loc_821C89CC;
loc_821C89C8:
	// bl 0x8211dfe0
	ctx.lr = 0x821C89CC;
	sub_8211DFE0(ctx, base);
loc_821C89CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_821D2DC8) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r31,-32480(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821b0030
	ctx.lr = 0x821D2DE8;
	sub_821B0030(ctx, base);
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// addi r6,r8,13212
	ctx.r6.s64 = ctx.r8.s64 + 13212;
	// addi r9,r11,13768
	ctx.r9.s64 = ctx.r11.s64 + 13768;
	// addi r8,r10,17752
	ctx.r8.s64 = ctx.r10.s64 + 17752;
	// addi r7,r7,13616
	ctx.r7.s64 = ctx.r7.s64 + 13616;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821D2E1C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d2e30
	if (ctx.cr0.eq) goto loc_821D2E30;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_821D2E30:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x821D2E44;
	sub_821D6210(ctx, base);
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

DEFINE_REX_FUNC(sub_821D4FE8) {
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
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r31,r11,-7176
	r31.s64 = ctx.r11.s64 + -7176;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821d5124
	if (ctx.cr6.lt) goto loc_821D5124;
	// beq cr6,0x821d5040
	if (ctx.cr6.eq) goto loc_821D5040;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821d5038
	if (ctx.cr6.lt) goto loc_821D5038;
	// beq cr6,0x821d5124
	if (ctx.cr6.eq) goto loc_821D5124;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x821d5050
	if (!ctx.cr6.lt) goto loc_821D5050;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,40
	ctx.r10.s64 = 40;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// b 0x821d5048
	goto loc_821D5048;
loc_821D5038:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x821d5044
	goto loc_821D5044;
loc_821D5040:
	// li r11,5
	ctx.r11.s64 = 5;
loc_821D5044:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_821D5048:
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x821d4528
	ctx.lr = 0x821D5050;
	sub_821D4528(ctx, base);
loc_821D5050:
	// bl 0x8212c010
	ctx.lr = 0x821D5054;
	sub_8212C010(ctx, base);
	// bl 0x82187b58
	ctx.lr = 0x821D5058;
	sub_82187B58(ctx, base);
	// bl 0x82188648
	ctx.lr = 0x821D505C;
	sub_82188648(ctx, base);
	// bl 0x82191ce0
	ctx.lr = 0x821D5060;
	sub_82191CE0(ctx, base);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// stb r11,2968(r10)
	REX_STORE_U8(ctx.r10.u32 + 2968, ctx.r11.u8);
	// bl 0x82187b58
	ctx.lr = 0x821D5074;
	sub_82187B58(ctx, base);
	// bl 0x82187ca0
	ctx.lr = 0x821D5078;
	sub_82187CA0(ctx, base);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r5,-8896
	ctx.r4.s64 = ctx.r5.s64 + -8896;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r10.u32);
	// stw r9,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// stw r7,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// stw r6,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// stw r11,-8896(r5)
	REX_STORE_U32(ctx.r5.u32 + -8896, ctx.r11.u32);
	// bl 0x821d17c8
	ctx.lr = 0x821D50C0;
	sub_821D17C8(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r7,r11,7856
	ctx.r7.s64 = ctx.r11.s64 + 7856;
	// addi r6,r10,13128
	ctx.r6.s64 = ctx.r10.s64 + 13128;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r11,1545(r7)
	REX_STORE_U8(ctx.r7.u32 + 1545, ctx.r11.u8);
	// stb r10,1544(r7)
	REX_STORE_U8(ctx.r7.u32 + 1544, ctx.r10.u8);
	// stb r9,16665(r7)
	REX_STORE_U8(ctx.r7.u32 + 16665, ctx.r9.u8);
	// stb r8,16664(r7)
	REX_STORE_U8(ctx.r7.u32 + 16664, ctx.r8.u8);
	// stb r11,1813(r6)
	REX_STORE_U8(ctx.r6.u32 + 1813, ctx.r11.u8);
	// bl 0x8210ddb8
	ctx.lr = 0x821D50F8;
	sub_8210DDB8(ctx, base);
	// bl 0x82100c80
	ctx.lr = 0x821D50FC;
	sub_82100C80(ctx, base);
	// bl 0x820f2628
	ctx.lr = 0x821D5100;
	sub_820F2628(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8229a710
	ctx.lr = 0x821D5108;
	sub_8229A710(ctx, base);
	// li r11,-2
	ctx.r11.s64 = -2;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// bl 0x821d17f8
	ctx.lr = 0x821D5114;
	sub_821D17F8(ctx, base);
	// bl 0x821d4b60
	ctx.lr = 0x821D5118;
	sub_821D4B60(ctx, base);
	// bl 0x821d1ec0
	ctx.lr = 0x821D511C;
	sub_821D1EC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821d5128
	goto loc_821D5128;
loc_821D5124:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D5128:
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

DEFINE_REX_FUNC(sub_821D8EB8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// bne cr6,0x821d8ed0
	if (!ctx.cr6.eq) goto loc_821D8ED0;
	// lha r11,32(r10)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 32));
loc_821D8ED0:
	// addi r10,r10,2440
	ctx.r10.s64 = ctx.r10.s64 + 2440;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lwz r10,17780(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 17780);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lwz r10,17784(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 17784);
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// lwz r10,17792(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 17792);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821d8f08
	if (ctx.cr6.eq) goto loc_821D8F08;
	// li r10,99
	ctx.r10.s64 = 99;
	// b 0x821d8f2c
	goto loc_821D8F2C;
loc_821D8F08:
	// lwz r10,17788(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 17788);
	// lwz r8,17772(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 17772);
	// mulli r10,r10,100
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(100));
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r8
	ctx.r10.u64 = uint32_t((ctx.r8.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r10.s32 / ctx.r8.s32 : 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
loc_821D8F2C:
	// stb r10,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DCD10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// li r10,78
	ctx.r10.s64 = 78;
	// addi r11,r11,5048
	ctx.r11.s64 = ctx.r11.s64 + 5048;
	// addi r8,r9,5128
	ctx.r8.s64 = ctx.r9.s64 + 5128;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821DCD30:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// clrlwi r8,r10,30
	ctx.r8.u64 = ctx.r10.u32 & 0x3;
	// rlwinm r7,r10,30,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// rlwinm r6,r10,28,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// stb r8,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// rlwinm r10,r10,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// stb r7,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// stb r6,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
	// stbu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x821dcd30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DCD30;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DD680) {
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
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x821dd6dc
	if (ctx.cr6.eq) goto loc_821DD6DC;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x821dd6c0
	if (ctx.cr6.eq) goto loc_821DD6C0;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beq cr6,0x821dd6b8
	if (ctx.cr6.eq) goto loc_821DD6B8;
	// cmpwi cr6,r3,15
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 15, ctx.xer);
	// bne cr6,0x821dd6fc
	if (!ctx.cr6.eq) goto loc_821DD6FC;
	// li r3,3
	ctx.r3.s64 = 3;
loc_821DD6B0:
	// bl 0x821dd5d8
	ctx.lr = 0x821DD6B4;
	sub_821DD5D8(ctx, base);
	// b 0x821dd720
	goto loc_821DD720;
loc_821DD6B8:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x821dd6b0
	goto loc_821DD6B0;
loc_821DD6C0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x821dd6fc
	if (ctx.cr6.eq) goto loc_821DD6FC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x821dd6fc
	if (!ctx.cr6.eq) goto loc_821DD6FC;
	// li r4,69
	ctx.r4.s64 = 69;
	// li r3,67
	ctx.r3.s64 = 67;
	// b 0x821dd6f4
	goto loc_821DD6F4;
loc_821DD6DC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x821dd6fc
	if (ctx.cr6.eq) goto loc_821DD6FC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x821dd6fc
	if (!ctx.cr6.eq) goto loc_821DD6FC;
	// li r4,66
	ctx.r4.s64 = 66;
	// li r3,64
	ctx.r3.s64 = 64;
loc_821DD6F4:
	// bl 0x821dd560
	ctx.lr = 0x821DD6F8;
	sub_821DD560(ctx, base);
	// b 0x821dd720
	goto loc_821DD720;
loc_821DD6FC:
	// bl 0x821dd358
	ctx.lr = 0x821DD700;
	sub_821DD358(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821dd710
	if (!ctx.cr6.eq) goto loc_821DD710;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x821dd720
	goto loc_821DD720;
loc_821DD710:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,5128
	ctx.r11.s64 = ctx.r11.s64 + 5128;
	// lbzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
loc_821DD720:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E0C20) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-5420(r10)
	REX_STORE_U32(ctx.r10.u32 + -5420, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E0EA8) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,5492
	r31.s64 = ctx.r11.s64 + 5492;
	// ld r3,108(r31)
	ctx.r3.u64 = REX_LOAD_U64(r31.u32 + 108);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x821e0ed4
	if (ctx.cr6.eq) goto loc_821E0ED4;
	// bl 0x821f7908
	ctx.lr = 0x821E0ED4;
	sub_821F7908(ctx, base);
loc_821E0ED4:
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r9,r11,31432
	ctx.r9.s64 = ctx.r11.s64 + 31432;
	// addi r10,r10,-8304
	ctx.r10.s64 = ctx.r10.s64 + -8304;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r4,108(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 108);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r3,104(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// addi r8,r31,108
	ctx.r8.s64 = r31.s64 + 108;
	// lwz r6,772(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 772);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r7,r11,2540
	ctx.r7.s64 = ctx.r11.s64 + 2540;
	// stw r30,2548(r11)
	REX_STORE_U32(ctx.r11.u32 + 2548, r30.u32);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x821f7aa0
	ctx.lr = 0x821E0F2C;
	sub_821F7AA0(ctx, base);
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

DEFINE_REX_FUNC(sub_821E21F8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r10,2971(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2971);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e221c
	if (!ctx.cr0.eq) goto loc_821E221C;
	// lbz r11,2973(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2973);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_821E221C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E24E8) {
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
	// bne 0x821e2578
	if (!ctx.cr0.eq) goto loc_821E2578;
	// lbz r10,2973(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2973);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e2578
	if (!ctx.cr0.eq) goto loc_821E2578;
	// lhz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x821e2578
	if (!ctx.cr6.eq) goto loc_821E2578;
	// lha r10,30(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x821e2528
	if (ctx.cr6.lt) goto loc_821E2528;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// ble cr6,0x821e2578
	if (!ctx.cr6.gt) goto loc_821E2578;
loc_821E2528:
	// lbz r10,6(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e2578
	if (!ctx.cr0.eq) goto loc_821E2578;
	// lbz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lwz r11,2980(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2980);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821e2578
	if (!ctx.cr6.eq) goto loc_821E2578;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r9,r11,5608
	ctx.r9.s64 = ctx.r11.s64 + 5608;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r11,28(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// stw r11,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r11.u32);
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
loc_821E2578:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E4A48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r5,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r5.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,770
	ctx.r8.s64 = 770;
	// li r7,0
	ctx.r7.s64 = 0;
	// std r11,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, ctx.r11.u64);
	// lfs f13,16088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16088);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 + 112;
	// lfs f0,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r9,r3,192
	ctx.r9.s64 = ctx.r3.s64 + 192;
	// stw r10,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stfs f13,120(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// sth r8,16(r3)
	REX_STORE_U16(ctx.r3.u32 + 16, ctx.r8.u16);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stw r7,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// sth r11,88(r3)
	REX_STORE_U16(ctx.r3.u32 + 88, ctx.r11.u16);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stb r6,90(r3)
	REX_STORE_U8(ctx.r3.u32 + 90, ctx.r6.u8);
	// stw r9,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// li r10,36
	ctx.r10.s64 = 36;
	// stb r5,104(r3)
	REX_STORE_U8(ctx.r3.u32 + 104, ctx.r5.u8);
	// bne cr6,0x821e4ac0
	if (!ctx.cr6.eq) goto loc_821E4AC0;
	// li r10,20
	ctx.r10.s64 = 20;
loc_821E4AC0:
	// stb r11,188(r3)
	REX_STORE_U8(ctx.r3.u32 + 188, ctx.r11.u8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stw r4,256(r3)
	REX_STORE_U32(ctx.r3.u32 + 256, ctx.r4.u32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stb r10,186(r3)
	REX_STORE_U8(ctx.r3.u32 + 186, ctx.r10.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f0,-11776(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11776);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// b 0x821e3700
	sub_821E3700(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E7EE8) {
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
	ctx.lr = 0x821E7EF0;
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r25,r11,-32032
	r25.s64 = ctx.r11.s64 + -32032;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r25,332
	ctx.r3.s64 = r25.s64 + 332;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// bl 0x821f1818
	ctx.lr = 0x821E7F2C;
	sub_821F1818(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r24,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bne cr6,0x821e7fc8
	if (!ctx.cr6.eq) goto loc_821E7FC8;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lfs f0,-31056(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -31056);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r28,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r28.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r27,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r27.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r26,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r26.u32);
	// lfs f13,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x821e80ac
	goto loc_821E80AC;
loc_821E7FC8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(f31.f64, ctx.f13.f64);
	// ble cr6,0x821e8050
	if (!ctx.cr6.gt) goto loc_821E8050;
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 / f31.f64));
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f11,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stw r28,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r28.u32);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f10,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f10,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stw r27,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r27.u32);
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f0,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f0,-31056(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -31056);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,36(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f11,40(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// b 0x821e80a8
	goto loc_821E80A8;
loc_821E8050:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// fneg f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = f31.u64 ^ 0x8000000000000000;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r28,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r28.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r27,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r27.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
loc_821E80A8:
	// stw r26,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r26.u32);
loc_821E80AC:
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// addi r3,r25,332
	ctx.r3.s64 = r25.s64 + 332;
	// bl 0x821f1840
	ctx.lr = 0x821E80B8;
	sub_821F1840(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_821F0998) {
	REX_FUNC_PROLOGUE();
	// lwz r11,3144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3144);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x821f09ac
	if (ctx.cr6.lt) goto loc_821F09AC;
	// li r11,63
	ctx.r11.s64 = 63;
	// stw r11,3144(r3)
	REX_STORE_U32(ctx.r3.u32 + 3144, ctx.r11.u32);
loc_821F09AC:
	// lwz r11,3144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3144);
	// clrldi r9,r4,32
	ctx.r9.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r7,3144(r3)
	REX_STORE_U32(ctx.r3.u32 + 3144, ctx.r7.u32);
	// stdx r9,r10,r3
	REX_STORE_U64(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u64);
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stb r6,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r6.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F1818) {
	REX_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,32916
	ctx.r11.u64 = ctx.r11.u64 | 32916;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F1F90) {
	REX_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x822a33c8
	sub_822A33C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F1FC8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F1FD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
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
	// bl 0x822d4f38
	ctx.lr = 0x821F1FE4;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x821f2048
	if (!ctx.cr6.eq) goto loc_821F2048;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bne cr6,0x821f2048
	if (!ctx.cr6.eq) goto loc_821F2048;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16036(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16036);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bne cr6,0x821f2048
	if (!ctx.cr6.eq) goto loc_821F2048;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16032(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16032);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// bne cr6,0x821f2048
	if (!ctx.cr6.eq) goto loc_821F2048;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822a1098
	ctx.lr = 0x821F2044;
	sub_822A1098(ctx, base);
	// b 0x821f2090
	goto loc_821F2090;
loc_821F2048:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822a1098
	ctx.lr = 0x821F2058;
	sub_822A1098(ctx, base);
	// fctiwz f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(f28.f64) ? int64_t(0x80000000U) : (f28.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f28.f64));
	// fctiwz f13,f29
	ctx.f13.s64 = std::isnan(f29.f64) ? int64_t(0x80000000U) : (f29.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f29.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// fctiwz f0,f30
	ctx.f0.s64 = std::isnan(f30.f64) ? int64_t(0x80000000U) : (f30.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f30.f64));
	// fctiwz f13,f31
	ctx.f13.s64 = std::isnan(f31.f64) ? int64_t(0x80000000U) : (f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f31.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822a1550
	ctx.lr = 0x821F2090;
	sub_822A1550(ctx, base);
loc_821F2090:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822d4f84
	ctx.lr = 0x821F209C;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F7908) {
	REX_FUNC_PROLOGUE();
	// rotlwi. r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f7934
	if (ctx.cr0.eq) goto loc_821F7934;
	// clrlwi. r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821f7934
	if (!ctx.cr0.eq) goto loc_821F7934;
	// lhz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,32914
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32914, ctx.xer);
	// bne cr6,0x821f7934
	if (!ctx.cr6.eq) goto loc_821F7934;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// ld r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// cmpld cr6,r10,r3
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r3.u64, ctx.xer);
	// beq cr6,0x821f7938
	if (ctx.cr6.eq) goto loc_821F7938;
loc_821F7934:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F7938:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f7950
	if (ctx.cr6.eq) goto loc_821F7950;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// blr 
	return;
loc_821F7950:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F8520) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821F8528;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-32480
	r30.s64 = ctx.r11.s64 + -32480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x821F8548;
	sub_822D4FA0(ctx, base);
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x821f858c
	if (!ctx.cr6.eq) goto loc_821F858C;
	// lha r11,64(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 64));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821f856c
	if (!ctx.cr0.gt) goto loc_821F856C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f8128
	ctx.lr = 0x821F856C;
	sub_821F8128(ctx, base);
loc_821F856C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,4(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x821f7fd0
	ctx.lr = 0x821F8578;
	sub_821F7FD0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821f858c
	if (!ctx.cr6.eq) goto loc_821F858C;
	// stw r29,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r29.u32);
loc_821F858C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x822d4fa0
	ctx.lr = 0x821F859C;
	sub_822D4FA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821F9F64) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F9F68) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f34
	ctx.lr = 0x821F9F80;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r9,10(r11)
	REX_STORE_U8(ctx.r11.u32 + 10, ctx.r9.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r10,r11,72
	ctx.r10.s64 = ctx.r11.s64 + 72;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
loc_821F9FA8:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821f9fa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F9FA8;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r10,r11,116
	ctx.r10.s64 = ctx.r11.s64 + 116;
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// stw r10,164(r11)
	REX_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// stw r10,168(r11)
	REX_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
	// lwz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// stw r10,172(r11)
	REX_STORE_U32(ctx.r11.u32 + 172, ctx.r10.u32);
	// lwz r10,128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// stw r10,176(r11)
	REX_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lfs f0,112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x821F9FEC;
	sub_821FEEC8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20904(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x82204b00
	ctx.lr = 0x821FA00C;
	sub_82204B00(ctx, base);
	// stfs f1,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// bl 0x820e0028
	ctx.lr = 0x821FA014;
	sub_820E0028(ctx, base);
	// lfs f0,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lfs f0,16256(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16256);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,80(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,36(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x821FA05C;
	sub_821FEDC8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f0,-24832(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24832);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x82204b00
	ctx.lr = 0x821FA074;
	sub_82204B00(ctx, base);
	// stfs f1,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r3,r11,132
	ctx.r3.s64 = ctx.r11.s64 + 132;
	// bl 0x82202d90
	ctx.lr = 0x821FA084;
	sub_82202D90(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stfs f1,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x821FA090;
	sub_821FEDC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x82204b00
	ctx.lr = 0x821FA0A8;
	sub_82204B00(ctx, base);
	// stfs f1,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x821FA0B0;
	sub_821FEEC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f0,26528(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26528);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x82204b00
	ctx.lr = 0x821FA0C8;
	sub_82204B00(ctx, base);
	// stfs f1,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// lfs f0,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x820e0028
	ctx.lr = 0x821FA0DC;
	sub_820E0028(ctx, base);
	// lfs f0,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x820e0028
	ctx.lr = 0x821FA0F0;
	sub_820E0028(ctx, base);
	// lfs f11,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// fmuls f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * f30.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r30,84(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,27848(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 27848);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28444(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28444);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16260(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16260);
	ctx.f12.f64 = double(temp.f32);
	// lfs f2,16264(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,132(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f28,f10,f0,f13
	f28.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f27,f11,f12,f31
	f27.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, f31.f64)));
	// bl 0x82204b00
	ctx.lr = 0x821FA134;
	sub_82204B00(ctx, base);
	// stfs f1,180(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 180, temp.u32);
	// lwz r30,84(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lfs f2,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,136(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f28
	ctx.f1.f64 = double(float(ctx.f0.f64 * f28.f64));
	// bl 0x82204ae0
	ctx.lr = 0x821FA154;
	sub_82204AE0(ctx, base);
	// stfs f1,184(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 184, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lfs f0,140(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// stfs f0,188(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lfs f0,144(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// lfs f1,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x821FA17C;
	sub_820E0028(ctx, base);
	// fadds f12,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f29.f64 + f30.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,160(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lfs f0,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20900(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20900);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,84(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f1
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f1.f64)));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f80
	ctx.lr = 0x821FA1DC;
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

DEFINE_REX_FUNC(sub_822083D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,5
	ctx.r7.s64 = 5;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// li r31,6
	r31.s64 = 6;
	// stwx r4,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r4.u32);
	// stb r7,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// stb r6,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r6.u8);
	// stb r10,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// stb r10,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r7,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stwx r5,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r5.u32);
	// stb r31,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r31.u8);
	// stb r6,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r6.u8);
	// stb r10,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// stb r10,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82209660) {
	REX_FUNC_PROLOGUE();
	// b 0x82208848
	sub_82208848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82209758) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822097c4
	if (ctx.cr6.eq) goto loc_822097C4;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822097c4
	if (ctx.cr6.eq) goto loc_822097C4;
	// andi. r11,r6,144
	ctx.r11.u64 = ctx.r6.u64 & 144;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,144
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 144, ctx.xer);
	// beq cr6,0x822097c4
	if (ctx.cr6.eq) goto loc_822097C4;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822097a0
	if (!ctx.cr6.eq) goto loc_822097A0;
	// rlwinm. r31,r6,0,24,24
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x822097a0
	if (!ctx.cr0.eq) goto loc_822097A0;
	// ori r6,r6,16
	ctx.r6.u64 = ctx.r6.u64 | 16;
loc_822097A0:
	// rlwinm. r11,r11,0,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822097b4
	if (ctx.cr0.eq) goto loc_822097B4;
	// clrlwi r11,r6,28
	ctx.r11.u64 = ctx.r6.u32 & 0xF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x822097c4
	if (!ctx.cr6.eq) goto loc_822097C4;
loc_822097B4:
	// lwz r11,196(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x824d3ffc
	ctx.lr = 0x822097C0;
	__imp__XamContentCreateEx(ctx, base);
	// b 0x822097c8
	goto loc_822097C8;
loc_822097C4:
	// li r3,87
	ctx.r3.s64 = 87;
loc_822097C8:
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

DEFINE_REX_FUNC(sub_8220C390) {
	REX_FUNC_PROLOGUE();
	// b 0x8220a840
	sub_8220A840(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8220C400) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x8220fb80
	ctx.lr = 0x8220C424;
	sub_8220FB80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220c438
	if (ctx.cr0.eq) goto loc_8220C438;
	// bl 0x8220a618
	ctx.lr = 0x8220C430;
	sub_8220A618(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8220c56c
	goto loc_8220C56C;
loc_8220C438:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8220c47c
	if (!ctx.cr6.eq) goto loc_8220C47C;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x822d5870
	ctx.lr = 0x8220C458;
	sub_822D5870(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,168(r31)
	REX_STORE_U32(r31.u32 + 168, r30.u32);
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x822d5870
	ctx.lr = 0x8220C46C;
	sub_822D5870(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822d5870
	ctx.lr = 0x8220C47C;
	sub_822D5870(ctx, base);
loc_8220C47C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824d41dc
	ctx.lr = 0x8220C484;
	__imp__KeQuerySystemTime(ctx, base);
	// lhz r11,70(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 70);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8220c568
	if (ctx.cr0.eq) goto loc_8220C568;
	// lhz r11,154(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 154);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8220c568
	if (ctx.cr0.eq) goto loc_8220C568;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x8220f920
	ctx.lr = 0x8220C4B0;
	sub_8220F920(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220c568
	if (ctx.cr0.eq) goto loc_8220C568;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x8220f920
	ctx.lr = 0x8220C4CC;
	sub_8220F920(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220c568
	if (ctx.cr0.eq) goto loc_8220C568;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r11,152
	ctx.r11.s64 = 9961472;
	// lwz r8,84(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r6,168(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 168);
	// mulli r10,r10,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(60));
	// ld r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// ld r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// ori r11,r11,38528
	ctx.r11.u64 = ctx.r11.u64 | 38528;
	// mulli r8,r8,60
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(60));
	// mulli r6,r6,60
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(60));
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mulld r11,r10,r11
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r11.u64);
	// mulld r8,r8,r4
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r4.u64);
	// mulld r10,r6,r4
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r4.u64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ld r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// bge cr6,0x8220c550
	if (!ctx.cr6.lt) goto loc_8220C550;
	// cmpd cr6,r9,r11
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r11.s64, ctx.xer);
	// blt cr6,0x8220c548
	if (ctx.cr6.lt) goto loc_8220C548;
	// cmpd cr6,r9,r10
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x8220c564
	if (ctx.cr6.lt) goto loc_8220C564;
loc_8220C548:
	// li r30,1
	r30.s64 = 1;
	// b 0x8220c568
	goto loc_8220C568;
loc_8220C550:
	// cmpd cr6,r9,r10
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x8220c564
	if (ctx.cr6.lt) goto loc_8220C564;
	// cmpd cr6,r9,r11
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r11.s64, ctx.xer);
	// li r30,1
	r30.s64 = 1;
	// blt cr6,0x8220c568
	if (ctx.cr6.lt) goto loc_8220C568;
loc_8220C564:
	// li r30,2
	r30.s64 = 2;
loc_8220C568:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8220C56C:
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

DEFINE_REX_FUNC(sub_822116C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,10624(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10624);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211A38) {
	REX_FUNC_PROLOGUE();
	// lwz r3,14000(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 14000);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211D08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// mulli r10,r10,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// lbz r9,10890(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 10890);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// li r8,1
	ctx.r8.s64 = 1;
	// or r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rldicr r31,r8,63,63
	r31.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r6,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwimi r5,r30,31,13,31
	ctx.r5.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFF80000);
	// andc r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// rlwimi r5,r30,31,1,11
	ctx.r5.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FF00000) | (ctx.r5.u64 & 0xFFFFFFFF800FFFFF);
	// clrldi r30,r7,32
	r30.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r7,r5,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 13) & 0xFFF;
	// srd r5,r31,r30
	ctx.r5.u64 = r30.u8 & 0x40 ? 0 : (r31.u64 >> (r30.u8 & 0x7F));
	// and r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 & ctx.r9.u64;
	// addi r9,r11,10890
	ctx.r9.s64 = ctx.r11.s64 + 10890;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwimi r8,r4,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// stb r6,10890(r11)
	REX_STORE_U8(ctx.r11.u32 + 10890, ctx.r6.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 | ctx.r11.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82215110) {
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
	// lwz r31,11036(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 11036);
	// stw r31,11056(r3)
	REX_STORE_U32(ctx.r3.u32 + 11056, r31.u32);
	// bl 0x82215008
	ctx.lr = 0x8221512C;
	sub_82215008(ctx, base);
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

DEFINE_REX_FUNC(sub_82215AB0) {
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
	// bl 0x824d419c
	ctx.lr = 0x82215ACC;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82215ae0
	if (!ctx.cr6.eq) goto loc_82215AE0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1496(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1496);
	// b 0x82215ae8
	goto loc_82215AE8;
loc_82215AE0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1500(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1500);
loc_82215AE8:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,15376
	r31.s64 = ctx.r11.s64 + 15376;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d438c
	ctx.lr = 0x82215AF8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,176(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 176);
	// lwz r3,164(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215B08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d437c
	ctx.lr = 0x82215B10;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

DEFINE_REX_FUNC(sub_82217718) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82217720;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,2309
	ctx.r4.s64 = 2309;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82215248
	ctx.lr = 0x82217734;
	sub_82215248(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,6433
	ctx.r11.u64 = ctx.r11.u64 | 6433;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r6,6439
	ctx.r6.s64 = 6439;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r30,1024
	ctx.r11.s64 = r30.s64 + 1024;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
loc_82217774:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8221779c
	if (ctx.cr6.eq) goto loc_8221779C;
	// lhz r9,-1024(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -1024);
	// lhz r7,-512(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + -512);
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwimi r7,r9,10,6,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x3FF0000) | (ctx.r7.u64 & 0xFFFFFFFFFC00FFFF);
	// rlwinm r9,r6,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r7,r7,4,2,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0x3FFFFC00;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// b 0x822177a0
	goto loc_822177A0;
loc_8221779C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_822177A0:
	// li r7,6437
	ctx.r7.s64 = 6437;
	// lis r6,-16379
	ctx.r6.s64 = -1073414144;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// li r5,7
	ctx.r5.s64 = 7;
	// ori r6,r6,17664
	ctx.r6.u64 = ctx.r6.u64 | 17664;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r29,6434
	r29.s64 = 6434;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bdnz 0x82217774
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82217774;
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8221C6A8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// srawi. r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8221c6c0
	if (ctx.cr0.eq) goto loc_8221C6C0;
	// lis r11,10922
	ctx.r11.s64 = 715784192;
	// ori r11,r11,43690
	ctx.r11.u64 = ctx.r11.u64 | 43690;
	// b 0x8221c6d8
	goto loc_8221C6D8;
loc_8221C6C0:
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221c6d4
	if (ctx.cr0.eq) goto loc_8221C6D4;
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// ori r11,r11,21845
	ctx.r11.u64 = ctx.r11.u64 | 21845;
	// b 0x8221c6d8
	goto loc_8221C6D8;
loc_8221C6D4:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8221C6D8:
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8221c708
	if (ctx.cr0.eq) goto loc_8221C708;
	// lwz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// li r8,3
	ctx.r8.s64 = 3;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// slw r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bne cr6,0x8221c708
	if (!ctx.cr6.eq) goto loc_8221C708;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8221c708
	if (!ctx.cr6.eq) goto loc_8221C708;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
loc_8221C708:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221E738) {
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
	ctx.lr = 0x8221E740;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,48(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r29,r6,-4
	r29.s64 = ctx.r6.s64 + -4;
loc_8221E754:
	// cntlzd r11,r31
	ctx.r11.u64 = r31.u64 == 0 ? 64 : __builtin_clzll(r31.u64);
	// lwz r9,52(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 52);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// sld r31,r31,r8
	r31.u64 = ctx.r8.u8 & 0x40 ? 0 : (r31.u64 << (ctx.r8.u8 & 0x7F));
	// not r8,r31
	ctx.r8.u64 = ~r31.u64;
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
	// cntlzd r30,r8
	r30.u64 = ctx.r8.u64 == 0 ? 64 : __builtin_clzll(ctx.r8.u64);
	// add r28,r11,r5
	r28.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r27,r30,2,0,29
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// add r10,r27,r4
	ctx.r10.u64 = r27.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8221e7bc
	if (ctx.cr6.lt) goto loc_8221E7BC;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8221e0f8
	ctx.lr = 0x8221E7A4;
	sub_8221E0F8(ctx, base);
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r29,r27,r29
	r29.u64 = r27.u64 + r29.u64;
	// add r5,r30,r28
	ctx.r5.u64 = r30.u64 + r28.u64;
	// sld r31,r31,r11
	r31.u64 = ctx.r11.u8 & 0x40 ? 0 : (r31.u64 << (ctx.r11.u8 & 0x7F));
	// b 0x8221e7e4
	goto loc_8221E7E4;
loc_8221E7BC:
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// add r5,r30,r28
	ctx.r5.u64 = r30.u64 + r28.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | r28.u64;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
loc_8221E7D0:
	// lwzu r10,4(r29)
	ea = 4 + r29.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicr r31,r31,1,62
	r31.u64 = __builtin_rotateleft64(r31.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// bne 0x8221e7d0
	if (!ctx.cr0.eq) goto loc_8221E7D0;
loc_8221E7E4:
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(r31.u64, 0, ctx.xer);
	// bne cr6,0x8221e754
	if (!ctx.cr6.eq) goto loc_8221E754;
	// stw r4,48(r26)
	REX_STORE_U32(r26.u32 + 48, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82222148) {
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
	ctx.lr = 0x82222150;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r10.u32);
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// addi r11,r11,27512
	ctx.r11.s64 = ctx.r11.s64 + 27512;
	// stw r9,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r9.u32);
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r10,1,25,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x7E;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r6,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// stw r7,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r7.u32);
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// stw r8,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,28(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r30,r9,1,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r6,48(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbzx r14,r10,r11
	r14.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r4,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// rlwinm r28,r7,1,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// rlwinm r24,r6,23,30,31
	r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 23) & 0x3;
	// rlwinm r29,r30,1,0,30
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82215b80
	ctx.lr = 0x822221BC;
	sub_82215B80(ctx, base);
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82221288
	ctx.lr = 0x822221D0;
	sub_82221288(ctx, base);
	// li r25,1
	r25.s64 = 1;
	// cmplwi cr6,r24,2
	ctx.cr6.compare<uint32_t>(r24.u32, 2, ctx.xer);
	// lwz r7,116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r23,120(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// subf r9,r29,r7
	ctx.r9.u64 = ctx.r7.u64 - r29.u64;
	// subf r8,r29,r23
	ctx.r8.u64 = r23.u64 - r29.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r6,r10
	ctx.r6.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r10,r11,r30
	ctx.r10.u64 = r30.u64 - ctx.r11.u64;
	// subf r11,r6,r30
	ctx.r11.u64 = r30.u64 - ctx.r6.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// slw r26,r25,r10
	r26.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
	// slw r17,r25,r11
	r17.u64 = ctx.r11.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r11.u8 & 0x3F));
	// bne cr6,0x82222234
	if (!ctx.cr6.eq) goto loc_82222234;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// slw r15,r25,r11
	r15.u64 = ctx.r11.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x82222238
	goto loc_82222238;
loc_82222234:
	// mr r15,r25
	r15.u64 = r25.u64;
loc_82222238:
	// cmplwi cr6,r26,16
	ctx.cr6.compare<uint32_t>(r26.u32, 16, ctx.xer);
	// ble cr6,0x82222248
	if (!ctx.cr6.gt) goto loc_82222248;
	// cmplwi cr6,r17,16
	ctx.cr6.compare<uint32_t>(r17.u32, 16, ctx.xer);
	// bgt cr6,0x82222258
	if (ctx.cr6.gt) goto loc_82222258;
loc_82222248:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r30,r25
	r30.u64 = r25.u64;
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222225c
	if (!ctx.cr0.eq) goto loc_8222225C;
loc_82222258:
	// li r30,0
	r30.s64 = 0;
loc_8222225C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82222274
	if (ctx.cr6.eq) goto loc_82222274;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x82222274
	if (!ctx.cr6.eq) goto loc_82222274;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// b 0x82222278
	goto loc_82222278;
loc_82222274:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
loc_82222278:
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bne cr6,0x82222364
	if (!ctx.cr6.eq) goto loc_82222364;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x82222364
	if (!ctx.cr6.eq) goto loc_82222364;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r29,48(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r30,32(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// rlwinm r27,r29,23,30,31
	r27.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 23) & 0x3;
	// clrlwi r28,r30,26
	r28.u64 = r30.u32 & 0x3F;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x82221580
	ctx.lr = 0x822222D0;
	sub_82221580(ctx, base);
	// lwz r26,28(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm. r11,r26,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82222334
	if (!ctx.cr0.eq) goto loc_82222334;
	// rlwinm. r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82222334
	if (!ctx.cr0.eq) goto loc_82222334;
	// rlwinm. r11,r29,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82222334
	if (!ctx.cr0.eq) goto loc_82222334;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(r27.u32, 1, ctx.xer);
	// bne cr6,0x82222334
	if (!ctx.cr6.eq) goto loc_82222334;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm. r11,r11,0,22,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3C0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82222334
	if (!ctx.cr0.eq) goto loc_82222334;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82222334
	if (!ctx.cr0.eq) goto loc_82222334;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82221460
	ctx.lr = 0x8222231C;
	sub_82221460(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + r23.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r17,r10,r11
	r17.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// b 0x82222338
	goto loc_82222338;
loc_82222334:
	// lwz r17,100(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_82222338:
	// lwz r15,96(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x82222354
	if (!ctx.cr6.eq) goto loc_82222354;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mullw r11,r11,r14
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r14.s32);
	// rlwinm r30,r11,29,3,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82222598
	goto loc_82222598;
loc_82222354:
	// rlwinm r11,r26,10,23,31
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 10) & 0x1FF;
	// mullw r11,r11,r14
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r14.s32);
	// rlwinm r30,r11,2,3,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1FFFFFFC;
	// b 0x82222598
	goto loc_82222598;
loc_82222364:
	// srw r10,r9,r27
	ctx.r10.u64 = r27.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r27.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x82222374
	if (ctx.cr6.gt) goto loc_82222374;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82222374:
	// srw r11,r8,r27
	ctx.r11.u64 = r27.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r27.u8 & 0x3F));
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bgt cr6,0x8222238c
	if (ctx.cr6.gt) goto loc_8222238C;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_8222238C:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// cmplwi cr6,r24,2
	ctx.cr6.compare<uint32_t>(r24.u32, 2, ctx.xer);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bne cr6,0x822223c0
	if (!ctx.cr6.eq) goto loc_822223C0;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// srw r11,r11,r27
	ctx.r11.u64 = r27.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r27.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x822223b4
	if (ctx.cr6.gt) goto loc_822223B4;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_822223B4:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// b 0x822223c4
	goto loc_822223C4;
loc_822223C0:
	// stw r25,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r25.u32);
loc_822223C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215b80
	ctx.lr = 0x822223CC;
	sub_82215B80(ctx, base);
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x822223e4
	if (ctx.cr6.eq) goto loc_822223E4;
	// cmpwi cr6,r3,19
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 19, ctx.xer);
	// beq cr6,0x822223e4
	if (ctx.cr6.eq) goto loc_822223E4;
	// mr r16,r25
	r16.u64 = r25.u64;
	// b 0x82222404
	goto loc_82222404;
loc_822223E4:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm r11,r11,23,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x2;
	// rlwinm r10,r10,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3F;
	// slw r11,r25,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r11.u8 & 0x3F));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r16,r10,r11
	r16.u64 = ctx.r10.u64 & ~ctx.r11.u64;
loc_82222404:
	// cntlzw r11,r26
	ctx.r11.u64 = r26.u32 == 0 ? 32 : __builtin_clz(r26.u32);
	// cntlzw r10,r17
	ctx.r10.u64 = r17.u32 == 0 ? 32 : __builtin_clz(r17.u32);
	// cntlzw r9,r15
	ctx.r9.u64 = r15.u32 == 0 ? 32 : __builtin_clz(r15.u32);
	// subfic r22,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	r22.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// subfic r23,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	r23.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// subfic r24,r9,31
	ctx.xer.ca = ctx.r9.u32 <= 31;
	r24.u64 = static_cast<uint64_t>(31) - ctx.r9.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82222438
	if (ctx.cr6.eq) goto loc_82222438;
	// mr r18,r27
	r18.u64 = r27.u64;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// b 0x8222243c
	goto loc_8222243C;
loc_82222438:
	// addi r18,r27,-1
	r18.s64 = r27.s64 + -1;
loc_8222243C:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// blt cr6,0x82222594
	if (ctx.cr6.lt) goto loc_82222594;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r20,48(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r19,r11,1,31,31
	r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// clrlwi r21,r10,26
	r21.u64 = ctx.r10.u32 & 0x3F;
loc_82222458:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82222464
	if (ctx.cr6.eq) goto loc_82222464;
	// addi r22,r22,-1
	r22.s64 = r22.s64 + -1;
loc_82222464:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82222470
	if (ctx.cr6.eq) goto loc_82222470;
	// addi r23,r23,-1
	r23.s64 = r23.s64 + -1;
loc_82222470:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8222247c
	if (ctx.cr6.eq) goto loc_8222247C;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
loc_8222247C:
	// slw r29,r25,r22
	r29.u64 = r22.u8 & 0x20 ? 0 : (r25.u32 << (r22.u8 & 0x3F));
	// slw r28,r25,r23
	r28.u64 = r23.u8 & 0x20 ? 0 : (r25.u32 << (r23.u8 & 0x3F));
	// stw r29,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// slw r27,r25,r24
	r27.u64 = r24.u8 & 0x20 ? 0 : (r25.u32 << (r24.u8 & 0x3F));
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// rlwinm r26,r20,23,30,31
	r26.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 23) & 0x3;
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82221580
	ctx.lr = 0x822224B8;
	sub_82221580(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(r29.u32, 16, ctx.xer);
	// mullw r11,r11,r14
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r14.s32);
	// rlwinm r30,r11,29,3,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// ble cr6,0x822224d4
	if (!ctx.cr6.gt) goto loc_822224D4;
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(r28.u32, 16, ctx.xer);
	// bgt cr6,0x822224dc
	if (ctx.cr6.gt) goto loc_822224DC;
loc_822224D4:
	// rlwinm. r11,r20,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222253c
	if (!ctx.cr0.eq) goto loc_8222253C;
loc_822224DC:
	// lwz r17,100(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// lwz r15,96(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// ble cr6,0x82222528
	if (!ctx.cr6.gt) goto loc_82222528;
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(r26.u32, 2, ctx.xer);
	// beq cr6,0x82222508
	if (ctx.cr6.eq) goto loc_82222508;
	// mullw r11,r30,r17
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(r17.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// mullw r11,r11,r15
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r15.s32);
	// b 0x82222518
	goto loc_82222518;
loc_82222508:
	// mullw r11,r30,r15
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(r15.s32);
	// mullw r11,r11,r17
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r17.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
loc_82222518:
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r16.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_82222528:
	// addic. r18,r18,-1
	ctx.xer.ca = r18.u32 > 0;
	r18.s64 = r18.s64 + -1;
	ctx.cr0.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bge 0x82222458
	if (!ctx.cr0.lt) goto loc_82222458;
	// lwz r21,340(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r20,348(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// b 0x82222598
	goto loc_82222598;
loc_8222253C:
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// lwz r17,100(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mullw r8,r30,r17
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(r17.s32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82221a20
	ctx.lr = 0x82222574;
	sub_82221A20(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r15,96(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r21,340(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r20,348(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// stw r3,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x82222598
	goto loc_82222598;
loc_82222594:
	// lwz r30,128(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_82222598:
	// mullw r11,r30,r17
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(r17.s32);
	// lwz r9,316(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r8,388(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r6,332(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// addi r10,r11,4095
	ctx.r10.s64 = ctx.r11.s64 + 4095;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r30,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r30.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r9,r9,0,21,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r9,1024
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1024, ctx.xer);
	// beq cr6,0x822225e0
	if (ctx.cr6.eq) goto loc_822225E0;
	// mullw r11,r10,r15
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(r15.s32);
	// stw r10,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r10.u32);
	// b 0x822225f0
	goto loc_822225F0;
loc_822225E0:
	// mullw r10,r11,r15
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r15.s32);
	// stw r11,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r11.u32);
	// addi r11,r10,4095
	ctx.r11.s64 = ctx.r10.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
loc_822225F0:
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,364(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r9,372(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r8,120(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r7,380(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,124(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,356(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r5,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82237958) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82237990
	if (!ctx.cr6.eq) goto loc_82237990;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82237990
	if (!ctx.cr6.eq) goto loc_82237990;
	// lwz r3,76(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// bl 0x8223c460
	ctx.lr = 0x82237990;
	sub_8223C460(ctx, base);
loc_82237990:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223aca8
	ctx.lr = 0x82237998;
	sub_8223ACA8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x822379a8
	if (!ctx.cr0.lt) goto loc_822379A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82237440
	ctx.lr = 0x822379A8;
	sub_82237440(ctx, base);
loc_822379A8:
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

DEFINE_REX_FUNC(sub_82238CB0) {
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
	ctx.lr = 0x82238CB8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x824d438c
	ctx.lr = 0x82238CD8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82238300
	ctx.lr = 0x82238CE4;
	sub_82238300(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82238cf8
	if (!ctx.cr0.eq) goto loc_82238CF8;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x82238d08
	goto loc_82238D08;
loc_82238CF8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8223dcf0
	ctx.lr = 0x82238D04;
	sub_8223DCF0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82238D08:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d437c
	ctx.lr = 0x82238D10;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8223A250) {
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
	ctx.lr = 0x8223A258;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8223a2c8
	if (ctx.cr6.eq) goto loc_8223A2C8;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r30,r3,36
	r30.s64 = ctx.r3.s64 + 36;
	// subf r27,r5,r4
	r27.u64 = ctx.r4.u64 - ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
loc_8223A278:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r27,r31
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + r31.u32);
	// bl 0x822399c0
	ctx.lr = 0x8223A284;
	sub_822399C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223a2b0
	if (ctx.cr0.eq) goto loc_8223A2B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223a2b0
	if (ctx.cr6.eq) goto loc_8223A2B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223A2A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8223a2b4
	goto loc_8223A2B4;
loc_8223A2B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8223A2B4:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8223a278
	if (!ctx.cr0.eq) goto loc_8223A278;
loc_8223A2C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8223C058) {
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
	ctx.lr = 0x8223C060;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32768
	r28.s64 = -2147483648;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r28,r28,16389
	r28.u64 = r28.u64 | 16389;
	// bl 0x8223b9b8
	ctx.lr = 0x8223C074;
	sub_8223B9B8(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8223c1cc
	if (ctx.cr0.eq) goto loc_8223C1CC;
	// lwz r29,392(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 392);
	// addi r31,r30,392
	r31.s64 = r30.s64 + 392;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8223c1c8
	if (ctx.cr6.eq) goto loc_8223C1C8;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// ld r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 16);
	// ld r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 24);
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x8223c144
	if (ctx.cr6.eq) goto loc_8223C144;
	// lwz r11,316(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 316);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,316(r30)
	REX_STORE_U32(r30.u32 + 316, ctx.r11.u32);
	// lwz r11,372(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 372);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223c1c0
	if (ctx.cr6.eq) goto loc_8223C1C0;
	// lwz r31,384(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 384);
	// addi r29,r30,384
	r29.s64 = r30.s64 + 384;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8223c200
	if (ctx.cr6.eq) goto loc_8223C200;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8223c0dc
	if (!ctx.cr6.eq) goto loc_8223C0DC;
	// stw r27,4(r29)
	REX_STORE_U32(r29.u32 + 4, r27.u32);
loc_8223C0DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r4,r30,328
	ctx.r4.s64 = r30.s64 + 328;
	// li r5,42
	ctx.r5.s64 = 42;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x822d4fa0
	ctx.lr = 0x8223C0FC;
	sub_822D4FA0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,42
	ctx.r11.s64 = 42;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8223bf48
	ctx.lr = 0x8223C114;
	sub_8223BF48(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bge 0x8223c1b8
	if (!ctx.cr0.lt) goto loc_8223C1B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// bne cr6,0x8223c1e0
	if (!ctx.cr6.eq) goto loc_8223C1E0;
	// stw r31,4(r29)
	REX_STORE_U32(r29.u32 + 4, r31.u32);
	// b 0x8223c1e0
	goto loc_8223C1E0;
loc_8223C144:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223c16c
	if (ctx.cr6.eq) goto loc_8223C16C;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8223c160
	if (!ctx.cr6.eq) goto loc_8223C160;
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
loc_8223C160:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
loc_8223C16C:
	// addi r3,r30,328
	ctx.r3.s64 = r30.s64 + 328;
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x822d4fa0
	ctx.lr = 0x8223C17C;
	sub_822D4FA0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,372(r30)
	REX_STORE_U32(r30.u32 + 372, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8223bf48
	ctx.lr = 0x8223C190;
	sub_8223BF48(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bge 0x8223c1d4
	if (!ctx.cr0.lt) goto loc_8223C1D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223c1e0
	if (!ctx.cr6.eq) goto loc_8223C1E0;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// b 0x8223c1e0
	goto loc_8223C1E0;
loc_8223C1B8:
	// stw r27,372(r30)
	REX_STORE_U32(r30.u32 + 372, r27.u32);
	// b 0x8223c1e0
	goto loc_8223C1E0;
loc_8223C1C0:
	// mr r28,r27
	r28.u64 = r27.u64;
	// b 0x8223c1e0
	goto loc_8223C1E0;
loc_8223C1C8:
	// stw r27,76(r30)
	REX_STORE_U32(r30.u32 + 76, r27.u32);
loc_8223C1CC:
	// std r27,56(r30)
	REX_STORE_U64(r30.u32 + 56, r27.u64);
	// b 0x8223c1e0
	goto loc_8223C1E0;
loc_8223C1D4:
	// ld r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 56);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// std r11,56(r30)
	REX_STORE_U64(r30.u32 + 56, ctx.r11.u64);
loc_8223C1E0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x8223c200
	if (ctx.cr6.lt) goto loc_8223C200;
	// ld r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 16);
	// lwz r10,320(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 320);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r11,16(r30)
	REX_STORE_U64(r30.u32 + 16, ctx.r11.u64);
	// stw r10,320(r30)
	REX_STORE_U32(r30.u32 + 320, ctx.r10.u32);
loc_8223C200:
	// ld r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 56);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// ble cr6,0x8223c214
	if (!ctx.cr6.gt) goto loc_8223C214;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// std r11,56(r30)
	REX_STORE_U64(r30.u32 + 56, ctx.r11.u64);
loc_8223C214:
	// lwz r31,400(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 400);
	// addi r29,r30,400
	r29.s64 = r30.s64 + 400;
	// b 0x8223c2bc
	goto loc_8223C2BC;
loc_8223C220:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x8223c2c4
	if (ctx.cr6.eq) goto loc_8223C2C4;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223c258
	if (ctx.cr6.eq) goto loc_8223C258;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8223c24c
	if (!ctx.cr6.eq) goto loc_8223C24C;
	// stw r27,4(r29)
	REX_STORE_U32(r29.u32 + 4, r27.u32);
loc_8223C24C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
loc_8223C258:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x823cd980
	ctx.lr = 0x8223C294;
	sub_823CD980(ctx, base);
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// addi r11,r30,384
	ctx.r11.s64 = r30.s64 + 384;
	// lwz r10,388(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 388);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223c2b0
	if (ctx.cr6.eq) goto loc_8223C2B0;
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// b 0x8223c2b4
	goto loc_8223C2B4;
loc_8223C2B0:
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
loc_8223C2B4:
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_8223C2BC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8223c220
	if (!ctx.cr6.eq) goto loc_8223C220;
loc_8223C2C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822475B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822475B8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822475dc
	if (ctx.cr6.eq) goto loc_822475DC;
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
loc_822475DC:
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// rlwinm r3,r29,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822475f4
	if (!ctx.cr6.gt) goto loc_822475F4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822475F4:
	// bl 0x82255b48
	ctx.lr = 0x822475F8;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82247634
	if (ctx.cr0.eq) goto loc_82247634;
	// addic. r11,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r11.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8224762c
	if (ctx.cr0.lt) goto loc_8224762C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_8224761C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stfsu f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8224761c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224761C;
loc_8224762C:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82247638
	goto loc_82247638;
loc_82247634:
	// li r31,0
	r31.s64 = 0;
loc_82247638:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8224764c
	if (!ctx.cr6.eq) goto loc_8224764C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x822476ac
	goto loc_822476AC;
loc_8224764C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82247698
	if (!ctx.cr6.gt) goto loc_82247698;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82247660:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bge cr6,0x82247698
	if (!ctx.cr6.lt) goto loc_82247698;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + r31.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82247660
	if (ctx.cr6.lt) goto loc_82247660;
loc_82247698:
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x82255b70
	ctx.lr = 0x822476A4;
	sub_82255B70(ctx, base);
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822476AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8224ABE8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224ac00
	if (ctx.cr6.eq) goto loc_8224AC00;
	// bl 0x82255b70
	ctx.lr = 0x8224AC00;
	sub_82255B70(ctx, base);
loc_8224AC00:
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

DEFINE_REX_FUNC(sub_8224B5F8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-5816
	ctx.r11.s64 = ctx.r11.s64 + -5816;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224b590
	ctx.lr = 0x8224B61C;
	sub_8224B590(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// bl 0x8224b520
	ctx.lr = 0x8224B628;
	sub_8224B520(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_8224CC10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8224CC18;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r3,152
	ctx.r11.s64 = ctx.r3.s64 + 152;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
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
	// li r7,8
	ctx.r7.s64 = 8;
	// lvsr v0,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r10,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r10.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r10,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r10.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// vpermwi128 v63,v60,234
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x15));
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// vpermwi128 v62,v60,186
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x45));
	// stb r10,12(r3)
	REX_STORE_U8(ctx.r3.u32 + 12, ctx.r10.u8);
	// vpermwi128 v61,v60,174
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x51));
	// stw r10,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// stw r10,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// vpermwi128 v60,v60,171
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x54));
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stw r9,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r9.u32);
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stw r10,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r10.u32);
	// stw r10,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stw r10,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
	// li r10,24
	ctx.r10.s64 = 24;
	// li r9,28
	ctx.r9.s64 = 28;
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r31,32
	r31.s64 = 32;
	// li r30,36
	r30.s64 = 36;
	// stvewx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r29,40
	r29.s64 = 40;
	// stvewx128 v63,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r8,44
	ctx.r8.s64 = 44;
	// stvewx128 v63,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r7,48
	ctx.r7.s64 = 48;
	// stvewx128 v63,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r6,52
	ctx.r6.s64 = 52;
	// stvewx128 v62,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r5,56
	ctx.r5.s64 = 56;
	// stvewx128 v62,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r10,60
	ctx.r10.s64 = 60;
	// stvewx128 v62,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82252A78) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-5148
	ctx.r3.s64 = ctx.r11.s64 + -5148;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82252CA8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-5068
	ctx.r3.s64 = ctx.r11.s64 + -5068;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82252EE0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-4948
	ctx.r3.s64 = ctx.r11.s64 + -4948;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82253120) {
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
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// addi r10,r10,-4780
	ctx.r10.s64 = ctx.r10.s64 + -4780;
	// std r31,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r31.u64);
	// lis r6,-32220
	ctx.r6.s64 = -2111569920;
	// std r31,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r31.u64);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// std r31,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r31.u64);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// std r31,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, r31.u64);
	// addi r9,r9,-5044
	ctx.r9.s64 = ctx.r9.s64 + -5044;
	// std r31,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,-6208
	ctx.r8.s64 = ctx.r8.s64 + -6208;
	// addi r11,r7,-6520
	ctx.r11.s64 = ctx.r7.s64 + -6520;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,27816
	ctx.r10.s64 = ctx.r6.s64 + 27816;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x82249a00
	ctx.lr = 0x82253194;
	sub_82249A00(ctx, base);
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23696
	ctx.r4.s64 = ctx.r11.s64 + 23696;
	// bl 0x822512d8
	ctx.lr = 0x822531AC;
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

DEFINE_REX_FUNC(sub_82256028) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82256030;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,29668(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 29668);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8225605c
	if (ctx.cr6.eq) goto loc_8225605C;
	// bl 0x822469c0
	ctx.lr = 0x8225604C;
	sub_822469C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// bne cr6,0x8225605c
	if (!ctx.cr6.eq) goto loc_8225605C;
loc_82256054:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82256098
	goto loc_82256098;
loc_8225605C:
	// li r31,0
	r31.s64 = 0;
loc_82256060:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255fd8
	ctx.lr = 0x82256068;
	sub_82255FD8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82256080
	if (ctx.cr0.eq) goto loc_82256080;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822469c0
	ctx.lr = 0x82256078;
	sub_822469C0(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82256054
	if (ctx.cr6.eq) goto loc_82256054;
loc_82256080:
	// clrlwi r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// blt cr6,0x82256060
	if (ctx.cr6.lt) goto loc_82256060;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82256098:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822570A8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822570d0
	if (!ctx.cr6.eq) goto loc_822570D0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x822570fc
	goto loc_822570FC;
loc_822570D0:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r4,23544(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23544);
	// bl 0x82255c88
	ctx.lr = 0x822570DC;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822570f0
	if (!ctx.cr0.eq) goto loc_822570F0;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x822570fc
	goto loc_822570FC;
loc_822570F0:
	// lwz r11,232(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_822570FC:
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

DEFINE_REX_FUNC(sub_82258638) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82258640;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,29668(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 29668);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82258684
	if (ctx.cr6.eq) goto loc_82258684;
	// bl 0x822469c0
	ctx.lr = 0x8225865C;
	sub_822469C0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8225867c
	if (ctx.cr6.eq) goto loc_8225867C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82256fb0
	ctx.lr = 0x82258674;
	sub_82256FB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82258684
	if (ctx.cr0.eq) goto loc_82258684;
loc_8225867C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x822586d8
	goto loc_822586D8;
loc_82258684:
	// li r30,0
	r30.s64 = 0;
loc_82258688:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255fd8
	ctx.lr = 0x82258690;
	sub_82255FD8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822586c0
	if (ctx.cr0.eq) goto loc_822586C0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822469c0
	ctx.lr = 0x822586A0;
	sub_822469C0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8225867c
	if (ctx.cr6.eq) goto loc_8225867C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82256fb0
	ctx.lr = 0x822586B8;
	sub_82256FB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225867c
	if (!ctx.cr0.eq) goto loc_8225867C;
loc_822586C0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r30,r11,24
	r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x82258688
	if (ctx.cr6.lt) goto loc_82258688;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822586D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8225C3B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,232(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r6,240(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// andi. r7,r9,10
	ctx.r7.u64 = ctx.r9.u64 & 10;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r7,-10
	ctx.r8.s64 = ctx.r7.s64 + -10;
	// rlwinm. r10,r6,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bne 0x8225c3f0
	if (!ctx.cr0.eq) goto loc_8225C3F0;
	// andi. r5,r9,5
	ctx.r5.u64 = ctx.r9.u64 & 5;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// cmplwi cr6,r5,5
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5, ctx.xer);
	// bne cr6,0x8225c3f0
	if (!ctx.cr6.eq) goto loc_8225C3F0;
	// rlwinm. r5,r9,0,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x8225c3f8
	if (!ctx.cr0.eq) goto loc_8225C3F8;
loc_8225C3F0:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
loc_8225C3F8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8225c410
	if (!ctx.cr6.eq) goto loc_8225C410;
	// clrlwi. r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8225c410
	if (ctx.cr0.eq) goto loc_8225C410;
	// rlwinm. r10,r9,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8225c418
	if (!ctx.cr0.eq) goto loc_8225C418;
loc_8225C410:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_8225C418:
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8225c48c
	if (ctx.cr6.eq) goto loc_8225C48C;
	// rlwinm r8,r6,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// beq cr6,0x8225c48c
	if (ctx.cr6.eq) goto loc_8225C48C;
	// lwz r8,240(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 240);
	// rlwinm r8,r8,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r8,32
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32, ctx.xer);
	// bne cr6,0x8225c48c
	if (!ctx.cr6.eq) goto loc_8225C48C;
	// andi. r9,r9,5
	ctx.r9.u64 = ctx.r9.u64 & 5;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// bne cr6,0x8225c46c
	if (!ctx.cr6.eq) goto loc_8225C46C;
	// lfs f13,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,260(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
loc_8225C46C:
	// cmplwi cr6,r7,10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 10, ctx.xer);
	// bne cr6,0x8225c48c
	if (!ctx.cr6.eq) goto loc_8225C48C;
	// lfs f13,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,264(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_8225C48C:
	// ori r10,r6,2
	ctx.r10.u64 = ctx.r6.u64 | 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,240(r11)
	REX_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82260148) {
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
	// bl 0x8225feb0
	ctx.lr = 0x82260168;
	sub_8225FEB0(ctx, base);
	// lfs f0,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,168(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f0,172(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// lfs f0,176(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// lfs f0,180(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 16, temp.u32);
	// lfs f0,184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// lfs f0,188(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 24, temp.u32);
	// lfs f0,192(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 28, temp.u32);
	// lfs f0,196(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 32, temp.u32);
	// lfs f0,200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 36, temp.u32);
	// lfs f0,204(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 40, temp.u32);
	// lfs f0,208(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 44, temp.u32);
	// lfs f0,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 48, temp.u32);
	// lfs f0,216(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 52, temp.u32);
	// lfs f0,220(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 56, temp.u32);
	// lfs f0,224(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 60, temp.u32);
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

DEFINE_REX_FUNC(sub_82266C50) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
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
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82267C70) {
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
	ctx.lr = 0x82267C78;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,240(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82267ca0
	if (!ctx.cr6.eq) goto loc_82267CA0;
	// bl 0x8225feb0
	ctx.lr = 0x82267CA0;
	sub_8225FEB0(ctx, base);
loc_82267CA0:
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82267cbc
	if (ctx.cr6.eq) goto loc_82267CBC;
	// bl 0x8225dc50
	ctx.lr = 0x82267CB8;
	sub_8225DC50(ctx, base);
	// b 0x82267cc0
	goto loc_82267CC0;
loc_82267CBC:
	// bl 0x8225dc18
	ctx.lr = 0x82267CC0;
	sub_8225DC18(ctx, base);
loc_82267CC0:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82267d28
	if (ctx.cr6.eq) goto loc_82267D28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
loc_82267CD0:
	// lwz r11,240(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 240);
	// lwz r31,32(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82267d1c
	if (!ctx.cr6.eq) goto loc_82267D1C;
	// lfs f0,20(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x82267d10
	if (!ctx.cr6.eq) goto loc_82267D10;
	// lwz r11,236(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 236);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82267d1c
	if (ctx.cr6.eq) goto loc_82267D1C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82267d10
	if (!ctx.cr6.eq) goto loc_82267D10;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82267d1c
	if (ctx.cr6.eq) goto loc_82267D1C;
loc_82267D10:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x8224d8b0
	ctx.lr = 0x82267D1C;
	sub_8224D8B0(ctx, base);
loc_82267D1C:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82267cd0
	if (!ctx.cr6.eq) goto loc_82267CD0;
loc_82267D28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8226CB10) {
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
	ctx.lr = 0x8226CB18;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,8(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r30,r29,r5
	r30.u64 = r29.u64 + ctx.r5.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, ctx.xer);
	// ble cr6,0x8226cb94
	if (!ctx.cr6.gt) goto loc_8226CB94;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x8226cb94
	if (!ctx.cr6.gt) goto loc_8226CB94;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8226cb94
	if (!ctx.cr6.lt) goto loc_8226CB94;
	// bl 0x82267310
	ctx.lr = 0x8226CB58;
	sub_82267310(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8226cb94
	if (ctx.cr0.lt) goto loc_8226CB94;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r28,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8226CB78;
	sub_822D4FA0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// sthx r10,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u16);
	// b 0x8226cb98
	goto loc_8226CB98;
loc_8226CB94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226CB98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8226EA40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8226EA48;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8226ea98
	if (!ctx.cr6.gt) goto loc_8226EA98;
	// li r29,0
	r29.s64 = 0;
loc_8226EA68:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r29,r11
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// bl 0x82268b98
	ctx.lr = 0x8226EA7C;
	sub_82268B98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8226ea98
	if (ctx.cr0.lt) goto loc_8226EA98;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8226ea68
	if (ctx.cr6.lt) goto loc_8226EA68;
loc_8226EA98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82270348) {
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
	ctx.lr = 0x82270350;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// add r30,r4,r5
	r30.u64 = ctx.r4.u64 + ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822703ec
	if (ctx.cr6.lt) goto loc_822703EC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x822703ec
	if (ctx.cr6.lt) goto loc_822703EC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x822703ec
	if (ctx.cr6.lt) goto loc_822703EC;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822703ec
	if (ctx.cr6.gt) goto loc_822703EC;
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r30.s32, ctx.xer);
	// bge cr6,0x822703b4
	if (!ctx.cr6.lt) goto loc_822703B4;
	// mulli r27,r4,12
	r27.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(12));
	// subf r28,r4,r30
	r28.u64 = r30.u64 - ctx.r4.u64;
loc_82270398:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r27,r11
	ctx.r3.u64 = r27.u64 + ctx.r11.u64;
	// bl 0x8224e998
	ctx.lr = 0x822703A8;
	sub_8224E998(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r27,r27,12
	r27.s64 = r27.s64 + 12;
	// bne 0x82270398
	if (!ctx.cr0.eq) goto loc_82270398;
loc_822703B4:
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mulli r9,r30,12
	ctx.r9.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(12));
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r10,r29,12
	ctx.r10.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(12));
	// subf r8,r30,r8
	ctx.r8.u64 = ctx.r8.u64 - r30.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mulli r5,r8,12
	ctx.r5.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(12));
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822d6840
	ctx.lr = 0x822703D8;
	sub_822D6840(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r11,r26,r11
	ctx.r11.u64 = ctx.r11.u64 - r26.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x822703f0
	goto loc_822703F0;
loc_822703EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822703F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822767A0) {
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
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822767fc
	if (ctx.cr6.eq) goto loc_822767FC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822767fc
	if (ctx.cr6.eq) goto loc_822767FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822767e8
	if (!ctx.cr6.eq) goto loc_822767E8;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822767DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82276804
	goto loc_82276804;
loc_822767E8:
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822767F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82276804
	goto loc_82276804;
loc_822767FC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82276804:
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

DEFINE_REX_FUNC(sub_822778A0) {
	REX_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822779B8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,29988
	ctx.r3.s64 = ctx.r11.s64 + 29988;
	// b 0x8225da00
	sub_8225DA00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82277AD8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x82277AE0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r10,-2144(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -2144);
	// stw r10,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// beq cr6,0x82277dd0
	if (ctx.cr6.eq) goto loc_82277DD0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82277db4
	if (ctx.cr6.eq) goto loc_82277DB4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82277bd8
	if (ctx.cr6.eq) goto loc_82277BD8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82277b50
	if (ctx.cr6.eq) goto loc_82277B50;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82277b30
	if (ctx.cr6.eq) goto loc_82277B30;
	// lwz r3,176(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x822d7b58
	ctx.lr = 0x82277B28;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82277e28
	goto loc_82277E28;
loc_82277B30:
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822916e0
	ctx.lr = 0x82277B40;
	sub_822916E0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227b300
	ctx.lr = 0x82277B4C;
	sub_8227B300(ctx, base);
	// b 0x82277e1c
	goto loc_82277E1C;
loc_82277B50:
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// stfs f1,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// li r9,11
	ctx.r9.s64 = 11;
	// stfs f1,152(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
	// stfs f1,148(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stfs f1,144(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lvx128 v61,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,4
	ctx.r5.s64 = 4;
	// lvsl v0,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r30,r1,128
	r30.s64 = ctx.r1.s64 + 128;
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lvx128 v60,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v0,v63,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r9,8
	ctx.r9.s64 = 8;
	// lvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// vperm128 v63,v62,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsubfp128 v13,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v13,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v63,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw128 v62,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw128 v61,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// stvewx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r30,r9
	ea = (r30.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// bl 0x8227afa8
	ctx.lr = 0x82277BD4;
	sub_8227AFA8(ctx, base);
	// b 0x82277e1c
	goto loc_82277E1C;
loc_82277BD8:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r6,r9,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF;
	// stfs f1,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// stfs f1,168(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// std r6,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfs f0,-13044(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r7,r11,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r9,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// lvsl v0,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r10,r11,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// lfd f12,112(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// std r9,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f8,128(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// std r5,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f11,120(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// std r10,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f6,128(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// lfd f9,144(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f7,80(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// std r4,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// addi r11,r1,143
	ctx.r11.s64 = ctx.r1.s64 + 143;
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// lvsr v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// stfs f1,164(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f1,160(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// vspltisw128 v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x3)));
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// li r5,4
	ctx.r5.s64 = 4;
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f6,136(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// addi r11,r1,111
	ctx.r11.s64 = ctx.r1.s64 + 111;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// lvx128 v60,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lvx128 v59,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v0,v61,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v12,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,8
	ctx.r11.s64 = 8;
	// vperm128 v63,v59,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// li r6,12
	ctx.r6.s64 = 12;
	// vcsxwfp128 v11,v62,0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// addi r28,r3,112
	r28.s64 = ctx.r3.s64 + 112;
	// addi r4,r1,143
	ctx.r4.s64 = ctx.r1.s64 + 143;
	// vsubfp128 v13,v63,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// addi r30,r1,128
	r30.s64 = ctx.r1.s64 + 128;
	// addi r29,r1,128
	r29.s64 = ctx.r1.s64 + 128;
	// addi r27,r1,80
	r27.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvsl v7,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmaddfp v0,v13,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vperm128 v63,v0,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// stvewx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v13,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v0,v62,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vnmsubfp v12,v0,v13,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v63,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vpkd3d128 v63,v12,0,1,3
	vTemp.u32[0] = 0x404000FF;
	vTemp.f32[0] = !(ctx.v12.f32[0] >= 3.0f) ? 3.0f : (ctx.v12.f32[0] > vTemp.f32[0] ? vTemp.f32[0] : ctx.v12.f32[0]);
	temp.u32 = uint32_t(vTemp.u8[0]) << 24;
	vTemp.u32[1] = 0x404000FF;
	vTemp.f32[1] = !(ctx.v12.f32[1] >= 3.0f) ? 3.0f : (ctx.v12.f32[1] > vTemp.f32[1] ? vTemp.f32[1] : ctx.v12.f32[1]);
	temp.u32 |= uint32_t(vTemp.u8[4]) << 0;
	vTemp.u32[2] = 0x404000FF;
	vTemp.f32[2] = !(ctx.v12.f32[2] >= 3.0f) ? 3.0f : (ctx.v12.f32[2] > vTemp.f32[2] ? vTemp.f32[2] : ctx.v12.f32[2]);
	temp.u32 |= uint32_t(vTemp.u8[8]) << 8;
	vTemp.u32[3] = 0x404000FF;
	vTemp.f32[3] = !(ctx.v12.f32[3] >= 3.0f) ? 3.0f : (ctx.v12.f32[3] > vTemp.f32[3] ? vTemp.f32[3] : ctx.v12.f32[3]);
	temp.u32 |= uint32_t(vTemp.u8[12]) << 16;
	ctx.v63.u32[3] = temp.u32;
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvewx128 v63,r0,r27
	ea = (r27.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8227aed0
	ctx.lr = 0x82277DB0;
	sub_8227AED0(ctx, base);
	// b 0x82277e1c
	goto loc_82277E1C;
loc_82277DB4:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f1,f13,f1,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f0.f64)));
	// bl 0x8227ae88
	ctx.lr = 0x82277DCC;
	sub_8227AE88(ctx, base);
	// b 0x82277e1c
	goto loc_82277E1C;
loc_82277DD0:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// std r9,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f0,f13,f1,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f0.f64)));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8227adf8
	ctx.lr = 0x82277E1C;
	sub_8227ADF8(ctx, base);
loc_82277E1C:
	// lwz r3,176(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x822d7b58
	ctx.lr = 0x82277E24;
	sub_822D7B58(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82277E28:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82288998) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822889ac
	if (!ctx.cr6.eq) goto loc_822889AC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_822889AC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82288D40) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82288d54
	if (!ctx.cr6.eq) goto loc_82288D54;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82288D54:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82289030) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82289038;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,31388(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 31388);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82289064
	if (!ctx.cr6.eq) goto loc_82289064;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82289090
	goto loc_82289090;
loc_82289064:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82289074;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82289090;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82289090:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8228AE60) {
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
	ctx.lr = 0x8228AE68;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32163
	r30.s64 = -2107834368;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r11,31388(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 31388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228ae98
	if (!ctx.cr6.eq) goto loc_8228AE98;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x8228af5c
	goto loc_8228AF5C;
loc_8228AE98:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31384(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31384);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8228aeb4
	if (!ctx.cr6.eq) goto loc_8228AEB4;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,48
	ctx.r3.u64 = ctx.r3.u64 | 48;
	// b 0x8228af5c
	goto loc_8228AF5C;
loc_8228AEB4:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82255b48
	ctx.lr = 0x8228AEBC;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228aee8
	if (ctx.cr0.eq) goto loc_8228AEE8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,7896
	ctx.r11.s64 = ctx.r11.s64 + 7896;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8228aeec
	goto loc_8228AEEC;
loc_8228AEE8:
	// li r31,0
	r31.s64 = 0;
loc_8228AEEC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8228af00
	if (!ctx.cr6.eq) goto loc_8228AF00;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8228af5c
	goto loc_8228AF5C;
loc_8228AF00:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82284b48
	ctx.lr = 0x8228AF0C;
	sub_82284B48(ctx, base);
	// lwz r3,31388(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 31388);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228AF20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228AF40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228AF58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8228AF5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8228F038) {
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
	ctx.lr = 0x8228F040;
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-10368(r1)
	ea = -10368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// stw r4,10396(r1)
	REX_STORE_U32(ctx.r1.u32 + 10396, ctx.r4.u32);
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// stw r5,10404(r1)
	REX_STORE_U32(ctx.r1.u32 + 10404, ctx.r5.u32);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// stw r6,10412(r1)
	REX_STORE_U32(ctx.r1.u32 + 10412, ctx.r6.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// lwz r3,31380(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 31380);
	// stw r11,10208(r1)
	REX_STORE_U32(ctx.r1.u32 + 10208, ctx.r11.u32);
	// bl 0x82424888
	ctx.lr = 0x8228F07C;
	sub_82424888(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// stw r3,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// lwz r11,31420(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228f0a4
	if (!ctx.cr6.eq) goto loc_8228F0A4;
	// lwz r3,10208(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 10208);
	// bl 0x822d7b58
	ctx.lr = 0x8228F098;
	sub_822D7B58(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8228f97c
	goto loc_8228F97C;
loc_8228F0A4:
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,3712
	ctx.r3.s64 = ctx.r1.s64 + 3712;
	// addi r4,r11,12448
	ctx.r4.s64 = ctx.r11.s64 + 12448;
	// li r5,299
	ctx.r5.s64 = 299;
	// li r18,0
	r18.s64 = 0;
	// li r21,2
	r21.s64 = 2;
	// li r17,2
	r17.s64 = 2;
	// li r19,2
	r19.s64 = 2;
	// li r23,2
	r23.s64 = 2;
	// li r31,0
	r31.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// bl 0x822d4fa0
	ctx.lr = 0x8228F0D8;
	sub_822D4FA0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r1,3712
	ctx.r6.s64 = ctx.r1.s64 + 3712;
	// addi r4,r11,12360
	ctx.r4.s64 = ctx.r11.s64 + 12360;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// addi r3,r1,4464
	ctx.r3.s64 = ctx.r1.s64 + 4464;
	// bl 0x8228e6e8
	ctx.lr = 0x8228F0F0;
	sub_8228E6E8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8228f804
	if (ctx.cr6.eq) goto loc_8228F804;
	// lis r28,-32254
	r28.s64 = -2113798144;
	// lis r24,-32254
	r24.s64 = -2113798144;
	// addi r11,r28,12176
	ctx.r11.s64 = r28.s64 + 12176;
	// addi r10,r24,12116
	ctx.r10.s64 = r24.s64 + 12116;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r10,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r27,-32254
	r27.s64 = -2113798144;
	// lis r25,-32254
	r25.s64 = -2113798144;
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// lis r29,-32254
	r29.s64 = -2113798144;
	// lis r26,-32254
	r26.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r6,12076
	ctx.r6.s64 = ctx.r6.s64 + 12076;
	// addi r5,r5,11816
	ctx.r5.s64 = ctx.r5.s64 + 11816;
	// addi r4,r4,11376
	ctx.r4.s64 = ctx.r4.s64 + 11376;
	// stw r6,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// addi r7,r7,11316
	ctx.r7.s64 = ctx.r7.s64 + 11316;
	// stw r5,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// addi r8,r8,11304
	ctx.r8.s64 = ctx.r8.s64 + 11304;
	// stw r4,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r4.u32);
	// addi r9,r9,11292
	ctx.r9.s64 = ctx.r9.s64 + 11292;
	// stw r7,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// addi r28,r27,11104
	r28.s64 = r27.s64 + 11104;
	// stw r8,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// addi r27,r25,11008
	r27.s64 = r25.s64 + 11008;
	// stw r9,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// li r20,17
	r20.s64 = 17;
	// addi r14,r3,10880
	r14.s64 = ctx.r3.s64 + 10880;
	// addi r15,r29,10752
	r15.s64 = r29.s64 + 10752;
	// addi r26,r26,10656
	r26.s64 = r26.s64 + 10656;
	// addi r24,r10,10496
	r24.s64 = ctx.r10.s64 + 10496;
	// addi r25,r11,9880
	r25.s64 = ctx.r11.s64 + 9880;
loc_8228F194:
	// lwz r11,10404(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 10404);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r11,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bne 0x8228f7f8
	if (!ctx.cr0.eq) goto loc_8228F7F8;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8228f278
	if (!ctx.cr6.eq) goto loc_8228F278;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228f804
	if (ctx.cr0.eq) goto loc_8228F804;
	// cmpwi cr6,r19,8
	ctx.cr6.compare<int32_t>(r19.s32, 8, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r9,r18,5
	ctx.r9.s64 = r18.s64 + 5;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r10,r21,62
	ctx.r10.s64 = r21.s64 + 62;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r11,r22,3
	ctx.r11.s64 = r22.s64 + 3;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,8560
	ctx.r3.s64 = ctx.r1.s64 + 8560;
	// li r5,610
	ctx.r5.s64 = 610;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8228F20C;
	sub_822D4FA0(ctx, base);
	// addic r11,r16,-1
	ctx.xer.ca = r16.u32 > 0;
	ctx.r11.s64 = r16.s64 + -1;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r29,r31,1
	r29.s64 = r31.s64 + 1;
	// subfe r10,r11,r16
	temp.u8 = (~ctx.r11.u32 + r16.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r16.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + r16.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// stw r29,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// addi r4,r1,8560
	ctx.r4.s64 = ctx.r1.s64 + 8560;
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x8228e740
	ctx.lr = 0x8228F258;
	sub_8228E740(ctx, base);
	// addi r5,r1,1392
	ctx.r5.s64 = ctx.r1.s64 + 1392;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r1,4464
	ctx.r3.s64 = ctx.r1.s64 + 4464;
	// bl 0x822d8740
	ctx.lr = 0x8228F268;
	sub_822D8740(ctx, base);
	// stw r31,36(r30)
	REX_STORE_U32(r30.u32 + 36, r31.u32);
	// stw r29,40(r30)
	REX_STORE_U32(r30.u32 + 40, r29.u32);
	// addi r31,r29,1
	r31.s64 = r29.s64 + 1;
	// b 0x8228f7f8
	goto loc_8228F7F8;
loc_8228F278:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8228f730
	if (ctx.cr6.eq) goto loc_8228F730;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8228f730
	if (ctx.cr6.eq) goto loc_8228F730;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8228f730
	if (ctx.cr6.eq) goto loc_8228F730;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8228f30c
	if (ctx.cr6.eq) goto loc_8228F30C;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228f30c
	if (ctx.cr0.eq) goto loc_8228F30C;
	// cmpwi cr6,r19,8
	ctx.cr6.compare<int32_t>(r19.s32, 8, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r10,r18,1
	ctx.r10.s64 = r18.s64 + 1;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// cmpwi cr6,r21,64
	ctx.cr6.compare<int32_t>(r21.s32, 64, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r11,r22,1
	ctx.r11.s64 = r22.s64 + 1;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// mr r18,r10
	r18.u64 = ctx.r10.u64;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// li r5,60
	ctx.r5.s64 = 60;
	// bne cr6,0x8228f2f0
	if (!ctx.cr6.eq) goto loc_8228F2F0;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r4,168(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x822d4fa0
	ctx.lr = 0x8228F2E8;
	sub_822D4FA0(ctx, base);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// b 0x8228f300
	goto loc_8228F300;
loc_8228F2F0:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r4,180(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x822d4fa0
	ctx.lr = 0x8228F2FC;
	sub_822D4FA0(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
loc_8228F300:
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r1,4464
	ctx.r3.s64 = ctx.r1.s64 + 4464;
	// bl 0x822d8740
	ctx.lr = 0x8228F30C;
	sub_822D8740(ctx, base);
loc_8228F30C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8228f5f4
	if (!ctx.cr6.eq) goto loc_8228F5F4;
	// clrlwi. r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8228f508
	if (ctx.cr0.eq) goto loc_8228F508;
	// lwz r11,164(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 164);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bne cr6,0x8228f40c
	if (!ctx.cr6.eq) goto loc_8228F40C;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r19,7
	ctx.cr6.compare<int32_t>(r19.s32, 7, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r9,r18,1
	ctx.r9.s64 = r18.s64 + 1;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r10,r21,1
	ctx.r10.s64 = r21.s64 + 1;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r11,r22,1
	ctx.r11.s64 = r22.s64 + 1;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// beq 0x8228f3c8
	if (ctx.cr0.eq) goto loc_8228F3C8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// li r5,94
	ctx.r5.s64 = 94;
	// bl 0x822d4fa0
	ctx.lr = 0x8228F388;
	sub_822D4FA0(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// bl 0x8228e740
	ctx.lr = 0x8228F3A0;
	sub_8228E740(ctx, base);
loc_8228F3A0:
	// addi r5,r1,1392
	ctx.r5.s64 = ctx.r1.s64 + 1392;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r1,4464
	ctx.r3.s64 = ctx.r1.s64 + 4464;
	// bl 0x822d8740
	ctx.lr = 0x8228F3B0;
	sub_822D8740(ctx, base);
	// stw r20,28(r30)
	REX_STORE_U32(r30.u32 + 28, r20.u32);
	// stw r17,32(r30)
	REX_STORE_U32(r30.u32 + 32, r17.u32);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// b 0x8228f724
	goto loc_8228F724;
loc_8228F3C8:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// li r5,93
	ctx.r5.s64 = 93;
	// bl 0x822d4fa0
	ctx.lr = 0x8228F3D8;
	sub_822D4FA0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// bl 0x8228e740
	ctx.lr = 0x8228F3EC;
	sub_8228E740(ctx, base);
loc_8228F3EC:
	// addi r5,r1,1392
	ctx.r5.s64 = ctx.r1.s64 + 1392;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r1,4464
	ctx.r3.s64 = ctx.r1.s64 + 4464;
	// bl 0x822d8740
	ctx.lr = 0x8228F3FC;
	sub_822D8740(ctx, base);
	// stw r20,28(r30)
	REX_STORE_U32(r30.u32 + 28, r20.u32);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// b 0x8228f724
	goto loc_8228F724;
loc_8228F40C:
	// ble cr6,0x8228f7f8
	if (!ctx.cr6.gt) goto loc_8228F7F8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r19,7
	ctx.cr6.compare<int32_t>(r19.s32, 7, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r9,r18,2
	ctx.r9.s64 = r18.s64 + 2;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// beq 0x8228f49c
	if (ctx.cr0.eq) goto loc_8228F49C;
	// addi r10,r21,7
	ctx.r10.s64 = r21.s64 + 7;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r11,r22,1
	ctx.r11.s64 = r22.s64 + 1;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// li r5,185
	ctx.r5.s64 = 185;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8228F464;
	sub_822D4FA0(ctx, base);
	// lwz r3,232(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 232);
	// bl 0x8228d640
	ctx.lr = 0x8228F46C;
	sub_8228D640(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,228(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 228);
	// bl 0x8228d640
	ctx.lr = 0x8228F478;
	sub_8228D640(ctx, base);
	// addi r4,r1,1008
	ctx.r4.s64 = ctx.r1.s64 + 1008;
loc_8228F47C:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// bl 0x8228e740
	ctx.lr = 0x8228F498;
	sub_8228E740(ctx, base);
	// b 0x8228f3a0
	goto loc_8228F3A0;
loc_8228F49C:
	// addi r10,r21,6
	ctx.r10.s64 = r21.s64 + 6;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r11,r22,1
	ctx.r11.s64 = r22.s64 + 1;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r5,184
	ctx.r5.s64 = 184;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8228F4D4;
	sub_822D4FA0(ctx, base);
	// lwz r3,232(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 232);
	// bl 0x8228d640
	ctx.lr = 0x8228F4DC;
	sub_8228D640(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,228(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 228);
	// bl 0x8228d640
	ctx.lr = 0x8228F4E8;
	sub_8228D640(ctx, base);
	// addi r4,r1,1200
	ctx.r4.s64 = ctx.r1.s64 + 1200;
loc_8228F4EC:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// bl 0x8228e740
	ctx.lr = 0x8228F504;
	sub_8228E740(ctx, base);
	// b 0x8228f3ec
	goto loc_8228F3EC;
loc_8228F508:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8228f5f4
	if (!ctx.cr6.eq) goto loc_8228F5F4;
	// clrlwi. r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8228f5f4
	if (!ctx.cr0.eq) goto loc_8228F5F4;
	// lwz r11,164(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228f58c
	if (ctx.cr6.eq) goto loc_8228F58C;
	// cmpwi cr6,r19,7
	ctx.cr6.compare<int32_t>(r19.s32, 7, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r9,r18,1
	ctx.r9.s64 = r18.s64 + 1;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r10,r21,6
	ctx.r10.s64 = r21.s64 + 6;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r11,r22,1
	ctx.r11.s64 = r22.s64 + 1;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// li r5,127
	ctx.r5.s64 = 127;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8228F570;
	sub_822D4FA0(ctx, base);
	// lwz r3,232(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 232);
	// bl 0x8228d640
	ctx.lr = 0x8228F578;
	sub_8228D640(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,228(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 228);
	// bl 0x8228d640
	ctx.lr = 0x8228F584;
	sub_8228D640(ctx, base);
	// addi r4,r1,720
	ctx.r4.s64 = ctx.r1.s64 + 720;
	// b 0x8228f47c
	goto loc_8228F47C;
loc_8228F58C:
	// cmpwi cr6,r19,7
	ctx.cr6.compare<int32_t>(r19.s32, 7, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r9,r18,1
	ctx.r9.s64 = r18.s64 + 1;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r10,r21,6
	ctx.r10.s64 = r21.s64 + 6;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r11,r22,1
	ctx.r11.s64 = r22.s64 + 1;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// li r5,126
	ctx.r5.s64 = 126;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8228F5D8;
	sub_822D4FA0(ctx, base);
	// lwz r3,232(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 232);
	// bl 0x8228d640
	ctx.lr = 0x8228F5E0;
	sub_8228D640(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,228(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 228);
	// bl 0x8228d640
	ctx.lr = 0x8228F5EC;
	sub_8228D640(ctx, base);
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// b 0x8228f4ec
	goto loc_8228F4EC;
loc_8228F5F4:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8228f650
	if (!ctx.cr6.eq) goto loc_8228F650;
	// cmpwi cr6,r19,8
	ctx.cr6.compare<int32_t>(r19.s32, 8, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// cmpwi cr6,r18,32
	ctx.cr6.compare<int32_t>(r18.s32, 32, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r10,r21,25
	ctx.r10.s64 = r21.s64 + 25;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r11,r22,2
	ctx.r11.s64 = r22.s64 + 2;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r3,r1,4016
	ctx.r3.s64 = ctx.r1.s64 + 4016;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r5,440
	ctx.r5.s64 = 440;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8228F63C;
	sub_822D4FA0(ctx, base);
	// addi r5,r1,4016
	ctx.r5.s64 = ctx.r1.s64 + 4016;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r1,4464
	ctx.r3.s64 = ctx.r1.s64 + 4464;
	// bl 0x822d8740
	ctx.lr = 0x8228F64C;
	sub_822D8740(ctx, base);
	// b 0x8228f7f8
	goto loc_8228F7F8;
loc_8228F650:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8228f6bc
	if (!ctx.cr6.eq) goto loc_8228F6BC;
	// cmpwi cr6,r19,8
	ctx.cr6.compare<int32_t>(r19.s32, 8, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// cmpwi cr6,r18,32
	ctx.cr6.compare<int32_t>(r18.s32, 32, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r10,r21,4
	ctx.r10.s64 = r21.s64 + 4;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r11,r22,1
	ctx.r11.s64 = r22.s64 + 1;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r3,r1,3440
	ctx.r3.s64 = ctx.r1.s64 + 3440;
	// lwz r4,148(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r5,260
	ctx.r5.s64 = 260;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8228F698;
	sub_822D4FA0(ctx, base);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,3440
	ctx.r4.s64 = ctx.r1.s64 + 3440;
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// bl 0x8228e740
	ctx.lr = 0x8228F6B8;
	sub_8228E740(ctx, base);
	// b 0x8228f714
	goto loc_8228F714;
loc_8228F6BC:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8228f804
	if (!ctx.cr6.eq) goto loc_8228F804;
	// cmpwi cr6,r19,8
	ctx.cr6.compare<int32_t>(r19.s32, 8, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// cmpwi cr6,r18,32
	ctx.cr6.compare<int32_t>(r18.s32, 32, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r10,r21,1
	ctx.r10.s64 = r21.s64 + 1;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r11,r22,1
	ctx.r11.s64 = r22.s64 + 1;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,152(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8228F704;
	sub_822D4FA0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// bl 0x8228e740
	ctx.lr = 0x8228F714;
	sub_8228E740(ctx, base);
loc_8228F714:
	// addi r5,r1,1392
	ctx.r5.s64 = ctx.r1.s64 + 1392;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r1,4464
	ctx.r3.s64 = ctx.r1.s64 + 4464;
	// bl 0x822d8740
	ctx.lr = 0x8228F724;
	sub_822D8740(ctx, base);
loc_8228F724:
	// stw r31,36(r30)
	REX_STORE_U32(r30.u32 + 36, r31.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x8228f7f8
	goto loc_8228F7F8;
loc_8228F730:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228f804
	if (ctx.cr0.eq) goto loc_8228F804;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228F74C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r19,8
	ctx.cr6.compare<int32_t>(r19.s32, 8, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// add r9,r3,r18
	ctx.r9.u64 = ctx.r3.u64 + r18.u64;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r21
	ctx.r10.u64 = ctx.r11.u64 + r21.u64;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// add r11,r3,r22
	ctx.r11.u64 = ctx.r3.u64 + r22.u64;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x8228f804
	if (ctx.cr6.gt) goto loc_8228F804;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// li r5,159
	ctx.r5.s64 = 159;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8228F79C;
	sub_822D4FA0(ctx, base);
	// addic r11,r16,-1
	ctx.xer.ca = r16.u32 > 0;
	ctx.r11.s64 = r16.s64 + -1;
	// lwz r5,156(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// subfe r8,r11,r16
	temp.u8 = (~ctx.r11.u32 + r16.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r16.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r11.u64 + r16.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8228f7b8
	if (ctx.cr6.eq) goto loc_8228F7B8;
	// lwz r5,164(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
loc_8228F7B8:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// addi r4,r1,848
	ctx.r4.s64 = ctx.r1.s64 + 848;
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// bl 0x8228e740
	ctx.lr = 0x8228F7CC;
	sub_8228E740(ctx, base);
	// addi r5,r1,1392
	ctx.r5.s64 = ctx.r1.s64 + 1392;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r1,4464
	ctx.r3.s64 = ctx.r1.s64 + 4464;
	// bl 0x822d8740
	ctx.lr = 0x8228F7DC;
	sub_822D8740(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x8228f7f8
	if (!ctx.cr6.gt) goto loc_8228F7F8;
	// addi r11,r30,32
	ctx.r11.s64 = r30.s64 + 32;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_8228F7EC:
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r11.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bdnz 0x8228f7ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8228F7EC;
loc_8228F7F8:
	// lwz r30,24(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8228f194
	if (!ctx.cr6.eq) goto loc_8228F194;
loc_8228F804:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,9856
	ctx.r4.s64 = ctx.r11.s64 + 9856;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x822d4fa0
	ctx.lr = 0x8228F818;
	sub_822D4FA0(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r1,4464
	ctx.r3.s64 = ctx.r1.s64 + 4464;
	// bl 0x822d8740
	ctx.lr = 0x8228F828;
	sub_822D8740(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// addi r4,r11,9800
	ctx.r4.s64 = ctx.r11.s64 + 9800;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r3,r1,9184
	ctx.r3.s64 = ctx.r1.s64 + 9184;
	// bl 0x8228e798
	ctx.lr = 0x8228F848;
	sub_8228E798(ctx, base);
	// addi r5,r1,9184
	ctx.r5.s64 = ctx.r1.s64 + 9184;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r1,4464
	ctx.r3.s64 = ctx.r1.s64 + 4464;
	// bl 0x822d8740
	ctx.lr = 0x8228F858;
	sub_822D8740(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,4464
	ctx.r3.s64 = ctx.r1.s64 + 4464;
	// addi r4,r11,9796
	ctx.r4.s64 = ctx.r11.s64 + 9796;
	// bl 0x822d6ae8
	ctx.lr = 0x8228F868;
	sub_822D6AE8(ctx, base);
	// li r29,10
	r29.s64 = 10;
	// li r28,32
	r28.s64 = 32;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228f8a4
	if (ctx.cr0.eq) goto loc_8228F8A4;
	// divw. r11,r17,r29
	ctx.r11.u64 = uint32_t((r29.s32 && !(r17.s32 == INT32_MIN && r29.s32 == -1)) ? r17.s32 / r29.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228f888
	if (!ctx.cr0.eq) goto loc_8228F888;
	// stb r28,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, r28.u8);
	// b 0x8228f890
	goto loc_8228F890;
loc_8228F888:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_8228F890:
	// divw r11,r17,r29
	ctx.r11.u64 = uint32_t((r29.s32 && !(r17.s32 == INT32_MIN && r29.s32 == -1)) ? r17.s32 / r29.s32 : 0);
	// mulli r11,r11,10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10));
	// subf r11,r11,r17
	ctx.r11.u64 = r17.u64 - ctx.r11.u64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stb r11,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
loc_8228F8A4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,4464
	ctx.r3.s64 = ctx.r1.s64 + 4464;
	// addi r4,r11,9792
	ctx.r4.s64 = ctx.r11.s64 + 9792;
	// bl 0x822d6ae8
	ctx.lr = 0x8228F8B4;
	sub_822D6AE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228f8f4
	if (ctx.cr0.eq) goto loc_8228F8F4;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// bge cr6,0x8228f8c8
	if (!ctx.cr6.lt) goto loc_8228F8C8;
	// li r31,1
	r31.s64 = 1;
loc_8228F8C8:
	// divw. r11,r31,r29
	ctx.r11.u64 = uint32_t((r29.s32 && !(r31.s32 == INT32_MIN && r29.s32 == -1)) ? r31.s32 / r29.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228f8d8
	if (!ctx.cr0.eq) goto loc_8228F8D8;
	// stb r28,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, r28.u8);
	// b 0x8228f8e0
	goto loc_8228F8E0;
loc_8228F8D8:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_8228F8E0:
	// divw r11,r31,r29
	ctx.r11.u64 = uint32_t((r29.s32 && !(r31.s32 == INT32_MIN && r29.s32 == -1)) ? r31.s32 / r29.s32 : 0);
	// mulli r11,r11,10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10));
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stb r11,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
loc_8228F8F4:
	// lwz r11,10412(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 10412);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r8,172(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r5,r9,9788
	ctx.r5.s64 = ctx.r9.s64 + 9788;
	// lwz r3,10396(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 10396);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// addi r4,r1,4464
	ctx.r4.s64 = ctx.r1.s64 + 4464;
	// bl 0x8228ee90
	ctx.lr = 0x8228F924;
	sub_8228EE90(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x8228f93c
	if (!ctx.cr0.lt) goto loc_8228F93C;
	// lwz r3,10208(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 10208);
	// bl 0x822d7b58
	ctx.lr = 0x8228F934;
	sub_822D7B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8228f97c
	goto loc_8228F97C;
loc_8228F93C:
	// lwz r31,10404(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 10404);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lwz r11,31416(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31416);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// bl 0x82215e78
	ctx.lr = 0x8228F95C;
	sub_82215E78(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31420(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31420);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// bl 0x82215e78
	ctx.lr = 0x8228F970;
	sub_82215E78(ctx, base);
	// lwz r3,10208(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 10208);
	// bl 0x822d7b58
	ctx.lr = 0x8228F978;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228F97C:
	// addi r1,r1,10368
	ctx.r1.s64 = ctx.r1.s64 + 10368;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_822B4220) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b4284
	if (!ctx.cr6.eq) goto loc_822B4284;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x822a99c0
	ctx.lr = 0x822B4250;
	sub_822A99C0(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// srawi. r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822b427c
	if (ctx.cr0.eq) goto loc_822B427C;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822b4280
	goto loc_822B4280;
loc_822B427C:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
loc_822B4280:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_822B4284:
	// lwz r3,132(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
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

DEFINE_REX_FUNC(sub_822B85B8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822b85e4
	if (ctx.cr6.lt) goto loc_822B85E4;
	// beq cr6,0x822b85d8
	if (ctx.cr6.eq) goto loc_822B85D8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x822b85e4
	if (!ctx.cr6.lt) goto loc_822B85E4;
	// lwz r3,136(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// blr 
	return;
loc_822B85D8:
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	return;
loc_822B85E4:
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B8D38) {
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
	ctx.lr = 0x822B8D40;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B8D60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r27,1
	r27.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bne cr6,0x822b8dfc
	if (!ctx.cr6.eq) goto loc_822B8DFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// beq cr6,0x822b8e00
	if (ctx.cr6.eq) goto loc_822B8E00;
loc_822B8D88:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B8DA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B8DC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,220
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 220, ctx.xer);
	// blt cr6,0x822b8ddc
	if (ctx.cr6.lt) goto loc_822B8DDC;
	// cmplwi cr6,r11,243
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 243, ctx.xer);
	// ble cr6,0x822b8de8
	if (!ctx.cr6.gt) goto loc_822B8DE8;
loc_822B8DDC:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
loc_822B8DE8:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822b8d88
	if (ctx.cr6.lt) goto loc_822B8D88;
	// b 0x822b8e00
	goto loc_822B8E00;
loc_822B8DFC:
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
loc_822B8E00:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r30,44(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,780
	ctx.r11.s64 = 51118080;
	// ori r11,r11,12483
	ctx.r11.u64 = ctx.r11.u64 | 12483;
	// bne cr6,0x822b8f14
	if (!ctx.cr6.eq) goto loc_822B8F14;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// mulli r11,r30,84
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(84));
	// ble cr6,0x822b8e2c
	if (!ctx.cr6.gt) goto loc_822B8E2C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822B8E2C:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822b8e3c
	if (ctx.cr6.gt) goto loc_822B8E3C;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_822B8E3C:
	// bl 0x822c80d0
	ctx.lr = 0x822B8E40;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822b8e70
	if (ctx.cr0.eq) goto loc_822B8E70;
	// addi r28,r3,4
	r28.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r29,r28
	r29.u64 = r28.u64;
	// b 0x822b8e64
	goto loc_822B8E64;
loc_822B8E58:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b90f0
	ctx.lr = 0x822B8E60;
	sub_822B90F0(ctx, base);
	// addi r29,r29,84
	r29.s64 = r29.s64 + 84;
loc_822B8E64:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x822b8e58
	if (!ctx.cr0.lt) goto loc_822B8E58;
	// b 0x822b8e74
	goto loc_822B8E74;
loc_822B8E70:
	// li r28,0
	r28.s64 = 0;
loc_822B8E74:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r29,0
	r29.s64 = 0;
	// stw r28,40(r31)
	REX_STORE_U32(r31.u32 + 40, r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b8ff8
	if (ctx.cr6.eq) goto loc_822B8FF8;
	// li r30,0
	r30.s64 = 0;
loc_822B8E8C:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B8EA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B8ECC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,220
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 220, ctx.xer);
	// blt cr6,0x822b8ee0
	if (ctx.cr6.lt) goto loc_822B8EE0;
	// cmplwi cr6,r11,243
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 243, ctx.xer);
	// ble cr6,0x822b8f00
	if (!ctx.cr6.gt) goto loc_822B8F00;
loc_822B8EE0:
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r30,r10
	ctx.r3.u64 = r30.u64 + ctx.r10.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x822b9628
	ctx.lr = 0x822B8EFC;
	sub_822B9628(ctx, base);
	// addi r30,r30,84
	r30.s64 = r30.s64 + 84;
loc_822B8F00:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822b8e8c
	if (ctx.cr6.lt) goto loc_822B8E8C;
	// b 0x822b8ff8
	goto loc_822B8FF8;
loc_822B8F14:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// mulli r11,r30,84
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(84));
	// ble cr6,0x822b8f24
	if (!ctx.cr6.gt) goto loc_822B8F24;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822B8F24:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822b8f34
	if (ctx.cr6.gt) goto loc_822B8F34;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_822B8F34:
	// bl 0x822c80d0
	ctx.lr = 0x822B8F38;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822b8f68
	if (ctx.cr0.eq) goto loc_822B8F68;
	// addi r28,r3,4
	r28.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r29,r28
	r29.u64 = r28.u64;
	// b 0x822b8f5c
	goto loc_822B8F5C;
loc_822B8F50:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b95d0
	ctx.lr = 0x822B8F58;
	sub_822B95D0(ctx, base);
	// addi r29,r29,84
	r29.s64 = r29.s64 + 84;
loc_822B8F5C:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x822b8f50
	if (!ctx.cr0.lt) goto loc_822B8F50;
	// b 0x822b8f6c
	goto loc_822B8F6C;
loc_822B8F68:
	// li r28,0
	r28.s64 = 0;
loc_822B8F6C:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r30,0
	r30.s64 = 0;
	// stw r28,40(r31)
	REX_STORE_U32(r31.u32 + 40, r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822b8ff8
	if (!ctx.cr6.gt) goto loc_822B8FF8;
	// li r29,0
	r29.s64 = 0;
loc_822B8F84:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B8FA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B8FC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x822b9628
	ctx.lr = 0x822B8FE4;
	sub_822B9628(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,84
	r29.s64 = r29.s64 + 84;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822b8f84
	if (ctx.cr6.lt) goto loc_822B8F84;
loc_822B8FF8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23488
	ctx.r4.s64 = ctx.r11.s64 + 23488;
	// bl 0x822b9d98
	ctx.lr = 0x822B9008;
	sub_822B9D98(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23468
	ctx.r4.s64 = ctx.r11.s64 + 23468;
	// bl 0x822b9d98
	ctx.lr = 0x822B901C;
	sub_822B9D98(ctx, base);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23452
	ctx.r4.s64 = ctx.r11.s64 + 23452;
	// bl 0x822b9d98
	ctx.lr = 0x822B9030;
	sub_822B9D98(ctx, base);
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23444
	ctx.r4.s64 = ctx.r11.s64 + 23444;
	// bl 0x822b9d98
	ctx.lr = 0x822B9044;
	sub_822B9D98(ctx, base);
	// stw r3,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23424
	ctx.r4.s64 = ctx.r11.s64 + 23424;
	// bl 0x822b9d98
	ctx.lr = 0x822B9058;
	sub_822B9D98(ctx, base);
	// stw r3,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r3.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23404
	ctx.r4.s64 = ctx.r11.s64 + 23404;
	// bl 0x822b9d98
	ctx.lr = 0x822B906C;
	sub_822B9D98(ctx, base);
	// stw r3,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822C6830) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x822a9aa8
	ctx.lr = 0x822C6858;
	sub_822A9AA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C6870;
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

DEFINE_REX_FUNC(sub_822C6F28) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lwz r9,52(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,31464(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 31464);
	// addi r4,r11,1104
	ctx.r4.s64 = ctx.r11.s64 + 1104;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822C8080) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-4204
	ctx.r11.s64 = ctx.r11.s64 + -4204;
	// addi r10,r10,-4172
	ctx.r10.s64 = ctx.r10.s64 + -4172;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C8798) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,25760
	ctx.r11.s64 = ctx.r11.s64 + 25760;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x822ce5c0
	sub_822CE5C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822C8878) {
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
	// addi r11,r11,25772
	ctx.r11.s64 = ctx.r11.s64 + 25772;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x822c88a4
	if (ctx.cr0.eq) goto loc_822C88A4;
	// bl 0x822c80a8
	ctx.lr = 0x822C88A4;
	sub_822C80A8(ctx, base);
loc_822C88A4:
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

DEFINE_REX_FUNC(sub_822C9380) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822C9388;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c9478
	if (ctx.cr6.eq) goto loc_822C9478;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// beq cr6,0x822c93d0
	if (ctx.cr6.eq) goto loc_822C93D0;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_822C93B0:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r29,16(r9)
	REX_STORE_U8(ctx.r9.u32 + 16, r29.u8);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822c93b0
	if (ctx.cr6.lt) goto loc_822C93B0;
loc_822C93D0:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c93e0
	if (ctx.cr6.eq) goto loc_822C93E0;
	// bl 0x823cdb60
	ctx.lr = 0x822C93E0;
	sub_823CDB60(ctx, base);
loc_822C93E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822c944c
	if (!ctx.cr6.gt) goto loc_822C944C;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_822C93F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x822c8728
	ctx.lr = 0x822C9400;
	sub_822C8728(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c9438
	if (ctx.cr6.eq) goto loc_822C9438;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c9430
	if (ctx.cr6.eq) goto loc_822C9430;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C9430;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822C9430:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stwx r29,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r29.u32);
loc_822C9438:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822c93f4
	if (ctx.cr6.lt) goto loc_822C93F4;
loc_822C944C:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c9460
	if (ctx.cr6.eq) goto loc_822C9460;
	// bl 0x822c80a8
	ctx.lr = 0x822C945C;
	sub_822C80A8(ctx, base);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
loc_822C9460:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c9478
	if (ctx.cr6.eq) goto loc_822C9478;
	// bl 0x82208848
	ctx.lr = 0x822C9474;
	sub_82208848(ctx, base);
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
loc_822C9478:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822CCD08) {
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
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822ccd28
	if (!ctx.cr6.eq) goto loc_822CCD28;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822ccd6c
	goto loc_822CCD6C;
loc_822CCD28:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r9,7
	ctx.r9.s64 = 7;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stb r8,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lfs f13,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// sth r7,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r7.u16);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822cdf98
	ctx.lr = 0x822CCD68;
	sub_822CDF98(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_822CCD6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CE198) {
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
	// lbz r11,42(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 42);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822ce1c0
	if (ctx.cr0.eq) goto loc_822CE1C0;
loc_822CE1B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822ce208
	goto loc_822CE208;
loc_822CE1C0:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x822094c0
	ctx.lr = 0x822CE1C8;
	sub_822094C0(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ce1b8
	if (ctx.cr0.eq) goto loc_822CE1B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823cb148
	ctx.lr = 0x822CE1E4;
	sub_823CB148(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822ce1b8
	if (!ctx.cr0.eq) goto loc_822CE1B8;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822ce200
	if (!ctx.cr6.eq) goto loc_822CE200;
	// stb r11,40(r31)
	REX_STORE_U8(r31.u32 + 40, ctx.r11.u8);
loc_822CE200:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,42(r31)
	REX_STORE_U8(r31.u32 + 42, ctx.r11.u8);
loc_822CE208:
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

DEFINE_REX_FUNC(sub_822D0758) {
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
	ctx.lr = 0x822D0760;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d08b0
	if (ctx.cr6.eq) goto loc_822D08B0;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bne cr6,0x822d08b0
	if (!ctx.cr6.eq) goto loc_822D08B0;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// li r27,0
	r27.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r11,-20
	r30.s64 = ctx.r11.s64 + -20;
	// li r31,0
	r31.s64 = 0;
loc_822D0798:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822d0668
	ctx.lr = 0x822D07A4;
	sub_822D0668(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822d0800
	if (ctx.cr6.eq) goto loc_822D0800;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x822d07d4
	if (!ctx.cr6.eq) goto loc_822D07D4;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// add r28,r31,r11
	r28.u64 = r31.u64 + ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8242f4f0
	ctx.lr = 0x822D07C4;
	sub_8242F4F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822d07d4
	if (ctx.cr0.eq) goto loc_822D07D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_822D07D4:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r8,r26,16
	ctx.r8.u64 = r26.u32 & 0xFFFF;
	// stw r9,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r9.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// stw r8,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r8.u32);
	// stwx r29,r31,r10
	REX_STORE_U32(r31.u32 + ctx.r10.u32, r29.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stwu r11,12(r30)
	ea = 12 + r30.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r30.u32 = ea;
loc_822D0800:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// blt cr6,0x822d0798
	if (ctx.cr6.lt) goto loc_822D0798;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D0830;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822d08b0
	if (ctx.cr6.eq) goto loc_822D08B0;
	// li r30,0
	r30.s64 = 0;
loc_822D0840:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x822d0860
	if (!ctx.cr6.lt) goto loc_822D0860;
	// addi r5,r24,8
	ctx.r5.s64 = r24.s64 + 8;
	// blt cr6,0x822d0868
	if (ctx.cr6.lt) goto loc_822D0868;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
loc_822D0860:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x822d086c
	goto loc_822D086C;
loc_822D0868:
	// li r6,56
	ctx.r6.s64 = 56;
loc_822D086C:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D0888;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D08A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// blt cr6,0x822d0840
	if (ctx.cr6.lt) goto loc_822D0840;
loc_822D08B0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_822D47C8) {
	REX_FUNC_PROLOGUE();
	// b 0x822d4730
	sub_822D4730(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D48B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// stfd f2,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f2.u64);
	// addi r11,r11,-2744
	ctx.r11.s64 = ctx.r11.s64 + -2744;
	// lfs f0,168(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bne cr6,0x822d4910
	if (!ctx.cr6.eq) goto loc_822D4910;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x822d4908
	if (!ctx.cr6.eq) goto loc_822D4908;
	// lwz r10,24(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 24);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d4900
	if (ctx.cr0.eq) goto loc_822D4900;
	// lfd f0,16(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_822D4900:
	// lfd f1,16(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// blr 
	return;
loc_822D4908:
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// b 0x822d49c8
	goto loc_822D49C8;
loc_822D4910:
	// fabs f13,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// li r10,0
	ctx.r10.s64 = 0;
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822d4934
	if (!ctx.cr6.gt) goto loc_822D4934;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// li r10,2
	ctx.r10.s64 = 2;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822D4934:
	// fdiv f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 / ctx.f12.f64;
	// lfd f13,24(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822d495c
	if (!ctx.cr6.gt) goto loc_822D495C;
	// lfd f13,40(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f12,176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// fadd f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fmsub f0,f13,f0,f12
	ctx.f0.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f12.f64);
	// fdiv f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 / ctx.f11.f64;
loc_822D495C:
	// fmul f5,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f0.f64 * ctx.f0.f64;
	// lfd f12,72(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// lfd f13,80(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfd f11,112(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 112);
	// lfd f10,64(r11)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// lfd f9,104(r11)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// lfd f8,56(r11)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// lfd f7,96(r11)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r11.u32 + 96);
	// lfd f6,88(r11)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + 88);
	// fmadd f13,f13,f5,f12
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f12.f64);
	// fadd f12,f11,f5
	ctx.f12.f64 = ctx.f11.f64 + ctx.f5.f64;
	// fmadd f13,f13,f5,f10
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f10.f64);
	// fmadd f12,f12,f5,f9
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f5.f64, ctx.f9.f64);
	// fmadd f13,f13,f5,f8
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f8.f64);
	// fmadd f12,f12,f5,f7
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f5.f64, ctx.f7.f64);
	// fmul f13,f13,f5
	ctx.f13.f64 = ctx.f13.f64 * ctx.f5.f64;
	// fmadd f12,f12,f5,f6
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f5.f64, ctx.f6.f64);
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// ble cr6,0x822d49b8
	if (!ctx.cr6.gt) goto loc_822D49B8;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_822D49B8:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// lfdx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
loc_822D49C8:
	// lfd f13,16(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// lwz r11,16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fsel f1,f2,f0,f13
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// beqlr 
	if (ctx.cr0.eq) return;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_66) {
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
	// stvx128 v66,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v66.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-976
	ctx.r11.s64 = -976;
	// stvx128 v67,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v67.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-960
	ctx.r11.s64 = -960;
	// stvx128 v68,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v68.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-944
	ctx.r11.s64 = -944;
	// stvx128 v69,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v69.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-928
	ctx.r11.s64 = -928;
	// stvx128 v70,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v70.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-912
	ctx.r11.s64 = -912;
	// stvx128 v71,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v71.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-896
	ctx.r11.s64 = -896;
	// stvx128 v72,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v72.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-880
	ctx.r11.s64 = -880;
	// stvx128 v73,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v73.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(sub_822D8E64) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D8E68) {
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
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// and. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d8ea0
	if (ctx.cr0.eq) goto loc_822D8EA0;
	// bl 0x822db6c0
	ctx.lr = 0x822D8E8C;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D8E98;
	sub_822D6910(ctx, base);
loc_822D8E98:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822d8ef0
	goto loc_822D8EF0;
loc_822D8EA0:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bgt cr6,0x822d8eac
	if (ctx.cr6.gt) goto loc_822D8EAC;
	// li r4,4
	ctx.r4.s64 = 4;
loc_822D8EAC:
	// addi r31,r4,-1
	r31.s64 = ctx.r4.s64 + -1;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// add r11,r30,r3
	ctx.r11.u64 = r30.u64 + ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822d8ed4
	if (!ctx.cr6.gt) goto loc_822D8ED4;
	// bl 0x822db6c0
	ctx.lr = 0x822D8EC4;
	sub_822DB6C0(ctx, base);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x822d8ef0
	goto loc_822D8EF0;
loc_822D8ED4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822d9828
	ctx.lr = 0x822D8EDC;
	sub_822D9828(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d8e98
	if (ctx.cr0.eq) goto loc_822D8E98;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + r30.u64;
	// andc r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ~r31.u64;
	// stw r3,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r3.u32);
loc_822D8EF0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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

DEFINE_REX_FUNC(sub_822DAB20) {
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
	ctx.lr = 0x822DAB28;
	// stwu r1,-1328(r1)
	ea = -1328 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r27,r30
	r27.u64 = r30.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mr r25,r30
	r25.u64 = r30.u64;
	// mr r16,r30
	r16.u64 = r30.u64;
	// bne cr6,0x822dab78
	if (!ctx.cr6.eq) goto loc_822DAB78;
loc_822DAB60:
	// bl 0x822db6c0
	ctx.lr = 0x822DAB64;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822DAB70;
	sub_822D6910(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822db648
	goto loc_822DB648;
loc_822DAB78:
	// lwz r11,12(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822dac14
	if (!ctx.cr0.eq) goto loc_822DAC14;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x822e15a8
	ctx.lr = 0x822DAB8C;
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
	// beq cr6,0x822dabc8
	if (ctx.cr6.eq) goto loc_822DABC8;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x822dabc8
	if (ctx.cr6.eq) goto loc_822DABC8;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(72));
	// lwzx r9,r7,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x822dabcc
	goto loc_822DABCC;
loc_822DABC8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_822DABCC:
	// lbz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 40);
	// rlwinm. r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822dab60
	if (!ctx.cr0.eq) goto loc_822DAB60;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822dac04
	if (ctx.cr6.eq) goto loc_822DAC04;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x822dac04
	if (ctx.cr6.eq) goto loc_822DAC04;
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
	// b 0x822dac08
	goto loc_822DAC08;
loc_822DAC04:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822DAC08:
	// lbz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822dab60
	if (!ctx.cr0.eq) goto loc_822DAB60;
loc_822DAC14:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822dab60
	if (ctx.cr6.eq) goto loc_822DAB60;
	// bl 0x822dcb08
	ctx.lr = 0x822DAC20;
	sub_822DCB08(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822db614
	if (ctx.cr6.eq) goto loc_822DB614;
	// bl 0x822dcb08
	ctx.lr = 0x822DAC30;
	sub_822DCB08(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822db614
	if (ctx.cr6.eq) goto loc_822DB614;
	// lbz r29,0(r31)
	r29.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r24,r30
	r24.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// extsb. r8,r29
	ctx.r8.s64 = r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r14,r30
	r14.u64 = r30.u64;
	// beq 0x822db60c
	if (ctx.cr0.eq) goto loc_822DB60C;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r21,112(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lwz r28,112(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r19,r31,-1
	r19.s64 = r31.s64 + -1;
	// lis r15,-32254
	r15.s64 = -2113798144;
	// lis r20,-32254
	r20.s64 = -2113798144;
	// addi r23,r11,88
	r23.s64 = ctx.r11.s64 + 88;
	// addi r22,r10,-2112
	r22.s64 = ctx.r10.s64 + -2112;
	// addi r17,r9,27152
	r17.s64 = ctx.r9.s64 + 27152;
loc_822DAC8C:
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt cr6,0x822db60c
	if (ctx.cr6.lt) goto loc_822DB60C;
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// blt cr6,0x822dacb8
	if (ctx.cr6.lt) goto loc_822DACB8;
	// cmpwi cr6,r8,120
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 120, ctx.xer);
	// bgt cr6,0x822dacb8
	if (ctx.cr6.gt) goto loc_822DACB8;
	// add r11,r8,r17
	ctx.r11.u64 = ctx.r8.u64 + r17.u64;
	// lbz r11,-32(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x822dacbc
	goto loc_822DACBC;
loc_822DACB8:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_822DACBC:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r11,r11,r17
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r17.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x822db5f0
	if (ctx.cr6.gt) goto loc_822DB5F0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822daed4
	if (ctx.cr6.eq) goto loc_822DAED4;
	// bdz 0x822dad08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DAD08;
	// bdz 0x822dad28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DAD28;
	// bdz 0x822dad78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DAD78;
	// bdz 0x822dadc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DADC4;
	// bdz 0x822dadcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DADCC;
	// bdz 0x822dae04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DAE04;
	// b 0x822daf20
	goto loc_822DAF20;
loc_822DAD08:
	// li r27,0
	r27.s64 = 0;
	// li r25,-1
	r25.s64 = -1;
	// mr r21,r27
	r21.u64 = r27.u64;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// mr r16,r27
	r16.u64 = r27.u64;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// b 0x822db5f0
	goto loc_822DB5F0;
loc_822DAD28:
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// beq cr6,0x822dad70
	if (ctx.cr6.eq) goto loc_822DAD70;
	// cmpwi cr6,r8,35
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 35, ctx.xer);
	// beq cr6,0x822dad68
	if (ctx.cr6.eq) goto loc_822DAD68;
	// cmpwi cr6,r8,43
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 43, ctx.xer);
	// beq cr6,0x822dad60
	if (ctx.cr6.eq) goto loc_822DAD60;
	// cmpwi cr6,r8,45
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 45, ctx.xer);
	// beq cr6,0x822dad58
	if (ctx.cr6.eq) goto loc_822DAD58;
	// cmpwi cr6,r8,48
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 48, ctx.xer);
	// bne cr6,0x822db5f0
	if (!ctx.cr6.eq) goto loc_822DB5F0;
	// ori r27,r27,8
	r27.u64 = r27.u64 | 8;
	// b 0x822db5f0
	goto loc_822DB5F0;
loc_822DAD58:
	// ori r27,r27,4
	r27.u64 = r27.u64 | 4;
	// b 0x822db5f0
	goto loc_822DB5F0;
loc_822DAD60:
	// ori r27,r27,1
	r27.u64 = r27.u64 | 1;
	// b 0x822db5f0
	goto loc_822DB5F0;
loc_822DAD68:
	// ori r27,r27,128
	r27.u64 = r27.u64 | 128;
	// b 0x822db5f0
	goto loc_822DB5F0;
loc_822DAD70:
	// ori r27,r27,2
	r27.u64 = r27.u64 | 2;
	// b 0x822db5f0
	goto loc_822DB5F0;
loc_822DAD78:
	// cmpwi cr6,r8,42
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 42, ctx.xer);
	// bne cr6,0x822dadac
	if (!ctx.cr6.eq) goto loc_822DADAC;
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bge cr6,0x822db5f0
	if (!ctx.cr6.lt) goto loc_822DB5F0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ori r27,r27,4
	r27.u64 = r27.u64 | 4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x822dadbc
	goto loc_822DADBC;
loc_822DADAC:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mulli r11,r11,10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
loc_822DADBC:
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x822db5f0
	goto loc_822DB5F0;
loc_822DADC4:
	// li r25,0
	r25.s64 = 0;
	// b 0x822db5f0
	goto loc_822DB5F0;
loc_822DADCC:
	// cmpwi cr6,r8,42
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 42, ctx.xer);
	// bne cr6,0x822dadf4
	if (!ctx.cr6.eq) goto loc_822DADF4;
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r25,4(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bge cr6,0x822db5f0
	if (!ctx.cr6.lt) goto loc_822DB5F0;
	// li r25,-1
	r25.s64 = -1;
	// b 0x822db5f0
	goto loc_822DB5F0;
loc_822DADF4:
	// mulli r11,r25,10
	ctx.r11.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(10));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r25,r11,-48
	r25.s64 = ctx.r11.s64 + -48;
	// b 0x822db5f0
	goto loc_822DB5F0;
loc_822DAE04:
	// cmpwi cr6,r8,73
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 73, ctx.xer);
	// beq cr6,0x822dae54
	if (ctx.cr6.eq) goto loc_822DAE54;
	// cmpwi cr6,r8,104
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 104, ctx.xer);
	// beq cr6,0x822dae4c
	if (ctx.cr6.eq) goto loc_822DAE4C;
	// cmpwi cr6,r8,108
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 108, ctx.xer);
	// beq cr6,0x822dae2c
	if (ctx.cr6.eq) goto loc_822DAE2C;
	// cmpwi cr6,r8,119
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 119, ctx.xer);
	// bne cr6,0x822db5f0
	if (!ctx.cr6.eq) goto loc_822DB5F0;
	// ori r27,r27,2048
	r27.u64 = r27.u64 | 2048;
	// b 0x822db5f0
	goto loc_822DB5F0;
loc_822DAE2C:
	// lbz r11,1(r19)
	ctx.r11.u64 = REX_LOAD_U8(r19.u32 + 1);
	// cmplwi cr6,r11,108
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 108, ctx.xer);
	// bne cr6,0x822dae44
	if (!ctx.cr6.eq) goto loc_822DAE44;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// ori r27,r27,4096
	r27.u64 = r27.u64 | 4096;
	// b 0x822db5f0
	goto loc_822DB5F0;
loc_822DAE44:
	// ori r27,r27,16
	r27.u64 = r27.u64 | 16;
	// b 0x822db5f0
	goto loc_822DB5F0;
loc_822DAE4C:
	// ori r27,r27,32
	r27.u64 = r27.u64 | 32;
	// b 0x822db5f0
	goto loc_822DB5F0;
loc_822DAE54:
	// lbz r11,1(r19)
	ctx.r11.u64 = REX_LOAD_U8(r19.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,54
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 54, ctx.xer);
	// bne cr6,0x822dae7c
	if (!ctx.cr6.eq) goto loc_822DAE7C;
	// lbz r10,2(r19)
	ctx.r10.u64 = REX_LOAD_U8(r19.u32 + 2);
	// cmplwi cr6,r10,52
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 52, ctx.xer);
	// bne cr6,0x822dae7c
	if (!ctx.cr6.eq) goto loc_822DAE7C;
	// addi r19,r19,2
	r19.s64 = r19.s64 + 2;
	// ori r27,r27,32768
	r27.u64 = r27.u64 | 32768;
	// b 0x822db5f0
	goto loc_822DB5F0;
loc_822DAE7C:
	// cmpwi cr6,r11,51
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 51, ctx.xer);
	// bne cr6,0x822dae9c
	if (!ctx.cr6.eq) goto loc_822DAE9C;
	// lbz r10,2(r19)
	ctx.r10.u64 = REX_LOAD_U8(r19.u32 + 2);
	// cmplwi cr6,r10,50
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 50, ctx.xer);
	// bne cr6,0x822dae9c
	if (!ctx.cr6.eq) goto loc_822DAE9C;
	// addi r19,r19,2
	r19.s64 = r19.s64 + 2;
	// rlwinm r27,r27,0,17,15
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// b 0x822db5f0
	goto loc_822DB5F0;
loc_822DAE9C:
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x822db5f0
	if (ctx.cr6.eq) goto loc_822DB5F0;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beq cr6,0x822db5f0
	if (ctx.cr6.eq) goto loc_822DB5F0;
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// beq cr6,0x822db5f0
	if (ctx.cr6.eq) goto loc_822DB5F0;
	// cmpwi cr6,r11,117
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 117, ctx.xer);
	// beq cr6,0x822db5f0
	if (ctx.cr6.eq) goto loc_822DB5F0;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x822db5f0
	if (ctx.cr6.eq) goto loc_822DB5F0;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// beq cr6,0x822db5f0
	if (ctx.cr6.eq) goto loc_822DB5F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_822DAED4:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// clrlwi r3,r29,24
	ctx.r3.u64 = r29.u32 & 0xFF;
	// li r16,0
	r16.s64 = 0;
	// bl 0x822e17e0
	ctx.lr = 0x822DAEE4;
	sub_822E17E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822daf08
	if (ctx.cr0.eq) goto loc_822DAF08;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822deaa0
	ctx.lr = 0x822DAEFC;
	sub_822DEAA0(ctx, base);
	// lbzu r29,1(r19)
	ea = 1 + r19.u32;
	r29.u64 = REX_LOAD_U8(ea);
	r19.u32 = ea;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq 0x822dab60
	if (ctx.cr0.eq) goto loc_822DAB60;
loc_822DAF08:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822deaa0
	ctx.lr = 0x822DAF18;
	sub_822DEAA0(ctx, base);
	// lwz r24,80(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x822db5f0
	goto loc_822DB5F0;
loc_822DAF20:
	// addi r11,r8,-65
	ctx.r11.s64 = ctx.r8.s64 + -65;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// bgt cr6,0x822db420
	if (ctx.cr6.gt) goto loc_822DB420;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,27248
	ctx.r12.s64 = ctx.r12.s64 + 27248;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32210
	ctx.r12.s64 = -2110914560;
	// addi r12,r12,-20652
	ctx.r12.s64 = ctx.r12.s64 + -20652;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822DB130;
	case 1:
		goto loc_822DB420;
	case 2:
		goto loc_822DAF54;
	case 3:
		goto loc_822DB420;
	case 4:
		goto loc_822DB130;
	case 5:
		goto loc_822DB420;
	case 6:
		goto loc_822DB130;
	case 7:
		goto loc_822DB420;
	case 8:
		goto loc_822DB420;
	case 9:
		goto loc_822DB420;
	case 10:
		goto loc_822DB420;
	case 11:
		goto loc_822DB420;
	case 12:
		goto loc_822DB420;
	case 13:
		goto loc_822DB420;
	case 14:
		goto loc_822DB420;
	case 15:
		goto loc_822DB420;
	case 16:
		goto loc_822DB420;
	case 17:
		goto loc_822DB420;
	case 18:
		goto loc_822DB03C;
	case 19:
		goto loc_822DB420;
	case 20:
		goto loc_822DB420;
	case 21:
		goto loc_822DB420;
	case 22:
		goto loc_822DB420;
	case 23:
		goto loc_822DB270;
	case 24:
		goto loc_822DB420;
	case 25:
		goto loc_822DAFC0;
	case 26:
		goto loc_822DB420;
	case 27:
		goto loc_822DB420;
	case 28:
		goto loc_822DB420;
	case 29:
		goto loc_822DB420;
	case 30:
		goto loc_822DB420;
	case 31:
		goto loc_822DB420;
	case 32:
		goto loc_822DB13C;
	case 33:
		goto loc_822DB420;
	case 34:
		goto loc_822DAF64;
	case 35:
		goto loc_822DB260;
	case 36:
		goto loc_822DB13C;
	case 37:
		goto loc_822DB13C;
	case 38:
		goto loc_822DB13C;
	case 39:
		goto loc_822DB420;
	case 40:
		goto loc_822DB260;
	case 41:
		goto loc_822DB420;
	case 42:
		goto loc_822DB420;
	case 43:
		goto loc_822DB420;
	case 44:
		goto loc_822DB420;
	case 45:
		goto loc_822DB0F4;
	case 46:
		goto loc_822DB2A8;
	case 47:
		goto loc_822DB26C;
	case 48:
		goto loc_822DB420;
	case 49:
		goto loc_822DB420;
	case 50:
		goto loc_822DB04C;
	case 51:
		goto loc_822DB420;
	case 52:
		goto loc_822DB264;
	case 53:
		goto loc_822DB420;
	case 54:
		goto loc_822DB420;
	case 55:
		goto loc_822DB278;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_822DAF54:
	// andi. r11,r27,2096
	ctx.r11.u64 = r27.u64 & 2096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822daf64
	if (!ctx.cr0.eq) goto loc_822DAF64;
	// ori r27,r27,2048
	r27.u64 = r27.u64 | 2048;
loc_822DAF64:
	// andi. r11,r27,2064
	ctx.r11.u64 = r27.u64 & 2064;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// beq 0x822dafa4
	if (ctx.cr0.eq) goto loc_822DAFA4;
	// li r5,512
	ctx.r5.s64 = 512;
	// lhz r6,6(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822e17d8
	ctx.lr = 0x822DAF90;
	sub_822E17D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822dafb4
	if (ctx.cr0.eq) goto loc_822DAFB4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// b 0x822dafb4
	goto loc_822DAFB4;
loc_822DAFA4:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stb r11,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
loc_822DAFB4:
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// b 0x822db420
	goto loc_822DB420;
loc_822DAFC0:
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822db010
	if (ctx.cr6.eq) goto loc_822DB010;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822db010
	if (ctx.cr6.eq) goto loc_822DB010;
	// rlwinm. r9,r27,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// beq 0x822db004
	if (ctx.cr0.eq) goto loc_822DB004;
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// li r16,1
	r16.s64 = 1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r6,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r6.s64 = temp.s64;
	// b 0x822db41c
	goto loc_822DB41C;
loc_822DB004:
	// lha r6,0(r11)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// li r16,0
	r16.s64 = 0;
	// b 0x822db41c
	goto loc_822DB41C;
loc_822DB010:
	// lwz r28,27144(r20)
	r28.u64 = REX_LOAD_U32(r20.u32 + 27144);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_822DB01C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822db01c
	if (!ctx.cr6.eq) goto loc_822DB01C;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_822DB030:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x822db41c
	goto loc_822DB41C;
loc_822DB03C:
	// andi. r11,r27,2096
	ctx.r11.u64 = r27.u64 & 2096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822db04c
	if (!ctx.cr0.eq) goto loc_822DB04C;
	// ori r27,r27,2048
	r27.u64 = r27.u64 | 2048;
loc_822DB04C:
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(r25.s32, -1, ctx.xer);
	// bne cr6,0x822db060
	if (!ctx.cr6.eq) goto loc_822DB060;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// b 0x822db064
	goto loc_822DB064;
loc_822DB060:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_822DB064:
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// andi. r9,r27,2064
	ctx.r9.u64 = r27.u64 & 2064;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r28,4(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq 0x822db0c0
	if (ctx.cr0.eq) goto loc_822DB0C0;
	// bne cr6,0x822db08c
	if (!ctx.cr6.eq) goto loc_822DB08C;
	// lwz r28,27148(r15)
	r28.u64 = REX_LOAD_U32(r15.u32 + 27148);
loc_822DB08C:
	// li r16,1
	r16.s64 = 1;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// b 0x822db0ac
	goto loc_822DB0AC;
loc_822DB098:
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x822db0b4
	if (ctx.cr0.eq) goto loc_822DB0B4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_822DB0AC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822db098
	if (!ctx.cr6.eq) goto loc_822DB098;
loc_822DB0B4:
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// srawi r6,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// b 0x822db41c
	goto loc_822DB41C;
loc_822DB0C0:
	// bne cr6,0x822db0c8
	if (!ctx.cr6.eq) goto loc_822DB0C8;
	// lwz r28,27144(r20)
	r28.u64 = REX_LOAD_U32(r20.u32 + 27144);
loc_822DB0C8:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// b 0x822db0e4
	goto loc_822DB0E4;
loc_822DB0D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x822db0ec
	if (ctx.cr0.eq) goto loc_822DB0EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822DB0E4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822db0d0
	if (!ctx.cr6.eq) goto loc_822DB0D0;
loc_822DB0EC:
	// subf r6,r28,r11
	ctx.r6.u64 = ctx.r11.u64 - r28.u64;
	// b 0x822db41c
	goto loc_822DB41C;
loc_822DB0F4:
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822d6e70
	ctx.lr = 0x822DB108;
	sub_822D6E70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822dab60
	if (ctx.cr0.eq) goto loc_822DAB60;
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822db120
	if (ctx.cr0.eq) goto loc_822DB120;
	// sth r24,0(r31)
	REX_STORE_U16(r31.u32 + 0, r24.u16);
	// b 0x822db124
	goto loc_822DB124;
loc_822DB120:
	// stw r24,0(r31)
	REX_STORE_U32(r31.u32 + 0, r24.u32);
loc_822DB124:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// b 0x822db5dc
	goto loc_822DB5DC;
loc_822DB130:
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// li r21,1
	r21.s64 = 1;
	// extsb r29,r11
	r29.s64 = ctx.r11.s8;
loc_822DB13C:
	// ori r27,r27,64
	r27.u64 = r27.u64 | 64;
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// li r30,512
	r30.s64 = 512;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bge cr6,0x822db158
	if (!ctx.cr6.lt) goto loc_822DB158;
	// li r25,6
	r25.s64 = 6;
	// b 0x822db1a8
	goto loc_822DB1A8;
loc_822DB158:
	// bne cr6,0x822db170
	if (!ctx.cr6.eq) goto loc_822DB170;
	// extsb r11,r29
	ctx.r11.s64 = r29.s8;
	// cmpwi cr6,r11,103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 103, ctx.xer);
	// bne cr6,0x822db1a8
	if (!ctx.cr6.eq) goto loc_822DB1A8;
	// li r25,1
	r25.s64 = 1;
	// b 0x822db1a8
	goto loc_822DB1A8;
loc_822DB170:
	// cmpwi cr6,r25,512
	ctx.cr6.compare<int32_t>(r25.s32, 512, ctx.xer);
	// ble cr6,0x822db17c
	if (!ctx.cr6.gt) goto loc_822DB17C;
	// li r25,512
	r25.s64 = 512;
loc_822DB17C:
	// cmpwi cr6,r25,163
	ctx.cr6.compare<int32_t>(r25.s32, 163, ctx.xer);
	// ble cr6,0x822db1a8
	if (!ctx.cr6.gt) goto loc_822DB1A8;
	// addi r31,r25,349
	r31.s64 = r25.s64 + 349;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d9828
	ctx.lr = 0x822DB190;
	sub_822D9828(ctx, base);
	// mr. r14,r3
	r14.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq 0x822db1a4
	if (ctx.cr0.eq) goto loc_822DB1A4;
	// mr r28,r14
	r28.u64 = r14.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// b 0x822db1a8
	goto loc_822DB1A8;
loc_822DB1A4:
	// li r25,163
	r25.s64 = 163;
loc_822DB1A8:
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// lwz r10,24(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 24);
	// extsb r31,r29
	r31.s64 = r29.s8;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// std r10,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// bctrl 
	ctx.lr = 0x822DB1E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm. r30,r27,0,24,24
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822db20c
	if (ctx.cr0.eq) goto loc_822DB20C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x822db20c
	if (!ctx.cr6.eq) goto loc_822DB20C;
	// lwz r11,36(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 36);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DB20C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DB20C:
	// cmpwi cr6,r31,103
	ctx.cr6.compare<int32_t>(r31.s32, 103, ctx.xer);
	// bne cr6,0x822db230
	if (!ctx.cr6.eq) goto loc_822DB230;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x822db230
	if (!ctx.cr6.eq) goto loc_822DB230;
	// lwz r11,32(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DB230;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DB230:
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x822db244
	if (!ctx.cr6.eq) goto loc_822DB244;
	// ori r27,r27,256
	r27.u64 = r27.u64 | 256;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_822DB244:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_822DB248:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822db248
	if (!ctx.cr6.eq) goto loc_822DB248;
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// b 0x822db030
	goto loc_822DB030;
loc_822DB260:
	// ori r27,r27,64
	r27.u64 = r27.u64 | 64;
loc_822DB264:
	// li r8,10
	ctx.r8.s64 = 10;
	// b 0x822db2b8
	goto loc_822DB2B8;
loc_822DB26C:
	// li r25,8
	r25.s64 = 8;
loc_822DB270:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x822db27c
	goto loc_822DB27C;
loc_822DB278:
	// li r11,39
	ctx.r11.s64 = 39;
loc_822DB27C:
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// rlwinm. r10,r27,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r8,16
	ctx.r8.s64 = 16;
	// beq 0x822db2b8
	if (ctx.cr0.eq) goto loc_822DB2B8;
	// addi r11,r11,81
	ctx.r11.s64 = ctx.r11.s64 + 81;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,89(r1)
	REX_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// stb r10,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// b 0x822db2b8
	goto loc_822DB2B8;
loc_822DB2A8:
	// rlwinm. r11,r27,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,8
	ctx.r8.s64 = 8;
	// beq 0x822db2b8
	if (ctx.cr0.eq) goto loc_822DB2B8;
	// ori r27,r27,512
	r27.u64 = r27.u64 | 512;
loc_822DB2B8:
	// rlwinm. r11,r27,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822db2c8
	if (!ctx.cr0.eq) goto loc_822DB2C8;
	// rlwinm. r11,r27,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822db2dc
	if (ctx.cr0.eq) goto loc_822DB2DC;
loc_822DB2C8:
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// b 0x822db32c
	goto loc_822DB32C;
loc_822DB2DC:
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822db30c
	if (ctx.cr0.eq) goto loc_822DB30C;
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// beq 0x822db304
	if (ctx.cr0.eq) goto loc_822DB304;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x822db32c
	goto loc_822DB32C;
loc_822DB304:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x822db32c
	goto loc_822DB32C;
loc_822DB30C:
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// beq 0x822db328
	if (ctx.cr0.eq) goto loc_822DB328;
	// lwa r11,4(r11)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 4));
	// b 0x822db32c
	goto loc_822DB32C;
loc_822DB328:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_822DB32C:
	// rlwinm. r10,r27,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822db344
	if (ctx.cr0.eq) goto loc_822DB344;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x822db344
	if (!ctx.cr6.lt) goto loc_822DB344;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// ori r27,r27,256
	r27.u64 = r27.u64 | 256;
loc_822DB344:
	// rlwinm. r10,r27,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822db358
	if (!ctx.cr0.eq) goto loc_822DB358;
	// rlwinm. r10,r27,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822db358
	if (!ctx.cr0.eq) goto loc_822DB358;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
loc_822DB358:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bge cr6,0x822db368
	if (!ctx.cr6.lt) goto loc_822DB368;
	// li r25,1
	r25.s64 = 1;
	// b 0x822db378
	goto loc_822DB378;
loc_822DB368:
	// rlwinm r27,r27,0,29,27
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmpwi cr6,r25,512
	ctx.cr6.compare<int32_t>(r25.s32, 512, ctx.xer);
	// ble cr6,0x822db378
	if (!ctx.cr6.gt) goto loc_822DB378;
	// li r25,512
	r25.s64 = 512;
loc_822DB378:
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x822db388
	if (!ctx.cr6.eq) goto loc_822DB388;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_822DB388:
	// addi r9,r1,655
	ctx.r9.s64 = ctx.r1.s64 + 655;
loc_822DB38C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// bgt cr6,0x822db3a0
	if (ctx.cr6.gt) goto loc_822DB3A0;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822db3e4
	if (ctx.cr6.eq) goto loc_822DB3E4;
loc_822DB3A0:
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// divdu r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 ? ctx.r11.u64 / ctx.r10.u64 : 0;
	// tdllei r10,0
	if (ctx.r10.s64 == 0ll || ctx.r10.u64 < 0ull) ppc_trap(ctx, base, 0);
	// mulld r7,r7,r10
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r10.u64);
	// subf r7,r7,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r7.u64;
	// divdu r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 ? ctx.r11.u64 / ctx.r10.u64 : 0;
	// tdllei r10,0
	if (ctx.r10.s64 == 0ll || ctx.r10.u64 < 0ull) ppc_trap(ctx, base, 0);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// ble cr6,0x822db3d4
	if (!ctx.cr6.gt) goto loc_822DB3D4;
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_822DB3D4:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stb r10,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x822db38c
	goto loc_822DB38C;
loc_822DB3E4:
	// addi r11,r1,655
	ctx.r11.s64 = ctx.r1.s64 + 655;
	// rlwinm. r10,r27,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r6,r9,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r9.u64;
	// addi r28,r9,1
	r28.s64 = ctx.r9.s64 + 1;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// beq 0x822db420
	if (ctx.cr0.eq) goto loc_822DB420;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x822db410
	if (ctx.cr6.eq) goto loc_822DB410;
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x822db420
	if (ctx.cr6.eq) goto loc_822DB420;
loc_822DB410:
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbu r11,-1(r28)
	ea = -1 + r28.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	r28.u32 = ea;
loc_822DB41C:
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
loc_822DB420:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822db5dc
	if (!ctx.cr6.eq) goto loc_822DB5DC;
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822db470
	if (ctx.cr0.eq) goto loc_822DB470;
	// rlwinm. r11,r27,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822db444
	if (ctx.cr0.eq) goto loc_822DB444;
	// li r11,45
	ctx.r11.s64 = 45;
	// b 0x822db450
	goto loc_822DB450;
loc_822DB444:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822db460
	if (ctx.cr0.eq) goto loc_822DB460;
	// li r11,43
	ctx.r11.s64 = 43;
loc_822DB450:
	// li r30,1
	r30.s64 = 1;
	// stb r11,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// b 0x822db474
	goto loc_822DB474;
loc_822DB460:
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822db470
	if (ctx.cr0.eq) goto loc_822DB470;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x822db450
	goto loc_822DB450;
loc_822DB470:
	// lwz r30,92(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_822DB474:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm. r10,r27,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// subf r29,r30,r11
	r29.u64 = ctx.r11.u64 - r30.u64;
	// bne 0x822db4bc
	if (!ctx.cr0.eq) goto loc_822DB4BC;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822db4bc
	if (!ctx.cr6.gt) goto loc_822DB4BC;
loc_822DB494:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x822deaa0
	ctx.lr = 0x822DB4A8;
	sub_822DEAA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822db4bc
	if (ctx.cr6.eq) goto loc_822DB4BC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt cr6,0x822db494
	if (ctx.cr6.gt) goto loc_822DB494;
loc_822DB4BC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822deb38
	ctx.lr = 0x822DB4D0;
	sub_822DEB38(ctx, base);
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822db514
	if (ctx.cr0.eq) goto loc_822DB514;
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822db514
	if (!ctx.cr0.eq) goto loc_822DB514;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822db514
	if (!ctx.cr6.gt) goto loc_822DB514;
loc_822DB4EC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x822deaa0
	ctx.lr = 0x822DB500;
	sub_822DEAA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822db514
	if (ctx.cr6.eq) goto loc_822DB514;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt cr6,0x822db4ec
	if (ctx.cr6.gt) goto loc_822DB4EC;
loc_822DB514:
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x822db584
	if (ctx.cr6.eq) goto loc_822DB584;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822db584
	if (!ctx.cr6.gt) goto loc_822DB584;
	// addi r30,r28,-2
	r30.s64 = r28.s64 + -2;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_822DB530:
	// li r5,6
	ctx.r5.s64 = 6;
	// lhzu r6,2(r30)
	ea = 2 + r30.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x822e17d8
	ctx.lr = 0x822DB548;
	sub_822E17D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822db578
	if (!ctx.cr0.eq) goto loc_822DB578;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822db578
	if (ctx.cr6.eq) goto loc_822DB578;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x822deb38
	ctx.lr = 0x822DB56C;
	sub_822DEB38(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x822db530
	if (!ctx.cr6.eq) goto loc_822DB530;
	// b 0x822db594
	goto loc_822DB594;
loc_822DB578:
	// li r24,-1
	r24.s64 = -1;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// b 0x822db598
	goto loc_822DB598;
loc_822DB584:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822deb38
	ctx.lr = 0x822DB594;
	sub_822DEB38(ctx, base);
loc_822DB594:
	// lwz r24,80(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_822DB598:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt cr6,0x822db5dc
	if (ctx.cr6.lt) goto loc_822DB5DC;
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822db5dc
	if (ctx.cr0.eq) goto loc_822DB5DC;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822db5dc
	if (!ctx.cr6.gt) goto loc_822DB5DC;
loc_822DB5B4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x822deaa0
	ctx.lr = 0x822DB5C8;
	sub_822DEAA0(ctx, base);
	// lwz r24,80(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(r24.s32, -1, ctx.xer);
	// beq cr6,0x822db5dc
	if (ctx.cr6.eq) goto loc_822DB5DC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt cr6,0x822db5b4
	if (ctx.cr6.gt) goto loc_822DB5B4;
loc_822DB5DC:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x822db5f0
	if (ctx.cr6.eq) goto loc_822DB5F0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x822d98f0
	ctx.lr = 0x822DB5EC;
	sub_822D98F0(ctx, base);
	// li r14,0
	r14.s64 = 0;
loc_822DB5F0:
	// lbz r29,1(r19)
	r29.u64 = REX_LOAD_U8(r19.u32 + 1);
	// extsb. r8,r29
	ctx.r8.s64 = r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822db60c
	if (ctx.cr0.eq) goto loc_822DB60C;
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r30,0
	r30.s64 = 0;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x822dac8c
	goto loc_822DAC8C;
loc_822DB60C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// b 0x822db648
	goto loc_822DB648;
loc_822DB614:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x822e16d0
	ctx.lr = 0x822DB628;
	sub_822E16D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822db63c
	if (!ctx.cr6.eq) goto loc_822DB63C;
	// li r31,511
	r31.s64 = 511;
	// stb r30,1167(r1)
	REX_STORE_U8(ctx.r1.u32 + 1167, r30.u8);
loc_822DB63C:
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x823cd328
	ctx.lr = 0x822DB644;
	sub_823CD328(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822DB648:
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82313F48) {
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
	ctx.lr = 0x82313F50;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82313e80
	ctx.lr = 0x82313F88;
	sub_82313E80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82314080
	if (ctx.cr6.lt) goto loc_82314080;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82313fc4
	if (ctx.cr6.eq) goto loc_82313FC4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ld r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 56);
	// bl 0x82313c58
	ctx.lr = 0x82313FA8;
	sub_82313C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82314080
	if (ctx.cr6.lt) goto loc_82314080;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82313e80
	ctx.lr = 0x82313FBC;
	sub_82313E80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82314080
	if (ctx.cr6.lt) goto loc_82314080;
loc_82313FC4:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// ld r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 40);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82313ad8
	ctx.lr = 0x82313FD8;
	sub_82313AD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82314080
	if (ctx.cr6.lt) goto loc_82314080;
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82314004
	if (!ctx.cr6.eq) goto loc_82314004;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82313660
	ctx.lr = 0x82313FFC;
	sub_82313660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82314080
	if (ctx.cr6.lt) goto loc_82314080;
loc_82314004:
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 0);
	// clrldi r7,r29,32
	ctx.r7.u64 = r29.u64 & 0xFFFFFFFF;
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpld cr6,r5,r7
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r7.u64, ctx.xer);
	// blt cr6,0x82314030
	if (ctx.cr6.lt) goto loc_82314030;
	// stw r29,0(r28)
	REX_STORE_U32(r28.u32 + 0, r29.u32);
	// b 0x82314044
	goto loc_82314044;
loc_82314030:
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r11,r8,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r7.u32);
loc_82314044:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// ld r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 40);
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
	// ld r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U64(r31.u32 + 40);
	// std r5,0(r25)
	REX_STORE_U64(r25.u32 + 0, ctx.r5.u64);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// ld r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 40);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r4,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r4.u64);
loc_82314080:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8231B9F0) {
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
	// bl 0x822d4e5c
	ctx.lr = 0x8231B9F8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r25
	r26.u64 = r25.u64;
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231ba38
	if (ctx.cr6.eq) goto loc_8231BA38;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8231ba38
	if (ctx.cr6.gt) goto loc_8231BA38;
	// lis r26,-32764
	r26.s64 = -2147221504;
	// ori r26,r26,2
	r26.u64 = r26.u64 | 2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
loc_8231BA38:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231ba48
	if (!ctx.cr6.eq) goto loc_8231BA48;
	// stw r25,380(r31)
	REX_STORE_U32(r31.u32 + 380, r25.u32);
loc_8231BA48:
	// lwz r11,52(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231bfd4
	if (ctx.cr6.eq) goto loc_8231BFD4;
	// li r24,1
	r24.s64 = 1;
	// li r23,11
	r23.s64 = 11;
	// li r17,3
	r17.s64 = 3;
	// li r21,4
	r21.s64 = 4;
	// li r18,5
	r18.s64 = 5;
	// li r19,6
	r19.s64 = 6;
	// li r20,7
	r20.s64 = 7;
	// li r22,9
	r22.s64 = 9;
loc_8231BA74:
	// lwz r11,52(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 52);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x8231bfc8
	if (ctx.cr6.gt) goto loc_8231BFC8;
	// lis r12,-32206
	ctx.r12.s64 = -2110652416;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17764
	ctx.r12.s64 = ctx.r12.s64 + -17764;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8231BC90;
	case 1:
		goto loc_8231BAC8;
	case 2:
		goto loc_8231BCE4;
	case 3:
		goto loc_8231BD10;
	case 4:
		goto loc_8231BD28;
	case 5:
		goto loc_8231BD60;
	case 6:
		goto loc_8231BDAC;
	case 7:
		goto loc_8231BDE8;
	case 8:
		goto loc_8231BE38;
	case 9:
		goto loc_8231BE6C;
	case 10:
		goto loc_8231BEBC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8231BAC8:
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231bc70
	if (ctx.cr6.eq) goto loc_8231BC70;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8231bc70
	if (ctx.cr6.gt) goto loc_8231BC70;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8231bb04
	if (!ctx.cr6.gt) goto loc_8231BB04;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_8231BAF4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8231baf4
	if (ctx.cr6.gt) goto loc_8231BAF4;
loc_8231BB04:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8231bb20
	if (!ctx.cr6.gt) goto loc_8231BB20;
loc_8231BB10:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8231bb10
	if (ctx.cr6.gt) goto loc_8231BB10;
loc_8231BB20:
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// addi r29,r27,224
	r29.s64 = r27.s64 + 224;
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8246e538
	ctx.lr = 0x8231BB34;
	sub_8246E538(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231bff0
	if (ctx.cr6.lt) goto loc_8231BFF0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82319780
	ctx.lr = 0x8231BB50;
	sub_82319780(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231bff0
	if (ctx.cr6.lt) goto loc_8231BFF0;
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// slw r8,r24,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r9.u8 & 0x3F));
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// divw r6,r10,r8
	ctx.r6.u64 = uint32_t((ctx.r8.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r10.s32 / ctx.r8.s32 : 0);
	// andc r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x82319780
	ctx.lr = 0x8231BB94;
	sub_82319780(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231bff0
	if (ctx.cr6.lt) goto loc_8231BFF0;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// extsh r10,r30
	ctx.r10.s64 = r30.s16;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r9,236(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 236);
	// slw r6,r24,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r7.u8 & 0x3F));
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// divw r4,r11,r6
	ctx.r4.u64 = uint32_t((ctx.r6.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r11.s32 / ctx.r6.s32 : 0);
	// andc r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 & ~ctx.r5.u64;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// twlgei r3,-1
	if (ctx.r3.s32 == -1 || ctx.r3.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8231c008
	if (ctx.cr6.lt) goto loc_8231C008;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8231c008
	if (ctx.cr6.gt) goto loc_8231C008;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8231c008
	if (ctx.cr6.lt) goto loc_8231C008;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8231c008
	if (ctx.cr6.gt) goto loc_8231C008;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231bc68
	if (ctx.cr6.eq) goto loc_8231BC68;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_8231BC04:
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mulli r11,r10,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r7,424(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r6,8(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// sth r30,-2(r6)
	REX_STORE_U16(ctx.r6.u32 + -2, r30.u16);
	// lwz r5,424(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// sth r25,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, r25.u16);
	// lwz r4,424(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r3,8(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// sth r8,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r8.u16);
	// lwz r9,424(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r7,12(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// sth r25,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, r25.u16);
	// lwz r6,424(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lhz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sth r3,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r3.u16);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8231bc04
	if (ctx.cr6.lt) goto loc_8231BC04;
loc_8231BC68:
	// stw r23,52(r27)
	REX_STORE_U32(r27.u32 + 52, r23.u32);
	// b 0x8231bfc8
	goto loc_8231BFC8;
loc_8231BC70:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8231bc68
	if (!ctx.cr6.gt) goto loc_8231BC68;
	// stw r24,52(r27)
	REX_STORE_U32(r27.u32 + 52, r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82465ab0
	ctx.lr = 0x8231BC8C;
	sub_82465AB0(ctx, base);
	// b 0x8231bfc8
	goto loc_8231BFC8;
loc_8231BC90:
	// lwz r11,600(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231bce0
	if (ctx.cr6.eq) goto loc_8231BCE0;
	// addi r30,r31,608
	r30.s64 = r31.s64 + 608;
	// lwz r4,616(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 616);
	// addi r29,r27,224
	r29.s64 = r27.s64 + 224;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82319780
	ctx.lr = 0x8231BCB4;
	sub_82319780(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231bff0
	if (ctx.cr6.lt) goto loc_8231BFF0;
	// lwz r11,704(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231bce0
	if (ctx.cr6.eq) goto loc_8231BCE0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,616(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 616);
	// subf r4,r10,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bl 0x82319440
	ctx.lr = 0x8231BCE0;
	sub_82319440(ctx, base);
loc_8231BCE0:
	// stw r17,52(r27)
	REX_STORE_U32(r27.u32 + 52, r17.u32);
loc_8231BCE4:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8231bd08
	if (!ctx.cr6.gt) goto loc_8231BD08;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82319be8
	ctx.lr = 0x8231BCFC;
	sub_82319BE8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231bff0
	if (ctx.cr6.lt) goto loc_8231BFF0;
loc_8231BD08:
	// stw r25,436(r27)
	REX_STORE_U32(r27.u32 + 436, r25.u32);
	// stw r21,52(r27)
	REX_STORE_U32(r27.u32 + 52, r21.u32);
loc_8231BD10:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82323f70
	ctx.lr = 0x8231BD18;
	sub_82323F70(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231bff0
	if (ctx.cr6.lt) goto loc_8231BFF0;
	// stw r18,52(r27)
	REX_STORE_U32(r27.u32 + 52, r18.u32);
loc_8231BD28:
	// lwz r11,624(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231bd58
	if (ctx.cr6.eq) goto loc_8231BD58;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r27,224
	ctx.r3.s64 = r27.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231BD44;
	sub_82319780(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231bff0
	if (ctx.cr6.lt) goto loc_8231BFF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r11,201(r31)
	REX_STORE_U8(r31.u32 + 201, ctx.r11.u8);
loc_8231BD58:
	// stw r19,52(r27)
	REX_STORE_U32(r27.u32 + 52, r19.u32);
	// b 0x8231bfc8
	goto loc_8231BFC8;
loc_8231BD60:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8231bd9c
	if (!ctx.cr6.gt) goto loc_8231BD9C;
	// stw r25,372(r31)
	REX_STORE_U32(r31.u32 + 372, r25.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r27,224
	ctx.r3.s64 = r27.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231BD84;
	sub_82319780(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231bff0
	if (ctx.cr6.lt) goto loc_8231BFF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231bda4
	if (!ctx.cr6.eq) goto loc_8231BDA4;
loc_8231BD9C:
	// stw r23,52(r27)
	REX_STORE_U32(r27.u32 + 52, r23.u32);
	// b 0x8231bfc8
	goto loc_8231BFC8;
loc_8231BDA4:
	// stw r20,52(r27)
	REX_STORE_U32(r27.u32 + 52, r20.u32);
	// b 0x8231bfc8
	goto loc_8231BFC8;
loc_8231BDAC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r27,224
	ctx.r3.s64 = r27.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231BDBC;
	sub_82319780(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231bff0
	if (ctx.cr6.lt) goto loc_8231BFF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,372(r31)
	REX_STORE_U32(r31.u32 + 372, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,52(r27)
	REX_STORE_U32(r27.u32 + 52, ctx.r8.u32);
	// b 0x8231bfc8
	goto loc_8231BFC8;
loc_8231BDE8:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8231be0c
	if (!ctx.cr6.gt) goto loc_8231BE0C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_8231BDFC:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// srw r10,r11,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r4.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x8231bdfc
	if (ctx.cr6.gt) goto loc_8231BDFC;
loc_8231BE0C:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,224
	ctx.r3.s64 = r27.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231BE1C;
	sub_82319780(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231bff0
	if (ctx.cr6.lt) goto loc_8231BFF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,376(r31)
	REX_STORE_U32(r31.u32 + 376, ctx.r11.u32);
	// stw r22,52(r27)
	REX_STORE_U32(r27.u32 + 52, r22.u32);
	// b 0x8231bfc8
	goto loc_8231BFC8;
loc_8231BE38:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r27,224
	ctx.r3.s64 = r27.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231BE48;
	sub_82319780(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231bff0
	if (ctx.cr6.lt) goto loc_8231BFF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// stw r9,52(r27)
	REX_STORE_U32(r27.u32 + 52, ctx.r9.u32);
	// b 0x8231bfc8
	goto loc_8231BFC8;
loc_8231BE6C:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8231be90
	if (!ctx.cr6.gt) goto loc_8231BE90;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_8231BE80:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// srw r10,r11,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r4.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x8231be80
	if (ctx.cr6.gt) goto loc_8231BE80;
loc_8231BE90:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,224
	ctx.r3.s64 = r27.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231BEA0;
	sub_82319780(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231bff0
	if (ctx.cr6.lt) goto loc_8231BFF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r11.u32);
	// stw r23,52(r27)
	REX_STORE_U32(r27.u32 + 52, r23.u32);
	// b 0x8231bfc8
	goto loc_8231BFC8;
loc_8231BEBC:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8231bfc4
	if (!ctx.cr6.gt) goto loc_8231BFC4;
	// lwz r11,160(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231bfc4
	if (ctx.cr6.eq) goto loc_8231BFC4;
	// lwz r11,164(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231bfc4
	if (!ctx.cr6.eq) goto loc_8231BFC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82464878
	ctx.lr = 0x8231BEE8;
	sub_82464878(ctx, base);
	// ld r11,184(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 184);
	// extsw r28,r3
	r28.s64 = ctx.r3.s32;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpd cr6,r28,r11
	ctx.cr6.compare<int64_t>(r28.s64, ctx.r11.s64, ctx.xer);
	// bgt cr6,0x8231bfbc
	if (ctx.cr6.gt) goto loc_8231BFBC;
	// lwz r10,380(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 380);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8231bffc
	if (ctx.cr6.eq) goto loc_8231BFFC;
	// lwz r9,176(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8231bffc
	if (ctx.cr6.eq) goto loc_8231BFFC;
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231bf2c
	if (ctx.cr6.eq) goto loc_8231BF2C;
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 456);
	// srw r30,r10,r11
	r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// b 0x8231bf48
	goto loc_8231BF48;
loc_8231BF2C:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231bf44
	if (ctx.cr6.eq) goto loc_8231BF44;
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 456);
	// slw r30,r10,r11
	r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x8231bf48
	goto loc_8231BF48;
loc_8231BF44:
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_8231BF48:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82461da0
	ctx.lr = 0x8231BF54;
	sub_82461DA0(ctx, base);
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 388);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8231bf78
	if (!ctx.cr6.gt) goto loc_8231BF78;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x8231bf7c
	goto loc_8231BF7C;
loc_8231BF78:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8231BF7C:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// blt cr6,0x8231bfb0
	if (ctx.cr6.lt) goto loc_8231BFB0;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x8231bfa4
	if (!ctx.cr6.lt) goto loc_8231BFA4;
	// ld r10,184(r27)
	ctx.r10.u64 = REX_LOAD_U64(r27.u32 + 184);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,184(r27)
	REX_STORE_U64(r27.u32 + 184, ctx.r8.u64);
	// b 0x8231bfb0
	goto loc_8231BFB0;
loc_8231BFA4:
	// ld r11,184(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 184);
	// subf r10,r28,r11
	ctx.r10.u64 = ctx.r11.u64 - r28.u64;
	// std r10,184(r27)
	REX_STORE_U64(r27.u32 + 184, ctx.r10.u64);
loc_8231BFB0:
	// ld r11,184(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 184);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x8231bfc0
	if (!ctx.cr6.lt) goto loc_8231BFC0;
loc_8231BFBC:
	// std r25,184(r27)
	REX_STORE_U64(r27.u32 + 184, r25.u64);
loc_8231BFC0:
	// stw r25,160(r27)
	REX_STORE_U32(r27.u32 + 160, r25.u32);
loc_8231BFC4:
	// stw r25,52(r27)
	REX_STORE_U32(r27.u32 + 52, r25.u32);
loc_8231BFC8:
	// lwz r11,52(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231ba74
	if (!ctx.cr6.eq) goto loc_8231BA74;
loc_8231BFD4:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231bff0
	if (!ctx.cr6.eq) goto loc_8231BFF0;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r10,380(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 380);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,384(r31)
	REX_STORE_U32(r31.u32 + 384, ctx.r9.u32);
loc_8231BFF0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
loc_8231BFFC:
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// std r11,184(r27)
	REX_STORE_U64(r27.u32 + 184, ctx.r11.u64);
	// b 0x8231bfc0
	goto loc_8231BFC0;
loc_8231C008:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_8233F170) {
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
	ctx.lr = 0x8233F178;
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
	ctx.lr = 0x8233F18C;
	sub_822D9828(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233f274
	if (ctx.cr6.eq) goto loc_8233F274;
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
loc_8233F1AC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8233f1ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8233F1AC;
	// addi r27,r29,4
	r27.s64 = r29.s64 + 4;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823a6710
	ctx.lr = 0x8233F1C4;
	sub_823A6710(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233f26c
	if (ctx.cr6.eq) goto loc_8233F26C;
	// addi r26,r29,16
	r26.s64 = r29.s64 + 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823a6710
	ctx.lr = 0x8233F1DC;
	sub_823A6710(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233f264
	if (ctx.cr6.eq) goto loc_8233F264;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8233d448
	ctx.lr = 0x8233F1F0;
	sub_8233D448(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233f208
	if (ctx.cr6.eq) goto loc_8233F208;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8233F208;
	sub_822D5870(ctx, base);
loc_8233F208:
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8233f25c
	if (ctx.cr6.eq) goto loc_8233F25C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d440c
	ctx.lr = 0x8233F21C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233f25c
	if (ctx.cr6.eq) goto loc_8233F25C;
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
	ctx.lr = 0x8233F240;
	sub_8233FDB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233f280
	if (!ctx.cr6.eq) goto loc_8233F280;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233f25c
	if (ctx.cr6.eq) goto loc_8233F25C;
	// bl 0x8233d4c0
	ctx.lr = 0x8233F258;
	sub_8233D4C0(ctx, base);
	// stw r23,0(r29)
	REX_STORE_U32(r29.u32 + 0, r23.u32);
loc_8233F25C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823a6718
	ctx.lr = 0x8233F264;
	sub_823A6718(ctx, base);
loc_8233F264:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823a6718
	ctx.lr = 0x8233F26C;
	sub_823A6718(ctx, base);
loc_8233F26C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d98f0
	ctx.lr = 0x8233F274;
	sub_822D98F0(ctx, base);
loc_8233F274:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
loc_8233F280:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r30,36(r29)
	REX_STORE_U32(r29.u32 + 36, r30.u32);
	// mr r24,r23
	r24.u64 = r23.u64;
	// ori r10,r11,45872
	ctx.r10.u64 = ctx.r11.u64 | 45872;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// stw r10,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r10.u32);
	// ble cr6,0x8233f3a8
	if (!ctx.cr6.gt) goto loc_8233F3A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r25,r11,15387
	r25.s64 = ctx.r11.s64 + 15387;
loc_8233F2A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8233ea50
	ctx.lr = 0x8233F2B0;
	sub_8233EA50(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8233f398
	if (ctx.cr6.lt) goto loc_8233F398;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8233ea50
	ctx.lr = 0x8233F2C8;
	sub_8233EA50(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8233f378
	if (ctx.cr6.lt) goto loc_8233F378;
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
	ctx.lr = 0x8233F2EC;
	sub_8233FDF0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233f358
	if (ctx.cr6.eq) goto loc_8233F358;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233f308
	if (ctx.cr6.lt) goto loc_8233F308;
	// bl 0x823ce368
	ctx.lr = 0x8233F308;
	sub_823CE368(ctx, base);
loc_8233F308:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8233f320
	if (!ctx.cr6.lt) goto loc_8233F320;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r31.u32);
loc_8233F320:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233f330
	if (ctx.cr6.lt) goto loc_8233F330;
	// bl 0x823ce368
	ctx.lr = 0x8233F330;
	sub_823CE368(ctx, base);
loc_8233F330:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8233f348
	if (!ctx.cr6.lt) goto loc_8233F348;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r23.u32);
loc_8233F348:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(r24.s32, r22.s32, ctx.xer);
	// blt cr6,0x8233f2a4
	if (ctx.cr6.lt) goto loc_8233F2A4;
	// b 0x8233f398
	goto loc_8233F398;
loc_8233F358:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233f378
	if (ctx.cr6.eq) goto loc_8233F378;
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
loc_8233F378:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233f398
	if (ctx.cr6.eq) goto loc_8233F398;
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
loc_8233F398:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x8233f3a8
	if (!ctx.cr6.gt) goto loc_8233F3A8;
	// stw r23,28(r29)
	REX_STORE_U32(r29.u32 + 28, r23.u32);
	// b 0x8233f3b0
	goto loc_8233F3B0;
loc_8233F3A8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,28(r29)
	REX_STORE_U32(r29.u32 + 28, ctx.r11.u32);
loc_8233F3B0:
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(r24.s32, r22.s32, ctx.xer);
	// bge cr6,0x8233f3c4
	if (!ctx.cr6.lt) goto loc_8233F3C4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233eb10
	ctx.lr = 0x8233F3C0;
	sub_8233EB10(ctx, base);
	// mr r29,r23
	r29.u64 = r23.u64;
loc_8233F3C4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82352E38) {
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
	ctx.lr = 0x82352E40;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r11,456(r3)
	REX_STORE_U32(ctx.r3.u32 + 456, ctx.r11.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stw r11,336(r3)
	REX_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8238fe48
	ctx.lr = 0x82352E74;
	sub_8238FE48(ctx, base);
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82352fc4
	if (ctx.cr6.eq) goto loc_82352FC4;
	// lwz r30,84(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,27072
	r29.s64 = ctx.r11.s64 + 27072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 0);
	// rldicl r10,r11,13,51
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 13) & 0x1FFF;
	// rlwinm r26,r10,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r26,r29
	ctx.r4.u64 = REX_LOAD_U8(r26.u32 + r29.u32);
	// bl 0x82337f50
	ctx.lr = 0x82352EA4;
	sub_82337F50(ctx, base);
	// addi r9,r29,1
	ctx.r9.s64 = r29.s64 + 1;
	// li r27,3
	r27.s64 = 3;
	// lbzx r11,r26,r9
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82352ebc
	if (!ctx.cr6.eq) goto loc_82352EBC;
	// stw r27,20(r30)
	REX_STORE_U32(r30.u32 + 20, r27.u32);
loc_82352EBC:
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82352edc
	if (ctx.cr6.eq) goto loc_82352EDC;
loc_82352ED0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_82352EDC:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r9,244(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 244);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82352f04
	if (!ctx.cr6.gt) goto loc_82352F04;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stb r11,0(r28)
	REX_STORE_U8(r28.u32 + 0, ctx.r11.u8);
	// b 0x82352f20
	goto loc_82352F20;
loc_82352F04:
	// lwz r10,240(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 240);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82352f1c
	if (!ctx.cr6.lt) goto loc_82352F1C;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stb r11,0(r28)
	REX_STORE_U8(r28.u32 + 0, ctx.r11.u8);
	// b 0x82352f20
	goto loc_82352F20;
loc_82352F1C:
	// stb r11,0(r28)
	REX_STORE_U8(r28.u32 + 0, ctx.r11.u8);
loc_82352F20:
	// lwz r30,84(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 0);
	// rldicl r10,r11,13,51
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 13) & 0x1FFF;
	// rlwinm r26,r10,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r26,r29
	ctx.r4.u64 = REX_LOAD_U8(r26.u32 + r29.u32);
	// bl 0x82337f50
	ctx.lr = 0x82352F3C;
	sub_82337F50(ctx, base);
	// addi r9,r29,1
	ctx.r9.s64 = r29.s64 + 1;
	// lbzx r11,r26,r9
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82352f50
	if (!ctx.cr6.eq) goto loc_82352F50;
	// stw r27,20(r30)
	REX_STORE_U32(r30.u32 + 20, r27.u32);
loc_82352F50:
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82352ed0
	if (!ctx.cr6.eq) goto loc_82352ED0;
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lwz r9,244(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 244);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82352f94
	if (!ctx.cr6.gt) goto loc_82352F94;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,1(r28)
	REX_STORE_U8(r28.u32 + 1, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_82352F94:
	// lwz r10,240(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 240);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82352fb4
	if (!ctx.cr6.lt) goto loc_82352FB4;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,1(r28)
	REX_STORE_U8(r28.u32 + 1, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_82352FB4:
	// stb r11,1(r28)
	REX_STORE_U8(r28.u32 + 1, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_82352FC4:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234fbd8
	ctx.lr = 0x82352FD0;
	sub_8234FBD8(ctx, base);
	// lbz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// lbz r8,85(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r4,3620(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3620);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stb r6,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// stb r5,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r5.u8);
	// bl 0x8234fb68
	ctx.lr = 0x82352FFC;
	sub_8234FB68(ctx, base);
	// lbz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r9,0(r28)
	REX_STORE_U8(r28.u32 + 0, ctx.r9.u8);
	// stb r8,1(r28)
	REX_STORE_U8(r28.u32 + 1, ctx.r8.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_823599D8) {
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
	ctx.lr = 0x823599E0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r16,r8
	r16.u64 = ctx.r8.u64;
	// mr r15,r9
	r15.u64 = ctx.r9.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82359e1c
	if (ctx.cr6.eq) goto loc_82359E1C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82359e1c
	if (ctx.cr6.eq) goto loc_82359E1C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82359e1c
	if (ctx.cr6.eq) goto loc_82359E1C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82359e1c
	if (ctx.cr6.eq) goto loc_82359E1C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82359e1c
	if (ctx.cr6.eq) goto loc_82359E1C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82359e1c
	if (ctx.cr6.eq) goto loc_82359E1C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82359e1c
	if (ctx.cr6.eq) goto loc_82359E1C;
	// lwz r19,308(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x82359e1c
	if (ctx.cr6.eq) goto loc_82359E1C;
	// lwz r20,316(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82359e1c
	if (ctx.cr6.eq) goto loc_82359E1C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82359bc4
	if (!ctx.cr6.gt) goto loc_82359BC4;
	// li r26,0
	r26.s64 = 0;
loc_82359A6C:
	// lwz r10,20(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 20);
	// lwz r9,24(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 24);
	// lwz r8,28(r24)
	ctx.r8.u64 = REX_LOAD_U32(r24.u32 + 28);
	// lwz r7,32(r24)
	ctx.r7.u64 = REX_LOAD_U32(r24.u32 + 32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwzx r30,r26,r10
	r30.u64 = REX_LOAD_U32(r26.u32 + ctx.r10.u32);
	// lwzx r29,r26,r9
	r29.u64 = REX_LOAD_U32(r26.u32 + ctx.r9.u32);
	// lwzx r28,r26,r8
	r28.u64 = REX_LOAD_U32(r26.u32 + ctx.r8.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// lwzx r25,r26,r7
	r25.u64 = REX_LOAD_U32(r26.u32 + ctx.r7.u32);
	// bge cr6,0x82359a9c
	if (!ctx.cr6.lt) goto loc_82359A9C;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82359A9C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82359ab4
	if (!ctx.cr6.gt) goto loc_82359AB4;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r4,r31,r23
	ctx.r4.u64 = r31.u64 + r23.u64;
	// add r3,r31,r27
	ctx.r3.u64 = r31.u64 + r27.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82359AB4;
	sub_822D4FA0(ctx, base);
loc_82359AB4:
	// subfic r11,r28,0
	ctx.xer.ca = r28.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r28.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r9,r28,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0x1;
	// addme r8,r9
	temp.u8 = (ctx.r9.u32 + 0xFFFFFFFFu < ctx.r9.u32) | (ctx.r9.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r9.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r28
	ctx.r11.u64 = ctx.r8.u64 & r28.u64;
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addic. r5,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r5.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82359aec
	if (!ctx.cr0.gt) goto loc_82359AEC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + r23.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x822d4fa0
	ctx.lr = 0x82359AEC;
	sub_822D4FA0(ctx, base);
loc_82359AEC:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// bgt cr6,0x82359afc
	if (ctx.cr6.gt) goto loc_82359AFC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82359AFC:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82359b0c
	if (!ctx.cr6.lt) goto loc_82359B0C;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_82359B0C:
	// subf. r5,r10,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82359b24
	if (!ctx.cr0.gt) goto loc_82359B24;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// add r4,r11,r23
	ctx.r4.u64 = ctx.r11.u64 + r23.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82359B24;
	sub_822D4FA0(ctx, base);
loc_82359B24:
	// subfic r10,r30,0
	ctx.xer.ca = r30.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - r30.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r9,r30,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0x1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// addme r8,r9
	temp.u8 = (ctx.r9.u32 + 0xFFFFFFFFu < ctx.r9.u32) | (ctx.r9.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r9.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 & r30.u64;
	// bge cr6,0x82359b48
	if (!ctx.cr6.lt) goto loc_82359B48;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x82359b4c
	goto loc_82359B4C;
loc_82359B48:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82359B4C:
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addic. r5,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r5.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82359b68
	if (!ctx.cr0.gt) goto loc_82359B68;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// add r4,r11,r21
	ctx.r4.u64 = ctx.r11.u64 + r21.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82359B68;
	sub_822D4FA0(ctx, base);
loc_82359B68:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82359b7c
	if (ctx.cr6.lt) goto loc_82359B7C;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
loc_82359B7C:
	// subfic r11,r25,0
	ctx.xer.ca = r25.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r25.u64;
	// rlwinm r9,r25,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0x1;
	// addme r8,r9
	temp.u8 = (ctx.r9.u32 + 0xFFFFFFFFu < ctx.r9.u32) | (ctx.r9.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r9.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r25
	ctx.r11.u64 = ctx.r8.u64 & r25.u64;
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addic. r5,r7,1
	ctx.xer.ca = ctx.r7.u32 > 4294967294;
	ctx.r5.s64 = ctx.r7.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82359ba8
	if (!ctx.cr0.gt) goto loc_82359BA8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r4,r11,r21
	ctx.r4.u64 = ctx.r11.u64 + r21.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82359BA8;
	sub_822D4FA0(ctx, base);
loc_82359BA8:
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// add r31,r10,r31
	r31.u64 = ctx.r10.u64 + r31.u64;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82359a6c
	if (ctx.cr6.lt) goto loc_82359A6C;
loc_82359BC4:
	// li r29,0
	r29.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82359e10
	if (!ctx.cr6.gt) goto loc_82359E10;
	// li r23,0
	r23.s64 = 0;
loc_82359BD8:
	// lwz r10,20(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 20);
	// lwz r9,24(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 24);
	// lwz r8,28(r24)
	ctx.r8.u64 = REX_LOAD_U32(r24.u32 + 28);
	// lwz r7,32(r24)
	ctx.r7.u64 = REX_LOAD_U32(r24.u32 + 32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwzx r28,r23,r10
	r28.u64 = REX_LOAD_U32(r23.u32 + ctx.r10.u32);
	// lwzx r27,r23,r9
	r27.u64 = REX_LOAD_U32(r23.u32 + ctx.r9.u32);
	// lwzx r26,r23,r8
	r26.u64 = REX_LOAD_U32(r23.u32 + ctx.r8.u32);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// lwzx r25,r23,r7
	r25.u64 = REX_LOAD_U32(r23.u32 + ctx.r7.u32);
	// bge cr6,0x82359c08
	if (!ctx.cr6.lt) goto loc_82359C08;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_82359C08:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi. r31,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r31.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble 0x82359c34
	if (!ctx.cr0.gt) goto loc_82359C34;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r4,r29,r18
	ctx.r4.u64 = r29.u64 + r18.u64;
	// add r3,r29,r19
	ctx.r3.u64 = r29.u64 + r19.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82359C24;
	sub_822D4FA0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r4,r29,r17
	ctx.r4.u64 = r29.u64 + r17.u64;
	// add r3,r29,r20
	ctx.r3.u64 = r29.u64 + r20.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82359C34;
	sub_822D4FA0(ctx, base);
loc_82359C34:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82359c4c
	if (ctx.cr6.eq) goto loc_82359C4C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82359c50
	goto loc_82359C50;
loc_82359C4C:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_82359C50:
	// subfic r10,r26,0
	ctx.xer.ca = r26.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - r26.u64;
	// rlwinm r9,r26,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0x1;
	// addme r8,r9
	temp.u8 = (ctx.r9.u32 + 0xFFFFFFFFu < ctx.r9.u32) | (ctx.r9.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r9.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r7,r8,r26
	ctx.r7.u64 = ctx.r8.u64 & r26.u64;
	// subf r10,r7,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// srawi. r30,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	r30.s64 = ctx.r6.s32 >> 1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x82359ca0
	if (!ctx.cr0.gt) goto loc_82359CA0;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// add r4,r31,r18
	ctx.r4.u64 = r31.u64 + r18.u64;
	// add r3,r31,r19
	ctx.r3.u64 = r31.u64 + r19.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82359C90;
	sub_822D4FA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r31,r17
	ctx.r4.u64 = r31.u64 + r17.u64;
	// add r3,r31,r20
	ctx.r3.u64 = r31.u64 + r20.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82359CA0;
	sub_822D4FA0(ctx, base);
loc_82359CA0:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(r27.s32, -1, ctx.xer);
	// addi r11,r27,1
	ctx.r11.s64 = r27.s64 + 1;
	// bgt cr6,0x82359cb0
	if (ctx.cr6.gt) goto loc_82359CB0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82359CB0:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82359cc0
	if (ctx.cr6.eq) goto loc_82359CC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82359CC0:
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82359cd0
	if (!ctx.cr6.lt) goto loc_82359CD0;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82359CD0:
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi. r30,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r30.s64 = ctx.r10.s32 >> 1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x82359d08
	if (!ctx.cr0.gt) goto loc_82359D08;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// add r4,r31,r18
	ctx.r4.u64 = r31.u64 + r18.u64;
	// add r3,r31,r19
	ctx.r3.u64 = r31.u64 + r19.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82359CF8;
	sub_822D4FA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r31,r17
	ctx.r4.u64 = r31.u64 + r17.u64;
	// add r3,r31,r20
	ctx.r3.u64 = r31.u64 + r20.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82359D08;
	sub_822D4FA0(ctx, base);
loc_82359D08:
	// subfic r11,r28,0
	ctx.xer.ca = r28.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r28.u64;
	// rlwinm r10,r28,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0x1;
	// addme r9,r10
	temp.u8 = (ctx.r10.u32 + 0xFFFFFFFFu < ctx.r10.u32) | (ctx.r10.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r10.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r28
	ctx.r11.u64 = ctx.r9.u64 & r28.u64;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82359d28
	if (ctx.cr6.eq) goto loc_82359D28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82359D28:
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82359d3c
	if (!ctx.cr6.lt) goto loc_82359D3C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82359d40
	goto loc_82359D40;
loc_82359D3C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_82359D40:
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// srawi. r30,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r30.s64 = ctx.r10.s32 >> 1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x82359d78
	if (!ctx.cr0.gt) goto loc_82359D78;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// add r4,r31,r16
	ctx.r4.u64 = r31.u64 + r16.u64;
	// add r3,r31,r19
	ctx.r3.u64 = r31.u64 + r19.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82359D68;
	sub_822D4FA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r31,r15
	ctx.r4.u64 = r31.u64 + r15.u64;
	// add r3,r31,r20
	ctx.r3.u64 = r31.u64 + r20.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82359D78;
	sub_822D4FA0(ctx, base);
loc_82359D78:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82359d8c
	if (!ctx.cr6.lt) goto loc_82359D8C;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// b 0x82359d90
	goto loc_82359D90;
loc_82359D8C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82359D90:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82359da0
	if (ctx.cr6.eq) goto loc_82359DA0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82359DA0:
	// subfic r10,r25,0
	ctx.xer.ca = r25.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - r25.u64;
	// rlwinm r9,r25,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0x1;
	// addme r8,r9
	temp.u8 = (ctx.r9.u32 + 0xFFFFFFFFu < ctx.r9.u32) | (ctx.r9.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r9.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r7,r8,r25
	ctx.r7.u64 = ctx.r8.u64 & r25.u64;
	// subf r10,r7,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// srawi. r30,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	r30.s64 = ctx.r6.s32 >> 1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x82359df0
	if (!ctx.cr0.gt) goto loc_82359DF0;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// add r4,r31,r16
	ctx.r4.u64 = r31.u64 + r16.u64;
	// add r3,r31,r19
	ctx.r3.u64 = r31.u64 + r19.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82359DE0;
	sub_822D4FA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r31,r15
	ctx.r4.u64 = r31.u64 + r15.u64;
	// add r3,r31,r20
	ctx.r3.u64 = r31.u64 + r20.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82359DF0;
	sub_822D4FA0(ctx, base);
loc_82359DF0:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r22,r22,2
	r22.s64 = r22.s64 + 2;
	// lwz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 4);
	// addi r23,r23,8
	r23.s64 = r23.s64 + 8;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r22,r10
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r10.s32, ctx.xer);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// blt cr6,0x82359bd8
	if (ctx.cr6.lt) goto loc_82359BD8;
loc_82359E10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ea4
	return;
loc_82359E1C:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ea4
	return;
}

DEFINE_REX_FUNC(sub_82369558) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r11.u32);
	// stw r11,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
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
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r11,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r11.u32);
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// stw r11,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r11.u32);
	// bl 0x823b0b90
	ctx.lr = 0x823695C0;
	sub_823B0B90(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// bl 0x823b0ac0
	ctx.lr = 0x823695C8;
	sub_823B0AC0(ctx, base);
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

DEFINE_REX_FUNC(sub_8236A618) {
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
	ctx.lr = 0x8236A620;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,300(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 300);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// lwz r28,16(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// lhz r27,14(r11)
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8236a660
	if (!ctx.cr6.eq) goto loc_8236A660;
	// bl 0x82369660
	ctx.lr = 0x8236A658;
	sub_82369660(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ebc
	return;
loc_8236A660:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8236a6fc
	if (!ctx.cr6.eq) goto loc_8236A6FC;
	// lwz r8,304(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 304);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8236a878
	if (ctx.cr6.eq) goto loc_8236A878;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// bgt cr6,0x8236a68c
	if (ctx.cr6.gt) goto loc_8236A68C;
	// neg r22,r9
	r22.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_8236A68C:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r21,8(r31)
	r21.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r27,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r27.u32);
	// stw r28,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// stw r22,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r22.u32);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// bl 0x823699e8
	ctx.lr = 0x8236A6D4;
	sub_823699E8(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// lwz r4,304(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82369660
	ctx.lr = 0x8236A6F4;
	sub_82369660(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8236a868
	goto loc_8236A868;
loc_8236A6FC:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8236a77c
	if (!ctx.cr6.eq) goto loc_8236A77C;
	// lwz r7,308(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 308);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8236a878
	if (ctx.cr6.eq) goto loc_8236A878;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82369660
	ctx.lr = 0x8236A728;
	sub_82369660(ctx, base);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r30,0
	r30.s64 = 0;
	// lwz r24,20(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r5,308(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 308);
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r27,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r27.u32);
	// stw r28,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x823699e8
	ctx.lr = 0x8236A778;
	sub_823699E8(ctx, base);
	// b 0x8236a868
	goto loc_8236A868;
loc_8236A77C:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8236a878
	if (!ctx.cr6.eq) goto loc_8236A878;
	// lwz r10,308(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 308);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236a878
	if (ctx.cr6.eq) goto loc_8236A878;
	// lwz r8,304(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 304);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8236a878
	if (ctx.cr6.eq) goto loc_8236A878;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bgt cr6,0x8236a7b4
	if (ctx.cr6.gt) goto loc_8236A7B4;
	// neg r10,r9
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_8236A7B4:
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r27,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r27.u32);
	// stw r28,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// bl 0x823699e8
	ctx.lr = 0x8236A7FC;
	sub_823699E8(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// lwz r7,308(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 308);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r4,304(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82369660
	ctx.lr = 0x8236A81C;
	sub_82369660(ctx, base);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r24,20(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r5,308(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 308);
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r27,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r27.u32);
	// stw r28,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x823699e8
	ctx.lr = 0x8236A868;
	sub_823699E8(ctx, base);
loc_8236A868:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236a87c
	if (!ctx.cr6.eq) goto loc_8236A87C;
loc_8236A878:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8236A87C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_82376740) {
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
	ctx.lr = 0x82376748;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v8,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x2)));
	// vspltish v9,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x4)));
	// vspltish v10,7
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x7)));
	// bne cr6,0x82376768
	if (!ctx.cr6.eq) goto loc_82376768;
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
loc_82376768:
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bgt cr6,0x82376dc4
	if (ctx.cr6.gt) goto loc_82376DC4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823768a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823768A8;
	// bdzf 4*cr6+eq,0x82376a70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82376A70;
	// bne cr6,0x82376c00
	if (!ctx.cr6.eq) goto loc_82376C00;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvlx128 v62,r3,r4
	temp.u32 = ctx.r3.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// lvrx128 v61,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,-160
	ctx.r3.s64 = ctx.r1.s64 + -160;
	// lvrx128 v60,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v12,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// addi r30,r1,-144
	r30.s64 = ctx.r1.s64 + -144;
	// vor128 v11,v62,v60
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// addi r29,r1,-128
	r29.s64 = ctx.r1.s64 + -128;
	// addi r28,r1,-112
	r28.s64 = ctx.r1.s64 + -112;
	// addi r27,r1,-96
	r27.s64 = ctx.r1.s64 + -96;
	// lvrx128 v59,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v58,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v6,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vmrghb v5,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r26,r1,-80
	r26.s64 = ctx.r1.s64 + -80;
	// vslh v4,v7,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v57,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v3,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v56,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v2,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// stvx128 v4,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v5,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v3,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v55,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v30,v0,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v54,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v29,v54,v55
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// stvx128 v1,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v31,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v28,v30,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v53,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v27,v0,v29
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v52,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v26,v52,v53
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// stvx128 v28,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v27,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v51,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v24,v0,v26
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v50,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v23,v50,v51
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// stvx128 v25,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v22,v24,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v49,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v21,v0,v23
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v48,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v20,v48,v49
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// stvx128 v22,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v19,v21,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v47,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v18,v0,v20
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v17,v46,v47
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// stvx128 v19,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v16,v18,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v15,v0,v17
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v16,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v14,v15,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v14,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82376dc4
	goto loc_82376DC4;
loc_823768A8:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx128 v45,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvlx128 v44,r3,r4
	temp.u32 = ctx.r3.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// lvrx128 v43,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,-160
	ctx.r3.s64 = ctx.r1.s64 + -160;
	// lvrx128 v42,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v12,v45,v43
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r30,r1,-144
	r30.s64 = ctx.r1.s64 + -144;
	// vmrghb v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v7,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v44,v42
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// lvrx128 v41,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v40,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vslh v6,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v4,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v40,v41
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// vmrghb v3,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v39,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v38,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vmrghb v2,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v1,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v38,v39
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vadduhm v31,v11,v3
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrghb v30,v0,v4
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v11,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvrx128 v37,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v36,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vmrghb v29,v0,v12
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v28,v31,v6
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsldoi v27,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vadduhm v24,v11,v30
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vmrghb v25,v0,v1
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v26,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v35,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor v11,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// lvlx128 v34,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v23,v0,v12
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v22,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v34,v35
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// vmrghb v21,v0,v27
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vslh v20,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v28,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v19,v11,v25
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vor v11,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v29.u8));
	// vsldoi v18,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v24,v26
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vmrghb v16,v0,v22
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v33,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v32,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vslh v15,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v14,v0,v18
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v7,v11,v21
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// stvx128 v17,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v11,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v23.u8));
	// vslh v4,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v12,v14
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v32,v33
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// lvrx128 v62,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vslh v2,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v1,v11,v16
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v6,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v5,v7,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vmrghb v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v31,v3,v4
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsldoi v29,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vadduhm v30,v1,v2
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// stvx128 v6,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v12,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vmrghb v28,v0,v29
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v27,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r1,-128
	ctx.r9.s64 = ctx.r1.s64 + -128;
	// addi r7,r1,-112
	ctx.r7.s64 = ctx.r1.s64 + -112;
	// vmrghb v26,v0,v12
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r4,r1,-96
	ctx.r4.s64 = ctx.r1.s64 + -96;
	// lvrx128 v61,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vsldoi v25,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// lvlx128 v60,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vadduhm v24,v11,v28
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vor128 v12,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// vor v11,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v26.u8));
	// stvx128 v5,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v23,v0,v25
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v30,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v21,v24,v27
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// stvx128 v31,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v22,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v20,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v11,v23
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// stvx128 v21,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v18,v0,v22
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v19,v20
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v15,v12,v18
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// stvx128 v17,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v14,v15,v16
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// stvx128 v14,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82376dc4
	goto loc_82376DC4;
loc_82376A70:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx128 v59,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvlx128 v58,r3,r4
	temp.u32 = ctx.r3.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// lvrx128 v57,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,-160
	ctx.r3.s64 = ctx.r1.s64 + -160;
	// lvrx128 v56,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v12,v59,v57
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// addi r30,r1,-144
	r30.s64 = ctx.r1.s64 + -144;
	// addi r29,r1,-128
	r29.s64 = ctx.r1.s64 + -128;
	// addi r28,r1,-112
	r28.s64 = ctx.r1.s64 + -112;
	// lvrx128 v55,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vsldoi v11,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// lvlx128 v54,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v12,v58,v56
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vmrghb v6,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v5,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v4,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v53,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v52,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vadduhm v3,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vmrghb v2,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v1,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v31,v0,v12
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vadduhm v30,v4,v2
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// lvlx128 v50,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vmrghb v29,v0,v1
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v28,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v27,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v26,v0,v12
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vslh v25,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v49,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vadduhm v24,v31,v29
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// lvlx128 v48,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vsldoi v23,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// stvx128 v28,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v22,v0,v12
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v21,v0,v27
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v20,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v47,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v19,v0,v23
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vsldoi v18,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vadduhm v17,v26,v21
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vmrghb v16,v0,v12
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vadduhm v15,v22,v19
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// stvx128 v20,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v45,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v14,v0,v18
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v44,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi v11,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vslh v6,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vadduhm v5,v16,v14
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vmrghb v4,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v3,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v2,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// stvx128 v6,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v1,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v7,v4
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrghb v29,v0,v2
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v42,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vadduhm v28,v1,v29
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// lvlx128 v43,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,-96
	ctx.r11.s64 = ctx.r1.s64 + -96;
	// vor128 v12,v43,v42
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// vslh v27,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v3,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v26,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v31,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v25,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v24,v0,v12
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v27,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v23,v0,v25
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v22,v24,v23
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vslh v21,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v21,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82376dc4
	goto loc_82376DC4;
loc_82376C00:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx128 v41,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvlx128 v40,r3,r4
	temp.u32 = ctx.r3.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// lvrx128 v39,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,-160
	ctx.r3.s64 = ctx.r1.s64 + -160;
	// vor128 v12,v41,v39
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// lvrx128 v38,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r30,r1,-144
	r30.s64 = ctx.r1.s64 + -144;
	// addi r29,r1,-128
	r29.s64 = ctx.r1.s64 + -128;
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v11,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v40,v38
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// lvrx128 v37,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v36,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vsldoi v6,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vmrghb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v35,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v34,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vmrghb v3,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v1,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vadduhm v2,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghb v31,v0,v12
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v34,v35
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// vslh v4,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v11,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// lvrx128 v33,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v32,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v30,v0,v1
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v28,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vmrghb v27,v0,v12
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v32,v33
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vadduhm v25,v5,v11
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v26,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v11,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// vmrghb v24,v0,v28
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v23,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// lvrx128 v63,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v22,v0,v12
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vadduhm v20,v31,v11
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v21,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v19,v0,v23
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v11,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v24.u8));
	// vsldoi v18,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vadduhm v29,v2,v4
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// lvrx128 v61,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v17,v0,v12
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v60,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vslh v15,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v14,v27,v11
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghb v12,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v11,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v19.u8));
	// stvx128 v29,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v16,v25,v26
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v7,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// lvlx128 v59,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vadduhm v4,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// lvrx128 v58,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vslh v6,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v5,v22,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// stvx128 v16,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v11,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// stvx128 v7,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v4,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v1,v17,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v2,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsldoi v31,v11,v0,1
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v12,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// vmrghb v30,v0,v11
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// vmrghb v11,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r7,r1,-96
	ctx.r7.s64 = ctx.r1.s64 + -96;
	// addi r4,r1,-80
	ctx.r4.s64 = ctx.r1.s64 + -80;
	// vadduhm v29,v1,v3
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsldoi v28,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// stvx128 v2,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v57,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v27,v0,v12
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v56,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vslh v26,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v12,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// stvx128 v29,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v25,v0,v28
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v30,v11
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsldoi v23,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v22,v0,v12
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v12,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v25.u8));
	// vadduhm v21,v24,v26
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vmrghb v0,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v20,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v27,v12
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// stvx128 v21,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v17,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v22,v0
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vadduhm v18,v19,v20
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v15,v16,v17
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// stvx128 v18,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82376DC4:
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bgt cr6,0x82376ef8
	if (ctx.cr6.gt) goto loc_82376EF8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82376e1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82376E1C;
	// bdzf 4*cr6+eq,0x82376e68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82376E68;
	// bne cr6,0x82376eb0
	if (!ctx.cr6.eq) goto loc_82376EB0;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,-208
	ctx.r11.s64 = ctx.r1.s64 + -208;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82376DF0:
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vslh v13,v0,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v12,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsrah v11,v12,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v55,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvewx128 v55,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v55,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x82376df0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82376DF0;
	// b 0x822d4ed0
	return;
loc_82376E1C:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// li r9,-16
	ctx.r9.s64 = -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82376E30:
	// lvx128 v0,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v11,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v8,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vadduhm v7,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v6,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsrah v5,v6,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v54,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvewx128 v54,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v54,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x82376e30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82376E30;
	// b 0x822d4ed0
	return;
loc_82376E68:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,-208
	ctx.r11.s64 = ctx.r1.s64 + -208;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82376E78:
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v8,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v7,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsrah v6,v7,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v53,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvewx128 v53,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v53,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x82376e78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82376E78;
	// b 0x822d4ed0
	return;
loc_82376EB0:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// li r9,-16
	ctx.r9.s64 = -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82376EC4:
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v11,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v8,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vadduhm v7,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v6,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsrah v5,v6,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v52,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvewx128 v52,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x82376ec4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82376EC4;
loc_82376EF8:
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_823CAEB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823CAEB8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x824d3f1c
	ctx.lr = 0x823CAEC0;
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// rlwinm r10,r3,0,8,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF00;
	// ori r11,r11,41216
	ctx.r11.u64 = ctx.r11.u64 | 41216;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823caf68
	if (!ctx.cr6.lt) goto loc_823CAF68;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r28,r11,9556
	r28.s64 = ctx.r11.s64 + 9556;
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// bl 0x824d438c
	ctx.lr = 0x823CAEE4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r30,-32162
	r30.s64 = -2107768832;
	// lwz r11,5296(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 5296);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823caefc
	if (!ctx.cr6.eq) goto loc_823CAEFC;
	// li r29,1627
	r29.s64 = 1627;
	// b 0x823caf5c
	goto loc_823CAF5C;
loc_823CAEFC:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823cb0e0
	ctx.lr = 0x823CAF0C;
	sub_823CB0E0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lis r31,-32162
	r31.s64 = -2107768832;
	// bne 0x823caf4c
	if (!ctx.cr0.eq) goto loc_823CAF4C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,5300(r31)
	REX_STORE_U32(r31.u32 + 5300, ctx.r11.u32);
	// bl 0x823cb038
	ctx.lr = 0x823CAF3C;
	sub_823CB038(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x823caf4c
	if (!ctx.cr0.eq) goto loc_823CAF4C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823caf58
	goto loc_823CAF58;
loc_823CAF4C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,5300(r31)
	REX_STORE_U32(r31.u32 + 5300, ctx.r10.u32);
loc_823CAF58:
	// stw r11,5296(r30)
	REX_STORE_U32(r30.u32 + 5296, ctx.r11.u32);
loc_823CAF5C:
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// bl 0x824d437c
	ctx.lr = 0x823CAF64;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x823caf7c
	goto loc_823CAF7C;
loc_823CAF68:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823cb038
	ctx.lr = 0x823CAF78;
	sub_823CB038(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_823CAF7C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823CD088) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,4(r5)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f8,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f6,8(r5)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CD678) {
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
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824d426c
	ctx.lr = 0x823CD6A0;
	__imp__NtQueryInformationFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823cd700
	if (ctx.cr0.lt) goto loc_823CD700;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x824d425c
	ctx.lr = 0x823CD6C8;
	__imp__NtSetInformationFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823cd700
	if (ctx.cr0.lt) goto loc_823CD700;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bl 0x824d425c
	ctx.lr = 0x823CD6F0;
	__imp__NtSetInformationFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823cd700
	if (ctx.cr0.lt) goto loc_823CD700;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823cd708
	goto loc_823CD708;
loc_823CD700:
	// bl 0x8220a840
	ctx.lr = 0x823CD704;
	sub_8220A840(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823CD708:
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

DEFINE_REX_FUNC(sub_823CDED0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823CDED8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r7,34
	ctx.r7.s64 = 34;
	// lwz r11,4384(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4384);
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CDF0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823cdf4c
	if (ctx.cr0.lt) goto loc_823CDF4C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823cdf24
	if (ctx.cr6.eq) goto loc_823CDF24;
	// ld r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
loc_823CDF24:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823cdf34
	if (ctx.cr6.eq) goto loc_823CDF34;
	// ld r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r11,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r11.u64);
loc_823CDF34:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823cdf44
	if (ctx.cr6.eq) goto loc_823CDF44;
	// ld r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r11.u64);
loc_823CDF44:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823cdf54
	goto loc_823CDF54;
loc_823CDF4C:
	// bl 0x8220a840
	ctx.lr = 0x823CDF50;
	sub_8220A840(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823CDF54:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823CEC58) {
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
	// stw r6,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x823cebe8
	ctx.lr = 0x823CEC84;
	sub_823CEBE8(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,20
	ctx.r6.s64 = 20;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cf128
	ctx.lr = 0x823CEC9C;
	sub_823CF128(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// beq 0x823cecb4
	if (ctx.cr0.eq) goto loc_823CECB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ce718
	ctx.lr = 0x823CECB4;
	sub_823CE718(ctx, base);
loc_823CECB4:
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

DEFINE_REX_FUNC(sub_823D1508) {
	REX_FUNC_PROLOGUE();
	// addis r11,r3,-13873
	ctx.r11.s64 = ctx.r3.s64 + -909180928;
	// addic. r11,r11,-19521
	ctx.xer.ca = ctx.r11.u32 > 19520;
	ctx.r11.s64 = ctx.r11.s64 + -19521;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823d1528
	if (ctx.cr0.eq) goto loc_823D1528;
	// cmplwi cr6,r11,1503
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1503, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r3,10280
	ctx.r3.s64 = 673710080;
	// ori r3,r3,134
	ctx.r3.u64 = ctx.r3.u64 | 134;
	// blr 
	return;
loc_823D1528:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,74
	ctx.r3.u64 = ctx.r3.u64 | 74;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D2860) {
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
	ctx.lr = 0x823D2868;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
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
	// bl 0x823dafc8
	ctx.lr = 0x823D2894;
	sub_823DAFC8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823d28b4
	if (!ctx.cr6.eq) goto loc_823D28B4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823db238
	ctx.lr = 0x823D28A4;
	sub_823DB238(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_823D28AC:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x822d4ec8
	return;
loc_823D28B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x823d28d4
	if (!ctx.cr6.eq) goto loc_823D28D4;
	// lis r31,-30602
	r31.s64 = -2005532672;
	// ori r31,r31,2156
	r31.u64 = r31.u64 | 2156;
loc_823D28C4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823db238
	ctx.lr = 0x823D28CC;
	sub_823DB238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x823d28ac
	goto loc_823D28AC;
loc_823D28D4:
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// bne cr6,0x823d28e8
	if (!ctx.cr6.eq) goto loc_823D28E8;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
loc_823D28E8:
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
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823db240
	ctx.lr = 0x823D2904;
	sub_823DB240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823d2914
	if (!ctx.cr0.lt) goto loc_823D2914;
loc_823D290C:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x823d28c4
	goto loc_823D28C4;
loc_823D2914:
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824081f8
	ctx.lr = 0x823D2924;
	sub_824081F8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,168(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// addi r10,r1,200
	ctx.r10.s64 = ctx.r1.s64 + 200;
	// lwz r7,164(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r6,160(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r25,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// lwz r31,264(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r30,260(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r11,r11,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x823d1598
	ctx.lr = 0x823D2970;
	sub_823D1598(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823d290c
	if (ctx.cr0.lt) goto loc_823D290C;
	// li r31,0
	r31.s64 = 0;
	// b 0x823d28c4
	goto loc_823D28C4;
}

DEFINE_REX_FUNC(sub_823D6C08) {
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
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,11
	ctx.r10.s64 = 11;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 + 28;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r9,16(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lwz r9,20(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r9,24(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
loc_823D6D30:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823d6d30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D6D30;
	// addi r4,r31,72
	ctx.r4.s64 = r31.s64 + 72;
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// bl 0x823d6ae0
	ctx.lr = 0x823D6D68;
	sub_823D6AE0(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,108(r30)
	REX_STORE_U32(r30.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r11.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r11.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,120(r30)
	REX_STORE_U32(r30.u32 + 120, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_823DDFC8) {
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
	// bl 0x822d4e7c
	ctx.lr = 0x823DDFD0;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// beq cr6,0x823de000
	if (ctx.cr6.eq) goto loc_823DE000;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x823DDFFC;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823DE000:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823de01c
	if (ctx.cr6.eq) goto loc_823DE01C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc0b0
	ctx.lr = 0x823DE018;
	sub_823DC0B0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823DE01C:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// clrlwi. r4,r30,31
	ctx.r4.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 100);
	// rlwinm r7,r30,3,27,28
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0x18;
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// clrlwi r8,r29,30
	ctx.r8.u64 = r29.u32 & 0x3;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r3,r29
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(r29.s32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r6
	r28.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lfs f31,1996(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 1996);
	f31.f64 = double(temp.f32);
	// add r26,r9,r5
	r26.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bne 0x823de07c
	if (!ctx.cr0.eq) goto loc_823DE07C;
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// b 0x823de084
	goto loc_823DE084;
loc_823DE07C:
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// li r29,-1
	r29.s64 = -1;
loc_823DE084:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823de09c
	if (ctx.cr6.eq) goto loc_823DE09C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x823DE09C;
	sub_823DC658(ctx, base);
loc_823DE09C:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823de1e4
	if (!ctx.cr6.gt) goto loc_823DE1E4;
	// add r11,r29,r30
	ctx.r11.u64 = r29.u64 + r30.u64;
	// subf r9,r29,r30
	ctx.r9.u64 = r30.u64 - r29.u64;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r30,r27,12
	r30.s64 = r27.s64 + 12;
	// subf r3,r29,r28
	ctx.r3.u64 = r28.u64 - r29.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lis r27,-32255
	r27.s64 = -2113863680;
	// lis r25,-32256
	r25.s64 = -2113929216;
	// lfd f9,-9120(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + -9120);
	// lfs f10,16288(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16288);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r5,r29,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f11,-7224(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -7224);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,17176(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 17176);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-13044(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + -13044);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,2028(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 2028);
	ctx.f8.f64 = double(temp.f32);
loc_823DE0FC:
	// lfsx f0,r30,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r4,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xC;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfsx f7,r11,r26
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fadds f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fctiwz f7,f7
	ctx.f7.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x823de198
	if (ctx.cr6.eq) goto loc_823DE198;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f7,88(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// lfs f6,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// fsubs f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f7,f0,f12,f6
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f6.f64)));
	// stfs f7,28(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f7,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f0,f11,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f7.f64)));
	// fmul f6,f0,f9
	ctx.f6.f64 = ctx.f0.f64 * ctx.f9.f64;
	// stfs f7,28(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfs f7,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f0,f0,f10,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f7.f64)));
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// frsp f31,f6
	f31.f64 = double(float(ctx.f6.f64));
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
loc_823DE198:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x823de1a8
	if (ctx.cr6.lt) goto loc_823DE1A8;
	// li r11,255
	ctx.r11.s64 = 255;
loc_823DE1A8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823de1c0
	if (!ctx.cr6.gt) goto loc_823DE1C0;
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// blt cr6,0x823de1c4
	if (ctx.cr6.lt) goto loc_823DE1C4;
	// li r9,255
	ctx.r9.s64 = 255;
	// b 0x823de1c4
	goto loc_823DE1C4;
loc_823DE1C0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_823DE1C4:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stbux r9,r3,r29
	ea = ctx.r3.u32 + r29.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r3.u32 = ea;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823de0fc
	if (ctx.cr6.lt) goto loc_823DE0FC;
loc_823DE1E4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823E32F8) {
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
	// bge cr6,0x823e33e4
	if (!ctx.cr6.lt) goto loc_823E33E4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f0,27992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 27992);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,-31056(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -31056);
	ctx.f13.f64 = double(temp.f32);
loc_823E335C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r10,r10,22
	ctx.r10.u64 = ctx.r10.u32 & 0x3FF;
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
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,22,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FF;
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
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,12,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3FF;
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
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
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
	// bdnz 0x823e335c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E335C;
loc_823E33E4:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e3400
	if (ctx.cr6.eq) goto loc_823E3400;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x823E3400;
	sub_82413D40(ctx, base);
loc_823E3400:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e341c
	if (ctx.cr6.eq) goto loc_823E341C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x823dc3f0
	ctx.lr = 0x823E341C;
	sub_823DC3F0(ctx, base);
loc_823E341C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E47E8) {
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
	ctx.lr = 0x823E47F0;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r8,100(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r28,r11,r30
	r28.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bge cr6,0x823e4864
	if (!ctx.cr6.lt) goto loc_823E4864;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
loc_823E4838:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e70c8
	ctx.lr = 0x823E4848;
	sub_823E70C8(ctx, base);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// stfs f31,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 12, temp.u32);
	// stfs f31,8(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// stfs f31,4(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// blt cr6,0x823e4838
	if (ctx.cr6.lt) goto loc_823E4838;
loc_823E4864:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e4884
	if (ctx.cr6.eq) goto loc_823E4884;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r29
	ctx.r4.u64 = r29.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x823E4884;
	sub_82413D40(ctx, base);
loc_823E4884:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e48a4
	if (ctx.cr6.eq) goto loc_823E48A4;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r29
	ctx.r4.u64 = r29.u64 - ctx.r11.u64;
	// bl 0x823dc3f0
	ctx.lr = 0x823E48A4;
	sub_823DC3F0(ctx, base);
loc_823E48A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823E70C8) {
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
loc_823E70DC:
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
	// bdnz 0x823e70dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E70DC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E80C8) {
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
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rlwinm. r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e8114
	if (ctx.cr0.eq) goto loc_823E8114;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_823E80E8:
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r9,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823e80e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E80E8;
loc_823E8114:
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
	// bl 0x82226458
	ctx.lr = 0x823E8144;
	sub_82226458(ctx, base);
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

DEFINE_REX_FUNC(sub_823ED090) {
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
	// li r10,102
	ctx.r10.s64 = 102;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823ED0C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,444(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 444);
	// lwz r6,12(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x823ed0f4
	if (ctx.cr6.eq) goto loc_823ED0F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,61
	ctx.r10.s64 = 61;
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
	ctx.lr = 0x823ED0F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823ED0F4:
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r31,232
	ctx.r8.s64 = r31.s64 + 232;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r7,r31,248
	ctx.r7.s64 = r31.s64 + 248;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r6,r31,264
	ctx.r6.s64 = r31.s64 + 264;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
loc_823ED118:
	// stbx r10,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// stbx r9,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r5,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823ed118
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823ED118;
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 444);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r10.u32);
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r10,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r10.u32);
	// stw r10,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r10.u32);
	// stb r9,288(r31)
	REX_STORE_U8(r31.u32 + 288, ctx.r9.u8);
	// stb r9,289(r31)
	REX_STORE_U8(r31.u32 + 289, ctx.r9.u8);
	// stb r10,290(r31)
	REX_STORE_U8(r31.u32 + 290, ctx.r10.u8);
	// sth r9,292(r31)
	REX_STORE_U16(r31.u32 + 292, ctx.r9.u16);
	// sth r9,294(r31)
	REX_STORE_U16(r31.u32 + 294, ctx.r9.u16);
	// stw r10,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r10.u32);
	// stb r10,300(r31)
	REX_STORE_U8(r31.u32 + 300, ctx.r10.u8);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_823EF560) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stb r5,44(r4)
	REX_STORE_U8(ctx.r4.u32 + 44, ctx.r5.u8);
	// ori r10,r10,2049
	ctx.r10.u64 = ctx.r10.u64 | 2049;
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lfs f0,14872(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 14872);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F0108) {
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
	ctx.lr = 0x823F0110;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r29,r25
	r29.u64 = r25.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// beq cr6,0x823f013c
	if (ctx.cr6.eq) goto loc_823F013C;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_823F013C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823f0148
	if (ctx.cr6.eq) goto loc_823F0148;
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_823F0148:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x823f0154
	if (ctx.cr6.eq) goto loc_823F0154;
	// lwz r30,0(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 0);
loc_823F0154:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823f016c
	if (ctx.cr6.eq) goto loc_823F016C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823effb8
	ctx.lr = 0x823F016C;
	sub_823EFFB8(ctx, base);
loc_823F016C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823f0180
	if (ctx.cr6.eq) goto loc_823F0180;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f45d8
	ctx.lr = 0x823F017C;
	sub_823F45D8(ctx, base);
	// stw r25,0(r28)
	REX_STORE_U32(r28.u32 + 0, r25.u32);
loc_823F0180:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823f0194
	if (ctx.cr6.eq) goto loc_823F0194;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f45d8
	ctx.lr = 0x823F0190;
	sub_823F45D8(ctx, base);
	// stw r25,0(r26)
	REX_STORE_U32(r26.u32 + 0, r25.u32);
loc_823F0194:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823f01a8
	if (ctx.cr6.eq) goto loc_823F01A8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f45d8
	ctx.lr = 0x823F01A4;
	sub_823F45D8(ctx, base);
	// stw r25,0(r27)
	REX_STORE_U32(r27.u32 + 0, r25.u32);
loc_823F01A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823F3810) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823f3500
	ctx.lr = 0x823F3834;
	sub_823F3500(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823f38b8
	if (ctx.cr0.lt) goto loc_823F38B8;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r9,r31,-4
	ctx.r9.s64 = r31.s64 + -4;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-30112(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30112);
	ctx.f0.f64 = double(temp.f32);
loc_823F3858:
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
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
	// stfsu f13,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823f3858
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F3858;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r9,r31,124
	ctx.r9.s64 = r31.s64 + 124;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823F3890:
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
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
	// stfsu f13,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823f3890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F3890;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F38B8:
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

DEFINE_REX_FUNC(sub_823F5540) {
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
	ctx.lr = 0x823F5548;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x823f5594
	if (ctx.cr6.eq) goto loc_823F5594;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r4.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823F5594;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F5594:
	// li r5,584
	ctx.r5.s64 = 584;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f4fe8
	ctx.lr = 0x823F55A4;
	sub_823F4FE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r27,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r27.u32);
	// stw r25,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r25.u32);
	// stw r28,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r28.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r3,72(r30)
	REX_STORE_U32(r30.u32 + 72, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823F62C8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F62EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F6CF8) {
	REX_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divw r9,r11,r4
	ctx.r9.u64 = uint32_t((ctx.r4.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r11.s32 / ctx.r4.s32 : 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mullw r8,r9,r4
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subf r6,r8,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r8.u64;
	// andc r5,r4,r7
	ctx.r5.u64 = ctx.r4.u64 & ~ctx.r7.u64;
	// subf r3,r6,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r6.u64;
	// twlgei r5,-1
	if (ctx.r5.s32 == -1 || ctx.r5.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F83E8) {
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
	// lbz r11,1548(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1548);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,1
	r30.s64 = 1;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,1372(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1372);
	// beq 0x823f8428
	if (ctx.cr0.eq) goto loc_823F8428;
	// rlwinm r11,r11,0,22,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// bne cr6,0x823f8438
	if (!ctx.cr6.eq) goto loc_823F8438;
	// li r30,0
	r30.s64 = 0;
	// b 0x823f8438
	goto loc_823F8438;
loc_823F8428:
	// rlwinm r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r30
	r30.u64 = ctx.r11.u64 & r30.u64;
loc_823F8438:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f2248
	ctx.lr = 0x823F8448;
	sub_823F2248(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x823f8494
	if (ctx.cr6.eq) goto loc_823F8494;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,81(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lbz r7,83(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r8,1536(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1536);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x823f8498
	goto loc_823F8498;
loc_823F8494:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F8498:
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

DEFINE_REX_FUNC(sub_823FA970) {
	REX_FUNC_PROLOGUE();
	// lwz r10,332(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 332);
	// lwz r11,432(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 432);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x823fa998
	if (!ctx.cr6.gt) goto loc_823FA998;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// blr 
	return;
loc_823FA998:
	// lwz r10,324(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 324);
	// lwz r9,152(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r10,336(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 336);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x823fa9c8
	if (!ctx.cr6.lt) goto loc_823FA9C8;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
loc_823FA9C8:
	// lwz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823FCC00) {
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
	ctx.lr = 0x823FCC08;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,280(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 280);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r24,448(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r21,408(r3)
	r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r20,416(r3)
	r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 416);
	// beq cr6,0x823fcc50
	if (ctx.cr6.eq) goto loc_823FCC50;
	// lwz r11,40(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823fcc50
	if (!ctx.cr6.eq) goto loc_823FCC50;
	// bl 0x823fc908
	ctx.lr = 0x823FCC3C;
	sub_823FC908(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823fcc50
	if (!ctx.cr6.eq) goto loc_823FCC50;
loc_823FCC44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eb4
	return;
loc_823FCC50:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823fce48
	if (!ctx.cr6.eq) goto loc_823FCE48;
	// lwz r19,20(r24)
	r19.u64 = REX_LOAD_U32(r24.u32 + 20);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x823fcc70
	if (ctx.cr6.eq) goto loc_823FCC70;
	// addi r19,r19,-1
	r19.s64 = r19.s64 + -1;
	// b 0x823fce44
	goto loc_823FCE44;
loc_823FCC70:
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// lwz r29,404(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + 404);
	// lwz r22,0(r31)
	r22.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(r29.s32, r21.s32, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r4,12(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 12);
	// lwz r5,16(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 16);
	// lwz r28,60(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 60);
	// bgt cr6,0x823fce24
	if (ctx.cr6.gt) goto loc_823FCE24;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r26,1
	r26.s64 = 1;
	// addi r23,r10,1768
	r23.s64 = ctx.r10.s64 + 1768;
	// addi r27,r11,4328
	r27.s64 = ctx.r11.s64 + 4328;
loc_823FCCB8:
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x823fccec
	if (!ctx.cr6.lt) goto loc_823FCCEC;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823fbf88
	ctx.lr = 0x823FCCCC;
	sub_823FBF88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fcc44
	if (ctx.cr6.eq) goto loc_823FCC44;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x823fccec
	if (!ctx.cr6.lt) goto loc_823FCCEC;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// b 0x823fcd20
	goto loc_823FCD20;
loc_823FCCEC:
	// addi r11,r5,-8
	ctx.r11.s64 = ctx.r5.s64 + -8;
	// sraw r10,r4,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r10.s64 = ctx.r4.s32 >> temp.u32;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + r28.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823fcd1c
	if (ctx.cr6.eq) goto loc_823FCD1C;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// subf r5,r10,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r10.u64;
	// lbz r3,1168(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1168);
	// b 0x823fcd3c
	goto loc_823FCD3C;
loc_823FCD1C:
	// li r7,9
	ctx.r7.s64 = 9;
loc_823FCD20:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823fc0f0
	ctx.lr = 0x823FCD2C;
	sub_823FC0F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823fcc44
	if (ctx.cr6.lt) goto loc_823FCC44;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_823FCD3C:
	// clrlwi r31,r3,28
	r31.u64 = ctx.r3.u32 & 0xF;
	// srawi r30,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	r30.s64 = ctx.r3.s32 >> 4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x823fcdc0
	if (ctx.cr6.eq) goto loc_823FCDC0;
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r31.s32, ctx.xer);
	// bge cr6,0x823fcd74
	if (!ctx.cr6.lt) goto loc_823FCD74;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823fbf88
	ctx.lr = 0x823FCD64;
	sub_823FBF88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fcc44
	if (ctx.cr6.eq) goto loc_823FCC44;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_823FCD74:
	// slw r11,r26,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (r26.u32 << (r31.u8 & 0x3F));
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - r31.u64;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sraw r9,r4,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	// lwzx r8,r10,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x823fcda4
	if (!ctx.cr6.lt) goto loc_823FCDA4;
	// addi r9,r27,64
	ctx.r9.s64 = r27.s64 + 64;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823FCDA4:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r11,r20
	ctx.r9.u64 = r20.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r20.u8 & 0x3F));
	// lwzx r8,r10,r23
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r23.u32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r7,r6,r22
	REX_STORE_U16(ctx.r6.u32 + r22.u32, ctx.r7.u16);
	// b 0x823fcdcc
	goto loc_823FCDCC;
loc_823FCDC0:
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(r30.s32, 15, ctx.xer);
	// bne cr6,0x823fcddc
	if (!ctx.cr6.eq) goto loc_823FCDDC;
	// addi r30,r29,15
	r30.s64 = r29.s64 + 15;
loc_823FCDCC:
	// addi r29,r30,1
	r29.s64 = r30.s64 + 1;
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(r29.s32, r21.s32, ctx.xer);
	// ble cr6,0x823fccb8
	if (!ctx.cr6.gt) goto loc_823FCCB8;
	// b 0x823fce24
	goto loc_823FCE24;
loc_823FCDDC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// slw r31,r26,r30
	r31.u64 = r30.u8 & 0x20 ? 0 : (r26.u32 << (r30.u8 & 0x3F));
	// beq cr6,0x823fce20
	if (ctx.cr6.eq) goto loc_823FCE20;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// bge cr6,0x823fce0c
	if (!ctx.cr6.lt) goto loc_823FCE0C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823fbf88
	ctx.lr = 0x823FCDFC;
	sub_823FBF88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fcc44
	if (ctx.cr6.eq) goto loc_823FCC44;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_823FCE0C:
	// subf r5,r30,r5
	ctx.r5.u64 = ctx.r5.u64 - r30.u64;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// sraw r10,r4,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r10.s64 = ctx.r4.s32 >> temp.u32;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
loc_823FCE20:
	// addi r19,r31,-1
	r19.s64 = r31.s64 + -1;
loc_823FCE24:
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,24(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 24);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r4,12(r24)
	REX_STORE_U32(r24.u32 + 12, ctx.r4.u32);
	// stw r5,16(r24)
	REX_STORE_U32(r24.u32 + 16, ctx.r5.u32);
loc_823FCE44:
	// stw r19,20(r24)
	REX_STORE_U32(r24.u32 + 20, r19.u32);
loc_823FCE48:
	// lwz r11,40(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,40(r24)
	REX_STORE_U32(r24.u32 + 40, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_82405E30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,16496
	ctx.r11.s64 = ctx.r11.s64 + 16496;
	// lvx128 v1,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82405c58
	sub_82405C58(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824061B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x824061B8;
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v125,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v126,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vmaxfp128 v63,v5,v1
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v1.f32)));
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// vor128 v127,v2,v2
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// vor128 v126,v7,v7
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// rlwinm r5,r11,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// vminfp128 v0,v6,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmaddfp v0,v0,v3,v4
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vor128 v125,v0,v0
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// bl 0x822d5870
	ctx.lr = 0x82406208;
	sub_822D5870(ctx, base);
	// vrfin128 v63,v125
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_round_ps(simde_mm_load_ps(v125.f32), SIMDE_MM_FROUND_TO_NEAREST_INT | SIMDE_MM_FROUND_NO_EXC));
	// vor128 v0,v125,v125
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)v125.u8));
	// vor128 v12,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v127.u8));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// vcfpuxws128 v13,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v63.f32)));
	// vsel128 v12,v0,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vxor128 v1,v12,v126
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v126.u8)));
	// bctrl 
	ctx.lr = 0x82406230;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v125,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v126,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8240BE10) {
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
	ctx.lr = 0x8240BE18;
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r10,588(r1)
	REX_STORE_U32(ctx.r1.u32 + 588, ctx.r10.u32);
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// li r19,0
	r19.s64 = 0;
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// stw r6,556(r1)
	REX_STORE_U32(ctx.r1.u32 + 556, ctx.r6.u32);
	// stw r19,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r19.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// clrlwi r18,r11,26
	r18.u64 = ctx.r11.u32 & 0x3F;
	// stw r19,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r19.u32);
	// stw r19,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r19.u32);
	// addi r11,r8,27512
	ctx.r11.s64 = ctx.r8.s64 + 27512;
	// stw r19,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r19.u32);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lwz r8,28(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r6,r18,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r18,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, r18.u32);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// lwz r9,40(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r7,48(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// rlwinm r17,r9,1,31,31
	r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lbzx r11,r6,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r14,r8,1,31,31
	r14.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r19,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r19.u32);
	// rlwinm r22,r7,23,30,31
	r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0x3;
	// stw r14,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, r14.u32);
	// rlwinm r16,r7,21,31,31
	r16.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 21) & 0x1;
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r22,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, r22.u32);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// stw r16,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r16.u32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// stw r8,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// stw r19,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r19.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// rlwinm r31,r17,1,0,30
	r31.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82221288
	ctx.lr = 0x8240BEDC;
	sub_82221288(ctx, base);
	// lwz r9,48(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 48);
	// rlwinm r9,r9,0,21,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r9,1536
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1536, ctx.xer);
	// lwz r28,152(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r29,148(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// subf r11,r31,r28
	ctx.r11.u64 = r28.u64 - r31.u64;
	// subf r10,r31,r29
	ctx.r10.u64 = r29.u64 - r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	ctx.r11.u64 = r17.u64 - ctx.r11.u64;
	// subf r10,r10,r17
	ctx.r10.u64 = r17.u64 - ctx.r10.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// beq cr6,0x8240bf30
	if (ctx.cr6.eq) goto loc_8240BF30;
	// lwz r9,32(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 32);
	// rlwinm. r9,r9,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8240bf30
	if (!ctx.cr0.eq) goto loc_8240BF30;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x8240bf3c
	goto loc_8240BF3C;
loc_8240BF30:
	// lwz r9,36(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 36);
	// rlwinm r9,r9,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8240BF3C:
	// addi r8,r24,1
	ctx.r8.s64 = r24.s64 + 1;
	// stw r9,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// beq cr6,0x8240bfc4
	if (ctx.cr6.eq) goto loc_8240BFC4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// blt cr6,0x8240bf64
	if (ctx.cr6.lt) goto loc_8240BF64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8240BF64:
	// subf. r9,r30,r9
	ctx.r9.u64 = ctx.r9.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8240bf84
	if (!ctx.cr0.gt) goto loc_8240BF84;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// blt cr6,0x8240bf7c
	if (ctx.cr6.lt) goto loc_8240BF7C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8240BF7C:
	// subf r9,r30,r9
	ctx.r9.u64 = ctx.r9.u64 - r30.u64;
	// b 0x8240bf88
	goto loc_8240BF88;
loc_8240BF84:
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
loc_8240BF88:
	// cmplw cr6,r9,r21
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r21.u32, ctx.xer);
	// bge cr6,0x8240bfcc
	if (!ctx.cr6.lt) goto loc_8240BFCC;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// blt cr6,0x8240bfa0
	if (ctx.cr6.lt) goto loc_8240BFA0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8240BFA0:
	// subf. r9,r30,r9
	ctx.r9.u64 = ctx.r9.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8240bfbc
	if (!ctx.cr0.gt) goto loc_8240BFBC;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8240bfb4
	if (ctx.cr6.lt) goto loc_8240BFB4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8240BFB4:
	// subf r21,r30,r11
	r21.u64 = ctx.r11.u64 - r30.u64;
	// b 0x8240bfc8
	goto loc_8240BFC8;
loc_8240BFBC:
	// mr r21,r19
	r21.u64 = r19.u64;
	// b 0x8240bfc8
	goto loc_8240BFC8;
loc_8240BFC4:
	// mr r21,r27
	r21.u64 = r27.u64;
loc_8240BFC8:
	// stw r21,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r21.u32);
loc_8240BFCC:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// stw r8,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// beq cr6,0x8240c074
	if (ctx.cr6.eq) goto loc_8240C074;
	// subf r11,r31,r28
	ctx.r11.u64 = r28.u64 - r31.u64;
	// subf r10,r31,r29
	ctx.r10.u64 = r29.u64 - r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	ctx.r11.u64 = r17.u64 - ctx.r11.u64;
	// subf r10,r10,r17
	ctx.r10.u64 = r17.u64 - ctx.r10.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8240c00c
	if (ctx.cr6.lt) goto loc_8240C00C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8240C00C:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u8 = (ctx.r10.u32 + 0xFFFFFFFFu < ctx.r10.u32) | (ctx.r10.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r10.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8240c074
	if (!ctx.cr6.lt) goto loc_8240C074;
	// subf r11,r31,r28
	ctx.r11.u64 = r28.u64 - r31.u64;
	// subf r10,r31,r29
	ctx.r10.u64 = r29.u64 - r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	ctx.r11.u64 = r17.u64 - ctx.r11.u64;
	// subf r10,r10,r17
	ctx.r10.u64 = r17.u64 - ctx.r10.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8240c05c
	if (ctx.cr6.lt) goto loc_8240C05C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8240C05C:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u8 = (ctx.r10.u32 + 0xFFFFFFFFu < ctx.r10.u32) | (ctx.r10.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r10.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
loc_8240C074:
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r10,208(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stw r25,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8240a7d0
	ctx.lr = 0x8240C0A8;
	sub_8240A7D0(ctx, base);
	// lwz r23,604(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 604);
	// mr r31,r27
	r31.u64 = r27.u64;
	// stw r27,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r27.u32);
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(r27.u32, r24.u32, ctx.xer);
	// bgt cr6,0x8240c69c
	if (ctx.cr6.gt) goto loc_8240C69C;
	// lwz r15,612(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r24,596(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// b 0x8240c0e4
	goto loc_8240C0E4;
loc_8240C0C8:
	// lwz r31,140(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// li r19,0
	r19.s64 = 0;
	// lwz r21,128(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r16,224(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r14,204(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r22,188(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r18,216(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
loc_8240C0E4:
	// subfc r11,r21,r31
	ctx.xer.ca = r31.u32 >= r21.u32;
	ctx.r11.u64 = r31.u64 - r21.u64;
	// stw r17,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8240a9d0
	ctx.lr = 0x8240C11C;
	sub_8240A9D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8240c67c
	if (ctx.cr0.eq) goto loc_8240C67C;
	// lwz r21,240(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// lwz r22,248(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// subf r11,r21,r22
	ctx.r11.u64 = r22.u64 - r21.u64;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// mulli r16,r10,6
	r16.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(6));
	// beq cr6,0x8240c170
	if (ctx.cr6.eq) goto loc_8240C170;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwz r5,208(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82408568
	ctx.lr = 0x8240C168;
	sub_82408568(ctx, base);
	// lwz r29,148(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r28,152(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
loc_8240C170:
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stw r19,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r19.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240c664
	if (ctx.cr6.eq) goto loc_8240C664;
	// lwz r25,260(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r14,256(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r18,252(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r19,244(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
loc_8240C190:
	// addi r9,r1,264
	ctx.r9.s64 = ctx.r1.s64 + 264;
	// lwz r31,140(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// addi r8,r1,212
	ctx.r8.s64 = ctx.r1.s64 + 212;
	// lwz r4,172(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// addi r11,r1,232
	ctx.r11.s64 = ctx.r1.s64 + 232;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,220
	ctx.r10.s64 = ctx.r1.s64 + 220;
	// addi r9,r1,228
	ctx.r9.s64 = ctx.r1.s64 + 228;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r8,r1,268
	ctx.r8.s64 = ctx.r1.s64 + 268;
	// addi r7,r1,164
	ctx.r7.s64 = ctx.r1.s64 + 164;
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82222148
	ctx.lr = 0x8240C1D0;
	sub_82222148(ctx, base);
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lwz r9,228(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r7,232(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r8,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// subf r28,r9,r7
	r28.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8240c200
	if (ctx.cr6.gt) goto loc_8240C200;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8240C200:
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x8240c218
	if (ctx.cr6.gt) goto loc_8240C218;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8240C218:
	// lwz r9,196(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8240c23c
	if (ctx.cr6.gt) goto loc_8240C23C;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
loc_8240C23C:
	// lwz r7,188(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r9,164(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// beq cr6,0x8240c268
	if (ctx.cr6.eq) goto loc_8240C268;
	// rlwinm r11,r18,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r19,30,2,26
	ctx.r10.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFE0;
	// addi r6,r11,31
	ctx.r6.s64 = ctx.r11.s64 + 31;
	// mullw r11,r10,r8
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r6,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFE0;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// b 0x8240c27c
	goto loc_8240C27C;
loc_8240C268:
	// addi r11,r25,3
	ctx.r11.s64 = r25.s64 + 3;
	// rlwinm r10,r14,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r6,r11,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r6,r9
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
loc_8240C27C:
	// lwz r6,160(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8240c294
	if (!ctx.cr6.lt) goto loc_8240C294;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
loc_8240C294:
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8240c2a4
	if (!ctx.cr6.gt) goto loc_8240C2A4;
	// stw r10,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
loc_8240C2A4:
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240c558
	if (ctx.cr6.eq) goto loc_8240C558;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8240c3cc
	if (!ctx.cr6.lt) goto loc_8240C3CC;
	// mullw r11,r14,r9
	ctx.r11.s64 = int64_t(r14.s32) * int64_t(ctx.r9.s32);
	// add r26,r11,r28
	r26.u64 = ctx.r11.u64 + r28.u64;
	// cmplw cr6,r14,r25
	ctx.cr6.compare<uint32_t>(r14.u32, r25.u32, ctx.xer);
	// bge cr6,0x8240c644
	if (!ctx.cr6.lt) goto loc_8240C644;
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r25,r19,30,2,31
	r25.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r24,r14,r11
	r24.u64 = ctx.r11.u64 - r14.u64;
loc_8240C2D8:
	// mullw r10,r25,r8
	ctx.r10.s64 = int64_t(r25.s32) * int64_t(ctx.r8.s32);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// add r29,r10,r26
	r29.u64 = ctx.r10.u64 + r26.u64;
	// cmplw cr6,r19,r18
	ctx.cr6.compare<uint32_t>(r19.u32, r18.u32, ctx.xer);
	// bge cr6,0x8240c3b4
	if (!ctx.cr6.lt) goto loc_8240C3B4;
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r9,r21,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r27,r10,r15
	r27.u64 = ctx.r10.u64 + r15.u64;
loc_8240C2FC:
	// addi r31,r11,128
	r31.s64 = ctx.r11.s64 + 128;
	// add r30,r27,r29
	r30.u64 = r27.u64 + r29.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bge cr6,0x8240c39c
	if (!ctx.cr6.lt) goto loc_8240C39C;
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
loc_8240C31C:
	// lwz r11,596(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r16.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// subf r11,r23,r11
	ctx.r11.u64 = ctx.r11.u64 - r23.u64;
	// lwz r10,588(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x823ce080
	ctx.lr = 0x8240C348;
	sub_823CE080(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r21,r22
	ctx.cr6.compare<uint32_t>(r21.u32, r22.u32, ctx.xer);
	// add r23,r11,r23
	r23.u64 = ctx.r11.u64 + r23.u64;
	// bge cr6,0x8240c390
	if (!ctx.cr6.lt) goto loc_8240C390;
	// lwz r11,200(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8240C374:
	// lhz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// sth r10,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r10.u16);
	// lwzu r10,6(r11)
	ea = 6 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r10,2(r30)
	REX_STORE_U32(r30.u32 + 2, ctx.r10.u32);
	// add r30,r30,r9
	r30.u64 = r30.u64 + ctx.r9.u64;
	// bdnz 0x8240c374
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240C374;
loc_8240C390:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x8240c31c
	if (!ctx.cr0.eq) goto loc_8240C31C;
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_8240C39C:
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
	// cmplw cr6,r31,r18
	ctx.cr6.compare<uint32_t>(r31.u32, r18.u32, ctx.xer);
	// blt cr6,0x8240c2fc
	if (ctx.cr6.lt) goto loc_8240C2FC;
	// lwz r9,164(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
loc_8240C3B4:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// add r26,r26,r9
	r26.u64 = r26.u64 + ctx.r9.u64;
	// bne 0x8240c2d8
	if (!ctx.cr0.eq) goto loc_8240C2D8;
	// lwz r24,596(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// lwz r25,260(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// b 0x8240c644
	goto loc_8240C644;
loc_8240C3CC:
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// beq cr6,0x8240c484
	if (ctx.cr6.eq) goto loc_8240C484;
	// mr r27,r19
	r27.u64 = r19.u64;
	// cmplw cr6,r19,r18
	ctx.cr6.compare<uint32_t>(r19.u32, r18.u32, ctx.xer);
	// bge cr6,0x8240c644
	if (!ctx.cr6.lt) goto loc_8240C644;
loc_8240C3E0:
	// subf r11,r23,r24
	ctx.r11.u64 = r24.u64 - r23.u64;
	// stw r16,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r16.u32);
	// lwz r10,588(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x823ce080
	ctx.lr = 0x8240C408;
	sub_823CE080(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmplw cr6,r21,r22
	ctx.cr6.compare<uint32_t>(r21.u32, r22.u32, ctx.xer);
	// add r23,r11,r23
	r23.u64 = ctx.r11.u64 + r23.u64;
	// bge cr6,0x8240c474
	if (!ctx.cr6.lt) goto loc_8240C474;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r29,r27,30,2,31
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r26,120(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
loc_8240C42C:
	// lwz r9,180(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// add r4,r29,r9
	ctx.r4.u64 = r29.u64 + ctx.r9.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82409228
	ctx.lr = 0x8240C44C;
	sub_82409228(ctx, base);
	// mullw r11,r3,r26
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(r26.s32);
	// lhz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + r15.u64;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(r31.u32, r22.u32, ctx.xer);
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwzu r10,6(r30)
	ea = 6 + r30.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// stw r10,2(r11)
	REX_STORE_U32(ctx.r11.u32 + 2, ctx.r10.u32);
	// blt cr6,0x8240c42c
	if (ctx.cr6.lt) goto loc_8240C42C;
loc_8240C474:
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r27,r18
	ctx.cr6.compare<uint32_t>(r27.u32, r18.u32, ctx.xer);
	// blt cr6,0x8240c3e0
	if (ctx.cr6.lt) goto loc_8240C3E0;
	// b 0x8240c644
	goto loc_8240C644;
loc_8240C484:
	// mr r27,r14
	r27.u64 = r14.u64;
	// cmplw cr6,r14,r25
	ctx.cr6.compare<uint32_t>(r14.u32, r25.u32, ctx.xer);
	// bge cr6,0x8240c644
	if (!ctx.cr6.lt) goto loc_8240C644;
loc_8240C490:
	// mr r26,r19
	r26.u64 = r19.u64;
	// cmplw cr6,r19,r18
	ctx.cr6.compare<uint32_t>(r19.u32, r18.u32, ctx.xer);
	// bge cr6,0x8240c548
	if (!ctx.cr6.lt) goto loc_8240C548;
loc_8240C49C:
	// subf r11,r23,r24
	ctx.r11.u64 = r24.u64 - r23.u64;
	// stw r16,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r16.u32);
	// lwz r10,588(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x823ce080
	ctx.lr = 0x8240C4C4;
	sub_823CE080(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmplw cr6,r21,r22
	ctx.cr6.compare<uint32_t>(r21.u32, r22.u32, ctx.xer);
	// add r23,r11,r23
	r23.u64 = ctx.r11.u64 + r23.u64;
	// bge cr6,0x8240c53c
	if (!ctx.cr6.lt) goto loc_8240C53C;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r29,r26,30,2,31
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
loc_8240C4E4:
	// lwz r9,180(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,184(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// add r4,r29,r9
	ctx.r4.u64 = r29.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,120(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// add r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 + r27.u64;
	// lwz r7,192(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r6,144(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x824087a8
	ctx.lr = 0x8240C510;
	sub_824087A8(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lhz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 4);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// mullw r11,r3,r11
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(r31.u32, r22.u32, ctx.xer);
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + r15.u64;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwzu r10,6(r30)
	ea = 6 + r30.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// stw r10,2(r11)
	REX_STORE_U32(ctx.r11.u32 + 2, ctx.r10.u32);
	// blt cr6,0x8240c4e4
	if (ctx.cr6.lt) goto loc_8240C4E4;
loc_8240C53C:
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r26,r18
	ctx.cr6.compare<uint32_t>(r26.u32, r18.u32, ctx.xer);
	// blt cr6,0x8240c49c
	if (ctx.cr6.lt) goto loc_8240C49C;
loc_8240C548:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(r27.u32, r25.u32, ctx.xer);
	// blt cr6,0x8240c490
	if (ctx.cr6.lt) goto loc_8240C490;
	// b 0x8240c644
	goto loc_8240C644;
loc_8240C558:
	// mullw r11,r14,r9
	ctx.r11.s64 = int64_t(r14.s32) * int64_t(ctx.r9.s32);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// cmplw cr6,r14,r25
	ctx.cr6.compare<uint32_t>(r14.u32, r25.u32, ctx.xer);
	// bge cr6,0x8240c644
	if (!ctx.cr6.lt) goto loc_8240C644;
	// rlwinm r27,r19,30,2,31
	r27.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r26,r14,r25
	r26.u64 = r25.u64 - r14.u64;
loc_8240C570:
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r19,r18
	ctx.cr6.compare<uint32_t>(r19.u32, r18.u32, ctx.xer);
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r31,r11,r28
	r31.u64 = ctx.r11.u64 + r28.u64;
	// bge cr6,0x8240c638
	if (!ctx.cr6.lt) goto loc_8240C638;
	// subf r11,r19,r18
	ctx.r11.u64 = r18.u64 - r19.u64;
	// rlwinm r30,r21,30,2,31
	r30.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
loc_8240C59C:
	// subf r11,r23,r24
	ctx.r11.u64 = r24.u64 - r23.u64;
	// stw r16,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r16.u32);
	// lwz r10,588(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x823ce080
	ctx.lr = 0x8240C5C4;
	sub_823CE080(ctx, base);
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r21,r22
	ctx.cr6.compare<uint32_t>(r21.u32, r22.u32, ctx.xer);
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// add r23,r11,r23
	r23.u64 = ctx.r11.u64 + r23.u64;
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + r15.u64;
	// bge cr6,0x8240c624
	if (!ctx.cr6.lt) goto loc_8240C624;
	// lwz r10,200(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8240C608:
	// lhz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lwz r8,120(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lwzu r9,6(r10)
	ea = 6 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r9,2(r11)
	REX_STORE_U32(ctx.r11.u32 + 2, ctx.r9.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bdnz 0x8240c608
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240C608;
loc_8240C624:
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// bne 0x8240c59c
	if (!ctx.cr0.eq) goto loc_8240C59C;
	// lwz r9,164(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
loc_8240C638:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// add r28,r28,r9
	r28.u64 = r28.u64 + ctx.r9.u64;
	// bne 0x8240c570
	if (!ctx.cr0.eq) goto loc_8240C570;
loc_8240C644:
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r10,156(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8240c190
	if (ctx.cr6.lt) goto loc_8240C190;
	// lwz r29,148(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r28,152(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
loc_8240C664:
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,556(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8240c0c8
	if (!ctx.cr6.gt) goto loc_8240C0C8;
loc_8240C67C:
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8240c69c
	if (!ctx.cr6.lt) goto loc_8240C69C;
	// subf r5,r4,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82216d48
	ctx.lr = 0x8240C69C;
	sub_82216D48(ctx, base);
loc_8240C69C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8242C584) {
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

DEFINE_REX_FUNC(sub_8242CE40) {
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
	// lwz r31,396(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x8242ce78
	goto loc_8242CE78;
loc_8242CE60:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x824359e8
	ctx.lr = 0x8242CE6C;
	sub_824359E8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8242ce80
	if (ctx.cr6.eq) goto loc_8242CE80;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_8242CE78:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8242ce60
	if (!ctx.cr6.eq) goto loc_8242CE60;
loc_8242CE80:
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

DEFINE_REX_FUNC(sub_8242DB30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8242DB38;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r28,r3,44
	r28.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242DB5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,544(r31)
	REX_STORE_U32(r31.u32 + 544, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8242DB64:
	// lwz r10,176(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// bne 0x8242db64
	if (!ctx.cr0.eq) goto loc_8242DB64;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r29,-1
	r29.s64 = -1;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8242db98
	if (!ctx.cr6.gt) goto loc_8242DB98;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8242DB98:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// bl 0x8242c3b0
	ctx.lr = 0x8242DBB0;
	sub_8242C3B0(ctx, base);
	// stw r3,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8242dbf8
	if (!ctx.cr0.eq) goto loc_8242DBF8;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8242DBC8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242c7f0
	ctx.lr = 0x8242DBD0;
	sub_8242C7F0(ctx, base);
loc_8242DBD0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242DBE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82443000
	ctx.lr = 0x8242DBEC;
	sub_82443000(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_8242DBF8:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823cd980
	ctx.lr = 0x8242DC08;
	sub_823CD980(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// addi r30,r31,180
	r30.s64 = r31.s64 + 180;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242dc24
	if (!ctx.cr6.eq) goto loc_8242DC24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824342b8
	ctx.lr = 0x8242DC24;
	sub_824342B8(ctx, base);
loc_8242DC24:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8242dbc8
	if (ctx.cr6.lt) goto loc_8242DBC8;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r7,r31,4
	ctx.r7.s64 = r31.s64 + 4;
	// li r5,375
	ctx.r5.s64 = 375;
	// lwz r6,176(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 176);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242DC54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8242dbc8
	if (ctx.cr0.lt) goto loc_8242DBC8;
	// addi r3,r31,604
	ctx.r3.s64 = r31.s64 + 604;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82434378
	ctx.lr = 0x8242DC6C;
	sub_82434378(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8242dbc8
	if (ctx.cr0.lt) goto loc_8242DBC8;
	// addi r5,r31,188
	ctx.r5.s64 = r31.s64 + 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242cd60
	ctx.lr = 0x8242DC88;
	sub_8242CD60(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8242dbc8
	if (ctx.cr0.lt) goto loc_8242DBC8;
	// addi r30,r31,184
	r30.s64 = r31.s64 + 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242cd60
	ctx.lr = 0x8242DCA8;
	sub_8242CD60(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8242dbc8
	if (ctx.cr0.lt) goto loc_8242DBC8;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242DCD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8242dbc8
	if (ctx.cr0.lt) goto loc_8242DBC8;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242DCF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8242dbc8
	if (ctx.cr0.lt) goto loc_8242DBC8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,16044
	ctx.r3.s64 = r31.s64 + 16044;
	// bl 0x82437738
	ctx.lr = 0x8242DD10;
	sub_82437738(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8242dbc8
	if (ctx.cr0.lt) goto loc_8242DBC8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,492
	ctx.r3.s64 = r31.s64 + 492;
	// bl 0x82437738
	ctx.lr = 0x8242DD2C;
	sub_82437738(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8242dbc8
	if (ctx.cr0.lt) goto loc_8242DBC8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r11.u32);
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
	// b 0x8242dbd0
	goto loc_8242DBD0;
}

DEFINE_REX_FUNC(sub_82436F20) {
	REX_FUNC_PROLOGUE();
	// lwz r11,392(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 392);
	// addi r10,r3,368
	ctx.r10.s64 = ctx.r3.s64 + 368;
	// b 0x82436f48
	goto loc_82436F48;
loc_82436F2C:
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r8.u32);
loc_82436F48:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82436f2c
	if (!ctx.cr6.eq) goto loc_82436F2C;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,408
	ctx.r11.s64 = ctx.r3.s64 + 408;
	// stw r9,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
	// stw r9,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r10,432(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 432);
	// b 0x82436f84
	goto loc_82436F84;
loc_82436F68:
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
loc_82436F84:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82436f68
	if (!ctx.cr6.eq) goto loc_82436F68;
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r9,336(r3)
	REX_STORE_U32(ctx.r3.u32 + 336, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824382B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x824382B8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,492(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 492);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824382fc
	if (!ctx.cr6.gt) goto loc_824382FC;
loc_824382D4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,516(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 516);
	// bl 0x8243beb8
	ctx.lr = 0x824382E0;
	sub_8243BEB8(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x824382ec
	if (ctx.cr6.gt) goto loc_824382EC;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_824382EC:
	// lwz r11,492(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 492);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824382d4
	if (ctx.cr6.lt) goto loc_824382D4;
loc_824382FC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824391D8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,536
	ctx.r3.s64 = ctx.r3.s64 + 536;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8242bbb8
	ctx.lr = 0x82439204;
	sub_8242BBB8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8243923c
	if (ctx.cr0.lt) goto loc_8243923C;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r30,544
	ctx.r3.s64 = r30.s64 + 544;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82435ac0
	ctx.lr = 0x8243921C;
	sub_82435AC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8243922c
	if (ctx.cr0.eq) goto loc_8243922C;
	// li r31,0
	r31.s64 = 0;
	// b 0x8243923c
	goto loc_8243923C;
loc_8243922C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// bl 0x82473600
	ctx.lr = 0x8243923C;
	sub_82473600(ctx, base);
loc_8243923C:
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

DEFINE_REX_FUNC(sub_8243A608) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8243A610;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,357
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 357, ctx.xer);
	// bne cr6,0x8243a62c
	if (!ctx.cr6.eq) goto loc_8243A62C;
	// li r29,32
	r29.s64 = 32;
	// b 0x8243a644
	goto loc_8243A644;
loc_8243A62C:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8243a63c
	if (!ctx.cr6.eq) goto loc_8243A63C;
	// li r29,16
	r29.s64 = 16;
	// b 0x8243a644
	goto loc_8243A644;
loc_8243A63C:
	// lhz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 16);
	// addi r29,r11,18
	r29.s64 = ctx.r11.s64 + 18;
loc_8243A644:
	// cmplwi cr6,r10,357
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 357, ctx.xer);
	// bne cr6,0x8243a654
	if (!ctx.cr6.eq) goto loc_8243A654;
	// li r30,32
	r30.s64 = 32;
	// b 0x8243a66c
	goto loc_8243A66C;
loc_8243A654:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8243a664
	if (!ctx.cr6.eq) goto loc_8243A664;
	// li r30,18
	r30.s64 = 18;
	// b 0x8243a66c
	goto loc_8243A66C;
loc_8243A664:
	// lhz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 16);
	// addi r30,r11,18
	r30.s64 = ctx.r11.s64 + 18;
loc_8243A66C:
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
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x8243A688;
	sub_8242C3B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8243a6b0
	if (ctx.cr0.eq) goto loc_8243A6B0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8243A6A0;
	sub_822D4FA0(ctx, base);
	// subf r5,r29,r30
	ctx.r5.u64 = r30.u64 - r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r31,r29
	ctx.r3.u64 = r31.u64 + r29.u64;
	// bl 0x822d5870
	ctx.lr = 0x8243A6B0;
	sub_822D5870(ctx, base);
loc_8243A6B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8243CA30) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,10840
	ctx.r10.s64 = ctx.r10.s64 + 10840;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x8242d868
	ctx.lr = 0x8243CA64;
	sub_8242D868(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x8242d868
	ctx.lr = 0x8243CA6C;
	sub_8242D868(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8242c4b8
	ctx.lr = 0x8243CA74;
	sub_8242C4B8(ctx, base);
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

DEFINE_REX_FUNC(sub_8243DCA8) {
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
	// addi r11,r11,11248
	ctx.r11.s64 = ctx.r11.s64 + 11248;
	// addi r10,r10,11228
	ctx.r10.s64 = ctx.r10.s64 + 11228;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// bl 0x8243dbd8
	ctx.lr = 0x8243DCD8;
	sub_8243DBD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242a358
	ctx.lr = 0x8243DCE0;
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

DEFINE_REX_FUNC(sub_8243F5E8) {
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
	// addi r11,r11,11328
	ctx.r11.s64 = ctx.r11.s64 + 11328;
	// addi r10,r10,11308
	ctx.r10.s64 = ctx.r10.s64 + 11308;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// bl 0x8243f378
	ctx.lr = 0x8243F618;
	sub_8243F378(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242a358
	ctx.lr = 0x8243F620;
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

DEFINE_REX_FUNC(sub_82440BA8) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82440bd8
	if (ctx.cr6.eq) goto loc_82440BD8;
	// bl 0x82473600
	ctx.lr = 0x82440BD4;
	sub_82473600(ctx, base);
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
loc_82440BD8:
	// li r5,168
	ctx.r5.s64 = 168;
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,232(r31)
	REX_STORE_U32(r31.u32 + 232, r30.u32);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// stw r30,212(r31)
	REX_STORE_U32(r31.u32 + 212, r30.u32);
	// stw r30,216(r31)
	REX_STORE_U32(r31.u32 + 216, r30.u32);
	// stw r30,220(r31)
	REX_STORE_U32(r31.u32 + 220, r30.u32);
	// stw r30,236(r31)
	REX_STORE_U32(r31.u32 + 236, r30.u32);
	// stw r30,224(r31)
	REX_STORE_U32(r31.u32 + 224, r30.u32);
	// stw r30,228(r31)
	REX_STORE_U32(r31.u32 + 228, r30.u32);
	// stw r30,240(r31)
	REX_STORE_U32(r31.u32 + 240, r30.u32);
	// bl 0x822d5870
	ctx.lr = 0x82440C0C;
	sub_822D5870(ctx, base);
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

DEFINE_REX_FUNC(sub_82441F60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82441F68;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r31,r3,84
	r31.s64 = ctx.r3.s64 + 84;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82441F8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,324(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 324);
	// b 0x82441fa4
	goto loc_82441FA4;
loc_82441F94:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// beq cr6,0x82441fac
	if (ctx.cr6.eq) goto loc_82441FAC;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82441FA4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82441f94
	if (!ctx.cr6.eq) goto loc_82441F94;
loc_82441FAC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r30,120
	ctx.r3.s64 = r30.s64 + 120;
	// bl 0x8245cef8
	ctx.lr = 0x82441FB8;
	sub_8245CEF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82441FCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82443108) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bctrl 
	ctx.lr = 0x82443154;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x822d4fa0
	ctx.lr = 0x82443164;
	sub_822D4FA0(ctx, base);
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

DEFINE_REX_FUNC(sub_82444FF0) {
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
	ctx.lr = 0x82444FF8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244501C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8244502c
	if (!ctx.cr6.eq) goto loc_8244502C;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r28,r11,596
	r28.s64 = ctx.r11.s64 + 596;
loc_8244502C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r27,r31,4
	r27.s64 = r31.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82445044;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82445080
	if (ctx.cr6.eq) goto loc_82445080;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 168);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r8,36(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
loc_82445080:
	// addi r29,r31,44
	r29.s64 = r31.s64 + 44;
	// b 0x824450fc
	goto loc_824450FC;
loc_82445088:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r3,r11,120
	ctx.r3.s64 = ctx.r11.s64 + 120;
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// b 0x824450a8
	goto loc_824450A8;
loc_82445098:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// beq cr6,0x824450b0
	if (ctx.cr6.eq) goto loc_824450B0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_824450A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82445098
	if (!ctx.cr6.eq) goto loc_82445098;
loc_824450B0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82443938
	ctx.lr = 0x824450B8;
	sub_82443938(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lis r5,4919
	ctx.r5.s64 = 322371584;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,61441
	ctx.r5.u64 = ctx.r5.u64 | 61441;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824450DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8242c888
	ctx.lr = 0x824450EC;
	sub_8242C888(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82444240
	ctx.lr = 0x824450F4;
	sub_82444240(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82473600
	ctx.lr = 0x824450FC;
	sub_82473600(ctx, base);
loc_824450FC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824344e8
	ctx.lr = 0x82445104;
	sub_824344E8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82445088
	if (!ctx.cr0.eq) goto loc_82445088;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82445120
	if (!ctx.cr6.eq) goto loc_82445120;
	// lwz r4,104(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 104);
	// b 0x8244512c
	goto loc_8244512C;
loc_82445120:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,108(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
loc_8244512C:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82445154
	if (ctx.cr6.eq) goto loc_82445154;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244514C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824451e8
	if (ctx.cr0.lt) goto loc_824451E8;
loc_82445154:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82444aa8
	ctx.lr = 0x82445160;
	sub_82444AA8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824451e8
	if (ctx.cr0.lt) goto loc_824451E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244517C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824451e8
	if (ctx.cr0.lt) goto loc_824451E8;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lis r4,4919
	ctx.r4.s64 = 322371584;
	// ori r4,r4,61441
	ctx.r4.u64 = ctx.r4.u64 | 61441;
	// lwz r3,180(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824451A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824451e8
	if (ctx.cr0.lt) goto loc_824451E8;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824451e8
	if (ctx.cr6.eq) goto loc_824451E8;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r9,168(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 168);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// subfe r9,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
loc_824451E8:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824451FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82445214;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x8242c890
	ctx.lr = 0x8244521C;
	sub_8242C890(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824538C8) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822d4f2c
	ctx.lr = 0x824538DC;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f25,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f25.f64 = double(temp.f32);
	// lfs f28,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f28.f64 = double(temp.f32);
	// fcmpu cr6,f31,f25
	ctx.cr6.compare(f31.f64, f25.f64);
	// bge cr6,0x82453910
	if (!ctx.cr6.lt) goto loc_82453910;
	// fdivs f27,f0,f31
	f27.f64 = double(float(ctx.f0.f64 / f31.f64));
	// b 0x82453914
	goto loc_82453914;
loc_82453910:
	// fmr f27,f28
	ctx.fpscr.disableFlushMode();
	f27.f64 = f28.f64;
loc_82453914:
	// fsubs f12,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f28.f64 - f27.f64));
	// lfs f11,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fdivs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfd f30,-6032(r11)
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + -6032);
	// lfs f0,1980(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1980);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lfs f13,2384(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2384);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f12,f31
	ctx.f8.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmuls f26,f9,f0
	f26.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f2,f8,f13
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// bl 0x822d5b48
	ctx.lr = 0x82453950;
	sub_822D5B48(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lfd f29,4000(r8)
	f29.u64 = REX_LOAD_U64(ctx.r8.u32 + 4000);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// bl 0x822d5b48
	ctx.lr = 0x82453964;
	sub_822D5B48(ctx, base);
	// fmuls f7,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(f27.f64 * f31.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// frsp f31,f1
	f31.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lfs f0,16260(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16260);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f7,f0
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// bl 0x822d5b48
	ctx.lr = 0x82453980;
	sub_822D5B48(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,24(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// bl 0x822d5b48
	ctx.lr = 0x82453990;
	sub_822D5B48(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,24(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f0,16680(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16680);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x824539f0
	if (!ctx.cr6.lt) goto loc_824539F0;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// bl 0x822d4d68
	ctx.lr = 0x824539B0;
	sub_822D4D68(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f12,f28,f31
	ctx.f12.f64 = double(float(f28.f64 - f31.f64));
	// lfs f0,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f11,f13,f13,f28
	ctx.f11.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f13.f64, -f28.f64)));
	// fsubs f10,f28,f13
	ctx.f10.f64 = double(float(f28.f64 - ctx.f13.f64));
	// fnmsubs f9,f13,f31,f28
	ctx.f9.f64 = double(float(-std::fma(ctx.f13.f64, f31.f64, -f28.f64)));
	// fmuls f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 * f31.f64));
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * f31.f64));
	// fmuls f6,f8,f31
	ctx.f6.f64 = double(float(ctx.f8.f64 * f31.f64));
	// fmsubs f5,f7,f0,f6
	ctx.f5.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, -ctx.f6.f64)));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fsubs f3,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fdivs f2,f3,f12
	ctx.f2.f64 = double(float(ctx.f3.f64 / ctx.f12.f64));
	// stfs f2,28(r31)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// b 0x824539f4
	goto loc_824539F4;
loc_824539F0:
	// stfs f25,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
loc_824539F4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822d4f78
	ctx.lr = 0x82453A00;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245C750) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8245C758;
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r6,556(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 556);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x824733a8
	ctx.lr = 0x8245C788;
	sub_824733A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8245c7dc
	if (ctx.cr0.lt) goto loc_8245C7DC;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,13
	ctx.r11.s64 = 13;
	// lwz r10,48(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// divw r11,r10,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r10.s32 / ctx.r11.s32 : 0);
	// mulli r11,r11,13
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(13));
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8245c5a8
	ctx.lr = 0x8245C7B8;
	sub_8245C5A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8245c7e8
	if (ctx.cr0.eq) goto loc_8245C7E8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r11.u32);
loc_8245C7DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
loc_8245C7E8:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// bl 0x82473330
	ctx.lr = 0x8245C7F8;
	sub_82473330(ctx, base);
	// b 0x8245c7dc
	goto loc_8245C7DC;
}

DEFINE_REX_FUNC(sub_8245DF58) {
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
	// bl 0x8245da30
	ctx.lr = 0x8245DF78;
	sub_8245DA30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8245df88
	if (ctx.cr0.eq) goto loc_8245DF88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8245DF88;
	sub_82473600(ctx, base);
loc_8245DF88:
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

DEFINE_REX_FUNC(sub_8245E730) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245E758;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245E76C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245E780;
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

DEFINE_REX_FUNC(sub_8245F480) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,31164
	ctx.r11.s64 = ctx.r11.s64 + 31164;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8245f4d0
	if (ctx.cr6.eq) goto loc_8245F4D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245F4C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82473600
	ctx.lr = 0x8245F4CC;
	sub_82473600(ctx, base);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_8245F4D0:
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

DEFINE_REX_FUNC(sub_8245FFE0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82473538
	sub_82473538(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8245FFE8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82473590
	sub_82473590(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82460008) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82246ca8
	sub_82246CA8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82460020) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8245ff78
	sub_8245FF78(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824600F0) {
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
	ctx.lr = 0x824600F8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x82460134;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82460158
	if (ctx.cr0.eq) goto loc_82460158;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82460090
	ctx.lr = 0x82460150;
	sub_82460090(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8246015c
	goto loc_8246015C;
loc_82460158:
	// li r29,0
	r29.s64 = 0;
loc_8246015C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82460170
	if (!ctx.cr6.eq) goto loc_82460170;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x824601c0
	goto loc_824601C0;
loc_82460170:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82460194;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824601a4
	if (ctx.cr0.lt) goto loc_824601A4;
	// stw r29,0(r25)
	REX_STORE_U32(r25.u32 + 0, r29.u32);
	// b 0x824601c0
	goto loc_824601C0;
loc_824601A4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824601BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82473600
	ctx.lr = 0x824601C0;
	sub_82473600(ctx, base);
loc_824601C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82464510) {
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
	ctx.lr = 0x82464518;
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,244(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// li r30,0
	r30.s64 = 0;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fdivs f29,f0,f12
	f29.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// ble cr6,0x824645f0
	if (!ctx.cr6.gt) goto loc_824645F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r28,0
	r28.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// lfs f30,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f30.f64 = double(temp.f32);
	// lfs f31,-18416(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -18416);
	f31.f64 = double(temp.f32);
loc_82464578:
	// lwz r11,252(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 252);
	// slw r10,r27,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r27.u32 << (r30.u8 & 0x3F));
	// divw r31,r11,r10
	r31.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// extsw r9,r31
	ctx.r9.s64 = r31.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * f29.f64));
	// fmadds f1,f11,f31,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f11.f64, f31.f64, f30.f64)));
	// bl 0x822d60f0
	ctx.lr = 0x824645A4;
	sub_822D60F0(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x824645c0
	if (!ctx.cr6.lt) goto loc_824645C0;
	// li r11,4
	ctx.r11.s64 = 4;
loc_824645C0:
	// srawi r10,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	ctx.r10.s64 = r31.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824645d4
	if (ctx.cr6.lt) goto loc_824645D4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_824645D4:
	// lwz r10,352(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 352);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwx r11,r10,r28
	REX_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r11.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r9,244(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 244);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82464578
	if (ctx.cr6.lt) goto loc_82464578;
loc_824645F0:
	// lwz r11,352(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 352);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,312(r29)
	REX_STORE_U32(r29.u32 + 312, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

DEFINE_REX_FUNC(sub_82469E20) {
	REX_FUNC_PROLOGUE();
	// lwz r9,52(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addic. r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// ble 0x82469e94
	if (!ctx.cr0.gt) goto loc_82469E94;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lfd f0,-15744(r6)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r6.u32 + -15744);
loc_82469E44:
	// lfd f13,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82469e7c
	if (ctx.cr6.lt) goto loc_82469E7C;
	// lfd f13,24(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r5,-12(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x82469e9c
	if (!ctx.cr6.gt) goto loc_82469E9C;
loc_82469E7C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82469e44
	if (ctx.cr6.lt) goto loc_82469E44;
loc_82469E94:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82469E9C:
	// lfd f13,0(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// lfd f11,0(r9)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// subf r10,r6,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r6.u64;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lfd f0,-15752(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -15752);
	// fmul f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// mulld r6,r7,r9
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r9.u64);
	// fctiwz f8,f10
	ctx.f8.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r5,-12(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// sradi r4,r6,20
	ctx.xer.ca = (ctx.r6.s64 < 0) & ((ctx.r6.u64 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s64 >> 20;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// subf r3,r5,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r5.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8246DA58) {
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
	ctx.lr = 0x8246DA60;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r25,4(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lhz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8246dc68
	if (!ctx.cr6.lt) goto loc_8246DC68;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// li r21,3
	r21.s64 = 3;
	// addi r22,r11,4232
	r22.s64 = ctx.r11.s64 + 4232;
	// addi r24,r10,5832
	r24.s64 = ctx.r10.s64 + 5832;
	// addi r23,r9,5592
	r23.s64 = ctx.r9.s64 + 5592;
loc_8246DAA8:
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 124);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// beq cr6,0x8246dad0
	if (ctx.cr6.eq) goto loc_8246DAD0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8246dbd8
	if (!ctx.cr6.eq) goto loc_8246DBD8;
	// b 0x8246db14
	goto loc_8246DB14;
loc_8246DAD0:
	// addi r28,r29,224
	r28.s64 = r29.s64 + 224;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82325c30
	ctx.lr = 0x8246DAEC;
	sub_82325C30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246dc68
	if (ctx.cr6.lt) goto loc_8246DC68;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82319a70
	ctx.lr = 0x8246DB00;
	sub_82319A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246dc68
	if (ctx.cr6.lt) goto loc_8246DC68;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8246db64
	if (!ctx.cr6.eq) goto loc_8246DB64;
loc_8246DB14:
	// stw r21,124(r29)
	REX_STORE_U32(r29.u32 + 124, r21.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r3,r29,224
	ctx.r3.s64 = r29.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x8246DB28;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246dc68
	if (ctx.cr6.lt) goto loc_8246DC68;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,26,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFFFF;
	// sth r10,30(r30)
	REX_STORE_U16(r30.u32 + 30, ctx.r10.u16);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r7,0,26,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x3E;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// sth r4,28(r30)
	REX_STORE_U16(r30.u32 + 28, ctx.r4.u16);
	// stw r27,124(r29)
	REX_STORE_U32(r29.u32 + 124, r27.u32);
	// b 0x8246dbd8
	goto loc_8246DBD8;
loc_8246DB64:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8246db8c
	if (!ctx.cr6.eq) goto loc_8246DB8C;
	// lhz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 32);
	// lwz r10,304(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 304);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sth r27,30(r30)
	REX_STORE_U16(r30.u32 + 30, r27.u16);
	// subf r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// sth r8,28(r30)
	REX_STORE_U16(r30.u32 + 28, ctx.r8.u16);
	// b 0x8246dbd8
	goto loc_8246DBD8;
loc_8246DB8C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82319a70
	ctx.lr = 0x8246DB98;
	sub_82319A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246dc68
	if (ctx.cr6.lt) goto loc_8246DC68;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r23
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r23.u32);
	// sth r8,28(r30)
	REX_STORE_U16(r30.u32 + 28, ctx.r8.u16);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r7,-2
	ctx.r6.s64 = ctx.r7.s64 + -2;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r5,r24
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + r24.u32);
	// sth r4,30(r30)
	REX_STORE_U16(r30.u32 + 30, ctx.r4.u16);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r10.u32);
loc_8246DBD8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246dc68
	if (ctx.cr6.lt) goto loc_8246DC68;
	// lhz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 30);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 28);
	// xor r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// subf r5,r9,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r9.u64;
	// sth r5,30(r31)
	REX_STORE_U16(r31.u32 + 30, ctx.r5.u16);
	// lhz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r26.s32, ctx.xer);
	// bge cr6,0x8246dc68
	if (!ctx.cr6.lt) goto loc_8246DC68;
	// lhz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r9.u16);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lhz r7,30(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 30);
	// lwzx r9,r11,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r6,r11,r25
	REX_STORE_U32(ctx.r11.u32 + r25.u32, ctx.r6.u32);
	// lhz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// sth r11,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r11.u16);
	// stw r27,124(r29)
	REX_STORE_U32(r29.u32 + 124, r27.u32);
	// lhz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r26.s32, ctx.xer);
	// blt cr6,0x8246daa8
	if (ctx.cr6.lt) goto loc_8246DAA8;
loc_8246DC68:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_824742F8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82474304
	if (!ctx.cr6.eq) goto loc_82474304;
	// b 0x82475dd0
	sub_82475DD0(ctx, base);
	return;
loc_82474304:
	// lwz r3,264(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82474620) {
	REX_FUNC_PROLOGUE();
	// lwz r11,184(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r7,188(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,28(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,192(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// stw r9,188(r3)
	REX_STORE_U32(ctx.r3.u32 + 188, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82474668
	if (ctx.cr6.eq) goto loc_82474668;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x82474668
	if (ctx.cr6.eq) goto loc_82474668;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, ctx.r10.u32);
loc_82474668:
	// lwz r3,268(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824756B8) {
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
	ctx.lr = 0x824756C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r28,4(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,8(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// bne cr6,0x82475708
	if (!ctx.cr6.eq) goto loc_82475708;
	// lhz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// lhz r10,18(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r10,r9,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// b 0x82475710
	goto loc_82475710;
loc_82475708:
	// lhz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
loc_82475710:
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82475734
	if (ctx.cr6.eq) goto loc_82475734;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82475734;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82475734:
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82475748;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82474990
	ctx.lr = 0x82475750;
	sub_82474990(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8247578c
	if (ctx.cr0.lt) goto loc_8247578C;
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82475780
	if (ctx.cr6.eq) goto loc_82475780;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82475780;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82475780:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x824757d8
	if (!ctx.cr6.lt) goto loc_824757D8;
loc_8247578C:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824757bc
	if (ctx.cr6.eq) goto loc_824757BC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824757BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824757BC:
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824757D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82474990
	ctx.lr = 0x824757D8;
	sub_82474990(ctx, base);
loc_824757D8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8247CDF0) {
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
	// lis r4,-32161
	ctx.r4.s64 = -2107703296;
	// lwz r0,-11600(r4)
	ctx.r0.u64 = REX_LOAD_U32(ctx.r4.u32 + -11600);
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

DEFINE_REX_FUNC(sub_824A6A08) {
	REX_FUNC_PROLOGUE();
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
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// vspltish v12,-1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltish v11,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x3)));
	// li r8,0
	ctx.r8.s64 = 0;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// vslh v31,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v63,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// bne cr6,0x824a6b34
	if (!ctx.cr6.eq) goto loc_824A6B34;
	// lvx128 v59,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v61,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v61,v59,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v58,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v62,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v4,v57,v58,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v13,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x824a6c24
	if (!ctx.cr6.gt) goto loc_824A6C24;
	// li r6,48
	ctx.r6.s64 = 48;
loc_824A6A8C:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vadduhm v9,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// vslh v12,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lvx128 v61,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vadduhm v9,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vperm128 v8,v62,v61,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v56,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v6,v9,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v12,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v55,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v55,v56,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vadduhm v9,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v3,v7,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vor v7,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmrghb v8,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v29,v0,v3
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vadduhm v28,v10,v8
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v27,v9,v30
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vor v10,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vadduhm v12,v6,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vsubshs v26,v0,v28
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vadduhm v25,v27,v2
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vor v13,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vsrah v24,v12,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v12,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vor128 v54,v63,v24
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)v24.u8)));
	// stvx128 v24,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v23,v12,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v23,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v63,v54,v23
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)v23.u8)));
	// addi r9,r9,96
	ctx.r9.s64 = ctx.r9.s64 + 96;
	// blt cr6,0x824a6a8c
	if (ctx.cr6.lt) goto loc_824A6A8C;
	// b 0x824a6c24
	goto loc_824A6C24;
loc_824A6B34:
	// lvx128 v50,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v53,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v51,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v53,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v49,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v52,v50,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v48,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v5,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v9,v48,v49,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v13,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x824a6c24
	if (!ctx.cr6.gt) goto loc_824A6C24;
loc_824A6B80:
	// vadduhm v8,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor128 v45,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// vadduhm v7,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// vslh v6,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v47,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lvx128 v46,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v1,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// vadduhm v30,v8,v6
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vperm128 v6,v46,v47,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vor128 v1,v45,v45
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v45.u8));
	// vadduhm v29,v7,v3
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v28,v30,v2
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v27,v29,v2
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v26,v5,v8
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v25,v4,v7
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vor v5,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vor v4,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vsubshs v24,v0,v26
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vsubshs v23,v0,v25
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vor v13,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v12,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vadduhm v6,v28,v24
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v3,v27,v23
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vor v10,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v9,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vsrah v22,v6,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v3,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v44,v63,v22
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)v22.u8)));
	// stvx128 v22,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// vor128 v63,v44,v21
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)v21.u8)));
	// blt cr6,0x824a6b80
	if (ctx.cr6.lt) goto loc_824A6B80;
loc_824A6C24:
	// vand128 v13,v63,v31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
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

DEFINE_REX_FUNC(sub_824B0530) {
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
	ctx.lr = 0x824B0538;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// add r31,r9,r5
	r31.u64 = ctx.r9.u64 + ctx.r5.u64;
	// vsrah v11,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// bgt cr6,0x824b06c8
	if (ctx.cr6.gt) goto loc_824B06C8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x824b0854
	if (!ctx.cr6.gt) goto loc_824B0854;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// li r8,16
	ctx.r8.s64 = 16;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r30,r4,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r29,r9,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824B0580:
	// add r11,r30,r3
	ctx.r11.u64 = r30.u64 + ctx.r3.u64;
	// lvx128 v63,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v61,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r28,r1,-128
	r28.s64 = ctx.r1.s64 + -128;
	// lvx128 v60,r30,r3
	ea = (r30.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,-112
	ctx.r3.s64 = ctx.r1.s64 + -112;
	// lvx128 v59,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v62,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v56,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v61,v58,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v2,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v8,v60,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v7,v56,v57,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrghb v1,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vmrglb v31,v0,v9
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v30,v0,v8
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v29,v0,v7
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v9,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vmrglb v28,v0,v8
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v27,v0,v7
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v8,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// vsldoi v26,v10,v2,2
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), 14));
	// vor v7,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)v29.u8));
	// vsldoi v25,v9,v31,2
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)v31.u8), 14));
	// vsldoi v24,v8,v28,2
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v28.u8), 14));
	// vaddshs v23,v10,v26
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vsldoi v22,v7,v27,2
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)v27.u8), 14));
	// vaddshs v21,v9,v25
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vaddshs v20,v8,v24
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v19,v7,v22
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vslh v18,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v20,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v14,v18,v11
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v10,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v9,v16,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v8,v15,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v7,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v6,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v5,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v4,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v55,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vpkshus128 v54,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v55,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,-120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -120);
	// lwz r9,-128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -128);
	// stvx128 v54,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,-112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -112);
	// lwz r28,-104(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -104);
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stwx r11,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r11.u32);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stwx r28,r31,r6
	REX_STORE_U32(r31.u32 + ctx.r6.u32, r28.u32);
	// bne cr6,0x824b06b0
	if (!ctx.cr6.eq) goto loc_824B06B0;
	// lwz r9,-124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// lwz r3,-116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// lwz r28,-108(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// lwz r27,-100(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// stw r9,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// stwx r3,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r3.u32);
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// stwx r27,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r27.u32);
loc_824B06B0:
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r5,r29,r5
	ctx.r5.u64 = r29.u64 + ctx.r5.u64;
	// add r31,r29,r31
	r31.u64 = r29.u64 + r31.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// bdnz 0x824b0580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B0580;
	// b 0x822d4ed0
	return;
loc_824B06C8:
	// li r11,4
	ctx.r11.s64 = 4;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r31,r4,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824B06D8:
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// add r11,r31,r3
	ctx.r11.u64 = r31.u64 + ctx.r3.u64;
	// lvx128 v53,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,-128
	r30.s64 = ctx.r1.s64 + -128;
	// lvx128 v52,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,-96
	r26.s64 = ctx.r1.s64 + -96;
	// addi r29,r1,-112
	r29.s64 = ctx.r1.s64 + -112;
	// lbz r28,16(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 16);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lbz r27,16(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// sth r8,-112(r1)
	REX_STORE_U16(ctx.r1.u32 + -112, ctx.r8.u16);
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lvx128 v51,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r28,-128(r1)
	REX_STORE_U16(ctx.r1.u32 + -128, r28.u16);
	// lvx128 v44,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r27,-96(r1)
	REX_STORE_U16(ctx.r1.u32 + -96, r27.u16);
	// lvx128 v43,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,-80
	ctx.r7.s64 = ctx.r1.s64 + -80;
	// lvx128 v48,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 16);
	// vperm128 v6,v52,v50,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v47,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v53,v48,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// sth r11,-80(r1)
	REX_STORE_U16(ctx.r1.u32 + -80, ctx.r11.u16);
	// vperm128 v5,v51,v47,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// lvx128 v45,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vmrglb v9,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v46,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v8,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v1,v3,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 14));
	// vsldoi v6,v2,v9,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 14));
	// vsldoi128 v28,v10,v45,2
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), 14));
	// vsldoi128 v24,v9,v44,2
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), 14));
	// vaddshs v30,v2,v6
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsldoi v31,v5,v8,2
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), 14));
	// vaddshs v29,v3,v1
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v23,v10,v28
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vperm128 v4,v49,v46,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsldoi128 v22,v8,v43,2
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), 14));
	// lvx128 v42,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v19,v9,v24
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v27,v5,v31
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vmrglb v6,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v26,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v18,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v17,v8,v22
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vslh v10,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v15,v6,v42,2
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), 14));
	// vaddshs v21,v26,v11
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi v16,v4,v6,2
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), 14));
	// vaddshs v20,v25,v11
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v14,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v9,v18,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v8,v17,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v3,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v5,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v1,v6,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vsrah v31,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v29,v8,v11
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vpkshus128 v41,v5,v2
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v28,v14,v11
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v27,v4,v16
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vslh v26,v1,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vpkshus128 v40,v31,v30
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vsrah v25,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v23,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vpkshus128 v39,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v22,v26,v11
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stvx128 v41,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v40,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v21,v23,v11
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v20,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v39,r9,r5
	ea = (ctx.r9.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// vsrah v19,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v38,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// stvx128 v38,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x824b06d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B06D8;
loc_824B0854:
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_824D23F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,20280
	ctx.r11.s64 = ctx.r11.s64 + 20280;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-29256
	ctx.r10.s64 = ctx.r10.s64 + -29256;
loc_824D2414:
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
	// bdnz 0x824d2414
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D2414;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,14344
	ctx.r3.s64 = ctx.r11.s64 + 14344;
	// b 0x822d5848
	sub_822D5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D2AA8) {
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
	ctx.lr = 0x824D2AB0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,7856
	ctx.r11.s64 = ctx.r11.s64 + 7856;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,4944
	r31.s64 = ctx.r11.s64 + 4944;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,4
	r30.s64 = 4;
	// addi r29,r9,17552
	r29.s64 = ctx.r9.s64 + 17552;
	// addi r28,r10,17344
	r28.s64 = ctx.r10.s64 + 17344;
	// addi r27,r11,17632
	r27.s64 = ctx.r11.s64 + 17632;
loc_824D2ADC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,-3244(r31)
	REX_STORE_U32(r31.u32 + -3244, r27.u32);
	// li r5,448
	ctx.r5.s64 = 448;
	// stw r28,-2968(r31)
	REX_STORE_U32(r31.u32 + -2968, r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,-480(r31)
	REX_STORE_U32(r31.u32 + -480, r29.u32);
	// addi r3,r31,-448
	ctx.r3.s64 = r31.s64 + -448;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// bl 0x822d5870
	ctx.lr = 0x824D2B00;
	sub_822D5870(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,5040
	r31.s64 = r31.s64 + 5040;
	// bge 0x824d2adc
	if (!ctx.cr0.lt) goto loc_824D2ADC;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,14656
	ctx.r3.s64 = ctx.r11.s64 + 14656;
	// bl 0x822d5848
	ctx.lr = 0x824D2B18;
	sub_822D5848(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824D34E8) {
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
	// li r5,480
	ctx.r5.s64 = 480;
	// addi r31,r11,24520
	r31.s64 = ctx.r11.s64 + 24520;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x822d5870
	ctx.lr = 0x824D3510;
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
	ctx.lr = 0x824D3524;
	sub_822D4FA0(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = r31.s64 + 600;
	// bl 0x822d5870
	ctx.lr = 0x824D3534;
	sub_822D5870(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
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

DEFINE_REX_FUNC(sub_824D3CB8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,26520
	ctx.r3.s64 = ctx.r11.s64 + 26520;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3E20) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,30040
	ctx.r3.s64 = ctx.r11.s64 + 30040;
	// b 0x8227ac70
	sub_8227AC70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3FA0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20002c7
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4100) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010135
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4270) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100e8
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D43F0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100dc
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4570) {
	REX_FUNC_PROLOGUE();
	// .long 0x201006b
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D46F0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010103
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4870) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000018
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D49F0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010151
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4B70) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010001
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

